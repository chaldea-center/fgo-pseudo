void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v4; // x8
  struct MainMenuBarBase_StaticFields *v5; // x9

  if ( (byte_4B15948 & 1) == 0 )
  {
    sub_1BCA7E0(&MainMenuBarBase_TypeInfo, v1, v2);
    byte_4B15948 = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v4 = MainMenuBarBase_TypeInfo;
  v5 = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&v5->NOTICE_NUMBER_POS_DISP_BTN.fields.x = 0x42180000422C0000LL;
  v5->NOTICE_NUMBER_POS_DISP_BTN.fields.z = 0.0;
  v4->static_fields->FOLDER_WAR_ID = 10000;
}


void __fastcall MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
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
  System_Collections_Hashtable_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Action_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B15947 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action___TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo, v9, v10);
    byte_4B15947 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MainMenuBarButton__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mDispBtnList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v21 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v18, v19, v20);
  System_Collections_Hashtable___ctor_62980980(v21, 0LL);
  this->fields.table = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (struct System_Action_array *)sub_1BCA888(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mDispBtnActList, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *terminalBtn; // x1
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int64_t v25; // x2
  int v26; // w8
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x8
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  __int64 v101; // x1
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  __int64 v103; // x1
  Il2CppObject *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v105; // x20
  UnityEngine_GameObject_o *v106; // x0
  __int64 v107; // x1
  MainMenuBarBase_c *v108; // x0
  Il2CppObject *Component_object; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v117; // x1
  Il2CppObject *v118; // x20
  UnityEngine_GameObject_o *v119; // x20
  UnityEngine_GameObject_o *v120; // x0
  __int64 v121; // x1
  MainMenuBarBase_c *v122; // x0
  Il2CppObject *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  __int64 v131; // x1
  Il2CppObject *v132; // x20
  UnityEngine_GameObject_o *v133; // x20
  UnityEngine_GameObject_o *v134; // x0
  __int64 v135; // x1
  MainMenuBarBase_c *v136; // x0
  Il2CppObject *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct ShopNotice_o *ShopNotice; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  __int64 v151; // x1
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  struct UISprite_o *v167; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v169; // x1

  if ( (byte_4B15928 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__, v6, v7);
    sub_1BCA7E0(&MainMenuBarBase_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&ShopTopListViewManager_TypeInfo, v14, v15);
    byte_4B15928 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_109;
  v25 = *((unsigned int *)mDispBtnList + 6);
  v26 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v26;
  if ( (int)v25 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v25, 0LL);
    mDispBtnList = this->fields.mDispBtnList;
    if ( !mDispBtnList )
      goto LABEL_109;
  }
  terminalBtn = (Il2CppObject *)this->fields.terminalBtn;
  v27 = *((_QWORD *)mDispBtnList + 2);
  v28 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v27 )
    goto LABEL_109;
  v29 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = v27 + 8 * v29;
    *((_DWORD *)mDispBtnList + 6) = v29 + 1;
    *(_QWORD *)(v30 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)terminalBtn, v25, v18, v19, v20, v21, v22);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.partyBtn;
  v37 = *((_QWORD *)mDispBtnList + 2);
  v38 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v37 )
    goto LABEL_109;
  v39 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = v37 + 8 * v39;
    *((_DWORD *)mDispBtnList + 6) = v39 + 1;
    *(_QWORD *)(v40 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)terminalBtn, v31, v32, v33, v34, v35, v36);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.summonBtn;
  v47 = *((_QWORD *)mDispBtnList + 2);
  v48 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v47 )
    goto LABEL_109;
  v49 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = v47 + 8 * v49;
    *((_DWORD *)mDispBtnList + 6) = v49 + 1;
    *(_QWORD *)(v50 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)terminalBtn, v41, v42, v43, v44, v45, v46);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.combineBtn;
  v57 = *((_QWORD *)mDispBtnList + 2);
  v58 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v57 )
    goto LABEL_109;
  v59 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = v57 + 8 * v59;
    *((_DWORD *)mDispBtnList + 6) = v59 + 1;
    *(_QWORD *)(v60 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 32), (int64_t)terminalBtn, v51, v52, v53, v54, v55, v56);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.shopBtn;
  v67 = *((_QWORD *)mDispBtnList + 2);
  v68 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v67 )
    goto LABEL_109;
  v69 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = v67 + 8 * v69;
    *((_DWORD *)mDispBtnList + 6) = v69 + 1;
    *(_QWORD *)(v70 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 32), (int64_t)terminalBtn, v61, v62, v63, v64, v65, v66);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.friendBtn;
  v77 = *((_QWORD *)mDispBtnList + 2);
  v78 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v77 )
    goto LABEL_109;
  v79 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v80 = v77 + 8 * v79;
    *((_DWORD *)mDispBtnList + 6) = v79 + 1;
    *(_QWORD *)(v80 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 32), (int64_t)terminalBtn, v71, v72, v73, v74, v75, v76);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.myroomBtn;
  v87 = *((_QWORD *)mDispBtnList + 2);
  v88 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v87 )
    goto LABEL_109;
  v89 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
  }
  else
  {
    v90 = v87 + 8 * v89;
    *((_DWORD *)mDispBtnList + 6) = v89 + 1;
    *(_QWORD *)(v90 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 32), (int64_t)terminalBtn, v81, v82, v83, v84, v85, v86);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v97 = *((_QWORD *)mDispBtnList + 2);
  v98 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v97 )
    goto LABEL_109;
  v99 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v100 = v97 + 8 * v99;
    *((_DWORD *)mDispBtnList + 6) = v99 + 1;
    *(_QWORD *)(v100 + 32) = terminalBtn;
    sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 32), (int64_t)terminalBtn, v91, v92, v93, v94, v95, v96);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v101);
  if ( UnityEngine_Object__op_Equality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     mNoticeNumberPrefab,
                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_109;
    v105 = (UnityEngine_GameObject_o *)mDispBtnList;
    v106 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(v105, v106, 0LL);
    v108 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v107);
      v108 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v105, v108->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v105 )
      goto LABEL_109;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v105,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mMenuNoticeNumber,
      (int64_t)Component_object,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    mDispBtnList = this->fields.mMenuNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v118 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v117);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v118,
                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_109;
    v119 = (UnityEngine_GameObject_o *)mDispBtnList;
    v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(v119, v120, 0LL);
    v122 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v121);
      v122 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v119, v122->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v119 )
      goto LABEL_109;
    v123 = UnityEngine_GameObject__GetComponent_object_(
             v119,
             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v123;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mSummonNoticeNumber,
      (int64_t)v123,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
    mDispBtnList = this->fields.mSummonNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v117);
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    v132 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v131);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v132,
                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_109;
    v133 = (UnityEngine_GameObject_o *)mDispBtnList;
    v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(v133, v134, 0LL);
    v136 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v135);
      v136 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v133, v136->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v133 )
      goto LABEL_109;
    v137 = UnityEngine_GameObject__GetComponent_object_(
             v133,
             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v137;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mFriendNoticeNumber,
      (int64_t)v137,
      v138,
      v139,
      v140,
      v141,
      v142,
      v143);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo, v131);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.shopNotice,
    (int64_t)ShopNotice,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v151);
  mDispBtnList = (void *)UnityEngine_Object__op_Equality(mExchangeServantItemDefaultAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)mDispBtnList & 1) != 0 )
  {
    mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
    if ( mExchangeServantItemSp )
    {
      mAtlas = mExchangeServantItemSp->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (int64_t)mAtlas,
        v153,
        v154,
        v155,
        v156,
        v157,
        v158);
      v167 = this->fields.mExchangeServantItemSp;
      if ( v167 )
      {
        mSpriteName = v167->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int64_t)mSpriteName,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166);
        goto LABEL_107;
      }
    }
LABEL_109:
    sub_1BCAA3C(mDispBtnList, terminalBtn);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v169);
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
    sub_1BCAA3C(backCloseSprite, isOpen);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MainMenuBarButton_o *Instance; // x0
  __int64 v11; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v13; // x20
  MyRoomStateMaterial_o *klass; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v16; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v19; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15931 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, method, v2);
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    byte_4B15931 = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v11 = *(_QWORD *)&Instance->fields.mode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
    goto LABEL_27;
  if ( !v11 )
    goto LABEL_27;
  methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v11 + 304LL) < (unsigned int)methodPtr_low
    || *(MyRoomRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v11 + 200LL) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_27;
  }
  v13 = *(UnityEngine_Object_o **)(v11 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Instance = (MainMenuBarButton_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !v13 )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)v13, 0LL) == 1 )
    goto LABEL_27;
  klass = (MyRoomStateMaterial_o *)v13[37].klass;
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
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v16) )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)System_Collections_Generic_List_object___get_Item(
                                      mSelectInfos,
                                      0,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
  if ( !Instance )
    goto LABEL_30;
  if ( LODWORD(Instance[1].klass) != questId[1] )
  {
LABEL_27:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v19 = 2;
      goto LABEL_29;
    }
LABEL_30:
    sub_1BCAA3C(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_30;
  v19 = 3;
LABEL_29:
  MainMenuBarButton__SetMode(Instance, v19, 0LL);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x8
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v6; // w1

  if ( (byte_4B15930 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B15930 = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1BCAA3C(terminalBtn, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12FA3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12FA3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_16;
  if ( v4->static_fields->_DispState_k__BackingField != 1 )
  {
LABEL_14:
    v6 = 2;
    goto LABEL_15;
  }
  v6 = 3;
LABEL_15:
  MainMenuBarButton__SetMode(terminalBtn, v6, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  MoveObject_o *gameObject; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  float mFrameInPosY; // s14
  float v27; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  float v36; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v40; // x21
  float v41; // s12
  float v42; // s13
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x23
  float v51; // s3
  float v52; // s0
  float v53; // s5
  float v54; // s2
  float v55; // s4
  float v56; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15946 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, is_framein, is_force);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, v11, v12);
    sub_1BCA7E0(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, v13, v14);
    sub_1BCA7E0(&MainMenuBarBase___c__DisplayClass125_0_TypeInfo, v15, v16);
    byte_4B15946 = 1;
  }
  v17 = sub_1BCAA2C(MainMenuBarBase___c__DisplayClass125_0_TypeInfo, is_framein, is_force, method);
  MainMenuBarBase___c__DisplayClass125_0___ctor((MainMenuBarBase___c__DisplayClass125_0_o *)v17, 0LL);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v17 )
    goto LABEL_29;
  *(_QWORD *)(v17 + 16) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)gameObject, v20, v21, v22, v23, v24, v25);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v27 = this->fields.mFrameInPosY;
  else
    v27 = -90.0;
  *(float *)(v17 + 32) = v27;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v17 + 16),
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v17 + 24) = Component_object;
  v29 = (MoveObject_o **)(v17 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)Component_object, v30, v31, v32, v33, v34, v35);
  if ( is_force
    || (v36 = *(float *)(v17 + 32),
        v36 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), 0LL)) )
  {
    gameObject = *v29;
    if ( *v29 )
    {
      MoveObject__Stop(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), *(float *)(v17 + 32), 0LL);
      return;
    }
