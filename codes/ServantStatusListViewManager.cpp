void ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  System_Array_o *v2; // x0
  System_RuntimeFieldHandle_o v3; // x1
  System_Array_o *v4; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Array_o *v12; // x0
  System_RuntimeFieldHandle_o v13; // x1
  System_Array_o *v14; // x19
  struct ServantStatusListViewManager_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Array_o *v22; // x0
  System_RuntimeFieldHandle_o v23; // x1
  System_Array_o *v24; // x19
  struct ServantStatusListViewManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  ServantStatusListViewManager_c *v41; // x8
  struct ServantStatusListViewManager_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct ServantStatusListViewItemDraw_Kind_array *v49; // x1
  struct ServantStatusListViewManager_StaticFields *v50; // x0

  if ( (byte_596DF77 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDraw_Kind___TypeInfo);
    sub_2213A60(&ServantStatusListViewManager_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__90890B568BE5949487E4890DB56FB55081C81932511CEFD53045FD4B504E3CCE);
    sub_2213A60(&Field__PrivateImplementationDetails__999472C34694AC46126CF9CB75AE38A2FF5078D1462CE5523FA9BE90384625E7);
    sub_2213A60(&Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE);
    byte_596DF77 = 1;
  }
  v1 = ServantStatusListViewItemDraw_Kind___TypeInfo;
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v2 = (System_Array_o *)sub_2213B20(v1, 15);
  v3.fields.value = Field__PrivateImplementationDetails__999472C34694AC46126CF9CB75AE38A2FF5078D1462CE5523FA9BE90384625E7;
  v4 = v2;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v2, v3, 0);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->normalKindList, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  v12 = (System_Array_o *)sub_2213B20(ServantStatusListViewItemDraw_Kind___TypeInfo, 15);
  v13.fields.value = Field__PrivateImplementationDetails__90890B568BE5949487E4890DB56FB55081C81932511CEFD53045FD4B504E3CCE;
  v14 = v12;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v12, v13, 0);
  v15 = ServantStatusListViewManager_TypeInfo->static_fields;
  v15->grandKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->grandKindList, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = (System_Array_o *)sub_2213B20(ServantStatusListViewItemDraw_Kind___TypeInfo, 3);
  v23.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  v24 = v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v22, v23, 0);
  v25 = ServantStatusListViewManager_TypeInfo->static_fields;
  v25->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->equipKindList, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = sub_2213B20(ServantStatusListViewItemDraw_Kind___TypeInfo, 1);
  if ( !v32 )
    goto LABEL_8;
  v40 = v32;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_9;
  v41 = ServantStatusListViewManager_TypeInfo;
  *(_DWORD *)(v32 + 32) = 12;
  v42 = v41->static_fields;
  v42->npcFollowerEquipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->npcFollowerEquipKindList, v40, v34, v35, v36, v37, v38, v39);
  v32 = sub_2213B20(ServantStatusListViewItemDraw_Kind___TypeInfo, 1);
  if ( !v32 )
LABEL_8:
    sub_2213CDC(v32, v33);
  v49 = (struct ServantStatusListViewItemDraw_Kind_array *)v32;
  if ( !*(_DWORD *)(v32 + 24) )
LABEL_9:
    sub_2213CE4(v32);
  v50 = ServantStatusListViewManager_TypeInfo->static_fields;
  v49->m_Items[0] = 14;
  v50->commandCodeKindList = v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->commandCodeKindList, (int32_t)v49, v43, v44, v45, v46, v47, v48);
}


void ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__c *v10; // x0
  System_Collections_Generic_List_T__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596DF76 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo);
    byte_596DF76 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo;
  this->fields.isInput = 1;
  v11 = (System_Collections_Generic_List_T__o *)sub_2213CCC(v10);
  System_Collections_Generic_List_Int32Enum____ctor(
    v11,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentKindList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  int v10; // w20
  float value; // s0
  float v12; // s1
  int32_t v13; // w20
  float v14; // s9
  ServantStatusListViewObject_o *v15; // x21
  float v16; // s8
  const MethodInfo *v17; // x1
  float v18; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF6C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_596DF6C = 1;
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
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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
    sub_2213CDC(objectList, method);
  }
  v12 = (float)v10;
  v13 = 0;
  v14 = -(float)((float)((float)-(float)(y + (float)(v12 * -0.5)) - ViewSize.fields.y) * value);
  while ( v13 < objectList->fields._size )
  {
    objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                objectList,
                                                                v13,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    if ( !objectList )
      goto LABEL_17;
    v15 = (ServantStatusListViewObject_o *)objectList;
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)objectList,
                                                                0);
    if ( !objectList )
      goto LABEL_17;
    v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0);
    v16 = v20.fields.y;
    v18 = vcvts_n_f32_s32(ServantStatusListViewObject__GetSize(v15, v17), 1u);
    if ( (float)(v14 + (float)(ViewSize.fields.y * -0.35)) > (float)(v16 - v18) )
    {
      this->fields.cachedViewTargetGap = (float)(v16 + v18) - v14;
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

  if ( (byte_596DF6B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_596DF6B = 1;
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
               (const MethodInfo_446A6E4 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
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
  __int64 v7; // x2
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *currentKindList; // x8
  UnityEngine_Object_o *scrollView; // x21
  UnityEngine_Object_c *v10; // x0
  int v11; // w9
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Component_object; // x21
  float v21; // s8
  float v22; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x21
  __int64 v24; // x2
  struct ServantStatusListViewItem_o *v25; // x8
  ServantStatusListViewManager_c **v26; // x27
  __int64 *v27; // x8
  __int64 v28; // x22
  float v29; // s8
  unsigned __int64 v30; // x23
  const MethodInfo_38F34CC **v31; // x20
  __int64 v32; // x29
  int32_t v33; // w24
  unsigned int v34; // w25
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v36; // x8
  struct ServantStatusListViewItem_o *v37; // x8
  __int64 v38; // x26
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v41; // x8
  Il2CppObject *v42; // x25
  Il2CppObject *v43; // x26
  const MethodInfo_38F34CC **v44; // x21
  ServantStatusListViewManager_c **v45; // x20
  Il2CppObject *v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  Il2CppObject *v49; // x27
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct ServantStatusListViewItem_o *v56; // x1
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  int32_t Size; // w0
  int v60; // w28
  UnityEngine_Transform_o *v61; // x27
  int v62; // w28
  float v63; // s8
  UnityEngine_Transform_o *v64; // x27
  UnityEngine_Transform_o *v65; // x27
  int32_t layer; // w0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  ServantStatusListViewManager_c *v79; // x8
  struct ServantStatusListViewManager_StaticFields *static_fields; // x9
  __int64 v81; // x8
  int32_t LIST_BLANK; // w10
  float v83; // s0
  __int64 v84; // x10
  UnityEngine_Object_o *v85; // x20
  struct ServantEntity_o *svtEntity; // x8
  int v87; // w8
  int32_t EquipListCount; // w8
  bool v89; // cc
  int v90; // w8
  ServantStatusListViewItem_o *v91; // [xsp+10h] [xbp-80h]
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF68 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantStatusListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_5486/*"DispObject"*/);
    byte_596DF68 = 1;
  }
  tdInfo = 0;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_136;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  v10 = UnityEngine_Object_TypeInfo;
  v11 = currentKindList->fields._version + 1;
  currentKindList->fields._size = 0;
  currentKindList->fields._version = v11;
  if ( !*(&v10->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v10, v6, v7);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( !transform )
      goto LABEL_136;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_136;
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_136;
      v21 = *((float *)&Component_object[20].monitor + 1);
      v22 = *(float *)&Component_object[21].klass;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_136;
      v93.fields.x = -v21;
      v93.fields.y = -v22;
      v93.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v93, 0);
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_136;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo,
    (int32_t)mainInfo,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v25 = this->fields.mainInfo;
  if ( !v25 )
    goto LABEL_136;
  v26 = &ServantStatusListViewManager_TypeInfo;
  v91 = mainInfo;
  if ( v25->fields.commandCodeEntity )
  {
    transform = (__int64)ServantStatusListViewManager_TypeInfo;
    if ( !*(&ServantStatusListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v6, v24);
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
    }
    v27 = (__int64 *)(*(_QWORD *)(transform + 184) + 40LL);
  }
  else
  {
    svtEntity = v25->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_136;
    transform = SvtType__IsServantEquip(svtEntity->fields.type, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_136;
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      v87 = *(&ServantStatusListViewManager_TypeInfo->_2.cctor_finished + 1);
      if ( (*p_mainInfo)->fields.isNpcFollowerServantEquip )
      {
        if ( !v87 )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v6, v24);
          transform = (__int64)ServantStatusListViewManager_TypeInfo;
        }
        v27 = (__int64 *)(*(_QWORD *)(transform + 184) + 32LL);
      }
      else
      {
        if ( !v87 )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v6, v24);
          transform = (__int64)ServantStatusListViewManager_TypeInfo;
        }
        v27 = (__int64 *)(*(_QWORD *)(transform + 184) + 24LL);
      }
    }
    else
    {
      if ( !mainInfo )
        goto LABEL_136;
      EquipListCount = ServantStatusListViewItem__GetEquipListCount(mainInfo, 0);
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      v89 = EquipListCount < 2;
      v90 = *(&ServantStatusListViewManager_TypeInfo->_2.cctor_finished + 1);
      if ( v89 )
      {
        if ( !v90 )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v6, v24);
          transform = (__int64)ServantStatusListViewManager_TypeInfo;
        }
        v27 = (__int64 *)(*(_QWORD *)(transform + 184) + 8LL);
      }
      else
      {
        if ( !v90 )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v6, v24);
          transform = (__int64)ServantStatusListViewManager_TypeInfo;
        }
        v27 = (__int64 *)(*(_QWORD *)(transform + 184) + 16LL);
      }
    }
  }
  v28 = *v27;
  if ( *v27 && this->fields.statusObjectList && (int)*(_QWORD *)(v28 + 24) >= 1 )
  {
    v29 = 0.0;
    v30 = 0;
    v31 = (const MethodInfo_38F34CC **)&Method_UnityEngine_Object_Instantiate_GameObject___;
    v32 = (unsigned int)*(_QWORD *)(v28 + 24);
    do
    {
      if ( v30 >= *(unsigned int *)(v28 + 24) )
LABEL_137:
        sub_2213CE4(transform);
      v33 = *(_DWORD *)(v28 + 4 * v30 + 32);
      v34 = v33 - 1;
      if ( v33 >= 1 )
      {
        statusObjectList = this->fields.statusObjectList;
        if ( !statusObjectList )
          goto LABEL_136;
        if ( v33 <= SLODWORD(statusObjectList->max_length) )
        {
          switch ( v33 )
          {
            case 3:
            case 20:
              v36 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_136;
              if ( !v36->fields.isEquipShowMode )
                goto LABEL_110;
              transform = (__int64)v36->fields.svtEntity;
              if ( !transform )
                goto LABEL_136;
              transform = ServantEntity__get_IsServant((ServantEntity_o *)transform, 0);
              if ( (transform & 1) == 0 )
                goto LABEL_110;
              if ( !*p_mainInfo )
                goto LABEL_136;
              if ( !(*p_mainInfo)->fields.isCollection )
                goto LABEL_73;
              goto LABEL_110;
            case 4:
            case 12:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_136;
              transform = ServantStatusListViewItem__IsEnableSkillInfo((ServantStatusListViewItem_o *)transform, 0);
              if ( (transform & 1) == 0 )
                goto LABEL_110;
              goto LABEL_73;
            case 5:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_136;
              transform = ServantStatusListViewItem__IsEnablePassiveSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0);
              if ( (transform & 1) != 0 )
                goto LABEL_73;
              goto LABEL_110;
            case 6:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_136;
              transform = ServantStatusListViewItem__IsEnableAppendSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0);
              if ( (transform & 1) == 0 )
                goto LABEL_110;
              goto LABEL_73;
            case 7:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_136;
              transform = ServantStatusListViewItem__GetNpInfo((ServantStatusListViewItem_o *)transform, &tdInfo, 0);
              if ( !tdInfo )
                goto LABEL_136;
              if ( tdInfo->fields.id <= 0 )
                goto LABEL_110;
              goto LABEL_73;
            case 10:
              v37 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_136;
              v38 = 0;
              break;
            case 15:
              if ( !*p_mainInfo )
                goto LABEL_136;
              if ( !(*p_mainInfo)->fields.isEnableServantQuest )
                goto LABEL_110;
              goto LABEL_73;
            case 16:
              if ( !*p_mainInfo )
                goto LABEL_136;
              if ( !(*p_mainInfo)->fields.enableTdSpeed )
                goto LABEL_110;
              goto LABEL_73;
            case 17:
              if ( !*p_mainInfo )
                goto LABEL_136;
              if ( !(*p_mainInfo)->fields.enableChangeVoice )
                goto LABEL_110;
              goto LABEL_73;
            case 18:
            case 19:
              if ( !*p_mainInfo )
                goto LABEL_136;
              if ( !(*p_mainInfo)->fields.isDisplayRandomLimitCount )
                goto LABEL_110;
              goto LABEL_73;
            case 21:
              if ( !v91 )
                goto LABEL_136;
              if ( !v91->fields.enableVoiceEffect )
                goto LABEL_110;
              goto LABEL_73;
            default:
              goto LABEL_73;
          }
          while ( 1 )
          {
            svtCommentEntityList = v37->fields.svtCommentEntityList;
            if ( !svtCommentEntityList )
              goto LABEL_136;
            max_length = svtCommentEntityList->max_length;
            if ( (int)v38 >= max_length )
              goto LABEL_110;
            if ( (unsigned int)v38 >= max_length )
              goto LABEL_137;
            transform = (__int64)svtCommentEntityList->m_Items[v38];
            if ( !transform )
              goto LABEL_136;
            transform = ServantCommentEntity__IsConst((ServantCommentEntity_o *)transform, 0);
            if ( (transform & 1) == 0 )
              break;
            v37 = *p_mainInfo;
            ++v38;
            if ( !*p_mainInfo )
              goto LABEL_136;
          }
LABEL_73:
          v41 = this->fields.statusObjectList;
          if ( !v41 )
            goto LABEL_136;
          if ( v34 >= LODWORD(v41->max_length) )
            goto LABEL_137;
          v42 = (Il2CppObject *)v41->m_Items[v34];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v24);
          v43 = UnityEngine_Object__Instantiate_object_(v42, *v31);
          transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0, 0);
          if ( (transform & 1) != 0 )
          {
            if ( !v43 )
              goto LABEL_136;
            v44 = v31;
            v45 = v26;
            v46 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v43,
                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
            v49 = GameObjectExtensions__FindComponent_object_(
                    (UnityEngine_GameObject_o *)v43,
                    (System_String_o *)StringLiteral_5486/*"DispObject"*/,
                    (const MethodInfo_38B81DC *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
            transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0, 0);
            if ( (transform & 1) != 0 )
            {
              if ( !v49 )
                goto LABEL_136;
              LODWORD(v49[7].monitor) = v33;
            }
            if ( !v46 )
              goto LABEL_136;
            v56 = this->fields.mainInfo;
            v46[2].monitor = v56;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v46[2].monitor, (int32_t)v56, v50, v51, v52, v53, v54, v55);
            ServantStatusListViewObject__Init_44599120((ServantStatusListViewObject_o *)v46, 2, v57);
            Size = ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v46, v58);
            v60 = Size >= 0 ? Size : Size + 1;
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0);
            if ( !this->fields.listParent )
              goto LABEL_136;
            v61 = (UnityEngine_Transform_o *)transform;
            transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.listParent, 0);
            if ( !v61 )
              goto LABEL_136;
            UnityEngine_Transform__set_parent(v61, (UnityEngine_Transform_o *)transform, 0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0);
            if ( !transform )
              goto LABEL_136;
            v62 = v60 >> 1;
            v94.fields.z = 0.0;
            v63 = v29 - (float)v62;
            v94.fields.x = 0.0;
            v94.fields.y = v63;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v94, 0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0);
            v64 = (UnityEngine_Transform_o *)transform;
            if ( !byte_5969AE6 )
            {
              transform = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
              byte_5969AE6 = 1;
            }
            if ( !v64 )
              goto LABEL_136;
            UnityEngine_Transform__set_localRotation(
              v64,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0);
            v65 = (UnityEngine_Transform_o *)transform;
            if ( !byte_5969AE5 )
            {
              transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE5 = 1;
            }
            if ( !v65 )
              goto LABEL_136;
            UnityEngine_Transform__set_localScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            transform = (__int64)this->fields.listParent;
            if ( !transform )
              goto LABEL_136;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v43, layer, 0);
            ServantStatusListViewObject__SetBaseTransform((ServantStatusListViewObject_o *)v46, v67);
            ServantStatusListViewObject__SetManager((ServantStatusListViewObject_o *)v46, this, v68);
            transform = (__int64)this->fields.objectList;
            if ( !transform )
              goto LABEL_136;
            v75 = *(_QWORD *)(transform + 16);
            v76 = Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v75 )
              goto LABEL_136;
            v77 = *(int *)(transform + 24);
            v26 = v45;
            v31 = v44;
            p_mainInfo = &this->fields.mainInfo;
            if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v46,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = v75 + 8 * v77;
              *(_DWORD *)(transform + 24) = v77 + 1;
              *(_QWORD *)(v78 + 32) = v46;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v78 + 32), (int32_t)v46, v69, v70, v71, v72, v73, v74);
            }
            v79 = *v26;
            if ( !*(&(*v26)->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(*v26, v6, v24);
              v79 = *v26;
            }
            transform = (__int64)this->fields.currentKindList;
            if ( !transform )
              goto LABEL_136;
            static_fields = v79->static_fields;
            v81 = *(_QWORD *)(transform + 16);
            LIST_BLANK = static_fields->LIST_BLANK;
            ++*(_DWORD *)(transform + 28);
            if ( !v81 )
              goto LABEL_136;
            v83 = (float)(LIST_BLANK + v62);
            v84 = *(int *)(transform + 24);
            v29 = v63 - v83;
            if ( (unsigned int)v84 >= *(_DWORD *)(v81 + 24) )
            {
              System_Collections_Generic_List_Int32Enum___AddWithResize(
                (System_Collections_Generic_List_T__o *)transform,
                v33,
                *(const MethodInfo_4469A88 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__
                                                           + 4)
                                                         + 192LL)
                                             + 112LL));
            }
            else
            {
              *(_DWORD *)(transform + 24) = v84 + 1;
              *(_DWORD *)(v81 + 4 * v84 + 32) = v33;
            }
          }
        }
      }
