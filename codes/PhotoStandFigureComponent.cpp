void PhotoStandFigureComponent___ctor(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void PhotoStandFigureComponent__Awake(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void PhotoStandFigureComponent__GetPhotoTargetFaceList(
        PhotoStandFigureComponent_o *this,
        int32_t formId,
        const MethodInfo *method)
{
  int v5; // w8
  __int64 Master_object; // x0
  __int64 v7; // x1
  struct ServantPhotoEntity_FaceData_array *FaceList; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w1
  struct ServantPhotoEntity_FaceData_array **p_FaceList_k__BackingField; // x0
  struct StandFigureBack_o *photoStandFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  __int64 size; // x22
  __int64 v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 *v27; // x24
  __int64 v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x10
  __int64 v36; // x9
  unsigned __int64 v37; // x8
  __int64 v38; // x10
  __int64 v39; // x11
  __int64 v40; // x11
  __int64 v41; // x20
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5933B33 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_21FFC50(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_21FFC50(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    byte_5933B33 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&formId, method);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    this->fields._StandFigureImageId_k__BackingField,
                    (const MethodInfo_3EDFA34 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
  {
    photoStandFigureBack = this->fields.photoStandFigureBack;
    if ( photoStandFigureBack )
    {
      standFigureCollectList = photoStandFigureBack->fields.standFigureCollectList;
      if ( standFigureCollectList )
      {
        size = (unsigned int)standFigureCollectList->fields._size;
        v20 = sub_21FFEBC(ServantPhotoEntity_FaceData_TypeInfo);
        ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v20, 0);
        Master_object = sub_21FFD10(int___TypeInfo, (unsigned int)size);
        if ( v20 )
        {
          *(_QWORD *)(v20 + 16) = Master_object;
          v27 = (__int64 *)(v20 + 16);
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 16), Master_object, v21, v22, v23, v24, v25, v26);
          v28 = sub_21FFD10(int___TypeInfo, (unsigned int)size);
          *(_QWORD *)(v20 + 24) = v28;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 24), v28, v29, v30, v31, v32, v33, v34);
          if ( (int)size < 1 )
          {
LABEL_19:
            Master_object = sub_21FFD10(ServantPhotoEntity_FaceData___TypeInfo, 1);
            if ( Master_object )
            {
              v41 = Master_object;
              Master_object = sub_21FFDA4(v20, *(_QWORD *)(*(_QWORD *)Master_object + 64LL));
              if ( !Master_object )
              {
                v49 = sub_21FFEF0(0, v42);
                sub_21FFD90(v49, 0);
              }
              if ( *(_DWORD *)(v41 + 24) )
              {
                *(_QWORD *)(v41 + 32) = v20;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 32), v20, v43, v44, v45, v46, v47, v48);
                this->fields._FaceList_k__BackingField = (struct ServantPhotoEntity_FaceData_array *)v41;
                p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
                v15 = v41;
                goto LABEL_23;
              }
LABEL_24:
              sub_21FFED4(Master_object);
            }
          }
          else
          {
            v35 = *v27;
            if ( *v27 )
            {
              v36 = *(unsigned int *)(v35 + 24);
              v37 = 0;
              v38 = v35 + 32;
              while ( v36 != v37 )
              {
                v39 = *(_QWORD *)(v20 + 24);
                *(_DWORD *)(v38 + 4 * v37) = 0;
                if ( !v39 )
                  goto LABEL_25;
                if ( v37 >= *(unsigned int *)(v39 + 24) )
                  break;
                v40 = v39 + 4 * v37++;
                *(_DWORD *)(v40 + 32) = formId;
                if ( size == v37 )
                  goto LABEL_19;
              }
              goto LABEL_24;
            }
          }
        }
      }
    }
LABEL_25:
    sub_21FFECC(Master_object, v7);
  }
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_25;
  FaceList = ServantPhotoEntity__GetFaceList((ServantPhotoEntity_o *)entity, formId, 0);
  v15 = (int)FaceList;
  this->fields._FaceList_k__BackingField = FaceList;
  p_FaceList_k__BackingField = &this->fields._FaceList_k__BackingField;
