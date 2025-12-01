void ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  System_Array_o *v3; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Array_o *v11; // x0
  System_RuntimeFieldHandle_o v12; // x1
  System_Array_o *v13; // x19
  struct ServantStatusListViewManager_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Array_o *v21; // x0
  System_RuntimeFieldHandle_o v22; // x1
  System_Array_o *v23; // x19
  struct ServantStatusListViewManager_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct ServantStatusListViewItemDraw_Kind_array *v39; // x1
  struct ServantStatusListViewManager_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct ServantStatusListViewItemDraw_Kind_array *v47; // x1
  struct ServantStatusListViewManager_StaticFields *v48; // x0

  if ( (byte_4CC4A56 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItemDraw_Kind___TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__63DBC8F1D502F248E5F242F670630FA6DBCE1FF80C15DD01CC545462C94EEB6A);
    sub_1C713B0(&Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE);
    sub_1C713B0(&Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6);
    byte_4CC4A56 = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v1 = (System_Array_o *)sub_1C71458(ServantStatusListViewItemDraw_Kind___TypeInfo, 14);
  v2.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  v3 = v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v1, v2, 0);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->normalKindList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (System_Array_o *)sub_1C71458(ServantStatusListViewItemDraw_Kind___TypeInfo, 14);
  v12.fields.value = Field__PrivateImplementationDetails__63DBC8F1D502F248E5F242F670630FA6DBCE1FF80C15DD01CC545462C94EEB6A;
  v13 = v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v11, v12, 0);
  v14 = ServantStatusListViewManager_TypeInfo->static_fields;
  v14->grandKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v13;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->grandKindList, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  v21 = (System_Array_o *)sub_1C71458(ServantStatusListViewItemDraw_Kind___TypeInfo, 3);
  v22.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  v23 = v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v21, v22, 0);
  v24 = ServantStatusListViewManager_TypeInfo->static_fields;
  v24->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v23;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->equipKindList, (int32_t)v23, v25, v26, v27, v28, v29, v30);
  v31 = sub_1C71458(ServantStatusListViewItemDraw_Kind___TypeInfo, 1);
  if ( !v31 )
    goto LABEL_8;
  v39 = (struct ServantStatusListViewItemDraw_Kind_array *)v31;
  if ( !*(_DWORD *)(v31 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v31 + 32) = 12;
  v40 = ServantStatusListViewManager_TypeInfo->static_fields;
  v40->npcFollowerEquipKindList = v39;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v40->npcFollowerEquipKindList, (int32_t)v39, v33, v34, v35, v36, v37, v38);
  v31 = sub_1C71458(ServantStatusListViewItemDraw_Kind___TypeInfo, 1);
  if ( !v31 )
LABEL_8:
    sub_1C71608(v31, v32);
  v47 = (struct ServantStatusListViewItemDraw_Kind_array *)v31;
  if ( !*(_DWORD *)(v31 + 24) )
LABEL_9:
    sub_1C71610(v31);
  *(_DWORD *)(v31 + 32) = 14;
  v48 = ServantStatusListViewManager_TypeInfo->static_fields;
  v48->commandCodeKindList = v47;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v48->commandCodeKindList, (int32_t)v47, v41, v42, v43, v44, v45, v46);
}


void ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC4A55 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
    byte_4CC4A55 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isInput = 1;
  v10 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.currentKindList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4CC4A4A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_4CC4A4A = 1;
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
                                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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
    sub_1C71608(objectList, method);
  }
  v12 = value * (float)-(float)((float)-(float)(y + (float)((float)v10 * -0.5)) - ViewSize.fields.y);
  v13 = 0;
  while ( v13 < objectList->fields._size )
  {
    objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                objectList,
                                                                v13,
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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

  if ( (byte_4CC4A49 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_4CC4A49 = 1;
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
               (const MethodInfo_37F6B9C *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *Component_object; // x20
  float v17; // s8
  float v18; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  struct ServantStatusListViewItem_o *v20; // x8
  ServantStatusListViewManager_c **v21; // x26
  struct ServantStatusListViewItemDraw_Kind_array **p_grandKindList; // x8
  struct ServantStatusListViewItemDraw_Kind_array *v23; // x29
  unsigned __int64 v24; // x21
  __int64 max_length; // x22
  float v26; // s8
  int32_t v27; // w23
  unsigned int v28; // w24
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v30; // x8
  struct ServantStatusListViewItem_o *v31; // x8
  __int64 v32; // x25
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int v34; // w9
  struct UnityEngine_GameObject_array *v35; // x8
  Il2CppObject *v36; // x24
  Il2CppObject *v37; // x25
  ServantStatusListViewManager_c **v38; // x27
  Il2CppObject *v39; // x24
  Il2CppObject *v40; // x26
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct ServantStatusListViewItem_o *v47; // x1
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  int32_t Size; // w0
  int v51; // w28
  UnityEngine_Transform_o *v52; // x26
  int v53; // w28
  float v54; // s8
  UnityEngine_Transform_o *v55; // x26
  UnityEngine_Transform_o *v56; // x26
  int32_t layer; // w0
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  ServantStatusListViewManager_c *v70; // x8
  struct ServantStatusListViewManager_StaticFields *v71; // x9
  __int64 v72; // x8
  int32_t LIST_BLANK; // w11
  _QWORD *v74; // x9
  __int64 v75; // x10
  UnityEngine_Object_o *v76; // x20
  struct ServantEntity_o *svtEntity; // x8
  _BOOL4 isNpcFollowerServantEquip; // w21
  __int64 v79; // x8
  ServantStatusListViewManager_c *v80; // x8
  int v81; // w21
  struct ServantStatusListViewManager_StaticFields *static_fields; // x8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC4A46 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C713B0(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_5286/*"DispObject"*/);
    byte_4CC4A46 = 1;
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
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v17 = *((float *)&Component_object[20].monitor + 1);
      v18 = *(float *)&Component_object[21].klass;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_128;
      v84.fields.x = -v17;
      v84.fields.y = -v18;
      v84.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v84, 0);
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_128;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v10, v11, v12, v13, v14, v15);
  v20 = this->fields.mainInfo;
  if ( !v20 )
    goto LABEL_128;
  v21 = &ServantStatusListViewManager_TypeInfo;
  if ( v20->fields.commandCodeEntity )
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
    svtEntity = v20->fields.svtEntity;
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
      v79 = *(_QWORD *)(transform + 184);
      if ( isNpcFollowerServantEquip )
        p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(v79 + 32);
      else
        p_grandKindList = (struct ServantStatusListViewItemDraw_Kind_array **)(v79 + 24);
    }
    else
    {
      if ( !mainInfo )
        goto LABEL_128;
      transform = ServantStatusListViewItem__GetEquipListCount(mainInfo, 0);
      v80 = ServantStatusListViewManager_TypeInfo;
      v81 = transform;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo);
        v80 = ServantStatusListViewManager_TypeInfo;
      }
      static_fields = v80->static_fields;
      if ( v81 >= 2 )
        p_grandKindList = &static_fields->grandKindList;
      else
        p_grandKindList = &static_fields->normalKindList;
    }
  }
  v23 = *p_grandKindList;
  if ( *p_grandKindList && this->fields.statusObjectList && (int)v23->max_length >= 1 )
  {
    v24 = 0;
    max_length = (unsigned int)v23->max_length;
    v26 = 0.0;
    do
    {
      if ( v24 >= LODWORD(v23->max_length) )
LABEL_129:
        sub_1C71610(transform);
      v27 = v23->m_Items[v24];
      v28 = v27 - 1;
      if ( v27 >= 1 )
      {
        statusObjectList = this->fields.statusObjectList;
        if ( !statusObjectList )
          goto LABEL_128;
        if ( v27 <= SLODWORD(statusObjectList->max_length) )
        {
          switch ( v27 )
          {
            case 3:
            case 20:
              v30 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              if ( !v30->fields.isEquipShowMode )
                goto LABEL_107;
              transform = (__int64)v30->fields.svtEntity;
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
              v31 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_128;
              v32 = 0;
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
            svtCommentEntityList = v31->fields.svtCommentEntityList;
            if ( !svtCommentEntityList )
              goto LABEL_128;
            v34 = svtCommentEntityList->max_length;
            if ( (int)v32 >= v34 )
              goto LABEL_107;
            if ( (unsigned int)v32 >= v34 )
              goto LABEL_129;
            transform = (__int64)svtCommentEntityList->m_Items[v32];
            if ( !transform )
              goto LABEL_128;
            transform = ServantCommentEntity__IsConst((ServantCommentEntity_o *)transform, 0);
            if ( (transform & 1) == 0 )
              break;
            v31 = *p_mainInfo;
            ++v32;
            if ( !*p_mainInfo )
              goto LABEL_128;
          }
LABEL_70:
          v35 = this->fields.statusObjectList;
          if ( !v35 )
            goto LABEL_128;
          if ( v28 >= LODWORD(v35->max_length) )
            goto LABEL_129;
          v36 = (Il2CppObject *)v35->m_Items[v28];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v37 = UnityEngine_Object__Instantiate_object_(
                  v36,
                  (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0);
          if ( (transform & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_128;
            v38 = v21;
            v39 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v37,
                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
            v40 = GameObjectExtensions__FindComponent_object_(
                    (UnityEngine_GameObject_o *)v37,
                    (System_String_o *)StringLiteral_5286/*"DispObject"*/,
                    (const MethodInfo_31A442C *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0);
            if ( (transform & 1) != 0 )
            {
              if ( !v40 )
                goto LABEL_128;
              LODWORD(v40[7].monitor) = v27;
            }
            if ( !v39 )
              goto LABEL_128;
            v47 = *p_mainInfo;
            v39[2].monitor = *p_mainInfo;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v39[2].monitor, (int32_t)v47, v41, v42, v43, v44, v45, v46);
            ServantStatusListViewObject__Init_37767580((ServantStatusListViewObject_o *)v39, 2, v48);
            Size = ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v39, v49);
            v51 = Size >= 0 ? Size : Size + 1;
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0);
            if ( !this->fields.listParent )
              goto LABEL_128;
            v52 = (UnityEngine_Transform_o *)transform;
            transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.listParent, 0);
            if ( !v52 )
              goto LABEL_128;
            UnityEngine_Transform__set_parent(v52, (UnityEngine_Transform_o *)transform, 0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0);
            if ( !transform )
              goto LABEL_128;
            v53 = v51 >> 1;
            v54 = v26 - (float)v53;
            v85.fields.x = 0.0;
            v85.fields.z = 0.0;
            v85.fields.y = v54;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v85, 0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0);
            v55 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4CC0D0F )
            {
              transform = sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
              byte_4CC0D0F = 1;
            }
            if ( !v55 )
              goto LABEL_128;
            UnityEngine_Transform__set_localRotation(
              v55,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0);
            v56 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4CC0D0E )
            {
              transform = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
              byte_4CC0D0E = 1;
            }
            if ( !v56 )
              goto LABEL_128;
            UnityEngine_Transform__set_localScale(v56, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            transform = (__int64)this->fields.listParent;
            if ( !transform )
              goto LABEL_128;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v37, layer, 0);
            ServantStatusListViewObject__SetBaseTransform((ServantStatusListViewObject_o *)v39, v58);
            ServantStatusListViewObject__SetManager((ServantStatusListViewObject_o *)v39, this, v59);
            transform = (__int64)this->fields.objectList;
            if ( !transform )
              goto LABEL_128;
            v66 = *(_QWORD *)(transform + 16);
            v21 = v38;
            v67 = Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v66 )
              goto LABEL_128;
            v68 = *(int *)(transform + 24);
            if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v39,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
            else
            {
              v69 = v66 + 8 * v68;
              *(_DWORD *)(transform + 24) = v68 + 1;
              *(_QWORD *)(v69 + 32) = v39;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v69 + 32), (int32_t)v39, v60, v61, v62, v63, v64, v65);
            }
            v70 = *v38;
            if ( !(*v38)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(*v38);
              v70 = *v38;
            }
            transform = (__int64)this->fields.currentKindList;
            if ( !transform )
              goto LABEL_128;
            v71 = v70->static_fields;
            v72 = *(_QWORD *)(transform + 16);
            LIST_BLANK = v71->LIST_BLANK;
            v74 = Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v72 )
              goto LABEL_128;
            v75 = *(int *)(transform + 24);
            v26 = v54 - (float)(LIST_BLANK + v53);
            if ( (unsigned int)v75 >= *(_DWORD *)(v72 + 24) )
            {
              System_Collections_Generic_List_Int32Enum___AddWithResize(
                (System_Collections_Generic_List_T__o *)transform,
                v27,
                *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(transform + 24) = v75 + 1;
              *(_DWORD *)(v72 + 4 * v75 + 32) = v27;
            }
          }
        }
      }
