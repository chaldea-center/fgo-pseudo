void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v3; // x8
  struct MainMenuBarBase_StaticFields *v4; // x9

  if ( (byte_4B1BCC7 & 1) == 0 )
  {
    sub_1BCAFF8(&MainMenuBarBase_TypeInfo, v1);
    byte_4B1BCC7 = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v3 = MainMenuBarBase_TypeInfo;
  v4 = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&v4->NOTICE_NUMBER_POS_DISP_BTN.fields.x = 0x42180000422C0000LL;
  v4->NOTICE_NUMBER_POS_DISP_BTN.fields.z = 0.0;
  v3->static_fields->FOLDER_WAR_ID = 10000;
}


void __fastcall MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Hashtable_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B1BCC6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action___TypeInfo, method);
    sub_1BCAFF8(&System_Collections_Hashtable_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v7);
    byte_4B1BCC6 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mDispBtnList, (int32_t)v8, v9, v10);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v11 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63813256(v11, 0LL);
  this->fields.table = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v11, v12, v13);
  v14 = (struct System_Action_array *)sub_1BCB0A0(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mDispBtnActList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.summonCampaignObjects = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.summonCampaignObjects, (int32_t)v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *terminalBtn; // x1
  const MethodInfo *v11; // x3
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int32_t v14; // w2
  int v15; // w8
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  Il2CppObject *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v64; // x20
  UnityEngine_GameObject_o *v65; // x0
  MainMenuBarBase_c *v66; // x0
  Il2CppObject *Component_object; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  Il2CppObject *v71; // x20
  UnityEngine_GameObject_o *v72; // x20
  UnityEngine_GameObject_o *v73; // x0
  MainMenuBarBase_c *v74; // x0
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  Il2CppObject *v79; // x20
  UnityEngine_GameObject_o *v80; // x20
  UnityEngine_GameObject_o *v81; // x0
  MainMenuBarBase_c *v82; // x0
  Il2CppObject *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct UISprite_o *v96; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v98; // x1

  if ( (byte_4B1BCA6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__, v4);
    sub_1BCAFF8(&MainMenuBarBase_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&ShopTopListViewManager_TypeInfo, v8);
    byte_4B1BCA6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_109;
  v14 = *((_DWORD *)mDispBtnList + 6);
  v15 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v15;
  if ( v14 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v14, 0LL);
    mDispBtnList = this->fields.mDispBtnList;
    if ( !mDispBtnList )
      goto LABEL_109;
  }
  terminalBtn = (Il2CppObject *)this->fields.terminalBtn;
  v16 = *((_QWORD *)mDispBtnList + 2);
  v17 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v16 )
    goto LABEL_109;
  v18 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = v16 + 8 * v18;
    *((_DWORD *)mDispBtnList + 6) = v18 + 1;
    *(_QWORD *)(v19 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)terminalBtn, v14, v11);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.partyBtn;
  v22 = *((_QWORD *)mDispBtnList + 2);
  v23 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v22 )
    goto LABEL_109;
  v24 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * v24;
    *((_DWORD *)mDispBtnList + 6) = v24 + 1;
    *(_QWORD *)(v25 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 32), (int32_t)terminalBtn, v20, v21);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.summonBtn;
  v28 = *((_QWORD *)mDispBtnList + 2);
  v29 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v28 )
    goto LABEL_109;
  v30 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = v28 + 8 * v30;
    *((_DWORD *)mDispBtnList + 6) = v30 + 1;
    *(_QWORD *)(v31 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v31 + 32), (int32_t)terminalBtn, v26, v27);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.combineBtn;
  v34 = *((_QWORD *)mDispBtnList + 2);
  v35 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v34 )
    goto LABEL_109;
  v36 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * v36;
    *((_DWORD *)mDispBtnList + 6) = v36 + 1;
    *(_QWORD *)(v37 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v37 + 32), (int32_t)terminalBtn, v32, v33);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.shopBtn;
  v40 = *((_QWORD *)mDispBtnList + 2);
  v41 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v40 )
    goto LABEL_109;
  v42 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * v42;
    *((_DWORD *)mDispBtnList + 6) = v42 + 1;
    *(_QWORD *)(v43 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v43 + 32), (int32_t)terminalBtn, v38, v39);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.friendBtn;
  v46 = *((_QWORD *)mDispBtnList + 2);
  v47 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v46 )
    goto LABEL_109;
  v48 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * v48;
    *((_DWORD *)mDispBtnList + 6) = v48 + 1;
    *(_QWORD *)(v49 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 32), (int32_t)terminalBtn, v44, v45);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.myroomBtn;
  v52 = *((_QWORD *)mDispBtnList + 2);
  v53 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v52 )
    goto LABEL_109;
  v54 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = v52 + 8 * v54;
    *((_DWORD *)mDispBtnList + 6) = v54 + 1;
    *(_QWORD *)(v55 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v55 + 32), (int32_t)terminalBtn, v50, v51);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v58 = *((_QWORD *)mDispBtnList + 2);
  v59 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v58 )
    goto LABEL_109;
  v60 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = v58 + 8 * v60;
    *((_DWORD *)mDispBtnList + 6) = v60 + 1;
    *(_QWORD *)(v61 + 32) = terminalBtn;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v61 + 32), (int32_t)terminalBtn, v56, v57);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     mNoticeNumberPrefab,
                     (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_109;
    v64 = (UnityEngine_GameObject_o *)mDispBtnList;
    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_35362640(v64, v65, 0LL);
    v66 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v66 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v64, v66->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v64 )
      goto LABEL_109;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v64,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mMenuNoticeNumber, (int32_t)Component_object, v68, v69);
    mDispBtnList = this->fields.mMenuNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v71 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v71,
                     (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_109;
    v72 = (UnityEngine_GameObject_o *)mDispBtnList;
    v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_35362640(v72, v73, 0LL);
    v74 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v74 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v72, v74->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v72 )
      goto LABEL_109;
    v75 = UnityEngine_GameObject__GetComponent_object_(
            v72,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v75;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mSummonNoticeNumber, (int32_t)v75, v76, v77);
    mDispBtnList = this->fields.mSummonNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    v79 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v79,
                     (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_109;
    v80 = (UnityEngine_GameObject_o *)mDispBtnList;
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_35362640(v80, v81, 0LL);
    v82 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v82 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v80, v82->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v80 )
      goto LABEL_109;
    v83 = UnityEngine_GameObject__GetComponent_object_(
            v80,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v83;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mFriendNoticeNumber, (int32_t)v83, v84, v85);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v87, v88);
  mDispBtnList = this->fields.mNewItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mLimitedItemIconRoot;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mPeriodLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mMonthlyLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mExchangeServantItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.StartUpSummonSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mPeriodLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mMonthlyLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mExchangeServantItemLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mExchangeServantTimeRoot;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.StartUpSummonLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mExchangeServantItemDefaultAtlas = (UnityEngine_Object_o *)this->fields.mExchangeServantItemDefaultAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mDispBtnList = (void *)UnityEngine_Object__op_Equality(mExchangeServantItemDefaultAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)mDispBtnList & 1) != 0 )
  {
    mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
    if ( mExchangeServantItemSp )
    {
      mAtlas = mExchangeServantItemSp->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mExchangeServantItemDefaultAtlas, (int32_t)mAtlas, v90, v91);
      v96 = this->fields.mExchangeServantItemSp;
      if ( v96 )
      {
        mSpriteName = v96->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int32_t)mSpriteName,
          v94,
          v95);
        goto LABEL_107;
      }
    }
LABEL_109:
    sub_1BCB254(mDispBtnList, terminalBtn);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v98);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__BackActive(MainMenuBarBase_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Component_o *backCloseSprite; // x0
  float v6; // s1
  int v7; // s2
  int v8; // s0

  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0LL);
  if ( !backCloseSprite )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, !isOpen, 0LL);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0LL);
  if ( !backCloseSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, isOpen, 0LL),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite) == 0LL)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0LL),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite) == 0LL)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0LL),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.menuGrid) == 0LL)
    || (backCloseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)backCloseSprite,
                                                       0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(backCloseSprite, isOpen);
  }
  v6 = -33.0;
  if ( isOpen )
    v6 = -6.0;
  v7 = 0;
  v8 = -1010237440;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)backCloseSprite,
    *(UnityEngine_Vector3_o *)(&v6 - 1),
    0LL);
}


void __fastcall MainMenuBarBase__CheckLatestScenarioButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MainMenuBarButton_o *Instance; // x0
  __int64 v7; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v9; // x20
  MyRoomStateMaterial_o *monitor; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v12; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v15; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1BCAF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, method);
    sub_1BCAFF8(&MyRoomRootComponent_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4B1BCAF = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v7 = *(_QWORD *)&Instance->fields.mode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
    goto LABEL_27;
  if ( !v7 )
    goto LABEL_27;
  methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v7 + 304LL) < (unsigned int)methodPtr_low
    || *(MyRoomRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v7 + 200LL) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_27;
  }
  v9 = *(UnityEngine_Object_o **)(v7 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (MainMenuBarButton_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !v9 )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)v9, 0LL) == 1 )
    goto LABEL_27;
  monitor = (MyRoomStateMaterial_o *)v9[38].monitor;
  if ( !monitor )
    goto LABEL_27;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(monitor, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(monitor, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_27;
  }
  mOldState = monitor->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_27;
  mSelectInfos = (System_Collections_Generic_List_object__o *)monitor->fields.mSelectInfos;
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v12) )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)System_Collections_Generic_List_object___get_Item(
                                      mSelectInfos,
                                      0,
                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
  if ( !Instance )
    goto LABEL_30;
  if ( LODWORD(Instance[1].klass) != questId[1] )
  {
LABEL_27:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v15 = 2;
      goto LABEL_29;
    }
LABEL_30:
    sub_1BCB254(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_30;
  v15 = 3;
LABEL_29:
  MainMenuBarButton__SetMode(Instance, v15, 0LL);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x8
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v5; // w1

  if ( (byte_4B1BCAE & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B1BCAE = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1BCB254(terminalBtn, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B19076 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B19076 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_16;
  if ( v3->static_fields->_DispState_k__BackingField != 1 )
  {
LABEL_14:
    v5 = 2;
    goto LABEL_15;
  }
  v5 = 3;
LABEL_15:
  MainMenuBarButton__SetMode(terminalBtn, v5, 0LL);
}


void __fastcall MainMenuBarBase__CloseMenu(MainMenuBarBase_o *this, bool is_play_se, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__SwitchMenu(this, 0, is_play_se, v3);
}


void __fastcall MainMenuBarBase__FrameIn(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 1, is_force, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__FrameInOut(
        MainMenuBarBase_o *this,
        bool is_framein,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  MoveObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  float mFrameInPosY; // s14
  float v18; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  float v23; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v27; // x21
  float v28; // s12
  float v29; // s13
  System_Action_o *v30; // x22
  System_Action_o *v31; // x23
  float v32; // s3
  float v33; // s0
  float v34; // s5
  float v35; // s2
  float v36; // s4
  float v37; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1BCC5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, is_framein);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v7);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_MainMenuBarBase___c__DisplayClass129_0__FrameInOut_b__0__, v9);
    sub_1BCAFF8(&Method_MainMenuBarBase___c__DisplayClass129_0__FrameInOut_b__1__, v10);
    sub_1BCAFF8(&MainMenuBarBase___c__DisplayClass129_0_TypeInfo, v11);
    byte_4B1BCC5 = 1;
  }
  v12 = sub_1BCB244(MainMenuBarBase___c__DisplayClass129_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass129_0___ctor((MainMenuBarBase___c__DisplayClass129_0_o *)v12, 0LL);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    goto LABEL_29;
  *(_QWORD *)(v12 + 16) = gameObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)gameObject, v15, v16);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v18 = this->fields.mFrameInPosY;
  else
    v18 = -90.0;
  *(float *)(v12 + 32) = v18;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v12 + 16),
                       (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v12 + 24) = Component_object;
  v20 = (MoveObject_o **)(v12 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)Component_object, v21, v22);
  if ( is_force
    || (v23 = *(float *)(v12 + 32),
        v23 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), 0LL)) )
  {
    gameObject = *v20;
    if ( *v20 )
    {
      MoveObject__Stop(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), *(float *)(v12 + 32), 0LL);
      return;
    }