LABEL_110:
      ++v30;
    }
    while ( v30 != v32 );
  }
  v85 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v24);
  if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
      return;
    }
LABEL_136:
    sub_2213CDC(transform, v6);
  }
}


void ServantStatusListViewManager__DestroyList(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v13; // x8
  System_String_o *size; // x2
  int v15; // w9
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596DF6A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF6A = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v20, 0, sizeof(v20));
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v20 = v19;
  v19.fields._list = 0;
  *(_QWORD *)&v19.fields._index = &v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_2213CDC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v13 = this->fields.objectList;
  if ( !v13 )
    goto LABEL_20;
  size = (System_String_o *)(unsigned int)v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, (int32_t)size, 0);
  this->fields.mainInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, 0, size, v8, v9, v10, v11, v12);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(objectList, method);
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
  float v14; // s1
  float v15; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF69 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    byte_596DF69 = 1;
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
            v15 = 1.0;
            goto LABEL_18;
          }
        }
        else
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v4 - 1,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
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
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
                    if ( scrollView )
                    {
                      v11 = (ServantStatusListViewObject_o *)scrollView;
                      scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
                      if ( scrollView )
                      {
                        v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
                        v12 = v17.fields.y;
                        scrollView = (void *)ServantStatusListViewObject__GetSize(v11, v13);
                        if ( this->fields.scrollBar )
                        {
                          v14 = vcvts_n_f32_s32((unsigned int)scrollView, 1u);
                          scrollView = this->fields.scrollBar;
                          v15 = (float)-(float)((float)(v12 + v14) - this->fields.cachedViewTargetGap)
                              / (float)((float)-(float)(y + (float)((float)v10 * -0.5)) - ViewSize.fields.y);
LABEL_18:
                          UIProgressBar__set_value((UIProgressBar_o *)scrollView, v15, 0);
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
    sub_2213CDC(scrollView, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v13; // x0
  __int64 v14; // x1
  unsigned int ButtonIndex; // w19
  int v16; // w0
  __int64 v17; // x1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v11 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)ownerObject, (System_String_o *)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_2213CDC(v13, v14);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      0);
      v16 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, const MethodInfo *))ownerObject->klass->vtable._4_GetKind.methodPtr)(
              ownerObject,
              ownerObject->klass->vtable._4_GetKind.method);
      switch ( v16 )
      {
        case 16:
          v17 = 8;
          goto LABEL_11;
        case 21:
          v17 = 26;
          goto LABEL_11;
        case 17:
          v17 = 9;
LABEL_11:
          ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v11->fields.invoke_impl)(
            v11->fields.method_code,
            v17,
            ButtonIndex,
            v11->fields.method);
          break;
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusListViewManager_o *v10; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x22
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x19
  __int64 v20; // x2
  ServantStatusListViewManager_o *v21; // x20
  ServantStatusListViewManager___c_c *v22; // x8
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__60_0; // x22
  System_String_o *v25; // x21
  Il2CppObject *v26; // x23
  struct ServantStatusListViewManager___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  v10 = this;
  if ( (byte_596DF74 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewManager_OnClickCombine__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantStatusListViewManager___c__OnClickCombine_b__60_0__);
    sub_2213A60(&ServantStatusListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_12454/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DF74 = 1;
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v10->fields.callbackFunc,
          0,
          *(System_String_o **)&index,
          (System_String_o *)method,
          v4,
          v5,
          v6,
          v7);
        if ( callbackFunc )
        {
          v13 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
            v13 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickCombine__);
          v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
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
        v15 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickCombine__);
      v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0);
      v21 = this;
      v22 = ServantStatusListViewManager___c_TypeInfo;
      if ( !*(&ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo, *(_QWORD *)&kind, v20);
        v22 = ServantStatusListViewManager___c_TypeInfo;
      }
      static_fields = v22->static_fields;
      _9__60_0 = static_fields->__9__60_0;
      v25 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__60_0 )
      {
        if ( !*(&v22->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v22, *(_QWORD *)&kind, v20);
          static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)static_fields->__9;
        _9__60_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__60_0, v26, Method_ServantStatusListViewManager___c__OnClickCombine_b__60_0__, 0);
        v27 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v27->__9__60_0 = _9__60_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v27->__9__60_0,
          (int32_t)_9__60_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v25,
          (System_String_o *)v21,
          _9__60_0,
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
    sub_2213CDC(this, *(_QWORD *)&kind);
  }
}


