void __fastcall ServantStatusListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Array_o *v9; // x0
  int64_t v10; // x19
  struct ServantStatusListViewManager_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Array_o *v18; // x0
  int64_t v19; // x19
  struct ServantStatusListViewManager_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct ServantStatusListViewManager_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct ServantStatusListViewManager_StaticFields *v43; // x0
  System_RuntimeFieldHandle_o v44; // 0:w1.4
  System_RuntimeFieldHandle_o v45; // 0:w1.4

  if ( (byte_4B13238 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDraw_Kind___TypeInfo, v1, v2);
    sub_1BCA7E0(&ServantStatusListViewManager_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE,
      v5,
      v6);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6,
      v7,
      v8);
    byte_4B13238 = 1;
  }
  ServantStatusListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
  v9 = (System_Array_o *)sub_1BCA888(ServantStatusListViewItemDraw_Kind___TypeInfo, 14LL);
  v44.fields.value = Field__PrivateImplementationDetails__CB2359099BF6F2ED744E74C1A533F0BE32663C951F8183CF4714B62BCBC881B6;
  v10 = (int64_t)v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v9, v44, 0LL);
  static_fields = ServantStatusListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->normalKindList, v10, v12, v13, v14, v15, v16, v17);
  v18 = (System_Array_o *)sub_1BCA888(ServantStatusListViewItemDraw_Kind___TypeInfo, 3LL);
  v45.fields.value = Field__PrivateImplementationDetails__C58AD080632E6C3FD9726F64BBE6FDC978983708E1C0EF3E75340759306C67FE;
  v19 = (int64_t)v18;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v18, v45, 0LL);
  v20 = ServantStatusListViewManager_TypeInfo->static_fields;
  v20->equipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->equipKindList, v19, v21, v22, v23, v24, v25, v26);
  v27 = sub_1BCA888(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v27 )
    goto LABEL_8;
  v35 = v27;
  if ( !*(_DWORD *)(v27 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v27 + 32) = 12;
  v36 = ServantStatusListViewManager_TypeInfo->static_fields;
  v36->npcFollowerEquipKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->npcFollowerEquipKindList, v35, v29, v30, v31, v32, v33, v34);
  v27 = sub_1BCA888(ServantStatusListViewItemDraw_Kind___TypeInfo, 1LL);
  if ( !v27 )
LABEL_8:
    sub_1BCAA3C(v27, v28);
  v35 = v27;
  if ( !*(_DWORD *)(v27 + 24) )
LABEL_9:
    sub_1BCAA44(v27, v35);
  *(_DWORD *)(v27 + 32) = 14;
  v43 = ServantStatusListViewManager_TypeInfo->static_fields;
  v43->commandCodeKindList = (struct ServantStatusListViewItemDraw_Kind_array *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&v43->commandCodeKindList, v35, v37, v38, v39, v40, v41, v42);
}


void __fastcall ServantStatusListViewManager___ctor(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_T__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B13237 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo, v9, v10);
    byte_4B13237 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusListViewObject__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.isInput = 1;
  v21 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__TypeInfo,
                                                  v18,
                                                  v19,
                                                  v20);
  System_Collections_Generic_List_Int32Enum____ctor(
    v21,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___ctor__);
  this->fields.currentKindList = (struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.currentKindList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewManager__CacheViewTopContentsAndGap(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Component_o *v9; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  int v12; // w21
  float value; // s0
  float v14; // s9
  int32_t v15; // w20
  ServantStatusListViewObject_o *v16; // x21
  float v17; // s8
  float v18; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1322E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__, v4, v5);
    byte_4B1322E = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  this->fields.cachedViewTargetGap = 0.0;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( !size )
  {
    v15 = -1;
    goto LABEL_20;
  }
  objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              objectList,
                                                              size - 1,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  v9 = (UnityEngine_Component_o *)objectList;
  objectList = (System_Collections_Generic_List_object__o *)scrollView->fields.mPanel;
  if ( !objectList )
    goto LABEL_17;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)objectList, 0LL);
  if ( !v9
    || (objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(v9, 0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0LL),
        y = localPosition.fields.y,
        objectList = (System_Collections_Generic_List_object__o *)ServantStatusListViewObject__GetSize(
                                                                    (ServantStatusListViewObject_o *)v9,
                                                                    0LL),
        !this->fields.scrollBar)
    || (v12 = (int)objectList,
        value = UIProgressBar__get_value((UIProgressBar_o *)this->fields.scrollBar, 0LL),
        (objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(objectList, method);
  }
  v14 = value * (float)-(float)((float)-(float)(y + (float)((float)v12 * -0.5)) - ViewSize.fields.y);
  v15 = 0;
  while ( v15 < objectList->fields._size )
  {
    objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                objectList,
                                                                v15,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
    if ( !objectList )
      goto LABEL_17;
    v16 = (ServantStatusListViewObject_o *)objectList;
    objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)objectList,
                                                                0LL);
    if ( !objectList )
      goto LABEL_17;
    v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectList, 0LL);
    v17 = v20.fields.y;
    v18 = (float)ServantStatusListViewObject__GetSize(v16, 0LL) * 0.5;
    if ( (float)(v14 + (float)(ViewSize.fields.y * -0.35)) > (float)(v17 - v18) )
    {
      this->fields.cachedViewTargetGap = (float)(v17 + v18) - v14;
      break;
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v15;
    if ( !objectList )
      goto LABEL_17;
  }