LABEL_29:
    sub_1BCAA3C(gameObject, v19);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v58 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  v40 = *(MoveObject_o **)(v17 + 24);
  v41 = v58.fields.x;
  v42 = v58.fields.z;
  v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
  System_Action___ctor(v46, (Il2CppObject *)v17, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, 0LL);
  v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)v17, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, 0LL);
  if ( !v40 )
    goto LABEL_29;
  if ( is_framein )
    v51 = x;
  else
    v51 = v41;
  if ( is_framein )
    v52 = v41;
  else
    v52 = x;
  if ( is_framein )
    v53 = z;
  else
    v53 = v42;
  if ( is_framein )
    v54 = v42;
  else
    v54 = z;
  v55 = v27;
  v56 = -90.0;
  if ( !is_framein )
    v56 = mFrameInPosY;
  MoveObject__Play(
    v40,
    *(UnityEngine_Vector3_o *)&v52,
    *(UnityEngine_Vector3_o *)&v51,
    IntpTime_AutoResume,
    v46,
    v50,
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v21; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_40284152; // x22
  __int64 v23; // x1
  bool IsClearAllMainScenario; // w23
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  __int64 v27; // x1
  int parentWarId; // w21
  QuestScriptEntity_o *v29; // x20
  MainMenuBarBase_c *v30; // x0

  if ( (byte_4B15943 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestScriptMaster___, warId, questId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v8, v9);
    sub_1BCA7E0(&MainMenuBarBase_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v16, v17);
    byte_4B15943 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v21 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_26;
  MovedEventScriptList_40284152 = QuestScriptMaster__GetMovedEventScriptList_40284152(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_26;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v21 )
    goto LABEL_26;
  if ( IsClearAllMainScenario )
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetLatestMainScenarioLastQuest(
                                    v21,
                                    (int64_t)Instance,
                                    MovedEventScriptList_40284152,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(
                                    v21,
                                    (int64_t)Instance,
                                    MovedEventScriptList_40284152,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0LL )
  {
LABEL_26:
    sub_1BCAA3C(Instance, v19);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0LL);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v29 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v30 = MainMenuBarBase_TypeInfo;
      if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v27);
        v30 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v30->static_fields->FOLDER_WAR_ID )
        *warId = v29->fields.parentWarId;
    }
  }
  LOBYTE(LatestMainScenarioLastQuest) = 1;
  return (char)LatestMainScenarioLastQuest;
}


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ScrTerminalListTop_o *MyFsmP; // x0
  QuestRewardTokenAction_c *klass; // x8
  __int64 v7; // x2
  QuestRewardTokenAction_c *v8; // x8
  __int64 v9; // x8

  if ( (byte_4B1593B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12351/*"SPOT SELECT WAIT"*/, v3, v4);
    byte_4B1593B = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
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
  if ( (System_String__IndexOf_62432796((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12351/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v7);
    byte_4B10F83 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = MyFsmP->fields.boardGameTokenAction->klass;
  if ( !v8
    || (v9 = *(_QWORD *)&v8->_2.thread_static_fields_offset) == 0
    || (MyFsmP = *(ScrTerminalListTop_o **)(v9 + 544)) == 0LL )
  {
LABEL_26:
    sub_1BCAA3C(MyFsmP, method);
  }
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_4B1593E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8620/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, method, v2);
    byte_4B1593E = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1BCAA3C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v6);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8620/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v7);
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
  if ( (byte_4B15938 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1BCA7E0(&Method_MainMenuBarBase_OnClickCommon__, *(_QWORD *)&kind, isEnabled);
    byte_4B15938 = 1;
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
          sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 4), 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.mAllBtnAct, 0LL, v16, v17, v18, v19, v20, v21);
          v22 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_1BCA7F8(Method_MainMenuBarBase_OnClickCommon__);
          v23 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1BCAA44(this, *(_QWORD *)&kind);
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&kind);
  }
  v22 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BCA7F8(Method_MainMenuBarBase_OnClickCommon__);
  v23 = 2;
LABEL_14:
  v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, v23, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_4B1593C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8624/*"MAIN_MENU_BAR_SELECT_PARTY"*/, method, v2);
    byte_4B1593C = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1BCAA3C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v6);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8624/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v7);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_4B15940 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8621/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, method, v2);
    byte_4B15940 = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1BCAA3C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v6);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8621/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v7);
}


void __fastcall MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MainMenuBarButton_o *latestScenarioBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v10; // x3
  MainMenuBarBase_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  const MethodInfo *v16; // x4
  MyRoomRootComponent_c *v17; // x0
  int32_t v18; // w21
  int32_t v19; // w22
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x23
  SceneJumpInfo_o *v21; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15942 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8622/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, v6, v7);
    byte_4B15942 = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1BCAA3C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v10);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v11, &questId[1], questId, v12) )
    {
      v17 = MyRoomRootComponent_TypeInfo;
      if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo, v13);
        v17 = MyRoomRootComponent_TypeInfo;
      }
      v19 = questId[0];
      v18 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v17->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v21 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v13, v14, v15);
      SceneJumpInfo___ctor_39380944(v21, MYROOM_STATE_NEW_MATERIAL, v18, v19, 0LL);
    }
    else
    {
      v21 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8622/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v21, v16);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_4B15941 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8622/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, method, v2);
    byte_4B15941 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1BCAA3C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v6);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8622/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v7);
}


void __fastcall MainMenuBarBase__OnClickOutSide(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MainMenuBarBase__SwitchMenu(this, 0, 1, v2);
}


void __fastcall MainMenuBarBase__OnClickShop(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarButton_o *shopBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_4B1593F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8625/*"MAIN_MENU_BAR_SELECT_SHOP"*/, method, v2);
    byte_4B1593F = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1BCAA3C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v6);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8625/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v7);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_4B1593D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8626/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, method, v2);
    byte_4B1593D = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1BCAA3C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v6);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8626/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v7);
}


void __fastcall MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  MainMenuBarButton_o *terminalBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  __int64 v24; // x2
  TerminalSceneComponent_c *v25; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v27; // x2
  const MethodInfo *v28; // x4
  System_Threading_CancellationTokenSource_c *klass; // x8
  UnityEngine_Object_o *v30; // x20
  TerminalPramsManager_c *v31; // x0
  System_Threading_CancellationTokenSource_c *v32; // x8
  System_String_o *v33; // x20
  System_Threading_CancellationTokenSource_c *v34; // x8
  TerminalPramsManager_c *v35; // x0
  System_Threading_CancellationTokenSource_c *v36; // x8
  __int64 v37; // x2
  TerminalSceneComponent_c *v38; // x0
  TerminalPramsManager_c *v39; // x0
  const MethodInfo *v40; // x2
  __int64 v41; // x3
  MainMenuBarBase___c_c *v42; // x0
  System_Action_o *_9__107_0; // x20
  Il2CppObject *v44; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_IEnumerator_o *v52; // x1
  System_Threading_CancellationTokenSource_c *v53; // x8
  const MethodInfo *v54; // x3
  __int64 v55; // x2
  TerminalPramsManager_c *v56; // x0
  System_Threading_CancellationTokenSource_c *v57; // x8

  if ( (byte_4B15939 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, v10, v11);
    sub_1BCA7E0(&MainMenuBarBase___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_8627/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12351/*"SPOT SELECT WAIT"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3433/*"CAPTER WAIT"*/, v18, v19);
    byte_4B15939 = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_123;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v22);
  if ( IsEnabled )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v23, v24);
      byte_4B10F83 = 1;
    }
    v25 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
      v25 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v25->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
      goto LABEL_126;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v27);
      byte_4B10F83 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !klass )
      goto LABEL_123;
    v30 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
LABEL_126:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_4B1336A )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v27);
        byte_4B1336A = 1;
      }
      v39 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4B11139 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v27);
        v39 = TerminalPramsManager_TypeInfo;
        byte_4B11139 = 1;
      }
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39, method);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_4B1338F )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v27);
        v39 = TerminalPramsManager_TypeInfo;
        byte_4B1338F = 1;
      }
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39, method);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_93;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_127;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_4B12FA3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v27);
      byte_4B12FA3 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v31 = TerminalPramsManager_TypeInfo;
    }
    if ( v31->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_127;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v27);
      byte_4B10F83 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v32 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v32 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v32->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    v33 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_62432796((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12351/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_62432796(v33, (System_String_o *)StringLiteral_3433/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v27);
      byte_4B10F83 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v34 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v34 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v34->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0LL) )
    {
LABEL_127:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_4B1336A )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v27);
        byte_4B1336A = 1;
      }
      v35 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v35 = TerminalPramsManager_TypeInfo;
      }
      v35->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4B11139 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v27);
        v35 = TerminalPramsManager_TypeInfo;
        byte_4B11139 = 1;
      }
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35, method);
        v35 = TerminalPramsManager_TypeInfo;
      }
      v35->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v27);
        byte_4B10F83 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v36 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( v36 )
      {
        terminalBtn = *(MainMenuBarButton_o **)&v36->_2.static_fields_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v37);
            byte_4B10F83 = 1;
          }
          v38 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
            v38 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v38->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8627/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v28);
            return;
          }
        }
      }
