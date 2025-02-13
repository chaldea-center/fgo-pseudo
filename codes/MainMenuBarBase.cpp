void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v2; // x8
  struct MainMenuBarBase_StaticFields *v3; // x9

  if ( (byte_4BDBC83 & 1) == 0 )
  {
    sub_1C21E38(&MainMenuBarBase_TypeInfo);
    byte_4BDBC83 = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v2 = MainMenuBarBase_TypeInfo;
  v3 = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&v3->NOTICE_NUMBER_POS_DISP_BTN.fields.x = 0x42180000422C0000LL;
  v3->NOTICE_NUMBER_POS_DISP_BTN.fields.z = 0.0;
  v2->static_fields->FOLDER_WAR_ID = 10000;
}


void __fastcall MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Hashtable_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Action_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDBC82 & 1) == 0 )
  {
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
    byte_4BDBC82 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mDispBtnList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v10 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v10, 0LL);
  this->fields.table = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Action_array *)sub_1C21EE0(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mDispBtnActList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *terminalBtn; // x1
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int64_t v12; // x2
  int v13; // w8
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  __int64 v17; // x8
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  Il2CppObject *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v90; // x20
  UnityEngine_GameObject_o *v91; // x0
  MainMenuBarBase_c *v92; // x0
  Il2CppObject *Component_object; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  Il2CppObject *v101; // x20
  UnityEngine_GameObject_o *v102; // x20
  UnityEngine_GameObject_o *v103; // x0
  MainMenuBarBase_c *v104; // x0
  Il2CppObject *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  Il2CppObject *v113; // x20
  UnityEngine_GameObject_o *v114; // x20
  UnityEngine_GameObject_o *v115; // x0
  MainMenuBarBase_c *v116; // x0
  Il2CppObject *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  struct ShopNotice_o *ShopNotice; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  struct UISprite_o *v146; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v148; // x1

  if ( (byte_4BDBC63 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
    sub_1C21E38(&MainMenuBarBase_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ShopTopListViewManager_TypeInfo);
    byte_4BDBC63 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_109;
  v12 = *((unsigned int *)mDispBtnList + 6);
  v13 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v13;
  if ( (int)v12 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v12, 0LL);
    mDispBtnList = this->fields.mDispBtnList;
    if ( !mDispBtnList )
      goto LABEL_109;
  }
  terminalBtn = (Il2CppObject *)this->fields.terminalBtn;
  v14 = *((_QWORD *)mDispBtnList + 2);
  v15 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v14 )
    goto LABEL_109;
  v16 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = v14 + 8 * v16;
    *((_DWORD *)mDispBtnList + 6) = v16 + 1;
    *(_QWORD *)(v17 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)terminalBtn, v12, v5, v6, v7, v8, v9);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.partyBtn;
  v24 = *((_QWORD *)mDispBtnList + 2);
  v25 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v24 )
    goto LABEL_109;
  v26 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v24 + 8 * v26;
    *((_DWORD *)mDispBtnList + 6) = v26 + 1;
    *(_QWORD *)(v27 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)terminalBtn, v18, v19, v20, v21, v22, v23);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.summonBtn;
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
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * v36;
    *((_DWORD *)mDispBtnList + 6) = v36 + 1;
    *(_QWORD *)(v37 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)terminalBtn, v28, v29, v30, v31, v32, v33);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.combineBtn;
  v44 = *((_QWORD *)mDispBtnList + 2);
  v45 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v44 )
    goto LABEL_109;
  v46 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * v46;
    *((_DWORD *)mDispBtnList + 6) = v46 + 1;
    *(_QWORD *)(v47 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v47 + 32), (int64_t)terminalBtn, v38, v39, v40, v41, v42, v43);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.shopBtn;
  v54 = *((_QWORD *)mDispBtnList + 2);
  v55 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v54 )
    goto LABEL_109;
  v56 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = v54 + 8 * v56;
    *((_DWORD *)mDispBtnList + 6) = v56 + 1;
    *(_QWORD *)(v57 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)terminalBtn, v48, v49, v50, v51, v52, v53);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.friendBtn;
  v64 = *((_QWORD *)mDispBtnList + 2);
  v65 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v64 )
    goto LABEL_109;
  v66 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = v64 + 8 * v66;
    *((_DWORD *)mDispBtnList + 6) = v66 + 1;
    *(_QWORD *)(v67 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 32), (int64_t)terminalBtn, v58, v59, v60, v61, v62, v63);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.myroomBtn;
  v74 = *((_QWORD *)mDispBtnList + 2);
  v75 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v74 )
    goto LABEL_109;
  v76 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = v74 + 8 * v76;
    *((_DWORD *)mDispBtnList + 6) = v76 + 1;
    *(_QWORD *)(v77 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v77 + 32), (int64_t)terminalBtn, v68, v69, v70, v71, v72, v73);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v84 = *((_QWORD *)mDispBtnList + 2);
  v85 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v84 )
    goto LABEL_109;
  v86 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = v84 + 8 * v86;
    *((_DWORD *)mDispBtnList + 6) = v86 + 1;
    *(_QWORD *)(v87 + 32) = terminalBtn;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v87 + 32), (int64_t)terminalBtn, v78, v79, v80, v81, v82, v83);
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
                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_109;
    v90 = (UnityEngine_GameObject_o *)mDispBtnList;
    v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34803616(v90, v91, 0LL);
    v92 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v92 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v90, v92->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v90 )
      goto LABEL_109;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v90,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.mMenuNoticeNumber,
      (int64_t)Component_object,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
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
    v101 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v101,
                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_109;
    v102 = (UnityEngine_GameObject_o *)mDispBtnList;
    v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34803616(v102, v103, 0LL);
    v104 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v104 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v102, v104->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v102 )
      goto LABEL_109;
    v105 = UnityEngine_GameObject__GetComponent_object_(
             v102,
             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v105;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.mSummonNoticeNumber,
      (int64_t)v105,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
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
    v113 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v113,
                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_109;
    v114 = (UnityEngine_GameObject_o *)mDispBtnList;
    v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34803616(v114, v115, 0LL);
    v116 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v116 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v114, v116->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v114 )
      goto LABEL_109;
    v117 = UnityEngine_GameObject__GetComponent_object_(
             v114,
             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v117;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.mFriendNoticeNumber,
      (int64_t)v117,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.shopNotice,
    (int64_t)ShopNotice,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
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
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (int64_t)mAtlas,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
      v146 = this->fields.mExchangeServantItemSp;
      if ( v146 )
      {
        mSpriteName = v146->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int64_t)mSpriteName,
          v140,
          v141,
          v142,
          v143,
          v144,
          v145);
        goto LABEL_107;
      }
    }