LABEL_29:
    sub_1BCB254(gameObject, v14);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v39 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  v27 = *(MoveObject_o **)(v12 + 24);
  v28 = v39.fields.x;
  v29 = v39.fields.z;
  v30 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass129_0__FrameInOut_b__0__, 0LL);
  v31 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass129_0__FrameInOut_b__1__, 0LL);
  if ( !v27 )
    goto LABEL_29;
  if ( is_framein )
    v32 = x;
  else
    v32 = v28;
  if ( is_framein )
    v33 = v28;
  else
    v33 = x;
  if ( is_framein )
    v34 = z;
  else
    v34 = v29;
  if ( is_framein )
    v35 = v29;
  else
    v35 = z;
  v36 = v18;
  v37 = -90.0;
  if ( !is_framein )
    v37 = mFrameInPosY;
  MoveObject__Play(
    v27,
    *(UnityEngine_Vector3_o *)&v33,
    *(UnityEngine_Vector3_o *)&v32,
    IntpTime_AutoResume,
    v30,
    v31,
    0.0,
    17,
    0LL);
}


void __fastcall MainMenuBarBase__FrameOut(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 0, is_force, v3);
}


bool __fastcall MainMenuBarBase__GetJumpSceneInfo(
        MainMenuBarBase_o *this,
        int32_t *warId,
        int32_t *questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v15; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_41712824; // x22
  bool IsClearAllMainScenario; // w23
  int64_t v18; // x1
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v22; // x20
  MainMenuBarBase_c *v23; // x0

  if ( (byte_4B1BCC2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestScriptMaster___, warId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_1BCAFF8(&MainMenuBarBase_TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    byte_4B1BCC2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v15 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_30;
  MovedEventScriptList_41712824 = QuestScriptMaster__GetMovedEventScriptList_41712824(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_30;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_30;
  v18 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( IsClearAllMainScenario )
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetLatestMainScenarioLastQuest(
                                    v15,
                                    v18,
                                    MovedEventScriptList_41712824,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(
                                    v15,
                                    v18,
                                    MovedEventScriptList_41712824,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0LL )
  {
LABEL_30:
    sub_1BCB254(Instance, v13);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0LL);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v22 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v23 = MainMenuBarBase_TypeInfo;
      if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
        v23 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v23->static_fields->FOLDER_WAR_ID )
        *warId = v22->fields.parentWarId;
    }
  }
  LOBYTE(LatestMainScenarioLastQuest) = 1;
  return (char)LatestMainScenarioLastQuest;
}


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ScrTerminalListTop_o *MyFsmP; // x0
  QuestRewardItemAction_c *klass; // x8
  QuestRewardItemAction_c *v5; // x8
  __int64 v6; // x8

  if ( (byte_4B1BCBA & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_12174/*"SPOT SELECT WAIT"*/, v2);
    byte_4B1BCBA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
    byte_4B1676D = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MyFsmP->fields.friendPointBoostItemAction->klass;
  if ( !klass )
    goto LABEL_26;
  MyFsmP = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_26;
  if ( (System_String__IndexOf_62508800((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12174/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
    byte_4B1676D = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = MyFsmP->fields.friendPointBoostItemAction->klass;
  if ( !v5
    || (v6 = *(_QWORD *)&v5->_2.thread_static_fields_offset) == 0
    || (MyFsmP = *(ScrTerminalListTop_o **)(v6 + 544)) == 0LL )
  {
LABEL_26:
    sub_1BCB254(MyFsmP, method);
  }
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4B1BCBD & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8451/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, method);
    byte_4B1BCBD = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1BCB254(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8451/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__OnClickCommon(
        MainMenuBarBase_o *this,
        int32_t kind,
        bool isEnabled,
        const MethodInfo *method)
{
  MainMenuBarBase_o *v6; // x19
  struct System_Action_array *mDispBtnActList; // x8
  const MethodInfo *v8; // x3
  struct System_Action_array *v9; // x8
  Il2CppClass **v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _QWORD *v13; // x0
  int32_t v14; // w19
  System_Reflection_MethodBase_o *v15; // x0

  v6 = this;
  if ( (byte_4B1BCB7 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1BCAFF8(&Method_MainMenuBarBase_OnClickCommon__, *(_QWORD *)&kind);
    byte_4B1BCB7 = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( mDispBtnActList->max_length <= kind )
        goto LABEL_16;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0LL);
      v9 = v6->fields.mDispBtnActList;
      if ( v9 )
      {
        if ( v9->max_length > kind )
        {
          v10 = &v9->obj.klass + kind;
          v10[4] = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 4), 0, isEnabled, v8);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.mAllBtnAct, 0, v11, v12);
          v13 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v13 = (_QWORD *)sub_1BCB010(Method_MainMenuBarBase_OnClickCommon__);
          v14 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1BCB25C(this, *(_QWORD *)&kind, isEnabled);
      }
    }
    sub_1BCB254(this, *(_QWORD *)&kind);
  }
  v13 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCB010(Method_MainMenuBarBase_OnClickCommon__);
  v14 = 2;
LABEL_14:
  v15 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, v14, 0, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4B1BCBB & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8455/*"MAIN_MENU_BAR_SELECT_PARTY"*/, method);
    byte_4B1BCBB = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1BCB254(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8455/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4B1BCBF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8452/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, method);
    byte_4B1BCBF = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1BCB254(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8452/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MainMenuBarButton_o *latestScenarioBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v7; // x3
  MainMenuBarBase_o *v8; // x0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  MyRoomRootComponent_c *v11; // x0
  int32_t v12; // w21
  int32_t v13; // w22
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x23
  SceneJumpInfo_o *v15; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1BCC1 & 1) == 0 )
  {
    sub_1BCAFF8(&MyRoomRootComponent_TypeInfo, method);
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_8453/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, v4);
    byte_4B1BCC1 = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1BCB254(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v7);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v8, &questId[1], questId, v9) )
    {
      v11 = MyRoomRootComponent_TypeInfo;
      if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v11 = MyRoomRootComponent_TypeInfo;
      }
      v13 = questId[0];
      v12 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v11->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v15 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40654688(v15, MYROOM_STATE_NEW_MATERIAL, v12, v13, 0LL);
    }
    else
    {
      v15 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8453/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v15, v10);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4B1BCC0 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8453/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, method);
    byte_4B1BCC0 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1BCB254(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8453/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickOutSide(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MainMenuBarBase__SwitchMenu(this, 0, 1, v2);
}


void __fastcall MainMenuBarBase__OnClickShop(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *shopBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4B1BCBE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8456/*"MAIN_MENU_BAR_SELECT_SHOP"*/, method);
    byte_4B1BCBE = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1BCB254(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8456/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4B1BCBC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8457/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, method);
    byte_4B1BCBC = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1BCB254(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8457/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MainMenuBarButton_o *terminalBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  TerminalSceneComponent_c *v15; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v17; // x4
  System_Threading_CancellationTokenSource_c *klass; // x8
  UnityEngine_Object_o *v19; // x20
  TerminalPramsManager_c *v20; // x0
  System_Threading_CancellationTokenSource_c *v21; // x8
  System_String_o *v22; // x20
  System_Threading_CancellationTokenSource_c *v23; // x8
  TerminalPramsManager_c *v24; // x0
  System_Threading_CancellationTokenSource_c *v25; // x8
  TerminalSceneComponent_c *v26; // x0
  TerminalPramsManager_c *v27; // x0
  const MethodInfo *v28; // x2
  MainMenuBarBase___c_c *v29; // x0
  System_Action_o *_9__111_0; // x20
  Il2CppObject *v31; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_IEnumerator_o *v35; // x1
  System_Threading_CancellationTokenSource_c *v36; // x8
  const MethodInfo *v37; // x3
  TerminalPramsManager_c *v38; // x0
  System_Threading_CancellationTokenSource_c *v39; // x8

  if ( (byte_4B1BCB8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v4);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v5);
    sub_1BCAFF8(&Method_MainMenuBarBase___c__OnClickTerminal_b__111_0__, v6);
    sub_1BCAFF8(&MainMenuBarBase___c_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_8458/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, v8);
    sub_1BCAFF8(&StringLiteral_12174/*"SPOT SELECT WAIT"*/, v9);
    sub_1BCAFF8(&StringLiteral_3267/*"CAPTER WAIT"*/, v10);
    byte_4B1BCB8 = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_123;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v13);
  if ( IsEnabled )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B1676D )
    {
      sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v14);
      byte_4B1676D = 1;
    }
    v15 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v15 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v15->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
      goto LABEL_126;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B1676D )
    {
      sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
      byte_4B1676D = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !klass )
      goto LABEL_123;
    v19 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