LABEL_123:
      sub_1BCAA3C(terminalBtn, method);
    }
    if ( (System_String__IndexOf_62432796(v33, (System_String_o *)StringLiteral_3433/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v40);
        byte_4B10F83 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v53 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v53 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v53->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v54);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_4B137F7 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v55);
        byte_4B137F7 = 1;
      }
      v56 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v56 = TerminalPramsManager_TypeInfo;
      }
      v56->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v55);
        byte_4B10F83 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v57 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v57 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v57->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0LL);
    }
    else
    {
      v42 = MainMenuBarBase___c_TypeInfo;
      if ( !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo, method);
        v42 = MainMenuBarBase___c_TypeInfo;
      }
      _9__107_0 = v42->static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42, method);
          v42 = MainMenuBarBase___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__107_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v40, v41);
        System_Action___ctor(_9__107_0, v44, Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, 0LL);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__107_0 = _9__107_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
          (int64_t)_9__107_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      v52 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__107_0, v40);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v52, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mMenuBtnAct, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1592C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B1592C = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v8; // x0

  if ( (byte_4B1592D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8623/*"MAIN_MENU_BAR_SELECT_NONE"*/, v4, v5);
    byte_4B1592D = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) )
  {
    selectedKind = this->fields.selectedKind;
    v8 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v8 )
LABEL_12:
        sub_1BCAA3C(v8, selectedKind);
    }
    else
    {
      if ( !v8 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8623/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v8, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1592B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B1592B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B11139 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ShopNotice_o *ShopNotice; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4B15933 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopTopListViewManager_TypeInfo, method, v2);
    byte_4B15933 = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo, method);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.shopNotice, (int64_t)ShopNotice, v5, v6, v7, v8, v9, v10);
  MainMenuBarBase__ResetShopNoticeDraw(this, v11);
}