LABEL_109:
    sub_1C22094(mDispBtnList, terminalBtn);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v148);
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
    sub_1C22094(backCloseSprite, isOpen);
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
  MainMenuBarButton_o *Instance; // x0
  __int64 v4; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v6; // x20
  MyRoomStateMaterial_o *klass; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v9; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v12; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDBC6C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_1C21E38(&MyRoomRootComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDBC6C = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v4 = *(_QWORD *)&Instance->fields.mode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
    goto LABEL_27;
  if ( !v4 )
    goto LABEL_27;
  methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v4 + 304LL) < (unsigned int)methodPtr_low
    || *(MyRoomRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v4 + 200LL) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_27;
  }
  v6 = *(UnityEngine_Object_o **)(v4 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (MainMenuBarButton_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !v6 )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)v6, 0LL) == 1 )
    goto LABEL_27;
  klass = (MyRoomStateMaterial_o *)v6[37].klass;
  if ( !klass )
    goto LABEL_27;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(klass, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(klass, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_27;
  }
  mOldState = klass->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_27;
  mSelectInfos = (System_Collections_Generic_List_object__o *)klass->fields.mSelectInfos;
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v9) )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)System_Collections_Generic_List_object___get_Item(
                                      mSelectInfos,
                                      0,
                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
  if ( !Instance )
    goto LABEL_30;
  if ( LODWORD(Instance[1].klass) != questId[1] )
  {
LABEL_27:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v12 = 2;
      goto LABEL_29;
    }
LABEL_30:
    sub_1C22094(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_30;
  v12 = 3;
LABEL_29:
  MainMenuBarButton__SetMode(Instance, v12, 0LL);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x8
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v5; // w1

  if ( (byte_4BDBC6B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDBC6B = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1C22094(terminalBtn, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9275 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9275 = 1;
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
  __int64 v7; // x20
  MoveObject_o *gameObject; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  float mFrameInPosY; // s14
  float v17; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  float v26; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v30; // x21
  float v31; // s12
  float v32; // s13
  System_Action_o *v33; // x22
  System_Action_o *v34; // x23
  float v35; // s3
  float v36; // s0
  float v37; // s5
  float v38; // s2
  float v39; // s4
  float v40; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDBC81 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__);
    sub_1C21E38(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__);
    sub_1C21E38(&MainMenuBarBase___c__DisplayClass125_0_TypeInfo);
    byte_4BDBC81 = 1;
  }
  v7 = sub_1C22084(MainMenuBarBase___c__DisplayClass125_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass125_0___ctor((MainMenuBarBase___c__DisplayClass125_0_o *)v7, 0LL);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = gameObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)gameObject, v10, v11, v12, v13, v14, v15);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v17 = this->fields.mFrameInPosY;
  else
    v17 = -90.0;
  *(float *)(v7 + 32) = v17;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v7 + 16),
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  v19 = (MoveObject_o **)(v7 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)Component_object, v20, v21, v22, v23, v24, v25);
  if ( is_force
    || (v26 = *(float *)(v7 + 32),
        v26 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), 0LL)) )
  {
    gameObject = *v19;
    if ( *v19 )
    {
      MoveObject__Stop(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), *(float *)(v7 + 32), 0LL);
      return;
    }
LABEL_29:
    sub_1C22094(gameObject, v9);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v42 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
  v30 = *(MoveObject_o **)(v7 + 24);
  v31 = v42.fields.x;
  v32 = v42.fields.z;
  v33 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, 0LL);
  v34 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, 0LL);
  if ( !v30 )
    goto LABEL_29;
  if ( is_framein )
    v35 = x;
  else
    v35 = v31;
  if ( is_framein )
    v36 = v31;
  else
    v36 = x;
  if ( is_framein )
    v37 = z;
  else
    v37 = v32;
  if ( is_framein )
    v38 = v32;
  else
    v38 = z;
  v39 = v17;
  v40 = -90.0;
  if ( !is_framein )
    v40 = mFrameInPosY;
  MoveObject__Play(
    v30,
    *(UnityEngine_Vector3_o *)&v36,
    *(UnityEngine_Vector3_o *)&v35,
    IntpTime_AutoResume,
    v33,
    v34,
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v9; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_40821504; // x22
  bool IsClearAllMainScenario; // w23
  int64_t v12; // x1
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v16; // x20
  MainMenuBarBase_c *v17; // x0

  if ( (byte_4BDBC7E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&MainMenuBarBase_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BDBC7E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v9 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_30;
  MovedEventScriptList_40821504 = QuestScriptMaster__GetMovedEventScriptList_40821504(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_30;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_30;
  v12 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( IsClearAllMainScenario )
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetLatestMainScenarioLastQuest(
                                    v9,
                                    v12,
                                    MovedEventScriptList_40821504,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(
                                    v9,
                                    v12,
                                    MovedEventScriptList_40821504,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0LL )
  {
LABEL_30:
    sub_1C22094(Instance, v7);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0LL);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v16 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v17 = MainMenuBarBase_TypeInfo;
      if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
        v17 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v17->static_fields->FOLDER_WAR_ID )
        *warId = v16->fields.parentWarId;
    }
  }
  LOBYTE(LatestMainScenarioLastQuest) = 1;
  return (char)LatestMainScenarioLastQuest;
}


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *MyFsmP; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_c *v4; // x8
  __int64 v5; // x8

  if ( (byte_4BDBC76 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_12433/*"SPOT SELECT WAIT"*/);
    byte_4BDBC76 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
  if ( (System_String__IndexOf_63147052((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12433/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = MyFsmP->fields.boardGameTokenAction->klass;
  if ( !v4
    || (v5 = *(_QWORD *)&v4->_2.thread_static_fields_offset) == 0
    || (MyFsmP = *(ScrTerminalListTop_o **)(v5 + 544)) == 0LL )
  {
LABEL_26:
    sub_1C22094(MyFsmP, method);
  }
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4BDBC79 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8678/*"MAIN_MENU_BAR_SELECT_COMBINE"*/);
    byte_4BDBC79 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1C22094(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8678/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v6);
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
  if ( (byte_4BDBC73 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1C21E38(&Method_MainMenuBarBase_OnClickCommon__);
    byte_4BDBC73 = 1;
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
          sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 4), 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.mAllBtnAct, 0LL, v16, v17, v18, v19, v20, v21);
          v22 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_1C21E50(Method_MainMenuBarBase_OnClickCommon__);
          v23 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1C2209C(this, *(_QWORD *)&kind);
      }
    }
    sub_1C22094(this, *(_QWORD *)&kind);
  }
  v22 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1C21E50(Method_MainMenuBarBase_OnClickCommon__);
  v23 = 2;
LABEL_14:
  v24 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, v23, 0, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4BDBC77 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8682/*"MAIN_MENU_BAR_SELECT_PARTY"*/);
    byte_4BDBC77 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1C22094(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8682/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4BDBC7B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8679/*"MAIN_MENU_BAR_SELECT_FRIEND"*/);
    byte_4BDBC7B = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1C22094(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8679/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *latestScenarioBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  MainMenuBarBase_o *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4
  MyRoomRootComponent_c *v9; // x0
  int32_t v10; // w21
  int32_t v11; // w22
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x23
  SceneJumpInfo_o *v13; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDBC7D & 1) == 0 )
  {
    sub_1C21E38(&MyRoomRootComponent_TypeInfo);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_8680/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4BDBC7D = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1C22094(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v6, &questId[1], questId, v7) )
    {
      v9 = MyRoomRootComponent_TypeInfo;
      if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v9 = MyRoomRootComponent_TypeInfo;
      }
      v11 = questId[0];
      v10 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v9->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v13 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918404(v13, MYROOM_STATE_NEW_MATERIAL, v10, v11, 0LL);
    }
    else
    {
      v13 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8680/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v13, v8);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4BDBC7C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8680/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4BDBC7C = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1C22094(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8680/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v6);
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

  if ( (byte_4BDBC7A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8683/*"MAIN_MENU_BAR_SELECT_SHOP"*/);
    byte_4BDBC7A = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1C22094(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8683/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4BDBC78 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8684/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_4BDBC78 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1C22094(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8684/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *terminalBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v8; // x4
  System_Threading_CancellationTokenSource_c *klass; // x8
  UnityEngine_Object_o *v10; // x20
  TerminalPramsManager_c *v11; // x0
  System_Threading_CancellationTokenSource_c *v12; // x8
  System_String_o *v13; // x20
  System_Threading_CancellationTokenSource_c *v14; // x8
  TerminalPramsManager_c *v15; // x0
  System_Threading_CancellationTokenSource_c *v16; // x8
  TerminalSceneComponent_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  const MethodInfo *v19; // x2
  MainMenuBarBase___c_c *v20; // x0
  System_Action_o *_9__107_0; // x20
  Il2CppObject *v22; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_IEnumerator_o *v30; // x1
  System_Threading_CancellationTokenSource_c *v31; // x8
  const MethodInfo *v32; // x3
  TerminalPramsManager_c *v33; // x0
  System_Threading_CancellationTokenSource_c *v34; // x8

  if ( (byte_4BDBC74 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__);
    sub_1C21E38(&MainMenuBarBase___c_TypeInfo);
    sub_1C21E38(&StringLiteral_8685/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/);
    sub_1C21E38(&StringLiteral_12433/*"SPOT SELECT WAIT"*/);
    sub_1C21E38(&StringLiteral_3456/*"CAPTER WAIT"*/);
    byte_4BDBC74 = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_123;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
      goto LABEL_126;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
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
    v10 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
LABEL_126:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD964C )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD964C = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4BD736A )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4BD736A = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_4BD9672 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4BD9672 = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_93;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_127;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9275 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9275 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( v11->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_127;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v12 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v12 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v12->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    v13 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_63147052((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12433/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_63147052(v13, (System_String_o *)StringLiteral_3456/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v14 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v14 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v14->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0LL) )
    {
LABEL_127:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD964C )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD964C = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4BD736A )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4BD736A = 1;
      }
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v16 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( v16 )
      {
        terminalBtn = *(MainMenuBarButton_o **)&v16->_2.static_fields_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          v17 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v17 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v17->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8685/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v8);
            return;
          }
        }
      }