LABEL_126:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B19572 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
        byte_4B19572 = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4B16DCD )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
        v27 = TerminalPramsManager_TypeInfo;
        byte_4B16DCD = 1;
      }
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_4B19244 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
        v27 = TerminalPramsManager_TypeInfo;
        byte_4B19244 = 1;
      }
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_93;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_127;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B19076 )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
      byte_4B19076 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    if ( v20->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_127;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B1676D )
    {
      sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
      byte_4B1676D = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v21 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v21 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v21->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    v22 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_62508800((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12174/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_62508800(v22, (System_String_o *)StringLiteral_3267/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B1676D )
    {
      sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
      byte_4B1676D = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v23 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v23 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v23->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0LL) )
    {
LABEL_127:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B19572 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
        byte_4B19572 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4B16DCD )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
        v24 = TerminalPramsManager_TypeInfo;
        byte_4B16DCD = 1;
      }
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B1676D )
      {
        sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
        byte_4B1676D = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v25 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( v25 )
      {
        terminalBtn = *(MainMenuBarButton_o **)&v25->_2.static_fields_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_4B1676D )
          {
            sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
            byte_4B1676D = 1;
          }
          v26 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v26 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v26->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8458/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v17);
            return;
          }
        }
      }
LABEL_123:
      sub_1BCB254(terminalBtn, method);
    }
    if ( (System_String__IndexOf_62508800(v22, (System_String_o *)StringLiteral_3267/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B1676D )
      {
        sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
        byte_4B1676D = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v36 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v36 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v36->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v37);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B19996 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
        byte_4B19996 = 1;
      }
      v38 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v38 = TerminalPramsManager_TypeInfo;
      }
      v38->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_4B1676D )
      {
        sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
        byte_4B1676D = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v39 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v39 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v39->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0LL);
    }
    else
    {
      v29 = MainMenuBarBase___c_TypeInfo;
      if ( !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v29 = MainMenuBarBase___c_TypeInfo;
      }
      _9__111_0 = v29->static_fields->__9__111_0;
      if ( !_9__111_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = MainMenuBarBase___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__111_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(_9__111_0, v31, Method_MainMenuBarBase___c__OnClickTerminal_b__111_0__, 0LL);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__111_0 = _9__111_0;
        sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__111_0, (int32_t)_9__111_0, v33, v34);
      }
      v35 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__111_0, v28);
      UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
    }
  }
}


void __fastcall MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0LL);
  this->fields.mMenuBtnAct = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mMenuBtnAct, 0, v4, v5);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1BCAA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B1BCAA = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v4);
    AvalonSceneManager__transitionScene(
      (AvalonSceneManager_o *)Instance,
      this->fields.selectedType,
      this->fields.fadeType,
      this->fields.selectedObject,
      0LL);
  }
}


void __fastcall MainMenuBarBase__RequestSelectedSignal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v6; // x0

  if ( (byte_4B1BCAB & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_8454/*"MAIN_MENU_BAR_SELECT_NONE"*/, v3);
    byte_4B1BCAB = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) )
  {
    selectedKind = this->fields.selectedKind;
    v6 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v6 )
LABEL_12:
        sub_1BCB254(v6, selectedKind);
    }
    else
    {
      if ( !v6 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8454/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v6, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1BCA9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v2);
    byte_4B1BCA9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B16DCD )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B16DCD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B1BCB1 & 1) == 0 )
  {
    sub_1BCAFF8(&ShopTopListViewManager_TypeInfo, method);
    byte_4B1BCB1 = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v4, v5);
  MainMenuBarBase__ResetShopNoticeDraw(this, v6);
}


void __fastcall MainMenuBarBase__ResetShopNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *mNewItemSp; // x0
  struct ShopNotice_o *shopNotice; // x8
  struct ShopNotice_o *v14; // x8
  struct ShopNotice_o *v15; // x8
  struct ShopNotice_o *v16; // x8
  struct ShopNotice_o *v17; // x8
  struct ShopNotice_o *v18; // x8
  System_Action_o *v19; // x20
  struct ShopNotice_o *v20; // x8
  struct ShopNotice_o *v21; // x8
  struct ShopNotice_o *v22; // x8
  struct ShopNotice_o *v23; // x8
  struct ShopNotice_o *v24; // x8
  struct ShopNotice_o *v25; // x8
  struct ShopNotice_o *v26; // x8
  unsigned int LimitedType_k__BackingField; // w8
  struct ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct ShopNotice_o *v32; // x8
  int32_t v33; // w23
  System_Collections_Generic_List_object__o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v40; // x1
  Il2CppClass **v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  UnityEngine_Component_o *v47; // x1
  Il2CppClass **v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  UnityEngine_Component_o *v54; // x1
  Il2CppClass **v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  UnityEngine_Component_o *v61; // x1
  Il2CppClass **v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  UnityEngine_Component_o *v68; // x1
  Il2CppClass **v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  UnityEngine_Component_o *v75; // x1
  Il2CppClass **v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  UnityEngine_Component_o *v82; // x1
  Il2CppClass **v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  UnityEngine_Component_o *v89; // x1
  Il2CppClass **v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  UnityEngine_Component_o *v96; // x1
  Il2CppClass **v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  UnityEngine_Component_o *v103; // x1
  Il2CppClass **v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  UnityEngine_Component_o *v110; // x1
  Il2CppClass **v111; // x0
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  UnityEngine_Component_o *v117; // x1
  Il2CppClass **v118; // x0
  System_Collections_Generic_List_object__o *v119; // x22
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  UnityEngine_Component_o *v125; // x1
  Il2CppClass **v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  UnityEngine_Component_o *v132; // x1
  Il2CppClass **v133; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  UnityEngine_Component_o *v139; // x1
  Il2CppClass **v140; // x0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  UnityEngine_Component_o *v146; // x1
  Il2CppClass **v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  UnityEngine_Component_o *v153; // x1
  Il2CppClass **v154; // x0
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  UnityEngine_Component_o *v160; // x1
  Il2CppClass **v161; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  UnityEngine_Component_o *v167; // x1
  Il2CppClass **v168; // x0
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  UnityEngine_Component_o *v174; // x1
  Il2CppClass **v175; // x0
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  UnityEngine_Component_o *v181; // x1
  Il2CppClass **v182; // x0
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  UnityEngine_Component_o *v188; // x1
  Il2CppClass **v189; // x0
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  struct System_Object_array *v192; // x8
  _QWORD *v193; // x9
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  struct System_Object_array *v196; // x8
  _QWORD *v197; // x9
  __int64 v198; // x10
  UnityEngine_Component_o *v199; // x1
  Il2CppClass **v200; // x0
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  struct System_Object_array *v203; // x8
  _QWORD *v204; // x9
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  struct System_Object_array *v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  UnityEngine_Component_o *v210; // x1
  Il2CppClass **v211; // x0
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  UnityEngine_Component_o *v217; // x1
  Il2CppClass **v218; // x0
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  struct System_Object_array *v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  UnityEngine_Component_o *v224; // x1
  Il2CppClass **v225; // x0
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  struct System_Object_array *v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  UnityEngine_Component_o *v231; // x1
  Il2CppClass **v232; // x0
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  struct System_Object_array *v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x10
  UnityEngine_Component_o *v238; // x1
  Il2CppClass **v239; // x0
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  struct System_Object_array *v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  UnityEngine_Component_o *v245; // x1
  Il2CppClass **v246; // x0
  int32_t v247; // w2
  const MethodInfo *v248; // x3
  struct System_Object_array *v249; // x8
  _QWORD *v250; // x9
  __int64 v251; // x10
  UnityEngine_Component_o *v252; // x1
  Il2CppClass **v253; // x0
  __int64 v254; // x10
  UnityEngine_Component_o *v255; // x1
  Il2CppClass **v256; // x0
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  struct System_Object_array *v259; // x8
  _QWORD *v260; // x9
  __int64 v261; // x10
  unsigned int max_length; // w11
  Il2CppClass **v263; // x0
  __int64 v264; // x10
  Il2CppClass **v265; // x0
  struct ShopNotice_o *v266; // x8
  ShopNoticeRemainTime_o *v267; // x21
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  const MethodInfo *v270; // x2
  struct ShopNotice_o *v271; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v274; // x2
  struct ShopNotice_o *v275; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v277; // x2
  struct ShopNotice_o *v278; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  struct ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x22
  UILabel_o *v281; // x20
  ShopNoticeRemainTimeLabel_o *v282; // x21
  int32_t v283; // w2
  const MethodInfo *v284; // x3
  struct ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v286; // x20
  ShopNoticeRemainTimeLabel_o *v287; // x23
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  struct ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x20
  UILabel_o *v291; // x23
  ShopNoticeRemainTimeLabel_o *v292; // x24
  int32_t v293; // w2
  const MethodInfo *v294; // x3
  struct ShopNotice_o *v295; // x8
  struct ShopNotice_o *v296; // x8
  struct ShopNotice_o *v297; // x8
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  struct System_Object_array *v300; // x8
  _QWORD *v301; // x9
  __int64 v302; // x10
  UnityEngine_Component_o *v303; // x1
  Il2CppClass **v304; // x0
  int32_t v305; // w2
  const MethodInfo *v306; // x3
  struct System_Object_array *v307; // x8
  _QWORD *v308; // x9
  __int64 v309; // x10
  UnityEngine_Component_o *v310; // x1
  Il2CppClass **v311; // x0
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  struct System_Object_array *v314; // x8
  _QWORD *v315; // x9
  __int64 v316; // x10
  UnityEngine_Component_o *v317; // x1
  Il2CppClass **v318; // x0
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  struct System_Object_array *v321; // x8
  _QWORD *v322; // x9
  __int64 v323; // x10
  UnityEngine_Component_o *v324; // x1
  Il2CppClass **v325; // x0
  int32_t v326; // w2
  const MethodInfo *v327; // x3
  struct System_Object_array *v328; // x8
  _QWORD *v329; // x9
  __int64 v330; // x10
  UnityEngine_Component_o *v331; // x1
  Il2CppClass **v332; // x0
  int32_t v333; // w2
  const MethodInfo *v334; // x3
  struct System_Object_array *v335; // x8
  _QWORD *v336; // x9
  __int64 v337; // x10
  Il2CppClass **v338; // x0

  if ( (byte_4B1BCB0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__102_0__, v8);
    sub_1BCAFF8(&ShopNoticeRemainTimeLabel_TypeInfo, v9);
    sub_1BCAFF8(&ShopNoticeRemainTime_TypeInfo, v10);
    sub_1BCAFF8(&ShopNoticeTween_TypeInfo, v11);
    byte_4B1BCB0 = 1;
  }
  if ( this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    shopNotice = this->fields.shopNotice;
    if ( !shopNotice )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      shopNotice->fields._IsShowNew_k__BackingField,
      0LL);
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v15 = this->fields.shopNotice;
    if ( !v15 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v15->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v16 = this->fields.shopNotice;
    if ( !v16 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v16->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v17->fields._LimitedType_k__BackingField == 3,
      0LL);
    v18 = this->fields.shopNotice;
    if ( !v18 )
      goto LABEL_327;
    if ( v18->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__102_0__, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v19, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v20 = this->fields.shopNotice;
    if ( !v20 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v20->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v21 = this->fields.shopNotice;
    if ( !v21 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v21->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v22 = this->fields.shopNotice;
    if ( !v22 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v22->fields._LimitedType_k__BackingField == 2,
      0LL);
    v23 = this->fields.shopNotice;
    if ( !v23 )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v23->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v24 = this->fields.shopNotice;
    if ( !v24 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v24->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v25 = this->fields.shopNotice;
    if ( !v25 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v25->fields._LimitedType_k__BackingField == 4,
      0LL);
    v26 = this->fields.shopNotice;
    if ( !v26 )
      goto LABEL_327;
    LimitedType_k__BackingField = v26->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v29 = (ShopNoticeTween_o *)sub_1BCB244(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v29, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v29;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.shopNoticeTween, (int32_t)v29, v30, v31);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_327;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v32 = this->fields.shopNotice;
      if ( !v32 )
        goto LABEL_327;
      v33 = v32->fields._LimitedType_k__BackingField;
      switch ( v33 )
      {
        case 6:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          items = v34->fields._items;
          v38 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !items )
            goto LABEL_327;
          size = v34->fields._size;
          v40 = mNewItemSp;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v34->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v40;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v114 = v34->fields._items;
          v115 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v114 )
            goto LABEL_327;
          v116 = v34->fields._size;
          v117 = mNewItemSp;
          if ( (unsigned int)v116 >= v114->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            v118 = &v114->obj.klass + v116;
            v34->fields._size = v116 + 1;
            v118[4] = (Il2CppClass *)v117;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v118 + 4), (int32_t)v117, v112, v113);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v185 = v119->fields._items;
          v186 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v185 )
            goto LABEL_327;
          v187 = v119->fields._size;
          v188 = mNewItemSp;
          if ( (unsigned int)v187 >= v185->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v119,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
          }
          else
          {
            v189 = &v185->obj.klass + v187;
            v119->fields._size = v187 + 1;
            v189[4] = (Il2CppClass *)v188;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v189 + 4), (int32_t)v188, v183, v184);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          goto LABEL_256;
        case 10:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v51 = v34->fields._items;
          v52 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v51 )
            goto LABEL_327;
          v53 = v34->fields._size;
          v54 = mNewItemSp;
          if ( (unsigned int)v53 >= v51->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v51->obj.klass + v53;
            v34->fields._size = v53 + 1;
            v55[4] = (Il2CppClass *)v54;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v54, v49, v50);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v122 = v34->fields._items;
          v123 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v122 )
            goto LABEL_327;
          v124 = v34->fields._size;
          v125 = mNewItemSp;
          if ( (unsigned int)v124 >= v122->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
          }
          else
          {
            v126 = &v122->obj.klass + v124;
            v34->fields._size = v124 + 1;
            v126[4] = (Il2CppClass *)v125;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v126 + 4), (int32_t)v125, v120, v121);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v192 = v119->fields._items;
          v193 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v192 )
            goto LABEL_327;
          goto LABEL_237;
        case 12:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v58 = v34->fields._items;
          v59 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v58 )
            goto LABEL_327;
          v60 = v34->fields._size;
          v61 = mNewItemSp;
          if ( (unsigned int)v60 >= v58->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &v58->obj.klass + v60;
            v34->fields._size = v60 + 1;
            v62[4] = (Il2CppClass *)v61;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v61, v56, v57);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v129 = v34->fields._items;
          v130 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v129 )
            goto LABEL_327;
          v131 = v34->fields._size;
          v132 = mNewItemSp;
          if ( (unsigned int)v131 >= v129->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
          }
          else
          {
            v133 = &v129->obj.klass + v131;
            v34->fields._size = v131 + 1;
            v133[4] = (Il2CppClass *)v132;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v132, v127, v128);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v192 = v119->fields._items;
          v193 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v192 )
            goto LABEL_327;
          goto LABEL_237;
        case 14:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v65 = v34->fields._items;
          v66 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v65 )
            goto LABEL_327;
          v67 = v34->fields._size;
          v68 = mNewItemSp;
          if ( (unsigned int)v67 >= v65->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v65->obj.klass + v67;
            v34->fields._size = v67 + 1;
            v69[4] = (Il2CppClass *)v68;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v68, v63, v64);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v136 = v34->fields._items;
          v137 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v136 )
            goto LABEL_327;
          v138 = v34->fields._size;
          v139 = mNewItemSp;
          if ( (unsigned int)v138 >= v136->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
          }
          else
          {
            v140 = &v136->obj.klass + v138;
            v34->fields._size = v138 + 1;
            v140[4] = (Il2CppClass *)v139;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v140 + 4), (int32_t)v139, v134, v135);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v196 = v34->fields._items;
          v197 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v196 )
            goto LABEL_327;
          v198 = v34->fields._size;
          v199 = mNewItemSp;
          if ( (unsigned int)v198 >= v196->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v197[4] + 192LL) + 112LL));
          }
          else
          {
            v200 = &v196->obj.klass + v198;
            v34->fields._size = v198 + 1;
            v200[4] = (Il2CppClass *)v199;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v200 + 4), (int32_t)v199, v194, v195);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v228 = v119->fields._items;
          v229 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v228 )
            goto LABEL_327;
          v230 = v119->fields._size;
          v231 = mNewItemSp;
          if ( (unsigned int)v230 >= v228->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v119,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
          }
          else
          {
            v232 = &v228->obj.klass + v230;
            v119->fields._size = v230 + 1;
            v232[4] = (Il2CppClass *)v231;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v232 + 4), (int32_t)v231, v226, v227);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v192 = v119->fields._items;
          v193 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v192 )
            goto LABEL_327;