void ServantStatusListViewManager__OnClickCommandCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        3,
        (unsigned int)id,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickCommandCode(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        6,
        (unsigned int)id,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickFaceCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        4,
        (unsigned int)id,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickListView(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  __int64 Kind; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v12, v13);
      Kind = (unsigned int)ServantStatusListViewObject__GetKind(obj, v13);
      ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        0,
        Kind,
        v10->fields.method);
    }
  }
}


void ServantStatusListViewManager__OnClickListViewEquip(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( (unsigned int)(index - 1) <= 1 )
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
          v10->fields.method_code,
          24,
          (unsigned int)index,
          v10->fields.method);
    }
  }
}


void ServantStatusListViewManager__OnClickListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  bool IsEquip; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  ServantStatusListViewItem_o *v10; // x8
  System_String_o *v11; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_596DF71 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_12507/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_596DF71 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    IsEquip = ServantStatusListViewItem__get_IsEquip(mainInfo, 0);
    v5 = Method_ServantStatusListViewManager_OnClickListViewEquipExp__;
    if ( IsEquip )
    {
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
      v10 = this->fields.mainInfo;
      if ( v10 )
      {
        v11 = (System_String_o *)mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v10, 0);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v11, NumberFormat, 0);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0);
          return;
        }
      }