LABEL_23:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_FaceList_k__BackingField, v15, v9, v10, v11, v12, v13, v14);
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
    sub_21FFECC(0, method);
  StandFigureBack__Init(photoStandFigureBack, 0);
  this->fields._FaceListIndex_k__BackingField = 0;
  this->fields._UserSvtId_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtId_k__BackingField = 0;
  this->fields._StandFigureImageId_k__BackingField = 0;
}


void PhotoStandFigureComponent__NextRandomFaceListIndex(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x9
  int32_t v3; // w8

  FaceList_k__BackingField = this->fields._FaceList_k__BackingField;
  v3 = this->fields._FaceListIndex_k__BackingField + 1;
  this->fields._FaceListIndex_k__BackingField = v3;
  if ( !FaceList_k__BackingField )
    sub_21FFECC(this, method);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  PhotoStandFigureComponent___c_c *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FaceList_k__BackingField; // x21
  struct PhotoStandFigureComponent___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__28_0; // x22
  Il2CppObject *v20; // x23
  struct PhotoStandFigureComponent___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  StandFigureBack_o *photoStandFigureBack; // x8
  System_Collections_Generic_List_int__o *v31; // x19
  UIStandFigureR_o *SvtStandFigure; // x21
  System_Action_o *v33; // x22

  if ( (byte_5933B34 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    sub_21FFC50(&Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__28_0__);
    sub_21FFC50(&Method_PhotoStandFigureComponent___c__DisplayClass28_0__PreLoadFormAssets_b__1__);
    sub_21FFC50(&PhotoStandFigureComponent___c__DisplayClass28_0_TypeInfo);
    sub_21FFC50(&PhotoStandFigureComponent___c_TypeInfo);
    byte_5933B34 = 1;
  }
  v5 = sub_21FFEBC(PhotoStandFigureComponent___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v16 = PhotoStandFigureComponent___c_TypeInfo;
  FaceList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FaceList_k__BackingField;
  if ( !*(&PhotoStandFigureComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PhotoStandFigureComponent___c_TypeInfo, v14, v15);
    v16 = PhotoStandFigureComponent___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__28_0 = (System_Func_object__object__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v14, v15);
      static_fields = PhotoStandFigureComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__28_0,
      v20,
      Method_PhotoStandFigureComponent___c__PreLoadFormAssets_b__28_0__,
      0);
    v21 = PhotoStandFigureComponent___c_TypeInfo->static_fields;
    v21->__9__28_0 = (struct System_Func_ServantPhotoEntity_FaceData__IEnumerable_int___o *)_9__28_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__28_0, (int32_t)_9__28_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               FaceList_k__BackingField,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__28_0,
                                                               (const MethodInfo_3860774 *)Method_System_Linq_Enumerable_SelectMany_ServantPhotoEntity_FaceData__int___);
  v29 = System_Linq_Enumerable__Distinct_int_(
          v28,
          (const MethodInfo_3849124 *)Method_System_Linq_Enumerable_Distinct_int___);
  v6 = System_Linq_Enumerable__ToList_int_(v29, (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
  photoStandFigureBack = this->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (v31 = (System_Collections_Generic_List_int__o *)v6,
        SvtStandFigure = StandFigureBack__GetSvtStandFigure(photoStandFigureBack, 0, 0),
        v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_PhotoStandFigureComponent___c__DisplayClass28_0__PreLoadFormAssets_b__1__,
          0),
        !SvtStandFigure) )
  {
LABEL_13:
    sub_21FFECC(v6, v7);
  }
  UIStandFigureR__PreloadFormAssets(SvtStandFigure, v31, v33, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoStandFigureComponent__SetFacePhotoServant(
        PhotoStandFigureComponent_o *this,
        bool isNext,
        System_Action_o *callbackFunc,
        int32_t faceListIndex,
        const MethodInfo *method)
{
  PhotoStandFigureComponent_o *v8; // x20
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  struct ServantPhotoEntity_FaceData_array *v10; // x8
  struct StandFigureBack_o *photoStandFigureBack; // x9
  System_Collections_Generic_List_object__o *standFigureCollectList; // x20
  __int64 size; // x24
  ServantPhotoEntity_FaceData_o *v14; // x25
  unsigned __int64 v15; // x21
  struct System_Int32_array *multiFace; // x8
  struct System_Int32_array *multiForm; // x9
  int32_t v18; // w23
  int32_t v19; // w22
  int32_t v20; // w1
  int32_t v21; // w2
  System_Action_o *v22; // x3

  v8 = this;
  if ( (byte_5933B35 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    this = (PhotoStandFigureComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_5933B35 = 1;
  }
  if ( isNext )
  {
    FaceList_k__BackingField = v8->fields._FaceList_k__BackingField;
    faceListIndex = v8->fields._FaceListIndex_k__BackingField + 1;
    v8->fields._FaceListIndex_k__BackingField = faceListIndex;
    if ( !FaceList_k__BackingField )
      goto LABEL_32;
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
        goto LABEL_32;
      this = (PhotoStandFigureComponent_o *)UnityEngine_Random__Range_83187376(0, v10->max_length, 0);
      faceListIndex = (int)this;
    }
    else if ( !v8 )
    {
      goto LABEL_32;
    }
    FaceList_k__BackingField = v8->fields._FaceList_k__BackingField;
    v8->fields._FaceListIndex_k__BackingField = faceListIndex;
    if ( !FaceList_k__BackingField )
      goto LABEL_32;
  }
  if ( (unsigned int)faceListIndex >= LODWORD(FaceList_k__BackingField->max_length) )
LABEL_33:
    sub_21FFED4(this);
  photoStandFigureBack = v8->fields.photoStandFigureBack;
  if ( !photoStandFigureBack
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)photoStandFigureBack->fields.standFigureCollectList) == 0 )
  {
LABEL_32:
    sub_21FFECC(this, isNext);
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
          goto LABEL_33;
        multiForm = v14->fields.multiForm;
        if ( !multiForm )
          break;
        if ( v15 >= LODWORD(multiForm->max_length) )
          goto LABEL_33;
        v18 = multiFace->m_Items[v15];
        v19 = multiForm->m_Items[v15];
        if ( v15 )
        {
          this = (PhotoStandFigureComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                  standFigureCollectList,
                                                  v15,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_32;
          this = (PhotoStandFigureComponent_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_32;
          v20 = v18;
          v21 = v19;
          v22 = 0;
        }
        else
        {
          this = (PhotoStandFigureComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                  standFigureCollectList,
                                                  0,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_32;
          this = (PhotoStandFigureComponent_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_32;
          v20 = v18;
          v21 = v19;
          v22 = callbackFunc;
        }
        UIStandFigureR__SetFace_51005772((UIStandFigureR_o *)this, v20, v21, v22, 0.0, 0);
        if ( size == ++v15 )
          return;
      }
    }
    goto LABEL_32;
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


int32_t PhotoStandFigureComponent__get_SvtId(PhotoStandFigureComponent_o *this, const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FaceList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FaceList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void PhotoStandFigureComponent__set_SvtId(PhotoStandFigureComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933B36 & 1) == 0 )
  {
    sub_21FFC50(&PhotoStandFigureComponent___c_TypeInfo);
    byte_5933B36 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PhotoStandFigureComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoStandFigureComponent___c_TypeInfo->static_fields->__9 = (struct PhotoStandFigureComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PhotoStandFigureComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoStandFigureComponent___c___ctor(PhotoStandFigureComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *PhotoStandFigureComponent___c___PreLoadFormAssets_b__28_0(
        PhotoStandFigureComponent___c_o *this,
        ServantPhotoEntity_FaceData_o *f,
        const MethodInfo *method)
{
  if ( !f )
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)f->fields.multiForm;
}


void PhotoStandFigureComponent___c__DisplayClass28_0___ctor(
        PhotoStandFigureComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoStandFigureComponent___c__DisplayClass28_0___PreLoadFormAssets_b__1(
        PhotoStandFigureComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}