LABEL_20:
  this->fields.cachedViewTargetIndex = v15;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__CacheViewTopTargetContents(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_T__o *currentKindList; // x0
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v9; // w0

  if ( (byte_4B1322D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__,
      *(_QWORD *)&kind,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v5, v6);
    byte_4B1322D = 1;
  }
  currentKindList = (System_Collections_Generic_List_T__o *)this->fields.currentKindList;
  if ( currentKindList )
  {
    objectList = this->fields.objectList;
    if ( objectList )
    {
      if ( objectList->fields._size >= 1 )
      {
        v9 = System_Collections_Generic_List_Int32Enum___IndexOf(
               currentKindList,
               kind,
               (const MethodInfo_35880E0 *)Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__IndexOf__);
        if ( v9 != -1 )
        {
          this->fields.cachedViewTargetIndex = v9;
          this->fields.cachedViewTargetGap = -10.0;
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewManager__CreateList(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 transform; // x0
  __int64 v24; // x1
  struct System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *currentKindList; // x8
  int v26; // w9
  UnityEngine_Object_o *scrollView; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  Il2CppObject *Component_object; // x20
  float v36; // s8
  float v37; // s9
  struct ServantStatusListViewItem_o **p_mainInfo; // x20
  struct ServantStatusListViewItem_o *v39; // x8
  ServantStatusListViewManager_c **v40; // x26
  __int64 *v41; // x8
  struct ServantEntity_o *svtEntity; // x8
  _BOOL4 isNpcFollowerServantEquip; // w21
  __int64 v44; // x8
  __int64 v45; // x29
  unsigned __int64 v46; // x21
  __int64 v47; // x22
  float v48; // s8
  int32_t v49; // w23
  il2cpp_array_size_t v50; // w24
  struct UnityEngine_GameObject_array *statusObjectList; // x8
  struct ServantStatusListViewItem_o *v52; // x8
  struct ServantStatusListViewItem_o *v53; // x8
  __int64 v54; // x25
  struct ServantCommentEntity_array *svtCommentEntityList; // x8
  int max_length; // w9
  struct UnityEngine_GameObject_array *v57; // x8
  Il2CppObject *v58; // x24
  Il2CppObject *v59; // x25
  ServantStatusListViewManager_c **v60; // x27
  Il2CppObject *v61; // x24
  __int64 v62; // x1
  Il2CppObject *v63; // x26
  int32_t Size; // w0
  int v65; // w28
  UnityEngine_Transform_o *v66; // x26
  int v67; // w28
  float v68; // s8
  __int64 v69; // x2
  UnityEngine_Transform_o *v70; // x26
  __int64 v71; // x2
  UnityEngine_Transform_o *v72; // x26
  int32_t layer; // w0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x8
  ServantStatusListViewManager_c *v84; // x8
  struct ServantStatusListViewManager_StaticFields *static_fields; // x9
  __int64 v86; // x8
  int32_t LIST_BLANK; // w11
  _QWORD *v88; // x9
  __int64 v89; // x10
  UnityEngine_Object_o *v90; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1322A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, mainInfo, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Clear__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantStatusListViewManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_5405/*"DispObject"*/, v21, v22);
    byte_4B1322A = 1;
  }
  tdInfo = 0LL;
  ServantStatusListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  currentKindList = this->fields.currentKindList;
  if ( !currentKindList )
    goto LABEL_125;
  v26 = currentKindList->fields._version + 1;
  currentKindList->fields._size = 0;
  currentKindList->fields._version = v26;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( !transform )
      goto LABEL_125;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_125;
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      v36 = *((float *)&Component_object[20].monitor + 1);
      v37 = *(float *)&Component_object[21].klass;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_125;
      v92.fields.x = -v36;
      v92.fields.y = -v37;
      v92.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v92, 0LL);
      transform = (__int64)this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)mainInfo, v28, v29, v30, v31, v32, v33);
  v39 = this->fields.mainInfo;
  if ( !v39 )
    goto LABEL_125;
  v40 = &ServantStatusListViewManager_TypeInfo;
  if ( v39->fields.commandCodeEntity )
  {
    transform = (__int64)ServantStatusListViewManager_TypeInfo;
    if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v24);
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
    }
    v41 = (__int64 *)(*(_QWORD *)(transform + 184) + 32LL);
  }
  else
  {
    svtEntity = v39->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_125;
    transform = SvtType__IsServantEquip(svtEntity->fields.type, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_125;
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      isNpcFollowerServantEquip = (*p_mainInfo)->fields.isNpcFollowerServantEquip;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v24);
        transform = (__int64)ServantStatusListViewManager_TypeInfo;
      }
      v44 = *(_QWORD *)(transform + 184);
      if ( isNpcFollowerServantEquip )
        v41 = (__int64 *)(v44 + 24);
      else
        v41 = (__int64 *)(v44 + 16);
    }
    else
    {
      transform = (__int64)ServantStatusListViewManager_TypeInfo;
      if ( !ServantStatusListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager_TypeInfo, v24);
        transform = (__int64)ServantStatusListViewManager_TypeInfo;
      }
      v41 = (__int64 *)(*(_QWORD *)(transform + 184) + 8LL);
    }
  }
  v45 = *v41;
  if ( *v41 && this->fields.statusObjectList && (int)*(_QWORD *)(v45 + 24) >= 1 )
  {
    v46 = 0LL;
    v47 = (unsigned int)*(_QWORD *)(v45 + 24);
    v48 = 0.0;
    do
    {
      if ( v46 >= *(unsigned int *)(v45 + 24) )
LABEL_126:
        sub_1BCAA44(transform, v24);
      v49 = *(_DWORD *)(v45 + 4 * v46 + 32);
      v50 = v49 - 1;
      if ( v49 >= 1 )
      {
        statusObjectList = this->fields.statusObjectList;
        if ( !statusObjectList )
          goto LABEL_125;
        if ( v49 <= (signed int)statusObjectList->max_length )
        {
          switch ( v49 )
          {
            case 3:
              v52 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !v52->fields.isEquipShowMode )
                goto LABEL_118;
              transform = (__int64)v52->fields.svtEntity;
              if ( !transform )
                goto LABEL_125;
              transform = ServantEntity__get_IsServant((ServantEntity_o *)transform, 0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.isCollection )
                goto LABEL_81;
              goto LABEL_118;
            case 4:
            case 12:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__IsEnableSkillInfo((ServantStatusListViewItem_o *)transform, 0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 5:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__IsEnablePassiveSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 6:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__IsEnableAppendSkillInfo(
                            (ServantStatusListViewItem_o *)transform,
                            0LL);
              if ( (transform & 1) == 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 7:
              transform = (__int64)*p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              transform = ServantStatusListViewItem__GetNpInfo((ServantStatusListViewItem_o *)transform, &tdInfo, 0LL);
              if ( !tdInfo )
                goto LABEL_125;
              if ( tdInfo->fields.id <= 0 )
                goto LABEL_118;
              goto LABEL_81;
            case 10:
              v53 = *p_mainInfo;
              if ( !*p_mainInfo )
                goto LABEL_125;
              v54 = 0LL;
              break;
            case 15:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.isEnableServantQuest )
                goto LABEL_118;
              goto LABEL_81;
            case 16:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.enableTdSpeed )
                goto LABEL_118;
              goto LABEL_81;
            case 17:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( (*p_mainInfo)->fields.enableChangeVoice )
                goto LABEL_81;
              goto LABEL_118;
            case 18:
            case 19:
              if ( !*p_mainInfo )
                goto LABEL_125;
              if ( !(*p_mainInfo)->fields.isDisplayRandomLimitCount )
                goto LABEL_118;
              goto LABEL_81;
            default:
              goto LABEL_81;
          }
          while ( 1 )
          {
            svtCommentEntityList = v53->fields.svtCommentEntityList;
            if ( !svtCommentEntityList )
              goto LABEL_125;
            max_length = svtCommentEntityList->max_length;
            if ( (int)v54 >= max_length )
              goto LABEL_118;
            if ( (unsigned int)v54 >= max_length )
              goto LABEL_126;
            transform = (__int64)svtCommentEntityList->m_Items[v54];
            if ( !transform )
              goto LABEL_125;
            transform = ServantCommentEntity__IsConst((ServantCommentEntity_o *)transform, 0LL);
            if ( (transform & 1) == 0 )
              break;
            v53 = *p_mainInfo;
            ++v54;
            if ( !*p_mainInfo )
              goto LABEL_125;
          }
LABEL_81:
          v57 = this->fields.statusObjectList;
          if ( !v57 )
            goto LABEL_125;
          if ( v50 >= v57->max_length )
            goto LABEL_126;
          v58 = (Il2CppObject *)v57->m_Items[v50];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
          v59 = UnityEngine_Object__Instantiate_object_(
                  v58,
                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v59 )
              goto LABEL_125;
            v60 = v40;
            v61 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v59,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewObject___);
            v63 = GameObjectExtensions__FindComponent_object_(
                    (UnityEngine_GameObject_o *)v59,
                    (System_String_o *)StringLiteral_5405/*"DispObject"*/,
                    (const MethodInfo_2F63C2C *)Method_GameObjectExtensions_FindComponent_ServantStatusListViewItemDrawButton___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
            transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              if ( !v63 )
                goto LABEL_125;
              LODWORD(v63[7].monitor) = v49;
            }
            if ( !v61 )
              goto LABEL_125;
            ServantStatusListViewObject__SetItem((ServantStatusListViewObject_o *)v61, this->fields.mainInfo, 0LL);
            Size = ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v61, 0LL);
            v65 = Size >= 0 ? Size : Size + 1;
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v59, 0LL);
            if ( !this->fields.listParent )
              goto LABEL_125;
            v66 = (UnityEngine_Transform_o *)transform;
            transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
            if ( !v66 )
              goto LABEL_125;
            UnityEngine_Transform__set_parent(v66, (UnityEngine_Transform_o *)transform, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v59, 0LL);
            if ( !transform )
              goto LABEL_125;
            v67 = v65 >> 1;
            v68 = v48 - (float)v67;
            v93.fields.x = 0.0;
            v93.fields.z = 0.0;
            v93.fields.y = v68;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v93, 0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v59, 0LL);
            v70 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4B109C7 )
            {
              transform = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v24, v69);
              byte_4B109C7 = 1;
            }
            if ( !v70 )
              goto LABEL_125;
            UnityEngine_Transform__set_localRotation(
              v70,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v59, 0LL);
            v72 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4B109C6 )
            {
              transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v24, v71);
              byte_4B109C6 = 1;
            }
            if ( !v72 )
              goto LABEL_125;
            UnityEngine_Transform__set_localScale(v72, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            transform = (__int64)this->fields.listParent;
            if ( !transform )
              goto LABEL_125;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v59, layer, 0LL);
            ServantStatusListViewObject__SetBaseTransform((ServantStatusListViewObject_o *)v61, 0LL);
            ServantStatusListViewObject__SetManager((ServantStatusListViewObject_o *)v61, this, 0LL);
            transform = (__int64)this->fields.objectList;
            if ( !transform )
              goto LABEL_125;
            v80 = *(_QWORD *)(transform + 16);
            v40 = v60;
            v81 = Method_System_Collections_Generic_List_ServantStatusListViewObject__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v80 )
              goto LABEL_125;
            v82 = *(int *)(transform + 24);
            if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v61,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
            }
            else
            {
              v83 = v80 + 8 * v82;
              *(_DWORD *)(transform + 24) = v82 + 1;
              *(_QWORD *)(v83 + 32) = v61;
              sub_1BCA784((PartyOrganizationUtility_o *)(v83 + 32), (int64_t)v61, v74, v75, v76, v77, v78, v79);
            }
            v84 = *v60;
            if ( !(*v60)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(*v60, v24);
              v84 = *v60;
            }
            transform = (__int64)this->fields.currentKindList;
            if ( !transform )
              goto LABEL_125;
            static_fields = v84->static_fields;
            v86 = *(_QWORD *)(transform + 16);
            LIST_BLANK = static_fields->LIST_BLANK;
            v88 = Method_System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__Add__;
            ++*(_DWORD *)(transform + 28);
            if ( !v86 )
              goto LABEL_125;
            v89 = *(int *)(transform + 24);
            v48 = v68 - (float)(LIST_BLANK + v67);
            if ( (unsigned int)v89 >= *(_DWORD *)(v86 + 24) )
            {
              System_Collections_Generic_List_Int32Enum___AddWithResize(
                (System_Collections_Generic_List_T__o *)transform,
                v49,
                *(const MethodInfo_3587464 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(transform + 24) = v89 + 1;
              *(_DWORD *)(v86 + 4 * v89 + 32) = v49;
            }
          }
        }
      }