LABEL_17:
      sub_2213CDC(mainInfo, method);
    }
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__OnClickListViewEquipExp_44601736(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  bool IsEquipByIndex; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x21
  ServantStatusListViewItem_o *v12; // x8
  System_String_o *v13; // x20
  int32_t EquipExpByIndex; // w0
  Il2CppObject *NumberFormat; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_596DF72 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewManager_OnClickListViewEquipExp___91820432);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_12507/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_596DF72 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    IsEquipByIndex = ServantStatusListViewItem__IsEquipByIndex(mainInfo, index, 0);
    v7 = Method_ServantStatusListViewManager_OnClickListViewEquipExp___91820432;
    if ( IsEquipByIndex )
    {
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp___91820432 + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickListViewEquipExp___91820432);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
      v12 = this->fields.mainInfo;
      if ( v12 )
      {
        v13 = (System_String_o *)mainInfo;
        EquipExpByIndex = ServantStatusListViewItem__GetEquipExpByIndex(v12, index, 0);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExpByIndex, 0);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v13, NumberFormat, 0);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0);
          return;
        }
      }
LABEL_17:
      sub_2213CDC(mainInfo, *(_QWORD *)&index);
    }
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp___91820432 + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickListViewEquipExp___91820432);
    v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
  }
}