LABEL_237:
          v254 = v119->fields._size;
          v255 = mNewItemSp;
          if ( (unsigned int)v254 >= v192->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v119,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
          }
          else
          {
            v256 = &v192->obj.klass + v254;
            v119->fields._size = v254 + 1;
            v256[4] = (Il2CppClass *)v255;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v256 + 4), (int32_t)v255, v190, v191);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v259 = v119->fields._items;
          v260 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v259 )
            goto LABEL_327;
          goto LABEL_258;
        case 18:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v72 = v34->fields._items;
          v73 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v72 )
            goto LABEL_327;
          v74 = v34->fields._size;
          v75 = mNewItemSp;
          if ( (unsigned int)v74 >= v72->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &v72->obj.klass + v74;
            v34->fields._size = v74 + 1;
            v76[4] = (Il2CppClass *)v75;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v76 + 4), (int32_t)v75, v70, v71);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v143 = v34->fields._items;
          v144 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v143 )
            goto LABEL_327;
          v145 = v34->fields._size;
          v146 = mNewItemSp;
          if ( (unsigned int)v145 >= v143->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
          }
          else
          {
            v147 = &v143->obj.klass + v145;
            v34->fields._size = v145 + 1;
            v147[4] = (Il2CppClass *)v146;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v147 + 4), (int32_t)v146, v141, v142);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v203 = v119->fields._items;
          v204 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v203 )
            goto LABEL_327;
          goto LABEL_245;
        case 20:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v79 = v34->fields._items;
          v80 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v79 )
            goto LABEL_327;
          v81 = v34->fields._size;
          v82 = mNewItemSp;
          if ( (unsigned int)v81 >= v79->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v83 = &v79->obj.klass + v81;
            v34->fields._size = v81 + 1;
            v83[4] = (Il2CppClass *)v82;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v82, v77, v78);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v150 = v34->fields._items;
          v151 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v150 )
            goto LABEL_327;
          v152 = v34->fields._size;
          v153 = mNewItemSp;
          if ( (unsigned int)v152 >= v150->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
          }
          else
          {
            v154 = &v150->obj.klass + v152;
            v34->fields._size = v152 + 1;
            v154[4] = (Il2CppClass *)v153;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v154 + 4), (int32_t)v153, v148, v149);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v203 = v119->fields._items;
          v204 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v203 )
            goto LABEL_327;
          goto LABEL_245;
        case 22:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v34 )
            {
              v86 = v34->fields._items;
              v87 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v34->fields._version;
              if ( v86 )
              {
                v88 = v34->fields._size;
                v89 = mNewItemSp;
                if ( (unsigned int)v88 >= v86->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v34,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                }
                else
                {
                  v90 = &v86->obj.klass + v88;
                  v34->fields._size = v88 + 1;
                  v90[4] = (Il2CppClass *)v89;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v90 + 4), (int32_t)v89, v84, v85);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                  v157 = v34->fields._items;
                  v158 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v34->fields._version;
                  if ( v157 )
                  {
                    v159 = v34->fields._size;
                    v160 = mNewItemSp;
                    if ( (unsigned int)v159 >= v157->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v34,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v161 = &v157->obj.klass + v159;
                      v34->fields._size = v159 + 1;
                      v161[4] = (Il2CppClass *)v160;
                      sub_1BCAF9C((CGThumbnailListItem_o *)(v161 + 4), (int32_t)v160, v155, v156);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                      v207 = v34->fields._items;
                      v208 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v34->fields._version;
                      if ( v207 )
                      {
                        v209 = v34->fields._size;
                        v210 = mNewItemSp;
                        if ( (unsigned int)v209 >= v207->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v34,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v211 = &v207->obj.klass + v209;
                          v34->fields._size = v209 + 1;
                          v211[4] = (Il2CppClass *)v210;
                          sub_1BCAF9C((CGThumbnailListItem_o *)(v211 + 4), (int32_t)v210, v205, v206);
                        }
                        v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v119,
                          (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                          if ( v119 )
                          {
                            v235 = v119->fields._items;
                            v236 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v119->fields._version;
                            if ( v235 )
                            {
                              v237 = v119->fields._size;
                              v238 = mNewItemSp;
                              if ( (unsigned int)v237 >= v235->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v119,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v239 = &v235->obj.klass + v237;
                                v119->fields._size = v237 + 1;
                                v239[4] = (Il2CppClass *)v238;
                                sub_1BCAF9C((CGThumbnailListItem_o *)(v239 + 4), (int32_t)v238, v233, v234);
                              }
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
                              if ( mNewItemSp )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                          mNewItemSp,
                                                                          0LL);
                                v203 = v119->fields._items;
                                v204 = Method_System_Collections_Generic_List_GameObject__Add__;
                                ++v119->fields._version;
                                if ( v203 )
                                  goto LABEL_245;
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
          goto LABEL_327;
        case 24:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v93 = v34->fields._items;
          v94 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v93 )
            goto LABEL_327;
          v95 = v34->fields._size;
          v96 = mNewItemSp;
          if ( (unsigned int)v95 >= v93->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
          }
          else
          {
            v97 = &v93->obj.klass + v95;
            v34->fields._size = v95 + 1;
            v97[4] = (Il2CppClass *)v96;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v97 + 4), (int32_t)v96, v91, v92);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v164 = v34->fields._items;
          v165 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v164 )
            goto LABEL_327;
          v166 = v34->fields._size;
          v167 = mNewItemSp;
          if ( (unsigned int)v166 >= v164->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
          }
          else
          {
            v168 = &v164->obj.klass + v166;
            v34->fields._size = v166 + 1;
            v168[4] = (Il2CppClass *)v167;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v168 + 4), (int32_t)v167, v162, v163);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL);
          if ( !v119 )
            goto LABEL_327;
          v203 = v119->fields._items;
          v204 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v203 )
            goto LABEL_327;