LABEL_107:
      ++v24;
    }
    while ( v24 != max_length );
  }
  v76 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v76, 0, 0) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
      return;
    }
LABEL_128:
    sub_1C71608(transform, v6);
  }
}


void ServantStatusListViewManager__DestroyList(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CC4A48 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4A48 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1C71608(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v11 = this->fields.objectList;
  if ( !v11 )
    goto LABEL_20;
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
  this->fields.mainInfo = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, 0, size, v6, v7, v8, v9, v10);
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
    sub_1C71608(objectList, method);
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

  if ( (byte_4CC4A47 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_4CC4A47 = 1;
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
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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
    sub_1C71608(scrollView, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v13; // x0
  __int64 v14; // x1
  unsigned int ButtonIndex; // w20
  int v16; // w0
  void (__fastcall *invoke_impl)(intptr_t, __int64, _QWORD, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v19; // x3
  __int64 v20; // x1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)ownerObject, (int32_t)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_1C71608(v13, v14);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      0);
      v16 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, const MethodInfo *))ownerObject->klass->vtable._4_GetKind.methodPtr)(
              ownerObject,
              ownerObject->klass->vtable._4_GetKind.method);
      if ( v16 == 17 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl;
        method_code = v9->fields.method_code;
        v19 = v9->fields.method;
        v20 = 9;
        goto LABEL_9;
      }
      if ( v16 == 16 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl;
        method_code = v9->fields.method_code;
        v19 = v9->fields.method;
        v20 = 8;
LABEL_9:
        invoke_impl(method_code, v20, ButtonIndex, v19);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusListViewManager_o *v10; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x22
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *Instance; // x19
  ServantStatusListViewManager_o *v18; // x20
  ServantStatusListViewManager___c_c *v19; // x8
  System_Action_o *_9__61_0; // x22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  v10 = this;
  if ( (byte_4CC4A53 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnClickCombine__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantStatusListViewManager___c__OnClickCombine_b__61_0__);
    sub_1C713B0(&ServantStatusListViewManager___c_TypeInfo);
    sub_1C713B0(&StringLiteral_11947/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4A53 = 1;
  }
  if ( v10->fields.initMode == 1 )
  {
    mainInfo = v10->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v10->fields.callbackFunc;
        v10->fields.callbackFunc = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v10->fields.callbackFunc, 0, index, (int32_t)method, v4, v5, v6, v7);
        if ( callbackFunc )
        {
          v13 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
            v13 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickCombine__);
          v14 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
          OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
          ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            (unsigned int)kind,
            (unsigned int)index,
            callbackFunc->fields.method);
        }
        return;
      }
      v15 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickCombine__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C71394(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0);
      v18 = this;
      v19 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v19 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__61_0 = v19->static_fields->__9__61_0;
      v21 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__61_0 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = ServantStatusListViewManager___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v19->static_fields->__9;
        _9__61_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(_9__61_0, v22, Method_ServantStatusListViewManager___c__OnClickCombine_b__61_0__, 0);
        static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__61_0 = _9__61_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__61_0,
          (int32_t)_9__61_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v21,
          (System_String_o *)v18,
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
    sub_1C71608(this, *(_QWORD *)&kind);
  }
}