LABEL_123:
      sub_1C22094(terminalBtn, method);
    }
    if ( (System_String__IndexOf_63147052(v13, (System_String_o *)StringLiteral_3456/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v31 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v31 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v31->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v32);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9ADC )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9ADC = 1;
      }
      v33 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v33 = TerminalPramsManager_TypeInfo;
      }
      v33->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v34 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v34 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v34->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0LL);
    }
    else
    {
      v20 = MainMenuBarBase___c_TypeInfo;
      if ( !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v20 = MainMenuBarBase___c_TypeInfo;
      }
      _9__107_0 = v20->static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = MainMenuBarBase___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__107_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__107_0, v22, Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, 0LL);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__107_0 = _9__107_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
          (int64_t)_9__107_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      v30 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__107_0, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v30, 0LL);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mMenuBtnAct, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDBC67 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDBC67 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v4);
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
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_4BDBC68 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_8681/*"MAIN_MENU_BAR_SELECT_NONE"*/);
    byte_4BDBC68 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) )
  {
    selectedKind = this->fields.selectedKind;
    v5 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v5 )
LABEL_12:
        sub_1C22094(v5, selectedKind);
    }
    else
    {
      if ( !v5 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8681/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v5, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDBC66 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDBC66 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BDBC6E & 1) == 0 )
  {
    sub_1C21E38(&ShopTopListViewManager_TypeInfo);
    byte_4BDBC6E = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.shopNotice, (int64_t)ShopNotice, v4, v5, v6, v7, v8, v9);
  MainMenuBarBase__ResetShopNoticeDraw(this, v10);
}