LABEL_245:
          v261 = v119->fields._size;
          max_length = v203->max_length;
          method = (const MethodInfo *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v100 = v34->fields._items;
          v101 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v100 )
            goto LABEL_327;
          v102 = v34->fields._size;
          v103 = mNewItemSp;
          if ( (unsigned int)v102 >= v100->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
          }
          else
          {
            v104 = &v100->obj.klass + v102;
            v34->fields._size = v102 + 1;
            v104[4] = (Il2CppClass *)v103;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v104 + 4), (int32_t)v103, v98, v99);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v171 = v34->fields._items;
          v172 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v171 )
            goto LABEL_327;
          v173 = v34->fields._size;
          v174 = mNewItemSp;
          if ( (unsigned int)v173 >= v171->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
          }
          else
          {
            v175 = &v171->obj.klass + v173;
            v34->fields._size = v173 + 1;
            v175[4] = (Il2CppClass *)v174;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v175 + 4), (int32_t)v174, v169, v170);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v214 = v34->fields._items;
          v215 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v214 )
            goto LABEL_327;
          v216 = v34->fields._size;
          v217 = mNewItemSp;
          if ( (unsigned int)v216 >= v214->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
          }
          else
          {
            v218 = &v214->obj.klass + v216;
            v34->fields._size = v216 + 1;
            v218[4] = (Il2CppClass *)v217;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v218 + 4), (int32_t)v217, v212, v213);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v242 = v119->fields._items;
          v243 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v242 )
            goto LABEL_327;
          v244 = v119->fields._size;
          v245 = mNewItemSp;
          if ( (unsigned int)v244 >= v242->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v119,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
          }
          else
          {
            v246 = &v242->obj.klass + v244;
            v119->fields._size = v244 + 1;
            v246[4] = (Il2CppClass *)v245;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v246 + 4), (int32_t)v245, v240, v241);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v203 = v119->fields._items;
          v204 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v203 )
            goto LABEL_327;
          goto LABEL_251;
        case 28:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v34 )
            goto LABEL_327;
          v107 = v34->fields._items;
          v108 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v107 )
            goto LABEL_327;
          v109 = v34->fields._size;
          v110 = mNewItemSp;
          if ( (unsigned int)v109 >= v107->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            v111 = &v107->obj.klass + v109;
            v34->fields._size = v109 + 1;
            v111[4] = (Il2CppClass *)v110;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v111 + 4), (int32_t)v110, v105, v106);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v178 = v34->fields._items;
          v179 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v178 )
            goto LABEL_327;
          v180 = v34->fields._size;
          v181 = mNewItemSp;
          if ( (unsigned int)v180 >= v178->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
          }
          else
          {
            v182 = &v178->obj.klass + v180;
            v34->fields._size = v180 + 1;
            v182[4] = (Il2CppClass *)v181;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v182 + 4), (int32_t)v181, v176, v177);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v221 = v34->fields._items;
          v222 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v34->fields._version;
          if ( !v221 )
            goto LABEL_327;
          v223 = v34->fields._size;
          v224 = mNewItemSp;
          if ( (unsigned int)v223 >= v221->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
          }
          else
          {
            v225 = &v221->obj.klass + v223;
            v34->fields._size = v223 + 1;
            v225[4] = (Il2CppClass *)v224;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v225 + 4), (int32_t)v224, v219, v220);
          }
          v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v119,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v119 )
            goto LABEL_327;
          v249 = v119->fields._items;
          v250 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v249 )
            goto LABEL_327;
          v251 = v119->fields._size;
          v252 = mNewItemSp;
          if ( (unsigned int)v251 >= v249->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v119,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v250[4] + 192LL) + 112LL));
          }
          else
          {
            v253 = &v249->obj.klass + v251;
            v119->fields._size = v251 + 1;
            v253[4] = (Il2CppClass *)v252;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v253 + 4), (int32_t)v252, v247, v248);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v203 = v119->fields._items;
          v204 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v119->fields._version;
          if ( !v203 )
            goto LABEL_327;
LABEL_251:
          v261 = v119->fields._size;
          max_length = v203->max_length;
LABEL_252:
          if ( (unsigned int)v261 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v119,
              (Il2CppObject *)method,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
          }
          else
          {
            v263 = &v203->obj.klass + v261;
            v119->fields._size = v261 + 1;
            v263[4] = (Il2CppClass *)method;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v263 + 4), (int32_t)method, v201, v202);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_327;
        default:
          v34 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v34,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v33 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v34 )
              goto LABEL_327;
            v44 = v34->fields._items;
            v45 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v34->fields._version;
            if ( !v44 )
              goto LABEL_327;
            v46 = v34->fields._size;
            v47 = mNewItemSp;
            if ( (unsigned int)v46 >= v44->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &v44->obj.klass + v46;
              v34->fields._size = v46 + 1;
              v48[4] = (Il2CppClass *)v47;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v47, v42, v43);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v300 = v34->fields._items;
            v301 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v34->fields._version;
            if ( !v300 )
              goto LABEL_327;
            v302 = v34->fields._size;
            v303 = mNewItemSp;
            if ( (unsigned int)v302 >= v300->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v301[4] + 192LL) + 112LL));
            }
            else
            {
              v304 = &v300->obj.klass + v302;
              v34->fields._size = v302 + 1;
              v304[4] = (Il2CppClass *)v303;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v304 + 4), (int32_t)v303, v298, v299);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v307 = v34->fields._items;
            v308 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v34->fields._version;
            if ( !v307 )
              goto LABEL_327;
            v309 = v34->fields._size;
            v310 = mNewItemSp;
            if ( (unsigned int)v309 >= v307->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
            }
            else
            {
              v311 = &v307->obj.klass + v309;
              v34->fields._size = v309 + 1;
              v311[4] = (Il2CppClass *)v310;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v311 + 4), (int32_t)v310, v305, v306);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v314 = v34->fields._items;
            v315 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v34->fields._version;
            if ( !v314 )
              goto LABEL_327;
            v316 = v34->fields._size;
            v317 = mNewItemSp;
            if ( (unsigned int)v316 >= v314->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v315[4] + 192LL) + 112LL));
            }
            else
            {
              v318 = &v314->obj.klass + v316;
              v34->fields._size = v316 + 1;
              v318[4] = (Il2CppClass *)v317;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v318 + 4), (int32_t)v317, v312, v313);
            }
            v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v119,
              (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v119 )
              goto LABEL_327;
            v321 = v119->fields._items;
            v322 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v119->fields._version;
            if ( !v321 )
              goto LABEL_327;
            v323 = v119->fields._size;
            v324 = mNewItemSp;
            if ( (unsigned int)v323 >= v321->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v119,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v322[4] + 192LL) + 112LL));
            }
            else
            {
              v325 = &v321->obj.klass + v323;
              v119->fields._size = v323 + 1;
              v325[4] = (Il2CppClass *)v324;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v325 + 4), (int32_t)v324, v319, v320);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v328 = v119->fields._items;
            v329 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v119->fields._version;
            if ( !v328 )
              goto LABEL_327;
            v330 = v119->fields._size;
            v331 = mNewItemSp;
            if ( (unsigned int)v330 >= v328->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v119,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v329[4] + 192LL) + 112LL));
            }
            else
            {
              v332 = &v328->obj.klass + v330;
              v119->fields._size = v330 + 1;
              v332[4] = (Il2CppClass *)v331;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v332 + 4), (int32_t)v331, v326, v327);
            }
            method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
            v335 = v119->fields._items;
            v336 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v119->fields._version;
            if ( !v335 )
              goto LABEL_327;
            v337 = v119->fields._size;
            if ( (unsigned int)v337 >= v335->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v119,
                (Il2CppObject *)method,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v336[4] + 192LL) + 112LL));
            }
            else
            {
              v338 = &v335->obj.klass + v337;
              v119->fields._size = v337 + 1;
              v338[4] = (Il2CppClass *)method;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v338 + 4), (int32_t)method, v333, v334);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_327;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v259 = v119->fields._items;
            v260 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v119->fields._version;
            if ( !v259 )
              goto LABEL_327;
            method = (const MethodInfo *)mNewItemSp;