void ServantStatusListViewManager__OnClickCommandCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        3,
        (unsigned int)id,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickCommandCode(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        6,
        (unsigned int)id,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickFaceCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        4,
        (unsigned int)id,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickListView(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C71608(v12, v13);
      Kind = ServantStatusListViewObject__GetKind(obj, v13);
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        0,
        Kind,
        v9->fields.method);
    }
  }
}


void ServantStatusListViewManager__OnClickListViewEquip(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  void (__fastcall *invoke_impl)(intptr_t, __int64, __int64, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v14; // x3
  __int64 v15; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( index == 2 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v9->fields.invoke_impl;
        method_code = v9->fields.method_code;
        v14 = v9->fields.method;
        v15 = 2;
        goto LABEL_8;
      }
      if ( index == 1 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v9->fields.invoke_impl;
        method_code = v9->fields.method_code;
        v14 = v9->fields.method;
        v15 = 1;
LABEL_8:
        invoke_impl(method_code, 24, v15, v14);
      }
    }
  }
}


void ServantStatusListViewManager__OnClickListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        1,
        0,
        v9->fields.method);
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

  if ( (byte_4CC4A50 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_12000/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4CC4A50 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquip = ServantStatusListViewItem__get_IsEquip(mainInfo, 0);
    v5 = Method_ServantStatusListViewManager_OnClickListViewEquipExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    if ( IsEquip )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
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
      sub_1C71608(mainInfo, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__OnClickListViewEquipExp_37770768(
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

  if ( (byte_4CC4A51 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnClickListViewEquipExp___78742328);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_12000/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4CC4A51 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquipByIndex = ServantStatusListViewItem__IsEquipByIndex(mainInfo, index, 0);
    v7 = Method_ServantStatusListViewManager_OnClickListViewEquipExp___78742328;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp___78742328 + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickListViewEquipExp___78742328);
    v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
    if ( IsEquipByIndex )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
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
      sub_1C71608(mainInfo, *(_QWORD *)&index);
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

  if ( (byte_4CC4A4F & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnClickListViewExp__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_12000/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_4CC4A4F = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    v3 = Method_ServantStatusListViewManager_OnClickListViewExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewExp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickListViewExp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v9 = v6,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0),
          v6 = System_String__Format(v9, NumberFormat, 0),
          !Instance) )
    {
      sub_1C71608(v6, v7);
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
  if ( (byte_4CC4A52 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnClickListViewFriendship__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantStatusListViewManager_o *)sub_1C713B0(&StringLiteral_12001/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/);
    byte_4CC4A52 = 1;
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
        v4 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickListViewFriendship__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0);
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
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v14, 0);
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
      sub_1C71608(this, method);
    }
  }
}