void __fastcall MainMenuBarBase__ResetShopNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mNewItemSp; // x0
  struct ShopNotice_o *shopNotice; // x8
  struct ShopNotice_o *v5; // x8
  struct ShopNotice_o *v6; // x8
  struct ShopNotice_o *v7; // x8
  struct ShopNotice_o *v8; // x8
  struct ShopNotice_o *v9; // x8
  System_Action_o *v10; // x20
  struct ShopNotice_o *v11; // x8
  struct ShopNotice_o *v12; // x8
  struct ShopNotice_o *v13; // x8
  struct ShopNotice_o *v14; // x8
  struct ShopNotice_o *v15; // x8
  struct ShopNotice_o *v16; // x8
  struct ShopNotice_o *v17; // x8
  unsigned int LimitedType_k__BackingField; // w8
  struct ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct ShopNotice_o *v27; // x8
  int32_t v28; // w23
  System_Collections_Generic_List_object__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  int64_t v39; // x1
  Il2CppClass **v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  int64_t v50; // x1
  Il2CppClass **v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  int64_t v61; // x1
  Il2CppClass **v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  int64_t v72; // x1
  Il2CppClass **v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  int64_t v83; // x1
  Il2CppClass **v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  int64_t v94; // x1
  Il2CppClass **v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  int64_t v105; // x1
  Il2CppClass **v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  int64_t v116; // x1
  Il2CppClass **v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  int64_t v127; // x1
  Il2CppClass **v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  int64_t v138; // x1
  Il2CppClass **v139; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  int64_t v149; // x1
  Il2CppClass **v150; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  int64_t v160; // x1
  Il2CppClass **v161; // x0
  System_Collections_Generic_List_object__o *v162; // x22
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  int64_t v172; // x1
  Il2CppClass **v173; // x0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  struct System_Object_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  int64_t v183; // x1
  Il2CppClass **v184; // x0
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  struct System_Object_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  int64_t v194; // x1
  Il2CppClass **v195; // x0
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  int64_t v205; // x1
  Il2CppClass **v206; // x0
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  struct System_Object_array *v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  int64_t v216; // x1
  Il2CppClass **v217; // x0
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  int64_t v227; // x1
  Il2CppClass **v228; // x0
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  struct System_Object_array *v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x10
  int64_t v238; // x1
  Il2CppClass **v239; // x0
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  struct System_Object_array *v246; // x8
  _QWORD *v247; // x9
  __int64 v248; // x10
  int64_t v249; // x1
  Il2CppClass **v250; // x0
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  struct System_Object_array *v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  int64_t v260; // x1
  Il2CppClass **v261; // x0
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  struct System_Object_array *v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  int64_t v271; // x1
  Il2CppClass **v272; // x0
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  struct System_Object_array *v279; // x8
  _QWORD *v280; // x9
  int64_t v281; // x2
  int32_t v282; // w3
  System_String_o *v283; // x4
  BattleSetupInfo_o *v284; // x5
  FollowerInfo_o *v285; // x6
  PartyListViewItem_o *v286; // x7
  struct System_Object_array *v287; // x8
  _QWORD *v288; // x9
  __int64 v289; // x10
  int64_t v290; // x1
  Il2CppClass **v291; // x0
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  struct System_Object_array *v298; // x8
  _QWORD *v299; // x9
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  struct System_Object_array *v306; // x8
  _QWORD *v307; // x9
  __int64 v308; // x10
  int64_t v309; // x1
  Il2CppClass **v310; // x0
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  struct System_Object_array *v317; // x8
  _QWORD *v318; // x9
  __int64 v319; // x10
  int64_t v320; // x1
  Il2CppClass **v321; // x0
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  struct System_Object_array *v328; // x8
  _QWORD *v329; // x9
  __int64 v330; // x10
  int64_t v331; // x1
  Il2CppClass **v332; // x0
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  struct System_Object_array *v339; // x8
  _QWORD *v340; // x9
  __int64 v341; // x10
  int64_t v342; // x1
  Il2CppClass **v343; // x0
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  struct System_Object_array *v350; // x8
  _QWORD *v351; // x9
  __int64 v352; // x10
  int64_t v353; // x1
  Il2CppClass **v354; // x0
  int64_t v355; // x2
  int32_t v356; // w3
  System_String_o *v357; // x4
  BattleSetupInfo_o *v358; // x5
  FollowerInfo_o *v359; // x6
  PartyListViewItem_o *v360; // x7
  struct System_Object_array *v361; // x8
  _QWORD *v362; // x9
  __int64 v363; // x10
  int64_t v364; // x1
  Il2CppClass **v365; // x0
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  struct System_Object_array *v372; // x8
  _QWORD *v373; // x9
  __int64 v374; // x10
  int64_t v375; // x1
  Il2CppClass **v376; // x0
  __int64 v377; // x10
  int64_t v378; // x1
  Il2CppClass **v379; // x0
  int64_t v380; // x2
  int32_t v381; // w3
  System_String_o *v382; // x4
  BattleSetupInfo_o *v383; // x5
  FollowerInfo_o *v384; // x6
  PartyListViewItem_o *v385; // x7
  struct System_Object_array *v386; // x8
  _QWORD *v387; // x9
  __int64 v388; // x10
  unsigned int max_length; // w11
  Il2CppClass **v390; // x0
  __int64 v391; // x10
  Il2CppClass **v392; // x0
  struct ShopNotice_o *v393; // x8
  ShopNoticeRemainTime_o *v394; // x21
  int64_t v395; // x2
  int32_t v396; // w3
  System_String_o *v397; // x4
  BattleSetupInfo_o *v398; // x5
  FollowerInfo_o *v399; // x6
  PartyListViewItem_o *v400; // x7
  const MethodInfo *v401; // x2
  struct ShopNotice_o *v402; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v405; // x2
  struct ShopNotice_o *v406; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v408; // x2
  struct ShopNotice_o *v409; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  UILabel_o *v411; // x20
  ShopNoticeRemainTimeLabel_o *v412; // x22
  int64_t v413; // x2
  int32_t v414; // w3
  System_String_o *v415; // x4
  BattleSetupInfo_o *v416; // x5
  FollowerInfo_o *v417; // x6
  PartyListViewItem_o *v418; // x7
  UILabel_o *v419; // x20
  ShopNoticeRemainTimeLabel_o *v420; // x22
  int64_t v421; // x2
  int32_t v422; // w3
  System_String_o *v423; // x4
  BattleSetupInfo_o *v424; // x5
  FollowerInfo_o *v425; // x6
  PartyListViewItem_o *v426; // x7
  UILabel_o *v427; // x20
  ShopNoticeRemainTimeLabel_o *v428; // x22
  int64_t v429; // x2
  int32_t v430; // w3
  System_String_o *v431; // x4
  BattleSetupInfo_o *v432; // x5
  FollowerInfo_o *v433; // x6
  PartyListViewItem_o *v434; // x7
  struct ShopNotice_o *v435; // x8
  struct ShopNotice_o *v436; // x8
  struct ShopNotice_o *v437; // x8
  int64_t v438; // x2
  int32_t v439; // w3
  System_String_o *v440; // x4
  BattleSetupInfo_o *v441; // x5
  FollowerInfo_o *v442; // x6
  PartyListViewItem_o *v443; // x7
  struct System_Object_array *v444; // x8
  _QWORD *v445; // x9
  __int64 v446; // x10
  int64_t v447; // x1
  Il2CppClass **v448; // x0
  int64_t v449; // x2
  int32_t v450; // w3
  System_String_o *v451; // x4
  BattleSetupInfo_o *v452; // x5
  FollowerInfo_o *v453; // x6
  PartyListViewItem_o *v454; // x7
  struct System_Object_array *v455; // x8
  _QWORD *v456; // x9
  __int64 v457; // x10
  int64_t v458; // x1
  Il2CppClass **v459; // x0
  int64_t v460; // x2
  int32_t v461; // w3
  System_String_o *v462; // x4
  BattleSetupInfo_o *v463; // x5
  FollowerInfo_o *v464; // x6
  PartyListViewItem_o *v465; // x7
  struct System_Object_array *v466; // x8
  _QWORD *v467; // x9
  __int64 v468; // x10
  int64_t v469; // x1
  Il2CppClass **v470; // x0
  int64_t v471; // x2
  int32_t v472; // w3
  System_String_o *v473; // x4
  BattleSetupInfo_o *v474; // x5
  FollowerInfo_o *v475; // x6
  PartyListViewItem_o *v476; // x7
  struct System_Object_array *v477; // x8
  _QWORD *v478; // x9
  __int64 v479; // x10
  int64_t v480; // x1
  Il2CppClass **v481; // x0
  int64_t v482; // x2
  int32_t v483; // w3
  System_String_o *v484; // x4
  BattleSetupInfo_o *v485; // x5
  FollowerInfo_o *v486; // x6
  PartyListViewItem_o *v487; // x7
  struct System_Object_array *v488; // x8
  _QWORD *v489; // x9
  __int64 v490; // x10
  int64_t v491; // x1
  Il2CppClass **v492; // x0
  int64_t v493; // x2
  int32_t v494; // w3
  System_String_o *v495; // x4
  BattleSetupInfo_o *v496; // x5
  FollowerInfo_o *v497; // x6
  PartyListViewItem_o *v498; // x7
  struct System_Object_array *v499; // x8
  _QWORD *v500; // x9
  __int64 v501; // x10
  Il2CppClass **v502; // x0

  if ( (byte_4BDBC6D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__);
    sub_1C21E38(&ShopNoticeRemainTimeLabel_TypeInfo);
    sub_1C21E38(&ShopNoticeRemainTime_TypeInfo);
    sub_1C21E38(&ShopNoticeTween_TypeInfo);
    byte_4BDBC6D = 1;
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
    v5 = this->fields.shopNotice;
    if ( !v5 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v5->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v6 = this->fields.shopNotice;
    if ( !v6 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v6->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v7 = this->fields.shopNotice;
    if ( !v7 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v7->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v8 = this->fields.shopNotice;
    if ( !v8 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v8->fields._LimitedType_k__BackingField == 3,
      0LL);
    v9 = this->fields.shopNotice;
    if ( !v9 )
      goto LABEL_324;
    if ( v9->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v10, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v11 = this->fields.shopNotice;
    if ( !v11 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v11->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v12 = this->fields.shopNotice;
    if ( !v12 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v12->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v13 = this->fields.shopNotice;
    if ( !v13 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v13->fields._LimitedType_k__BackingField == 2,
      0LL);
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
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
      !v15->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
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
      v16->fields._LimitedType_k__BackingField == 4,
      0LL);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_324;
    LimitedType_k__BackingField = v17->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v20 = (ShopNoticeTween_o *)sub_1C22084(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v20, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v20;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.shopNoticeTween,
          (int64_t)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_324;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v27 = this->fields.shopNotice;
      if ( !v27 )
        goto LABEL_324;
      v28 = v27->fields._LimitedType_k__BackingField;
      switch ( v28 )
      {
        case 6:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          items = v29->fields._items;
          v37 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !items )
            goto LABEL_324;
          size = v29->fields._size;
          v39 = (int64_t)mNewItemSp;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v29->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v39;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 4), v39, v30, v31, v32, v33, v34, v35);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v157 = v29->fields._items;
          v158 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v157 )
            goto LABEL_324;
          v159 = v29->fields._size;
          v160 = (int64_t)mNewItemSp;
          if ( (unsigned int)v159 >= v157->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
          }
          else
          {
            v161 = &v157->obj.klass + v159;
            v29->fields._size = v159 + 1;
            v161[4] = (Il2CppClass *)v160;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v161 + 4), v160, v151, v152, v153, v154, v155, v156);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v268 = v162->fields._items;
          v269 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v268 )
            goto LABEL_324;
          v270 = v162->fields._size;
          v271 = (int64_t)mNewItemSp;
          if ( (unsigned int)v270 >= v268->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
          }
          else
          {
            v272 = &v268->obj.klass + v270;
            v162->fields._size = v270 + 1;
            v272[4] = (Il2CppClass *)v271;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v272 + 4), v271, v262, v263, v264, v265, v266, v267);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          goto LABEL_256;
        case 10:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v58 = v29->fields._items;
          v59 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v58 )
            goto LABEL_324;
          v60 = v29->fields._size;
          v61 = (int64_t)mNewItemSp;
          if ( (unsigned int)v60 >= v58->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &v58->obj.klass + v60;
            v29->fields._size = v60 + 1;
            v62[4] = (Il2CppClass *)v61;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v62 + 4), v61, v52, v53, v54, v55, v56, v57);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v169 = v29->fields._items;
          v170 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v169 )
            goto LABEL_324;
          v171 = v29->fields._size;
          v172 = (int64_t)mNewItemSp;
          if ( (unsigned int)v171 >= v169->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
          }
          else
          {
            v173 = &v169->obj.klass + v171;
            v29->fields._size = v171 + 1;
            v173[4] = (Il2CppClass *)v172;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v173 + 4), v172, v163, v164, v165, v166, v167, v168);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v279 = v162->fields._items;
          v280 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v279 )
            goto LABEL_324;
          goto LABEL_237;
        case 12:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v69 = v29->fields._items;
          v70 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v69 )
            goto LABEL_324;
          v71 = v29->fields._size;
          v72 = (int64_t)mNewItemSp;
          if ( (unsigned int)v71 >= v69->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v69->obj.klass + v71;
            v29->fields._size = v71 + 1;
            v73[4] = (Il2CppClass *)v72;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v73 + 4), v72, v63, v64, v65, v66, v67, v68);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v180 = v29->fields._items;
          v181 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v180 )
            goto LABEL_324;
          v182 = v29->fields._size;
          v183 = (int64_t)mNewItemSp;
          if ( (unsigned int)v182 >= v180->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
          }
          else
          {
            v184 = &v180->obj.klass + v182;
            v29->fields._size = v182 + 1;
            v184[4] = (Il2CppClass *)v183;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v184 + 4), v183, v174, v175, v176, v177, v178, v179);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v279 = v162->fields._items;
          v280 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v279 )
            goto LABEL_324;
          goto LABEL_237;
        case 14:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v80 = v29->fields._items;
          v81 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v80 )
            goto LABEL_324;
          v82 = v29->fields._size;
          v83 = (int64_t)mNewItemSp;
          if ( (unsigned int)v82 >= v80->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v80->obj.klass + v82;
            v29->fields._size = v82 + 1;
            v84[4] = (Il2CppClass *)v83;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v84 + 4), v83, v74, v75, v76, v77, v78, v79);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v191 = v29->fields._items;
          v192 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v191 )
            goto LABEL_324;
          v193 = v29->fields._size;
          v194 = (int64_t)mNewItemSp;
          if ( (unsigned int)v193 >= v191->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
          }
          else
          {
            v195 = &v191->obj.klass + v193;
            v29->fields._size = v193 + 1;
            v195[4] = (Il2CppClass *)v194;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v195 + 4), v194, v185, v186, v187, v188, v189, v190);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v287 = v29->fields._items;
          v288 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v287 )
            goto LABEL_324;
          v289 = v29->fields._size;
          v290 = (int64_t)mNewItemSp;
          if ( (unsigned int)v289 >= v287->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
          }
          else
          {
            v291 = &v287->obj.klass + v289;
            v29->fields._size = v289 + 1;
            v291[4] = (Il2CppClass *)v290;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v291 + 4), v290, v281, v282, v283, v284, v285, v286);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v339 = v162->fields._items;
          v340 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v339 )
            goto LABEL_324;
          v341 = v162->fields._size;
          v342 = (int64_t)mNewItemSp;
          if ( (unsigned int)v341 >= v339->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v340[4] + 192LL) + 112LL));
          }
          else
          {
            v343 = &v339->obj.klass + v341;
            v162->fields._size = v341 + 1;
            v343[4] = (Il2CppClass *)v342;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v343 + 4), v342, v333, v334, v335, v336, v337, v338);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v279 = v162->fields._items;
          v280 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v279 )
            goto LABEL_324;
