void PhotoStandFigureComponent___ctor(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void PhotoStandFigureComponent__Awake(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  ;
}


void PhotoStandFigureComponent__GetPhotoTargetFaceList(
        PhotoStandFigureComponent_o *this,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  struct ServantPhotoEntity_FaceData_array *FaceList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct ServantPhotoEntity_FaceData_array **p_FaceList_k__BackingField; // x0
  struct StandFigureBack_o *photoStandFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  __int64 v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 *v17; // x24
  __int64 v18; // x0
  __int64 *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x10
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x8
  __int64 v25; // x10
  __int64 v26; // x11
  __int64 v27; // x11
  __int64 v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C33057 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C32C20(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_1C32C20(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    byte_4C33057 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    this->fields._StandFigureImageId_k__BackingField,
                    (const MethodInfo_3398DE0 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
  {
    photoStandFigureBack = this->fields.photoStandFigureBack;
    if ( photoStandFigureBack )
    {
      standFigureCollectList = photoStandFigureBack->fields.standFigureCollectList;
      if ( standFigureCollectList )
      {
        size = (unsigned int)standFigureCollectList->fields._size;
        v14 = sub_1C32E6C(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v14, 0);
        Master_object = sub_1C32CC8(int___TypeInfo, (unsigned int)size);
        if ( v14 )
        {
          *(_QWORD *)(v14 + 16) = Master_object;
          v17 = (__int64 *)(v14 + 16);
          sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 16), Master_object, v15, v16);
          v18 = sub_1C32CC8(int___TypeInfo, (unsigned int)size);
          *(_QWORD *)(v14 + 24) = v18;
          v19 = (__int64 *)(v14 + 24);
          sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 24), v18, v20, v21);
          if ( (int)size < 1 )
          {
LABEL_19:
            Master_object = sub_1C32CC8(ServantPhotoEntity_FaceData___TypeInfo, 1);
            if ( Master_object )
            {
              v28 = Master_object;
              Master_object = sub_1C32D5C(v14, *(_QWORD *)(*(_QWORD *)Master_object + 64LL));
              if ( !Master_object )
              {
                v31 = sub_1C32EA0();
                sub_1C32D48(v31, 0);
              }
              if ( *(_DWORD *)(v28 + 24) )
              {
                *(_QWORD *)(v28 + 32) = v14;
                sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 32), v14, v29, v30);
                this->fields._FaceList_k__BackingField = (struct ServantPhotoEntity_FaceData_array *)v28;
                p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
                v9 = v28;
                goto LABEL_23;
              }
LABEL_24:
              sub_1C32E84(Master_object);
            }
          }
          else
          {
            v22 = *v17;
            if ( *v17 )
            {
              v23 = *(unsigned int *)(v22 + 24);
              v24 = 0;
              v25 = v22 + 32;
              while ( v24 < v23 )
              {
                *(_DWORD *)(v25 + 4 * v24) = 0;
                v26 = *v19;
                if ( !*v19 )
                  goto LABEL_25;
                if ( v24 >= *(unsigned int *)(v26 + 24) )
                  break;
                v27 = v26 + 4 * v24++;
                *(_DWORD *)(v27 + 32) = formId;
                if ( size == v24 )
                  goto LABEL_19;
              }
              goto LABEL_24;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C32E7C(Master_object);
  }
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_25;
  FaceList = ServantPhotoEntity__GetFaceList((ServantPhotoEntity_o *)entity, formId, 0);
  this->fields._FaceList_k__BackingField = FaceList;
  v9 = (int)FaceList;
  p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
LABEL_23:
  sub_1C32BC4((CGThumbnailListItem_o *)p_FaceList_k__BackingField, v9, v7, v8);
}


StandFigureBack_o *PhotoStandFigureComponent__GetStandFigureBack(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.photoStandFigureBack;
}


void PhotoStandFigureComponent__Init(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *photoStandFigureBack; // x0

  photoStandFigureBack = this->fields.photoStandFigureBack;
  if ( !photoStandFigureBack )
    sub_1C32E7C(0);
  StandFigureBack__Init(photoStandFigureBack, 0);
  this->fields._FaceListIndex_k__BackingField = 0;
  this->fields._UserSvtId_k__BackingField = 0;
  *(_QWORD *)&this->fields._ImageLimitCount_k__BackingField = 0;
}


void PhotoStandFigureComponent__NextRandomFaceListIndex(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x9
  int32_t v3; // w8

  FaceList_k__BackingField = this->fields._FaceList_k__BackingField;
  v3 = this->fields._FaceListIndex_k__BackingField + 1;
  this->fields._FaceListIndex_k__BackingField = v3;
  if ( !FaceList_k__BackingField )
    sub_1C32E7C(this);
  if ( v3 >= SLODWORD(FaceList_k__BackingField->max_length) )
    this->fields._FaceListIndex_k__BackingField = 0;
}


void PhotoStandFigureComponent__PreLoadFormAssets(
        PhotoStandFigureComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_TSource__o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  PhotoStandFigureComponent___c_c *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FaceList_k__BackingField; // x21
  System_Func_object__object__o *_9__24_0; // x22
  Il2CppObject *v12; // x23
  struct PhotoStandFigureComponent___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  StandFigureBack_o *photoStandFigureBack; // x8
  System_Collections_Generic_List_int__o *v19; // x19
  UIStandFigureR_o *SvtStandFigure; // x21
  System_Action_o *v21; // x22

  if ( (byte_4C33058 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    sub_1C32C20(&Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__24_0__);
    sub_1C32C20(&Method_PhotoStandFigureComponent___c__DisplayClass24_0__PreLoadFormAssets_b__1__);
    sub_1C32C20(&PhotoStandFigureComponent___c__DisplayClass24_0_TypeInfo);
    sub_1C32C20(&PhotoStandFigureComponent___c_TypeInfo);
    byte_4C33058 = 1;
  }
  v5 = sub_1C32E6C(PhotoStandFigureComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  v9 = PhotoStandFigureComponent___c_TypeInfo;
  FaceList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FaceList_k__BackingField;
  if ( !PhotoStandFigureComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoStandFigureComponent___c_TypeInfo);
    v9 = PhotoStandFigureComponent___c_TypeInfo;
  }
  _9__24_0 = (System_Func_object__object__o *)v9->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = PhotoStandFigureComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__24_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__24_0,
      v12,
      Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__24_0__,
      0);
    static_fields = PhotoStandFigureComponent___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__24_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               FaceList_k__BackingField,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__24_0,
                                                               (const MethodInfo_311683C *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
  v17 = System_Linq_Enumerable__Distinct_int_(
          v16,
          (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
  v6 = System_Linq_Enumerable__ToList_int_(v17, (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
  photoStandFigureBack = this->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (v19 = (System_Collections_Generic_List_int__o *)v6,
        SvtStandFigure = StandFigureBack__GetSvtStandFigure(photoStandFigureBack, 0, 0),
        v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_PhotoStandFigureComponent___c__DisplayClass24_0__PreLoadFormAssets_b__1__,
          0),
        !SvtStandFigure) )
  {
LABEL_13:
    sub_1C32E7C(v6);
  }
  UIStandFigureR__PreloadFormAssets(SvtStandFigure, v19, v21, 0);
}


void PhotoStandFigureComponent__SetFacePhotoServant(
        PhotoStandFigureComponent_o *this,
        bool isNext,
        System_Action_o *callbackFunc,
        int32_t faceListIndex,
        const MethodInfo *method)
{
  PhotoStandFigureComponent_o *v8; // x21
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  struct ServantPhotoEntity_FaceData_array *v10; // x8
  struct StandFigureBack_o *photoStandFigureBack; // x9
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  __int64 size; // x24
  ServantPhotoEntity_FaceData_o *v14; // x25
  unsigned __int64 v15; // x20
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v18; // w22
  int32_t v19; // w23
  System_Action_o *v20; // x3

  v8 = this;
  if ( (byte_4C33059 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    this = (PhotoStandFigureComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C33059 = 1;
  }
  if ( isNext )
  {
    FaceList_k__BackingField = v8->fields._FaceList_k__BackingField;
    faceListIndex = v8->fields._FaceListIndex_k__BackingField + 1;
    v8->fields._FaceListIndex_k__BackingField = faceListIndex;
    if ( !FaceList_k__BackingField )
      goto LABEL_30;
    if ( faceListIndex >= SLODWORD(FaceList_k__BackingField->max_length) )
    {
      faceListIndex = 0;
      v8->fields._FaceListIndex_k__BackingField = 0;
    }
  }
  else
  {
    if ( faceListIndex <= 0 )
    {
      v10 = v8->fields._FaceList_k__BackingField;
      if ( !v10 )
        goto LABEL_30;
      this = (PhotoStandFigureComponent_o *)UnityEngine_Random__Range_71183860(0, v10->max_length, 0);
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
  if ( (unsigned int)faceListIndex >= LODWORD(FaceList_k__BackingField->max_length) )
LABEL_31:
    sub_1C32E84(this);
  photoStandFigureBack = v8->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)photoStandFigureBack->fields.standFigureCollectList) == 0 )
  {
LABEL_30:
    sub_1C32E7C(this);
  }
  size = (unsigned int)standFigureCollectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = FaceList_k__BackingField->m_Items[faceListIndex];
    if ( v14 )
    {
      v15 = 0;
      while ( 1 )
      {
        multiFace = v14->fields.multiFace;
        if ( !multiFace )
          break;
        if ( v15 >= LODWORD(multiFace->max_length) )
          goto LABEL_31;
        multiForm = v14->fields.multiForm;
        if ( !multiForm )
          break;
        if ( v15 >= LODWORD(multiForm->max_length) )
          goto LABEL_31;
        v18 = multiFace->m_Items[v15];
        v19 = multiForm->m_Items[v15];
        this = (PhotoStandFigureComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                standFigureCollectList,
                                                v15,
                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (PhotoStandFigureComponent_o *)this->fields.m_CancellationTokenSource;
        if ( !this )
          break;
        if ( v15 )
          v20 = 0;
        else
          v20 = callbackFunc;
        UIStandFigureR__SetFace_43959868((UIStandFigureR_o *)this, v18, v19, v20, 0.0, 0);
        if ( size == ++v15 )
          return;
      }
    }
    goto LABEL_30;
  }
}


ServantPhotoEntity_FaceData_array *PhotoStandFigureComponent__get_FaceList(
        PhotoStandFigureComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._FaceList_k__BackingField;
}


int32_t PhotoStandFigureComponent__get_FaceListIndex(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  return this->fields._FaceListIndex_k__BackingField;
}


int32_t PhotoStandFigureComponent__get_ImageLimitCount(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  return this->fields._ImageLimitCount_k__BackingField;
}


int32_t PhotoStandFigureComponent__get_StandFigureImageId(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  return this->fields._StandFigureImageId_k__BackingField;
}


int64_t PhotoStandFigureComponent__get_UserSvtId(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  return this->fields._UserSvtId_k__BackingField;
}


void PhotoStandFigureComponent__set_FaceList(
        PhotoStandFigureComponent_o *this,
        ServantPhotoEntity_FaceData_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FaceList_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._FaceList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PhotoStandFigureComponent__set_FaceListIndex(
        PhotoStandFigureComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FaceListIndex_k__BackingField = value;
}


void PhotoStandFigureComponent__set_ImageLimitCount(
        PhotoStandFigureComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ImageLimitCount_k__BackingField = value;
}


void PhotoStandFigureComponent__set_StandFigureImageId(
        PhotoStandFigureComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._StandFigureImageId_k__BackingField = value;
}


void PhotoStandFigureComponent__set_UserSvtId(
        PhotoStandFigureComponent_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserSvtId_k__BackingField = value;
}


void PhotoStandFigureComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3305A & 1) == 0 )
  {
    sub_1C32C20(&PhotoStandFigureComponent___c_TypeInfo);
    byte_4C3305A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(PhotoStandFigureComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoStandFigureComponent___c_TypeInfo->static_fields->__9 = (struct PhotoStandFigureComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)PhotoStandFigureComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PhotoStandFigureComponent___c___ctor(PhotoStandFigureComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *PhotoStandFigureComponent___c___PreLoadFormAssets_b__24_0(
        PhotoStandFigureComponent___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_1C32E7C(this);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void PhotoStandFigureComponent___c__DisplayClass24_0___ctor(
        PhotoStandFigureComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoStandFigureComponent___c__DisplayClass24_0___PreLoadFormAssets_b__1(
        PhotoStandFigureComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}