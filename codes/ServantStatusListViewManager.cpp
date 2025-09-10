void ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  System_Array_o *v3; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Array_o *v7; // x0
  System_RuntimeFieldHandle_o v8; // x1
  System_Array_o *v9; // x19
  struct ServantStatusListViewManager_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Array_o *v13; // x0
  System_RuntimeFieldHandle_o v14; // x1
  System_Array_o *v15; // x19
  struct ServantStatusListViewManager_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  struct ServantStatusListViewItemDraw_Kind_array *v23; // x1
  struct ServantStatusListViewManager_StaticFields *v24; // x0
  const MethodInfo *v25; // x3
  struct ServantStatusListViewManager_StaticFields *v26; // x0

  if ( (byte_4C24B39 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDraw_Kind___TypeInfo);
    sub_1C2D490(&ServantStatusListViewManager_TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__63DBC8F1D502F248E5F242F670630FA6DBCE1FF80C15DD01CC545462C94EEB6A);
    sub_1C2D490(&Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE);
    sub_1C2D490(&Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6);
    byte_4C24B39 = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v1 = (System_Array_o *)sub_1C2D538(ServantStatusListViewItemDraw_Kind___TypeInfo, 14);
  v2.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  v3 = v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v1, v2, 0);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->normalKindList, (int32_t)v3, v5, v6);
  v7 = (System_Array_o *)sub_1C2D538(ServantStatusListViewItemDraw_Kind___TypeInfo, 14);
  v8.fields.value = Field__PrivateImplementationDetails__63DBC8F1D502F248E5F242F670630FA6DBCE1FF80C15DD01CC545462C94EEB6A;
  v9 = v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v7, v8, 0);
  v10 = ServantStatusListViewManager_TypeInfo->static_fields;
  v10->grandKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->grandKindList, (int32_t)v9, v11, v12);
  v13 = (System_Array_o *)sub_1C2D538(ServantStatusListViewItemDraw_Kind___TypeInfo, 3);
  v14.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  v15 = v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v13, v14, 0);
  v16 = ServantStatusListViewManager_TypeInfo->static_fields;
  v16->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&v16->equipKindList, (int32_t)v15, v17, v18);
  v19 = sub_1C2D538(ServantStatusListViewItemDraw_Kind___TypeInfo, 1);
  if ( !v19 )
    goto LABEL_8;
  v23 = (struct ServantStatusListViewItemDraw_Kind_array *)v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v19 + 32) = 12;
  v24 = ServantStatusListViewManager_TypeInfo->static_fields;
  v24->npcFollowerEquipKindList = v23;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->npcFollowerEquipKindList, (int32_t)v23, v21, v22);
  v19 = sub_1C2D538(ServantStatusListViewItemDraw_Kind___TypeInfo, 1);
  if ( !v19 )
LABEL_8:
    sub_1C2D6EC(v19, v20);
  v23 = (struct ServantStatusListViewItemDraw_Kind_array *)v19;
  if ( !*(_DWORD *)(v19 + 24) )
LABEL_9:
    sub_1C2D6F4(v19, v23, v21);
  *(_DWORD *)(v19 + 32) = 14;
  v26 = ServantStatusListViewManager_TypeInfo->static_fields;
  v26->commandCodeKindList = v23;
  sub_1C2D434((CGThumbnailListItem_o *)&v26->commandCodeKindList, (int32_t)v23, v21, v25);
}


void ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_T__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C24B38 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
    byte_4C24B38 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  this->fields.isInput = 1;
  v6 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentKindList, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewManager__CacheViewTopContentsAndGap(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Component_o *v6; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  const MethodInfo *v9; // x1
  int v10; // w21
  float value; // s0
  float v12; // s9
  int32_t v13; // w20
  ServantStatusListViewObject_o *v14; // x21
  float v15; // s8
  const MethodInfo *v16; // x1
  float v17; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24B2D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_4C24B2D = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  this->fields.cachedViewTargetGap = 0.0;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( !size )
  {
    v13 = -1;
    goto LABEL_20;
  }
  objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              objectList,
                                                              size - 1,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  v6 = (UnityEngine_Component_o *)objectList;
  objectList = (System_Collections_Generic_List_object__o *)scrollView->fields.mPanel;
  if ( !objectList )
    goto LABEL_17;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)objectList, 0);
  if ( !v6
    || (objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(v6, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0),
        y = localPosition.fields.y,
        objectList = (System_Collections_Generic_List_object__o *)ServantStatusListViewObject__GetSize(
                                                                    (ServantStatusListViewObject_o *)v6,
                                                                    v9),
        !this->fields.scrollBar)
    || (v10 = (int)objectList,
        value = UIProgressBar__get_value((UIProgressBar_o *)this->fields.scrollBar, 0),
        (objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList) == 0) )
  {
LABEL_17:
    sub_1C2D6EC(objectList, method);
  }
  v12 = value * (float)-(float)((float)-(float)(y + (float)((float)v10 * -0.5)) - ViewSize.fields.y);
  v13 = 0;
  while ( v13 < objectList->fields._size )
  {
    objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                objectList,
                                                                v13,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    if ( !objectList )
      goto LABEL_17;
    v14 = (ServantStatusListViewObject_o *)objectList;
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)objectList,
                                                                0);
    if ( !objectList )
      goto LABEL_17;
    v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0);
    v15 = v19.fields.y;
    v17 = (float)ServantStatusListViewObject__GetSize(v14, v16) * 0.5;
    if ( (float)(v12 + (float)(ViewSize.fields.y * -0.35)) > (float)(v15 - v17) )
    {
      this->fields.cachedViewTargetGap = (float)(v15 + v17) - v12;
      break;
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_17;
  }
LABEL_20:
  this->fields.cachedViewTargetIndex = v13;
}