LABEL_237:
          v377 = v162->fields._size;
          v378 = (int64_t)mNewItemSp;
          if ( (unsigned int)v377 >= v279->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
          }
          else
          {
            v379 = &v279->obj.klass + v377;
            v162->fields._size = v377 + 1;
            v379[4] = (Il2CppClass *)v378;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v379 + 4), v378, v273, v274, v275, v276, v277, v278);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v386 = v162->fields._items;
          v387 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v386 )
            goto LABEL_324;
          goto LABEL_258;
        case 18:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v91 = v29->fields._items;
          v92 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v91 )
            goto LABEL_324;
          v93 = v29->fields._size;
          v94 = (int64_t)mNewItemSp;
          if ( (unsigned int)v93 >= v91->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &v91->obj.klass + v93;
            v29->fields._size = v93 + 1;
            v95[4] = (Il2CppClass *)v94;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v95 + 4), v94, v85, v86, v87, v88, v89, v90);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v202 = v29->fields._items;
          v203 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v202 )
            goto LABEL_324;
          v204 = v29->fields._size;
          v205 = (int64_t)mNewItemSp;
          if ( (unsigned int)v204 >= v202->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
          }
          else
          {
            v206 = &v202->obj.klass + v204;
            v29->fields._size = v204 + 1;
            v206[4] = (Il2CppClass *)v205;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v206 + 4), v205, v196, v197, v198, v199, v200, v201);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_324;
          goto LABEL_245;
        case 20:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v102 = v29->fields._items;
          v103 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v102 )
            goto LABEL_324;
          v104 = v29->fields._size;
          v105 = (int64_t)mNewItemSp;
          if ( (unsigned int)v104 >= v102->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
          }
          else
          {
            v106 = &v102->obj.klass + v104;
            v29->fields._size = v104 + 1;
            v106[4] = (Il2CppClass *)v105;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v106 + 4), v105, v96, v97, v98, v99, v100, v101);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v213 = v29->fields._items;
          v214 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v213 )
            goto LABEL_324;
          v215 = v29->fields._size;
          v216 = (int64_t)mNewItemSp;
          if ( (unsigned int)v215 >= v213->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
          }
          else
          {
            v217 = &v213->obj.klass + v215;
            v29->fields._size = v215 + 1;
            v217[4] = (Il2CppClass *)v216;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v217 + 4), v216, v207, v208, v209, v210, v211, v212);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_324;
          goto LABEL_245;
        case 22:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v29 )
            {
              v113 = v29->fields._items;
              v114 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v29->fields._version;
              if ( v113 )
              {
                v115 = v29->fields._size;
                v116 = (int64_t)mNewItemSp;
                if ( (unsigned int)v115 >= v113->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v29,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
                }
                else
                {
                  v117 = &v113->obj.klass + v115;
                  v29->fields._size = v115 + 1;
                  v117[4] = (Il2CppClass *)v116;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v117 + 4), v116, v107, v108, v109, v110, v111, v112);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                  v224 = v29->fields._items;
                  v225 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v29->fields._version;
                  if ( v224 )
                  {
                    v226 = v29->fields._size;
                    v227 = (int64_t)mNewItemSp;
                    if ( (unsigned int)v226 >= v224->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v29,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v228 = &v224->obj.klass + v226;
                      v29->fields._size = v226 + 1;
                      v228[4] = (Il2CppClass *)v227;
                      sub_1C21DDC((PartyOrganizationUtility_o *)(v228 + 4), v227, v218, v219, v220, v221, v222, v223);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                      v306 = v29->fields._items;
                      v307 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v29->fields._version;
                      if ( v306 )
                      {
                        v308 = v29->fields._size;
                        v309 = (int64_t)mNewItemSp;
                        if ( (unsigned int)v308 >= v306->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v29,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v307[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v310 = &v306->obj.klass + v308;
                          v29->fields._size = v308 + 1;
                          v310[4] = (Il2CppClass *)v309;
                          sub_1C21DDC(
                            (PartyOrganizationUtility_o *)(v310 + 4),
                            v309,
                            v300,
                            v301,
                            v302,
                            v303,
                            v304,
                            v305);
                        }
                        v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v162,
                          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                          if ( v162 )
                          {
                            v350 = v162->fields._items;
                            v351 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v162->fields._version;
                            if ( v350 )
                            {
                              v352 = v162->fields._size;
                              v353 = (int64_t)mNewItemSp;
                              if ( (unsigned int)v352 >= v350->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v162,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v351[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v354 = &v350->obj.klass + v352;
                                v162->fields._size = v352 + 1;
                                v354[4] = (Il2CppClass *)v353;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)(v354 + 4),
                                  v353,
                                  v344,
                                  v345,
                                  v346,
                                  v347,
                                  v348,
                                  v349);
                              }
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
                              if ( mNewItemSp )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                          mNewItemSp,
                                                                          0LL);
                                v298 = v162->fields._items;
                                v299 = Method_System_Collections_Generic_List_GameObject__Add__;
                                ++v162->fields._version;
                                if ( v298 )
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
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v124 = v29->fields._items;
          v125 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v124 )
            goto LABEL_324;
          v126 = v29->fields._size;
          v127 = (int64_t)mNewItemSp;
          if ( (unsigned int)v126 >= v124->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
          }
          else
          {
            v128 = &v124->obj.klass + v126;
            v29->fields._size = v126 + 1;
            v128[4] = (Il2CppClass *)v127;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v128 + 4), v127, v118, v119, v120, v121, v122, v123);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v235 = v29->fields._items;
          v236 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v235 )
            goto LABEL_324;
          v237 = v29->fields._size;
          v238 = (int64_t)mNewItemSp;
          if ( (unsigned int)v237 >= v235->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
          }
          else
          {
            v239 = &v235->obj.klass + v237;
            v29->fields._size = v237 + 1;
            v239[4] = (Il2CppClass *)v238;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v239 + 4), v238, v229, v230, v231, v232, v233, v234);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL);
          if ( !v162 )
            goto LABEL_324;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_324;
