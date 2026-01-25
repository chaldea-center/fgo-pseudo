void MainMenuBarBase___cctor(const MethodInfo *method)
{
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v2; // x8
  struct MainMenuBarBase_StaticFields *v3; // x9

  if ( (byte_4CEDE18 & 1) == 0 )
  {
    sub_1C7BAE8(&MainMenuBarBase_TypeInfo);
    byte_4CEDE18 = 1;
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


void MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Hashtable_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Action_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_Dictionary_object__int__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CEDE17 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_GameObject__int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_GameObject__int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Hashtable_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CEDE17 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mDispBtnList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v10 = (System_Collections_Hashtable_o *)sub_1C7BD34(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65539536(v10, 0);
  this->fields.table = v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.table, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Action_array *)sub_1C7BB90(System_Action___TypeInfo, 8);
  this->fields.mDispBtnActList = v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mDispBtnActList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.summonCampaignObjects = (struct System_Collections_Generic_List_GameObject__o *)v24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.summonCampaignObjects,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_GameObject__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v31,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_GameObject__int___ctor__);
  this->fields.campaignNoticeMap = (struct System_Collections_Generic_Dictionary_GameObject__int__o *)v31;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.campaignNoticeMap,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *terminalBtn; // x1
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int32_t v12; // w2
  int v13; // w8
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  __int64 v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
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
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  Il2CppObject *v101; // x20
  UnityEngine_GameObject_o *v102; // x20
  UnityEngine_GameObject_o *v103; // x0
  MainMenuBarBase_c *v104; // x0
  Il2CppObject *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  Il2CppObject *v113; // x20
  UnityEngine_GameObject_o *v114; // x20
  UnityEngine_GameObject_o *v115; // x0
  MainMenuBarBase_c *v116; // x0
  Il2CppObject *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  struct UISprite_o *v146; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v148; // x1

  if ( (byte_4CEDDF2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
    sub_1C7BAE8(&MainMenuBarBase_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ShopTopListViewManager_TypeInfo);
    byte_4CEDDF2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_110;
  v12 = *((_DWORD *)mDispBtnList + 6);
  v13 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v13;
  if ( v12 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v12, 0);
    mDispBtnList = this->fields.mDispBtnList;
    if ( !mDispBtnList )
      goto LABEL_110;
  }
  terminalBtn = (Il2CppObject *)this->fields.terminalBtn;
  v14 = *((_QWORD *)mDispBtnList + 2);
  v15 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v14 )
    goto LABEL_110;
  v16 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = v14 + 8 * v16;
    *((_DWORD *)mDispBtnList + 6) = v16 + 1;
    *(_QWORD *)(v17 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)terminalBtn, v12, v5, v6, v7, v8, v9);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  terminalBtn = (Il2CppObject *)this->fields.partyBtn;
  v24 = *((_QWORD *)mDispBtnList + 2);
  v25 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v24 )
    goto LABEL_110;
  v26 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v24 + 8 * v26;
    *((_DWORD *)mDispBtnList + 6) = v26 + 1;
    *(_QWORD *)(v27 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 32), (int32_t)terminalBtn, v18, v19, v20, v21, v22, v23);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  terminalBtn = (Il2CppObject *)this->fields.summonBtn;
  v34 = *((_QWORD *)mDispBtnList + 2);
  v35 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v34 )
    goto LABEL_110;
  v36 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * v36;
    *((_DWORD *)mDispBtnList + 6) = v36 + 1;
    *(_QWORD *)(v37 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v37 + 32), (int32_t)terminalBtn, v28, v29, v30, v31, v32, v33);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  terminalBtn = (Il2CppObject *)this->fields.combineBtn;
  v44 = *((_QWORD *)mDispBtnList + 2);
  v45 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v44 )
    goto LABEL_110;
  v46 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * v46;
    *((_DWORD *)mDispBtnList + 6) = v46 + 1;
    *(_QWORD *)(v47 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v47 + 32), (int32_t)terminalBtn, v38, v39, v40, v41, v42, v43);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  terminalBtn = (Il2CppObject *)this->fields.shopBtn;
  v54 = *((_QWORD *)mDispBtnList + 2);
  v55 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v54 )
    goto LABEL_110;
  v56 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = v54 + 8 * v56;
    *((_DWORD *)mDispBtnList + 6) = v56 + 1;
    *(_QWORD *)(v57 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v57 + 32), (int32_t)terminalBtn, v48, v49, v50, v51, v52, v53);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  terminalBtn = (Il2CppObject *)this->fields.friendBtn;
  v64 = *((_QWORD *)mDispBtnList + 2);
  v65 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v64 )
    goto LABEL_110;
  v66 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = v64 + 8 * v66;
    *((_DWORD *)mDispBtnList + 6) = v66 + 1;
    *(_QWORD *)(v67 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v67 + 32), (int32_t)terminalBtn, v58, v59, v60, v61, v62, v63);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  terminalBtn = (Il2CppObject *)this->fields.myroomBtn;
  v74 = *((_QWORD *)mDispBtnList + 2);
  v75 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v74 )
    goto LABEL_110;
  v76 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = v74 + 8 * v76;
    *((_DWORD *)mDispBtnList + 6) = v76 + 1;
    *(_QWORD *)(v77 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v77 + 32), (int32_t)terminalBtn, v68, v69, v70, v71, v72, v73);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  terminalBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v84 = *((_QWORD *)mDispBtnList + 2);
  v85 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v84 )
    goto LABEL_110;
  v86 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = v84 + 8 * v86;
    *((_DWORD *)mDispBtnList + 6) = v86 + 1;
    *(_QWORD *)(v87 + 32) = terminalBtn;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v87 + 32), (int32_t)terminalBtn, v78, v79, v80, v81, v82, v83);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mMenuNoticeNumber, 0, 0) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     mNoticeNumberPrefab,
                     (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_110;
    v90 = (UnityEngine_GameObject_o *)mDispBtnList;
    v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0);
    GameObjectExtensions__SafeSetParent_36529116(v90, v91, 0);
    v92 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v92 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v90, v92->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0);
    if ( !v90 )
      goto LABEL_110;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v90,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mMenuNoticeNumber,
      (int32_t)Component_object,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
    mDispBtnList = this->fields.mMenuNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_110;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0, 0) )
  {
    v101 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v101,
                     (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_110;
    v102 = (UnityEngine_GameObject_o *)mDispBtnList;
    v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0);
    GameObjectExtensions__SafeSetParent_36529116(v102, v103, 0);
    v104 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v104 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v102, v104->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0);
    if ( !v102 )
      goto LABEL_110;
    v105 = UnityEngine_GameObject__GetComponent_object_(
             v102,
             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v105;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mSummonNoticeNumber,
      (int32_t)v105,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    mDispBtnList = this->fields.mSummonNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_110;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0, 0) )
  {
    v113 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v113,
                     (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_110;
    v114 = (UnityEngine_GameObject_o *)mDispBtnList;
    v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0);
    GameObjectExtensions__SafeSetParent_36529116(v114, v115, 0);
    v116 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v116 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v114, v116->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0);
    if ( !v114 )
      goto LABEL_110;
    v117 = UnityEngine_GameObject__GetComponent_object_(
             v114,
             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v117;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mFriendNoticeNumber,
      (int32_t)v117,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_110;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0);
  this->fields.shopNotice = ShopNotice;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.shopNotice,
    (int32_t)ShopNotice,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  mDispBtnList = this->fields.mNewItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mLimitedItemIconRoot;
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mPeriodLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mMonthlyLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mExchangeServantItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.StartUpSummonSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mPeriodLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mMonthlyLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mExchangeServantItemLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mExchangeServantTimeRoot;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.StartUpSummonLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mExchangeServantItemDefaultAtlas = (UnityEngine_Object_o *)this->fields.mExchangeServantItemDefaultAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mDispBtnList = (void *)UnityEngine_Object__op_Equality(mExchangeServantItemDefaultAtlas, 0, 0);
  if ( ((unsigned __int8)mDispBtnList & 1) != 0 )
  {
    mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
    if ( mExchangeServantItemSp )
    {
      mAtlas = mExchangeServantItemSp->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (int32_t)mAtlas,
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
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int32_t)mSpriteName,
          v140,
          v141,
          v142,
          v143,
          v144,
          v145);
        goto LABEL_107;
      }
    }
LABEL_110:
    sub_1C7BD40(mDispBtnList, terminalBtn);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.summonOneTimeFreeObject;
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  MainMenuBarBase__UpdateNoticeNumber(this, v148);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__BackActive(MainMenuBarBase_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Component_o *backCloseSprite; // x0
  float v6; // s1 OVERLAPPED
  int v7; // s2
  int v8; // s0

  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0);
  if ( !backCloseSprite )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, !isOpen, 0);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0);
  if ( !backCloseSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, isOpen, 0),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite) == 0)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite) == 0)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.menuGrid) == 0)
    || (backCloseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)backCloseSprite,
                                                       0)) == 0 )
  {
LABEL_12:
    sub_1C7BD40(backCloseSprite, isOpen);
  }
  v6 = -33.0;
  if ( isOpen )
    v6 = -6.0;
  v7 = 0;
  v8 = -1010237440;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)backCloseSprite,
    *(UnityEngine_Vector3_o *)(&v6 - 1),
    0);
}


void MainMenuBarBase__CheckLatestScenarioButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  UnityEngine_Object_o *v4; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *m_CachedPtr; // x20
  MyRoomStateMaterial_o *monitor; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v9; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v12; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEDDFB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_1C7BAE8(&MyRoomRootComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEDDFB = 1;
  }
  *(_QWORD *)questId = 0;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v4 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
    goto LABEL_27;
  if ( !v4 )
    goto LABEL_27;
  naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MyRoomRootComponent_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_27;
  }
  m_CachedPtr = (UnityEngine_Object_o *)v4[2].fields.m_CachedPtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !m_CachedPtr )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)m_CachedPtr, 0) == 1 )
    goto LABEL_27;
  monitor = (MyRoomStateMaterial_o *)m_CachedPtr[38].monitor;
  if ( !monitor )
    goto LABEL_27;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(monitor, 0);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(monitor, 0);
    if ( (_DWORD)State != 10 )
      goto LABEL_27;
  }
  mOldState = monitor->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_27;
  mSelectInfos = (System_Collections_Generic_List_object__o *)monitor->fields.mSelectInfos;
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v9) )
    goto LABEL_27;
  Instance = System_Collections_Generic_List_object___get_Item(
               mSelectInfos,
               0,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
  if ( !Instance )
    goto LABEL_30;
  if ( *((_DWORD *)Instance + 10) != questId[1] )
  {
LABEL_27:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v12 = 2;
      goto LABEL_29;
    }
LABEL_30:
    sub_1C7BD40(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_30;
  v12 = 3;
LABEL_29:
  MainMenuBarButton__SetMode((MainMenuBarButton_o *)Instance, v12, 0);
}


void MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x8
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v5; // w1

  if ( (byte_4CEDDFA & 1) == 0 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEDDFA = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1C7BD40(terminalBtn, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEB03C )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB03C = 1;
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
  MainMenuBarButton__SetMode(terminalBtn, v5, 0);
}


void MainMenuBarBase__CloseMenu(MainMenuBarBase_o *this, bool is_play_se, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__SwitchMenu(this, 0, is_play_se, v3);
}


void MainMenuBarBase__FrameIn(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 1, is_force, v3);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__FrameInOut(MainMenuBarBase_o *this, bool is_framein, bool is_force, const MethodInfo *method)
{
  __int64 v7; // x20
  MoveObject_o *gameObject; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  float mFrameInPosY; // s14
  float v17; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  float v26; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v30; // x21
  float v31; // s12
  float v32; // s13
  System_Action_o *v33; // x22
  System_Action_o *v34; // x23
  float v35; // s3 OVERLAPPED
  float v36; // s0 OVERLAPPED
  float v37; // s5
  float v38; // s2
  float v39; // s4
  float v40; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEDE16 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_MainMenuBarBase___c__DisplayClass140_0__FrameInOut_b__0__);
    sub_1C7BAE8(&Method_MainMenuBarBase___c__DisplayClass140_0__FrameInOut_b__1__);
    sub_1C7BAE8(&MainMenuBarBase___c__DisplayClass140_0_TypeInfo);
    byte_4CEDE16 = 1;
  }
  v7 = sub_1C7BD34(MainMenuBarBase___c__DisplayClass140_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass140_0___ctor((MainMenuBarBase___c__DisplayClass140_0_o *)v7, 0);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = gameObject;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)gameObject, v10, v11, v12, v13, v14, v15);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v17 = this->fields.mFrameInPosY;
  else
    v17 = -90.0;
  *(float *)(v7 + 32) = v17;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v7 + 16),
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  v19 = (MoveObject_o **)(v7 + 24);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Component_object, v20, v21, v22, v23, v24, v25);
  if ( is_force
    || (v26 = *(float *)(v7 + 32),
        v26 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), 0)) )
  {
    gameObject = *v19;
    if ( *v19 )
    {
      MoveObject__Stop(gameObject, 0);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), *(float *)(v7 + 32), 0);
      return;
    }