void ServantStatusListViewManager__CacheViewTopTargetContents(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *currentKindList; // x0
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v7; // w0

  if ( (byte_4C24B2C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_4C24B2C = 1;
  }
  currentKindList = (System_Collections_Generic_List_T__o *)this->fields.currentKindList;
  if ( currentKindList )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      if ( objectList->fields._size >= 1 )
      {
        v7 = System_Collections_Generic_List_Int32Enum___IndexOf(
               currentKindList,
               kind,
               (const MethodInfo_3770008 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( v7 != -1 )
        {
          this->fields.cachedViewTargetIndex = v7;
          this->fields.cachedViewTargetGap = -10.0;
        }
      }
    }
  }
}


void ServantStatusListViewManager__CreateList(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *currentKindList; // x8
  int v8; // w9
  UnityEngine_Object_o *scrollView; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Component_object; // x20
  float v13; // s8
  float v14; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  __int64 v16; // x2
  struct ServantStatusListViewItem_o *v17; // x8
  ServantStatusListViewManager_c **v18; // x26
  struct ServantStatusListViewItemDraw_Kind_array **p_grandKindList; // x8
  struct ServantStatusListViewItemDraw_Kind_array *v20; // x29
  unsigned __int64 v21; // x21
  __int64 max_length; // x22
  float v23; // s8
  int32_t v24; // w23
  unsigned int v25; // w24
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v27; // x8
  struct ServantStatusListViewItem_o *v28; // x8
  __int64 v29; // x25
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int v31; // w9
  struct UnityEngine_GameObject_array *v32; // x8
  Il2CppObject *v33; // x24
  Il2CppObject *v34; // x25
  ServantStatusListViewManager_c **v35; // x27
  Il2CppObject *v36; // x24
  Il2CppObject *v37; // x26
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct ServantStatusListViewItem_o *v40; // x1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  int32_t Size; // w0
  int v44; // w28
  UnityEngine_Transform_o *v45; // x26
  int v46; // w28
  float v47; // s8
  UnityEngine_Transform_o *v48; // x26
  UnityEngine_Transform_o *v49; // x26
  int32_t layer; // w0
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  ServantStatusListViewManager_c *v59; // x8
  struct ServantStatusListViewManager_StaticFields *v60; // x9
  __int64 v61; // x8
  int32_t LIST_BLANK; // w11
  _QWORD *v63; // x9
  __int64 v64; // x10
  UnityEngine_Object_o *v65; // x20
  struct ServantEntity_o *svtEntity; // x8
  _BOOL4 isNpcFollowerServantEquip; // w21
  __int64 v68; // x8
  ServantStatusListViewManager_c *v69; // x8
  int v70; // w21
  struct ServantStatusListViewManager_StaticFields *static_fields; // x8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24B29 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C2D490(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantStatusListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5286/*"DispObject"*/);
    byte_4C24B29 = 1;
  }
  tdInfo = 0;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_128;
  v8 = currentKindList->fields._version + 1;
  currentKindList->fields._size = 0;
  currentKindList->fields._version = v8;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( !transform )
      goto LABEL_128;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_128;
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_128;
      v13 = *((float *)&Component_object[20].monitor + 1);
      v14 = *(float *)&Component_object[21].klass;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_128;
      v73.fields.x = -v13;
      v73.fields.y = -v14;
      v73.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v73, 0);
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_128;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v10, v11);
  v17 = this->fields.mainInfo;
  if ( !v17 )
    goto LABEL_128;
  v18 = &ServantStatusListViewManager_TypeInfo;
  if ( v17->fields.commandCodeEntity )
  {
    transform = (__int64)ServantStatusListViewManager_TypeInfo;
    if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
    }
    p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(*(_QWORD *)(transform + 184) + 40LL);
  }
  else
  {
    svtEntity = v17->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_128;
    transform = SvtType__IsServantEquip(svtEntity->fields.type, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_128;
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      isNpcFollowerServantEquip = (*p_mainInfo)->fields.isNpcFollowerServantEquip;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        transform = (__int64)ServantStatusListViewManager_TypeInfo;
      }
      v68 = *(_QWORD *)(transform + 184);
      if ( isNpcFollowerServantEquip )
        p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(v68 + 32);
      else
        p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(v68 + 24);
    }
    else
    {
      if ( !mainInfo )
        goto LABEL_128;
      transform = ServantStatusListViewItem__GetEquipListCount(mainInfo, 0);
      v69 = ServantStatusListViewManager_TypeInfo;
      v70 = transform;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        v69 = ServantStatusListViewManager_TypeInfo;
      }
      static_fields = v69->static_fields;
      if ( v70 >= 2 )
        p_grandKindList = &static_fields->grandKindList;
      else
        p_grandKindList = &static_fields->normalKindList;
    }
  }
  v20 = *p_grandKindList;
  if ( *p_grandKindList && this->fields.statusObjectList && (int)v20->max_length >= 1 )
  {
    v21 = 0;
    max_length = (unsigned int)v20->max_length;
    v23 = 0.0;
    do
    {
      if ( v21 >= LODWORD(v20->max_length) )
LABEL_129:
        sub_1C2D6F4(transform, v6, v16);
      v24 = v20->m_Items[v21];
      v25 = v24 - 1;
      if ( v24 >= 1 )
      {
        statusObjectList = this->fields.statusObjectList;
        if ( !statusObjectList )
          goto LABEL_128;
        if ( v24 <= SLODWORD(statusObjectList->max_length) )
        {
          switch ( v24 )
          {
            case 3:
            case 20:
              v27 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !v27->fields.isEquipShowMode )
                goto LABEL_107;
              transform = (__int64)v27->fields.svtEntity;
              if ( !transform )
                goto LABEL_128;
              transform = ServantEntity__get_IsServant((ServantEntity_o *)transform, 0);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.isCollection )
                goto LABEL_70;
              goto LABEL_107;
            case 4:
            case 12:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__IsEnableSkillInfo((ServantStatusListViewItem_o *)transform, 0);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 5:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__IsEnablePassiveSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 6:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__IsEnableAppendSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0);
              if ( (transform & 1) == 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 7:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              transform = ServantStatusListViewItem__GetNpInfo((ServantStatusListViewItem_o *)transform, &tdInfo, 0);
              if ( !tdInfo )
                goto LABEL_128;
              if ( tdInfo->fields.id <= 0 )
                goto LABEL_107;
              goto LABEL_70;
            case 10:
              v28 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              v29 = 0;
              break;
            case 15:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.isEnableServantQuest )
                goto LABEL_107;
              goto LABEL_70;
            case 16:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.enableTdSpeed )
                goto LABEL_107;
              goto LABEL_70;
            case 17:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( (*p_mainInfo)->fields.enableChangeVoice )
                goto LABEL_70;
              goto LABEL_107;
            case 18:
            case 19:
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !(*p_mainInfo)->fields.isDisplayRandomLimitCount )
                goto LABEL_107;
              goto LABEL_70;
            default:
              goto LABEL_70;
          }
          while ( 1 )
          {
            svtCommentEntityList = v28->fields.svtCommentEntityList;
            if ( !svtCommentEntityList )
              goto LABEL_128;
            v31 = svtCommentEntityList->max_length;
            if ( (int)v29 >= v31 )
              goto LABEL_107;
            if ( (unsigned int)v29 >= v31 )
              goto LABEL_129;
            transform = (__int64)svtCommentEntityList->m_Items[v29];
            if ( !transform )
              goto LABEL_128;
            transform = ServantCommentEntity__IsConst((ServantCommentEntity_o *)transform, 0);
            if ( (transform & 1) == 0 )
              break;
            v28 = *p_mainInfo;
            ++v29;
            if ( !*p_mainInfo )
              goto LABEL_128;
          }