LABEL_258:
            v264 = v119->fields._size;
            if ( (unsigned int)v264 >= v259->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v119,
                (Il2CppObject *)method,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
            }
            else
            {
              v265 = &v259->obj.klass + v264;
              v119->fields._size = v264 + 1;
              v265[4] = (Il2CppClass *)method;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v265 + 4), (int32_t)method, v257, v258);
            }
          }
          else
          {
            v119 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v119,
              (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_327;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v34,
            (System_Collections_Generic_List_GameObject__o *)v119,
            0LL);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
          if ( !mNewItemSp )
            goto LABEL_327;
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)mNewItemSp, 0, 0LL);
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_327;
          ShopNoticeTween__Start((ShopNoticeTween_o *)mNewItemSp, 0LL);
          break;
      }
    }
    else
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      if ( mNewItemSp )
        ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
    }
    v266 = this->fields.shopNotice;
    if ( !v266 )
      goto LABEL_327;
    if ( v266->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v267 = (ShopNoticeRemainTime_o *)sub_1BCB244(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v267, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v267,
            sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.shopNoticeRemainTime, (int32_t)v267, v268, v269),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v271 = this->fields.shopNotice;
          if ( v271 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v271->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1LL,
                                                      v270);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
              v275 = this->fields.shopNotice;
              if ( v275 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v275->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          v274);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v278 = this->fields.shopNotice;
                  if ( v278 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v278->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              v277);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v281 = this->fields.mPeriodLimitedTimeLb;
                        v282 = (ShopNoticeRemainTimeLabel_o *)sub_1BCB244(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v282, v281, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v282;
                        sub_1BCAF9C(
                          (CGThumbnailListItem_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int32_t)v282,
                          v283,
                          v284);
                      }
                      p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v286 = this->fields.mMonthlyLimitedTimeLb;
                        v287 = (ShopNoticeRemainTimeLabel_o *)sub_1BCB244(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v287, v286, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v287;
                        sub_1BCAF9C(
                          (CGThumbnailListItem_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int32_t)v287,
                          v288,
                          v289);
                      }
                      p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v291 = this->fields.mExchangeServantItemLb;
                        v292 = (ShopNoticeRemainTimeLabel_o *)sub_1BCB244(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v292, v291, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v292;
                        sub_1BCAF9C(
                          (CGThumbnailListItem_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int32_t)v292,
                          v293,
                          v294);
                      }
                      v295 = this->fields.shopNotice;
                      if ( v295 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          ShopNoticeRemainTimeLabel__SetTimeLimit(
                            (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                            v295->fields._PeriodTimeLimit_k__BackingField,
                            1,
                            0LL);
                          mNewItemSp = (UnityEngine_Component_o *)*p_periodShopNoticeRemainTimeLabel;
                          if ( *p_periodShopNoticeRemainTimeLabel )
                          {
                            ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                            v296 = this->fields.shopNotice;
                            if ( v296 )
                            {
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                              if ( mNewItemSp )
                              {
                                ShopNoticeRemainTimeLabel__SetTimeLimit(
                                  (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                                  v296->fields._MonthlyTimeLimit_k__BackingField,
                                  1,
                                  0LL);
                                mNewItemSp = (UnityEngine_Component_o *)*p_monthlyShopNoticeRemainTimeLabel;
                                if ( *p_monthlyShopNoticeRemainTimeLabel )
                                {
                                  ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                                  v297 = this->fields.shopNotice;
                                  if ( v297 )
                                  {
                                    mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                    if ( mNewItemSp )
                                    {
                                      ShopNoticeRemainTimeLabel__SetTimeLimit(
                                        (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                                        v297->fields._ExchangeServantTimeLimit_k__BackingField,
                                        1,
                                        0LL);
                                      mNewItemSp = (UnityEngine_Component_o *)*p_exchangeServantShopNoticeRemainTimeLabel;
                                      if ( *p_exchangeServantShopNoticeRemainTimeLabel )
                                      {
                                        ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                                        return;
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
                }
              }
            }
          }
        }
      }
LABEL_327:
      sub_1BCB254(mNewItemSp, method);
    }
  }
}


void __fastcall MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  GachaMaster_o *Master_object; // x0
  Il2CppObject *summonCampainObject; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x20
  char v29; // w26
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x22
  int32_t klass; // w21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x1
  System_String_o *v39; // x21
  __int64 v40; // x1
  UnityEngine_GameObject_o *summonCampaignRootObject; // x0
  Il2CppObject *campaignNoticePrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  CampaignNoticeObject_o *v46; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v48; // x1
  UISprite_o *campaignSprite; // x23
  System_Collections_Generic_List_object__o *summonCampaignObjects; // x21
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  const MethodInfo *v59; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v62; // x1
  UILabel_o *summonCampainNumLabel; // x20
  int v64; // w22
  struct ShopNoticeTween_o **p_summonNoticeTween; // x20
  ShopNoticeTween_o *v66; // x21
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int MasterName_k__BackingField; // w21
  System_Collections_Generic_List_object__o *v70; // x21
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-B8h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-9Ch] BYREF
  int64_t endedAt; // [xsp+28h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-90h] BYREF
  int32_t remainNum; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+40h] [xbp-80h] BYREF
  int v83; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4B1BCB2 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GachaDetailMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__, v9);
    sub_1BCAFF8(&int_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__AddRange__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v17);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___, v18);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v19);
    sub_1BCAFF8(&ShopNoticeTween_TypeInfo, v20);
    sub_1BCAFF8(&UserGachaMaster_TypeInfo, v21);
    sub_1BCAFF8(&StringLiteral_6504/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v22);
    sub_1BCAFF8(&StringLiteral_20062/*"icon_summoncampaign_{0}"*/, v23);
    sub_1BCAFF8(&StringLiteral_6505/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v24);
    byte_4B1BCB2 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  remainNum = 0;
  endedAt = 0LL;
  entity = 0LL;
  maxNum = 0;
  if ( this->fields.isOpen )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !Master_object )
      goto LABEL_70;
    ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                          Master_object,
                                                                          0LL);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaDetailMaster___);
    v83 = 0;
    if ( !ValidGachaEntityList )
      goto LABEL_70;
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      ValidGachaEntityList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v29 = 0;
    v82 = v77;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v82,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
      if ( !v30 )
        break;
      current = v82.fields._current;
      if ( !v82.fields._current )
        sub_1BCB254(v30, v31);
      if ( LODWORD(v82.fields._current[3].klass) == 3 )
      {
        klass = (int32_t)v82.fields._current[1].klass;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v30 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(klass, &remainNum, &maxNum, 0LL);
        if ( v30 )
        {
          v29 = 1;
          v83 += remainNum;
        }
      }
      if ( !v28 )
        sub_1BCB254(v30, v31);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v28,
             &entity,
             (int32_t)current[1].klass,
             (const MethodInfo_32C7E4C *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1BCB254(0LL, v34);
        if ( GachaDetailEntity__IsPrivilegeSummon((GachaDetailEntity_o *)entity, &endedAt, 0LL) )
        {
          LODWORD(v77.fields._list) = current[1].klass;
          v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v35, v36, v37);
          v39 = System_String__Format((System_String_o *)StringLiteral_20062/*"icon_summoncampaign_{0}"*/, v38, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__IsExistBanner(v39, 0LL) )
          {
            summonCampaignRootObject = this->fields.summonCampaignRootObject;
            if ( !summonCampaignRootObject )
              sub_1BCB254(0LL, v40);
            campaignNoticePrefab = (Il2CppObject *)this->fields.campaignNoticePrefab;
            transform = UnityEngine_GameObject__get_transform(summonCampaignRootObject, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v44 = UnityEngine_Object__Instantiate_object__51002592(
                    campaignNoticePrefab,
                    transform,
                    (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___);
            v46 = (CampaignNoticeObject_o *)v44;
            if ( !v44 )
              sub_1BCB254(0LL, v45);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL);
            if ( !gameObject )
              sub_1BCB254(0LL, v48);
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            CampaignNoticeObject__StartUpdateLimitTime(v46, endedAt, (UnityEngine_MonoBehaviour_o *)this, 0LL);
            campaignSprite = v46->fields.campaignSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetBanner(campaignSprite, v39, 0LL);
            summonCampaignObjects = (System_Collections_Generic_List_object__o *)this->fields.summonCampaignObjects;
            v51 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v46, 0LL);
            v54 = v51;
            if ( !summonCampaignObjects )
              sub_1BCB254(v51, v51);
            items = summonCampaignObjects->fields._items;
            v56 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++summonCampaignObjects->fields._version;
            if ( !items )
              sub_1BCB254(v51, v51);
            size = summonCampaignObjects->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                summonCampaignObjects,
                v51,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &items->obj.klass + size;
              summonCampaignObjects->fields._size = size + 1;
              v58[4] = (Il2CppClass *)v54;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v54, v52, v53);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v82,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    if ( (v29 & 1) != 0 )
    {
      Master_object = (GachaMaster_o *)this->fields.summonCampainObject;
      if ( !Master_object )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      summonCampainLabel1 = this->fields.summonCampainLabel1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6504/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v59);
      if ( !summonCampainLabel1 )
        goto LABEL_70;
      UILabel__set_text(summonCampainLabel1, (System_String_o *)Master_object, 0LL);
      summonCampainLabel2 = this->fields.summonCampainLabel2;
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6505/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v62);
      if ( !summonCampainLabel2 )
        goto LABEL_70;
      UILabel__set_text(summonCampainLabel2, (System_String_o *)Master_object, 0LL);
      summonCampainNumLabel = this->fields.summonCampainNumLabel;
      Master_object = (GachaMaster_o *)System_Int32__ToString((int32_t)&v83, 0LL);
      if ( !summonCampainNumLabel )
        goto LABEL_70;
      UILabel__set_text(summonCampainNumLabel, (System_String_o *)Master_object, 0LL);
      v64 = 1;
    }
    else
    {
      v64 = 0;
    }
    Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
    p_summonNoticeTween = &this->fields.summonNoticeTween;
    if ( !Master_object )
    {
      v66 = (ShopNoticeTween_o *)sub_1BCB244(ShopNoticeTween_TypeInfo);
      ShopNoticeTween___ctor(v66, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.summonNoticeTween = v66;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.summonNoticeTween, (int32_t)v66, v67, v68);
      Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
      if ( !Master_object )
        goto LABEL_70;
    }
    ShopNoticeTween__Stop((ShopNoticeTween_o *)Master_object, 0LL);
    Master_object = (GachaMaster_o *)this->fields.summonCampaignObjects;
    if ( !Master_object )
      goto LABEL_70;
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Master_object, 0LL)
      && MasterName_k__BackingField + v64 >= 2 )
    {
      v70 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v70,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
      if ( v64 )
      {
        if ( !v70 )
          goto LABEL_70;
        summonCampainObject = (Il2CppObject *)this->fields.summonCampainObject;
        v73 = v70->fields._items;
        v74 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v70->fields._version;
        if ( !v73 )
          goto LABEL_70;
        v75 = v70->fields._size;
        if ( (unsigned int)v75 >= v73->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v70,
            summonCampainObject,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &v73->obj.klass + v75;
          v70->fields._size = v75 + 1;
          v76[4] = (Il2CppClass *)summonCampainObject;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v76 + 4), (int32_t)summonCampainObject, v71, v72);
        }
      }
      else if ( !v70 )
      {
        goto LABEL_70;
      }
      System_Collections_Generic_List_object___AddRange(
        v70,
        (System_Collections_Generic_IEnumerable_T__o *)this->fields.summonCampaignObjects,
        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
      if ( Master_object )
      {
        ShopNoticeTween__AddTargets(
          (ShopNoticeTween_o *)Master_object,
          this->fields.summonCampaignRootObject,
          (System_Collections_Generic_List_GameObject__o *)v70,
          0LL,
          0LL);
        Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
        if ( Master_object )
        {
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)Master_object, 0, 0LL);
          Master_object = (GachaMaster_o *)*p_summonNoticeTween;
          if ( *p_summonNoticeTween )
          {
            ShopNoticeTween__Start((ShopNoticeTween_o *)Master_object, 0LL);
            return;
          }
        }
      }