LABEL_29:
    sub_1C7BD40(gameObject, v9);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v42 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
  v30 = *(MoveObject_o **)(v7 + 24);
  v31 = v42.fields.x;
  v32 = v42.fields.z;
  v33 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass140_0__FrameInOut_b__0__, 0);
  v34 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass140_0__FrameInOut_b__1__, 0);
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
    0);
}


void MainMenuBarBase__FrameOut(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 0, is_force, v3);
}


bool MainMenuBarBase__GetJumpSceneInfo(
        MainMenuBarBase_o *this,
        int32_t *warId,
        int32_t *questId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v9; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_43124364; // x22
  bool IsClearAllMainScenario; // w23
  int64_t v12; // x1
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v16; // x20
  MainMenuBarBase_c *v17; // x0

  if ( (byte_4CEDE11 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&MainMenuBarBase_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CEDE11 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v9 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_30;
  MovedEventScriptList_43124364 = QuestScriptMaster__GetMovedEventScriptList_43124364(
                                    (QuestScriptMaster_o *)Instance,
                                    0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_30;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
                                    MovedEventScriptList_43124364,
                                    0);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(v9, v12, MovedEventScriptList_43124364, 0);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0 )
  {
LABEL_30:
    sub_1C7BD40(Instance, v7);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0);
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


bool MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *MyFsmP; // x0
  QuestRewardItemAction_c *klass; // x8
  QuestRewardItemAction_c *v4; // x8
  __int64 v5; // x8

  if ( (byte_4CEDE06 & 1) == 0 )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12331/*"SPOT SELECT WAIT"*/);
    byte_4CEDE06 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
  MyFsmP = *(ScrTerminalListTop_o **)&klass->_2.element_size;
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(MyFsmP, 0);
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0);
  if ( !MyFsmP )
    goto LABEL_26;
  if ( System_String__IndexOf_64235304((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12331/*"SPOT SELECT WAIT"*/, 0) < 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = MyFsmP->fields.friendPointBoostItemAction->klass;
  if ( !v4 || (v5 = *(_QWORD *)&v4->_2.static_fields_size) == 0 || (MyFsmP = *(ScrTerminalListTop_o **)(v5 + 544)) == 0 )
LABEL_26:
    sub_1C7BD40(MyFsmP, method);
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0);
}


void MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4CEDE09 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8546/*"MAIN_MENU_BAR_SELECT_COMBINE"*/);
    byte_4CEDE09 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1C7BD40(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8546/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__OnClickCommon(MainMenuBarBase_o *this, int32_t kind, bool isEnabled, const MethodInfo *method)
{
  MainMenuBarBase_o *v6; // x19
  struct System_Action_array *mDispBtnActList; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Action_array *v14; // x8
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  _QWORD *v22; // x0
  int32_t v23; // w19
  System_Reflection_MethodBase_o *v24; // x0

  v6 = this;
  if ( (byte_4CEDE03 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1C7BAE8(&Method_MainMenuBarBase_OnClickCommon__);
    byte_4CEDE03 = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( LODWORD(mDispBtnActList->max_length) <= kind )
        goto LABEL_16;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0);
      v14 = v6->fields.mDispBtnActList;
      if ( v14 )
      {
        if ( LODWORD(v14->max_length) > kind )
        {
          v15 = &v14->obj.klass + kind;
          v15[4] = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 4), 0, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0);
          v6->fields.mAllBtnAct = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v6->fields.mAllBtnAct, 0, v16, v17, v18, v19, v20, v21);
          v22 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_1C7BB00(Method_MainMenuBarBase_OnClickCommon__);
          v23 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1C7BD48(this);
      }
    }
    sub_1C7BD40(this, *(_QWORD *)&kind);
  }
  v22 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1C7BB00(Method_MainMenuBarBase_OnClickCommon__);
  v23 = 2;
LABEL_14:
  v24 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, v23, 0, 0);
}


void MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4CEDE07 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8550/*"MAIN_MENU_BAR_SELECT_PARTY"*/);
    byte_4CEDE07 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1C7BD40(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8550/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0, v6);
}


void MainMenuBarBase__OnClickFreeCampaignInfo(
        MainMenuBarBase_o *this,
        UnityEngine_GameObject_o *campaignObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_GameObject__int__o *campaignNoticeMap; // x0
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDE0E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_GameObject__int__TryGetValue__);
    byte_4CEDE0E = 1;
  }
  value = 0;
  campaignNoticeMap = this->fields.campaignNoticeMap;
  if ( !campaignNoticeMap )
    sub_1C7BD40(0, campaignObject);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         (System_Collections_Generic_Dictionary_object__int__o *)campaignNoticeMap,
         (Il2CppObject *)campaignObject,
         &value,
         (const MethodInfo_34EAF18 *)Method_System_Collections_Generic_Dictionary_GameObject__int__TryGetValue__) )
  {
    v7 = value;
  }
  else
  {
    v7 = 0;
    value = 0;
  }
  MainMenuBarBase__OnClickSummonCampaign(this, v7, v6);
}


void MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4CEDE0B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8547/*"MAIN_MENU_BAR_SELECT_FRIEND"*/);
    byte_4CEDE0B = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1C7BD40(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8547/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0, v6);
}


void MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
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

  if ( (byte_4CEDE0D & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomRootComponent_TypeInfo);
    sub_1C7BAE8(&SceneJumpInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8548/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4CEDE0D = 1;
  }
  *(_QWORD *)questId = 0;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1C7BD40(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0);
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
      v13 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42057648(v13, MYROOM_STATE_NEW_MATERIAL, v10, v11, 0);
    }
    else
    {
      v13 = 0;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8548/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v13, v8);
  }
}


void MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4CEDE0C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8548/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4CEDE0C = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1C7BD40(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8548/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0, v6);
}


void MainMenuBarBase__OnClickOutSide(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MainMenuBarBase__SwitchMenu(this, 0, 1, v2);
}


void MainMenuBarBase__OnClickShop(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *shopBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4CEDE0A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8551/*"MAIN_MENU_BAR_SELECT_SHOP"*/);
    byte_4CEDE0A = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1C7BD40(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8551/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0, v6);
}


void MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4CEDE08 & 1) == 0 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8552/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_4CEDE08 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1C7BD40(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEAABF )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEAABF = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_SummonId_k__BackingField = 0;
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8552/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0, v6);
  }
}


void MainMenuBarBase__OnClickSummonCampaign(MainMenuBarBase_o *this, int32_t gachaId, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  TerminalPramsManager_c *v10; // x0
  const MethodInfo *v11; // x4
  int klass; // w20
  int v13; // w20
  System_String_o *SceneName; // x0
  const MethodInfo *v15; // x3
  bool v16; // w2
  MainMenuBarBase_o *v17; // x0
  UnityEngine_Object_o *activeScene; // x21
  const MethodInfo *v19; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEDE0F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_MainMenuBarBase_OnClickSummonCampaign__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SceneList_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8552/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_4CEDE0F = 1;
  }
  entity = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (AvalonSceneManager_o *)AvalonSceneManager__getNowSceneName(Instance, 0);
  if ( !this->fields.summonBtn )
    goto LABEL_46;
  v7 = (System_String_o *)Instance;
  if ( MainMenuBarButton__IsEnabled(this->fields.summonBtn, 0) )
  {
    v8 = Method_MainMenuBarBase_OnClickSummonCampaign__;
    if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickSummonCampaign__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C7BB00(Method_MainMenuBarBase_OnClickSummonCampaign__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEAABD )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEAABD = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_SummonType_k__BackingField = 1;
    if ( !byte_4CEAABF )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
      byte_4CEAABF = 1;
    }
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_SummonId_k__BackingField = gachaId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( Instance )
    {
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           gachaId,
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
LABEL_35:
        MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8552/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0, v11);
        return;
      }
      if ( entity )
      {
        klass = (int)entity[1].klass;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CEAABF )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CEAABF = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        HIDWORD(Instance[1].fields.sendData->monitor) = klass;
        if ( entity )
        {
          v13 = (int)entity[3].klass;
          if ( !byte_4CEAABD )
          {
            sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            byte_4CEAABD = 1;
          }
          if ( !LODWORD(Instance[2].klass) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          LODWORD(Instance[1].fields.sendData->monitor) = v13;
          goto LABEL_35;
        }
      }
    }
LABEL_46:
    sub_1C7BD40(Instance, v6);
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(20, 0);
  if ( System_String__op_Inequality(v7, SceneName, 0) )
  {
    v16 = 1;
    v17 = this;
LABEL_44:
    MainMenuBarBase__SwitchMenu(v17, 0, v16, v15);
    return;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(activeScene, 0, 0) )
  {
    v17 = this;
    v16 = 0;
    goto LABEL_44;
  }
  MainMenuBarBase__OnClickSummonCampaignInSummonScene(this, gachaId, v19);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__OnClickSummonCampaignInSummonScene(
        MainMenuBarBase_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  struct SceneRootComponent_o *activeScene; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v7; // x3
  SummonControl_o *SummonControl; // x21
  int32_t MiniBannerIndex; // w0
  unsigned int v10; // w20
  struct System_Action_int__bool__o *OnClickBalloonAction; // x8

  if ( (byte_4CEDE10 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_SummonRootComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDE10 = 1;
  }
  activeScene = this->fields.activeScene;
  if ( !activeScene )
    goto LABEL_17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)activeScene,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_SummonRootComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  activeScene = (struct SceneRootComponent_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)activeScene & 1) != 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_17;
  SummonControl = SummonRootComponent__GetSummonControl((SummonRootComponent_o *)Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  activeScene = (struct SceneRootComponent_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)SummonControl,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)activeScene & 1) != 0 )
    goto LABEL_13;
  if ( !SummonControl )
LABEL_17:
    sub_1C7BD40(activeScene, *(_QWORD *)&gachaId);
  MiniBannerIndex = SummonControl__GetMiniBannerIndex(SummonControl, gachaId, 0);
  if ( SummonControl->fields.currentMoveIdx == MiniBannerIndex )
  {
LABEL_13:
    MainMenuBarBase__SwitchMenu(this, 0, 1, v7);
    return;
  }
  v10 = MiniBannerIndex;
  MainMenuBarBase__SwitchMenu(this, 0, 0, v7);
  OnClickBalloonAction = this->fields.OnClickBalloonAction;
  if ( OnClickBalloonAction )
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))OnClickBalloonAction->fields.invoke_impl)(
      OnClickBalloonAction->fields.method_code,
      v10,
      1,
      OnClickBalloonAction->fields.method);
}


void MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
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
  System_Action_o *_9__117_0; // x20
  Il2CppObject *v22; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_IEnumerator_o *v30; // x1
  System_Threading_CancellationTokenSource_c *v31; // x8
  const MethodInfo *v32; // x3
  TerminalPramsManager_c *v33; // x0
  System_Threading_CancellationTokenSource_c *v34; // x8

  if ( (byte_4CEDE04 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_MainMenuBarBase___c__OnClickTerminal_b__117_0__);
    sub_1C7BAE8(&MainMenuBarBase___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8553/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/);
    sub_1C7BAE8(&StringLiteral_12331/*"SPOT SELECT WAIT"*/);
    sub_1C7BAE8(&StringLiteral_3295/*"CAPTER WAIT"*/);
    byte_4CEDE04 = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_123;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
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
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
      goto LABEL_126;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
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
    v10 = *(UnityEngine_Object_o **)&klass->_2.element_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
LABEL_126:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEB5DC )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEB5DC = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4CE8D13 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4CE8D13 = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_4CEB606 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4CEB606 = 1;
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
    if ( !byte_4CEB03C )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB03C = 1;
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
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
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
    terminalBtn = *(MainMenuBarButton_o **)&v12->_2.element_size;
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0);
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0);
    if ( !terminalBtn )
      goto LABEL_123;
    v13 = (System_String_o *)terminalBtn;
    if ( System_String__IndexOf_64235304((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12331/*"SPOT SELECT WAIT"*/, 0) < 0
      && System_String__IndexOf_64235304(v13, (System_String_o *)StringLiteral_3295/*"CAPTER WAIT"*/, 0) < 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
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
    terminalBtn = *(MainMenuBarButton_o **)&v14->_2.element_size;
    if ( !terminalBtn )
      goto LABEL_123;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0) )
    {
LABEL_127:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEB5DC )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEB5DC = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4CE8D13 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4CE8D13 = 1;
      }
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CE840E )
      {
        sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
        byte_4CE840E = 1;
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
        terminalBtn = *(MainMenuBarButton_o **)&v16->_2.element_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0);
          if ( !byte_4CE840E )
          {
            sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
            byte_4CE840E = 1;
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
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8553/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0, v8);
            return;
          }
        }
      }