void ServantStatusListViewManager__OnClickPortraitCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        5,
        (unsigned int)id,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickRandomLimitCountMask(
        ServantStatusListViewManager_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        12,
        (unsigned int)maskType,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        10,
        (unsigned int)index,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickServantQuest(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        7,
        (unsigned int)questId,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickServantTdSpeed(
        ServantStatusListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        8,
        (unsigned int)type,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        11,
        (unsigned int)index,
        v9->fields.method);
  }
}


void ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        11,
        (unsigned int)index,
        v9->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__OnClickUnSealedQuestTransition(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusListViewManager_o *v9; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x19
  ServantStatusListViewManager_o *v15; // x20
  ServantStatusListViewManager___c_c *v16; // x8
  System_Action_o *_9__62_1; // x22
  System_String_o *v18; // x21
  Il2CppObject *v19; // x23
  struct ServantStatusListViewManager___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  ServantStatusListViewManager___c_c *v29; // x8
  Il2CppObject *v30; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  v9 = this;
  if ( (byte_4CC4A54 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_0__);
    sub_1C713B0(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_1__);
    sub_1C713B0(&ServantStatusListViewManager___c_TypeInfo);
    sub_1C713B0(&StringLiteral_11947/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11948/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4A54 = 1;
  }
  if ( v9->fields.initMode == 1 )
  {
    mainInfo = v9->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_30;
    if ( mainInfo->fields.isEnableServantQuest )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v9->fields.callbackFunc;
        v9->fields.callbackFunc = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            7,
            (unsigned int)questId,
            callbackFunc->fields.method);
        return;
      }
      v27 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v28 = (System_Reflection_MethodBase_o *)sub_1C71394(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0);
      v15 = this;
      v29 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v29 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__62_1 = v29->static_fields->__9__62_1;
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      if ( _9__62_1 )
      {
        if ( !Instance )
          goto LABEL_30;
LABEL_20:
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v18,
          (System_String_o *)v15,
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
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = ServantStatusListViewManager___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v29->static_fields->__9;
      _9__62_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__62_1,
        v30,
        Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_1__,
        0);
      static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__62_1 = _9__62_1;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__62_1,
        (int32_t)_9__62_1,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      if ( Instance )
        goto LABEL_20;
    }
    else
    {
      v12 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C713C8(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C71394(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/, 0);
      v15 = this;
      v16 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo);
        v16 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__62_1 = v16->static_fields->__9__62_0;
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__62_1 )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = ServantStatusListViewManager___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v16->static_fields->__9;
        _9__62_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__62_1,
          v19,
          Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__62_0__,
          0);
        v20 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v20->__9__62_0 = _9__62_1;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->__9__62_0, (int32_t)_9__62_1, v21, v22, v23, v24, v25, v26);
      }
      if ( Instance )
        goto LABEL_20;
    }