LABEL_118:
      ++v46;
    }
    while ( v46 != v47 );
  }
  v90 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      return;
    }
LABEL_125:
    sub_1BCAA3C(transform, v24);
  }
}


void __fastcall ServantStatusListViewManager__DestroyList(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *v23; // x8
  int64_t size; // x2
  int v25; // w9
  __int64 v26; // x1
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1322C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1322C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
  {
    if ( !v29.fields._current )
      sub_1BCAA3C(0LL, v15);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v29.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  v23 = this->fields.objectList;
  if ( !v23 )
    goto LABEL_20;
  size = (unsigned int)v23->fields._size;
  v25 = v23->fields._version + 1;
  v23->fields._size = 0;
  v23->fields._version = v25;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v23->fields._items, 0, size, 0LL);
  this->fields.mainInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, 0LL, size, v18, v19, v20, v21, v22);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1BCAA3C(objectList, method);
  }
}


void __fastcall ServantStatusListViewManager__LateUpdate(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *scrollView; // x0
  int32_t v7; // w8
  struct UIScrollView_o *v8; // x8
  UnityEngine_Component_o *v9; // x20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float y; // s9
  int v12; // w20
  ServantStatusListViewObject_o *v13; // x21
  float v14; // s10
  float v15; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1322B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__, v4, v5);
    byte_4B1322B = 1;
  }
  if ( (this->fields.cachedViewTargetIndex & 0x80000000) == 0 )
  {
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      UIScrollView__InvalidateBounds((UIScrollView_o *)scrollView, 0LL);
      scrollView = this->fields.objectList;
      if ( scrollView )
      {
        v7 = *((_DWORD *)scrollView + 6);
        if ( this->fields.cachedViewTargetIndex >= v7 )
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
                         v7 - 1,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
          v8 = this->fields.scrollView;
          if ( v8 )
          {
            v9 = (UnityEngine_Component_o *)scrollView;
            scrollView = v8->fields.mPanel;
            if ( scrollView )
            {
              ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
              if ( v9 )
              {
                scrollView = UnityEngine_Component__get_transform(v9, 0LL);
                if ( scrollView )
                {
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
                  y = localPosition.fields.y;
                  scrollView = (void *)ServantStatusListViewObject__GetSize((ServantStatusListViewObject_o *)v9, 0LL);
                  if ( this->fields.objectList )
                  {
                    v12 = (int)scrollView;
                    scrollView = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.objectList,
                                   this->fields.cachedViewTargetIndex,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Item__);
                    if ( scrollView )
                    {
                      v13 = (ServantStatusListViewObject_o *)scrollView;
                      scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
                      if ( scrollView )
                      {
                        v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
                        v14 = v17.fields.y;
                        scrollView = (void *)ServantStatusListViewObject__GetSize(v13, 0LL);
                        if ( this->fields.scrollBar )
                        {
                          v15 = (float)-(float)((float)(v14 + (float)((float)(int)scrollView * 0.5))
                                              - this->fields.cachedViewTargetGap)
                              / (float)((float)-(float)(y + (float)((float)v12 * -0.5)) - ViewSize.fields.y);
                          scrollView = this->fields.scrollBar;
LABEL_18:
                          UIProgressBar__set_value((UIProgressBar_o *)scrollView, v15, 0LL);
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
    sub_1BCAA3C(scrollView, method);
  }
LABEL_19:
  this->fields.cachedViewTargetIndex = -1;
}


void __fastcall ServantStatusListViewManager__OnClickButton(
        ServantStatusListViewManager_o *this,
        UICommonButton_o *tappedButton,
        ServantStatusListViewItemDrawButton_o *ownerObject,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  unsigned int ButtonIndex; // w20
  int v17; // w0
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v20; // x3
  __int64 v21; // x1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)ownerObject, (int32_t)method, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !ownerObject )
        sub_1BCAA3C(v13, v14);
      ButtonIndex = ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
                      (ServantStatusListViewItemDrawButtonsBase_o *)ownerObject,
                      tappedButton,
                      v15);
      v17 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))ownerObject->klass->vtable._4_GetKind.method)(
              ownerObject,
              ownerObject->klass->vtable._5_SetItem.methodPtr);
      if ( v17 == 17 )
      {
        m_target = v9->fields.m_target;
        original_method_info = v9->fields.original_method_info;
        v20 = *(_QWORD *)&v9->fields.extra_arg;
        v21 = 9LL;
        goto LABEL_9;
      }
      if ( v17 == 16 )
      {
        m_target = v9->fields.m_target;
        original_method_info = v9->fields.original_method_info;
        v20 = *(_QWORD *)&v9->fields.extra_arg;
        v21 = 8LL;
LABEL_9:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64))m_target)(
          original_method_info,
          v21,
          ButtonIndex,
          v20);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__OnClickCombine(
        ServantStatusListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantStatusListViewManager_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  Il2CppObject *Instance; // x19
  __int64 v32; // x2
  __int64 v33; // x3
  ServantStatusListViewManager_o *v34; // x20
  ServantStatusListViewManager___c_c *v35; // x8
  System_Action_o *_9__57_0; // x22
  System_String_o *v37; // x21
  Il2CppObject *v38; // x23
  struct ServantStatusListViewManager___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  v9 = this;
  if ( (byte_4B13236 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ServantStatusListViewManager_OnClickCombine__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_ServantStatusListViewManager___c__OnClickCombine_b__57_0__, v16, v17);
    sub_1BCA7E0(&ServantStatusListViewManager___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_12025/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, v20, v21);
    this = (ServantStatusListViewManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B13236 = 1;
  }
  if ( v9->fields.initMode == 1 )
  {
    mainInfo = v9->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields._CanMoveCombine_k__BackingField )
      {
        callbackFunc = v9->fields.callbackFunc;
        v9->fields.callbackFunc = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
        if ( callbackFunc )
        {
          v26 = Method_ServantStatusListViewManager_OnClickCombine__;
          if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
            v26 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusListViewManager_OnClickCombine__);
          v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
          OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            (unsigned int)kind,
            0LL,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        return;
      }
      v28 = Method_ServantStatusListViewManager_OnClickCombine__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickCombine__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusListViewManager_OnClickCombine__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_NOT_MOVE_COMBINE_DIALOG_MESSAGE"*/, 0LL);
      v34 = this;
      v35 = ServantStatusListViewManager___c_TypeInfo;
      if ( !ServantStatusListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewManager___c_TypeInfo, *(_QWORD *)&kind);
        v35 = ServantStatusListViewManager___c_TypeInfo;
      }
      _9__57_0 = v35->static_fields->__9__57_0;
      v37 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__57_0 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35, *(_QWORD *)&kind);
          v35 = ServantStatusListViewManager___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v35->static_fields->__9;
        _9__57_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&kind, v32, v33);
        System_Action___ctor(_9__57_0, v38, Method_ServantStatusListViewManager___c__OnClickCombine_b__57_0__, 0LL);
        static_fields = ServantStatusListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__57_0 = _9__57_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
          (int64_t)_9__57_0,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v37,
          (System_String_o *)v34,
          _9__57_0,
          -1,
          0,
          0,
          0,
          1,
          28,
          0,
          0,
          0LL,
          0.0,
          0LL);
        return;
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&kind);
  }
}