LABEL_123:
      sub_1C7BD40(terminalBtn, method);
    }
    if ( System_String__IndexOf_64235304(v13, (System_String_o *)StringLiteral_3295/*"CAPTER WAIT"*/, 0) < 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CE840E )
      {
        sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
        byte_4CE840E = 1;
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
      terminalBtn = *(MainMenuBarButton_o **)&v31->_2.element_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v32);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEBA49 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEBA49 = 1;
      }
      v33 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v33 = TerminalPramsManager_TypeInfo;
      }
      v33->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_4CE840E )
      {
        sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
        byte_4CE840E = 1;
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
      terminalBtn = *(MainMenuBarButton_o **)&v34->_2.element_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0);
    }
    else
    {
      v20 = MainMenuBarBase___c_TypeInfo;
      if ( !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v20 = MainMenuBarBase___c_TypeInfo;
      }
      _9__117_0 = v20->static_fields->__9__117_0;
      if ( !_9__117_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = MainMenuBarBase___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__117_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(_9__117_0, v22, Method_MainMenuBarBase___c__OnClickTerminal_b__117_0__, 0);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__117_0 = _9__117_0;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__117_0,
          (int32_t)_9__117_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      v30 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__117_0, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v30, 0);
    }
  }
}


void MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0);
  this->fields.mMenuBtnAct = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mMenuBtnAct, 0, v4, v5, v6, v7, v8, v9);
}


void MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEDDF6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEDDF6 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v4);
    AvalonSceneManager__transitionScene(
      (AvalonSceneManager_o *)Instance,
      this->fields.selectedType,
      this->fields.fadeType,
      this->fields.selectedObject,
      0);
  }
}


void MainMenuBarBase__RequestSelectedSignal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_4CEDDF7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8549/*"MAIN_MENU_BAR_SELECT_NONE"*/);
    byte_4CEDDF7 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0, 0) )
  {
    selectedKind = this->fields.selectedKind;
    v5 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v5 )
LABEL_12:
        sub_1C7BD40(v5, selectedKind);
    }
    else
    {
      if ( !v5 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8549/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v5, selectedKind, 0);
  }
}


void MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEDDF5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEDDF5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE8D13 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE8D13 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4CEDDFD & 1) == 0 )
  {
    sub_1C7BAE8(&ShopTopListViewManager_TypeInfo);
    byte_4CEDDFD = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0);
  this->fields.shopNotice = ShopNotice;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v4, v5, v6, v7, v8, v9);
  MainMenuBarBase__ResetShopNoticeDraw(this, v10);
}


void MainMenuBarBase__ResetShopNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct ShopNotice_o *v27; // x8
  int32_t v28; // w23
  System_Collections_Generic_List_object__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v39; // x1
  Il2CppClass **v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  UnityEngine_Component_o *v50; // x1
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  UnityEngine_Component_o *v61; // x1
  Il2CppClass **v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  UnityEngine_Component_o *v72; // x1
  Il2CppClass **v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  UnityEngine_Component_o *v83; // x1
  Il2CppClass **v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  UnityEngine_Component_o *v94; // x1
  Il2CppClass **v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  UnityEngine_Component_o *v105; // x1
  Il2CppClass **v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  UnityEngine_Component_o *v116; // x1
  Il2CppClass **v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  UnityEngine_Component_o *v127; // x1
  Il2CppClass **v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  UnityEngine_Component_o *v138; // x1
  Il2CppClass **v139; // x0
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  UnityEngine_Component_o *v149; // x1
  Il2CppClass **v150; // x0
  int32_t v151; // w2
  int32_t v152; // w3
  System_String_o *v153; // x4
  int32_t v154; // w5
  int64_t v155; // x6
  System_String_o *v156; // x7
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  UnityEngine_Component_o *v160; // x1
  Il2CppClass **v161; // x0
  System_Collections_Generic_List_object__o *v162; // x22
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  UnityEngine_Component_o *v172; // x1
  Il2CppClass **v173; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  struct System_Object_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  UnityEngine_Component_o *v183; // x1
  Il2CppClass **v184; // x0
  int32_t v185; // w2
  int32_t v186; // w3
  System_String_o *v187; // x4
  int32_t v188; // w5
  int64_t v189; // x6
  System_String_o *v190; // x7
  struct System_Object_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  UnityEngine_Component_o *v194; // x1
  Il2CppClass **v195; // x0
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  UnityEngine_Component_o *v205; // x1
  Il2CppClass **v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  System_String_o *v209; // x4
  int32_t v210; // w5
  int64_t v211; // x6
  System_String_o *v212; // x7
  struct System_Object_array *v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  UnityEngine_Component_o *v216; // x1
  Il2CppClass **v217; // x0
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  UnityEngine_Component_o *v227; // x1
  Il2CppClass **v228; // x0
  int32_t v229; // w2
  int32_t v230; // w3
  System_String_o *v231; // x4
  int32_t v232; // w5
  int64_t v233; // x6
  System_String_o *v234; // x7
  struct System_Object_array *v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x10
  UnityEngine_Component_o *v238; // x1
  Il2CppClass **v239; // x0
  int32_t v240; // w2
  int32_t v241; // w3
  System_String_o *v242; // x4
  int32_t v243; // w5
  int64_t v244; // x6
  System_String_o *v245; // x7
  struct System_Object_array *v246; // x8
  _QWORD *v247; // x9
  __int64 v248; // x10
  UnityEngine_Component_o *v249; // x1
  Il2CppClass **v250; // x0
  int32_t v251; // w2
  int32_t v252; // w3
  System_String_o *v253; // x4
  int32_t v254; // w5
  int64_t v255; // x6
  System_String_o *v256; // x7
  struct System_Object_array *v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  UnityEngine_Component_o *v260; // x1
  Il2CppClass **v261; // x0
  int32_t v262; // w2
  int32_t v263; // w3
  System_String_o *v264; // x4
  int32_t v265; // w5
  int64_t v266; // x6
  System_String_o *v267; // x7
  struct System_Object_array *v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  UnityEngine_Component_o *v271; // x1
  Il2CppClass **v272; // x0
  int32_t v273; // w2
  int32_t v274; // w3
  System_String_o *v275; // x4
  int32_t v276; // w5
  int64_t v277; // x6
  System_String_o *v278; // x7
  struct System_Object_array *v279; // x8
  _QWORD *v280; // x9
  int32_t v281; // w2
  int32_t v282; // w3
  System_String_o *v283; // x4
  int32_t v284; // w5
  int64_t v285; // x6
  System_String_o *v286; // x7
  struct System_Object_array *v287; // x8
  _QWORD *v288; // x9
  __int64 v289; // x10
  UnityEngine_Component_o *v290; // x1
  Il2CppClass **v291; // x0
  int32_t v292; // w2
  int32_t v293; // w3
  System_String_o *v294; // x4
  int32_t v295; // w5
  int64_t v296; // x6
  System_String_o *v297; // x7
  struct System_Object_array *v298; // x8
  _QWORD *v299; // x9
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  struct System_Object_array *v306; // x8
  _QWORD *v307; // x9
  __int64 v308; // x10
  UnityEngine_Component_o *v309; // x1
  Il2CppClass **v310; // x0
  int32_t v311; // w2
  int32_t v312; // w3
  System_String_o *v313; // x4
  int32_t v314; // w5
  int64_t v315; // x6
  System_String_o *v316; // x7
  struct System_Object_array *v317; // x8
  _QWORD *v318; // x9
  __int64 v319; // x10
  UnityEngine_Component_o *v320; // x1
  Il2CppClass **v321; // x0
  int32_t v322; // w2
  int32_t v323; // w3
  System_String_o *v324; // x4
  int32_t v325; // w5
  int64_t v326; // x6
  System_String_o *v327; // x7
  struct System_Object_array *v328; // x8
  _QWORD *v329; // x9
  __int64 v330; // x10
  UnityEngine_Component_o *v331; // x1
  Il2CppClass **v332; // x0
  int32_t v333; // w2
  int32_t v334; // w3
  System_String_o *v335; // x4
  int32_t v336; // w5
  int64_t v337; // x6
  System_String_o *v338; // x7
  struct System_Object_array *v339; // x8
  _QWORD *v340; // x9
  __int64 v341; // x10
  UnityEngine_Component_o *v342; // x1
  Il2CppClass **v343; // x0
  int32_t v344; // w2
  int32_t v345; // w3
  System_String_o *v346; // x4
  int32_t v347; // w5
  int64_t v348; // x6
  System_String_o *v349; // x7
  struct System_Object_array *v350; // x8
  _QWORD *v351; // x9
  __int64 v352; // x10
  UnityEngine_Component_o *v353; // x1
  Il2CppClass **v354; // x0
  int32_t v355; // w2
  int32_t v356; // w3
  System_String_o *v357; // x4
  int32_t v358; // w5
  int64_t v359; // x6
  System_String_o *v360; // x7
  struct System_Object_array *v361; // x8
  _QWORD *v362; // x9
  __int64 v363; // x10
  UnityEngine_Component_o *v364; // x1
  Il2CppClass **v365; // x0
  int32_t v366; // w2
  int32_t v367; // w3
  System_String_o *v368; // x4
  int32_t v369; // w5
  int64_t v370; // x6
  System_String_o *v371; // x7
  struct System_Object_array *v372; // x8
  _QWORD *v373; // x9
  __int64 v374; // x10
  UnityEngine_Component_o *v375; // x1
  Il2CppClass **v376; // x0
  __int64 v377; // x10
  UnityEngine_Component_o *v378; // x1
  Il2CppClass **v379; // x0
  int32_t v380; // w2
  int32_t v381; // w3
  System_String_o *v382; // x4
  int32_t v383; // w5
  int64_t v384; // x6
  System_String_o *v385; // x7
  struct System_Object_array *v386; // x8
  _QWORD *v387; // x9
  __int64 v388; // x10
  unsigned int max_length; // w11
  Il2CppClass **v390; // x0
  __int64 v391; // x10
  Il2CppClass **v392; // x0
  struct ShopNotice_o *v393; // x8
  ShopNoticeRemainTime_o *v394; // x21
  int32_t v395; // w2
  int32_t v396; // w3
  System_String_o *v397; // x4
  int32_t v398; // w5
  int64_t v399; // x6
  System_String_o *v400; // x7
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
  struct ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x22
  UILabel_o *v412; // x20
  ShopNoticeRemainTimeLabel_o *v413; // x21
  int32_t v414; // w2
  int32_t v415; // w3
  System_String_o *v416; // x4
  int32_t v417; // w5
  int64_t v418; // x6
  System_String_o *v419; // x7
  struct ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v421; // x20
  ShopNoticeRemainTimeLabel_o *v422; // x23
  int32_t v423; // w2
  int32_t v424; // w3
  System_String_o *v425; // x4
  int32_t v426; // w5
  int64_t v427; // x6
  System_String_o *v428; // x7
  struct ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x20
  UILabel_o *v430; // x23
  ShopNoticeRemainTimeLabel_o *v431; // x24
  int32_t v432; // w2
  int32_t v433; // w3
  System_String_o *v434; // x4
  int32_t v435; // w5
  int64_t v436; // x6
  System_String_o *v437; // x7
  struct ShopNotice_o *v438; // x8
  struct ShopNotice_o *v439; // x8
  struct ShopNotice_o *v440; // x8
  int32_t v441; // w2
  int32_t v442; // w3
  System_String_o *v443; // x4
  int32_t v444; // w5
  int64_t v445; // x6
  System_String_o *v446; // x7
  struct System_Object_array *v447; // x8
  _QWORD *v448; // x9
  __int64 v449; // x10
  UnityEngine_Component_o *v450; // x1
  Il2CppClass **v451; // x0
  int32_t v452; // w2
  int32_t v453; // w3
  System_String_o *v454; // x4
  int32_t v455; // w5
  int64_t v456; // x6
  System_String_o *v457; // x7
  struct System_Object_array *v458; // x8
  _QWORD *v459; // x9
  __int64 v460; // x10
  UnityEngine_Component_o *v461; // x1
  Il2CppClass **v462; // x0
  int32_t v463; // w2
  int32_t v464; // w3
  System_String_o *v465; // x4
  int32_t v466; // w5
  int64_t v467; // x6
  System_String_o *v468; // x7
  struct System_Object_array *v469; // x8
  _QWORD *v470; // x9
  __int64 v471; // x10
  UnityEngine_Component_o *v472; // x1
  Il2CppClass **v473; // x0
  int32_t v474; // w2
  int32_t v475; // w3
  System_String_o *v476; // x4
  int32_t v477; // w5
  int64_t v478; // x6
  System_String_o *v479; // x7
  struct System_Object_array *v480; // x8
  _QWORD *v481; // x9
  __int64 v482; // x10
  UnityEngine_Component_o *v483; // x1
  Il2CppClass **v484; // x0
  int32_t v485; // w2
  int32_t v486; // w3
  System_String_o *v487; // x4
  int32_t v488; // w5
  int64_t v489; // x6
  System_String_o *v490; // x7
  struct System_Object_array *v491; // x8
  _QWORD *v492; // x9
  __int64 v493; // x10
  UnityEngine_Component_o *v494; // x1
  Il2CppClass **v495; // x0
  int32_t v496; // w2
  int32_t v497; // w3
  System_String_o *v498; // x4
  int32_t v499; // w5
  int64_t v500; // x6
  System_String_o *v501; // x7
  struct System_Object_array *v502; // x8
  _QWORD *v503; // x9
  __int64 v504; // x10
  Il2CppClass **v505; // x0

  if ( (byte_4CEDDFC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__108_0__);
    sub_1C7BAE8(&ShopNoticeRemainTimeLabel_TypeInfo);
    sub_1C7BAE8(&ShopNoticeRemainTime_TypeInfo);
    sub_1C7BAE8(&ShopNoticeTween_TypeInfo);
    byte_4CEDDFC = 1;
  }
  if ( this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    shopNotice = this->fields.shopNotice;
    if ( !shopNotice )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      shopNotice->fields._IsShowNew_k__BackingField,
      0);
    v5 = this->fields.shopNotice;
    if ( !v5 )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v5->fields._LimitedType_k__BackingField != 0,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v6 = this->fields.shopNotice;
    if ( !v6 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v6->fields._LimitedType_k__BackingField == 1,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v7 = this->fields.shopNotice;
    if ( !v7 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v7->fields._LimitedType_k__BackingField == 2,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v8 = this->fields.shopNotice;
    if ( !v8 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v8->fields._LimitedType_k__BackingField == 3,
      0);
    v9 = this->fields.shopNotice;
    if ( !v9 )
      goto LABEL_327;
    if ( v9->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__108_0__, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v10, 1, 0);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v11 = this->fields.shopNotice;
    if ( !v11 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v11->fields._LimitedType_k__BackingField == 4,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v12 = this->fields.shopNotice;
    if ( !v12 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v12->fields._LimitedType_k__BackingField == 1,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v13 = this->fields.shopNotice;
    if ( !v13 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v13->fields._LimitedType_k__BackingField == 2,
      0);
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField == 3,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v15 = this->fields.shopNotice;
    if ( !v15 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v15->fields._IsIndefiniteExchangeServant_k__BackingField,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v16 = this->fields.shopNotice;
    if ( !v16 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v16->fields._LimitedType_k__BackingField == 4,
      0);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_327;
    LimitedType_k__BackingField = v17->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v20 = (ShopNoticeTween_o *)sub_1C7BD34(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v20, (UnityEngine_MonoBehaviour_o *)this, 0);
        this->fields.shopNoticeTween = v20;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.shopNoticeTween,
          (int32_t)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_327;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0);
      v27 = this->fields.shopNotice;
      if ( !v27 )
        goto LABEL_327;
      v28 = v27->fields._LimitedType_k__BackingField;
      switch ( v28 )
      {
        case 6:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          items = v29->fields._items;
          v37 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !items )
            goto LABEL_327;
          size = v29->fields._size;
          v39 = mNewItemSp;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v29->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v39;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v39, v30, v31, v32, v33, v34, v35);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v157 = v29->fields._items;
          v158 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v157 )
            goto LABEL_327;
          v159 = v29->fields._size;
          v160 = mNewItemSp;
          if ( (unsigned int)v159 >= LODWORD(v157->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
          }
          else
          {
            v161 = &v157->obj.klass + v159;
            v29->fields._size = v159 + 1;
            v161[4] = (Il2CppClass *)v160;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v161 + 4), (int32_t)v160, v151, v152, v153, v154, v155, v156);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v268 = v162->fields._items;
          v269 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v268 )
            goto LABEL_327;
          v270 = v162->fields._size;
          v271 = mNewItemSp;
          if ( (unsigned int)v270 >= LODWORD(v268->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
          }
          else
          {
            v272 = &v268->obj.klass + v270;
            v162->fields._size = v270 + 1;
            v272[4] = (Il2CppClass *)v271;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v272 + 4), (int32_t)v271, v262, v263, v264, v265, v266, v267);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          goto LABEL_256;
        case 10:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v58 = v29->fields._items;
          v59 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v58 )
            goto LABEL_327;
          v60 = v29->fields._size;
          v61 = mNewItemSp;
          if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &v58->obj.klass + v60;
            v29->fields._size = v60 + 1;
            v62[4] = (Il2CppClass *)v61;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v62 + 4), (int32_t)v61, v52, v53, v54, v55, v56, v57);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v169 = v29->fields._items;
          v170 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v169 )
            goto LABEL_327;
          v171 = v29->fields._size;
          v172 = mNewItemSp;
          if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
          }
          else
          {
            v173 = &v169->obj.klass + v171;
            v29->fields._size = v171 + 1;
            v173[4] = (Il2CppClass *)v172;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v173 + 4), (int32_t)v172, v163, v164, v165, v166, v167, v168);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v279 = v162->fields._items;
          v280 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v279 )
            goto LABEL_327;
          goto LABEL_237;
        case 12:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v69 = v29->fields._items;
          v70 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v69 )
            goto LABEL_327;
          v71 = v29->fields._size;
          v72 = mNewItemSp;
          if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v69->obj.klass + v71;
            v29->fields._size = v71 + 1;
            v73[4] = (Il2CppClass *)v72;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v72, v63, v64, v65, v66, v67, v68);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v180 = v29->fields._items;
          v181 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v180 )
            goto LABEL_327;
          v182 = v29->fields._size;
          v183 = mNewItemSp;
          if ( (unsigned int)v182 >= LODWORD(v180->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
          }
          else
          {
            v184 = &v180->obj.klass + v182;
            v29->fields._size = v182 + 1;
            v184[4] = (Il2CppClass *)v183;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v184 + 4), (int32_t)v183, v174, v175, v176, v177, v178, v179);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v279 = v162->fields._items;
          v280 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v279 )
            goto LABEL_327;
          goto LABEL_237;
        case 14:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v80 = v29->fields._items;
          v81 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v80 )
            goto LABEL_327;
          v82 = v29->fields._size;
          v83 = mNewItemSp;
          if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v80->obj.klass + v82;
            v29->fields._size = v82 + 1;
            v84[4] = (Il2CppClass *)v83;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)v83, v74, v75, v76, v77, v78, v79);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v191 = v29->fields._items;
          v192 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v191 )
            goto LABEL_327;
          v193 = v29->fields._size;
          v194 = mNewItemSp;
          if ( (unsigned int)v193 >= LODWORD(v191->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
          }
          else
          {
            v195 = &v191->obj.klass + v193;
            v29->fields._size = v193 + 1;
            v195[4] = (Il2CppClass *)v194;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v195 + 4), (int32_t)v194, v185, v186, v187, v188, v189, v190);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v287 = v29->fields._items;
          v288 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v287 )
            goto LABEL_327;
          v289 = v29->fields._size;
          v290 = mNewItemSp;
          if ( (unsigned int)v289 >= LODWORD(v287->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
          }
          else
          {
            v291 = &v287->obj.klass + v289;
            v29->fields._size = v289 + 1;
            v291[4] = (Il2CppClass *)v290;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v291 + 4), (int32_t)v290, v281, v282, v283, v284, v285, v286);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v339 = v162->fields._items;
          v340 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v339 )
            goto LABEL_327;
          v341 = v162->fields._size;
          v342 = mNewItemSp;
          if ( (unsigned int)v341 >= LODWORD(v339->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v340[4] + 192LL) + 112LL));
          }
          else
          {
            v343 = &v339->obj.klass + v341;
            v162->fields._size = v341 + 1;
            v343[4] = (Il2CppClass *)v342;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v343 + 4), (int32_t)v342, v333, v334, v335, v336, v337, v338);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v279 = v162->fields._items;
          v280 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v279 )
            goto LABEL_327;