LABEL_245:
          v388 = v162->fields._size;
          max_length = v298->max_length;
          method = (const MethodInfo *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v135 = v29->fields._items;
          v136 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v135 )
            goto LABEL_324;
          v137 = v29->fields._size;
          v138 = (int64_t)mNewItemSp;
          if ( (unsigned int)v137 >= v135->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v139 = &v135->obj.klass + v137;
            v29->fields._size = v137 + 1;
            v139[4] = (Il2CppClass *)v138;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v139 + 4), v138, v129, v130, v131, v132, v133, v134);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v246 = v29->fields._items;
          v247 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v246 )
            goto LABEL_324;
          v248 = v29->fields._size;
          v249 = (int64_t)mNewItemSp;
          if ( (unsigned int)v248 >= v246->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
          }
          else
          {
            v250 = &v246->obj.klass + v248;
            v29->fields._size = v248 + 1;
            v250[4] = (Il2CppClass *)v249;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v250 + 4), v249, v240, v241, v242, v243, v244, v245);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v317 = v29->fields._items;
          v318 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v317 )
            goto LABEL_324;
          v319 = v29->fields._size;
          v320 = (int64_t)mNewItemSp;
          if ( (unsigned int)v319 >= v317->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
          }
          else
          {
            v321 = &v317->obj.klass + v319;
            v29->fields._size = v319 + 1;
            v321[4] = (Il2CppClass *)v320;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v321 + 4), v320, v311, v312, v313, v314, v315, v316);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v361 = v162->fields._items;
          v362 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v361 )
            goto LABEL_324;
          v363 = v162->fields._size;
          v364 = (int64_t)mNewItemSp;
          if ( (unsigned int)v363 >= v361->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v362[4] + 192LL) + 112LL));
          }
          else
          {
            v365 = &v361->obj.klass + v363;
            v162->fields._size = v363 + 1;
            v365[4] = (Il2CppClass *)v364;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v365 + 4), v364, v355, v356, v357, v358, v359, v360);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_324;
          goto LABEL_251;
        case 28:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_324;
          v146 = v29->fields._items;
          v147 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v146 )
            goto LABEL_324;
          v148 = v29->fields._size;
          v149 = (int64_t)mNewItemSp;
          if ( (unsigned int)v148 >= v146->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = &v146->obj.klass + v148;
            v29->fields._size = v148 + 1;
            v150[4] = (Il2CppClass *)v149;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v150 + 4), v149, v140, v141, v142, v143, v144, v145);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v257 = v29->fields._items;
          v258 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v257 )
            goto LABEL_324;
          v259 = v29->fields._size;
          v260 = (int64_t)mNewItemSp;
          if ( (unsigned int)v259 >= v257->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
          }
          else
          {
            v261 = &v257->obj.klass + v259;
            v29->fields._size = v259 + 1;
            v261[4] = (Il2CppClass *)v260;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v261 + 4), v260, v251, v252, v253, v254, v255, v256);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v328 = v29->fields._items;
          v329 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v328 )
            goto LABEL_324;
          v330 = v29->fields._size;
          v331 = (int64_t)mNewItemSp;
          if ( (unsigned int)v330 >= v328->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v329[4] + 192LL) + 112LL));
          }
          else
          {
            v332 = &v328->obj.klass + v330;
            v29->fields._size = v330 + 1;
            v332[4] = (Il2CppClass *)v331;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v332 + 4), v331, v322, v323, v324, v325, v326, v327);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v162 )
            goto LABEL_324;
          v372 = v162->fields._items;
          v373 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v372 )
            goto LABEL_324;
          v374 = v162->fields._size;
          v375 = (int64_t)mNewItemSp;
          if ( (unsigned int)v374 >= v372->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v373[4] + 192LL) + 112LL));
          }
          else
          {
            v376 = &v372->obj.klass + v374;
            v162->fields._size = v374 + 1;
            v376[4] = (Il2CppClass *)v375;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v376 + 4), v375, v366, v367, v368, v369, v370, v371);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_324;
LABEL_251:
          v388 = v162->fields._size;
          max_length = v298->max_length;
LABEL_252:
          if ( (unsigned int)v388 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)method,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
          }
          else
          {
            v390 = &v298->obj.klass + v388;
            v162->fields._size = v388 + 1;
            v390[4] = (Il2CppClass *)method;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v390 + 4), (int64_t)method, v292, v293, v294, v295, v296, v297);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_324;
        default:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v28 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v29 )
              goto LABEL_324;
            v47 = v29->fields._items;
            v48 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v47 )
              goto LABEL_324;
            v49 = v29->fields._size;
            v50 = (int64_t)mNewItemSp;
            if ( (unsigned int)v49 >= v47->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &v47->obj.klass + v49;
              v29->fields._size = v49 + 1;
              v51[4] = (Il2CppClass *)v50;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v51 + 4), v50, v41, v42, v43, v44, v45, v46);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v444 = v29->fields._items;
            v445 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v444 )
              goto LABEL_324;
            v446 = v29->fields._size;
            v447 = (int64_t)mNewItemSp;
            if ( (unsigned int)v446 >= v444->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v445[4] + 192LL) + 112LL));
            }
            else
            {
              v448 = &v444->obj.klass + v446;
              v29->fields._size = v446 + 1;
              v448[4] = (Il2CppClass *)v447;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v448 + 4), v447, v438, v439, v440, v441, v442, v443);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v455 = v29->fields._items;
            v456 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v455 )
              goto LABEL_324;
            v457 = v29->fields._size;
            v458 = (int64_t)mNewItemSp;
            if ( (unsigned int)v457 >= v455->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v456[4] + 192LL) + 112LL));
            }
            else
            {
              v459 = &v455->obj.klass + v457;
              v29->fields._size = v457 + 1;
              v459[4] = (Il2CppClass *)v458;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v459 + 4), v458, v449, v450, v451, v452, v453, v454);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v466 = v29->fields._items;
            v467 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v466 )
              goto LABEL_324;
            v468 = v29->fields._size;
            v469 = (int64_t)mNewItemSp;
            if ( (unsigned int)v468 >= v466->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v467[4] + 192LL) + 112LL));
            }
            else
            {
              v470 = &v466->obj.klass + v468;
              v29->fields._size = v468 + 1;
              v470[4] = (Il2CppClass *)v469;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v470 + 4), v469, v460, v461, v462, v463, v464, v465);
            }
            v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v162,
              (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v162 )
              goto LABEL_324;
            v477 = v162->fields._items;
            v478 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v477 )
              goto LABEL_324;
            v479 = v162->fields._size;
            v480 = (int64_t)mNewItemSp;
            if ( (unsigned int)v479 >= v477->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v478[4] + 192LL) + 112LL));
            }
            else
            {
              v481 = &v477->obj.klass + v479;
              v162->fields._size = v479 + 1;
              v481[4] = (Il2CppClass *)v480;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v481 + 4), v480, v471, v472, v473, v474, v475, v476);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v488 = v162->fields._items;
            v489 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v488 )
              goto LABEL_324;
            v490 = v162->fields._size;
            v491 = (int64_t)mNewItemSp;
            if ( (unsigned int)v490 >= v488->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v489[4] + 192LL) + 112LL));
            }
            else
            {
              v492 = &v488->obj.klass + v490;
              v162->fields._size = v490 + 1;
              v492[4] = (Il2CppClass *)v491;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v492 + 4), v491, v482, v483, v484, v485, v486, v487);
            }
            method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
            v499 = v162->fields._items;
            v500 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v499 )
              goto LABEL_324;
            v501 = v162->fields._size;
            if ( (unsigned int)v501 >= v499->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)method,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v500[4] + 192LL) + 112LL));
            }
            else
            {
              v502 = &v499->obj.klass + v501;
              v162->fields._size = v501 + 1;
              v502[4] = (Il2CppClass *)method;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v502 + 4), (int64_t)method, v493, v494, v495, v496, v497, v498);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_324;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v386 = v162->fields._items;
            v387 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v386 )
              goto LABEL_324;
            method = (const MethodInfo *)mNewItemSp;