LABEL_70:
          v32 = this->fields.statusObjectList;
          if ( !v32 )
            goto LABEL_128;
          if ( v25 >= LODWORD(v32->max_length) )
            goto LABEL_129;
          v33 = (Il2CppObject *)v32->m_Items[v25];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v34 = UnityEngine_Object__Instantiate_object_(
                  v33,
                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0);
          if ( (transform & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_128;
            v35 = v18;
            v36 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v34,
                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
            v37 = GameObjectExtensions__FindComponent_object_(
                    (UnityEngine_GameObject_o *)v34,
                    (System_String_o *)StringLiteral_5286/*"DispObject"*/,
                    (const MethodInfo_312742C *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0);
            if ( (transform & 1) != 0 )
            {
              if ( !v37 )
                goto LABEL_128;
              LODWORD(v37[7].monitor) = v24;
            }
            if ( !v36 )
              goto LABEL_128;
            v40 = *p_mainInfo;
            v36[2].monitor = *p_mainInfo;
            sub_1C2D434((CGThumbnailListItem_o *)&v36[2].monitor, (int32_t)v40, v38, v39);
            ServantStatusListViewObject__Init_37473324((ServantStatusListViewObject_o *)v36, 2, v41);
            Size = ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v36, v42);
            v44 = Size >= 0 ? Size : Size + 1;
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0);
            if ( !this->fields.listParent )
              goto LABEL_128;
            v45 = (UnityEngine_Transform_o *)transform;
            transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.listParent, 0);
            if ( !v45 )
              goto LABEL_128;
            UnityEngine_Transform__set_parent(v45, (UnityEngine_Transform_o *)transform, 0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0);
            if ( !transform )
              goto LABEL_128;
            v46 = v44 >> 1;
            v47 = v23 - (float)v46;
            v74.fields.x = 0.0;
            v74.fields.z = 0.0;
            v74.fields.y = v47;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v74, 0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0);
            v48 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4C20DA7 )
            {
              transform = sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
              byte_4C20DA7 = 1;
            }
            if ( !v48 )
              goto LABEL_128;
            UnityEngine_Transform__set_localRotation(
              v48,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0);
            v49 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4C20DA6 )
            {
              transform = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
              byte_4C20DA6 = 1;
            }
            if ( !v49 )
              goto LABEL_128;
            UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            transform = (__int64)this->fields.listParent;
            if ( !transform )
              goto LABEL_128;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v34, layer, 0);
            ServantStatusListViewObject__SetBaseTransform((ServantStatusListViewObject_o *)v36, v51);
            ServantStatusListViewObject__SetManager((ServantStatusListViewObject_o *)v36, this, v52);
            transform = (__int64)this->fields.objectList;
            if ( !transform )
              goto LABEL_128;
            v55 = *(_QWORD *)(transform + 16);
            v18 = v35;
            v56 = Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v55 )
              goto LABEL_128;
            v57 = *(int *)(transform + 24);
            if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v36,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = v55 + 8 * v57;
              *(_DWORD *)(transform + 24) = v57 + 1;
              *(_QWORD *)(v58 + 32) = v36;
              sub_1C2D434((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v36, v53, v54);
            }
            v59 = *v35;
            if ( !(*v35)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(*v35);
              v59 = *v35;
            }
            transform = (__int64)this->fields.currentKindList;
            if ( !transform )
              goto LABEL_128;
            v60 = v59->static_fields;
            v61 = *(_QWORD *)(transform + 16);
            LIST_BLANK = v60->LIST_BLANK;
            v63 = Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v61 )
              goto LABEL_128;
            v64 = *(int *)(transform + 24);
            v23 = v47 - (float)(LIST_BLANK + v46);
            if ( (unsigned int)v64 >= *(_DWORD *)(v61 + 24) )
            {
              System_Collections_Generic_List_Int32Enum___AddWithResize(
                (System_Collections_Generic_List_T__o *)transform,
                v24,
                *(const MethodInfo_376F38C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(transform + 24) = v64 + 1;
              *(_DWORD *)(v61 + 4 * v64 + 32) = v24;
            }
          }
        }
      }
LABEL_107:
      ++v21;
    }
    while ( v21 != max_length );
  }
  v65 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v65, 0, 0) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
      return;
    }