LABEL_237:
          v377 = v162->fields._size;
          v378 = mNewItemSp;
          if ( (unsigned int)v377 >= LODWORD(v279->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
          }
          else
          {
            v379 = &v279->obj.klass + v377;
            v162->fields._size = v377 + 1;
            v379[4] = (Il2CppClass *)v378;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v379 + 4), (int32_t)v378, v273, v274, v275, v276, v277, v278);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v386 = v162->fields._items;
          v387 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v386 )
            goto LABEL_327;
          goto LABEL_258;
        case 18:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v91 = v29->fields._items;
          v92 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v91 )
            goto LABEL_327;
          v93 = v29->fields._size;
          v94 = mNewItemSp;
          if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &v91->obj.klass + v93;
            v29->fields._size = v93 + 1;
            v95[4] = (Il2CppClass *)v94;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v95 + 4), (int32_t)v94, v85, v86, v87, v88, v89, v90);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v202 = v29->fields._items;
          v203 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v202 )
            goto LABEL_327;
          v204 = v29->fields._size;
          v205 = mNewItemSp;
          if ( (unsigned int)v204 >= LODWORD(v202->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
          }
          else
          {
            v206 = &v202->obj.klass + v204;
            v29->fields._size = v204 + 1;
            v206[4] = (Il2CppClass *)v205;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v206 + 4), (int32_t)v205, v196, v197, v198, v199, v200, v201);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_327;
          goto LABEL_245;
        case 20:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v102 = v29->fields._items;
          v103 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v102 )
            goto LABEL_327;
          v104 = v29->fields._size;
          v105 = mNewItemSp;
          if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
          }
          else
          {
            v106 = &v102->obj.klass + v104;
            v29->fields._size = v104 + 1;
            v106[4] = (Il2CppClass *)v105;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v106 + 4), (int32_t)v105, v96, v97, v98, v99, v100, v101);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v213 = v29->fields._items;
          v214 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v213 )
            goto LABEL_327;
          v215 = v29->fields._size;
          v216 = mNewItemSp;
          if ( (unsigned int)v215 >= LODWORD(v213->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
          }
          else
          {
            v217 = &v213->obj.klass + v215;
            v29->fields._size = v215 + 1;
            v217[4] = (Il2CppClass *)v216;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v217 + 4), (int32_t)v216, v207, v208, v209, v210, v211, v212);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_327;
          goto LABEL_245;
        case 22:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            if ( v29 )
            {
              v113 = v29->fields._items;
              v114 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v29->fields._version;
              if ( v113 )
              {
                v115 = v29->fields._size;
                v116 = mNewItemSp;
                if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v29,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
                }
                else
                {
                  v117 = &v113->obj.klass + v115;
                  v29->fields._size = v115 + 1;
                  v117[4] = (Il2CppClass *)v116;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)(v117 + 4),
                    (int32_t)v116,
                    v107,
                    v108,
                    v109,
                    v110,
                    v111,
                    v112);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
                  v224 = v29->fields._items;
                  v225 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v29->fields._version;
                  if ( v224 )
                  {
                    v226 = v29->fields._size;
                    v227 = mNewItemSp;
                    if ( (unsigned int)v226 >= LODWORD(v224->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v29,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v228 = &v224->obj.klass + v226;
                      v29->fields._size = v226 + 1;
                      v228[4] = (Il2CppClass *)v227;
                      sub_1C7BA8C(
                        (GrandQuestFolderBoardItem_o *)(v228 + 4),
                        (int32_t)v227,
                        v218,
                        v219,
                        v220,
                        v221,
                        v222,
                        v223);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
                      v306 = v29->fields._items;
                      v307 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v29->fields._version;
                      if ( v306 )
                      {
                        v308 = v29->fields._size;
                        v309 = mNewItemSp;
                        if ( (unsigned int)v308 >= LODWORD(v306->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v29,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v307[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v310 = &v306->obj.klass + v308;
                          v29->fields._size = v308 + 1;
                          v310[4] = (Il2CppClass *)v309;
                          sub_1C7BA8C(
                            (GrandQuestFolderBoardItem_o *)(v310 + 4),
                            (int32_t)v309,
                            v300,
                            v301,
                            v302,
                            v303,
                            v304,
                            v305);
                        }
                        v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v162,
                          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
                          if ( v162 )
                          {
                            v350 = v162->fields._items;
                            v351 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v162->fields._version;
                            if ( v350 )
                            {
                              v352 = v162->fields._size;
                              v353 = mNewItemSp;
                              if ( (unsigned int)v352 >= LODWORD(v350->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v162,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v351[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v354 = &v350->obj.klass + v352;
                                v162->fields._size = v352 + 1;
                                v354[4] = (Il2CppClass *)v353;
                                sub_1C7BA8C(
                                  (GrandQuestFolderBoardItem_o *)(v354 + 4),
                                  (int32_t)v353,
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
                                                                          0);
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
          goto LABEL_327;
        case 24:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v124 = v29->fields._items;
          v125 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v124 )
            goto LABEL_327;
          v126 = v29->fields._size;
          v127 = mNewItemSp;
          if ( (unsigned int)v126 >= LODWORD(v124->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
          }
          else
          {
            v128 = &v124->obj.klass + v126;
            v29->fields._size = v126 + 1;
            v128[4] = (Il2CppClass *)v127;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v128 + 4), (int32_t)v127, v118, v119, v120, v121, v122, v123);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v235 = v29->fields._items;
          v236 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v235 )
            goto LABEL_327;
          v237 = v29->fields._size;
          v238 = mNewItemSp;
          if ( (unsigned int)v237 >= LODWORD(v235->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
          }
          else
          {
            v239 = &v235->obj.klass + v237;
            v29->fields._size = v237 + 1;
            v239[4] = (Il2CppClass *)v238;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v239 + 4), (int32_t)v238, v229, v230, v231, v232, v233, v234);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0);
          if ( !v162 )
            goto LABEL_327;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_327;
LABEL_245:
          v388 = v162->fields._size;
          max_length = v298->max_length;
          method = (const MethodInfo *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v135 = v29->fields._items;
          v136 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v135 )
            goto LABEL_327;
          v137 = v29->fields._size;
          v138 = mNewItemSp;
          if ( (unsigned int)v137 >= LODWORD(v135->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v139 = &v135->obj.klass + v137;
            v29->fields._size = v137 + 1;
            v139[4] = (Il2CppClass *)v138;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v139 + 4), (int32_t)v138, v129, v130, v131, v132, v133, v134);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v246 = v29->fields._items;
          v247 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v246 )
            goto LABEL_327;
          v248 = v29->fields._size;
          v249 = mNewItemSp;
          if ( (unsigned int)v248 >= LODWORD(v246->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
          }
          else
          {
            v250 = &v246->obj.klass + v248;
            v29->fields._size = v248 + 1;
            v250[4] = (Il2CppClass *)v249;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v250 + 4), (int32_t)v249, v240, v241, v242, v243, v244, v245);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v317 = v29->fields._items;
          v318 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v317 )
            goto LABEL_327;
          v319 = v29->fields._size;
          v320 = mNewItemSp;
          if ( (unsigned int)v319 >= LODWORD(v317->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
          }
          else
          {
            v321 = &v317->obj.klass + v319;
            v29->fields._size = v319 + 1;
            v321[4] = (Il2CppClass *)v320;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v321 + 4), (int32_t)v320, v311, v312, v313, v314, v315, v316);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v361 = v162->fields._items;
          v362 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v361 )
            goto LABEL_327;
          v363 = v162->fields._size;
          v364 = mNewItemSp;
          if ( (unsigned int)v363 >= LODWORD(v361->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v362[4] + 192LL) + 112LL));
          }
          else
          {
            v365 = &v361->obj.klass + v363;
            v162->fields._size = v363 + 1;
            v365[4] = (Il2CppClass *)v364;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v365 + 4), (int32_t)v364, v355, v356, v357, v358, v359, v360);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_327;
          goto LABEL_251;
        case 28:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v29 )
            goto LABEL_327;
          v146 = v29->fields._items;
          v147 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v146 )
            goto LABEL_327;
          v148 = v29->fields._size;
          v149 = mNewItemSp;
          if ( (unsigned int)v148 >= LODWORD(v146->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = &v146->obj.klass + v148;
            v29->fields._size = v148 + 1;
            v150[4] = (Il2CppClass *)v149;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v150 + 4), (int32_t)v149, v140, v141, v142, v143, v144, v145);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v257 = v29->fields._items;
          v258 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v257 )
            goto LABEL_327;
          v259 = v29->fields._size;
          v260 = mNewItemSp;
          if ( (unsigned int)v259 >= LODWORD(v257->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
          }
          else
          {
            v261 = &v257->obj.klass + v259;
            v29->fields._size = v259 + 1;
            v261[4] = (Il2CppClass *)v260;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v261 + 4), (int32_t)v260, v251, v252, v253, v254, v255, v256);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v328 = v29->fields._items;
          v329 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v29->fields._version;
          if ( !v328 )
            goto LABEL_327;
          v330 = v29->fields._size;
          v331 = mNewItemSp;
          if ( (unsigned int)v330 >= LODWORD(v328->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v329[4] + 192LL) + 112LL));
          }
          else
          {
            v332 = &v328->obj.klass + v330;
            v29->fields._size = v330 + 1;
            v332[4] = (Il2CppClass *)v331;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v332 + 4), (int32_t)v331, v322, v323, v324, v325, v326, v327);
          }
          v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v162,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v162 )
            goto LABEL_327;
          v372 = v162->fields._items;
          v373 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v372 )
            goto LABEL_327;
          v374 = v162->fields._size;
          v375 = mNewItemSp;
          if ( (unsigned int)v374 >= LODWORD(v372->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v373[4] + 192LL) + 112LL));
          }
          else
          {
            v376 = &v372->obj.klass + v374;
            v162->fields._size = v374 + 1;
            v376[4] = (Il2CppClass *)v375;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v376 + 4), (int32_t)v375, v366, v367, v368, v369, v370, v371);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v298 = v162->fields._items;
          v299 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v162->fields._version;
          if ( !v298 )
            goto LABEL_327;