LABEL_258:
            v391 = v162->fields._size;
            if ( (unsigned int)v391 >= v386->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)method,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v387[4] + 192LL) + 112LL));
            }
            else
            {
              v392 = &v386->obj.klass + v391;
              v162->fields._size = v391 + 1;
              v392[4] = (Il2CppClass *)method;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v392 + 4), (int64_t)method, v380, v381, v382, v383, v384, v385);
            }
          }
          else
          {
            v162 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v162,
              (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_324;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v29,
            (System_Collections_Generic_List_GameObject__o *)v162,
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
    v393 = this->fields.shopNotice;
    if ( !v393 )
      goto LABEL_324;
    if ( v393->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v394 = (ShopNoticeRemainTime_o *)sub_1C22084(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v394, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v394,
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&this->fields.shopNoticeRemainTime,
              (int64_t)v394,
              v395,
              v396,
              v397,
              v398,
              v399,
              v400),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v402 = this->fields.shopNotice;
          if ( v402 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v402->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1LL,
                                                      v401);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
              v406 = this->fields.shopNotice;
              if ( v406 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v406->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          v405);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v409 = this->fields.shopNotice;
                  if ( v409 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v409->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              v408);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v411 = this->fields.mPeriodLimitedTimeLb;
                        v412 = (ShopNoticeRemainTimeLabel_o *)sub_1C22084(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v412, v411, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v412;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int64_t)v412,
                          v413,
                          v414,
                          v415,
                          v416,
                          v417,
                          v418);
                      }
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v419 = this->fields.mMonthlyLimitedTimeLb;
                        v420 = (ShopNoticeRemainTimeLabel_o *)sub_1C22084(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v420, v419, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v420;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int64_t)v420,
                          v421,
                          v422,
                          v423,
                          v424,
                          v425,
                          v426);
                      }
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v427 = this->fields.mExchangeServantItemLb;
                        v428 = (ShopNoticeRemainTimeLabel_o *)sub_1C22084(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v428, v427, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v428;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int64_t)v428,
                          v429,
                          v430,
                          v431,
                          v432,
                          v433,
                          v434);
                      }
                      v435 = this->fields.shopNotice;
                      if ( v435 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          mNewItemSp[1].monitor = (void *)v435->fields._PeriodTimeLimit_k__BackingField;
                          ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                          v436 = this->fields.shopNotice;
                          if ( v436 )
                          {
                            mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                            if ( mNewItemSp )
                            {
                              mNewItemSp[1].monitor = (void *)v436->fields._MonthlyTimeLimit_k__BackingField;
                              ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                              v437 = this->fields.shopNotice;
                              if ( v437 )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                if ( mNewItemSp )
                                {
                                  mNewItemSp[1].monitor = (void *)v437->fields._ExchangeServantTimeLimit_k__BackingField;
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
      sub_1C22094(mNewItemSp, method);
    }
  }
}


void __fastcall MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  GachaMaster_o *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x20
  char v6; // w22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t klass; // w20
  const MethodInfo *v10; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v13; // x1
  UILabel_o *summonCampainNumLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+0h] [xbp-80h] BYREF
  int32_t maxNum; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF
  int32_t remainNum; // [xsp+48h] [xbp-38h] BYREF
  int v19; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4BDBC6F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UserGachaMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_6689/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/);
    sub_1C21E38(&StringLiteral_6690/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/);
    byte_4BDBC6F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  remainNum = 0;
  maxNum = 0;
  if ( this->fields.isOpen )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !Master_object )
      goto LABEL_26;
    ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                          Master_object,
                                                                          0LL);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
    v19 = 0;
    if ( !ValidGachaEntityList )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ValidGachaEntityList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v6 = 0;
    v17 = v15;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
      if ( !v7 )
        break;
      if ( !v17.fields._current )
        sub_1C22094(v7, v8);
      if ( LODWORD(v17.fields._current[3].klass) == 3 )
      {
        klass = (int32_t)v17.fields._current[1].klass;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(klass, &remainNum, &maxNum, 0LL) )
        {
          v6 = 1;
          v19 += remainNum;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    if ( (v6 & 1) != 0 )
    {
      Master_object = (GachaMaster_o *)this->fields.summonCampainObject;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        summonCampainLabel1 = this->fields.summonCampainLabel1;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6689/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v10);
        if ( summonCampainLabel1 )
        {
          UILabel__set_text(summonCampainLabel1, (System_String_o *)Master_object, 0LL);
          summonCampainLabel2 = this->fields.summonCampainLabel2;
          Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6690/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v13);
          if ( summonCampainLabel2 )
          {
            UILabel__set_text(summonCampainLabel2, (System_String_o *)Master_object, 0LL);
            summonCampainNumLabel = this->fields.summonCampainNumLabel;
            Master_object = (GachaMaster_o *)System_Int32__ToString((int32_t)&v19, 0LL);
            if ( summonCampainNumLabel )
            {
              UILabel__set_text(summonCampainNumLabel, (System_String_o *)Master_object, 0LL);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_1C22094(Master_object, v4);
    }
  }
}


void __fastcall MainMenuBarBase__SendSelectSignal(
        MainMenuBarBase_o *this,
        int32_t type,
        System_String_o *message,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  PlayMakerFSM_o *v23; // x0

  if ( (byte_4BDBC69 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_8677/*"MAIN_MENU_BAR_SELECT"*/);
    byte_4BDBC69 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) && !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectedKind,
      (int64_t)message,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this->fields.selectedObject = obj;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedObject, (int64_t)obj, v16, v17, v18, v19, v20, v21);
    v23 = this->fields.activeSceneFSM;
    if ( !v23 )
      sub_1C22094(0LL, v22);
    PlayMakerFSM__SendEvent(v23, (System_String_o *)StringLiteral_8677/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct PlayMakerFSM_o *myFSM; // x1
  Il2CppObject *ComponentInChildren_object__49965836; // x0
  UnityEngine_Component_o *v14; // x23
  UnityEngine_Transform_o *v15; // x24
  UnityEngine_GameObject_o *v16; // x24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  if ( (byte_4BDBC65 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBC65 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    ComponentInChildren_object__49965836 = UnityEngine_Component__GetComponentInChildren_object__49965836(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    ComponentInChildren_object__49965836 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v14 = (UnityEngine_Component_o *)ComponentInChildren_object__49965836;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v14 )
      goto LABEL_28;
    v15 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
    if ( !v15 )
      goto LABEL_28;
    UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)gameObject, 0LL);
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v16 )
      goto LABEL_28;
    UnityEngine_GameObject__set_layer(v16, (int32_t)gameObject, 0LL);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.activeSceneFSM, (int64_t)myFSM, v17, v18, v19, v20, v21, v22);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v23),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v24),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_28:
    sub_1C22094(gameObject, myFSM);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mAllBtnAct, (int64_t)act, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C22094(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v22 = 3;
  else
    v22 = v6;
  MainMenuBarButton__SetMode(partyBtn, v22, 0LL);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedKind, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.selectedObject = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedObject, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.fadeType = 1;
}