void __fastcall MainMenuBarBase__ResetShopNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Component_o *mNewItemSp; // x0
  struct ShopNotice_o *shopNotice; // x8
  struct ShopNotice_o *v24; // x8
  struct ShopNotice_o *v25; // x8
  struct ShopNotice_o *v26; // x8
  struct ShopNotice_o *v27; // x8
  __int64 v28; // x2
  __int64 v29; // x3
  struct ShopNotice_o *v30; // x8
  System_Action_o *v31; // x20
  __int64 v32; // x1
  struct ShopNotice_o *v33; // x8
  struct ShopNotice_o *v34; // x8
  struct ShopNotice_o *v35; // x8
  struct ShopNotice_o *v36; // x8
  struct ShopNotice_o *v37; // x8
  struct ShopNotice_o *v38; // x8
  __int64 v39; // x2
  __int64 v40; // x3
  struct ShopNotice_o *v41; // x8
  unsigned int LimitedType_k__BackingField; // w8
  struct ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x2
  __int64 v52; // x3
  struct ShopNotice_o *v53; // x8
  int32_t v54; // w23
  System_Collections_Generic_List_object__o *v55; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  int64_t v65; // x1
  Il2CppClass **v66; // x0
  __int64 v67; // x2
  __int64 v68; // x3
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  int64_t v78; // x1
  Il2CppClass **v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  int64_t v89; // x1
  Il2CppClass **v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  int64_t v100; // x1
  Il2CppClass **v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  int64_t v111; // x1
  Il2CppClass **v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  int64_t v122; // x1
  Il2CppClass **v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  int64_t v133; // x1
  Il2CppClass **v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  int64_t v144; // x1
  Il2CppClass **v145; // x0
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  struct System_Object_array *v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  int64_t v155; // x1
  Il2CppClass **v156; // x0
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  int64_t v166; // x1
  Il2CppClass **v167; // x0
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  struct System_Object_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  int64_t v177; // x1
  Il2CppClass **v178; // x0
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  int64_t v188; // x1
  Il2CppClass **v189; // x0
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x3
  System_Collections_Generic_List_object__o *v193; // x22
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
  __int64 v205; // x1
  __int64 v206; // x2
  __int64 v207; // x3
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  int64_t v217; // x1
  Il2CppClass **v218; // x0
  __int64 v219; // x1
  __int64 v220; // x2
  __int64 v221; // x3
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  struct System_Object_array *v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  int64_t v231; // x1
  Il2CppClass **v232; // x0
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  struct System_Object_array *v239; // x8
  _QWORD *v240; // x9
  __int64 v241; // x10
  int64_t v242; // x1
  Il2CppClass **v243; // x0
  __int64 v244; // x1
  __int64 v245; // x2
  __int64 v246; // x3
  int64_t v247; // x2
  int32_t v248; // w3
  System_String_o *v249; // x4
  BattleSetupInfo_o *v250; // x5
  FollowerInfo_o *v251; // x6
  PartyListViewItem_o *v252; // x7
  struct System_Object_array *v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  int64_t v256; // x1
  Il2CppClass **v257; // x0
  __int64 v258; // x1
  __int64 v259; // x2
  __int64 v260; // x3
  int64_t v261; // x2
  int32_t v262; // w3
  System_String_o *v263; // x4
  BattleSetupInfo_o *v264; // x5
  FollowerInfo_o *v265; // x6
  PartyListViewItem_o *v266; // x7
  struct System_Object_array *v267; // x8
  _QWORD *v268; // x9
  __int64 v269; // x10
  int64_t v270; // x1
  Il2CppClass **v271; // x0
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  struct System_Object_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  int64_t v281; // x1
  Il2CppClass **v282; // x0
  __int64 v283; // x1
  __int64 v284; // x2
  __int64 v285; // x3
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  struct System_Object_array *v292; // x8
  _QWORD *v293; // x9
  __int64 v294; // x10
  int64_t v295; // x1
  Il2CppClass **v296; // x0
  int64_t v297; // x2
  int32_t v298; // w3
  System_String_o *v299; // x4
  BattleSetupInfo_o *v300; // x5
  FollowerInfo_o *v301; // x6
  PartyListViewItem_o *v302; // x7
  struct System_Object_array *v303; // x8
  _QWORD *v304; // x9
  __int64 v305; // x10
  int64_t v306; // x1
  Il2CppClass **v307; // x0
  int64_t v308; // x2
  int32_t v309; // w3
  System_String_o *v310; // x4
  BattleSetupInfo_o *v311; // x5
  FollowerInfo_o *v312; // x6
  PartyListViewItem_o *v313; // x7
  struct System_Object_array *v314; // x8
  _QWORD *v315; // x9
  __int64 v316; // x10
  int64_t v317; // x1
  Il2CppClass **v318; // x0
  int64_t v319; // x2
  int32_t v320; // w3
  System_String_o *v321; // x4
  BattleSetupInfo_o *v322; // x5
  FollowerInfo_o *v323; // x6
  PartyListViewItem_o *v324; // x7
  struct System_Object_array *v325; // x8
  _QWORD *v326; // x9
  int64_t v327; // x2
  int32_t v328; // w3
  System_String_o *v329; // x4
  BattleSetupInfo_o *v330; // x5
  FollowerInfo_o *v331; // x6
  PartyListViewItem_o *v332; // x7
  struct System_Object_array *v333; // x8
  _QWORD *v334; // x9
  __int64 v335; // x10
  int64_t v336; // x1
  Il2CppClass **v337; // x0
  __int64 v338; // x1
  __int64 v339; // x2
  __int64 v340; // x3
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  struct System_Object_array *v347; // x8
  _QWORD *v348; // x9
  int64_t v349; // x2
  int32_t v350; // w3
  System_String_o *v351; // x4
  BattleSetupInfo_o *v352; // x5
  FollowerInfo_o *v353; // x6
  PartyListViewItem_o *v354; // x7
  struct System_Object_array *v355; // x8
  _QWORD *v356; // x9
  __int64 v357; // x10
  int64_t v358; // x1
  Il2CppClass **v359; // x0
  __int64 v360; // x1
  __int64 v361; // x2
  __int64 v362; // x3
  int64_t v363; // x2
  int32_t v364; // w3
  System_String_o *v365; // x4
  BattleSetupInfo_o *v366; // x5
  FollowerInfo_o *v367; // x6
  PartyListViewItem_o *v368; // x7
  struct System_Object_array *v369; // x8
  _QWORD *v370; // x9
  __int64 v371; // x10
  int64_t v372; // x1
  Il2CppClass **v373; // x0
  __int64 v374; // x1
  __int64 v375; // x2
  __int64 v376; // x3
  int64_t v377; // x2
  int32_t v378; // w3
  System_String_o *v379; // x4
  BattleSetupInfo_o *v380; // x5
  FollowerInfo_o *v381; // x6
  PartyListViewItem_o *v382; // x7
  struct System_Object_array *v383; // x8
  _QWORD *v384; // x9
  __int64 v385; // x10
  int64_t v386; // x1
  Il2CppClass **v387; // x0
  __int64 v388; // x1
  __int64 v389; // x2
  __int64 v390; // x3
  int64_t v391; // x2
  int32_t v392; // w3
  System_String_o *v393; // x4
  BattleSetupInfo_o *v394; // x5
  FollowerInfo_o *v395; // x6
  PartyListViewItem_o *v396; // x7
  struct System_Object_array *v397; // x8
  _QWORD *v398; // x9
  __int64 v399; // x10
  int64_t v400; // x1
  Il2CppClass **v401; // x0
  int64_t v402; // x2
  int32_t v403; // w3
  System_String_o *v404; // x4
  BattleSetupInfo_o *v405; // x5
  FollowerInfo_o *v406; // x6
  PartyListViewItem_o *v407; // x7
  struct System_Object_array *v408; // x8
  _QWORD *v409; // x9
  __int64 v410; // x10
  int64_t v411; // x1
  Il2CppClass **v412; // x0
  int64_t v413; // x2
  int32_t v414; // w3
  System_String_o *v415; // x4
  BattleSetupInfo_o *v416; // x5
  FollowerInfo_o *v417; // x6
  PartyListViewItem_o *v418; // x7
  struct System_Object_array *v419; // x8
  _QWORD *v420; // x9
  __int64 v421; // x10
  int64_t v422; // x1
  Il2CppClass **v423; // x0
  int64_t v424; // x2
  int32_t v425; // w3
  System_String_o *v426; // x4
  BattleSetupInfo_o *v427; // x5
  FollowerInfo_o *v428; // x6
  PartyListViewItem_o *v429; // x7
  struct System_Object_array *v430; // x8
  _QWORD *v431; // x9
  __int64 v432; // x10
  int64_t v433; // x1
  Il2CppClass **v434; // x0
  __int64 v435; // x10
  int64_t v436; // x1
  Il2CppClass **v437; // x0
  int64_t v438; // x2
  int32_t v439; // w3
  System_String_o *v440; // x4
  BattleSetupInfo_o *v441; // x5
  FollowerInfo_o *v442; // x6
  PartyListViewItem_o *v443; // x7
  struct System_Object_array *v444; // x8
  _QWORD *v445; // x9
  __int64 v446; // x10
  unsigned int max_length; // w11
  Il2CppClass **v448; // x0
  __int64 v449; // x10
  Il2CppClass **v450; // x0
  struct ShopNotice_o *v451; // x8
  ShopNoticeRemainTime_o *v452; // x21
  int64_t v453; // x2
  int32_t v454; // w3
  System_String_o *v455; // x4
  BattleSetupInfo_o *v456; // x5
  FollowerInfo_o *v457; // x6
  PartyListViewItem_o *v458; // x7
  const MethodInfo *v459; // x2
  struct ShopNotice_o *v460; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v463; // x2
  struct ShopNotice_o *v464; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v466; // x2
  struct ShopNotice_o *v467; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  __int64 v469; // x2
  __int64 v470; // x3
  UILabel_o *v471; // x20
  ShopNoticeRemainTimeLabel_o *v472; // x22
  int64_t v473; // x2
  int32_t v474; // w3
  System_String_o *v475; // x4
  BattleSetupInfo_o *v476; // x5
  FollowerInfo_o *v477; // x6
  PartyListViewItem_o *v478; // x7
  UILabel_o *v479; // x20
  ShopNoticeRemainTimeLabel_o *v480; // x22
  int64_t v481; // x2
  int32_t v482; // w3
  System_String_o *v483; // x4
  BattleSetupInfo_o *v484; // x5
  FollowerInfo_o *v485; // x6
  PartyListViewItem_o *v486; // x7
  UILabel_o *v487; // x20
  ShopNoticeRemainTimeLabel_o *v488; // x22
  int64_t v489; // x2
  int32_t v490; // w3
  System_String_o *v491; // x4
  BattleSetupInfo_o *v492; // x5
  FollowerInfo_o *v493; // x6
  PartyListViewItem_o *v494; // x7
  struct ShopNotice_o *v495; // x8
  struct ShopNotice_o *v496; // x8
  struct ShopNotice_o *v497; // x8
  int64_t v498; // x2
  int32_t v499; // w3
  System_String_o *v500; // x4
  BattleSetupInfo_o *v501; // x5
  FollowerInfo_o *v502; // x6
  PartyListViewItem_o *v503; // x7
  struct System_Object_array *v504; // x8
  _QWORD *v505; // x9
  __int64 v506; // x10
  int64_t v507; // x1
  Il2CppClass **v508; // x0
  int64_t v509; // x2
  int32_t v510; // w3
  System_String_o *v511; // x4
  BattleSetupInfo_o *v512; // x5
  FollowerInfo_o *v513; // x6
  PartyListViewItem_o *v514; // x7
  struct System_Object_array *v515; // x8
  _QWORD *v516; // x9
  __int64 v517; // x10
  int64_t v518; // x1
  Il2CppClass **v519; // x0
  int64_t v520; // x2
  int32_t v521; // w3
  System_String_o *v522; // x4
  BattleSetupInfo_o *v523; // x5
  FollowerInfo_o *v524; // x6
  PartyListViewItem_o *v525; // x7
  struct System_Object_array *v526; // x8
  _QWORD *v527; // x9
  __int64 v528; // x10
  int64_t v529; // x1
  Il2CppClass **v530; // x0
  __int64 v531; // x1
  __int64 v532; // x2
  __int64 v533; // x3
  int64_t v534; // x2
  int32_t v535; // w3
  System_String_o *v536; // x4
  BattleSetupInfo_o *v537; // x5
  FollowerInfo_o *v538; // x6
  PartyListViewItem_o *v539; // x7
  struct System_Object_array *v540; // x8
  _QWORD *v541; // x9
  __int64 v542; // x10
  int64_t v543; // x1
  Il2CppClass **v544; // x0
  int64_t v545; // x2
  int32_t v546; // w3
  System_String_o *v547; // x4
  BattleSetupInfo_o *v548; // x5
  FollowerInfo_o *v549; // x6
  PartyListViewItem_o *v550; // x7
  struct System_Object_array *v551; // x8
  _QWORD *v552; // x9
  __int64 v553; // x10
  int64_t v554; // x1
  Il2CppClass **v555; // x0
  int64_t v556; // x2
  int32_t v557; // w3
  System_String_o *v558; // x4
  BattleSetupInfo_o *v559; // x5
  FollowerInfo_o *v560; // x6
  PartyListViewItem_o *v561; // x7
  struct System_Object_array *v562; // x8
  _QWORD *v563; // x9
  __int64 v564; // x10
  Il2CppClass **v565; // x0

  if ( (byte_4B15932 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, v14, v15);
    sub_1BCA7E0(&ShopNoticeRemainTimeLabel_TypeInfo, v16, v17);
    sub_1BCA7E0(&ShopNoticeRemainTime_TypeInfo, v18, v19);
    sub_1BCA7E0(&ShopNoticeTween_TypeInfo, v20, v21);
    byte_4B15932 = 1;
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
    v24 = this->fields.shopNotice;
    if ( !v24 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v24->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
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
      v25->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v26 = this->fields.shopNotice;
    if ( !v26 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v26->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v27 = this->fields.shopNotice;
    if ( !v27 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v27->fields._LimitedType_k__BackingField == 3,
      0LL);
    v30 = this->fields.shopNotice;
    if ( !v30 )
      goto LABEL_324;
    if ( v30->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v28, v29);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
      AtlasManager__LoadEventUI(v31, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v33 = this->fields.shopNotice;
    if ( !v33 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v33->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v34 = this->fields.shopNotice;
    if ( !v34 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v34->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v35 = this->fields.shopNotice;
    if ( !v35 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v35->fields._LimitedType_k__BackingField == 2,
      0LL);
    v36 = this->fields.shopNotice;
    if ( !v36 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v36->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v37 = this->fields.shopNotice;
    if ( !v37 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v37->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v38 = this->fields.shopNotice;
    if ( !v38 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v38->fields._LimitedType_k__BackingField == 4,
      0LL);
    v41 = this->fields.shopNotice;
    if ( !v41 )
      goto LABEL_324;
    LimitedType_k__BackingField = v41->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v44 = (ShopNoticeTween_o *)sub_1BCAA2C(ShopNoticeTween_TypeInfo, method, v39, v40);
        ShopNoticeTween___ctor(v44, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v44;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.shopNoticeTween,
          (int64_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_324;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v53 = this->fields.shopNotice;
      if ( !v53 )
        goto LABEL_324;
      v54 = v53->fields._LimitedType_k__BackingField;
      switch ( v54 )
      {
        case 6:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          items = v55->fields._items;
          v63 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !items )
            goto LABEL_324;
          size = v55->fields._size;
          v65 = (int64_t)mNewItemSp;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &items->obj.klass + size;
            v55->fields._size = size + 1;
            v66[4] = (Il2CppClass *)v65;
            sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), v65, v56, v57, v58, v59, v60, v61);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v185 = v55->fields._items;
          v186 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v185 )
            goto LABEL_324;
          v187 = v55->fields._size;
          v188 = (int64_t)mNewItemSp;
          if ( (unsigned int)v187 >= v185->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
          }
          else
          {
            v189 = &v185->obj.klass + v187;
            v55->fields._size = v187 + 1;
            v189[4] = (Il2CppClass *)v188;
            sub_1BCA784((PartyOrganizationUtility_o *)(v189 + 4), v188, v179, v180, v181, v182, v183, v184);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v190,
                                                                v191,
                                                                v192);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v314 = v193->fields._items;
          v315 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v314 )
            goto LABEL_324;
          v316 = v193->fields._size;
          v317 = (int64_t)mNewItemSp;
          if ( (unsigned int)v316 >= v314->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v193,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v315[4] + 192LL) + 112LL));
          }
          else
          {
            v318 = &v314->obj.klass + v316;
            v193->fields._size = v316 + 1;
            v318[4] = (Il2CppClass *)v317;
            sub_1BCA784((PartyOrganizationUtility_o *)(v318 + 4), v317, v308, v309, v310, v311, v312, v313);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          goto LABEL_256;
        case 10:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v86 = v55->fields._items;
          v87 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v86 )
            goto LABEL_324;
          v88 = v55->fields._size;
          v89 = (int64_t)mNewItemSp;
          if ( (unsigned int)v88 >= v86->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = &v86->obj.klass + v88;
            v55->fields._size = v88 + 1;
            v90[4] = (Il2CppClass *)v89;
            sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 4), v89, v80, v81, v82, v83, v84, v85);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v200 = v55->fields._items;
          v201 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v200 )
            goto LABEL_324;
          v202 = v55->fields._size;
          v203 = (int64_t)mNewItemSp;
          if ( (unsigned int)v202 >= v200->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
          }
          else
          {
            v204 = &v200->obj.klass + v202;
            v55->fields._size = v202 + 1;
            v204[4] = (Il2CppClass *)v203;
            sub_1BCA784((PartyOrganizationUtility_o *)(v204 + 4), v203, v194, v195, v196, v197, v198, v199);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v205,
                                                                v206,
                                                                v207);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v325 = v193->fields._items;
          v326 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v325 )
            goto LABEL_324;
          goto LABEL_237;
        case 12:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v97 = v55->fields._items;
          v98 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v97 )
            goto LABEL_324;
          v99 = v55->fields._size;
          v100 = (int64_t)mNewItemSp;
          if ( (unsigned int)v99 >= v97->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
          }
          else
          {
            v101 = &v97->obj.klass + v99;
            v55->fields._size = v99 + 1;
            v101[4] = (Il2CppClass *)v100;
            sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 4), v100, v91, v92, v93, v94, v95, v96);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v214 = v55->fields._items;
          v215 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v214 )
            goto LABEL_324;
          v216 = v55->fields._size;
          v217 = (int64_t)mNewItemSp;
          if ( (unsigned int)v216 >= v214->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
          }
          else
          {
            v218 = &v214->obj.klass + v216;
            v55->fields._size = v216 + 1;
            v218[4] = (Il2CppClass *)v217;
            sub_1BCA784((PartyOrganizationUtility_o *)(v218 + 4), v217, v208, v209, v210, v211, v212, v213);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v219,
                                                                v220,
                                                                v221);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v325 = v193->fields._items;
          v326 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v325 )
            goto LABEL_324;
          goto LABEL_237;
        case 14:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v108 = v55->fields._items;
          v109 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v108 )
            goto LABEL_324;
          v110 = v55->fields._size;
          v111 = (int64_t)mNewItemSp;
          if ( (unsigned int)v110 >= v108->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v112 = &v108->obj.klass + v110;
            v55->fields._size = v110 + 1;
            v112[4] = (Il2CppClass *)v111;
            sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 4), v111, v102, v103, v104, v105, v106, v107);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v228 = v55->fields._items;
          v229 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v228 )
            goto LABEL_324;
          v230 = v55->fields._size;
          v231 = (int64_t)mNewItemSp;
          if ( (unsigned int)v230 >= v228->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
          }
          else
          {
            v232 = &v228->obj.klass + v230;
            v55->fields._size = v230 + 1;
            v232[4] = (Il2CppClass *)v231;
            sub_1BCA784((PartyOrganizationUtility_o *)(v232 + 4), v231, v222, v223, v224, v225, v226, v227);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v333 = v55->fields._items;
          v334 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v333 )
            goto LABEL_324;
          v335 = v55->fields._size;
          v336 = (int64_t)mNewItemSp;
          if ( (unsigned int)v335 >= v333->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v334[4] + 192LL) + 112LL));
          }
          else
          {
            v337 = &v333->obj.klass + v335;
            v55->fields._size = v335 + 1;
            v337[4] = (Il2CppClass *)v336;
            sub_1BCA784((PartyOrganizationUtility_o *)(v337 + 4), v336, v327, v328, v329, v330, v331, v332);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v338,
                                                                v339,
                                                                v340);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v397 = v193->fields._items;
          v398 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v397 )
            goto LABEL_324;
          v399 = v193->fields._size;
          v400 = (int64_t)mNewItemSp;
          if ( (unsigned int)v399 >= v397->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v193,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v398[4] + 192LL) + 112LL));
          }
          else
          {
            v401 = &v397->obj.klass + v399;
            v193->fields._size = v399 + 1;
            v401[4] = (Il2CppClass *)v400;
            sub_1BCA784((PartyOrganizationUtility_o *)(v401 + 4), v400, v391, v392, v393, v394, v395, v396);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v325 = v193->fields._items;
          v326 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v325 )
            goto LABEL_324;