LABEL_251:
          v388 = v162->fields._size;
          max_length = v298->max_length;
LABEL_252:
          if ( (unsigned int)v388 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)method,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
          }
          else
          {
            v390 = &v298->obj.klass + v388;
            v162->fields._size = v388 + 1;
            v390[4] = (Il2CppClass *)method;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v390 + 4), (int32_t)method, v292, v293, v294, v295, v296, v297);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_327;
        default:
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v28 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            if ( !v29 )
              goto LABEL_327;
            v47 = v29->fields._items;
            v48 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v47 )
              goto LABEL_327;
            v49 = v29->fields._size;
            v50 = mNewItemSp;
            if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &v47->obj.klass + v49;
              v29->fields._size = v49 + 1;
              v51[4] = (Il2CppClass *)v50;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v51 + 4), (int32_t)v50, v41, v42, v43, v44, v45, v46);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v447 = v29->fields._items;
            v448 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v447 )
              goto LABEL_327;
            v449 = v29->fields._size;
            v450 = mNewItemSp;
            if ( (unsigned int)v449 >= LODWORD(v447->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v448[4] + 192LL) + 112LL));
            }
            else
            {
              v451 = &v447->obj.klass + v449;
              v29->fields._size = v449 + 1;
              v451[4] = (Il2CppClass *)v450;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v451 + 4), (int32_t)v450, v441, v442, v443, v444, v445, v446);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v458 = v29->fields._items;
            v459 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v458 )
              goto LABEL_327;
            v460 = v29->fields._size;
            v461 = mNewItemSp;
            if ( (unsigned int)v460 >= LODWORD(v458->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v459[4] + 192LL) + 112LL));
            }
            else
            {
              v462 = &v458->obj.klass + v460;
              v29->fields._size = v460 + 1;
              v462[4] = (Il2CppClass *)v461;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v462 + 4), (int32_t)v461, v452, v453, v454, v455, v456, v457);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v469 = v29->fields._items;
            v470 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v29->fields._version;
            if ( !v469 )
              goto LABEL_327;
            v471 = v29->fields._size;
            v472 = mNewItemSp;
            if ( (unsigned int)v471 >= LODWORD(v469->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v470[4] + 192LL) + 112LL));
            }
            else
            {
              v473 = &v469->obj.klass + v471;
              v29->fields._size = v471 + 1;
              v473[4] = (Il2CppClass *)v472;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v473 + 4), (int32_t)v472, v463, v464, v465, v466, v467, v468);
            }
            v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v162,
              (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            if ( !v162 )
              goto LABEL_327;
            v480 = v162->fields._items;
            v481 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v480 )
              goto LABEL_327;
            v482 = v162->fields._size;
            v483 = mNewItemSp;
            if ( (unsigned int)v482 >= LODWORD(v480->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v481[4] + 192LL) + 112LL));
            }
            else
            {
              v484 = &v480->obj.klass + v482;
              v162->fields._size = v482 + 1;
              v484[4] = (Il2CppClass *)v483;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v484 + 4), (int32_t)v483, v474, v475, v476, v477, v478, v479);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v491 = v162->fields._items;
            v492 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v491 )
              goto LABEL_327;
            v493 = v162->fields._size;
            v494 = mNewItemSp;
            if ( (unsigned int)v493 >= LODWORD(v491->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v492[4] + 192LL) + 112LL));
            }
            else
            {
              v495 = &v491->obj.klass + v493;
              v162->fields._size = v493 + 1;
              v495[4] = (Il2CppClass *)v494;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v495 + 4), (int32_t)v494, v485, v486, v487, v488, v489, v490);
            }
            method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
            v502 = v162->fields._items;
            v503 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v502 )
              goto LABEL_327;
            v504 = v162->fields._size;
            if ( (unsigned int)v504 >= LODWORD(v502->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)method,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v503[4] + 192LL) + 112LL));
            }
            else
            {
              v505 = &v502->obj.klass + v504;
              v162->fields._size = v504 + 1;
              v505[4] = (Il2CppClass *)method;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)(v505 + 4),
                (int32_t)method,
                v496,
                v497,
                v498,
                v499,
                v500,
                v501);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_327;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v386 = v162->fields._items;
            v387 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v162->fields._version;
            if ( !v386 )
              goto LABEL_327;
            method = (const MethodInfo *)mNewItemSp;