void __fastcall ServantStatusListViewManager__OnClickCommandCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        3LL,
        (unsigned int)id,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickCommandCode(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        6LL,
        (unsigned int)id,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickFaceCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        4LL,
        (unsigned int)id,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListView(
        ServantStatusListViewManager_o *this,
        ServantStatusListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  __int64 v13; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v12, v13);
      Kind = ServantStatusListViewObject__GetKind(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        0LL,
        Kind,
        *(_QWORD *)&v9->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        1LL,
        0LL,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewEquipExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewItem_o *mainInfo; // x0
  bool IsEquip; // w20
  _QWORD *v12; // x8
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  Il2CppObject *Instance; // x20
  ServantStatusListViewItem_o *v16; // x8
  System_String_o *v17; // x19
  int32_t EquipExp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4B13234 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusListViewManager_OnClickListViewEquipExp__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_12075/*"SERVANT_STATUS_TOTAL_EXP"*/, v8, v9);
    byte_4B13234 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_15;
    IsEquip = ServantStatusListViewItem__get_IsEquip(mainInfo, 0LL);
    v12 = Method_ServantStatusListViewManager_OnClickListViewEquipExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewEquipExp__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusListViewManager_OnClickListViewEquipExp__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    if ( IsEquip )
    {
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
      mainInfo = (ServantStatusListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
      v16 = this->fields.mainInfo;
      if ( v16 )
      {
        v17 = (System_String_o *)mainInfo;
        EquipExp = ServantStatusListViewItem__get_EquipExp(v16, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(EquipExp, 0LL);
        mainInfo = (ServantStatusListViewItem_o *)System_String__Format(v17, NumberFormat, 0LL);
        if ( Instance )
        {
          CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)mainInfo, 0LL);
          return;
        }
      }
LABEL_15:
      sub_1BCAA3C(mainInfo, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewExp(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x0
  __int64 v15; // x1
  ServantStatusListViewItem_o *mainInfo; // x8
  System_String_o *v17; // x19
  int32_t Exp; // w0
  Il2CppObject *NumberFormat; // x0

  if ( (byte_4B13233 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusListViewManager_OnClickListViewExp__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_12075/*"SERVANT_STATUS_TOTAL_EXP"*/, v8, v9);
    byte_4B13233 = 1;
  }
  if ( this->fields.initMode == 1 )
  {
    v10 = Method_ServantStatusListViewManager_OnClickListViewExp__;
    if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewExp__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusListViewManager_OnClickListViewExp__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_STATUS_TOTAL_EXP"*/, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (v17 = v14,
          Exp = ServantStatusListViewItem__get_Exp(mainInfo, 0LL),
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(Exp, 0LL),
          v14 = System_String__Format(v17, NumberFormat, 0LL),
          !Instance) )
    {
      sub_1BCAA3C(v14, v15);
    }
    CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, v14, 0LL);
  }
}