void ServantStatusListViewManager__OnClickListViewExp(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v11; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_596DF70 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewManager_OnClickListViewExp__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_12507/*"SERVANT_STATUS_TOTAL_EXP"*/);
    byte_596DF70 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    v3 = Method_ServantStatusListViewManager_OnClickListViewExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewExp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickListViewExp__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SERVANT_STATUS_TOTAL_EXP"*/, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v11 = v8,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0),
          v8 = System_String__Format(v11, NumberFormat, 0),
          !Instance) )
    {
      sub_2213CDC(v8, v9);
    }
    CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, v8, 0);
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *v10; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  ServantStatusListViewManager_o *v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v2 = this;
  if ( (byte_596DF73 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewManager_OnClickListViewFriendship__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantStatusListViewManager_o *)sub_2213A60(&StringLiteral_12508/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/);
    byte_596DF73 = 1;
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
        v4 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickListViewFriendship__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12508/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0);
      v10 = v2->fields.mainInfo;
      if ( v10 )
      {
        userSvtCollectionEntity = v10->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v12 = this;
          v13 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v14 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v9);
          *(_QWORD *)&v17.fields.currentCryptoKey = v13;
          *(_QWORD *)&v17.fields.fakeValue = v14;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v15, 0);
          this = (ServantStatusListViewManager_o *)System_String__Format((System_String_o *)v12, NumberFormat, 0);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)this, 0);
            return;
          }
        }
      }