LABEL_258:
            v391 = v162->fields._size;
            if ( (unsigned int)v391 >= LODWORD(v386->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v162,
                (Il2CppObject *)method,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v387[4] + 192LL) + 112LL));
            }
            else
            {
              v392 = &v386->obj.klass + v391;
              v162->fields._size = v391 + 1;
              v392[4] = (Il2CppClass *)method;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)(v392 + 4),
                (int32_t)method,
                v380,
                v381,
                v382,
                v383,
                v384,
                v385);
            }
          }
          else
          {
            v162 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v162,
              (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_327;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v29,
            (System_Collections_Generic_List_GameObject__o *)v162,
            0);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
          if ( !mNewItemSp )
            goto LABEL_327;
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)mNewItemSp, 0, 0);
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_327;
          ShopNoticeTween__Start((ShopNoticeTween_o *)mNewItemSp, 0);
          break;
      }
    }
    else
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      if ( mNewItemSp )
        ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0);
    }
    v393 = this->fields.shopNotice;
    if ( !v393 )
      goto LABEL_327;
    if ( v393->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v394 = (ShopNoticeRemainTime_o *)sub_1C7BD34(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v394, (UnityEngine_MonoBehaviour_o *)this, 0),
            this->fields.shopNoticeRemainTime = v394,
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields.shopNoticeRemainTime,
              (int32_t)v394,
              v395,
              v396,
              v397,
              v398,
              v399,
              v400),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0);
          v402 = this->fields.shopNotice;
          if ( v402 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v402->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1,
                                                      v401);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0);
              v406 = this->fields.shopNotice;
              if ( v406 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v406->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1,
                                                          v405);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0);
                  v409 = this->fields.shopNotice;
                  if ( v409 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v409->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1,
                                                              v408);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0);
                      p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v412 = this->fields.mPeriodLimitedTimeLb;
                        v413 = (ShopNoticeRemainTimeLabel_o *)sub_1C7BD34(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v413, v412, (UnityEngine_MonoBehaviour_o *)this, 0);
                        this->fields.periodShopNoticeRemainTimeLabel = v413;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int32_t)v413,
                          v414,
                          v415,
                          v416,
                          v417,
                          v418,
                          v419);
                      }
                      p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v421 = this->fields.mMonthlyLimitedTimeLb;
                        v422 = (ShopNoticeRemainTimeLabel_o *)sub_1C7BD34(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v422, v421, (UnityEngine_MonoBehaviour_o *)this, 0);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v422;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int32_t)v422,
                          v423,
                          v424,
                          v425,
                          v426,
                          v427,
                          v428);
                      }
                      p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v430 = this->fields.mExchangeServantItemLb;
                        v431 = (ShopNoticeRemainTimeLabel_o *)sub_1C7BD34(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v431, v430, (UnityEngine_MonoBehaviour_o *)this, 0);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v431;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int32_t)v431,
                          v432,
                          v433,
                          v434,
                          v435,
                          v436,
                          v437);
                      }
                      v438 = this->fields.shopNotice;
                      if ( v438 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          ShopNoticeRemainTimeLabel__SetTimeLimit(
                            (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                            v438->fields._PeriodTimeLimit_k__BackingField,
                            1,
                            0);
                          mNewItemSp = (UnityEngine_Component_o *)*p_periodShopNoticeRemainTimeLabel;
                          if ( *p_periodShopNoticeRemainTimeLabel )
                          {
                            ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
                            v439 = this->fields.shopNotice;
                            if ( v439 )
                            {
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                              if ( mNewItemSp )
                              {
                                ShopNoticeRemainTimeLabel__SetTimeLimit(
                                  (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                                  v439->fields._MonthlyTimeLimit_k__BackingField,
                                  1,
                                  0);
                                mNewItemSp = (UnityEngine_Component_o *)*p_monthlyShopNoticeRemainTimeLabel;
                                if ( *p_monthlyShopNoticeRemainTimeLabel )
                                {
                                  ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
                                  v440 = this->fields.shopNotice;
                                  if ( v440 )
                                  {
                                    mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                    if ( mNewItemSp )
                                    {
                                      ShopNoticeRemainTimeLabel__SetTimeLimit(
                                        (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                                        v440->fields._ExchangeServantTimeLimit_k__BackingField,
                                        1,
                                        0);
                                      mNewItemSp = (UnityEngine_Component_o *)*p_exchangeServantShopNoticeRemainTimeLabel;
                                      if ( *p_exchangeServantShopNoticeRemainTimeLabel )
                                      {
                                        ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
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
      sub_1C7BD40(mNewItemSp, method);
    }
  }
}


void MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  GachaMaster_o *Master_object; // x0
  Il2CppObject *summonCampainObject; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x27
  int32_t klass; // w21
  struct System_Collections_Generic_Dictionary_GameObject__int__o *campaignNoticeMap; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x1
  System_String_o *v14; // x21
  __int64 v15; // x1
  Il2CppObject *v16; // x1
  UnityEngine_GameObject_o *summonCampaignRootObject; // x0
  Il2CppObject *campaignNoticePrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  CampaignNoticeObject_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  int32_t v25; // w23
  System_Action_int__o *v26; // x24
  UISprite_o *campaignSprite; // x23
  System_Collections_Generic_List_object__o *summonCampaignObjects; // x21
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int32_t v41; // w21
  __int64 v42; // x1
  struct System_Collections_Generic_Dictionary_GameObject__int__o *v43; // x0
  const MethodInfo *v44; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v47; // x1
  UILabel_o *summonCampainNumLabel; // x20
  int v49; // w23
  int v50; // w22
  UISprite_o *oneTimeFreeSprite; // x20
  struct ShopNoticeTween_o **p_summonNoticeTween; // x20
  ShopNoticeTween_o *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct System_Collections_Generic_List_GameObject__o *v60; // x8
  System_Collections_Generic_List_object__o *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  __int64 v76; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-B8h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-9Ch] BYREF
  int64_t endedAt; // [xsp+28h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-90h] BYREF
  int32_t remainNum; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+40h] [xbp-80h] BYREF
  int v83; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4CEDDFE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_int__TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_MainMenuBarBase_OnClickSummonCampaign__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ShopNoticeTween_TypeInfo);
    sub_1C7BAE8(&UserGachaMaster_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6561/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/);
    sub_1C7BAE8(&StringLiteral_20408/*"icon_summoncampaign_80557"*/);
    sub_1C7BAE8(&StringLiteral_20409/*"icon_summoncampaign_{0}"*/);
    sub_1C7BAE8(&StringLiteral_6562/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/);
    byte_4CEDDFE = 1;
  }
  memset(&v82, 0, sizeof(v82));
  remainNum = 0;
  endedAt = 0;
  entity = 0;
  maxNum = 0;
  if ( this->fields.isOpen )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !Master_object )
      goto LABEL_91;
    ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                          Master_object,
                                                                          0);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaDetailMaster___);
    v83 = 0;
    if ( !ValidGachaEntityList )
      goto LABEL_91;
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      ValidGachaEntityList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v76 = 0;
    v82 = v77;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v82,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
      if ( !v7 )
        break;
      current = v82.fields._current;
      if ( !v82.fields._current )
        sub_1C7BD40(v7, v8);
      if ( LODWORD(v82.fields._current[3].klass) == 3 )
      {
        klass = (int32_t)v82.fields._current[1].klass;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v7 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(klass, &remainNum, &maxNum, 0);
        if ( v7 )
        {
          v83 += remainNum;
          campaignNoticeMap = this->fields.campaignNoticeMap;
          if ( !campaignNoticeMap )
            sub_1C7BD40(0, v8);
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)campaignNoticeMap,
            (Il2CppObject *)this->fields.summonCampainObject,
            (int32_t)current[1].klass,
            (const MethodInfo_34E9748 *)Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
          BYTE4(v76) = 1;
        }
      }
      if ( !v6 )
        sub_1C7BD40(v7, v8);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v6,
             &entity,
             (int32_t)current[1].klass,
             (const MethodInfo_342E348 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C7BD40(0, v12);
        if ( GachaDetailEntity__IsPrivilegeSummon((GachaDetailEntity_o *)entity, &endedAt, 0) )
        {
          LODWORD(v77.fields._list) = current[1].klass;
          v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
          v14 = System_String__Format((System_String_o *)StringLiteral_20409/*"icon_summoncampaign_{0}"*/, v13, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( !AtlasManager__IsExistBanner(v14, 0) )
          {
            LODWORD(v77.fields._list) = 501;
            v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
            v14 = System_String__Format((System_String_o *)StringLiteral_20409/*"icon_summoncampaign_{0}"*/, v16, 0);
          }
          summonCampaignRootObject = this->fields.summonCampaignRootObject;
          if ( !summonCampaignRootObject )
            sub_1C7BD40(0, v15);
          campaignNoticePrefab = (Il2CppObject *)this->fields.campaignNoticePrefab;
          transform = UnityEngine_GameObject__get_transform(summonCampaignRootObject, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v20 = UnityEngine_Object__Instantiate_object__52412380(
                  campaignNoticePrefab,
                  transform,
                  (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___);
          v22 = (CampaignNoticeObject_o *)v20;
          if ( !v20 )
            sub_1C7BD40(0, v21);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0);
          if ( !gameObject )
            sub_1C7BD40(0, v24);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          v25 = (int32_t)current[1].klass;
          v26 = (System_Action_int__o *)sub_1C7BD34(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v26,
            (Il2CppObject *)this,
            (intptr_t)Method_MainMenuBarBase_OnClickSummonCampaign__,
            0);
          CampaignNoticeObject__Initialize(v22, v25, v26, 0);
          CampaignNoticeObject__StartUpdateLimitTime(v22, endedAt, (UnityEngine_MonoBehaviour_o *)this, 0);
          campaignSprite = v22->fields.campaignSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetBanner(campaignSprite, v14, 0);
          summonCampaignObjects = (System_Collections_Generic_List_object__o *)this->fields.summonCampaignObjects;
          v29 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
          v36 = v29;
          if ( !summonCampaignObjects )
            sub_1C7BD40(v29, v29);
          items = summonCampaignObjects->fields._items;
          v38 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++summonCampaignObjects->fields._version;
          if ( !items )
            sub_1C7BD40(v29, v29);
          size = summonCampaignObjects->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              summonCampaignObjects,
              v29,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            summonCampaignObjects->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v36;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v36, v30, v31, v32, v33, v34, v35);
          }
        }
      }
      v41 = (int32_t)current[1].klass;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( UserGachaMaster__IsOneTimeFreeCampaignActive(v41, 0) )
      {
        v43 = this->fields.campaignNoticeMap;
        if ( !v43 )
          sub_1C7BD40(0, v42);
        LOBYTE(v76) = 1;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v43,
          (Il2CppObject *)this->fields.summonOneTimeFreeObject,
          (int32_t)current[1].klass,
          (const MethodInfo_34E9748 *)Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v82,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    if ( (v76 & 0x100000000LL) != 0 )
    {
      Master_object = (GachaMaster_o *)this->fields.summonCampainObject;
      if ( !Master_object )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      summonCampainLabel1 = this->fields.summonCampainLabel1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6561/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v44);
      if ( !summonCampainLabel1 )
        goto LABEL_91;
      UILabel__set_text(summonCampainLabel1, (System_String_o *)Master_object, 0);
      summonCampainLabel2 = this->fields.summonCampainLabel2;
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6562/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v47);
      if ( !summonCampainLabel2 )
        goto LABEL_91;
      UILabel__set_text(summonCampainLabel2, (System_String_o *)Master_object, 0);
      summonCampainNumLabel = this->fields.summonCampainNumLabel;
      Master_object = (GachaMaster_o *)System_Int32__ToString((int32_t)&v83, 0);
      if ( !summonCampainNumLabel )
        goto LABEL_91;
      UILabel__set_text(summonCampainNumLabel, (System_String_o *)Master_object, 0);
      v49 = 1;
      if ( (v76 & 1) == 0 )
      {
        v50 = 0;
        goto LABEL_66;
      }
    }
    else
    {
      v49 = 0;
      v50 = 0;
      if ( (v76 & 1) == 0 )
        goto LABEL_66;
    }
    Master_object = (GachaMaster_o *)this->fields.summonOneTimeFreeObject;
    if ( !Master_object )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    oneTimeFreeSprite = this->fields.oneTimeFreeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(oneTimeFreeSprite, (System_String_o *)StringLiteral_20408/*"icon_summoncampaign_80557"*/, 0);
    v50 = 1;
LABEL_66:
    Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
    p_summonNoticeTween = &this->fields.summonNoticeTween;
    if ( Master_object
      || (v53 = (ShopNoticeTween_o *)sub_1C7BD34(ShopNoticeTween_TypeInfo),
          ShopNoticeTween___ctor(v53, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.summonNoticeTween = v53,
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.summonNoticeTween,
            (int32_t)v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59),
          (Master_object = (GachaMaster_o *)this->fields.summonNoticeTween) != 0) )
    {
      ShopNoticeTween__Stop((ShopNoticeTween_o *)Master_object, 0);
      v60 = this->fields.summonCampaignObjects;
      if ( v60 )
      {
        if ( v50 + v49 + v60->fields._size < 2 )
          return;
        v61 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v61,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        if ( v49 )
        {
          if ( !v61 )
            goto LABEL_91;
          summonCampainObject = (Il2CppObject *)this->fields.summonCampainObject;
          v68 = v61->fields._items;
          v69 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v61->fields._version;
          if ( !v68 )
            goto LABEL_91;
          v70 = v61->fields._size;
          if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v61,
              summonCampainObject,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v71 = &v68->obj.klass + v70;
            v61->fields._size = v70 + 1;
            v71[4] = (Il2CppClass *)summonCampainObject;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)(v71 + 4),
              (int32_t)summonCampainObject,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67);
          }
        }
        summonCampainObject = (Il2CppObject *)this->fields.summonCampaignObjects;
        if ( !summonCampainObject )
          goto LABEL_91;
        if ( SLODWORD(summonCampainObject[1].monitor) >= 1 )
        {
          if ( !v61 )
            goto LABEL_91;
          System_Collections_Generic_List_object___AddRange(
            v61,
            (System_Collections_Generic_IEnumerable_T__o *)summonCampainObject,
            (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
        if ( v50 )
        {
          if ( !v61 )
            goto LABEL_91;
          summonCampainObject = (Il2CppObject *)this->fields.summonOneTimeFreeObject;
          v72 = v61->fields._items;
          v73 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v61->fields._version;
          if ( !v72 )
            goto LABEL_91;
          v74 = v61->fields._size;
          if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v61,
              summonCampainObject,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &v72->obj.klass + v74;
            v61->fields._size = v74 + 1;
            v75[4] = (Il2CppClass *)summonCampainObject;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)(v75 + 4),
              (int32_t)summonCampainObject,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67);
          }
        }
        Master_object = (GachaMaster_o *)*p_summonNoticeTween;
        if ( *p_summonNoticeTween )
        {
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)Master_object,
            this->fields.summonCampaignRootObject,
            (System_Collections_Generic_List_GameObject__o *)v61,
            0,
            0);
          Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
          if ( Master_object )
          {
            ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)Master_object, 0, 0);
            Master_object = (GachaMaster_o *)*p_summonNoticeTween;
            if ( *p_summonNoticeTween )
            {
              ShopNoticeTween__Start((ShopNoticeTween_o *)Master_object, 0);
              return;
            }
          }
        }
      }
    }