LABEL_70:
      sub_1BCB254(Master_object, summonCampainObject);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SendSelectSignal(
        MainMenuBarBase_o *this,
        int32_t type,
        System_String_o *message,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *activeSceneFSM; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  PlayMakerFSM_o *v16; // x0

  if ( (byte_4B1BCAC & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&StringLiteral_8450/*"MAIN_MENU_BAR_SELECT"*/, v9);
    byte_4B1BCAC = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) && !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedKind, (int32_t)message, v11, v12);
    this->fields.selectedObject = obj;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedObject, (int32_t)obj, v13, v14);
    v16 = this->fields.activeSceneFSM;
    if ( !v16 )
      sub_1BCB254(0LL, v15);
    PlayMakerFSM__SendEvent(v16, (System_String_o *)StringLiteral_8450/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
  }
}


void __fastcall MainMenuBarBase__SetActiveScene(
        MainMenuBarBase_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct PlayMakerFSM_o *myFSM; // x1
  Il2CppObject *ComponentInChildren_object__50402520; // x0
  UnityEngine_Component_o *v16; // x23
  UnityEngine_Transform_o *v17; // x24
  UnityEngine_GameObject_o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3

  if ( (byte_4B1BCA8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, scene);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v11);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    byte_4B1BCA8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    ComponentInChildren_object__50402520 = UnityEngine_Component__GetComponentInChildren_object__50402520(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_30114D8 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    ComponentInChildren_object__50402520 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v16 = (UnityEngine_Component_o *)ComponentInChildren_object__50402520;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v16 )
      goto LABEL_28;
    v17 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v16, 0LL);
    if ( !v17 )
      goto LABEL_28;
    UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)gameObject, 0LL);
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v18 )
      goto LABEL_28;
    UnityEngine_GameObject__set_layer(v18, (int32_t)gameObject, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scene, 0LL, 0LL);
  myFSM = 0LL;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    myFSM = scene->fields.myFSM;
  }
  if ( !this )
    goto LABEL_28;
  this->fields.activeSceneFSM = myFSM;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.activeSceneFSM, (int32_t)myFSM, v19, v20);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v21),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v22),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_28:
    sub_1BCB254(gameObject, myFSM);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


void __fastcall MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mAllBtnAct = act;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mAllBtnAct, (int32_t)act, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetButtonActive(
        MainMenuBarBase_o *this,
        int32_t kind,
        bool isActive,
        const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  int v6; // w22
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  partyBtn = this->fields.partyBtn;
  if ( isActive )
    v6 = 2;
  else
    v6 = 1;
  if ( !partyBtn )
    goto LABEL_41;
  v9 = kind == 3 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v9, 0LL);
  partyBtn = this->fields.summonBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v10 = kind == 4 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v10, 0LL);
  partyBtn = this->fields.combineBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v11 = kind == 5 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v11, 0LL);
  partyBtn = this->fields.shopBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v12 = kind == 6 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v12, 0LL);
  partyBtn = this->fields.friendBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v13 = kind == 7 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v13, 0LL);
  partyBtn = this->fields.myroomBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v14 = kind == 8 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v14, 0LL);
  partyBtn = this->fields.terminalBtn;
  if ( !partyBtn )
    goto LABEL_41;
  if ( kind == 1 )
    v15 = 3;
  else
    v15 = v6;
  MainMenuBarButton__SetMode(partyBtn, v15, 0LL);
  if ( kind == 8 && isActive )
  {
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, *(const MethodInfo **)&kind);
    goto LABEL_40;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_41:
    sub_1BCB254(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v18 = 3;
  else
    v18 = v6;
  MainMenuBarButton__SetMode(partyBtn, v18, 0LL);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedKind, 0, v16, v17);
  this->fields.selectedObject = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedObject, 0, v19, v20);
  this->fields.fadeType = 1;
}


void __fastcall MainMenuBarBase__SetButtonKind(MainMenuBarBase_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.kind = kind;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetDispBtnAct(
        MainMenuBarBase_o *this,
        int32_t kind,
        System_Action_o *act,
        const MethodInfo *method)
{
  struct System_Action_array *mDispBtnActList; // x8
  Il2CppClass **v5; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_1BCB254(this, kind);
  if ( mDispBtnActList->max_length <= kind )
    sub_1BCB25C(this, *(_QWORD *)&kind, act);
  v5 = &mDispBtnActList->obj.klass + kind;
  v5[4] = (Il2CppClass *)act;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 4), (int32_t)act, (int32_t)act, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetDispBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *mDispBtnList; // x0
  int32_t v10; // w22

  if ( (byte_4B1BCC4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__, v8);
    byte_4B1BCC4 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_10:
    sub_1BCB254(mDispBtnList, is_enable);
  v10 = 0;
  while ( v10 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v10,
                                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0LL);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( mDispBtnList )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mDispBtnList, kind == v10 && is_enable, 0LL);
          mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
          ++v10;
          if ( mDispBtnList )
            continue;
        }
      }
    }
    goto LABEL_10;
  }
}


void __fastcall MainMenuBarBase__SetMenuActive(MainMenuBarBase_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mMenuBtnAct = act;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mMenuBtnAct, (int32_t)act, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetMenuBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool isEnable,
        bool isGray,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0
  __int64 v8; // x1

  if ( (byte_4B1BCC3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_4B1BCC3 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0LL);
  menuStateBtn = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0LL);
  if ( !isEnable )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( !menuStateBtn )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, 0, 0LL);
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (!isGray ? (v8 = 0LL) : (v8 = 3LL),
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))menuStateBtn->klass[1]._1.implementedInterfaces)(
          menuStateBtn,
          v8,
          1LL,
          menuStateBtn->klass[1]._1.interfaceOffsets),
        (menuStateBtn = (UnityEngine_Component_o *)this->fields.menuFrameBnt) == 0LL) )
  {
LABEL_18:
    sub_1BCB254(menuStateBtn, isEnable);
  }
  UIButtonColor__set_state((UIButtonColor_o *)menuStateBtn, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetOutSideColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0

  if ( (byte_4B1BCB6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_4B1BCB6 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_10;
  if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)menuStateBtn, 0LL) )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( menuStateBtn )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, is_enable, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(menuStateBtn, is_enable);
  }
}


void __fastcall MainMenuBarBase__SetSceneChangeFadeType(
        MainMenuBarBase_o *this,
        int32_t fadeType,
        const MethodInfo *method)
{
  this->fields.fadeType = fadeType;
}


System_Collections_IEnumerator_o *__fastcall MainMenuBarBase__SetTerminalQuestListClose(
        MainMenuBarBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1BCB9 & 1) == 0 )
  {
    sub_1BCAFF8(&MainMenuBarBase__SetTerminalQuestListClose_d__112_TypeInfo, callback);
    byte_4B1BCB9 = 1;
  }
  v5 = sub_1BCB244(MainMenuBarBase__SetTerminalQuestListClose_d__112_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__112___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__112_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MainMenuBarBase__Start(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MainMenuBarBase__BackActive(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SwitchMenu(
        MainMenuBarBase_o *this,
        bool is_open,
        bool is_play_se,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *menuComp; // x0
  int v24; // s0
  int v25; // s2
  int v26; // s9
  int v27; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v29; // x2
  struct System_Collections_Hashtable_o *table; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct System_Collections_Hashtable_o *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct System_Collections_Hashtable_o *v38; // x23
  struct System_Collections_Hashtable_o *v39; // x23
  struct System_Collections_Hashtable_o *v40; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Hashtable_o *v44; // x23
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  float v49; // s10
  struct System_Collections_Hashtable_o *v50; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  struct System_Collections_Hashtable_o *v54; // x23
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  struct System_Collections_Hashtable_o *v58; // x23
  struct System_Collections_Hashtable_o *v59; // x23
  struct System_Collections_Hashtable_o *v60; // x23
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Hashtable_o *v64; // x21
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  int32_t v67; // w1
  int v68; // [xsp+0h] [xbp-60h] BYREF
  int v69; // [xsp+4h] [xbp-5Ch]
  int v70; // [xsp+8h] [xbp-58h]
  int v71; // [xsp+18h] [xbp-48h] BYREF
  char v72[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B1BCAD & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, is_open);
    sub_1BCAFF8(&Method_MainMenuBarBase_SwitchMenu__, v7);
    sub_1BCAFF8(&float_TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_18592/*"easetype"*/, v10);
    sub_1BCAFF8(&StringLiteral_22216/*"onMoveComplete"*/, v11);
    sub_1BCAFF8(&StringLiteral_17869/*"closeMenuStateImg"*/, v12);
    sub_1BCAFF8(&StringLiteral_18577/*"easeInQuad"*/, v13);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v14);
    sub_1BCAFF8(&StringLiteral_22231/*"oncompletetarget"*/, v15);
    sub_1BCAFF8(&StringLiteral_22236/*"onstarttarget"*/, v16);
    sub_1BCAFF8(&StringLiteral_22532/*"position"*/, v17);
    sub_1BCAFF8(&StringLiteral_20742/*"isLocal"*/, v18);
    sub_1BCAFF8(&StringLiteral_22234/*"onstart"*/, v19);
    sub_1BCAFF8(&StringLiteral_22229/*"oncomplete"*/, v20);
    sub_1BCAFF8(&StringLiteral_22274/*"openMenuStateImg"*/, v21);
    sub_1BCAFF8(&iTween_TypeInfo, v22);
    byte_4B1BCAD = 1;
  }
  if ( !this->fields.isSwitchMenuMoving && this->fields.isOpen != is_open )
  {
    this->fields.isOpen = is_open;
    this->fields.isSwitchMenuMoving = 1;
    if ( is_open )
      MainMenuBarBase__BackActive(this, 1, (const MethodInfo *)is_play_se);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    menuComp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(menuComp, 0LL);
    if ( !menuComp )
      goto LABEL_47;
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)menuComp, 0LL);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    v26 = v24;
    v27 = v25;
    gameObject = UnityEngine_GameObject__get_gameObject(menuComp, 0LL);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v29);
    menuComp = (UnityEngine_GameObject_o *)this->fields.mMenuNoticeNumber;
    if ( !menuComp )
      goto LABEL_47;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)menuComp, !is_open, 0LL);
    if ( is_open )
    {
      menuComp = (UnityEngine_GameObject_o *)this->fields.table;
      if ( menuComp )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
          menuComp,
          menuComp->klass[1].vtable._1_Finalize.methodPtr);
        table = this->fields.table;
        v72[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v31, v32, v33);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._22_Add.method)(
            table,
            StringLiteral_20742/*"isLocal"*/,
            menuComp,
            table->klass->vtable._23_Clear.methodPtr);
          v34 = this->fields.table;
          v68 = v26;
          v70 = v27;
          v69 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v35, v36, v37);
          if ( v34 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._22_Add.method)(
              v34,
              StringLiteral_22532/*"position"*/,
              menuComp,
              v34->klass->vtable._23_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
                menuComp,
                StringLiteral_22234/*"onstart"*/,
                StringLiteral_22274/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._0_Equals.methodPtr);
              v38 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v38 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v38->klass->vtable._22_Add.method)(
                  v38,
                  StringLiteral_22236/*"onstarttarget"*/,
                  menuComp,
                  v38->klass->vtable._23_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
                    menuComp,
                    StringLiteral_22229/*"oncomplete"*/,
                    StringLiteral_22216/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._0_Equals.methodPtr);
                  v39 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v39 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v39->klass->vtable._22_Add.method)(
                      v39,
                      StringLiteral_22231/*"oncompletetarget"*/,
                      menuComp,
                      v39->klass->vtable._23_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
                        menuComp,
                        StringLiteral_18592/*"easetype"*/,
                        StringLiteral_18577/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._0_Equals.methodPtr);
                      v40 = this->fields.table;
                      v71 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71, v41, v42, v43);
                      if ( v40 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v40->klass->vtable._22_Add.method)(
                          v40,
                          StringLiteral_23855/*"time"*/,
                          menuComp,
                          v40->klass->vtable._23_Clear.methodPtr);
                        v44 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        iTween__MoveTo_62087988(gameObject, v44, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v45);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v46);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v47);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v48);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v65 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v65 = (_QWORD *)sub_1BCB010(Method_MainMenuBarBase_SwitchMenu__);
                        v66 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v65, v65[4]);
                        if ( is_open )
                          v67 = 9;
                        else
                          v67 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v66, v67, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_47:
      sub_1BCB254(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v49 = -420.0;
    else
      v49 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v50 = this->fields.table;
    v72[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v51, v52, v53);
    if ( !v50 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v50->klass->vtable._22_Add.method)(
      v50,
      StringLiteral_20742/*"isLocal"*/,
      menuComp,
      v50->klass->vtable._23_Clear.methodPtr);
    v54 = this->fields.table;
    v68 = v26;
    v69 = LODWORD(v49);
    v70 = v27;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v55, v56, v57);
    if ( !v54 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v54->klass->vtable._22_Add.method)(
      v54,
      StringLiteral_22532/*"position"*/,
      menuComp,
      v54->klass->vtable._23_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
      menuComp,
      StringLiteral_22234/*"onstart"*/,
      StringLiteral_17869/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._0_Equals.methodPtr);
    v58 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v58 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v58->klass->vtable._22_Add.method)(
      v58,
      StringLiteral_22236/*"onstarttarget"*/,
      menuComp,
      v58->klass->vtable._23_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
      menuComp,
      StringLiteral_22229/*"oncomplete"*/,
      StringLiteral_22216/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._0_Equals.methodPtr);
    v59 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v59 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v59->klass->vtable._22_Add.method)(
      v59,
      StringLiteral_22231/*"oncompletetarget"*/,
      menuComp,
      v59->klass->vtable._23_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
      menuComp,
      StringLiteral_18592/*"easetype"*/,
      StringLiteral_18577/*"easeInQuad"*/,
      menuComp->klass[1].vtable._0_Equals.methodPtr);
    v60 = this->fields.table;
    v71 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71, v61, v62, v63);
    if ( !v60 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v60->klass->vtable._22_Add.method)(
      v60,
      StringLiteral_23855/*"time"*/,
      menuComp,
      v60->klass->vtable._23_Clear.methodPtr);
    v64 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_62087988(gameObject, v64, 0LL);
    if ( is_play_se )
      goto LABEL_40;
  }
}


