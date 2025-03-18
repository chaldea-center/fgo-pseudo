void __fastcall PhotoStandFigureComponent___ctor(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoStandFigureComponent__Awake(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoStandFigureComponent__GetPhotoTargetFaceList(
        PhotoStandFigureComponent_o *this,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 Master_object; // x0
  __int64 v12; // x1
  struct ServantPhotoEntity_FaceData_array **p_FaceList_k__BackingField; // x0
  struct StandFigureBack_o *photoStandFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  ServantPhotoEntity_FaceData_o *v17; // x21
  ServantPhotoEntity_FaceData_Fields *p_fields; // x24
  struct System_Int32_array **p_multiForm; // x23
  struct System_Int32_array *multiFace; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v22; // x8
  int32_t *v23; // x10
  struct System_Int32_array *v24; // x11
  __int64 v25; // x11
  struct ServantPhotoEntity_FaceData_array *v26; // x20
  __int64 v27; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1D816 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantPhotoMaster___, *(_QWORD *)&formId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v6);
    sub_1C3B764(&ServantPhotoEntity_FaceData___TypeInfo, v7);
    sub_1C3B764(&ServantPhotoEntity_FaceData_TypeInfo, v8);
    sub_1C3B764(&int___TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v10);
    byte_4C1D816 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    this->fields._StandFigureImageId_k__BackingField,
                    (const MethodInfo_329D3F0 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
  {
    photoStandFigureBack = this->fields.photoStandFigureBack;
    if ( photoStandFigureBack )
    {
      standFigureCollectList = photoStandFigureBack->fields.standFigureCollectList;
      if ( standFigureCollectList )
      {
        size = (unsigned int)standFigureCollectList->fields._size;
        v17 = (ServantPhotoEntity_FaceData_o *)sub_1C3B9B0(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor(v17, 0LL);
        Master_object = sub_1C3B80C(int___TypeInfo, (unsigned int)size);
        if ( v17 )
        {
          v17->fields.multiFace = (struct System_Int32_array *)Master_object;
          p_fields = &v17->fields;
          sub_1C3B708(&v17->fields);
          v17->fields.multiForm = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, (unsigned int)size);
          p_multiForm = &v17->fields.multiForm;
          Master_object = sub_1C3B708(&v17->fields.multiForm);
          if ( (int)size < 1 )
          {
LABEL_19:
            Master_object = sub_1C3B80C(ServantPhotoEntity_FaceData___TypeInfo, 1LL);
            if ( Master_object )
            {
              v26 = (struct ServantPhotoEntity_FaceData_array *)Master_object;
              Master_object = sub_1C3B8A0(v17, *(_QWORD *)(*(_QWORD *)Master_object + 64LL));
              if ( !Master_object )
              {
                v27 = sub_1C3B9E4();
                sub_1C3B88C(v27, 0LL);
              }
              if ( v26->max_length )
              {
                v26->m_Items[0] = v17;
                sub_1C3B708(v26->m_Items);
                this->fields._FaceList_k__BackingField = v26;
                p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
                goto LABEL_23;
              }
LABEL_24:
              sub_1C3B9C8(Master_object, v12);
            }
          }
          else
          {
            multiFace = p_fields->multiFace;
            if ( p_fields->multiFace )
            {
              max_length = multiFace->max_length;
              v22 = 0LL;
              v23 = &multiFace->m_Items[1];
              while ( v22 < max_length )
              {
                v23[v22] = 0;
                v24 = *p_multiForm;
                if ( !*p_multiForm )
                  goto LABEL_25;
                if ( v22 >= v24->max_length )
                  break;
                v25 = (__int64)v24 + 4 * v22++;
                *(_DWORD *)(v25 + 32) = formId;
                if ( size == v22 )
                  goto LABEL_19;
              }
              goto LABEL_24;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C3B9C0(Master_object, v12);
  }
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_25;
  this->fields._FaceList_k__BackingField = ServantPhotoEntity__GetFaceList((ServantPhotoEntity_o *)entity, formId, 0LL);
  p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
LABEL_23:
  sub_1C3B708(p_FaceList_k__BackingField);
}


StandFigureBack_o *__fastcall PhotoStandFigureComponent__GetStandFigureBack(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.photoStandFigureBack;
}


void __fastcall PhotoStandFigureComponent__Init(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *photoStandFigureBack; // x0

  photoStandFigureBack = this->fields.photoStandFigureBack;
  if ( !photoStandFigureBack )
    sub_1C3B9C0(0LL, method);
  StandFigureBack__Init(photoStandFigureBack, 0LL);
  this->fields._FaceListIndex_k__BackingField = 0;
  this->fields._UserSvtId_k__BackingField = 0LL;
  *(_QWORD *)&this->fields._ImageLimitCount_k__BackingField = 0LL;
}


void __fastcall PhotoStandFigureComponent__NextRandomFaceListIndex(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x9
  int32_t v3; // w8

  FaceList_k__BackingField = this->fields._FaceList_k__BackingField;
  v3 = this->fields._FaceListIndex_k__BackingField + 1;
  this->fields._FaceListIndex_k__BackingField = v3;
  if ( !FaceList_k__BackingField )
    sub_1C3B9C0(this, method);
  if ( v3 >= (signed int)FaceList_k__BackingField->max_length )
    this->fields._FaceListIndex_k__BackingField = 0;
}


void __fastcall PhotoStandFigureComponent__PreLoadFormAssets(
        PhotoStandFigureComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x20
  System_Collections_Generic_List_TSource__o *v14; // x0
  __int64 v15; // x1
  PhotoStandFigureComponent___c_c *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FaceList_k__BackingField; // x21
  System_Func_object__object__o *_9__24_0; // x22
  Il2CppObject *v19; // x23
  struct PhotoStandFigureComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  StandFigureBack_o *photoStandFigureBack; // x8
  System_Collections_Generic_List_int__o *v24; // x19
  UIStandFigureR_o *SvtStandFigure; // x21
  System_Action_o *v26; // x22

  if ( (byte_4C1D817 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1C3B764(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo, v8);
    sub_1C3B764(&Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__24_0__, v9);
    sub_1C3B764(&Method_PhotoStandFigureComponent___c__DisplayClass24_0__PreLoadFormAssets_b__1__, v10);
    sub_1C3B764(&PhotoStandFigureComponent___c__DisplayClass24_0_TypeInfo, v11);
    sub_1C3B764(&PhotoStandFigureComponent___c_TypeInfo, v12);
    byte_4C1D817 = 1;
  }
  v13 = (Il2CppObject *)sub_1C3B9B0(PhotoStandFigureComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  v13[1].klass = (Il2CppClass *)callback;
  sub_1C3B708(&v13[1]);
  v16 = PhotoStandFigureComponent___c_TypeInfo;
  FaceList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FaceList_k__BackingField;
  if ( !PhotoStandFigureComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoStandFigureComponent___c_TypeInfo);
    v16 = PhotoStandFigureComponent___c_TypeInfo;
  }
  _9__24_0 = (System_Func_object__object__o *)v16->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = PhotoStandFigureComponent___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__24_0 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__24_0,
      v19,
      Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__24_0__,
      0LL);
    static_fields = PhotoStandFigureComponent___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__24_0;
    sub_1C3B708(&static_fields->__9__24_0);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               FaceList_k__BackingField,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__24_0,
                                                               (const MethodInfo_3024FB0 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
  v22 = System_Linq_Enumerable__Distinct_int_(
          v21,
          (const MethodInfo_300DEBC *)Method_System_Linq_Enumerable_Distinct_int___);
  v14 = System_Linq_Enumerable__ToList_int_(
          v22,
          (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
  photoStandFigureBack = this->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (v24 = (System_Collections_Generic_List_int__o *)v14,
        SvtStandFigure = StandFigureBack__GetSvtStandFigure(photoStandFigureBack, 0, 0LL),
        v26 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          v13,
          Method_PhotoStandFigureComponent___c__DisplayClass24_0__PreLoadFormAssets_b__1__,
          0LL),
        !SvtStandFigure) )
  {
LABEL_13:
    sub_1C3B9C0(v14, v15);
  }
  UIStandFigureR__PreloadFormAssets(SvtStandFigure, v24, v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoStandFigureComponent__SetFacePhotoServant(
        PhotoStandFigureComponent_o *this,
        bool isNext,
        System_Action_o *callbackFunc,
        int32_t faceListIndex,
        const MethodInfo *method)
{
  PhotoStandFigureComponent_o *v8; // x21
  __int64 v9; // x1
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  struct ServantPhotoEntity_FaceData_array *v11; // x8
  struct StandFigureBack_o *photoStandFigureBack; // x9
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  __int64 size; // x24
  ServantPhotoEntity_FaceData_o *v15; // x25
  unsigned __int64 v16; // x20
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v19; // w22
  int32_t v20; // w23
  System_Action_o *v21; // x3

  v8 = this;
  if ( (byte_4C1D818 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, isNext);
    this = (PhotoStandFigureComponent_o *)sub_1C3B764(
                                            &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                            v9);
    byte_4C1D818 = 1;
  }
  if ( isNext )
  {
    FaceList_k__BackingField = v8->fields._FaceList_k__BackingField;
    faceListIndex = v8->fields._FaceListIndex_k__BackingField + 1;
    v8->fields._FaceListIndex_k__BackingField = faceListIndex;
    if ( !FaceList_k__BackingField )
      goto LABEL_30;
    if ( faceListIndex >= (signed int)FaceList_k__BackingField->max_length )
    {
      faceListIndex = 0;
      v8->fields._FaceListIndex_k__BackingField = 0;
    }
  }
  else
  {
    if ( faceListIndex <= 0 )
    {
      v11 = v8->fields._FaceList_k__BackingField;
      if ( !v11 )
        goto LABEL_30;
      this = (PhotoStandFigureComponent_o *)UnityEngine_Random__Range_71082488(0, v11->max_length, 0LL);
      faceListIndex = (int)this;
    }
    else if ( !v8 )
    {
      goto LABEL_30;
    }
    FaceList_k__BackingField = v8->fields._FaceList_k__BackingField;
    v8->fields._FaceListIndex_k__BackingField = faceListIndex;
    if ( !FaceList_k__BackingField )
      goto LABEL_30;
  }
  if ( faceListIndex >= FaceList_k__BackingField->max_length )
LABEL_31:
    sub_1C3B9C8(this, isNext);
  photoStandFigureBack = v8->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)photoStandFigureBack->fields.standFigureCollectList) == 0LL )
  {
LABEL_30:
    sub_1C3B9C0(this, isNext);
  }
  size = (unsigned int)standFigureCollectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = FaceList_k__BackingField->m_Items[faceListIndex];
    if ( v15 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        multiFace = v15->fields.multiFace;
        if ( !multiFace )
          break;
        if ( v16 >= multiFace->max_length )
          goto LABEL_31;
        multiForm = v15->fields.multiForm;
        if ( !multiForm )
          break;
        if ( v16 >= multiForm->max_length )
          goto LABEL_31;
        v19 = multiFace->m_Items[v16 + 1];
        v20 = multiForm->m_Items[v16 + 1];
        this = (PhotoStandFigureComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                standFigureCollectList,
                                                v16,
                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (PhotoStandFigureComponent_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v16 )
          v21 = 0LL;
        else
          v21 = callbackFunc;
        UIStandFigureR__SetFace_42532884((UIStandFigureR_o *)this, v19, v20, v21, 0.0, 0LL);
        if ( size == ++v16 )
          return;
      }
    }
    goto LABEL_30;
  }
}


ServantPhotoEntity_FaceData_array *__fastcall PhotoStandFigureComponent__get_FaceList(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._FaceList_k__BackingField;
}


int32_t __fastcall PhotoStandFigureComponent__get_FaceListIndex(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._FaceListIndex_k__BackingField;
}


int32_t __fastcall PhotoStandFigureComponent__get_ImageLimitCount(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._ImageLimitCount_k__BackingField;
}


int32_t __fastcall PhotoStandFigureComponent__get_StandFigureImageId(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._StandFigureImageId_k__BackingField;
}


int64_t __fastcall PhotoStandFigureComponent__get_UserSvtId(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._UserSvtId_k__BackingField;
}


void __fastcall PhotoStandFigureComponent__set_FaceList(
        PhotoStandFigureComponent_o *this,
        ServantPhotoEntity_FaceData_array *value,
        const MethodInfo *method)
{
  this->fields._FaceList_k__BackingField = value;
  sub_1C3B708(&this->fields._FaceList_k__BackingField);
}


void __fastcall PhotoStandFigureComponent__set_FaceListIndex(
        PhotoStandFigureComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FaceListIndex_k__BackingField = value;
}


void __fastcall PhotoStandFigureComponent__set_ImageLimitCount(
        PhotoStandFigureComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ImageLimitCount_k__BackingField = value;
}


void __fastcall PhotoStandFigureComponent__set_StandFigureImageId(
        PhotoStandFigureComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._StandFigureImageId_k__BackingField = value;
}


void __fastcall PhotoStandFigureComponent__set_UserSvtId(
        PhotoStandFigureComponent_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserSvtId_k__BackingField = value;
}


void __fastcall PhotoStandFigureComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1D819 & 1) == 0 )
  {
    sub_1C3B764(&PhotoStandFigureComponent___c_TypeInfo, v1);
    byte_4C1D819 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(PhotoStandFigureComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PhotoStandFigureComponent___c_TypeInfo->static_fields->__9 = (struct PhotoStandFigureComponent___c_o *)v2;
  sub_1C3B708(PhotoStandFigureComponent___c_TypeInfo->static_fields);
}


void __fastcall PhotoStandFigureComponent___c___ctor(PhotoStandFigureComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall PhotoStandFigureComponent___c___PreLoadFormAssets_b__24_0(
        PhotoStandFigureComponent___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_1C3B9C0(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void __fastcall PhotoStandFigureComponent___c__DisplayClass24_0___ctor(
        PhotoStandFigureComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoStandFigureComponent___c__DisplayClass24_0___PreLoadFormAssets_b__1(
        PhotoStandFigureComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}