LABEL_91:
    sub_1C7BD40(Master_object, summonCampainObject);
  }
}


void MainMenuBarBase__SendSelectSignal(
        MainMenuBarBase_o *this,
        int32_t type,
        System_String_o *message,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x1
  PlayMakerFSM_o *v23; // x0

  if ( (byte_4CEDDF8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8545/*"MAIN_MENU_BAR_SELECT"*/);
    byte_4CEDDF8 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0, 0) && !System_String__IsNullOrEmpty(message, 0) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectedKind,
      (int32_t)message,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this->fields.selectedObject = obj;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectedObject, (int32_t)obj, v16, v17, v18, v19, v20, v21);
    v23 = this->fields.activeSceneFSM;
    if ( !v23 )
      sub_1C7BD40(0, v22);
    PlayMakerFSM__SendEvent(v23, (System_String_o *)StringLiteral_8545/*"MAIN_MENU_BAR_SELECT"*/, 0);
  }
}


void MainMenuBarBase__SetActiveScene(
        MainMenuBarBase_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct PlayMakerFSM_o *myFSM; // x1
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  UnityEngine_Component_o *v16; // x23
  UnityEngine_Transform_o *v17; // x24
  UnityEngine_GameObject_o *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  if ( (byte_4CEDDF4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDF4 = 1;
  }
  this->fields.activeScene = scene;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.activeScene,
    (int32_t)scene,
    kind,
    panelDepth,
    (System_String_o *)cam,
    (int32_t)method,
    v6,
    v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_27;
    ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_27;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0);
    if ( !gameObject )
      goto LABEL_27;
    ComponentInChildren_object__51801640 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v16 = (UnityEngine_Component_o *)ComponentInChildren_object__51801640;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v16 )
      goto LABEL_27;
    v17 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v16, 0);
    if ( !v17 )
      goto LABEL_27;
    UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)gameObject, 0);
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    gameObject = UnityEngine_Component__get_gameObject(v16, 0);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0);
    if ( !v18 )
      goto LABEL_27;
    UnityEngine_GameObject__set_layer(v18, (int32_t)gameObject, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scene, 0, 0);
  myFSM = 0;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_27;
    myFSM = scene->fields.myFSM;
  }
  this->fields.activeSceneFSM = myFSM;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.activeSceneFSM, (int32_t)myFSM, v19, v20, v21, v22, v23, v24);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v25),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v26),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0) )
  {
LABEL_27:
    sub_1C7BD40(gameObject, myFSM);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
}


void MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mAllBtnAct = act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAllBtnAct,
    (int32_t)act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetButtonActive(MainMenuBarBase_o *this, int32_t kind, bool isActive, const MethodInfo *method)
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  partyBtn = this->fields.partyBtn;
  if ( isActive )
    v6 = 2;
  else
    v6 = 1;
  if ( !partyBtn )
    goto LABEL_41;
  v9 = kind == 3 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v9, 0);
  partyBtn = this->fields.summonBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v10 = kind == 4 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v10, 0);
  partyBtn = this->fields.combineBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v11 = kind == 5 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v11, 0);
  partyBtn = this->fields.shopBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v12 = kind == 6 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v12, 0);
  partyBtn = this->fields.friendBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v13 = kind == 7 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v13, 0);
  partyBtn = this->fields.myroomBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v14 = kind == 8 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v14, 0);
  partyBtn = this->fields.terminalBtn;
  if ( !partyBtn )
    goto LABEL_41;
  if ( kind == 1 )
    v15 = 3;
  else
    v15 = v6;
  MainMenuBarButton__SetMode(partyBtn, v15, 0);
  if ( kind == 8 && isActive )
  {
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, *(const MethodInfo **)&kind);
    goto LABEL_40;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_41:
    sub_1C7BD40(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v22 = 3;
  else
    v22 = v6;
  MainMenuBarButton__SetMode(partyBtn, v22, 0);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectedKind, 0, v16, v17, v18, v19, v20, v21);
  this->fields.selectedObject = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectedObject, 0, v23, v24, v25, v26, v27, v28);
  this->fields.fadeType = 1;
}


void MainMenuBarBase__SetButtonKind(MainMenuBarBase_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.kind = kind;
}


void MainMenuBarBase__SetDispBtnAct(
        MainMenuBarBase_o *this,
        int32_t kind,
        System_Action_o *act,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_array *mDispBtnActList; // x8
  Il2CppClass **v9; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_1C7BD40(this, kind);
  if ( LODWORD(mDispBtnActList->max_length) <= kind )
    sub_1C7BD48(this);
  v9 = &mDispBtnActList->obj.klass + kind;
  v9[4] = (Il2CppClass *)act;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 4), (int32_t)act, (int32_t)act, (int32_t)method, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetDispBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mDispBtnList; // x0
  int32_t v8; // w22
  UnityEngine_Object_o *v9; // x24
  UnityEngine_Collider_o *v10; // x23
  UnityEngine_Object_o *summonBtn; // x25
  const MethodInfo *v12; // x2
  bool enabled; // w0

  if ( (byte_4CEDE13 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CEDE13 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_22:
    sub_1C7BD40(mDispBtnList, is_enable);
  v8 = 0;
  while ( v8 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v8,
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      v9 = (UnityEngine_Object_o *)mDispBtnList;
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( mDispBtnList )
        {
          v10 = (UnityEngine_Collider_o *)mDispBtnList;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mDispBtnList, kind == v8 && is_enable, 0);
          summonBtn = (UnityEngine_Object_o *)this->fields.summonBtn;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v9, summonBtn, 0) )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__IsProgressDone(1, 0) )
              goto LABEL_18;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_40989036(101, 0) )
              enabled = UnityEngine_Collider__get_enabled(v10, 0);
            else
LABEL_18:
              enabled = 0;
            MainMenuBarBase__SetSummonBalloonIcon(this, enabled, v12);
          }
          mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
          ++v8;
          if ( mDispBtnList )
            continue;
        }
      }
    }
    goto LABEL_22;
  }
}


void MainMenuBarBase__SetMenuActive(MainMenuBarBase_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


void MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mMenuBtnAct = act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mMenuBtnAct,
    (int32_t)act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetMenuBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool isEnable,
        bool isGray,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0
  __int64 v8; // x1

  if ( (byte_4CEDE12 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4CEDE12 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0);
  menuStateBtn = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0);
  if ( !isEnable )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( !menuStateBtn )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, 0, 0);
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (!isGray ? (v8 = 0) : (v8 = 3),
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))menuStateBtn->klass[1]._1.nestedTypes)(
          menuStateBtn,
          v8,
          1,
          menuStateBtn->klass[1]._1.implementedInterfaces),
        (menuStateBtn = (UnityEngine_Component_o *)this->fields.menuFrameBnt) == 0) )
  {
LABEL_18:
    sub_1C7BD40(menuStateBtn, isEnable);
  }
  UIButtonColor__set_state((UIButtonColor_o *)menuStateBtn, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetOutSideColliderEnable(MainMenuBarBase_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0

  if ( (byte_4CEDE02 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4CEDE02 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_10;
  if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)menuStateBtn, 0) )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( menuStateBtn )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, is_enable, 0);
      return;
    }
LABEL_10:
    sub_1C7BD40(menuStateBtn, is_enable);
  }
}