LABEL_128:
    sub_1C2D6EC(transform, v6);
  }
}


void ServantStatusListViewManager__DestroyList(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v6; // x3
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C24B2B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B2B = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C2D6EC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v12.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v7 = this->fields.objectList;
  if ( !v7 )
    goto LABEL_20;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  this->fields.mainInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, 0, size, v6);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_1C2D6EC(objectList, method);
  }
}


void ServantStatusListViewManager__LateUpdate(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  int32_t v4; // w8
  struct UIScrollView_o *v5; // x8
  UnityEngine_Component_o *v6; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  const MethodInfo *v9; // x1
  int v10; // w20
  ServantStatusListViewObject_o *v11; // x21
  float v12; // s10
  const MethodInfo *v13; // x1
  float v14; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24B2A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_4C24B2A = 1;
  }
  if ( (this->fields.cachedViewTargetIndex & 0x80000000) == 0 )
  {
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      UIScrollView__InvalidateBounds((UIScrollView_o *)scrollView, 0);
      scrollView = this->fields.objectList;
      if ( scrollView )
      {
        v4 = *((_DWORD *)scrollView + 6);
        if ( this->fields.cachedViewTargetIndex >= v4 )
        {
          scrollView = this->fields.scrollBar;
          if ( scrollView )
          {
            v14 = 1.0;
            goto LABEL_18;
          }
        }
        else
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v4 - 1,
                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
          v5 = this->fields.scrollView;
          if ( v5 )
          {
            v6 = (UnityEngine_Component_o *)scrollView;
            scrollView = v5->fields.mPanel;
            if ( scrollView )
            {
              ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0);
              if ( v6 )
              {
                scrollView = UnityEngine_Component__get_transform(v6, 0);
                if ( scrollView )
                {
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
                  y = localPosition.fields.y;
                  scrollView = (void *)ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v6, v9);
                  if ( this->fields.objectList )
                  {
                    v10 = (int)scrollView;
                    scrollView = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.objectList,
                                   this->fields.cachedViewTargetIndex,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
                    if ( scrollView )
                    {
                      v11 = (ServantStatusListViewObject_o *)scrollView;
                      scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
                      if ( scrollView )
                      {
                        v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
                        v12 = v16.fields.y;
                        scrollView = (void *)ServantStatusListViewObject__GetSize(v11, v13);
                        if ( this->fields.scrollBar )
                        {
                          v14 = (float)-(float)((float)(v12 + (float)((float)(int)scrollView * 0.5))
                                              - this->fields.cachedViewTargetGap)
                              / (float)((float)-(float)(y + (float)((float)v10 * -0.5)) - ViewSize.fields.y);
                          scrollView = this->fields.scrollBar;
LABEL_18:
                          UIProgressBar__set_value((UIProgressBar_o *)scrollView, v14, 0);
                          goto LABEL_19;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C2D6EC(scrollView, method);
  }
LABEL_19:
  this->fields.cachedViewTargetIndex = -1;
}


void ServantStatusListViewManager__OnClickButton(
        ServantStatusListViewManager_o *this,
        UICommonButton_o *tappedButton,
        ServantStatusListViewItemDrawButton_o *ownerObject,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v9; // x0
  __int64 v10; // x1
  unsigned int ButtonIndex; // w20
  int v12; // w0
  void (__fastcall *invoke_impl)(intptr_t, __int64, _QWORD, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v15; // x3
  __int64 v16; // x1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)ownerObject, method);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_1C2D6EC(v9, v10);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      0);
      v12 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, const MethodInfo *))ownerObject->klass->vtable._4_GetKind.methodPtr)(
              ownerObject,
              ownerObject->klass->vtable._4_GetKind.method);
      if ( v12 == 17 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl;
        method_code = v5->fields.method_code;
        v15 = v5->fields.method;
        v16 = 9;
        goto LABEL_9;
      }
      if ( v12 == 16 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl;
        method_code = v5->fields.method_code;
        v15 = v5->fields.method;
        v16 = 8;
LABEL_9:
        invoke_impl(method_code, v16, ButtonIndex, v15);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__OnClickCombine(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v6; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x22
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x19
  ServantStatusListViewManager_o *v14; // x20
  ServantStatusListViewManager___c_c *v15; // x8
  System_Action_o *_9__61_0; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v6 = this;
  if ( (byte_4C24B36 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnClickCombine__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantStatusListViewManager___c__OnClickCombine_b__61_0__);
    sub_1C2D490(&ServantStatusListViewManager___c_TypeInfo);
    sub_1C2D490(&StringLiteral_11935/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24B36 = 1;
  }
  if ( v6->fields.initMode == 1 )
  {
    mainInfo = v6->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v6->fields.callbackFunc;
        v6->fields.callbackFunc = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.callbackFunc, 0, index, method);
        if ( callbackFunc )
        {
          v9 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickCombine__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            (unsigned int)kind,
            (unsigned int)index,
            callbackFunc->fields.method);
        }
        return;
      }
      v11 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickCombine__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C2D474(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11935/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0);
      v14 = this;
      v15 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v15 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__61_0 = v15->static_fields->__9__61_0;
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__61_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = ServantStatusListViewManager___c_TypeInfo;
        }
        v18 = (Il2CppObject *)v15->static_fields->__9;
        _9__61_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(_9__61_0, v18, Method_ServantStatusListViewManager___c__OnClickCombine_b__61_0__, 0);
        static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__61_0 = _9__61_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v20, v21);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v17,
          (System_String_o *)v14,
          _9__61_0,
          -1,
          0,
          0,
          0,
          1,
          28,
          0,
          0,
          0,
          0.0,
          0,
          0);
        return;
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&kind);
  }
}


