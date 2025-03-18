void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v3; // x8
  struct MainMenuBarBase_StaticFields *v4; // x9

  if ( (byte_4C21697 & 1) == 0 )
  {
    sub_1C3B764(&MainMenuBarBase_TypeInfo, v1);
    byte_4C21697 = 1;
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
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Hashtable_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Action_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C21696 & 1) == 0 )
  {
    sub_1C3B764(&System_Action___TypeInfo, method);
    sub_1C3B764(&System_Collections_Hashtable_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__, v4);
    sub_1C3B764(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo, v5);
    byte_4C21696 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v6;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mDispBtnList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v13 = (System_Collections_Hashtable_o *)sub_1C3B9B0(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63948372(v13, 0LL);
  this->fields.table = v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (struct System_Action_array *)sub_1C3B80C(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v20;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mDispBtnActList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int64_t v18; // x2
  int v19; // w8
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
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
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  Il2CppObject *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v96; // x20
  UnityEngine_GameObject_o *v97; // x0
  MainMenuBarBase_c *v98; // x0
  Il2CppObject *Component_object; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  Il2CppObject *v107; // x20
  UnityEngine_GameObject_o *v108; // x20
  UnityEngine_GameObject_o *v109; // x0
  MainMenuBarBase_c *v110; // x0
  Il2CppObject *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  Il2CppObject *v119; // x20
  UnityEngine_GameObject_o *v120; // x20
  UnityEngine_GameObject_o *v121; // x0
  MainMenuBarBase_c *v122; // x0
  Il2CppObject *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  struct ShopNotice_o *ShopNotice; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  struct UISprite_o *v152; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v154; // x1

  if ( (byte_4C21677 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__, v4);
    sub_1C3B764(&MainMenuBarBase_TypeInfo, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&ShopTopListViewManager_TypeInfo, v8);
    byte_4C21677 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_109;
  v18 = *((unsigned int *)mDispBtnList + 6);
  v19 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v19;
  if ( (int)v18 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v18, 0LL);
    mDispBtnList = this->fields.mDispBtnList;
    if ( !mDispBtnList )
      goto LABEL_109;
  }
  terminalBtn = (Il2CppObject *)this->fields.terminalBtn;
  v20 = *((_QWORD *)mDispBtnList + 2);
  v21 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v20 )
    goto LABEL_109;
  v22 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = v20 + 8 * v22;
    *((_DWORD *)mDispBtnList + 6) = v22 + 1;
    *(_QWORD *)(v23 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)terminalBtn, v18, v11, v12, v13, v14, v15);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.partyBtn;
  v30 = *((_QWORD *)mDispBtnList + 2);
  v31 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v30 )
    goto LABEL_109;
  v32 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * v32;
    *((_DWORD *)mDispBtnList + 6) = v32 + 1;
    *(_QWORD *)(v33 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)terminalBtn, v24, v25, v26, v27, v28, v29);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.summonBtn;
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
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * v42;
    *((_DWORD *)mDispBtnList + 6) = v42 + 1;
    *(_QWORD *)(v43 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)terminalBtn, v34, v35, v36, v37, v38, v39);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.combineBtn;
  v50 = *((_QWORD *)mDispBtnList + 2);
  v51 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v50 )
    goto LABEL_109;
  v52 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = v50 + 8 * v52;
    *((_DWORD *)mDispBtnList + 6) = v52 + 1;
    *(_QWORD *)(v53 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v53 + 32), (int64_t)terminalBtn, v44, v45, v46, v47, v48, v49);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.shopBtn;
  v60 = *((_QWORD *)mDispBtnList + 2);
  v61 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v60 )
    goto LABEL_109;
  v62 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = v60 + 8 * v62;
    *((_DWORD *)mDispBtnList + 6) = v62 + 1;
    *(_QWORD *)(v63 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)terminalBtn, v54, v55, v56, v57, v58, v59);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.friendBtn;
  v70 = *((_QWORD *)mDispBtnList + 2);
  v71 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v70 )
    goto LABEL_109;
  v72 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = v70 + 8 * v72;
    *((_DWORD *)mDispBtnList + 6) = v72 + 1;
    *(_QWORD *)(v73 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)terminalBtn, v64, v65, v66, v67, v68, v69);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.myroomBtn;
  v80 = *((_QWORD *)mDispBtnList + 2);
  v81 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v80 )
    goto LABEL_109;
  v82 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
  }
  else
  {
    v83 = v80 + 8 * v82;
    *((_DWORD *)mDispBtnList + 6) = v82 + 1;
    *(_QWORD *)(v83 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v83 + 32), (int64_t)terminalBtn, v74, v75, v76, v77, v78, v79);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v90 = *((_QWORD *)mDispBtnList + 2);
  v91 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v90 )
    goto LABEL_109;
  v92 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = v90 + 8 * v92;
    *((_DWORD *)mDispBtnList + 6) = v92 + 1;
    *(_QWORD *)(v93 + 32) = terminalBtn;
    sub_1C3B708((PartyOrganizationUtility_o *)(v93 + 32), (int64_t)terminalBtn, v84, v85, v86, v87, v88, v89);
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
                     (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_109;
    v96 = (UnityEngine_GameObject_o *)mDispBtnList;
    v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34969340(v96, v97, 0LL);
    v98 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v98 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v96, v98->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v96 )
      goto LABEL_109;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v96,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.mMenuNoticeNumber,
      (int64_t)Component_object,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
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
    v107 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v107,
                     (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_109;
    v108 = (UnityEngine_GameObject_o *)mDispBtnList;
    v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34969340(v108, v109, 0LL);
    v110 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v110 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v108, v110->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v108 )
      goto LABEL_109;
    v111 = UnityEngine_GameObject__GetComponent_object_(
             v108,
             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v111;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.mSummonNoticeNumber,
      (int64_t)v111,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
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
    v119 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v119,
                     (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_109;
    v120 = (UnityEngine_GameObject_o *)mDispBtnList;
    v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34969340(v120, v121, 0LL);
    v122 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v122 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v120, v122->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v120 )
      goto LABEL_109;
    v123 = UnityEngine_GameObject__GetComponent_object_(
             v120,
             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v123;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.mFriendNoticeNumber,
      (int64_t)v123,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.shopNotice,
    (int64_t)ShopNotice,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
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
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (int64_t)mAtlas,
        v138,
        v139,
        v140,
        v141,
        v142,
        v143);
      v152 = this->fields.mExchangeServantItemSp;
      if ( v152 )
      {
        mSpriteName = v152->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int64_t)mSpriteName,
          v146,
          v147,
          v148,
          v149,
          v150,
          v151);
        goto LABEL_107;
      }
    }
LABEL_109:
    sub_1C3B9C0(mDispBtnList, terminalBtn);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v154);
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
    sub_1C3B9C0(backCloseSprite, isOpen);
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
  __int64 v9; // x20
  MyRoomStateMaterial_o *v10; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v12; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v15; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C21680 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, method);
    sub_1C3B764(&MyRoomRootComponent_TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4C21680 = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v9 = *(_QWORD *)(v7 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (MainMenuBarButton_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !v9 )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)v9, 0LL) == 1 )
    goto LABEL_27;
  v10 = *(MyRoomStateMaterial_o **)(v9 + 904);
  if ( !v10 )
    goto LABEL_27;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v10, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v10, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_27;
  }
  mOldState = v10->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_27;
  mSelectInfos = (System_Collections_Generic_List_object__o *)v10->fields.mSelectInfos;
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v12) )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)System_Collections_Generic_List_object___get_Item(
                                      mSelectInfos,
                                      0,
                                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
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
    sub_1C3B9C0(Instance, method);
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

  if ( (byte_4C2167F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C2167F = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1C3B9C0(terminalBtn, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EC64 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1EC64 = 1;
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  float mFrameInPosY; // s14
  float v22; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  float v31; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v35; // x21
  float v36; // s12
  float v37; // s13
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23
  float v40; // s3
  float v41; // s0
  float v42; // s5
  float v43; // s2
  float v44; // s4
  float v45; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21695 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, is_framein);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v7);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    sub_1C3B764(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, v9);
    sub_1C3B764(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, v10);
    sub_1C3B764(&MainMenuBarBase___c__DisplayClass125_0_TypeInfo, v11);
    byte_4C21695 = 1;
  }
  v12 = sub_1C3B9B0(MainMenuBarBase___c__DisplayClass125_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass125_0___ctor((MainMenuBarBase___c__DisplayClass125_0_o *)v12, 0LL);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    goto LABEL_29;
  *(_QWORD *)(v12 + 16) = gameObject;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)gameObject, v15, v16, v17, v18, v19, v20);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v22 = this->fields.mFrameInPosY;
  else
    v22 = -90.0;
  *(float *)(v12 + 32) = v22;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v12 + 16),
                       (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v12 + 24) = Component_object;
  v24 = (MoveObject_o **)(v12 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)Component_object, v25, v26, v27, v28, v29, v30);
  if ( is_force
    || (v31 = *(float *)(v12 + 32),
        v31 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), 0LL)) )
  {
    gameObject = *v24;
    if ( *v24 )
    {
      MoveObject__Stop(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), *(float *)(v12 + 32), 0LL);
      return;
    }