void MainMenuBarBase__SetSceneChangeFadeType(MainMenuBarBase_o *this, int32_t fadeType, const MethodInfo *method)
{
  this->fields.fadeType = fadeType;
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetSummonBalloonIcon(MainMenuBarBase_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonCampainObject; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEDE14 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_BoxCollider___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4CEDE14 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  summonCampainObject = this->fields.summonCampainObject;
  if ( !summonCampainObject )
    goto LABEL_14;
  summonCampainObject = UnityEngine_GameObject__get_gameObject(summonCampainObject, 0);
  if ( !summonCampainObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             summonCampainObject,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        MainMenuBarBase__TrySetColliderEnabled(
          (MainMenuBarBase_o *)Component_object,
          (UnityEngine_Collider_o *)Component_object,
          isEnable,
          v7),
        (summonCampainObject = (UnityEngine_GameObject_o *)this->fields.oneTimeFreeSprite) == 0)
    || (summonCampainObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonCampainObject, 0)) == 0
    || (v8 = UnityEngine_GameObject__GetComponent_object_(
               summonCampainObject,
               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        MainMenuBarBase__TrySetColliderEnabled((MainMenuBarBase_o *)v8, (UnityEngine_Collider_o *)v8, isEnable, v9),
        (summonCampainObject = (UnityEngine_GameObject_o *)this->fields.summonCampaignObjects) == 0) )
  {
LABEL_14:
    sub_1C7BD40(summonCampainObject, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)summonCampainObject,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1C7BD40(0, v10);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v13.fields._current,
                                   (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_BoxCollider___);
    MainMenuBarBase__TrySetColliderEnabled(
      (MainMenuBarBase_o *)ComponentInChildren_object,
      (UnityEngine_Collider_o *)ComponentInChildren_object,
      isEnable,
      v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


System_Collections_IEnumerator_o *MainMenuBarBase__SetTerminalQuestListClose(
        MainMenuBarBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CEDE05 & 1) == 0 )
  {
    sub_1C7BAE8(&MainMenuBarBase__SetTerminalQuestListClose_d__118_TypeInfo);
    byte_4CEDE05 = 1;
  }
  v5 = sub_1C7BD34(MainMenuBarBase__SetTerminalQuestListClose_d__118_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__118___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__118_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void MainMenuBarBase__Start(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MainMenuBarBase__BackActive(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SwitchMenu(MainMenuBarBase_o *this, bool is_open, bool is_play_se, const MethodInfo *method)
{
  UnityEngine_GameObject_o *menuComp; // x0
  float x; // s9
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v11; // x2
  struct System_Collections_Hashtable_o *table; // x23
  struct System_Collections_Hashtable_o *v13; // x23
  struct System_Collections_Hashtable_o *v14; // x23
  struct System_Collections_Hashtable_o *v15; // x23
  struct System_Collections_Hashtable_o *v16; // x23
  System_Collections_Hashtable_o *v17; // x23
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  float v22; // s10
  struct System_Collections_Hashtable_o *v23; // x23
  struct System_Collections_Hashtable_o *v24; // x23
  struct System_Collections_Hashtable_o *v25; // x23
  struct System_Collections_Hashtable_o *v26; // x23
  struct System_Collections_Hashtable_o *v27; // x23
  System_Collections_Hashtable_o *v28; // x21
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  int32_t v31; // w1
  float v32; // [xsp+0h] [xbp-60h] BYREF
  int v33; // [xsp+4h] [xbp-5Ch]
  float v34; // [xsp+8h] [xbp-58h]
  int v35; // [xsp+18h] [xbp-48h] BYREF
  _BYTE v36[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEDDF9 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&Method_MainMenuBarBase_SwitchMenu__);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18870/*"easetype"*/);
    sub_1C7BAE8(&StringLiteral_22624/*"onMoveComplete"*/);
    sub_1C7BAE8(&StringLiteral_18113/*"closeMenuStateImg"*/);
    sub_1C7BAE8(&StringLiteral_18855/*"easeInQuad"*/);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22639/*"oncompletetarget"*/);
    sub_1C7BAE8(&StringLiteral_22644/*"onstarttarget"*/);
    sub_1C7BAE8(&StringLiteral_22955/*"position"*/);
    sub_1C7BAE8(&StringLiteral_21107/*"isLocal"*/);
    sub_1C7BAE8(&StringLiteral_22642/*"onstart"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&StringLiteral_22682/*"openMenuStateImg"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CEDDF9 = 1;
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
    menuComp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(menuComp, 0);
    if ( !menuComp )
      goto LABEL_47;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)menuComp, 0);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    x = localPosition.fields.x;
    z = localPosition.fields.z;
    gameObject = UnityEngine_GameObject__get_gameObject(menuComp, 0);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v11);
    menuComp = (UnityEngine_GameObject_o *)this->fields.mMenuNoticeNumber;
    if ( !menuComp )
      goto LABEL_47;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)menuComp, !is_open, 0);
    if ( is_open )
    {
      menuComp = (UnityEngine_GameObject_o *)this->fields.table;
      if ( menuComp )
      {
        (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
          menuComp,
          menuComp->klass[1].vtable._0_Equals.methodPtr);
        table = this->fields.table;
        v36[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v36);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
            table,
            StringLiteral_21107/*"isLocal"*/,
            menuComp,
            table->klass->vtable._22_Add.method);
          v13 = this->fields.table;
          v32 = x;
          v34 = z;
          v33 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v32);
          if ( v13 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
              v13,
              StringLiteral_22955/*"position"*/,
              menuComp,
              v13->klass->vtable._22_Add.method);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                menuComp,
                StringLiteral_22642/*"onstart"*/,
                StringLiteral_22682/*"openMenuStateImg"*/,
                *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
              v14 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( v14 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
                  v14,
                  StringLiteral_22644/*"onstarttarget"*/,
                  menuComp,
                  v14->klass->vtable._22_Add.method);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                    menuComp,
                    StringLiteral_22637/*"oncomplete"*/,
                    StringLiteral_22624/*"onMoveComplete"*/,
                    *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
                  v15 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                  if ( v15 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
                      v15,
                      StringLiteral_22639/*"oncompletetarget"*/,
                      menuComp,
                      v15->klass->vtable._22_Add.method);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                        menuComp,
                        StringLiteral_18870/*"easetype"*/,
                        StringLiteral_18855/*"easeInQuad"*/,
                        *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
                      v16 = this->fields.table;
                      v35 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v35);
                      if ( v16 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
                          v16,
                          StringLiteral_24308/*"time"*/,
                          menuComp,
                          v16->klass->vtable._22_Add.method);
                        v17 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        iTween__MoveTo_63814476(gameObject, v17, 0);
                        MainMenuBarBase__ResetShopNotice(this, v18);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v19);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v20);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v21);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v29 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v29 = (_QWORD *)sub_1C7BB00(Method_MainMenuBarBase_SwitchMenu__);
                        v30 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v29, v29[4]);
                        if ( is_open )
                          v31 = 9;
                        else
                          v31 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v30, v31, 0, 0);
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
      sub_1C7BD40(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v22 = -420.0;
    else
      v22 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
      menuComp,
      menuComp->klass[1].vtable._0_Equals.methodPtr);
    v23 = this->fields.table;
    v36[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v36);
    if ( !v23 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v23->klass->vtable._22_Add.methodPtr)(
      v23,
      StringLiteral_21107/*"isLocal"*/,
      menuComp,
      v23->klass->vtable._22_Add.method);
    v24 = this->fields.table;
    v32 = x;
    v33 = LODWORD(v22);
    v34 = z;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v32);
    if ( !v24 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v24->klass->vtable._22_Add.methodPtr)(
      v24,
      StringLiteral_22955/*"position"*/,
      menuComp,
      v24->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_22642/*"onstart"*/,
      StringLiteral_18113/*"closeMenuStateImg"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v25 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v25 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v25->klass->vtable._22_Add.methodPtr)(
      v25,
      StringLiteral_22644/*"onstarttarget"*/,
      menuComp,
      v25->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_22637/*"oncomplete"*/,
      StringLiteral_22624/*"onMoveComplete"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v26 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v26 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v26->klass->vtable._22_Add.methodPtr)(
      v26,
      StringLiteral_22639/*"oncompletetarget"*/,
      menuComp,
      v26->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_18870/*"easetype"*/,
      StringLiteral_18855/*"easeInQuad"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v27 = this->fields.table;
    v35 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v35);
    if ( !v27 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v27->klass->vtable._22_Add.methodPtr)(
      v27,
      StringLiteral_24308/*"time"*/,
      menuComp,
      v27->klass->vtable._22_Add.method);
    v28 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_63814476(gameObject, v28, 0);
    if ( is_play_se )
      goto LABEL_40;
  }
}


void MainMenuBarBase__TrySetColliderEnabled(
        MainMenuBarBase_o *this,
        UnityEngine_Collider_o *collider,
        bool isEnabled,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CEDE15 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDE15 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)collider, 0, 0);
  if ( v6 )
  {
    if ( !collider )
      sub_1C7BD40(v6, v7);
    UnityEngine_Collider__set_enabled(collider, isEnabled, 0);
  }
}


void MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
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

  if ( (byte_4CEDDF3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEDDF3 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0, 0) )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C51B7C(v5);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C51B7C(v5);
    UserData = **(DataManager_o ***)(v7 + 184);
    if ( !UserData )
      goto LABEL_41;
    MasterData_object = DataManager__GetMasterData_object_(
                          UserData,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
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
                                  0);
    if ( !UserData )
      goto LABEL_41;
    m_CancellationTokenSource = (int)UserData->fields.m_CancellationTokenSource;
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C51B7C(v10);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C51B7C(v10);
    UserData = **(DataManager_o ***)(v13 + 184);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserData, 0);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)GachaEntity__getPrice((GachaEntity_o *)UserData, 0);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, m_CancellationTokenSource / (int)UserData, 0);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0, 0) )
  {
    UserData = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)UserData, 2, 0);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, (int32_t)UserData, 0);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0, 0) )
  {
    UserData = (DataManager_o *)this->fields.mMenuNoticeNumber;
    if ( UserData )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserData, 0, 0);
      return;
    }
LABEL_41:
    sub_1C7BD40(UserData, v4);
  }
}


void MainMenuBarBase___ResetShopNoticeDraw_b__108_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarBase_o *v2; // x19
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4CEDE19 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    this = (MainMenuBarBase_o *)sub_1C7BAE8(&StringLiteral_20395/*"icon_servant_exchange_available_{0}"*/);
    byte_4CEDE19 = 1;
  }
  shopNotice = v2->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v2->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField);
  v6 = System_String__Format((System_String_o *)StringLiteral_20395/*"icon_servant_exchange_available_{0}"*/, v5, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v6, 0) )
  {
    this = (MainMenuBarBase_o *)v2->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v2->fields.mExchangeServantItemDefaultAtlas, 0);
      this = (MainMenuBarBase_o *)v2->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v2->fields.mExchangeServantItemDefaultSpriteName, 0);
        return;
      }
    }
LABEL_11:
    sub_1C7BD40(this, method);
  }
}


void MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CEDE00 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20629/*"img_menu_menu"*/);
    byte_4CEDE00 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20629/*"img_menu_menu"*/, 0),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.thread_static_fields_offset)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.token),
        (menuStateBtn = this->fields.menuStateBtn) == 0) )
  {
    sub_1C7BD40(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0);
  AndroidBackKeyManager__RemoveBackBtn(gameObject, 0);
}


bool MainMenuBarBase__get_IsCloseHideMode(MainMenuBarBase_o *this, const MethodInfo *method)
{
  return this->fields.mIsCloseHideMode;
}


bool MainMenuBarBase__get_IsEnableOutSideCollider(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mOutSide; // x0

  mOutSide = (UnityEngine_Collider_o *)this->fields.mOutSide;
  if ( !mOutSide )
    sub_1C7BD40(0, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0);
}


bool MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool isOpen; // w1
  __int64 v5; // x1
  UnityEngine_Component_o *mNewItemSp; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *summonCampaignObjects; // x8
  const MethodInfo *size; // x2
  int v10; // w9
  ShopNoticeTween_o *summonNoticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEDE01 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDE01 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  isOpen = this->fields.isOpen;
  this->fields.isSwitchMenuMoving = 0;
  MainMenuBarBase__SetOutSideColliderEnable(this, isOpen, v2);
  if ( !this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_24;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_24;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)mNewItemSp,
                                              0);
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampainObject;
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonOneTimeFreeObject;
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampaignObjects;
    if ( !mNewItemSp )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)mNewItemSp,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    summonCampaignObjects = this->fields.summonCampaignObjects;
    if ( !summonCampaignObjects )
LABEL_24:
      sub_1C7BD40(mNewItemSp, v5);
    size = (const MethodInfo *)(unsigned int)summonCampaignObjects->fields._size;
    v10 = summonCampaignObjects->fields._version + 1;
    summonCampaignObjects->fields._size = 0;
    summonCampaignObjects->fields._version = v10;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)summonCampaignObjects->fields._items, 0, (int32_t)size, 0);
    summonNoticeTween = this->fields.summonNoticeTween;
    if ( summonNoticeTween )
      ShopNoticeTween__Stop(summonNoticeTween, 0);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, size);
  }
}


void MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CEDDFF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20628/*"img_menu_close"*/);
    byte_4CEDDFF = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20628/*"img_menu_close"*/, 0),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.thread_static_fields_offset)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.token),
        (menuStateBtn = this->fields.menuStateBtn) == 0) )
  {
    sub_1C7BD40(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
}


void MainMenuBarBase__set_IsCloseHideMode(MainMenuBarBase_o *this, bool value, const MethodInfo *method)
{
  this->fields.mIsCloseHideMode = value;
  if ( value )
    GameObjectExtensions__SetLocalPositionY(this->fields.menuComp, -420.0, 0);
}


void MainMenuBarBase__SetTerminalQuestListClose_d__118___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__118_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MainMenuBarBase__SetTerminalQuestListClose_d__118__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__118_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  TerminalSceneComponent_c *mTitleInfo; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct TerminalSceneComponent_o *v8; // x8
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4CEDE25 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__118_0__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CEDE25 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEBA49 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEBA49 = 1;
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
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  mTitleInfo = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTitleInfo = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mTitleInfo->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_29;
  mTitleInfo = (TerminalSceneComponent_c *)mInstance->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mTitleInfo, 0, 0);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  mTitleInfo = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTitleInfo = TerminalSceneComponent_TypeInfo;
  }
  v8 = mTitleInfo->static_fields->mInstance;
  if ( !v8
    || (mTitleInfo = (TerminalSceneComponent_c *)v8->fields.mTerminalList) == 0
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)mTitleInfo, 0, 0), !_4__this) )
  {
LABEL_29:
    sub_1C7BD40(mTitleInfo, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0);
  v9 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__118_0__,
    0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C7BD34(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *MainMenuBarBase__SetTerminalQuestListClose_d__118__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__118_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__118__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__118_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__118_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MainMenuBarBase__SetTerminalQuestListClose_d__118__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__118_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MainMenuBarBase__SetTerminalQuestListClose_d__118__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__118_o *this,
        const MethodInfo *method)
{
  ;
}


void MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEDE23 & 1) == 0 )
  {
    sub_1C7BAE8(&MainMenuBarBase___c_TypeInfo);
    byte_4CEDE23 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)MainMenuBarBase___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MainMenuBarBase___c___OnClickTerminal_b__117_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  ScrTerminalListTop_o *v3; // x0
  QuestRewardItemAction_c *klass; // x8
  QuestRewardItemAction_c *v5; // x8

  if ( (byte_4CEDE24 & 1) == 0 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEDE24 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEBA49 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEBA49 = 1;
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
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.friendPointBoostItemAction->klass;
  if ( !klass )
    goto LABEL_24;
  v3 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
  if ( !v3 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v3, 0);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = v3->fields.friendPointBoostItemAction->klass;
  if ( !v5 || (v3 = *(ScrTerminalListTop_o **)&v5->_2.element_size) == 0 )
LABEL_24:
    sub_1C7BD40(v3, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v3, 0, 0);
}


void MainMenuBarBase___c__DisplayClass140_0___ctor(
        MainMenuBarBase___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MainMenuBarBase___c__DisplayClass140_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C7BD40(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0);
}


void MainMenuBarBase___c__DisplayClass140_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0);
}