void ServantStatusListViewManager__OnClickCommandCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        3,
        (unsigned int)id,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickCommandCode(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        6,
        (unsigned int)id,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickFaceCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        4,
        (unsigned int)id,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickListView(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C2D6EC(v8, v9);
      Kind = ServantStatusListViewObject__GetKind(obj, v9);
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        0,
        Kind,
        v5->fields.method);
    }
  }
}


void ServantStatusListViewManager__OnClickListViewEquip(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  void (__fastcall *invoke_impl)(intptr_t, __int64, __int64, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v10; // x3
  __int64 v11; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( index == 2 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v5->fields.invoke_impl;
        method_code = v5->fields.method_code;
        v10 = v5->fields.method;
        v11 = 2;
        goto LABEL_8;
      }
      if ( index == 1 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v5->fields.invoke_impl;
        method_code = v5->fields.method_code;
        v10 = v5->fields.method;
        v11 = 1;
LABEL_8:
        invoke_impl(method_code, 24, v11, v10);
      }
    }
  }
}


void ServantStatusListViewManager__OnClickListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, v2, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        1,
        0,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickListViewEquipExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  bool IsEquip; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  ServantStatusListViewItem_o *v8; // x8
  System_String_o *v9; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4C24B33 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11988/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4C24B33 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquip = ServantStatusListViewItem__get_IsEquip(mainInfo, 0);
    v5 = Method_ServantStatusListViewManager_OnClickListViewEquipExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    if ( IsEquip )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
      v8 = this->fields.mainInfo;
      if ( v8 )
      {
        v9 = (System_String_o *)mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v8, 0);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v9, NumberFormat, 0);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0);
          return;
        }
      }
LABEL_15:
      sub_1C2D6EC(mainInfo, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__OnClickListViewEquipExp_37476512(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  bool IsEquipByIndex; // w21
  _QWORD *v7; // x8
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x21
  ServantStatusListViewItem_o *v10; // x8
  System_String_o *v11; // x20
  int32_t EquipExpByIndex; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4C24B34 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnClickListViewEquipExp___78098840);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11988/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4C24B34 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquipByIndex = ServantStatusListViewItem__IsEquipByIndex(mainInfo, index, 0);
    v7 = Method_ServantStatusListViewManager_OnClickListViewEquipExp___78098840;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp___78098840 + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickListViewEquipExp___78098840);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    if ( IsEquipByIndex )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
      v10 = this->fields.mainInfo;
      if ( v10 )
      {
        v11 = (System_String_o *)mainInfo;
        EquipExpByIndex = ServantStatusListViewItem__GetEquipExpByIndex(v10, index, 0);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExpByIndex, 0);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v11, NumberFormat, 0);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0);
          return;
        }
      }
LABEL_15:
      sub_1C2D6EC(mainInfo, *(_QWORD *)&index);
    }
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
  }
}


void ServantStatusListViewManager__OnClickListViewExp(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v9; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4C24B32 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnClickListViewExp__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11988/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4C24B32 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    v3 = Method_ServantStatusListViewManager_OnClickListViewExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewExp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickListViewExp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v9 = v6,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0),
          v6 = System_String__Format(v9, NumberFormat, 0),
          !Instance) )
    {
      sub_1C2D6EC(v6, v7);
    }
    CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, v6, 0);
  }
}


void ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x20
  struct ServantStatusListViewItem_o *v7; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  ServantStatusListViewManager_o *v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = this;
  if ( (byte_4C24B35 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnClickListViewFriendship__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantStatusListViewManager_o *)sub_1C2D490(&StringLiteral_11989/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/);
    byte_4C24B35 = 1;
  }
  if ( v2->fields.initMode == 1 )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    if ( mainInfo->fields.userSvtCollectionEntity )
    {
      v4 = Method_ServantStatusListViewManager_OnClickListViewFriendship__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewFriendship__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickListViewFriendship__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0);
      v7 = v2->fields.mainInfo;
      if ( v7 )
      {
        userSvtCollectionEntity = v7->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v9 = this;
          v10 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v11 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v14.fields.currentCryptoKey = v10;
          *(_QWORD *)&v14.fields.fakeValue = v11;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12, 0);
          this = (ServantStatusListViewManager_o *)System_String__Format((System_String_o *)v9, NumberFormat, 0);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)this, 0);
            return;
          }
        }
      }
LABEL_17:
      sub_1C2D6EC(this, method);
    }
  }
}


void ServantStatusListViewManager__OnClickPortraitCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        5,
        (unsigned int)id,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickRandomLimitCountMask(
        ServantStatusListViewManager_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        12,
        (unsigned int)maskType,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        10,
        (unsigned int)index,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickServantQuest(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        7,
        (unsigned int)questId,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickServantTdSpeed(
        ServantStatusListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        8,
        (unsigned int)type,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        11,
        (unsigned int)index,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        11,
        (unsigned int)index,
        v5->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__OnClickUnSealedQuestTransition(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusListViewManager_o *v5; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x19
  ServantStatusListViewManager_o *v11; // x20
  ServantStatusListViewManager___c_c *v12; // x8
  System_Action_o *_9__62_1; // x22
  System_String_o *v14; // x21
  Il2CppObject *v15; // x23
  struct ServantStatusListViewManager___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  ServantStatusListViewManager___c_c *v21; // x8
  Il2CppObject *v22; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  v5 = this;
  if ( (byte_4C24B37 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_0__);
    sub_1C2D490(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_1__);
    sub_1C2D490(&ServantStatusListViewManager___c_TypeInfo);
    sub_1C2D490(&StringLiteral_11935/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11936/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24B37 = 1;
  }
  if ( v5->fields.initMode == 1 )
  {
    mainInfo = v5->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_30;
    if ( mainInfo->fields.isEnableServantQuest )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v5->fields.callbackFunc;
        v5->fields.callbackFunc = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            7,
            (unsigned int)questId,
            callbackFunc->fields.method);
        return;
      }
      v19 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11935/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0);
      v11 = this;
      v21 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v21 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__62_1 = v21->static_fields->__9__62_1;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      if ( _9__62_1 )
      {
        if ( !Instance )
          goto LABEL_30;
LABEL_20:
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v14,
          (System_String_o *)v11,
          _9__62_1,
          -1,
          0,
          0,
          0,
          1,
          28,
          0,
          0,
          0,
          0.0,
          0,
          0);
        return;
      }
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = ServantStatusListViewManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v21->static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__62_1,
        v22,
        Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_1__,
        0);
      static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__62_1 = _9__62_1;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__62_1, (int32_t)_9__62_1, v24, v25);
      if ( Instance )
        goto LABEL_20;
    }
    else
    {
      v8 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11936/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/, 0);
      v11 = this;
      v12 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v12 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__62_1 = v12->static_fields->__9__62_0;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__62_1 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = ServantStatusListViewManager___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v12->static_fields->__9;
        _9__62_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__62_1,
          v15,
          Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_0__,
          0);
        v16 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v16->__9__62_0 = _9__62_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v16->__9__62_0, (int32_t)_9__62_1, v17, v18);
      }
      if ( Instance )
        goto LABEL_20;
    }
LABEL_30:
    sub_1C2D6EC(this, *(_QWORD *)&questId);
  }
}