LABEL_237:
          v435 = v193->fields._size;
          v436 = (int64_t)mNewItemSp;
          if ( (unsigned int)v435 >= v325->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v193,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v326[4] + 192LL) + 112LL));
          }
          else
          {
            v437 = &v325->obj.klass + v435;
            v193->fields._size = v435 + 1;
            v437[4] = (Il2CppClass *)v436;
            sub_1BCA784((PartyOrganizationUtility_o *)(v437 + 4), v436, v319, v320, v321, v322, v323, v324);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v444 = v193->fields._items;
          v445 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v444 )
            goto LABEL_324;
          goto LABEL_258;
        case 18:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v119 = v55->fields._items;
          v120 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v119 )
            goto LABEL_324;
          v121 = v55->fields._size;
          v122 = (int64_t)mNewItemSp;
          if ( (unsigned int)v121 >= v119->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
          }
          else
          {
            v123 = &v119->obj.klass + v121;
            v55->fields._size = v121 + 1;
            v123[4] = (Il2CppClass *)v122;
            sub_1BCA784((PartyOrganizationUtility_o *)(v123 + 4), v122, v113, v114, v115, v116, v117, v118);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v239 = v55->fields._items;
          v240 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v239 )
            goto LABEL_324;
          v241 = v55->fields._size;
          v242 = (int64_t)mNewItemSp;
          if ( (unsigned int)v241 >= v239->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
          }
          else
          {
            v243 = &v239->obj.klass + v241;
            v55->fields._size = v241 + 1;
            v243[4] = (Il2CppClass *)v242;
            sub_1BCA784((PartyOrganizationUtility_o *)(v243 + 4), v242, v233, v234, v235, v236, v237, v238);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v244,
                                                                v245,
                                                                v246);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v347 = v193->fields._items;
          v348 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v347 )
            goto LABEL_324;
          goto LABEL_245;
        case 20:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v130 = v55->fields._items;
          v131 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v130 )
            goto LABEL_324;
          v132 = v55->fields._size;
          v133 = (int64_t)mNewItemSp;
          if ( (unsigned int)v132 >= v130->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
          }
          else
          {
            v134 = &v130->obj.klass + v132;
            v55->fields._size = v132 + 1;
            v134[4] = (Il2CppClass *)v133;
            sub_1BCA784((PartyOrganizationUtility_o *)(v134 + 4), v133, v124, v125, v126, v127, v128, v129);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v253 = v55->fields._items;
          v254 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v253 )
            goto LABEL_324;
          v255 = v55->fields._size;
          v256 = (int64_t)mNewItemSp;
          if ( (unsigned int)v255 >= v253->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
          }
          else
          {
            v257 = &v253->obj.klass + v255;
            v55->fields._size = v255 + 1;
            v257[4] = (Il2CppClass *)v256;
            sub_1BCA784((PartyOrganizationUtility_o *)(v257 + 4), v256, v247, v248, v249, v250, v251, v252);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v258,
                                                                v259,
                                                                v260);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v347 = v193->fields._items;
          v348 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v347 )
            goto LABEL_324;
          goto LABEL_245;
        case 22:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v55 )
            {
              v141 = v55->fields._items;
              v142 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v55->fields._version;
              if ( v141 )
              {
                v143 = v55->fields._size;
                v144 = (int64_t)mNewItemSp;
                if ( (unsigned int)v143 >= v141->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v55,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
                }
                else
                {
                  v145 = &v141->obj.klass + v143;
                  v55->fields._size = v143 + 1;
                  v145[4] = (Il2CppClass *)v144;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v145 + 4), v144, v135, v136, v137, v138, v139, v140);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                  v267 = v55->fields._items;
                  v268 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v55->fields._version;
                  if ( v267 )
                  {
                    v269 = v55->fields._size;
                    v270 = (int64_t)mNewItemSp;
                    if ( (unsigned int)v269 >= v267->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v55,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v271 = &v267->obj.klass + v269;
                      v55->fields._size = v269 + 1;
                      v271[4] = (Il2CppClass *)v270;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v271 + 4), v270, v261, v262, v263, v264, v265, v266);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                      v355 = v55->fields._items;
                      v356 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v55->fields._version;
                      if ( v355 )
                      {
                        v357 = v55->fields._size;
                        v358 = (int64_t)mNewItemSp;
                        if ( (unsigned int)v357 >= v355->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v55,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v356[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v359 = &v355->obj.klass + v357;
                          v55->fields._size = v357 + 1;
                          v359[4] = (Il2CppClass *)v358;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)(v359 + 4),
                            v358,
                            v349,
                            v350,
                            v351,
                            v352,
                            v353,
                            v354);
                        }
                        v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                              System_Collections_Generic_List_GameObject__TypeInfo,
                                                                              v360,
                                                                              v361,
                                                                              v362);
                        System_Collections_Generic_List_object____ctor(
                          v193,
                          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                          if ( v193 )
                          {
                            v408 = v193->fields._items;
                            v409 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v193->fields._version;
                            if ( v408 )
                            {
                              v410 = v193->fields._size;
                              v411 = (int64_t)mNewItemSp;
                              if ( (unsigned int)v410 >= v408->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v193,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v409[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v412 = &v408->obj.klass + v410;
                                v193->fields._size = v410 + 1;
                                v412[4] = (Il2CppClass *)v411;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)(v412 + 4),
                                  v411,
                                  v402,
                                  v403,
                                  v404,
                                  v405,
                                  v406,
                                  v407);
                              }
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
                              if ( mNewItemSp )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                          mNewItemSp,
                                                                          0LL);
                                v347 = v193->fields._items;
                                v348 = Method_System_Collections_Generic_List_GameObject__Add__;
                                ++v193->fields._version;
                                if ( v347 )
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
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v152 = v55->fields._items;
          v153 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v152 )
            goto LABEL_324;
          v154 = v55->fields._size;
          v155 = (int64_t)mNewItemSp;
          if ( (unsigned int)v154 >= v152->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
          }
          else
          {
            v156 = &v152->obj.klass + v154;
            v55->fields._size = v154 + 1;
            v156[4] = (Il2CppClass *)v155;
            sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 4), v155, v146, v147, v148, v149, v150, v151);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v278 = v55->fields._items;
          v279 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v278 )
            goto LABEL_324;
          v280 = v55->fields._size;
          v281 = (int64_t)mNewItemSp;
          if ( (unsigned int)v280 >= v278->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
          }
          else
          {
            v282 = &v278->obj.klass + v280;
            v55->fields._size = v280 + 1;
            v282[4] = (Il2CppClass *)v281;
            sub_1BCA784((PartyOrganizationUtility_o *)(v282 + 4), v281, v272, v273, v274, v275, v276, v277);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v283,
                                                                v284,
                                                                v285);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL);
          if ( !v193 )
            goto LABEL_324;
          v347 = v193->fields._items;
          v348 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v347 )
            goto LABEL_324;