void __fastcall MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v10; // x1
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  DataManager_o *UserData; // x0
  Il2CppObject *MasterData_object; // x20
  long double v16; // q0
  int m_CancellationTokenSource; // w20
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_4B1BCA7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TblUserMaster___, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1BCA7 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C1B45C(v11);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C1B45C(v11);
    UserData = **(DataManager_o ***)(v13 + 184);
    if ( !UserData )
      goto LABEL_41;
    MasterData_object = DataManager__GetMasterData_object_(
                          UserData,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
      byte_4B165D1 = 1;
    }
    UserData = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserData = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_41;
    UserData = (DataManager_o *)TblUserMaster__getUserData(
                                  (TblUserMaster_o *)MasterData_object,
                                  *(_QWORD *)(*(_QWORD *)&UserData[1].fields._DispLog + 64LL),
                                  0LL);
    if ( !UserData )
      goto LABEL_41;
    m_CancellationTokenSource = (int)UserData->fields.m_CancellationTokenSource;
    v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C1B45C(v16);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1B45C(v16);
    UserData = **(DataManager_o ***)(v19 + 184);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserData, 0LL);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)GachaEntity__getPrice((GachaEntity_o *)UserData, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, m_CancellationTokenSource / (int)UserData, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    UserData = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)UserData, 2, 0LL);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, (int32_t)UserData, 0LL);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    UserData = (DataManager_o *)this->fields.mMenuNoticeNumber;
    if ( UserData )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserData, 0, 0LL);
      return;
    }
LABEL_41:
    sub_1BCB254(UserData, v10);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__102_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  MainMenuBarBase_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4B1BCC8 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&int_TypeInfo, v6);
    this = (MainMenuBarBase_o *)sub_1BCAFF8(&StringLiteral_20049/*"icon_servant_exchange_available_{0}"*/, v7);
    byte_4B1BCC8 = 1;
  }
  shopNotice = v5->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v5->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField, v2, v3, v4);
  v11 = System_String__Format((System_String_o *)StringLiteral_20049/*"icon_servant_exchange_available_{0}"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v11, 0LL) )
  {
    this = (MainMenuBarBase_o *)v5->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v5->fields.mExchangeServantItemDefaultAtlas, 0LL);
      this = (MainMenuBarBase_o *)v5->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.mExchangeServantItemDefaultSpriteName, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCB254(this, method);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B1BCB4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20272/*"img_menu_menu"*/, method);
    byte_4B1BCB4 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20272/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1BCB254(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0LL);
  AndroidBackKeyManager__RemoveBackBtn(gameObject, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsCloseHideMode(MainMenuBarBase_o *this, const MethodInfo *method)
{
  return this->fields.mIsCloseHideMode;
}


bool __fastcall MainMenuBarBase__get_IsEnableOutSideCollider(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mOutSide; // x0

  mOutSide = (UnityEngine_Collider_o *)this->fields.mOutSide;
  if ( !mOutSide )
    sub_1BCB254(0LL, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool isOpen; // w1
  __int64 v10; // x1
  UnityEngine_Component_o *mNewItemSp; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *summonCampaignObjects; // x8
  const MethodInfo *size; // x2
  int v15; // w9
  ShopNoticeTween_o *summonNoticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1BCB5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1BCB5 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  isOpen = this->fields.isOpen;
  this->fields.isSwitchMenuMoving = 0;
  MainMenuBarBase__SetOutSideColliderEnable(this, isOpen, v2);
  if ( !this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_23;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    if ( !mNewItemSp )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_23;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)mNewItemSp,
                                              0LL);
    if ( !mNewItemSp )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampainObject;
    if ( !mNewItemSp )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampaignObjects;
    if ( !mNewItemSp )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)mNewItemSp,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    summonCampaignObjects = this->fields.summonCampaignObjects;
    if ( !summonCampaignObjects )
LABEL_23:
      sub_1BCB254(mNewItemSp, v10);
    size = (const MethodInfo *)(unsigned int)summonCampaignObjects->fields._size;
    v15 = summonCampaignObjects->fields._version + 1;
    summonCampaignObjects->fields._size = 0;
    summonCampaignObjects->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)summonCampaignObjects->fields._items, 0, (int32_t)size, 0LL);
    summonNoticeTween = this->fields.summonNoticeTween;
    if ( summonNoticeTween )
      ShopNoticeTween__Stop(summonNoticeTween, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, size);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B1BCB3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20271/*"img_menu_close"*/, method);
    byte_4B1BCB3 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20271/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1BCB254(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0LL);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall MainMenuBarBase__set_IsCloseHideMode(MainMenuBarBase_o *this, bool value, const MethodInfo *method)
{
  this->fields.mIsCloseHideMode = value;
  if ( value )
    GameObjectExtensions__SetLocalPositionY(this->fields.menuComp, -420.0, 0LL);
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__112___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__112__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v9; // x0
  TitleInfoControl_o *v10; // x0
  UISprite_c *klass; // x8
  UISprite_c *v12; // x8
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4B1BCD4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__112_0__, v3);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v4);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4B1BCD4 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B19996 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B19996 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
    byte_4B1676D = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.mEventBgSp->klass;
  if ( !klass )
    goto LABEL_29;
  v10 = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !v10 )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable(v10, 0, 0LL);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
    byte_4B1676D = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = v10->fields.mEventBgSp->klass;
  if ( !v12
    || (v10 = *(TitleInfoControl_o **)&v12->_2.static_fields_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)v10, 0, 0LL), !_4__this) )
  {
LABEL_29:
    sub_1BCB254(v10, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v13 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__112_0__,
    0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__112__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__112_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__112__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__112__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__112_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1BCD2 & 1) == 0 )
  {
    sub_1BCAFF8(&MainMenuBarBase___c_TypeInfo, v1);
    byte_4B1BCD2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)MainMenuBarBase___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__111_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  ScrTerminalListTop_o *v4; // x0
  QuestRewardItemAction_c *klass; // x8
  QuestRewardItemAction_c *v6; // x8

  if ( (byte_4B1BCD3 & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v2);
    byte_4B1BCD3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B19996 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B19996 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
    byte_4B1676D = 1;
  }
  v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v4->fields.friendPointBoostItemAction->klass;
  if ( !klass )
    goto LABEL_24;
  v4 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !v4 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v4, 0LL);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, method);
    byte_4B1676D = 1;
  }
  v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = v4->fields.friendPointBoostItemAction->klass;
  if ( !v6 || (v4 = *(ScrTerminalListTop_o **)&v6->_2.static_fields_size) == 0LL )
LABEL_24:
    sub_1BCB254(v4, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v4, 0, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass129_0___ctor(
        MainMenuBarBase___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass129_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1BCB254(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass129_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}