LABEL_29:
    sub_1C3B9C0(gameObject, v14);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v47 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  v35 = *(MoveObject_o **)(v12 + 24);
  v36 = v47.fields.x;
  v37 = v47.fields.z;
  v38 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, 0LL);
  v39 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, 0LL);
  if ( !v35 )
    goto LABEL_29;
  if ( is_framein )
    v40 = x;
  else
    v40 = v36;
  if ( is_framein )
    v41 = v36;
  else
    v41 = x;
  if ( is_framein )
    v42 = z;
  else
    v42 = v37;
  if ( is_framein )
    v43 = v37;
  else
    v43 = z;
  v44 = v22;
  v45 = -90.0;
  if ( !is_framein )
    v45 = mFrameInPosY;
  MoveObject__Play(
    v35,
    *(UnityEngine_Vector3_o *)&v41,
    *(UnityEngine_Vector3_o *)&v40,
    IntpTime_AutoResume,
    v38,
    v39,
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
  System_Collections_Generic_List_int__o *MovedEventScriptList_41015652; // x22
  bool IsClearAllMainScenario; // w23
  int64_t v18; // x1
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v22; // x20
  MainMenuBarBase_c *v23; // x0

  if ( (byte_4C21692 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestScriptMaster___, warId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_1C3B764(&MainMenuBarBase_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    byte_4C21692 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v15 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_30;
  MovedEventScriptList_41015652 = QuestScriptMaster__GetMovedEventScriptList_41015652(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_30;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    byte_4C1C955 = 1;
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
                                    MovedEventScriptList_41015652,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(
                                    v15,
                                    v18,
                                    MovedEventScriptList_41015652,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0LL )
  {
LABEL_30:
    sub_1C3B9C0(Instance, v13);
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
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_c *v5; // x8
  __int64 v6; // x8

  if ( (byte_4C2168A & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    sub_1C3B764(&StringLiteral_12465/*"SetDirty"*/, v2);
    byte_4C2168A = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MyFsmP->fields.boardGameTokenAction->klass;
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
  if ( (System_String__IndexOf_63400188((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12465/*"SetDirty"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = MyFsmP->fields.boardGameTokenAction->klass;
  if ( !v5
    || (v6 = *(_QWORD *)&v5->_2.thread_static_fields_offset) == 0
    || (MyFsmP = *(ScrTerminalListTop_o **)(v6 + 544)) == 0LL )
  {
LABEL_26:
    sub_1C3B9C0(MyFsmP, method);
  }
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C2168D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8671/*"MapEffect_{0:D4}_{1:D2}"*/, method);
    byte_4C2168D = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1C3B9C0(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8671/*"MapEffect_{0:D4}_{1:D2}"*/, 0LL, v6);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Action_array *v14; // x8
  Il2CppClass **v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  _QWORD *v22; // x0
  int32_t v23; // w19
  System_Reflection_MethodBase_o *v24; // x0

  v6 = this;
  if ( (byte_4C21687 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1C3B764(&Method_MainMenuBarBase_OnClickCommon__, *(_QWORD *)&kind);
    byte_4C21687 = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( mDispBtnActList->max_length <= kind )
        goto LABEL_16;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0LL);
      v14 = v6->fields.mDispBtnActList;
      if ( v14 )
      {
        if ( v14->max_length > kind )
        {
          v15 = &v14->obj.klass + kind;
          v15[4] = 0LL;
          sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 4), 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_1C3B708((PartyOrganizationUtility_o *)&v6->fields.mAllBtnAct, 0LL, v16, v17, v18, v19, v20, v21);
          v22 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_1C3B77C(Method_MainMenuBarBase_OnClickCommon__);
          v23 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1C3B9C8(this, *(_QWORD *)&kind);
      }
    }
    sub_1C3B9C0(this, *(_QWORD *)&kind);
  }
  v22 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1C3B77C(Method_MainMenuBarBase_OnClickCommon__);
  v23 = 2;
LABEL_14:
  v24 = (System_Reflection_MethodBase_o *)sub_1C3B748(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, v23, 0, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C2168B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8675/*"MapGimmickEffect_EventQuestCooltime"*/, method);
    byte_4C2168B = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1C3B9C0(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8675/*"MapGimmickEffect_EventQuestCooltime"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C2168F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8672/*"MapEffect_{0:D6}_{1:D2}"*/, method);
    byte_4C2168F = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1C3B9C0(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8672/*"MapEffect_{0:D6}_{1:D2}"*/, 0LL, v6);
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

  if ( (byte_4C21691 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomRootComponent_TypeInfo, method);
    sub_1C3B764(&SceneJumpInfo_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_8673/*"MapGimmickActionEffect_"*/, v4);
    byte_4C21691 = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1C3B9C0(0LL, method);
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
      v15 = (SceneJumpInfo_o *)sub_1C3B9B0(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40098360(v15, MYROOM_STATE_NEW_MATERIAL, v12, v13, 0LL);
    }
    else
    {
      v15 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8673/*"MapGimmickActionEffect_"*/, (Il2CppObject *)v15, v10);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C21690 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8673/*"MapGimmickActionEffect_"*/, method);
    byte_4C21690 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1C3B9C0(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8673/*"MapGimmickActionEffect_"*/, 0LL, v6);
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

  if ( (byte_4C2168E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8676/*"MapGimmickEffect_EventSpotCooltime"*/, method);
    byte_4C2168E = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1C3B9C0(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8676/*"MapGimmickEffect_EventSpotCooltime"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C2168C & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8677/*"MapGimmickEffect_GappolyBoard"*/, method);
    byte_4C2168C = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1C3B9C0(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8677/*"MapGimmickEffect_GappolyBoard"*/, 0LL, v6);
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
  System_Action_o *_9__107_0; // x20
  Il2CppObject *v31; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_IEnumerator_o *v39; // x1
  System_Threading_CancellationTokenSource_c *v40; // x8
  const MethodInfo *v41; // x3
  TerminalPramsManager_c *v42; // x0
  System_Threading_CancellationTokenSource_c *v43; // x8

  if ( (byte_4C21688 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    sub_1C3B764(&Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, v6);
    sub_1C3B764(&MainMenuBarBase___c_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_8678/*"MapGimmickEffect_GappolyButtonActive"*/, v8);
    sub_1C3B764(&StringLiteral_12465/*"SetDirty"*/, v9);
    sub_1C3B764(&StringLiteral_3444/*"CLICK_MASTER_FORMATION"*/, v10);
    byte_4C21688 = 1;
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
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v14);
      byte_4C1CAE3 = 1;
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
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
      byte_4C1CAE3 = 1;
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
      if ( !byte_4C1F03D )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        byte_4C1F03D = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4C1CCCA )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        v27 = TerminalPramsManager_TypeInfo;
        byte_4C1CCCA = 1;
      }
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_4C1F063 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        v27 = TerminalPramsManager_TypeInfo;
        byte_4C1F063 = 1;
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
    if ( !byte_4C1EC64 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C1EC64 = 1;
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
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
      byte_4C1CAE3 = 1;
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
    if ( (System_String__IndexOf_63400188((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12465/*"SetDirty"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_63400188(v22, (System_String_o *)StringLiteral_3444/*"CLICK_MASTER_FORMATION"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
      byte_4C1CAE3 = 1;
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
      if ( !byte_4C1F03D )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        byte_4C1F03D = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4C1CCCA )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        v24 = TerminalPramsManager_TypeInfo;
        byte_4C1CCCA = 1;
      }
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
        byte_4C1CAE3 = 1;
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
          if ( !byte_4C1CAE3 )
          {
            sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
            byte_4C1CAE3 = 1;
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
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8678/*"MapGimmickEffect_GappolyButtonActive"*/, 0LL, v17);
            return;
          }
        }
      }
LABEL_123:
      sub_1C3B9C0(terminalBtn, method);
    }
    if ( (System_String__IndexOf_63400188(v22, (System_String_o *)StringLiteral_3444/*"CLICK_MASTER_FORMATION"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
        byte_4C1CAE3 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v40 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v40 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v40->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v41);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F4D2 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        byte_4C1F4D2 = 1;
      }
      v42 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v42 = TerminalPramsManager_TypeInfo;
      }
      v42->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
        byte_4C1CAE3 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v43 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v43 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v43->_2.static_fields_size;
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
      _9__107_0 = v29->static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = MainMenuBarBase___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__107_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(_9__107_0, v31, Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, 0LL);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__107_0 = _9__107_0;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
          (int64_t)_9__107_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      v39 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__107_0, v28);
      UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v39, 0LL);
    }
  }
}


void __fastcall MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0LL);
  this->fields.mMenuBtnAct = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mMenuBtnAct, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2167B & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C2167B = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C2167C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_8674/*"MapGimmickEffect_"*/, v3);
    byte_4C2167C = 1;
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
        sub_1C3B9C0(v6, selectedKind);
    }
    else
    {
      if ( !v6 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8674/*"MapGimmickEffect_"*/;
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

  if ( (byte_4C2167A & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C2167A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1CCCA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4C21682 & 1) == 0 )
  {
    sub_1C3B764(&ShopTopListViewManager_TypeInfo, method);
    byte_4C21682 = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.shopNotice, (int64_t)ShopNotice, v4, v5, v6, v7, v8, v9);
  MainMenuBarBase__ResetShopNoticeDraw(this, v10);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct ShopNotice_o *v36; // x8
  int32_t v37; // w23
  System_Collections_Generic_List_object__o *v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  int64_t v48; // x1
  Il2CppClass **v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  int64_t v59; // x1
  Il2CppClass **v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  int64_t v70; // x1
  Il2CppClass **v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  int64_t v81; // x1
  Il2CppClass **v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  int64_t v92; // x1
  Il2CppClass **v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  int64_t v103; // x1
  Il2CppClass **v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  int64_t v114; // x1
  Il2CppClass **v115; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  int64_t v125; // x1
  Il2CppClass **v126; // x0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  int64_t v136; // x1
  Il2CppClass **v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  int64_t v147; // x1
  Il2CppClass **v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  int64_t v158; // x1
  Il2CppClass **v159; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  struct System_Object_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  int64_t v169; // x1
  Il2CppClass **v170; // x0
  System_Collections_Generic_List_object__o *v171; // x22
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  int64_t v181; // x1
  Il2CppClass **v182; // x0
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  int64_t v192; // x1
  Il2CppClass **v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  int64_t v203; // x1
  Il2CppClass **v204; // x0
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  struct System_Object_array *v211; // x8
  _QWORD *v212; // x9
  __int64 v213; // x10
  int64_t v214; // x1
  Il2CppClass **v215; // x0
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  struct System_Object_array *v222; // x8
  _QWORD *v223; // x9
  __int64 v224; // x10
  int64_t v225; // x1
  Il2CppClass **v226; // x0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  int64_t v236; // x1
  Il2CppClass **v237; // x0
  int64_t v238; // x2
  int32_t v239; // w3
  System_String_o *v240; // x4
  BattleSetupInfo_o *v241; // x5
  FollowerInfo_o *v242; // x6
  PartyListViewItem_o *v243; // x7
  struct System_Object_array *v244; // x8
  _QWORD *v245; // x9
  __int64 v246; // x10
  int64_t v247; // x1
  Il2CppClass **v248; // x0
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  struct System_Object_array *v255; // x8
  _QWORD *v256; // x9
  __int64 v257; // x10
  int64_t v258; // x1
  Il2CppClass **v259; // x0
  int64_t v260; // x2
  int32_t v261; // w3
  System_String_o *v262; // x4
  BattleSetupInfo_o *v263; // x5
  FollowerInfo_o *v264; // x6
  PartyListViewItem_o *v265; // x7
  struct System_Object_array *v266; // x8
  _QWORD *v267; // x9
  __int64 v268; // x10
  int64_t v269; // x1
  Il2CppClass **v270; // x0
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  struct System_Object_array *v277; // x8
  _QWORD *v278; // x9
  __int64 v279; // x10
  int64_t v280; // x1
  Il2CppClass **v281; // x0
  int64_t v282; // x2
  int32_t v283; // w3
  System_String_o *v284; // x4
  BattleSetupInfo_o *v285; // x5
  FollowerInfo_o *v286; // x6
  PartyListViewItem_o *v287; // x7
  struct System_Object_array *v288; // x8
  _QWORD *v289; // x9
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  struct System_Object_array *v296; // x8
  _QWORD *v297; // x9
  __int64 v298; // x10
  int64_t v299; // x1
  Il2CppClass **v300; // x0
  int64_t v301; // x2
  int32_t v302; // w3
  System_String_o *v303; // x4
  BattleSetupInfo_o *v304; // x5
  FollowerInfo_o *v305; // x6
  PartyListViewItem_o *v306; // x7
  struct System_Object_array *v307; // x8
  _QWORD *v308; // x9
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  struct System_Object_array *v315; // x8
  _QWORD *v316; // x9
  __int64 v317; // x10
  int64_t v318; // x1
  Il2CppClass **v319; // x0
  int64_t v320; // x2
  int32_t v321; // w3
  System_String_o *v322; // x4
  BattleSetupInfo_o *v323; // x5
  FollowerInfo_o *v324; // x6
  PartyListViewItem_o *v325; // x7
  struct System_Object_array *v326; // x8
  _QWORD *v327; // x9
  __int64 v328; // x10
  int64_t v329; // x1
  Il2CppClass **v330; // x0
  int64_t v331; // x2
  int32_t v332; // w3
  System_String_o *v333; // x4
  BattleSetupInfo_o *v334; // x5
  FollowerInfo_o *v335; // x6
  PartyListViewItem_o *v336; // x7
  struct System_Object_array *v337; // x8
  _QWORD *v338; // x9
  __int64 v339; // x10
  int64_t v340; // x1
  Il2CppClass **v341; // x0
  int64_t v342; // x2
  int32_t v343; // w3
  System_String_o *v344; // x4
  BattleSetupInfo_o *v345; // x5
  FollowerInfo_o *v346; // x6
  PartyListViewItem_o *v347; // x7
  struct System_Object_array *v348; // x8
  _QWORD *v349; // x9
  __int64 v350; // x10
  int64_t v351; // x1
  Il2CppClass **v352; // x0
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  struct System_Object_array *v359; // x8
  _QWORD *v360; // x9
  __int64 v361; // x10
  int64_t v362; // x1
  Il2CppClass **v363; // x0
  int64_t v364; // x2
  int32_t v365; // w3
  System_String_o *v366; // x4
  BattleSetupInfo_o *v367; // x5
  FollowerInfo_o *v368; // x6
  PartyListViewItem_o *v369; // x7
  struct System_Object_array *v370; // x8
  _QWORD *v371; // x9
  __int64 v372; // x10
  int64_t v373; // x1
  Il2CppClass **v374; // x0
  int64_t v375; // x2
  int32_t v376; // w3
  System_String_o *v377; // x4
  BattleSetupInfo_o *v378; // x5
  FollowerInfo_o *v379; // x6
  PartyListViewItem_o *v380; // x7
  struct System_Object_array *v381; // x8
  _QWORD *v382; // x9
  __int64 v383; // x10
  int64_t v384; // x1
  Il2CppClass **v385; // x0
  __int64 v386; // x10
  int64_t v387; // x1
  Il2CppClass **v388; // x0
  int64_t v389; // x2
  int32_t v390; // w3
  System_String_o *v391; // x4
  BattleSetupInfo_o *v392; // x5
  FollowerInfo_o *v393; // x6
  PartyListViewItem_o *v394; // x7
  struct System_Object_array *v395; // x8
  _QWORD *v396; // x9
  __int64 v397; // x10
  unsigned int max_length; // w11
  Il2CppClass **v399; // x0
  __int64 v400; // x10
  Il2CppClass **v401; // x0
  struct ShopNotice_o *v402; // x8
  ShopNoticeRemainTime_o *v403; // x21
  int64_t v404; // x2
  int32_t v405; // w3
  System_String_o *v406; // x4
  BattleSetupInfo_o *v407; // x5
  FollowerInfo_o *v408; // x6
  PartyListViewItem_o *v409; // x7
  const MethodInfo *v410; // x2
  struct ShopNotice_o *v411; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v414; // x2
  struct ShopNotice_o *v415; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v417; // x2
  struct ShopNotice_o *v418; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  UILabel_o *v420; // x20
  ShopNoticeRemainTimeLabel_o *v421; // x22
  int64_t v422; // x2
  int32_t v423; // w3
  System_String_o *v424; // x4
  BattleSetupInfo_o *v425; // x5
  FollowerInfo_o *v426; // x6
  PartyListViewItem_o *v427; // x7
  UILabel_o *v428; // x20
  ShopNoticeRemainTimeLabel_o *v429; // x22
  int64_t v430; // x2
  int32_t v431; // w3
  System_String_o *v432; // x4
  BattleSetupInfo_o *v433; // x5
  FollowerInfo_o *v434; // x6
  PartyListViewItem_o *v435; // x7
  UILabel_o *v436; // x20
  ShopNoticeRemainTimeLabel_o *v437; // x22
  int64_t v438; // x2
  int32_t v439; // w3
  System_String_o *v440; // x4
  BattleSetupInfo_o *v441; // x5
  FollowerInfo_o *v442; // x6
  PartyListViewItem_o *v443; // x7
  struct ShopNotice_o *v444; // x8
  struct ShopNotice_o *v445; // x8
  struct ShopNotice_o *v446; // x8
  int64_t v447; // x2
  int32_t v448; // w3
  System_String_o *v449; // x4
  BattleSetupInfo_o *v450; // x5
  FollowerInfo_o *v451; // x6
  PartyListViewItem_o *v452; // x7
  struct System_Object_array *v453; // x8
  _QWORD *v454; // x9
  __int64 v455; // x10
  int64_t v456; // x1
  Il2CppClass **v457; // x0
  int64_t v458; // x2
  int32_t v459; // w3
  System_String_o *v460; // x4
  BattleSetupInfo_o *v461; // x5
  FollowerInfo_o *v462; // x6
  PartyListViewItem_o *v463; // x7
  struct System_Object_array *v464; // x8
  _QWORD *v465; // x9
  __int64 v466; // x10
  int64_t v467; // x1
  Il2CppClass **v468; // x0
  int64_t v469; // x2
  int32_t v470; // w3
  System_String_o *v471; // x4
  BattleSetupInfo_o *v472; // x5
  FollowerInfo_o *v473; // x6
  PartyListViewItem_o *v474; // x7
  struct System_Object_array *v475; // x8
  _QWORD *v476; // x9
  __int64 v477; // x10
  int64_t v478; // x1
  Il2CppClass **v479; // x0
  int64_t v480; // x2
  int32_t v481; // w3
  System_String_o *v482; // x4
  BattleSetupInfo_o *v483; // x5
  FollowerInfo_o *v484; // x6
  PartyListViewItem_o *v485; // x7
  struct System_Object_array *v486; // x8
  _QWORD *v487; // x9
  __int64 v488; // x10
  int64_t v489; // x1
  Il2CppClass **v490; // x0
  int64_t v491; // x2
  int32_t v492; // w3
  System_String_o *v493; // x4
  BattleSetupInfo_o *v494; // x5
  FollowerInfo_o *v495; // x6
  PartyListViewItem_o *v496; // x7
  struct System_Object_array *v497; // x8
  _QWORD *v498; // x9
  __int64 v499; // x10
  int64_t v500; // x1
  Il2CppClass **v501; // x0
  int64_t v502; // x2
  int32_t v503; // w3
  System_String_o *v504; // x4
  BattleSetupInfo_o *v505; // x5
  FollowerInfo_o *v506; // x6
  PartyListViewItem_o *v507; // x7
  struct System_Object_array *v508; // x8
  _QWORD *v509; // x9
  __int64 v510; // x10
  Il2CppClass **v511; // x0

  if ( (byte_4C21681 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, v8);
    sub_1C3B764(&ShopNoticeRemainTimeLabel_TypeInfo, v9);
    sub_1C3B764(&ShopNoticeRemainTime_TypeInfo, v10);
    sub_1C3B764(&ShopNoticeTween_TypeInfo, v11);
    byte_4C21681 = 1;
  }
  if ( this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    shopNotice = this->fields.shopNotice;
    if ( !shopNotice )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      shopNotice->fields._IsShowNew_k__BackingField,
      0LL);
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v15 = this->fields.shopNotice;
    if ( !v15 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v15->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v16 = this->fields.shopNotice;
    if ( !v16 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v16->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v17->fields._LimitedType_k__BackingField == 3,
      0LL);
    v18 = this->fields.shopNotice;
    if ( !v18 )
      goto LABEL_324;
    if ( v18->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v19, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v20 = this->fields.shopNotice;
    if ( !v20 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v20->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v21 = this->fields.shopNotice;
    if ( !v21 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v21->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v22 = this->fields.shopNotice;
    if ( !v22 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v22->fields._LimitedType_k__BackingField == 2,
      0LL);
    v23 = this->fields.shopNotice;
    if ( !v23 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v23->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v24 = this->fields.shopNotice;
    if ( !v24 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v24->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v25 = this->fields.shopNotice;
    if ( !v25 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v25->fields._LimitedType_k__BackingField == 4,
      0LL);
    v26 = this->fields.shopNotice;
    if ( !v26 )
      goto LABEL_324;
    LimitedType_k__BackingField = v26->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v29 = (ShopNoticeTween_o *)sub_1C3B9B0(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v29, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v29;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.shopNoticeTween,
          (int64_t)v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_324;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v36 = this->fields.shopNotice;
      if ( !v36 )
        goto LABEL_324;
      v37 = v36->fields._LimitedType_k__BackingField;
      switch ( v37 )
      {
        case 6:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          items = v38->fields._items;
          v46 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !items )
            goto LABEL_324;
          size = v38->fields._size;
          v48 = (int64_t)mNewItemSp;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v38->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v48;
            sub_1C3B708((PartyOrganizationUtility_o *)(v49 + 4), v48, v39, v40, v41, v42, v43, v44);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v166 = v38->fields._items;
          v167 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v166 )
            goto LABEL_324;
          v168 = v38->fields._size;
          v169 = (int64_t)mNewItemSp;
          if ( (unsigned int)v168 >= v166->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
          }
          else
          {
            v170 = &v166->obj.klass + v168;
            v38->fields._size = v168 + 1;
            v170[4] = (Il2CppClass *)v169;
            sub_1C3B708((PartyOrganizationUtility_o *)(v170 + 4), v169, v160, v161, v162, v163, v164, v165);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v277 = v171->fields._items;
          v278 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v277 )
            goto LABEL_324;
          v279 = v171->fields._size;
          v280 = (int64_t)mNewItemSp;
          if ( (unsigned int)v279 >= v277->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v171,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
          }
          else
          {
            v281 = &v277->obj.klass + v279;
            v171->fields._size = v279 + 1;
            v281[4] = (Il2CppClass *)v280;
            sub_1C3B708((PartyOrganizationUtility_o *)(v281 + 4), v280, v271, v272, v273, v274, v275, v276);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          goto LABEL_256;
        case 10:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v67 = v38->fields._items;
          v68 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v67 )
            goto LABEL_324;
          v69 = v38->fields._size;
          v70 = (int64_t)mNewItemSp;
          if ( (unsigned int)v69 >= v67->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v71 = &v67->obj.klass + v69;
            v38->fields._size = v69 + 1;
            v71[4] = (Il2CppClass *)v70;
            sub_1C3B708((PartyOrganizationUtility_o *)(v71 + 4), v70, v61, v62, v63, v64, v65, v66);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v178 = v38->fields._items;
          v179 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v178 )
            goto LABEL_324;
          v180 = v38->fields._size;
          v181 = (int64_t)mNewItemSp;
          if ( (unsigned int)v180 >= v178->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
          }
          else
          {
            v182 = &v178->obj.klass + v180;
            v38->fields._size = v180 + 1;
            v182[4] = (Il2CppClass *)v181;
            sub_1C3B708((PartyOrganizationUtility_o *)(v182 + 4), v181, v172, v173, v174, v175, v176, v177);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v288 = v171->fields._items;
          v289 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v288 )
            goto LABEL_324;
          goto LABEL_237;
        case 12:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v78 = v38->fields._items;
          v79 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v78 )
            goto LABEL_324;
          v80 = v38->fields._size;
          v81 = (int64_t)mNewItemSp;
          if ( (unsigned int)v80 >= v78->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = &v78->obj.klass + v80;
            v38->fields._size = v80 + 1;
            v82[4] = (Il2CppClass *)v81;
            sub_1C3B708((PartyOrganizationUtility_o *)(v82 + 4), v81, v72, v73, v74, v75, v76, v77);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v189 = v38->fields._items;
          v190 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v189 )
            goto LABEL_324;
          v191 = v38->fields._size;
          v192 = (int64_t)mNewItemSp;
          if ( (unsigned int)v191 >= v189->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
          }
          else
          {
            v193 = &v189->obj.klass + v191;
            v38->fields._size = v191 + 1;
            v193[4] = (Il2CppClass *)v192;
            sub_1C3B708((PartyOrganizationUtility_o *)(v193 + 4), v192, v183, v184, v185, v186, v187, v188);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v288 = v171->fields._items;
          v289 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v288 )
            goto LABEL_324;
          goto LABEL_237;
        case 14:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v89 = v38->fields._items;
          v90 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v89 )
            goto LABEL_324;
          v91 = v38->fields._size;
          v92 = (int64_t)mNewItemSp;
          if ( (unsigned int)v91 >= v89->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = &v89->obj.klass + v91;
            v38->fields._size = v91 + 1;
            v93[4] = (Il2CppClass *)v92;
            sub_1C3B708((PartyOrganizationUtility_o *)(v93 + 4), v92, v83, v84, v85, v86, v87, v88);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v200 = v38->fields._items;
          v201 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v200 )
            goto LABEL_324;
          v202 = v38->fields._size;
          v203 = (int64_t)mNewItemSp;
          if ( (unsigned int)v202 >= v200->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
          }
          else
          {
            v204 = &v200->obj.klass + v202;
            v38->fields._size = v202 + 1;
            v204[4] = (Il2CppClass *)v203;
            sub_1C3B708((PartyOrganizationUtility_o *)(v204 + 4), v203, v194, v195, v196, v197, v198, v199);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v296 = v38->fields._items;
          v297 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v296 )
            goto LABEL_324;
          v298 = v38->fields._size;
          v299 = (int64_t)mNewItemSp;
          if ( (unsigned int)v298 >= v296->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
          }
          else
          {
            v300 = &v296->obj.klass + v298;
            v38->fields._size = v298 + 1;
            v300[4] = (Il2CppClass *)v299;
            sub_1C3B708((PartyOrganizationUtility_o *)(v300 + 4), v299, v290, v291, v292, v293, v294, v295);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v348 = v171->fields._items;
          v349 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v348 )
            goto LABEL_324;
          v350 = v171->fields._size;
          v351 = (int64_t)mNewItemSp;
          if ( (unsigned int)v350 >= v348->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v171,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v349[4] + 192LL) + 112LL));
          }
          else
          {
            v352 = &v348->obj.klass + v350;
            v171->fields._size = v350 + 1;
            v352[4] = (Il2CppClass *)v351;
            sub_1C3B708((PartyOrganizationUtility_o *)(v352 + 4), v351, v342, v343, v344, v345, v346, v347);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v288 = v171->fields._items;
          v289 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v288 )
            goto LABEL_324;
LABEL_237:
          v386 = v171->fields._size;
          v387 = (int64_t)mNewItemSp;
          if ( (unsigned int)v386 >= v288->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v171,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
          }
          else
          {
            v388 = &v288->obj.klass + v386;
            v171->fields._size = v386 + 1;
            v388[4] = (Il2CppClass *)v387;
            sub_1C3B708((PartyOrganizationUtility_o *)(v388 + 4), v387, v282, v283, v284, v285, v286, v287);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v395 = v171->fields._items;
          v396 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v395 )
            goto LABEL_324;
          goto LABEL_258;
        case 18:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v100 = v38->fields._items;
          v101 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v100 )
            goto LABEL_324;
          v102 = v38->fields._size;
          v103 = (int64_t)mNewItemSp;
          if ( (unsigned int)v102 >= v100->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
          }
          else
          {
            v104 = &v100->obj.klass + v102;
            v38->fields._size = v102 + 1;
            v104[4] = (Il2CppClass *)v103;
            sub_1C3B708((PartyOrganizationUtility_o *)(v104 + 4), v103, v94, v95, v96, v97, v98, v99);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v211 = v38->fields._items;
          v212 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v211 )
            goto LABEL_324;
          v213 = v38->fields._size;
          v214 = (int64_t)mNewItemSp;
          if ( (unsigned int)v213 >= v211->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
          }
          else
          {
            v215 = &v211->obj.klass + v213;
            v38->fields._size = v213 + 1;
            v215[4] = (Il2CppClass *)v214;
            sub_1C3B708((PartyOrganizationUtility_o *)(v215 + 4), v214, v205, v206, v207, v208, v209, v210);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v307 = v171->fields._items;
          v308 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v307 )
            goto LABEL_324;
          goto LABEL_245;
        case 20:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v111 = v38->fields._items;
          v112 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v111 )
            goto LABEL_324;
          v113 = v38->fields._size;
          v114 = (int64_t)mNewItemSp;
          if ( (unsigned int)v113 >= v111->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
          }
          else
          {
            v115 = &v111->obj.klass + v113;
            v38->fields._size = v113 + 1;
            v115[4] = (Il2CppClass *)v114;
            sub_1C3B708((PartyOrganizationUtility_o *)(v115 + 4), v114, v105, v106, v107, v108, v109, v110);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v222 = v38->fields._items;
          v223 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v222 )
            goto LABEL_324;
          v224 = v38->fields._size;
          v225 = (int64_t)mNewItemSp;
          if ( (unsigned int)v224 >= v222->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v223[4] + 192LL) + 112LL));
          }
          else
          {
            v226 = &v222->obj.klass + v224;
            v38->fields._size = v224 + 1;
            v226[4] = (Il2CppClass *)v225;
            sub_1C3B708((PartyOrganizationUtility_o *)(v226 + 4), v225, v216, v217, v218, v219, v220, v221);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v307 = v171->fields._items;
          v308 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v307 )
            goto LABEL_324;
          goto LABEL_245;
        case 22:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v38 )
            {
              v122 = v38->fields._items;
              v123 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v38->fields._version;
              if ( v122 )
              {
                v124 = v38->fields._size;
                v125 = (int64_t)mNewItemSp;
                if ( (unsigned int)v124 >= v122->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v38,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                }
                else
                {
                  v126 = &v122->obj.klass + v124;
                  v38->fields._size = v124 + 1;
                  v126[4] = (Il2CppClass *)v125;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v126 + 4), v125, v116, v117, v118, v119, v120, v121);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                  v233 = v38->fields._items;
                  v234 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v38->fields._version;
                  if ( v233 )
                  {
                    v235 = v38->fields._size;
                    v236 = (int64_t)mNewItemSp;
                    if ( (unsigned int)v235 >= v233->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v38,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v237 = &v233->obj.klass + v235;
                      v38->fields._size = v235 + 1;
                      v237[4] = (Il2CppClass *)v236;
                      sub_1C3B708((PartyOrganizationUtility_o *)(v237 + 4), v236, v227, v228, v229, v230, v231, v232);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                      v315 = v38->fields._items;
                      v316 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v38->fields._version;
                      if ( v315 )
                      {
                        v317 = v38->fields._size;
                        v318 = (int64_t)mNewItemSp;
                        if ( (unsigned int)v317 >= v315->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v38,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v316[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v319 = &v315->obj.klass + v317;
                          v38->fields._size = v317 + 1;
                          v319[4] = (Il2CppClass *)v318;
                          sub_1C3B708(
                            (PartyOrganizationUtility_o *)(v319 + 4),
                            v318,
                            v309,
                            v310,
                            v311,
                            v312,
                            v313,
                            v314);
                        }
                        v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v171,
                          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                          if ( v171 )
                          {
                            v359 = v171->fields._items;
                            v360 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v171->fields._version;
                            if ( v359 )
                            {
                              v361 = v171->fields._size;
                              v362 = (int64_t)mNewItemSp;
                              if ( (unsigned int)v361 >= v359->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v171,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v360[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v363 = &v359->obj.klass + v361;
                                v171->fields._size = v361 + 1;
                                v363[4] = (Il2CppClass *)v362;
                                sub_1C3B708(
                                  (PartyOrganizationUtility_o *)(v363 + 4),
                                  v362,
                                  v353,
                                  v354,
                                  v355,
                                  v356,
                                  v357,
                                  v358);
                              }
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
                              if ( mNewItemSp )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                          mNewItemSp,
                                                                          0LL);
                                v307 = v171->fields._items;
                                v308 = Method_System_Collections_Generic_List_GameObject__Add__;
                                ++v171->fields._version;
                                if ( v307 )
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
          goto LABEL_324;
        case 24:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v133 = v38->fields._items;
          v134 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v133 )
            goto LABEL_324;
          v135 = v38->fields._size;
          v136 = (int64_t)mNewItemSp;
          if ( (unsigned int)v135 >= v133->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
          }
          else
          {
            v137 = &v133->obj.klass + v135;
            v38->fields._size = v135 + 1;
            v137[4] = (Il2CppClass *)v136;
            sub_1C3B708((PartyOrganizationUtility_o *)(v137 + 4), v136, v127, v128, v129, v130, v131, v132);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v244 = v38->fields._items;
          v245 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v244 )
            goto LABEL_324;
          v246 = v38->fields._size;
          v247 = (int64_t)mNewItemSp;
          if ( (unsigned int)v246 >= v244->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
          }
          else
          {
            v248 = &v244->obj.klass + v246;
            v38->fields._size = v246 + 1;
            v248[4] = (Il2CppClass *)v247;
            sub_1C3B708((PartyOrganizationUtility_o *)(v248 + 4), v247, v238, v239, v240, v241, v242, v243);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL);
          if ( !v171 )
            goto LABEL_324;
          v307 = v171->fields._items;
          v308 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v307 )
            goto LABEL_324;
LABEL_245:
          v397 = v171->fields._size;
          max_length = v307->max_length;
          method = (const MethodInfo *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v144 = v38->fields._items;
          v145 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v144 )
            goto LABEL_324;
          v146 = v38->fields._size;
          v147 = (int64_t)mNewItemSp;
          if ( (unsigned int)v146 >= v144->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
          }
          else
          {
            v148 = &v144->obj.klass + v146;
            v38->fields._size = v146 + 1;
            v148[4] = (Il2CppClass *)v147;
            sub_1C3B708((PartyOrganizationUtility_o *)(v148 + 4), v147, v138, v139, v140, v141, v142, v143);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v255 = v38->fields._items;
          v256 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v255 )
            goto LABEL_324;
          v257 = v38->fields._size;
          v258 = (int64_t)mNewItemSp;
          if ( (unsigned int)v257 >= v255->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v256[4] + 192LL) + 112LL));
          }
          else
          {
            v259 = &v255->obj.klass + v257;
            v38->fields._size = v257 + 1;
            v259[4] = (Il2CppClass *)v258;
            sub_1C3B708((PartyOrganizationUtility_o *)(v259 + 4), v258, v249, v250, v251, v252, v253, v254);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v326 = v38->fields._items;
          v327 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v326 )
            goto LABEL_324;
          v328 = v38->fields._size;
          v329 = (int64_t)mNewItemSp;
          if ( (unsigned int)v328 >= v326->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v327[4] + 192LL) + 112LL));
          }
          else
          {
            v330 = &v326->obj.klass + v328;
            v38->fields._size = v328 + 1;
            v330[4] = (Il2CppClass *)v329;
            sub_1C3B708((PartyOrganizationUtility_o *)(v330 + 4), v329, v320, v321, v322, v323, v324, v325);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v370 = v171->fields._items;
          v371 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v370 )
            goto LABEL_324;
          v372 = v171->fields._size;
          v373 = (int64_t)mNewItemSp;
          if ( (unsigned int)v372 >= v370->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v171,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v371[4] + 192LL) + 112LL));
          }
          else
          {
            v374 = &v370->obj.klass + v372;
            v171->fields._size = v372 + 1;
            v374[4] = (Il2CppClass *)v373;
            sub_1C3B708((PartyOrganizationUtility_o *)(v374 + 4), v373, v364, v365, v366, v367, v368, v369);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v307 = v171->fields._items;
          v308 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v307 )
            goto LABEL_324;
          goto LABEL_251;
        case 28:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v38 )
            goto LABEL_324;
          v155 = v38->fields._items;
          v156 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v155 )
            goto LABEL_324;
          v157 = v38->fields._size;
          v158 = (int64_t)mNewItemSp;
          if ( (unsigned int)v157 >= v155->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
          }
          else
          {
            v159 = &v155->obj.klass + v157;
            v38->fields._size = v157 + 1;
            v159[4] = (Il2CppClass *)v158;
            sub_1C3B708((PartyOrganizationUtility_o *)(v159 + 4), v158, v149, v150, v151, v152, v153, v154);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v266 = v38->fields._items;
          v267 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v266 )
            goto LABEL_324;
          v268 = v38->fields._size;
          v269 = (int64_t)mNewItemSp;
          if ( (unsigned int)v268 >= v266->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v267[4] + 192LL) + 112LL));
          }
          else
          {
            v270 = &v266->obj.klass + v268;
            v38->fields._size = v268 + 1;
            v270[4] = (Il2CppClass *)v269;
            sub_1C3B708((PartyOrganizationUtility_o *)(v270 + 4), v269, v260, v261, v262, v263, v264, v265);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v337 = v38->fields._items;
          v338 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v38->fields._version;
          if ( !v337 )
            goto LABEL_324;
          v339 = v38->fields._size;
          v340 = (int64_t)mNewItemSp;
          if ( (unsigned int)v339 >= v337->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v338[4] + 192LL) + 112LL));
          }
          else
          {
            v341 = &v337->obj.klass + v339;
            v38->fields._size = v339 + 1;
            v341[4] = (Il2CppClass *)v340;
            sub_1C3B708((PartyOrganizationUtility_o *)(v341 + 4), v340, v331, v332, v333, v334, v335, v336);
          }
          v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v171,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v171 )
            goto LABEL_324;
          v381 = v171->fields._items;
          v382 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v381 )
            goto LABEL_324;
          v383 = v171->fields._size;
          v384 = (int64_t)mNewItemSp;
          if ( (unsigned int)v383 >= v381->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v171,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v382[4] + 192LL) + 112LL));
          }
          else
          {
            v385 = &v381->obj.klass + v383;
            v171->fields._size = v383 + 1;
            v385[4] = (Il2CppClass *)v384;
            sub_1C3B708((PartyOrganizationUtility_o *)(v385 + 4), v384, v375, v376, v377, v378, v379, v380);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v307 = v171->fields._items;
          v308 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v171->fields._version;
          if ( !v307 )
            goto LABEL_324;
LABEL_251:
          v397 = v171->fields._size;
          max_length = v307->max_length;
LABEL_252:
          if ( (unsigned int)v397 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v171,
              (Il2CppObject *)method,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
          }
          else
          {
            v399 = &v307->obj.klass + v397;
            v171->fields._size = v397 + 1;
            v399[4] = (Il2CppClass *)method;
            sub_1C3B708((PartyOrganizationUtility_o *)(v399 + 4), (int64_t)method, v301, v302, v303, v304, v305, v306);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_324;
        default:
          v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v38,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v37 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v38 )
              goto LABEL_324;
            v56 = v38->fields._items;
            v57 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v38->fields._version;
            if ( !v56 )
              goto LABEL_324;
            v58 = v38->fields._size;
            v59 = (int64_t)mNewItemSp;
            if ( (unsigned int)v58 >= v56->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v38,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &v56->obj.klass + v58;
              v38->fields._size = v58 + 1;
              v60[4] = (Il2CppClass *)v59;
              sub_1C3B708((PartyOrganizationUtility_o *)(v60 + 4), v59, v50, v51, v52, v53, v54, v55);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v453 = v38->fields._items;
            v454 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v38->fields._version;
            if ( !v453 )
              goto LABEL_324;
            v455 = v38->fields._size;
            v456 = (int64_t)mNewItemSp;
            if ( (unsigned int)v455 >= v453->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v38,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v454[4] + 192LL) + 112LL));
            }
            else
            {
              v457 = &v453->obj.klass + v455;
              v38->fields._size = v455 + 1;
              v457[4] = (Il2CppClass *)v456;
              sub_1C3B708((PartyOrganizationUtility_o *)(v457 + 4), v456, v447, v448, v449, v450, v451, v452);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v464 = v38->fields._items;
            v465 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v38->fields._version;
            if ( !v464 )
              goto LABEL_324;
            v466 = v38->fields._size;
            v467 = (int64_t)mNewItemSp;
            if ( (unsigned int)v466 >= v464->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v38,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v465[4] + 192LL) + 112LL));
            }
            else
            {
              v468 = &v464->obj.klass + v466;
              v38->fields._size = v466 + 1;
              v468[4] = (Il2CppClass *)v467;
              sub_1C3B708((PartyOrganizationUtility_o *)(v468 + 4), v467, v458, v459, v460, v461, v462, v463);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v475 = v38->fields._items;
            v476 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v38->fields._version;
            if ( !v475 )
              goto LABEL_324;
            v477 = v38->fields._size;
            v478 = (int64_t)mNewItemSp;
            if ( (unsigned int)v477 >= v475->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v38,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v476[4] + 192LL) + 112LL));
            }
            else
            {
              v479 = &v475->obj.klass + v477;
              v38->fields._size = v477 + 1;
              v479[4] = (Il2CppClass *)v478;
              sub_1C3B708((PartyOrganizationUtility_o *)(v479 + 4), v478, v469, v470, v471, v472, v473, v474);
            }
            v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v171,
              (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v171 )
              goto LABEL_324;
            v486 = v171->fields._items;
            v487 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v171->fields._version;
            if ( !v486 )
              goto LABEL_324;
            v488 = v171->fields._size;
            v489 = (int64_t)mNewItemSp;
            if ( (unsigned int)v488 >= v486->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v171,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v487[4] + 192LL) + 112LL));
            }
            else
            {
              v490 = &v486->obj.klass + v488;
              v171->fields._size = v488 + 1;
              v490[4] = (Il2CppClass *)v489;
              sub_1C3B708((PartyOrganizationUtility_o *)(v490 + 4), v489, v480, v481, v482, v483, v484, v485);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v497 = v171->fields._items;
            v498 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v171->fields._version;
            if ( !v497 )
              goto LABEL_324;
            v499 = v171->fields._size;
            v500 = (int64_t)mNewItemSp;
            if ( (unsigned int)v499 >= v497->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v171,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v498[4] + 192LL) + 112LL));
            }
            else
            {
              v501 = &v497->obj.klass + v499;
              v171->fields._size = v499 + 1;
              v501[4] = (Il2CppClass *)v500;
              sub_1C3B708((PartyOrganizationUtility_o *)(v501 + 4), v500, v491, v492, v493, v494, v495, v496);
            }
            method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
            v508 = v171->fields._items;
            v509 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v171->fields._version;
            if ( !v508 )
              goto LABEL_324;
            v510 = v171->fields._size;
            if ( (unsigned int)v510 >= v508->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v171,
                (Il2CppObject *)method,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v509[4] + 192LL) + 112LL));
            }
            else
            {
              v511 = &v508->obj.klass + v510;
              v171->fields._size = v510 + 1;
              v511[4] = (Il2CppClass *)method;
              sub_1C3B708((PartyOrganizationUtility_o *)(v511 + 4), (int64_t)method, v502, v503, v504, v505, v506, v507);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_324;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v395 = v171->fields._items;
            v396 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v171->fields._version;
            if ( !v395 )
              goto LABEL_324;
            method = (const MethodInfo *)mNewItemSp;
LABEL_258:
            v400 = v171->fields._size;
            if ( (unsigned int)v400 >= v395->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v171,
                (Il2CppObject *)method,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v396[4] + 192LL) + 112LL));
            }
            else
            {
              v401 = &v395->obj.klass + v400;
              v171->fields._size = v400 + 1;
              v401[4] = (Il2CppClass *)method;
              sub_1C3B708((PartyOrganizationUtility_o *)(v401 + 4), (int64_t)method, v389, v390, v391, v392, v393, v394);
            }
          }
          else
          {
            v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v171,
              (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_324;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v38,
            (System_Collections_Generic_List_GameObject__o *)v171,
            0LL);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
          if ( !mNewItemSp )
            goto LABEL_324;
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)mNewItemSp, 0, 0LL);
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_324;
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
    v402 = this->fields.shopNotice;
    if ( !v402 )
      goto LABEL_324;
    if ( v402->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v403 = (ShopNoticeRemainTime_o *)sub_1C3B9B0(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v403, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v403,
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&this->fields.shopNoticeRemainTime,
              (int64_t)v403,
              v404,
              v405,
              v406,
              v407,
              v408,
              v409),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v411 = this->fields.shopNotice;
          if ( v411 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v411->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1LL,
                                                      v410);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
              v415 = this->fields.shopNotice;
              if ( v415 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v415->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          v414);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v418 = this->fields.shopNotice;
                  if ( v418 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v418->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              v417);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v420 = this->fields.mPeriodLimitedTimeLb;
                        v421 = (ShopNoticeRemainTimeLabel_o *)sub_1C3B9B0(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v421, v420, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v421;
                        sub_1C3B708(
                          (PartyOrganizationUtility_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int64_t)v421,
                          v422,
                          v423,
                          v424,
                          v425,
                          v426,
                          v427);
                      }
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v428 = this->fields.mMonthlyLimitedTimeLb;
                        v429 = (ShopNoticeRemainTimeLabel_o *)sub_1C3B9B0(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v429, v428, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v429;
                        sub_1C3B708(
                          (PartyOrganizationUtility_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int64_t)v429,
                          v430,
                          v431,
                          v432,
                          v433,
                          v434,
                          v435);
                      }
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v436 = this->fields.mExchangeServantItemLb;
                        v437 = (ShopNoticeRemainTimeLabel_o *)sub_1C3B9B0(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v437, v436, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v437;
                        sub_1C3B708(
                          (PartyOrganizationUtility_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int64_t)v437,
                          v438,
                          v439,
                          v440,
                          v441,
                          v442,
                          v443);
                      }
                      v444 = this->fields.shopNotice;
                      if ( v444 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          mNewItemSp[1].monitor = (void *)v444->fields._PeriodTimeLimit_k__BackingField;
                          ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                          v445 = this->fields.shopNotice;
                          if ( v445 )
                          {
                            mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                            if ( mNewItemSp )
                            {
                              mNewItemSp[1].monitor = (void *)v445->fields._MonthlyTimeLimit_k__BackingField;
                              ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                              v446 = this->fields.shopNotice;
                              if ( v446 )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                if ( mNewItemSp )
                                {
                                  mNewItemSp[1].monitor = (void *)v446->fields._ExchangeServantTimeLimit_k__BackingField;
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
LABEL_324:
      sub_1C3B9C0(mNewItemSp, method);
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
  GachaMaster_o *Master_object; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x20
  char v16; // w22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t klass; // w20
  const MethodInfo *v20; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v23; // x1
  UILabel_o *summonCampainNumLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+0h] [xbp-80h] BYREF
  int32_t maxNum; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF
  int32_t remainNum; // [xsp+48h] [xbp-38h] BYREF
  int v29; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4C21683 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_GachaReleaseMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&UserGachaMaster_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_6683/*"Fonts & Materials/"*/, v11);
    sub_1C3B764(&StringLiteral_6684/*"Fonts/FGO-Main-Font"*/, v12);
    byte_4C21683 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  remainNum = 0;
  maxNum = 0;
  if ( this->fields.isOpen )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !Master_object )
      goto LABEL_26;
    ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                          Master_object,
                                                                          0LL);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
    v29 = 0;
    if ( !ValidGachaEntityList )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      ValidGachaEntityList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v16 = 0;
    v27 = v25;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
      if ( !v17 )
        break;
      if ( !v27.fields._current )
        sub_1C3B9C0(v17, v18);
      if ( LODWORD(v27.fields._current[3].klass) == 3 )
      {
        klass = (int32_t)v27.fields._current[1].klass;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(klass, &remainNum, &maxNum, 0LL) )
        {
          v16 = 1;
          v29 += remainNum;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    if ( (v16 & 1) != 0 )
    {
      Master_object = (GachaMaster_o *)this->fields.summonCampainObject;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        summonCampainLabel1 = this->fields.summonCampainLabel1;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6683/*"Fonts & Materials/"*/, v20);
        if ( summonCampainLabel1 )
        {
          UILabel__set_text(summonCampainLabel1, (System_String_o *)Master_object, 0LL);
          summonCampainLabel2 = this->fields.summonCampainLabel2;
          Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6684/*"Fonts/FGO-Main-Font"*/, v23);
          if ( summonCampainLabel2 )
          {
            UILabel__set_text(summonCampainLabel2, (System_String_o *)Master_object, 0LL);
            summonCampainNumLabel = this->fields.summonCampainNumLabel;
            Master_object = (GachaMaster_o *)System_Int32__ToString((int32_t)&v29, 0LL);
            if ( summonCampainNumLabel )
            {
              UILabel__set_text(summonCampainNumLabel, (System_String_o *)Master_object, 0LL);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_1C3B9C0(Master_object, v14);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  PlayMakerFSM_o *v24; // x0

  if ( (byte_4C2167D & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_1C3B764(&StringLiteral_8670/*"MapBtnPrefab"*/, v9);
    byte_4C2167D = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) && !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.selectedKind,
      (int64_t)message,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    this->fields.selectedObject = obj;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectedObject, (int64_t)obj, v17, v18, v19, v20, v21, v22);
    v24 = this->fields.activeSceneFSM;
    if ( !v24 )
      sub_1C3B9C0(0LL, v23);
    PlayMakerFSM__SendEvent(v24, (System_String_o *)StringLiteral_8670/*"MapBtnPrefab"*/, 0LL);
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
  Il2CppObject *ComponentInChildren_object__50228848; // x0
  UnityEngine_Component_o *v16; // x23
  UnityEngine_Transform_o *v17; // x24
  UnityEngine_GameObject_o *v18; // x24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  if ( (byte_4C21679 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, scene);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    byte_4C21679 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    ComponentInChildren_object__50228848 = UnityEngine_Component__GetComponentInChildren_object__50228848(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    ComponentInChildren_object__50228848 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v16 = (UnityEngine_Component_o *)ComponentInChildren_object__50228848;
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.activeSceneFSM, (int64_t)myFSM, v19, v20, v21, v22, v23, v24);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v25),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v26),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_28:
    sub_1C3B9C0(gameObject, myFSM);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


void __fastcall MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mAllBtnAct = act;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mAllBtnAct, (int64_t)act, (int64_t)method, v3, v4, v5, v6, v7);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int32_t v22; // w1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

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
    sub_1C3B9C0(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v22 = 3;
  else
    v22 = v6;
  MainMenuBarButton__SetMode(partyBtn, v22, 0LL);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectedKind, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.selectedObject = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectedObject, 0LL, v23, v24, v25, v26, v27, v28);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_array *mDispBtnActList; // x8
  Il2CppClass **v9; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_1C3B9C0(this, kind);
  if ( mDispBtnActList->max_length <= kind )
    sub_1C3B9C8(this, *(_QWORD *)&kind);
  v9 = &mDispBtnActList->obj.klass + kind;
  v9[4] = (Il2CppClass *)act;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 4), (int64_t)act, (int64_t)act, (int32_t)method, v4, v5, v6, v7);
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

  if ( (byte_4C21694 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_1C3B764(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__, v8);
    byte_4C21694 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_10:
    sub_1C3B9C0(mDispBtnList, is_enable);
  v10 = 0;
  while ( v10 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v10,
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0LL);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C3B9C0(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mMenuBtnAct = act;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mMenuBtnAct,
    (int64_t)act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4C21693 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_4C21693 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C3B9C0(menuStateBtn, isEnable);
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

  if ( (byte_4C21686 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_4C21686 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C3B9C0(menuStateBtn, is_enable);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C21689 & 1) == 0 )
  {
    sub_1C3B764(&MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo, callback);
    byte_4C21689 = 1;
  }
  v5 = sub_1C3B9B0(MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__108___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__108_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C3B9C0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4C2167E & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, is_open);
    sub_1C3B764(&Method_MainMenuBarBase_SwitchMenu__, v7);
    sub_1C3B764(&float_TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_19122/*"flashErasure"*/, v10);
    sub_1C3B764(&StringLiteral_22718/*"scores"*/, v11);
    sub_1C3B764(&StringLiteral_18372/*"ease-out-circ"*/, v12);
    sub_1C3B764(&StringLiteral_19107/*"fixWeakCardId"*/, v13);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v14);
    sub_1C3B764(&StringLiteral_22733/*"seLoop"*/, v15);
    sub_1C3B764(&StringLiteral_22738/*"se_ba41"*/, v16);
    sub_1C3B764(&StringLiteral_23037/*"skipWaveStartFadeInSe"*/, v17);
    sub_1C3B764(&StringLiteral_21220/*"mstAiField"*/, v18);
    sub_1C3B764(&StringLiteral_22736/*"seVolume"*/, v19);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v20);
    sub_1C3B764(&StringLiteral_22776/*"seqId"*/, v21);
    sub_1C3B764(&iTween_TypeInfo, v22);
    byte_4C2167E = 1;
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
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
          menuComp,
          menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
        table = this->fields.table;
        v72[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v31, v32, v33);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_21220/*"mstAiField"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v34 = this->fields.table;
          v68 = v26;
          v70 = v27;
          v69 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v35, v36, v37);
          if ( v34 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
              v34,
              StringLiteral_23037/*"skipWaveStartFadeInSe"*/,
              menuComp,
              v34->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_22736/*"seVolume"*/,
                StringLiteral_22776/*"seqId"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v38 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v38 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v38->klass->vtable._23_Add.method)(
                  v38,
                  StringLiteral_22738/*"se_ba41"*/,
                  menuComp,
                  v38->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_22731/*"se-NO"*/,
                    StringLiteral_22718/*"scores"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v39 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v39 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v39->klass->vtable._23_Add.method)(
                      v39,
                      StringLiteral_22733/*"seLoop"*/,
                      menuComp,
                      v39->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_19122/*"flashErasure"*/,
                        StringLiteral_19107/*"fixWeakCardId"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v40 = this->fields.table;
                      v71 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71, v41, v42, v43);
                      if ( v40 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v40->klass->vtable._23_Add.method)(
                          v40,
                          StringLiteral_24427/*"x-cp20936"*/,
                          menuComp,
                          v40->klass->vtable._24_Clear.methodPtr);
                        v44 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        iTween__MoveTo_61906200(gameObject, v44, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v45);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v46);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v47);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v48);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v65 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v65 = (_QWORD *)sub_1C3B77C(Method_MainMenuBarBase_SwitchMenu__);
                        v66 = (System_Reflection_MethodBase_o *)sub_1C3B748(v65, v65[4]);
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
      sub_1C3B9C0(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v49 = -420.0;
    else
      v49 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v50 = this->fields.table;
    v72[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v51, v52, v53);
    if ( !v50 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v50->klass->vtable._23_Add.method)(
      v50,
      StringLiteral_21220/*"mstAiField"*/,
      menuComp,
      v50->klass->vtable._24_Clear.methodPtr);
    v54 = this->fields.table;
    v68 = v26;
    v69 = LODWORD(v49);
    v70 = v27;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v55, v56, v57);
    if ( !v54 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v54->klass->vtable._23_Add.method)(
      v54,
      StringLiteral_23037/*"skipWaveStartFadeInSe"*/,
      menuComp,
      v54->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22736/*"seVolume"*/,
      StringLiteral_18372/*"ease-out-circ"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v58 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v58 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_22738/*"se_ba41"*/,
      menuComp,
      v58->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22731/*"se-NO"*/,
      StringLiteral_22718/*"scores"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v59 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v59 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
      v59,
      StringLiteral_22733/*"seLoop"*/,
      menuComp,
      v59->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_19122/*"flashErasure"*/,
      StringLiteral_19107/*"fixWeakCardId"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v60 = this->fields.table;
    v71 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71, v61, v62, v63);
    if ( !v60 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v60->klass->vtable._23_Add.method)(
      v60,
      StringLiteral_24427/*"x-cp20936"*/,
      menuComp,
      v60->klass->vtable._24_Clear.methodPtr);
    v64 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_61906200(gameObject, v64, 0LL);
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

  if ( (byte_4C21678 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_TblUserMaster___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C21678 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8D640(v11);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C8D640(v11);
    UserData = **(DataManager_o ***)(v13 + 184);
    if ( !UserData )
      goto LABEL_41;
    MasterData_object = DataManager__GetMasterData_object_(
                          UserData,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v10);
      byte_4C1C955 = 1;
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
      v18 = sub_1C8D640(v16);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C8D640(v16);
    UserData = **(DataManager_o ***)(v19 + 184);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GachaMaster___);
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
    UserData = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_1C3B9C0(UserData, v10);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__98_0(MainMenuBarBase_o *this, const MethodInfo *method)
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
  if ( (byte_4C21698 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&int_TypeInfo, v6);
    this = (MainMenuBarBase_o *)sub_1C3B764(&StringLiteral_20578/*"java.io.EOFException"*/, v7);
    byte_4C21698 = 1;
  }
  shopNotice = v5->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v5->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField, v2, v3, v4);
  v11 = System_String__Format((System_String_o *)StringLiteral_20578/*"java.io.EOFException"*/, v10, 0LL);
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
    sub_1C3B9C0(this, method);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C21685 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20771/*"limitCountUpResultServantLimitCount"*/, method);
    byte_4C21685 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20771/*"limitCountUpResultServantLimitCount"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1C3B9C0(menuStateBtn, method);
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
    sub_1C3B9C0(0LL, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool isOpen; // w1
  __int64 v5; // x1
  UnityEngine_Component_o *mNewItemSp; // x0
  const MethodInfo *v7; // x2

  isOpen = this->fields.isOpen;
  this->fields.isSwitchMenuMoving = 0;
  MainMenuBarBase__SetOutSideColliderEnable(this, isOpen, v2);
  if ( !this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp
      || (mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL),
          (mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot) == 0LL)
      || (mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL),
          (mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampainObject) == 0LL) )
    {
      sub_1C3B9C0(mNewItemSp, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v7);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C21684 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20770/*"limitCountSupport"*/, method);
    byte_4C21684 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20770/*"limitCountSupport"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1C3B9C0(menuStateBtn, method);
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


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
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
  ExUITexture_c *klass; // x8
  ExUITexture_c *v12; // x8
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4C21752 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4C21752 = 1;
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
  if ( !byte_4C1F4D2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4D2 = 1;
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
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.mEventBgTexture->klass;
  if ( !klass )
    goto LABEL_29;
  v10 = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !v10 )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable(v10, 0, 0LL);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = v10->fields.mEventBgTexture->klass;
  if ( !v12
    || (v10 = *(TitleInfoControl_o **)&v12->_2.static_fields_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)v10, 0, 0LL), !_4__this) )
  {
LABEL_29:
    sub_1C3B9C0(v10, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v13 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__,
    0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__108__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__108_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C21750 & 1) == 0 )
  {
    sub_1C3B764(&MainMenuBarBase___c_TypeInfo, v1);
    byte_4C21750 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)MainMenuBarBase___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__107_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  ScrTerminalListTop_o *v4; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_c *v6; // x8

  if ( (byte_4C21751 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v2);
    byte_4C21751 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4D2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4D2 = 1;
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
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v4->fields.boardGameTokenAction->klass;
  if ( !klass )
    goto LABEL_24;
  v4 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !v4 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v4, 0LL);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
  }
  v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = v4->fields.boardGameTokenAction->klass;
  if ( !v6 || (v4 = *(ScrTerminalListTop_o **)&v6->_2.static_fields_size) == 0LL )
LABEL_24:
    sub_1C3B9C0(v4, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v4, 0, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___ctor(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C3B9C0(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}