void __fastcall ServantStatusListViewManager__OnClickListViewFriendship(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Instance; // x20
  struct ServantStatusListViewItem_o *v17; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  ServantStatusListViewManager_o *v19; // x19
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w0
  Il2CppObject *NumberFormat; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v3 = this;
  if ( (byte_4B13235 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantStatusListViewManager_OnClickListViewFriendship__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    this = (ServantStatusListViewManager_o *)sub_1BCA7E0(&StringLiteral_12076/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v10, v11);
    byte_4B13235 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    mainInfo = v3->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    if ( mainInfo->fields.userSvtCollectionEntity )
    {
      v13 = Method_ServantStatusListViewManager_OnClickListViewFriendship__;
      if ( (*((_BYTE *)Method_ServantStatusListViewManager_OnClickListViewFriendship__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusListViewManager_OnClickListViewFriendship__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
      this = (ServantStatusListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12076/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL);
      v17 = v3->fields.mainInfo;
      if ( v17 )
      {
        userSvtCollectionEntity = v17->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v19 = this;
          v20 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v21 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v24.fields.currentCryptoKey = v20;
          *(_QWORD *)&v24.fields.fakeValue = v21;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22, 0LL);
          this = (ServantStatusListViewManager_o *)System_String__Format((System_String_o *)v19, NumberFormat, 0LL);
          if ( Instance )
          {
            CommonUI__OpenPopupMessageDialog((CommonUI_o *)Instance, (System_String_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_1BCAA3C(this, method);
    }
  }
}


void __fastcall ServantStatusListViewManager__OnClickPortraitCharaLevel(
        ServantStatusListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        5LL,
        (unsigned int)id,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickRandomLimitCountMask(
        ServantStatusListViewManager_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        12LL,
        (unsigned int)maskType,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        10LL,
        (unsigned int)index,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickServantQuest(
        ServantStatusListViewManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        7LL,
        (unsigned int)questId,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickServantTdSpeed(
        ServantStatusListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        8LL,
        (unsigned int)type,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        11LL,
        (unsigned int)index,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(
        ServantStatusListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x20
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        11LL,
        (unsigned int)index,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnEnable(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void __fastcall ServantStatusListViewManager__OnLongPushListViewEquip1(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        2LL,
        0LL,
        *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewManager__OnMoveEnd(ServantStatusListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UIScrollView_o *v9; // x0

  if ( (byte_4B13232 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13232 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
                v9,
                1LL,
                v9->klass->vtable._9_SetDragAmount.methodPtr),
              (v9 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v9, v8);
        }
        UIScrollView__UpdatePosition(v9, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  Il2CppObject *current; // x21
  System_Action_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B13230 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B13230 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      objectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v28, v29);
      ServantStatusListViewObject__Init_35910232((ServantStatusListViewObject_o *)current, mode, v27, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__RequestListObject_34803708(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *current; // x21
  System_Action_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B13231 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B13231 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      objectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__MoveNext__) )
    {
      current = v28.fields._current;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantStatusListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v26, v27);
      ServantStatusListViewObject__Init_35910316((ServantStatusListViewObject_o *)current, mode, v25, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusListViewManager__SetMode(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        ServantStatusListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewManager__SetMode_34803476(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__SetMode_34803476(
        ServantStatusListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusListViewObject__o *objectList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4B1322F & 1) == 0 )
  {
    this = (ServantStatusListViewManager_o *)sub_1BCA7E0(
                                               &Method_System_Collections_Generic_List_ServantStatusListViewObject__get_Count__,
                                               *(_QWORD *)&mode,
                                               method);
    byte_4B1322F = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BCAA3C(this, *(_QWORD *)&mode);
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
      ServantStatusListViewManager__RequestListObject_34803708(v4, v6, method);
      break;
    default:
      return;
  }
}


void __fastcall ServantStatusListViewManager__SetObjectItem(
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
    sub_1BCAA3C(this, obj);
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
  ServantStatusListViewObject__Init_35907364(obj, v4, 0LL);
}


void __fastcall ServantStatusListViewManager__add_callbackFunc(
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

  if ( (byte_4B13228 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B13228 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ServantStatusListViewManager__remove_callbackFunc(v11, v12, v13);
}


bool __fastcall ServantStatusListViewManager__get_IsInput(
        ServantStatusListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void __fastcall ServantStatusListViewManager__remove_callbackFunc(
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

  if ( (byte_4B13229 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B13229 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusListViewManager_CallbackFunc_c *)v8->klass != ServantStatusListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ServantStatusListViewManager__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager__set_IsInput(
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
  if ( (byte_4B13227 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, method);
    byte_4B13227 = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1BCAA3C(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewManager_CallbackFunc___ctor(
        ServantStatusListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0AA18;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0A9C0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = id;
  v14 = result;
  if ( (byte_4B13CDD & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&id);
    sub_1BCA7E0(&ServantStatusListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B13CDD = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(ServantStatusListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__EndInvoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantStatusListViewManager_CallbackFunc__Invoke(
        ServantStatusListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    id,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantStatusListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13CDE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager___c_TypeInfo, v1, v2);
    byte_4B13CDE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantStatusListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantStatusListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantStatusListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantStatusListViewManager___c___ctor(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusListViewManager___c___OnClickCombine_b__57_0(
        ServantStatusListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13CDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B13CDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}