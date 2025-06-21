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
  struct ServantPhotoEntity_FaceData_array *FaceList; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct ServantPhotoEntity_FaceData_array **p_FaceList_k__BackingField; // x0
  struct StandFigureBack_o *photoStandFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  __int64 v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 *v24; // x24
  __int64 v25; // x0
  __int64 *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x10
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x8
  __int64 v33; // x10
  __int64 v34; // x11
  __int64 v35; // x11
  __int64 v36; // x20
  const MethodInfo *v37; // x3
  __int64 v38; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B17C50 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantPhotoMaster___, *(_QWORD *)&formId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v6);
    sub_1BCAFF8(&ServantPhotoEntity_FaceData___TypeInfo, v7);
    sub_1BCAFF8(&ServantPhotoEntity_FaceData_TypeInfo, v8);
    sub_1BCAFF8(&int___TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v10);
    byte_4B17C50 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    this->fields._StandFigureImageId_k__BackingField,
                    (const MethodInfo_32CA3A8 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
  {
    photoStandFigureBack = this->fields.photoStandFigureBack;
    if ( photoStandFigureBack )
    {
      standFigureCollectList = photoStandFigureBack->fields.standFigureCollectList;
      if ( standFigureCollectList )
      {
        size = (unsigned int)standFigureCollectList->fields._size;
        v21 = sub_1BCB244(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v21, 0LL);
        Master_object = sub_1BCB0A0(int___TypeInfo, (unsigned int)size);
        if ( v21 )
        {
          *(_QWORD *)(v21 + 16) = Master_object;
          v24 = (__int64 *)(v21 + 16);
          sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 16), Master_object, v22, v23);
          v25 = sub_1BCB0A0(int___TypeInfo, (unsigned int)size);
          *(_QWORD *)(v21 + 24) = v25;
          v26 = (__int64 *)(v21 + 24);
          sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 24), v25, v27, v28);
          if ( (int)size < 1 )
          {
LABEL_19:
            Master_object = sub_1BCB0A0(ServantPhotoEntity_FaceData___TypeInfo, 1LL);
            if ( Master_object )
            {
              v36 = Master_object;
              Master_object = sub_1BCB134(v21, *(_QWORD *)(*(_QWORD *)Master_object + 64LL));
              if ( !Master_object )
              {
                v38 = sub_1BCB278();
                sub_1BCB120(v38, 0LL);
              }
              if ( *(_DWORD *)(v36 + 24) )
              {
                *(_QWORD *)(v36 + 32) = v21;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 32), v21, v29, v37);
                this->fields._FaceList_k__BackingField = (struct ServantPhotoEntity_FaceData_array *)v36;
                p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
                v16 = v36;
                goto LABEL_23;
              }
LABEL_24:
              sub_1BCB25C(Master_object, v12, v29);
            }
          }
          else
          {
            v30 = *v24;
            if ( *v24 )
            {
              v31 = *(unsigned int *)(v30 + 24);
              v32 = 0LL;
              v33 = v30 + 32;
              while ( v32 < v31 )
              {
                *(_DWORD *)(v33 + 4 * v32) = 0;
                v34 = *v26;
                if ( !*v26 )
                  goto LABEL_25;
                if ( v32 >= *(unsigned int *)(v34 + 24) )
                  break;
                v35 = v34 + 4 * v32++;
                *(_DWORD *)(v35 + 32) = formId;
                if ( size == v32 )
                  goto LABEL_19;
              }
              goto LABEL_24;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCB254(Master_object, v12);
  }
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_25;
  FaceList = ServantPhotoEntity__GetFaceList((ServantPhotoEntity_o *)entity, formId, 0LL);
  this->fields._FaceList_k__BackingField = FaceList;
  v16 = (int)FaceList;
  p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
LABEL_23:
  sub_1BCAF9C((CGThumbnailListItem_o *)p_FaceList_k__BackingField, v16, v14, v15);
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
    sub_1BCB254(0LL, method);
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
    sub_1BCB254(this, method);
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
  __int64 v13; // x20
  System_Collections_Generic_List_TSource__o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  PhotoStandFigureComponent___c_c *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FaceList_k__BackingField; // x21
  System_Func_object__object__o *_9__24_0; // x22
  Il2CppObject *v21; // x23
  struct PhotoStandFigureComponent___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  StandFigureBack_o *photoStandFigureBack; // x8
  System_Collections_Generic_List_int__o *v28; // x19
  UIStandFigureR_o *SvtStandFigure; // x21
  System_Action_o *v30; // x22

  if ( (byte_4B17C51 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1BCAFF8(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo, v8);
    sub_1BCAFF8(&Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__24_0__, v9);
    sub_1BCAFF8(&Method_PhotoStandFigureComponent___c__DisplayClass24_0__PreLoadFormAssets_b__1__, v10);
    sub_1BCAFF8(&PhotoStandFigureComponent___c__DisplayClass24_0_TypeInfo, v11);
    sub_1BCAFF8(&PhotoStandFigureComponent___c_TypeInfo, v12);
    byte_4B17C51 = 1;
  }
  v13 = sub_1BCB244(PhotoStandFigureComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)callback, v16, v17);
  v18 = PhotoStandFigureComponent___c_TypeInfo;
  FaceList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FaceList_k__BackingField;
  if ( !PhotoStandFigureComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoStandFigureComponent___c_TypeInfo);
    v18 = PhotoStandFigureComponent___c_TypeInfo;
  }
  _9__24_0 = (System_Func_object__object__o *)v18->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = PhotoStandFigureComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__24_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__24_0,
      v21,
      Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__24_0__,
      0LL);
    static_fields = PhotoStandFigureComponent___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__24_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               FaceList_k__BackingField,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__24_0,
                                                               (const MethodInfo_3051470 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
  v26 = System_Linq_Enumerable__Distinct_int_(
          v25,
          (const MethodInfo_3039CB8 *)Method_System_Linq_Enumerable_Distinct_int___);
  v14 = System_Linq_Enumerable__ToList_int_(
          v26,
          (const MethodInfo_305B8EC *)Method_System_Linq_Enumerable_ToList_int___);
  photoStandFigureBack = this->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (v28 = (System_Collections_Generic_List_int__o *)v14,
        SvtStandFigure = StandFigureBack__GetSvtStandFigure(photoStandFigureBack, 0, 0LL),
        v30 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v13,
          Method_PhotoStandFigureComponent___c__DisplayClass24_0__PreLoadFormAssets_b__1__,
          0LL),
        !SvtStandFigure) )
  {
LABEL_13:
    sub_1BCB254(v14, v15);
  }
  UIStandFigureR__PreloadFormAssets(SvtStandFigure, v28, v30, 0LL);
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
  if ( (byte_4B17C52 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, isNext);
    this = (PhotoStandFigureComponent_o *)sub_1BCAFF8(
                                            &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                            v9);
    byte_4B17C52 = 1;
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
      this = (PhotoStandFigureComponent_o *)UnityEngine_Random__Range_70096296(0, v11->max_length, 0LL);
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
    sub_1BCB25C(this, isNext, callbackFunc);
  photoStandFigureBack = v8->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)photoStandFigureBack->fields.standFigureCollectList) == 0LL )
  {
LABEL_30:
    sub_1BCB254(this, isNext);
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
                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (PhotoStandFigureComponent_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v16 )
          v21 = 0LL;
        else
          v21 = callbackFunc;
        UIStandFigureR__SetFace_43192364((UIStandFigureR_o *)this, v19, v20, v21, 0.0, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._FaceList_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._FaceList_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B17C53 & 1) == 0 )
  {
    sub_1BCAFF8(&PhotoStandFigureComponent___c_TypeInfo, v1);
    byte_4B17C53 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(PhotoStandFigureComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PhotoStandFigureComponent___c_TypeInfo->static_fields->__9 = (struct PhotoStandFigureComponent___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)PhotoStandFigureComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
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