LABEL_245:
          v446 = v193->fields._size;
          max_length = v347->max_length;
          method = (const MethodInfo *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v163 = v55->fields._items;
          v164 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v163 )
            goto LABEL_324;
          v165 = v55->fields._size;
          v166 = (int64_t)mNewItemSp;
          if ( (unsigned int)v165 >= v163->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
          }
          else
          {
            v167 = &v163->obj.klass + v165;
            v55->fields._size = v165 + 1;
            v167[4] = (Il2CppClass *)v166;
            sub_1BCA784((PartyOrganizationUtility_o *)(v167 + 4), v166, v157, v158, v159, v160, v161, v162);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v292 = v55->fields._items;
          v293 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v292 )
            goto LABEL_324;
          v294 = v55->fields._size;
          v295 = (int64_t)mNewItemSp;
          if ( (unsigned int)v294 >= v292->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v293[4] + 192LL) + 112LL));
          }
          else
          {
            v296 = &v292->obj.klass + v294;
            v55->fields._size = v294 + 1;
            v296[4] = (Il2CppClass *)v295;
            sub_1BCA784((PartyOrganizationUtility_o *)(v296 + 4), v295, v286, v287, v288, v289, v290, v291);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v369 = v55->fields._items;
          v370 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v369 )
            goto LABEL_324;
          v371 = v55->fields._size;
          v372 = (int64_t)mNewItemSp;
          if ( (unsigned int)v371 >= v369->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v370[4] + 192LL) + 112LL));
          }
          else
          {
            v373 = &v369->obj.klass + v371;
            v55->fields._size = v371 + 1;
            v373[4] = (Il2CppClass *)v372;
            sub_1BCA784((PartyOrganizationUtility_o *)(v373 + 4), v372, v363, v364, v365, v366, v367, v368);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v374,
                                                                v375,
                                                                v376);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v419 = v193->fields._items;
          v420 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v419 )
            goto LABEL_324;
          v421 = v193->fields._size;
          v422 = (int64_t)mNewItemSp;
          if ( (unsigned int)v421 >= v419->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v193,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v420[4] + 192LL) + 112LL));
          }
          else
          {
            v423 = &v419->obj.klass + v421;
            v193->fields._size = v421 + 1;
            v423[4] = (Il2CppClass *)v422;
            sub_1BCA784((PartyOrganizationUtility_o *)(v423 + 4), v422, v413, v414, v415, v416, v417, v418);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v347 = v193->fields._items;
          v348 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v347 )
            goto LABEL_324;
          goto LABEL_251;
        case 28:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v55 )
            goto LABEL_324;
          v174 = v55->fields._items;
          v175 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v174 )
            goto LABEL_324;
          v176 = v55->fields._size;
          v177 = (int64_t)mNewItemSp;
          if ( (unsigned int)v176 >= v174->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
          }
          else
          {
            v178 = &v174->obj.klass + v176;
            v55->fields._size = v176 + 1;
            v178[4] = (Il2CppClass *)v177;
            sub_1BCA784((PartyOrganizationUtility_o *)(v178 + 4), v177, v168, v169, v170, v171, v172, v173);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v303 = v55->fields._items;
          v304 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v303 )
            goto LABEL_324;
          v305 = v55->fields._size;
          v306 = (int64_t)mNewItemSp;
          if ( (unsigned int)v305 >= v303->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v304[4] + 192LL) + 112LL));
          }
          else
          {
            v307 = &v303->obj.klass + v305;
            v55->fields._size = v305 + 1;
            v307[4] = (Il2CppClass *)v306;
            sub_1BCA784((PartyOrganizationUtility_o *)(v307 + 4), v306, v297, v298, v299, v300, v301, v302);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v383 = v55->fields._items;
          v384 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v55->fields._version;
          if ( !v383 )
            goto LABEL_324;
          v385 = v55->fields._size;
          v386 = (int64_t)mNewItemSp;
          if ( (unsigned int)v385 >= v383->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v384[4] + 192LL) + 112LL));
          }
          else
          {
            v387 = &v383->obj.klass + v385;
            v55->fields._size = v385 + 1;
            v387[4] = (Il2CppClass *)v386;
            sub_1BCA784((PartyOrganizationUtility_o *)(v387 + 4), v386, v377, v378, v379, v380, v381, v382);
          }
          v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v388,
                                                                v389,
                                                                v390);
          System_Collections_Generic_List_object____ctor(
            v193,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v193 )
            goto LABEL_324;
          v430 = v193->fields._items;
          v431 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v430 )
            goto LABEL_324;
          v432 = v193->fields._size;
          v433 = (int64_t)mNewItemSp;
          if ( (unsigned int)v432 >= v430->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v193,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v431[4] + 192LL) + 112LL));
          }
          else
          {
            v434 = &v430->obj.klass + v432;
            v193->fields._size = v432 + 1;
            v434[4] = (Il2CppClass *)v433;
            sub_1BCA784((PartyOrganizationUtility_o *)(v434 + 4), v433, v424, v425, v426, v427, v428, v429);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v347 = v193->fields._items;
          v348 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v193->fields._version;
          if ( !v347 )
            goto LABEL_324;
LABEL_251:
          v446 = v193->fields._size;
          max_length = v347->max_length;
LABEL_252:
          if ( (unsigned int)v446 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v193,
              (Il2CppObject *)method,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
          }
          else
          {
            v448 = &v347->obj.klass + v446;
            v193->fields._size = v446 + 1;
            v448[4] = (Il2CppClass *)method;
            sub_1BCA784((PartyOrganizationUtility_o *)(v448 + 4), (int64_t)method, v341, v342, v343, v344, v345, v346);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_324;
        default:
          v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               method,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v55,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v54 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v55 )
              goto LABEL_324;
            v75 = v55->fields._items;
            v76 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v55->fields._version;
            if ( !v75 )
              goto LABEL_324;
            v77 = v55->fields._size;
            v78 = (int64_t)mNewItemSp;
            if ( (unsigned int)v77 >= v75->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v55,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v79 = &v75->obj.klass + v77;
              v55->fields._size = v77 + 1;
              v79[4] = (Il2CppClass *)v78;
              sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), v78, v69, v70, v71, v72, v73, v74);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v504 = v55->fields._items;
            v505 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v55->fields._version;
            if ( !v504 )
              goto LABEL_324;
            v506 = v55->fields._size;
            v507 = (int64_t)mNewItemSp;
            if ( (unsigned int)v506 >= v504->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v55,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v505[4] + 192LL) + 112LL));
            }
            else
            {
              v508 = &v504->obj.klass + v506;
              v55->fields._size = v506 + 1;
              v508[4] = (Il2CppClass *)v507;
              sub_1BCA784((PartyOrganizationUtility_o *)(v508 + 4), v507, v498, v499, v500, v501, v502, v503);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v515 = v55->fields._items;
            v516 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v55->fields._version;
            if ( !v515 )
              goto LABEL_324;
            v517 = v55->fields._size;
            v518 = (int64_t)mNewItemSp;
            if ( (unsigned int)v517 >= v515->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v55,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v516[4] + 192LL) + 112LL));
            }
            else
            {
              v519 = &v515->obj.klass + v517;
              v55->fields._size = v517 + 1;
              v519[4] = (Il2CppClass *)v518;
              sub_1BCA784((PartyOrganizationUtility_o *)(v519 + 4), v518, v509, v510, v511, v512, v513, v514);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v526 = v55->fields._items;
            v527 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v55->fields._version;
            if ( !v526 )
              goto LABEL_324;
            v528 = v55->fields._size;
            v529 = (int64_t)mNewItemSp;
            if ( (unsigned int)v528 >= v526->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v55,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v527[4] + 192LL) + 112LL));
            }
            else
            {
              v530 = &v526->obj.klass + v528;
              v55->fields._size = v528 + 1;
              v530[4] = (Il2CppClass *)v529;
              sub_1BCA784((PartyOrganizationUtility_o *)(v530 + 4), v529, v520, v521, v522, v523, v524, v525);
            }
            v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                  v531,
                                                                  v532,
                                                                  v533);
            System_Collections_Generic_List_object____ctor(
              v193,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v193 )
              goto LABEL_324;
            v540 = v193->fields._items;
            v541 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v193->fields._version;
            if ( !v540 )
              goto LABEL_324;
            v542 = v193->fields._size;
            v543 = (int64_t)mNewItemSp;
            if ( (unsigned int)v542 >= v540->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v193,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v541[4] + 192LL) + 112LL));
            }
            else
            {
              v544 = &v540->obj.klass + v542;
              v193->fields._size = v542 + 1;
              v544[4] = (Il2CppClass *)v543;
              sub_1BCA784((PartyOrganizationUtility_o *)(v544 + 4), v543, v534, v535, v536, v537, v538, v539);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v551 = v193->fields._items;
            v552 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v193->fields._version;
            if ( !v551 )
              goto LABEL_324;
            v553 = v193->fields._size;
            v554 = (int64_t)mNewItemSp;
            if ( (unsigned int)v553 >= v551->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v193,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v552[4] + 192LL) + 112LL));
            }
            else
            {
              v555 = &v551->obj.klass + v553;
              v193->fields._size = v553 + 1;
              v555[4] = (Il2CppClass *)v554;
              sub_1BCA784((PartyOrganizationUtility_o *)(v555 + 4), v554, v545, v546, v547, v548, v549, v550);
            }
            method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
            v562 = v193->fields._items;
            v563 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v193->fields._version;
            if ( !v562 )
              goto LABEL_324;
            v564 = v193->fields._size;
            if ( (unsigned int)v564 >= v562->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v193,
                (Il2CppObject *)method,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v563[4] + 192LL) + 112LL));
            }
            else
            {
              v565 = &v562->obj.klass + v564;
              v193->fields._size = v564 + 1;
              v565[4] = (Il2CppClass *)method;
              sub_1BCA784((PartyOrganizationUtility_o *)(v565 + 4), (int64_t)method, v556, v557, v558, v559, v560, v561);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_324;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v444 = v193->fields._items;
            v445 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v193->fields._version;
            if ( !v444 )
              goto LABEL_324;
            method = (const MethodInfo *)mNewItemSp;
LABEL_258:
            v449 = v193->fields._size;
            if ( (unsigned int)v449 >= v444->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v193,
                (Il2CppObject *)method,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v445[4] + 192LL) + 112LL));
            }
            else
            {
              v450 = &v444->obj.klass + v449;
              v193->fields._size = v449 + 1;
              v450[4] = (Il2CppClass *)method;
              sub_1BCA784((PartyOrganizationUtility_o *)(v450 + 4), (int64_t)method, v438, v439, v440, v441, v442, v443);
            }
          }
          else
          {
            v193 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                  method,
                                                                  v67,
                                                                  v68);
            System_Collections_Generic_List_object____ctor(
              v193,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_324;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v55,
            (System_Collections_Generic_List_GameObject__o *)v193,
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
    v451 = this->fields.shopNotice;
    if ( !v451 )
      goto LABEL_324;
    if ( v451->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v452 = (ShopNoticeRemainTime_o *)sub_1BCAA2C(ShopNoticeRemainTime_TypeInfo, method, v39, v40),
            ShopNoticeRemainTime___ctor(v452, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v452,
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.shopNoticeRemainTime,
              (int64_t)v452,
              v453,
              v454,
              v455,
              v456,
              v457,
              v458),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v460 = this->fields.shopNotice;
          if ( v460 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v460->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1LL,
                                                      v459);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
              v464 = this->fields.shopNotice;
              if ( v464 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v464->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          v463);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v467 = this->fields.shopNotice;
                  if ( v467 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v467->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              v466);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v471 = this->fields.mPeriodLimitedTimeLb;
                        v472 = (ShopNoticeRemainTimeLabel_o *)sub_1BCAA2C(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                method,
                                                                v469,
                                                                v470);
                        ShopNoticeRemainTimeLabel___ctor(v472, v471, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v472;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int64_t)v472,
                          v473,
                          v474,
                          v475,
                          v476,
                          v477,
                          v478);
                      }
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v479 = this->fields.mMonthlyLimitedTimeLb;
                        v480 = (ShopNoticeRemainTimeLabel_o *)sub_1BCAA2C(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                method,
                                                                v469,
                                                                v470);
                        ShopNoticeRemainTimeLabel___ctor(v480, v479, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v480;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int64_t)v480,
                          v481,
                          v482,
                          v483,
                          v484,
                          v485,
                          v486);
                      }
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v487 = this->fields.mExchangeServantItemLb;
                        v488 = (ShopNoticeRemainTimeLabel_o *)sub_1BCAA2C(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                method,
                                                                v469,
                                                                v470);
                        ShopNoticeRemainTimeLabel___ctor(v488, v487, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v488;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int64_t)v488,
                          v489,
                          v490,
                          v491,
                          v492,
                          v493,
                          v494);
                      }
                      v495 = this->fields.shopNotice;
                      if ( v495 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          mNewItemSp[1].monitor = (void *)v495->fields._PeriodTimeLimit_k__BackingField;
                          ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                          v496 = this->fields.shopNotice;
                          if ( v496 )
                          {
                            mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                            if ( mNewItemSp )
                            {
                              mNewItemSp[1].monitor = (void *)v496->fields._MonthlyTimeLimit_k__BackingField;
                              ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                              v497 = this->fields.shopNotice;
                              if ( v497 )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                if ( mNewItemSp )
                                {
                                  mNewItemSp[1].monitor = (void *)v497->fields._ExchangeServantTimeLimit_k__BackingField;
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
      sub_1BCAA3C(mNewItemSp, method);
    }
  }
}


void __fastcall MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
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
  GachaMaster_o *Master_object; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x20
  char v27; // w22
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t klass; // w20
  const MethodInfo *v31; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v34; // x1
  UILabel_o *summonCampainNumLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+0h] [xbp-80h] BYREF
  int32_t maxNum; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-60h] BYREF
  int32_t remainNum; // [xsp+48h] [xbp-38h] BYREF
  int v40; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4B15934 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaReleaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&UserGachaMaster_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_6640/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_6641/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v22, v23);
    byte_4B15934 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  remainNum = 0;
  maxNum = 0;
  if ( this->fields.isOpen )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !Master_object )
      goto LABEL_26;
    ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                          Master_object,
                                                                          0LL);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaReleaseMaster___);
    v40 = 0;
    if ( !ValidGachaEntityList )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      ValidGachaEntityList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v27 = 0;
    v38 = v36;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
      if ( !v28 )
        break;
      if ( !v38.fields._current )
        sub_1BCAA3C(v28, v29);
      if ( LODWORD(v38.fields._current[3].klass) == 3 )
      {
        klass = (int32_t)v38.fields._current[1].klass;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v29);
        if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(klass, &remainNum, &maxNum, 0LL) )
        {
          v27 = 1;
          v40 += remainNum;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    if ( (v27 & 1) != 0 )
    {
      Master_object = (GachaMaster_o *)this->fields.summonCampainObject;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        summonCampainLabel1 = this->fields.summonCampainLabel1;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
        Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6640/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v31);
        if ( summonCampainLabel1 )
        {
          UILabel__set_text(summonCampainLabel1, (System_String_o *)Master_object, 0LL);
          summonCampainLabel2 = this->fields.summonCampainLabel2;
          Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6641/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v34);
          if ( summonCampainLabel2 )
          {
            UILabel__set_text(summonCampainLabel2, (System_String_o *)Master_object, 0LL);
            summonCampainNumLabel = this->fields.summonCampainNumLabel;
            Master_object = (GachaMaster_o *)System_Int32__ToString((int32_t)&v40, 0LL);
            if ( summonCampainNumLabel )
            {
              UILabel__set_text(summonCampainNumLabel, (System_String_o *)Master_object, 0LL);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_1BCAA3C(Master_object, v25);
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
  __int64 v10; // x2
  UnityEngine_Object_o *activeSceneFSM; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  PlayMakerFSM_o *v25; // x0

  if ( (byte_4B1592E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type, message);
    sub_1BCA7E0(&StringLiteral_8619/*"MAIN_MENU_BAR_SELECT"*/, v9, v10);
    byte_4B1592E = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) && !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectedKind,
      (int64_t)message,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.selectedObject = obj;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedObject, (int64_t)obj, v18, v19, v20, v21, v22, v23);
    v25 = this->fields.activeSceneFSM;
    if ( !v25 )
      sub_1BCAA3C(0LL, v24);
    PlayMakerFSM__SendEvent(v25, (System_String_o *)StringLiteral_8619/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetActiveScene(
        MainMenuBarBase_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  struct PlayMakerFSM_o *myFSM; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  __int64 v18; // x1
  UnityEngine_Component_o *v19; // x23
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_GameObject_o *v22; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3

  if ( (byte_4B1592A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, scene, *(_QWORD *)&kind);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B1592A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scene);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    ComponentInChildren_object__49322392 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v19 = (UnityEngine_Component_o *)ComponentInChildren_object__49322392;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v19 )
      goto LABEL_28;
    v21 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v19, 0LL);
    if ( !v21 )
      goto LABEL_28;
    UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)gameObject, 0LL);
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v22 )
      goto LABEL_28;
    UnityEngine_GameObject__set_layer(v22, (int32_t)gameObject, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.activeSceneFSM, (int64_t)myFSM, v23, v24, v25, v26, v27, v28);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v29),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v30),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_28:
    sub_1BCAA3C(gameObject, myFSM);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mAllBtnAct, (int64_t)act, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v22 = 3;
  else
    v22 = v6;
  MainMenuBarButton__SetMode(partyBtn, v22, 0LL);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedKind, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.selectedObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedObject, 0LL, v23, v24, v25, v26, v27, v28);
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
    sub_1BCAA3C(this, *(_QWORD *)&kind);
  if ( mDispBtnActList->max_length <= kind )
    sub_1BCAA44(this, kind);
  v9 = &mDispBtnActList->obj.klass + kind;
  v9[4] = (Il2CppClass *)act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 4), (int64_t)act, (int64_t)act, (int32_t)method, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetDispBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *mDispBtnList; // x0
  int32_t v12; // w22

  if ( (byte_4B15945 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, *(_QWORD *)&kind);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__, v9, v10);
    byte_4B15945 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_10:
    sub_1BCAA3C(mDispBtnList, is_enable);
  v12 = 0;
  while ( v12 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v12,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0LL);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( mDispBtnList )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mDispBtnList, kind == v12 && is_enable, 0LL);
          mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
          ++v12;
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
    sub_1BCAA3C(0LL, v5);
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
  sub_1BCA784(
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

  if ( (byte_4B15944 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable, isGray);
    byte_4B15944 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1BCAA3C(menuStateBtn, isEnable);
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

  if ( (byte_4B15937 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, method);
    byte_4B15937 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1BCAA3C(menuStateBtn, is_enable);
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
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1593A & 1) == 0 )
  {
    sub_1BCA7E0(&MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo, callback, method);
    byte_4B1593A = 1;
  }
  v6 = sub_1BCAA2C(MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo, callback, method, v3);
  MainMenuBarBase__SetTerminalQuestListClose_d__108___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__108_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_GameObject_o *menuComp; // x0
  int v40; // s0
  int v41; // s2
  int v42; // s9
  int v43; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v45; // x2
  struct System_Collections_Hashtable_o *table; // x23
  struct System_Collections_Hashtable_o *v47; // x23
  struct System_Collections_Hashtable_o *v48; // x23
  struct System_Collections_Hashtable_o *v49; // x23
  struct System_Collections_Hashtable_o *v50; // x23
  __int64 v51; // x1
  System_Collections_Hashtable_o *v52; // x23
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  float v57; // s10
  struct System_Collections_Hashtable_o *v58; // x23
  struct System_Collections_Hashtable_o *v59; // x23
  struct System_Collections_Hashtable_o *v60; // x23
  struct System_Collections_Hashtable_o *v61; // x23
  struct System_Collections_Hashtable_o *v62; // x23
  __int64 v63; // x1
  System_Collections_Hashtable_o *v64; // x21
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  int32_t v67; // w1
  int v68; // [xsp+0h] [xbp-60h] BYREF
  int v69; // [xsp+4h] [xbp-5Ch]
  int v70; // [xsp+8h] [xbp-58h]
  int v71; // [xsp+18h] [xbp-48h] BYREF
  char v72[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B1592F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, is_open, is_play_se);
    sub_1BCA7E0(&Method_MainMenuBarBase_SwitchMenu__, v7, v8);
    sub_1BCA7E0(&float_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22500/*"onMoveComplete"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_18204/*"closeMenuStateImg"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_18934/*"easeInQuad"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22520/*"onstarttarget"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_22518/*"onstart"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_22558/*"openMenuStateImg"*/, v35, v36);
    sub_1BCA7E0(&iTween_TypeInfo, v37, v38);
    byte_4B1592F = 1;
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
    *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)menuComp, 0LL);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    v42 = v40;
    v43 = v41;
    gameObject = UnityEngine_GameObject__get_gameObject(menuComp, 0LL);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v45);
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
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_21024/*"isLocal"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v47 = this->fields.table;
          v68 = v42;
          v70 = v43;
          v69 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68);
          if ( v47 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
              v47,
              StringLiteral_22815/*"position"*/,
              menuComp,
              v47->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_22518/*"onstart"*/,
                StringLiteral_22558/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v48 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v48 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
                  v48,
                  StringLiteral_22520/*"onstarttarget"*/,
                  menuComp,
                  v48->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_22513/*"oncomplete"*/,
                    StringLiteral_22500/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v49 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v49 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
                      v49,
                      StringLiteral_22515/*"oncompletetarget"*/,
                      menuComp,
                      v49->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_18949/*"easetype"*/,
                        StringLiteral_18934/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v50 = this->fields.table;
                      v71 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71);
                      if ( v50 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v50->klass->vtable._23_Add.method)(
                          v50,
                          StringLiteral_24178/*"time"*/,
                          menuComp,
                          v50->klass->vtable._24_Clear.methodPtr);
                        v52 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v51);
                        iTween__MoveTo_60939552(gameObject, v52, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v53);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v54);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v55);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v56);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v65 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v65 = (_QWORD *)sub_1BCA7F8(Method_MainMenuBarBase_SwitchMenu__);
                        v66 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v65, v65[4]);
                        if ( is_open )
                          v67 = 9;
                        else
                          v67 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v66, v67, 0LL);
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
      sub_1BCAA3C(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v57 = -420.0;
    else
      v57 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v58 = this->fields.table;
    v72[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72);
    if ( !v58 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_21024/*"isLocal"*/,
      menuComp,
      v58->klass->vtable._24_Clear.methodPtr);
    v59 = this->fields.table;
    v68 = v42;
    v69 = LODWORD(v57);
    v70 = v43;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68);
    if ( !v59 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
      v59,
      StringLiteral_22815/*"position"*/,
      menuComp,
      v59->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22518/*"onstart"*/,
      StringLiteral_18204/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v60 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v60 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v60->klass->vtable._23_Add.method)(
      v60,
      StringLiteral_22520/*"onstarttarget"*/,
      menuComp,
      v60->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22513/*"oncomplete"*/,
      StringLiteral_22500/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v61 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v61 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v61->klass->vtable._23_Add.method)(
      v61,
      StringLiteral_22515/*"oncompletetarget"*/,
      menuComp,
      v61->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_18949/*"easetype"*/,
      StringLiteral_18934/*"easeInQuad"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v62 = this->fields.table;
    v71 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71);
    if ( !v62 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v62->klass->vtable._23_Add.method)(
      v62,
      StringLiteral_24178/*"time"*/,
      menuComp,
      v62->klass->vtable._24_Clear.methodPtr);
    v64 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v63);
    iTween__MoveTo_60939552(gameObject, v64, 0LL);
    if ( is_play_se )
      goto LABEL_40;
  }
}