LABEL_17:
      sub_2213CDC(this, method);
    }
  }
}


void ServantStatusListViewManager__OnClickPortraitCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        5,
        (unsigned int)id,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickRandomLimitCountMask(
        ServantStatusListViewManager_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        12,
        (unsigned int)maskType,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        10,
        (unsigned int)index,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickServantQuest(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        7,
        (unsigned int)questId,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickServantTdSpeed(
        ServantStatusListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        8,
        (unsigned int)type,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        11,
        (unsigned int)index,
        v10->fields.method);
  }
}


void ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        11,
        (unsigned int)index,
        v10->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__OnClickUnSealedQuestTransition(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusListViewManager_o *v9; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x19
  __int64 v17; // x2
  ServantStatusListViewManager_o *v18; // x20
  ServantStatusListViewManager___c_c *v19; // x8
  struct ServantStatusListViewManager___c_StaticFields *v20; // x9
  System_Action_o *_9__61_1; // x22
  System_String_o *v22; // x21
  Il2CppObject *v23; // x23
  struct ServantStatusListViewManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x2
  ServantStatusListViewManager___c_c *v36; // x8
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x9
  Il2CppObject *v38; // x23
  struct ServantStatusListViewManager___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  v9 = this;
  if ( (byte_596DF75 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__61_0__);
    sub_2213A60(&Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__61_1__);
    sub_2213A60(&ServantStatusListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_12454/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12455/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/);
    this = (ServantStatusListViewManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DF75 = 1;
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v9->fields.callbackFunc,
          0,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            7,
            (unsigned int)questId,
            callbackFunc->fields.method);
        return;
      }
      v31 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0);
      v18 = this;
      v36 = ServantStatusListViewManager___c_TypeInfo;
      if ( !*(&ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo, *(_QWORD *)&questId, v35);
        v36 = ServantStatusListViewManager___c_TypeInfo;
      }
      static_fields = v36->static_fields;
      _9__61_1 = static_fields->__9__61_1;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
      if ( _9__61_1 )
      {
        if ( !Instance )
          goto LABEL_30;
LABEL_20:
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v22,
          (System_String_o *)v18,
          _9__61_1,
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
      if ( !*(&v36->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v36, *(_QWORD *)&questId, v35);
        static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__61_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__61_1,
        v38,
        Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__61_1__,
        0);
      v39 = ServantStatusListViewManager___c_TypeInfo->static_fields;
      v39->__9__61_1 = _9__61_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__61_1, (int32_t)_9__61_1, v40, v41, v42, v43, v44, v45);
      if ( Instance )
        goto LABEL_20;
    }
    else
    {
      v12 = Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewManager_OnClickUnSealedQuestTransition__);
      v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12455/*"SERVANT_STATUS_NOT_MOVE_SEALED_QUEST_TRANSITION_DIALOG_MESSAGE"*/, 0);
      v18 = this;
      v19 = ServantStatusListViewManager___c_TypeInfo;
      if ( !*(&ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo, *(_QWORD *)&questId, v17);
        v19 = ServantStatusListViewManager___c_TypeInfo;
      }
      v20 = v19->static_fields;
      _9__61_1 = v20->__9__61_0;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__61_1 )
      {
        if ( !*(&v19->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v19, *(_QWORD *)&questId, v17);
          v20 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)v20->__9;
        _9__61_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__61_1,
          v23,
          Method_ServantStatusListViewManager___c__OnClickUnSealedQuestTransition_b__61_0__,
          0);
        v24 = ServantStatusListViewManager___c_TypeInfo->static_fields;
        v24->__9__61_0 = _9__61_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v24->__9__61_0,
          (int32_t)_9__61_1,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      if ( Instance )
        goto LABEL_20;
    }