void ServantStatusListViewManager__OnEnable(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void ServantStatusListViewManager__OnLongPushListViewEquip(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  void (__fastcall *invoke_impl)(intptr_t, __int64, __int64, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v10; // x3
  __int64 v11; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( index == 2 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v5->fields.invoke_impl;
        method_code = v5->fields.method_code;
        v10 = v5->fields.method;
        v11 = 2;
        goto LABEL_8;
      }
      if ( index == 1 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v5->fields.invoke_impl;
        method_code = v5->fields.method_code;
        v10 = v5->fields.method;
        v11 = 1;
LABEL_8:
        invoke_impl(method_code, 25, v11, v10);
      }
    }
  }
}


void ServantStatusListViewManager__OnLongPushListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v5; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, v2, v3);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v5->fields.invoke_impl)(
        v5->fields.method_code,
        2,
        0,
        v5->fields.method);
  }
}


void ServantStatusListViewManager__OnMoveEnd(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_4C24B31 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B31 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v8,
                1,
                v8->klass->vtable._8_UpdateScrollbars.method),
              (v8 = this->fields.scrollView) == 0) )
        {
          sub_1C2D6EC(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__RequestListObject(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C24B2F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C24B2F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      objectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v11, v12);
      ServantStatusListViewObject__Init_37475248((ServantStatusListViewObject_o *)current, mode, v10, delay, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__RequestListObject_37474228(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C24B30 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C24B30 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      objectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v9, v10);
      ServantStatusListViewObject__Init_37475332((ServantStatusListViewObject_o *)current, mode, v8, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


void ServantStatusListViewManager__SetMode(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        ServantStatusListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusListViewManager__SetMode_37473996(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__SetMode_37473996(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4C24B2E & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_4C24B2E = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C2D6EC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  v6 = 4;
  switch ( mode )
  {
    case 1:
      ServantStatusListViewManager__set_IsInput(v4, 1, method);
      v6 = 3;
      goto LABEL_14;
    case 2:
      ServantStatusListViewManager__set_IsInput(v4, 0, method);
      v6 = 2;
      goto LABEL_14;
    case 3:
      goto LABEL_14;
    case 4:
      v6 = 5;
      goto LABEL_14;
    case 5:
      v6 = 6;
      goto LABEL_14;
    case 6:
      v6 = 7;
      goto LABEL_14;
    case 7:
      v6 = 8;
      goto LABEL_14;
    case 8:
      v6 = 9;
      goto LABEL_14;
    case 9:
      v6 = 10;
      goto LABEL_14;
    case 10:
      v6 = 11;
LABEL_14:
      ServantStatusListViewManager__RequestListObject_37474228(v4, v6, method);
      break;
    default:
      return;
  }
}


void ServantStatusListViewManager__SetObjectItem(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t initMode; // w8
  int32_t v4; // w8

  initMode = this->fields.initMode;
  if ( initMode == 8 )
  {
    if ( obj )
    {
      v4 = 9;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C2D6EC(this, obj);
  }
  if ( initMode != 1 )
  {
    if ( obj )
    {
      v4 = 2;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !obj )
    goto LABEL_10;
  v4 = 3;
LABEL_9:
  ServantStatusListViewObject__Init_37473324(obj, v4, method);
}


void ServantStatusListViewManager__add_callbackFunc(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewManager_o *v11; // x0
  ServantStatusListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C24B27 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_4C24B27 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ServantStatusListViewManager__remove_callbackFunc(v11, v12, v13);
}


bool ServantStatusListViewManager__get_IsInput(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isInput;
}


void ServantStatusListViewManager__remove_callbackFunc(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewManager_o *v11; // x0
  ServantStatusListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C24B28 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_4C24B28 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ServantStatusListViewManager__CreateList(v11, v12, v13);
}


void ServantStatusListViewManager__set_IsInput(
        ServantStatusListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_4C24B26 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B26 = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1C2D6EC(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0);
    UIProgressBar__set_alpha(v8, alpha, 0);
  }
}


void ServantStatusListViewManager_CallbackFunc___ctor(
        ServantStatusListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6FA54;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6F9FC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = id;
  v15 = result;
  if ( (byte_4C24B3A & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&ServantStatusListViewManager_ResultKind_TypeInfo);
    byte_4C24B3A = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             ServantStatusListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&id,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantStatusListViewManager_CallbackFunc__Invoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    id,
    this->fields.method);
}


void ServantStatusListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24B3B & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager___c_TypeInfo);
    byte_4C24B3B = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantStatusListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantStatusListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantStatusListViewManager___c___ctor(ServantStatusListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusListViewManager___c___OnClickCombine_b__61_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24B3C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24B3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__62_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24B3D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24B3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__62_1(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24B3E & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24B3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}