void __fastcall MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v17; // x1
  long double v18; // q0
  __int64 v19; // x0
  __int64 v20; // x0
  int64_t UserId; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x20
  long double v24; // q0
  int v25; // w20
  __int64 v26; // x0
  __int64 v27; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  __int64 v29; // x1
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_4B15929 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblUserMaster___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B15929 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC(v18);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C1C6BC(v18);
    UserId = **(_QWORD **)(v20 + 184);
    if ( !UserId )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)UserId,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_37;
    UserId = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, UserId, 0LL);
    if ( !UserId )
      goto LABEL_37;
    v25 = *(_DWORD *)(UserId + 24);
    v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C1C6BC(v24);
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C1C6BC(v24);
    UserId = **(_QWORD **)(v27 + 184);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_37;
    UserId = GachaEntity__getPrice((GachaEntity_o *)UserId, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_37;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, v25 / (int)UserId, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserId )
      goto LABEL_37;
    UserId = TblFriendMaster__GetSum((TblFriendMaster_o *)UserId, 2, 0LL);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_37;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, UserId, 0LL);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)this->fields.mMenuNoticeNumber;
    if ( UserId )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserId, 0, 0LL);
      return;
    }
LABEL_37:
    sub_1BCAA3C(UserId, v17);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__98_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarBase_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B15949 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    this = (MainMenuBarBase_o *)sub_1BCA7E0(&StringLiteral_20391/*"icon_servant_exchange_available_{0}"*/, v6, v7);
    byte_4B15949 = 1;
  }
  shopNotice = v3->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v3->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField);
  v12 = System_String__Format((System_String_o *)StringLiteral_20391/*"icon_servant_exchange_available_{0}"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v12, 0LL) )
  {
    this = (MainMenuBarBase_o *)v3->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v3->fields.mExchangeServantItemDefaultAtlas, 0LL);
      this = (MainMenuBarBase_o *)v3->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v3->fields.mExchangeServantItemDefaultSpriteName, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B15936 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20579/*"img_menu_menu"*/, method, v2);
    byte_4B15936 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20579/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1BCAA3C(menuStateBtn, method);
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
    sub_1BCAA3C(0LL, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
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
      sub_1BCAA3C(mNewItemSp, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v7);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B15935 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20578/*"img_menu_close"*/, method, v2);
    byte_4B15935 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20578/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1BCAA3C(menuStateBtn, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v14; // x0
  TitleInfoControl_o *v15; // x0
  ExUITexture_c *klass; // x8
  __int64 v17; // x2
  ExUITexture_c *v18; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_bool__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  UnityEngine_WaitUntil_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4B159FF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v10, v11);
    byte_4B159FF = 1;
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B137F7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137F7 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v15 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v15 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v15->fields.mEventBgTexture->klass;
  if ( !klass )
    goto LABEL_29;
  v15 = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !v15 )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable(v15, 0, 0LL);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v17);
    byte_4B10F83 = 1;
  }
  v15 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v15 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v18 = v15->fields.mEventBgTexture->klass;
  if ( !v18
    || (v15 = *(TitleInfoControl_o **)&v18->_2.static_fields_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)v15, 0, 0LL), !_4__this) )
  {
LABEL_29:
    sub_1BCAA3C(v15, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v22 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v19, v20, v21);
  System_Func_bool____ctor(
    v22,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__,
    0LL);
  v26 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v23, v24, v25);
  UnityEngine_WaitUntil___ctor(v26, v22, 0LL);
  this->fields.__2__current = (Il2CppObject *)v26;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v26, v28, v29, v30, v31, v32, v33);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__108_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B159FD & 1) == 0 )
  {
    sub_1BCA7E0(&MainMenuBarBase___c_TypeInfo, v1, v2);
    byte_4B159FD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MainMenuBarBase___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MainMenuBarBase___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__107_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  ScrTerminalListTop_o *v6; // x0
  QuestRewardTokenAction_c *klass; // x8
  __int64 v8; // x2
  QuestRewardTokenAction_c *v9; // x8

  if ( (byte_4B159FE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v3, v4);
    byte_4B159FE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B137F7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137F7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v6 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v6 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v6->fields.boardGameTokenAction->klass;
  if ( !klass )
    goto LABEL_24;
  v6 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !v6 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v6, 0LL);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v8);
    byte_4B10F83 = 1;
  }
  v6 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v6 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = v6->fields.boardGameTokenAction->klass;
  if ( !v9 || (v6 = *(ScrTerminalListTop_o **)&v9->_2.static_fields_size) == 0LL )
LABEL_24:
    sub_1BCAA3C(v6, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v6, 0, 0LL);
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
    sub_1BCAA3C(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}