LABEL_30:
    sub_2213CDC(this, *(_QWORD *)&questId);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v10; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( (unsigned int)(index - 1) <= 1 )
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v10->fields.invoke_impl)(
          v10->fields.method_code,
          25,
          (unsigned int)index,
          v10->fields.method);
    }
  }
}


void ServantStatusListViewManager__OnLongPushListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UIScrollView_o *v9; // x0

  if ( (byte_596DF6F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF6F = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v9,
                1,
                v9->klass->vtable._8_UpdateScrollbars.method),
              (v9 = this->fields.scrollView) == 0) )
        {
          sub_2213CDC(v9, v8);
        }
        UIScrollView__UpdatePosition(v9, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__RequestListObject(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  const MethodInfo_448473C *v7; // x1
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DF6E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    sub_2213A60(&Method_ServantStatusListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DF6E = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v15, 0, sizeof(v15));
  if ( !objectList )
    sub_2213CDC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v7 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      objectList,
      v7);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v10, v11);
      ServantStatusListViewObject__Init_44600556((ServantStatusListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


void ServantStatusListViewManager__SetMode(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        ServantStatusListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_44599780(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__SetMode_44599780(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_596DF6D & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__);
    byte_596DF6D = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_2213CDC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  if ( mode <= 4 )
  {
    if ( mode > 2 )
    {
      if ( mode == 3 )
        v6 = 4;
      else
        v6 = 5;
      goto LABEL_23;
    }
    if ( mode == 1 )
    {
      ServantStatusListViewManager__set_IsInput(v4, 1, method);
      v6 = 3;
      goto LABEL_23;
    }
    if ( mode == 2 )
    {
      ServantStatusListViewManager__set_IsInput(v4, 0, method);
      v6 = 2;
      goto LABEL_23;
    }
  }
  else
  {
    if ( mode <= 6 )
    {
      if ( mode == 5 )
        v6 = 6;
      else
        v6 = 7;
      goto LABEL_23;
    }
    switch ( mode )
    {
      case 7:
        v6 = 8;
        goto LABEL_23;
      case 8:
        v6 = 9;
        goto LABEL_23;
      case 9:
        v6 = 10;
LABEL_23:
        ServantStatusListViewManager__RequestListObject(v4, v6, method);
        break;
    }
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
  if ( initMode == 7 )
  {
    if ( obj )
    {
      v4 = 8;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(this, obj);
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
  ServantStatusListViewObject__Init_44599120(obj, v4, method);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusListViewManager_o *v13; // x0
  ServantStatusListViewManager_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DF66 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_596DF66 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ServantStatusListViewManager_CallbackFunc_TypeInfo, v9, v10);
  ServantStatusListViewManager__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusListViewManager_o *v13; // x0
  ServantStatusListViewItem_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DF67 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    byte_596DF67 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ServantStatusListViewManager_CallbackFunc_TypeInfo, v9, v10);
  ServantStatusListViewManager__CreateList(v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewManager__set_IsInput(
        ServantStatusListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_596DF65 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF65 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  this->fields.isInput = v4;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, value, method);
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0);
    UIProgressBar__set_alpha(v9, alpha, 0);
  }
}


void ServantStatusListViewManager_CallbackFunc___ctor(
        ServantStatusListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20092F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200929C;
}


System_IAsyncResult_o *ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = id;
  if ( (byte_596DF78 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_ResultKind_TypeInfo);
    byte_596DF78 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DF79 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager___c_TypeInfo);
    byte_596DF79 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantStatusListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantStatusListViewManager___c_TypeInfo->static_fields,
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


void ServantStatusListViewManager___c___OnClickCombine_b__60_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DF7A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DF7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__61_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DF7B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DF7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantStatusListViewManager___c___OnClickUnSealedQuestTransition_b__61_1(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DF7C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DF7C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}