LABEL_30:
    sub_1C71608(this, *(_QWORD *)&questId);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  void (__fastcall *invoke_impl)(intptr_t, __int64, __int64, intptr_t); // x4
  intptr_t method_code; // x0
  intptr_t v14; // x3
  __int64 v15; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( index == 2 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v9->fields.invoke_impl;
        method_code = v9->fields.method_code;
        v14 = v9->fields.method;
        v15 = 2;
        goto LABEL_8;
      }
      if ( index == 1 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))v9->fields.invoke_impl;
        method_code = v9->fields.method_code;
        v14 = v9->fields.method;
        v15 = 1;
LABEL_8:
        invoke_impl(method_code, 25, v15, v14);
      }
    }
  }
}


void ServantStatusListViewManager__OnLongPushListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        2,
        0,
        v9->fields.method);
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

  if ( (byte_4CC4A4E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4A4E = 1;
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
          sub_1C71608(v8, v7);
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

  if ( (byte_4CC4A4C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC4A4C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      objectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v11, v12);
      ServantStatusListViewObject__Init_37769504((ServantStatusListViewObject_o *)current, mode, v10, delay, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__RequestListObject_37768484(
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

  if ( (byte_4CC4A4D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_1C713B0(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC4A4D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      objectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v9, v10);
      ServantStatusListViewObject__Init_37769588((ServantStatusListViewObject_o *)current, mode, v8, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


void ServantStatusListViewManager__SetMode(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        ServantStatusListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_37768252(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__SetMode_37768252(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4CC4A4B & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_4CC4A4B = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C71608(this, *(_QWORD *)&mode);
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
      ServantStatusListViewManager__RequestListObject_37768484(v4, v6, method);
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
    sub_1C71608(this, obj);
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
  ServantStatusListViewObject__Init_37767580(obj, v4, method);
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

  if ( (byte_4CC4A44 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_4CC4A44 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
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

  if ( (byte_4CC4A45 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_4CC4A45 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
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
  if ( (byte_4CC4A43 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4A43 = 1;
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
      sub_1C71608(v6, v7);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA477C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA4724;
}


System_IAsyncResult_o *ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = id;
  v12 = result;
  if ( (byte_4CC4A57 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_ResultKind_TypeInfo);
    byte_4CC4A57 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC4A58 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager___c_TypeInfo);
    byte_4CC4A58 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantStatusListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantStatusListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CC4A59 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC4A59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__62_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC4A5A & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC4A5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__62_1(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC4A5B & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC4A5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}