void __fastcall MainMenuBarBase__SetButtonKind(MainMenuBarBase_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.kind = kind;
}


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
    sub_1C22094(this, kind);
  if ( mDispBtnActList->max_length <= kind )
    sub_1C2209C(this, kind);
  v9 = &mDispBtnActList->obj.klass + kind;
  v9[4] = (Il2CppClass *)act;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 4), (int64_t)act, (int64_t)act, (int32_t)method, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetDispBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mDispBtnList; // x0
  int32_t v8; // w22

  if ( (byte_4BDBC80 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    byte_4BDBC80 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_10:
    sub_1C22094(mDispBtnList, is_enable);
  v8 = 0;
  while ( v8 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v8,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0LL);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( mDispBtnList )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mDispBtnList, kind == v8 && is_enable, 0LL);
          mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
          ++v8;
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
    sub_1C22094(0LL, v5);
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
  sub_1C21DDC(
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

  if ( (byte_4BDBC7F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4BDBC7F = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C22094(menuStateBtn, isEnable);
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

  if ( (byte_4BDBC72 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4BDBC72 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C22094(menuStateBtn, is_enable);
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

  if ( (byte_4BDBC75 & 1) == 0 )
  {
    sub_1C21E38(&MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo);
    byte_4BDBC75 = 1;
  }
  v5 = sub_1C22084(MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__108___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__108_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v14, v15, v16, v17, v18, v19);
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
  UnityEngine_GameObject_o *menuComp; // x0
  int v8; // s0
  int v9; // s2
  int v10; // s9
  int v11; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v13; // x2
  struct System_Collections_Hashtable_o *table; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Hashtable_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_Collections_Hashtable_o *v22; // x23
  struct System_Collections_Hashtable_o *v23; // x23
  struct System_Collections_Hashtable_o *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Hashtable_o *v28; // x23
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  float v33; // s10
  struct System_Collections_Hashtable_o *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct System_Collections_Hashtable_o *v38; // x23
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Collections_Hashtable_o *v42; // x23
  struct System_Collections_Hashtable_o *v43; // x23
  struct System_Collections_Hashtable_o *v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Hashtable_o *v48; // x21
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  int32_t v51; // w1
  int v52; // [xsp+0h] [xbp-60h] BYREF
  int v53; // [xsp+4h] [xbp-5Ch]
  int v54; // [xsp+8h] [xbp-58h]
  int v55; // [xsp+18h] [xbp-48h] BYREF
  char v56[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BDBC6A & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&Method_MainMenuBarBase_SwitchMenu__);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_22667/*"onMoveComplete"*/);
    sub_1C21E38(&StringLiteral_18326/*"closeMenuStateImg"*/);
    sub_1C21E38(&StringLiteral_19063/*"easeInQuad"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_22687/*"onstarttarget"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_22685/*"onstart"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&StringLiteral_22725/*"openMenuStateImg"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDBC6A = 1;
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
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)menuComp, 0LL);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    v10 = v8;
    v11 = v9;
    gameObject = UnityEngine_GameObject__get_gameObject(menuComp, 0LL);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v13);
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
        v56[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56, v15, v16, v17);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_21175/*"isLocal"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v18 = this->fields.table;
          v52 = v10;
          v54 = v11;
          v53 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v52, v19, v20, v21);
          if ( v18 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
              v18,
              StringLiteral_22984/*"position"*/,
              menuComp,
              v18->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_22685/*"onstart"*/,
                StringLiteral_22725/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v22 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v22 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
                  v22,
                  StringLiteral_22687/*"onstarttarget"*/,
                  menuComp,
                  v22->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_22680/*"oncomplete"*/,
                    StringLiteral_22667/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v23 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v23 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v23->klass->vtable._23_Add.method)(
                      v23,
                      StringLiteral_22682/*"oncompletetarget"*/,
                      menuComp,
                      v23->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_19078/*"easetype"*/,
                        StringLiteral_19063/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v24 = this->fields.table;
                      v55 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v25, v26, v27);
                      if ( v24 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
                          v24,
                          StringLiteral_24360/*"time"*/,
                          menuComp,
                          v24->klass->vtable._24_Clear.methodPtr);
                        v28 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        iTween__MoveTo_61653064(gameObject, v28, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v29);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v30);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v31);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v32);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v49 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v49 = (_QWORD *)sub_1C21E50(Method_MainMenuBarBase_SwitchMenu__);
                        v50 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v49, v49[4]);
                        if ( is_open )
                          v51 = 9;
                        else
                          v51 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v50, v51, 0, 0LL);
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
      sub_1C22094(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v33 = -420.0;
    else
      v33 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v34 = this->fields.table;
    v56[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56, v35, v36, v37);
    if ( !v34 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_21175/*"isLocal"*/,
      menuComp,
      v34->klass->vtable._24_Clear.methodPtr);
    v38 = this->fields.table;
    v52 = v10;
    v53 = LODWORD(v33);
    v54 = v11;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v52, v39, v40, v41);
    if ( !v38 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v38->klass->vtable._23_Add.method)(
      v38,
      StringLiteral_22984/*"position"*/,
      menuComp,
      v38->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22685/*"onstart"*/,
      StringLiteral_18326/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v42 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v42 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_22687/*"onstarttarget"*/,
      menuComp,
      v42->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22680/*"oncomplete"*/,
      StringLiteral_22667/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v43 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v43 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v43->klass->vtable._23_Add.method)(
      v43,
      StringLiteral_22682/*"oncompletetarget"*/,
      menuComp,
      v43->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_19078/*"easetype"*/,
      StringLiteral_19063/*"easeInQuad"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v44 = this->fields.table;
    v55 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v45, v46, v47);
    if ( !v44 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_24360/*"time"*/,
      menuComp,
      v44->klass->vtable._24_Clear.methodPtr);
    v48 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_61653064(gameObject, v48, 0LL);
    if ( is_play_se )
      goto LABEL_40;
  }
}


void __fastcall MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v4; // x1
  long double v5; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *UserData; // x0
  Il2CppObject *MasterData_object; // x20
  long double v10; // q0
  int m_CancellationTokenSource; // w20
  __int64 v12; // x0
  __int64 v13; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_4BDBC64 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDBC64 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C73D14(v5);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C73D14(v5);
    UserData = **(DataManager_o ***)(v7 + 184);
    if ( !UserData )
      goto LABEL_41;
    MasterData_object = DataManager__GetMasterData_object_(
                          UserData,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
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
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C73D14(v10);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C73D14(v10);
    UserData = **(DataManager_o ***)(v13 + 184);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
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
    UserData = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_1C22094(UserData, v4);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__98_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  MainMenuBarBase_o *v5; // x19
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4BDBC84 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    this = (MainMenuBarBase_o *)sub_1C21E38(&StringLiteral_20532/*"icon_servant_exchange_available_{0}"*/);
    byte_4BDBC84 = 1;
  }
  shopNotice = v5->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v5->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_20532/*"icon_servant_exchange_available_{0}"*/, v8, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v9, 0LL) )
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
    sub_1C22094(this, method);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4BDBC71 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20725/*"img_menu_menu"*/);
    byte_4BDBC71 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20725/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1C22094(menuStateBtn, method);
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
    sub_1C22094(0LL, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v3);
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
      sub_1C22094(mNewItemSp, v5);
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

  if ( (byte_4BDBC70 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20724/*"img_menu_close"*/);
    byte_4BDBC70 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20724/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1C22094(menuStateBtn, method);
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
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  TitleInfoControl_o *v6; // x0
  ExUITexture_c *klass; // x8
  ExUITexture_c *v8; // x8
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4BDBD3E & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDBD3E = 1;
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
  if ( !byte_4BD9ADC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ADC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v6->fields.mEventBgTexture->klass;
  if ( !klass )
    goto LABEL_29;
  v6 = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !v6 )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable(v6, 0, 0LL);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = v6->fields.mEventBgTexture->klass;
  if ( !v8
    || (v6 = *(TitleInfoControl_o **)&v8->_2.static_fields_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)v6, 0, 0LL), !_4__this) )
  {
LABEL_29:
    sub_1C22094(v6, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v9 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__,
    0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v10, v12, v13, v14, v15, v16, v17);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__108_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDBD3C & 1) == 0 )
  {
    sub_1C21E38(&MainMenuBarBase___c_TypeInfo);
    byte_4BDBD3C = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MainMenuBarBase___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__107_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  ScrTerminalListTop_o *v3; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_c *v5; // x8

  if ( (byte_4BDBD3D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDBD3D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9ADC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ADC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.boardGameTokenAction->klass;
  if ( !klass )
    goto LABEL_24;
  v3 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !v3 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v3, 0LL);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = v3->fields.boardGameTokenAction->klass;
  if ( !v5 || (v3 = *(ScrTerminalListTop_o **)&v5->_2.static_fields_size) == 0LL )
LABEL_24:
    sub_1C22094(v3, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v3, 0, 0LL);
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
    sub_1C22094(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}