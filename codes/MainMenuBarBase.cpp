void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v3; // x8
  struct MainMenuBarBase_StaticFields *v4; // x9

  if ( (byte_49FBB97 & 1) == 0 )
  {
    sub_1B640C8(&MainMenuBarBase_TypeInfo, v1);
    byte_49FBB97 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Hashtable_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Action_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FBB96 & 1) == 0 )
  {
    sub_1B640C8(&System_Action___TypeInfo, method);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo, v6);
    byte_49FBB96 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_MainMenuBarButton__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mDispBtnList, (int32_t)v7, v8, v9);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v12 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v10, v11);
  System_Collections_Hashtable___ctor_61954820(v12, 0LL);
  this->fields.table = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.table, (int32_t)v12, v13, v14);
  v15 = (struct System_Action_array *)sub_1B64170(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mDispBtnActList, (int32_t)v15, v16, v17);
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
  int32_t v10; // w3
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int32_t v13; // w2
  int v14; // w8
  Il2CppObject *terminalBtn; // x1
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *partyBtn; // x1
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *summonBtn; // x1
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *combineBtn; // x1
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *shopBtn; // x1
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *friendBtn; // x1
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *myroomBtn; // x1
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *latestScenarioBtn; // x1
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  Il2CppObject *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v71; // x20
  UnityEngine_GameObject_o *v72; // x0
  MainMenuBarBase_c *v73; // x0
  Il2CppObject *Component_object; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  Il2CppObject *v78; // x20
  UnityEngine_GameObject_o *v79; // x20
  UnityEngine_GameObject_o *v80; // x0
  MainMenuBarBase_c *v81; // x0
  Il2CppObject *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  Il2CppObject *v86; // x20
  UnityEngine_GameObject_o *v87; // x20
  UnityEngine_GameObject_o *v88; // x0
  MainMenuBarBase_c *v89; // x0
  Il2CppObject *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int32_t v97; // w2
  int32_t v98; // w3
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  struct UISprite_o *v103; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v105; // x1

  if ( (byte_49FBB77 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__, v4);
    sub_1B640C8(&MainMenuBarBase_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&ShopTopListViewManager_TypeInfo, v8);
    byte_49FBB77 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_109;
  v13 = *((_DWORD *)mDispBtnList + 6);
  v14 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v14;
  if ( v13 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v13, 0LL);
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
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = v16 + 8 * v18;
    *((_DWORD *)mDispBtnList + 6) = v18 + 1;
    *(_QWORD *)(v19 + 32) = terminalBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)terminalBtn, v13, v10);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  partyBtn = (Il2CppObject *)this->fields.partyBtn;
  v23 = *((_QWORD *)mDispBtnList + 2);
  v24 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v23 )
    goto LABEL_109;
  v25 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      partyBtn,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * v25;
    *((_DWORD *)mDispBtnList + 6) = v25 + 1;
    *(_QWORD *)(v26 + 32) = partyBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)partyBtn, v20, v21);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  summonBtn = (Il2CppObject *)this->fields.summonBtn;
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
      summonBtn,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * v32;
    *((_DWORD *)mDispBtnList + 6) = v32 + 1;
    *(_QWORD *)(v33 + 32) = summonBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)summonBtn, v27, v28);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  combineBtn = (Il2CppObject *)this->fields.combineBtn;
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
      combineBtn,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = v37 + 8 * v39;
    *((_DWORD *)mDispBtnList + 6) = v39 + 1;
    *(_QWORD *)(v40 + 32) = combineBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)combineBtn, v34, v35);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  shopBtn = (Il2CppObject *)this->fields.shopBtn;
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
      shopBtn,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * v46;
    *((_DWORD *)mDispBtnList + 6) = v46 + 1;
    *(_QWORD *)(v47 + 32) = shopBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)shopBtn, v41, v42);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  friendBtn = (Il2CppObject *)this->fields.friendBtn;
  v51 = *((_QWORD *)mDispBtnList + 2);
  v52 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v51 )
    goto LABEL_109;
  v53 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      friendBtn,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = v51 + 8 * v53;
    *((_DWORD *)mDispBtnList + 6) = v53 + 1;
    *(_QWORD *)(v54 + 32) = friendBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)friendBtn, v48, v49);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  myroomBtn = (Il2CppObject *)this->fields.myroomBtn;
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
      myroomBtn,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = v58 + 8 * v60;
    *((_DWORD *)mDispBtnList + 6) = v60 + 1;
    *(_QWORD *)(v61 + 32) = myroomBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 32), (int32_t)myroomBtn, v55, v56);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  latestScenarioBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v65 = *((_QWORD *)mDispBtnList + 2);
  v66 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v65 )
    goto LABEL_109;
  v67 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      latestScenarioBtn,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v68 = v65 + 8 * v67;
    *((_DWORD *)mDispBtnList + 6) = v67 + 1;
    *(_QWORD *)(v68 + 32) = latestScenarioBtn;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 32), (int32_t)latestScenarioBtn, v62, v63);
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
                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_109;
    v71 = (UnityEngine_GameObject_o *)mDispBtnList;
    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_33381252(v71, v72, 0LL);
    v73 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v73 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v71, v73->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v71 )
      goto LABEL_109;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v71,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.mMenuNoticeNumber,
      (int32_t)Component_object,
      v75,
      v76);
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
    v78 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v78,
                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_109;
    v79 = (UnityEngine_GameObject_o *)mDispBtnList;
    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_33381252(v79, v80, 0LL);
    v81 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v81 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v79, v81->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v79 )
      goto LABEL_109;
    v82 = UnityEngine_GameObject__GetComponent_object_(
            v79,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v82;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mSummonNoticeNumber, (int32_t)v82, v83, v84);
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
    v86 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v86,
                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_109;
    v87 = (UnityEngine_GameObject_o *)mDispBtnList;
    v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_33381252(v87, v88, 0LL);
    v89 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v89 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v87, v89->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v87 )
      goto LABEL_109;
    v90 = UnityEngine_GameObject__GetComponent_object_(
            v87,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v90;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFriendNoticeNumber, (int32_t)v90, v91, v92);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v94, v95);
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
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (int32_t)mAtlas,
        v97,
        v98);
      v103 = this->fields.mExchangeServantItemSp;
      if ( v103 )
      {
        mSpriteName = v103->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int32_t)mSpriteName,
          v101,
          v102);
        goto LABEL_107;
      }
    }
LABEL_109:
    sub_1B64324(mDispBtnList);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v105);
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
    sub_1B64324(backCloseSprite);
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

  if ( (byte_49FBB80 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, method);
    sub_1B640C8(&MyRoomRootComponent_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_49FBB80 = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v10 = *(MyRoomStateMaterial_o **)(v9 + 880);
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
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
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
    sub_1B64324(Instance);
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

  if ( (byte_49FBB7F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FBB7F = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1B64324(terminalBtn);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9257 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9257 = 1;
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
  int32_t v14; // w2
  int32_t v15; // w3
  float mFrameInPosY; // s14
  float v17; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  float v22; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v26; // x21
  float v27; // s12
  float v28; // s13
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x23
  float v35; // s3
  float v36; // s0
  float v37; // s5
  float v38; // s2
  float v39; // s4
  float v40; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FBB95 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, is_framein);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v7);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    sub_1B640C8(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, v9);
    sub_1B640C8(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, v10);
    sub_1B640C8(&MainMenuBarBase___c__DisplayClass125_0_TypeInfo, v11);
    byte_49FBB95 = 1;
  }
  v12 = sub_1B64314(MainMenuBarBase___c__DisplayClass125_0_TypeInfo, is_framein, is_force);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    goto LABEL_29;
  *(_QWORD *)(v12 + 16) = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)gameObject, v14, v15);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v17 = this->fields.mFrameInPosY;
  else
    v17 = -90.0;
  *(float *)(v12 + 32) = v17;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v12 + 16),
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v12 + 24) = Component_object;
  v19 = (MoveObject_o **)(v12 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)Component_object, v20, v21);
  if ( is_force
    || (v22 = *(float *)(v12 + 32),
        v22 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), 0LL)) )
  {
    gameObject = *v19;
    if ( *v19 )
    {
      MoveObject__Stop(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), *(float *)(v12 + 32), 0LL);
      return;
    }
LABEL_29:
    sub_1B64324(gameObject);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v42 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  v26 = *(MoveObject_o **)(v12 + 24);
  v27 = v42.fields.x;
  v28 = v42.fields.z;
  v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, 0LL);
  v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(v34, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, 0LL);
  if ( !v26 )
    goto LABEL_29;
  if ( is_framein )
    v35 = x;
  else
    v35 = v27;
  if ( is_framein )
    v36 = v27;
  else
    v36 = x;
  if ( is_framein )
    v37 = z;
  else
    v37 = v28;
  if ( is_framein )
    v38 = v28;
  else
    v38 = z;
  v39 = v17;
  v40 = -90.0;
  if ( !is_framein )
    v40 = mFrameInPosY;
  MoveObject__Play(
    v26,
    *(UnityEngine_Vector3_o *)&v36,
    *(UnityEngine_Vector3_o *)&v35,
    IntpTime_AutoResume,
    v31,
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v14; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_39232144; // x22
  _BOOL8 IsClearAllMainScenario; // x0
  bool v17; // w23
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v21; // x20
  MainMenuBarBase_c *v22; // x0

  if ( (byte_49FBB92 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestScriptMaster___, warId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_1B640C8(&MainMenuBarBase_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    byte_49FBB92 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v14 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_26;
  MovedEventScriptList_39232144 = QuestScriptMaster__GetMovedEventScriptList_39232144(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_26;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL);
  v17 = IsClearAllMainScenario;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId((const MethodInfo *)IsClearAllMainScenario);
  if ( !v14 )
    goto LABEL_26;
  if ( v17 )
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetLatestMainScenarioLastQuest(
                                    v14,
                                    (int64_t)Instance,
                                    MovedEventScriptList_39232144,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(
                                    v14,
                                    (int64_t)Instance,
                                    MovedEventScriptList_39232144,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0LL )
  {
LABEL_26:
    sub_1B64324(Instance);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0LL);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v21 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v22 = MainMenuBarBase_TypeInfo;
      if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
        v22 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v22->static_fields->FOLDER_WAR_ID )
        *warId = v21->fields.parentWarId;
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
  __int64 v5; // x1
  QuestRewardTokenAction_c *v6; // x8
  __int64 v7; // x8

  if ( (byte_49FBB8A & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12140/*"SPOT SELECT WAIT"*/, v2);
    byte_49FBB8A = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
  if ( (System_String__IndexOf_61406964((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12140/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
    byte_49F76BD = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = MyFsmP->fields.boardGameTokenAction->klass;
  if ( !v6
    || (v7 = *(_QWORD *)&v6->_2.thread_static_fields_offset) == 0
    || (MyFsmP = *(ScrTerminalListTop_o **)(v7 + 528)) == 0LL )
  {
LABEL_26:
    sub_1B64324(MyFsmP);
  }
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_49FBB8D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8455/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, method);
    byte_49FBB8D = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1B64324(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8455/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v6);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Action_array *v10; // x8
  Il2CppClass **v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  _QWORD *v14; // x0
  int32_t v15; // w19
  System_Reflection_MethodBase_o *v16; // x0

  v6 = this;
  if ( (byte_49FBB87 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1B640C8(&Method_MainMenuBarBase_OnClickCommon__, *(_QWORD *)&kind);
    byte_49FBB87 = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( mDispBtnActList->max_length <= kind )
        goto LABEL_16;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0LL);
      v10 = v6->fields.mDispBtnActList;
      if ( v10 )
      {
        if ( v10->max_length > kind )
        {
          v11 = &v10->obj.klass + kind;
          v11[4] = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 4), 0, v8, v9);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.mAllBtnAct, 0, v12, v13);
          v14 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1B640E0(Method_MainMenuBarBase_OnClickCommon__);
          v15 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1B6432C(this, *(_QWORD *)&kind);
      }
    }
    sub_1B64324(this);
  }
  v14 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B640E0(Method_MainMenuBarBase_OnClickCommon__);
  v15 = 2;
LABEL_14:
  v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, v15, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_49FBB8B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8459/*"MAIN_MENU_BAR_SELECT_PARTY"*/, method);
    byte_49FBB8B = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1B64324(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8459/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_49FBB8F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8456/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, method);
    byte_49FBB8F = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1B64324(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8456/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v6);
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
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  MyRoomRootComponent_c *v13; // x0
  int32_t v14; // w21
  int32_t v15; // w22
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x23
  SceneJumpInfo_o *v17; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FBB91 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomRootComponent_TypeInfo, method);
    sub_1B640C8(&SceneJumpInfo_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_8457/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, v4);
    byte_49FBB91 = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1B64324(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v7);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v8, &questId[1], questId, v9) )
    {
      v13 = MyRoomRootComponent_TypeInfo;
      if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v13 = MyRoomRootComponent_TypeInfo;
      }
      v15 = questId[0];
      v14 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v13->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v17 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v10, v11);
      SceneJumpInfo___ctor_38274804(v17, MYROOM_STATE_NEW_MATERIAL, v14, v15, 0LL);
    }
    else
    {
      v17 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8457/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v17, v12);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_49FBB90 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8457/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, method);
    byte_49FBB90 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1B64324(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8457/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v6);
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

  if ( (byte_49FBB8E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8460/*"MAIN_MENU_BAR_SELECT_SHOP"*/, method);
    byte_49FBB8E = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1B64324(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8460/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_49FBB8C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8461/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, method);
    byte_49FBB8C = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1B64324(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8461/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v6);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  System_Threading_CancellationTokenSource_c *klass; // x8
  UnityEngine_Object_o *v20; // x20
  TerminalPramsManager_c *v21; // x0
  System_Threading_CancellationTokenSource_c *v22; // x8
  System_String_o *v23; // x20
  System_Threading_CancellationTokenSource_c *v24; // x8
  TerminalPramsManager_c *v25; // x0
  System_Threading_CancellationTokenSource_c *v26; // x8
  __int64 v27; // x1
  TerminalSceneComponent_c *v28; // x0
  TerminalPramsManager_c *v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  MainMenuBarBase___c_c *v32; // x0
  System_Action_o *_9__107_0; // x20
  Il2CppObject *v34; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_IEnumerator_o *v38; // x1
  System_Threading_CancellationTokenSource_c *v39; // x8
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  TerminalPramsManager_c *v42; // x0
  System_Threading_CancellationTokenSource_c *v43; // x8

  if ( (byte_49FBB88 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
    sub_1B640C8(&Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, v6);
    sub_1B640C8(&MainMenuBarBase___c_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_8462/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, v8);
    sub_1B640C8(&StringLiteral_12140/*"SPOT SELECT WAIT"*/, v9);
    sub_1B640C8(&StringLiteral_3385/*"CAPTER WAIT"*/, v10);
    byte_49FBB88 = 1;
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v14);
      byte_49F76BD = 1;
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v17);
      byte_49F76BD = 1;
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
    v20 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
LABEL_126:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F964B )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
        byte_49F964B = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_49F7A3E )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
        v29 = TerminalPramsManager_TypeInfo;
        byte_49F7A3E = 1;
      }
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_49F966E )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
        v29 = TerminalPramsManager_TypeInfo;
        byte_49F966E = 1;
      }
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_93;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_127;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9257 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
      byte_49F9257 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    if ( v21->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_127;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v17);
      byte_49F76BD = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v22 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v22 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v22->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    v23 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_61406964((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12140/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_61406964(v23, (System_String_o *)StringLiteral_3385/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v17);
      byte_49F76BD = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v24 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v24->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0LL) )
    {
LABEL_127:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F964B )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
        byte_49F964B = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      v25->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_49F7A3E )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
        v25 = TerminalPramsManager_TypeInfo;
        byte_49F7A3E = 1;
      }
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = TerminalPramsManager_TypeInfo;
      }
      v25->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v17);
        byte_49F76BD = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v26 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( v26 )
      {
        terminalBtn = *(MainMenuBarButton_o **)&v26->_2.static_fields_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v27);
            byte_49F76BD = 1;
          }
          v28 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v28 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v28->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8462/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v18);
            return;
          }
        }
      }
LABEL_123:
      sub_1B64324(terminalBtn);
    }
    if ( (System_String__IndexOf_61406964(v23, (System_String_o *)StringLiteral_3385/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v30);
        byte_49F76BD = 1;
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
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v40);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9AB5 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
        byte_49F9AB5 = 1;
      }
      v42 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v42 = TerminalPramsManager_TypeInfo;
      }
      v42->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v41);
        byte_49F76BD = 1;
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
      v32 = MainMenuBarBase___c_TypeInfo;
      if ( !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v32 = MainMenuBarBase___c_TypeInfo;
      }
      _9__107_0 = v32->static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          v32 = MainMenuBarBase___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v32->static_fields->__9;
        _9__107_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
        System_Action___ctor(_9__107_0, v34, Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, 0LL);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__107_0 = _9__107_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v36, v37);
      }
      v38 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__107_0, v31);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v38, 0LL);
    }
  }
}


void __fastcall MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w2
  int32_t v5; // w3

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0LL);
  this->fields.mMenuBtnAct = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mMenuBtnAct, 0, v4, v5);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FBB7B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49FBB7B = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
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

  if ( (byte_49FBB7C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_8458/*"MAIN_MENU_BAR_SELECT_NONE"*/, v3);
    byte_49FBB7C = 1;
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
        sub_1B64324(v6);
    }
    else
    {
      if ( !v6 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8458/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v6, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49FBB7A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49FBB7A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F7A3E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_49FBB82 & 1) == 0 )
  {
    sub_1B640C8(&ShopTopListViewManager_TypeInfo, method);
    byte_49FBB82 = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v4, v5);
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
  __int64 v18; // x1
  __int64 v19; // x2
  struct ShopNotice_o *v20; // x8
  System_Action_o *v21; // x20
  struct ShopNotice_o *v22; // x8
  struct ShopNotice_o *v23; // x8
  struct ShopNotice_o *v24; // x8
  struct ShopNotice_o *v25; // x8
  struct ShopNotice_o *v26; // x8
  struct ShopNotice_o *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  struct ShopNotice_o *v30; // x8
  unsigned int LimitedType_k__BackingField; // w8
  struct ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 v37; // x2
  struct ShopNotice_o *v38; // x8
  int32_t v39; // w23
  System_Collections_Generic_List_object__o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v46; // x1
  Il2CppClass **v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  UnityEngine_Component_o *v55; // x1
  Il2CppClass **v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  UnityEngine_Component_o *v62; // x1
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  UnityEngine_Component_o *v69; // x1
  Il2CppClass **v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  UnityEngine_Component_o *v76; // x1
  Il2CppClass **v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  UnityEngine_Component_o *v83; // x1
  Il2CppClass **v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  UnityEngine_Component_o *v90; // x1
  Il2CppClass **v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  UnityEngine_Component_o *v97; // x1
  Il2CppClass **v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  UnityEngine_Component_o *v104; // x1
  Il2CppClass **v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  UnityEngine_Component_o *v111; // x1
  Il2CppClass **v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  UnityEngine_Component_o *v118; // x1
  Il2CppClass **v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  UnityEngine_Component_o *v125; // x1
  Il2CppClass **v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  System_Collections_Generic_List_object__o *v129; // x22
  int32_t v130; // w2
  int32_t v131; // w3
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  UnityEngine_Component_o *v135; // x1
  Il2CppClass **v136; // x0
  __int64 v137; // x1
  __int64 v138; // x2
  int32_t v139; // w2
  int32_t v140; // w3
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  UnityEngine_Component_o *v144; // x1
  Il2CppClass **v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  int32_t v148; // w2
  int32_t v149; // w3
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  UnityEngine_Component_o *v153; // x1
  Il2CppClass **v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  UnityEngine_Component_o *v160; // x1
  Il2CppClass **v161; // x0
  __int64 v162; // x1
  __int64 v163; // x2
  int32_t v164; // w2
  int32_t v165; // w3
  struct System_Object_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  UnityEngine_Component_o *v169; // x1
  Il2CppClass **v170; // x0
  __int64 v171; // x1
  __int64 v172; // x2
  int32_t v173; // w2
  int32_t v174; // w3
  struct System_Object_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  UnityEngine_Component_o *v178; // x1
  Il2CppClass **v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  UnityEngine_Component_o *v185; // x1
  Il2CppClass **v186; // x0
  __int64 v187; // x1
  __int64 v188; // x2
  int32_t v189; // w2
  int32_t v190; // w3
  struct System_Object_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  UnityEngine_Component_o *v194; // x1
  Il2CppClass **v195; // x0
  int32_t v196; // w2
  int32_t v197; // w3
  struct System_Object_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  UnityEngine_Component_o *v201; // x1
  Il2CppClass **v202; // x0
  int32_t v203; // w2
  int32_t v204; // w3
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  UnityEngine_Component_o *v208; // x1
  Il2CppClass **v209; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  int32_t v214; // w2
  int32_t v215; // w3
  struct System_Object_array *v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  UnityEngine_Component_o *v219; // x1
  Il2CppClass **v220; // x0
  __int64 v221; // x1
  __int64 v222; // x2
  int32_t v223; // w2
  int32_t v224; // w3
  struct System_Object_array *v225; // x8
  _QWORD *v226; // x9
  int32_t v227; // w2
  int32_t v228; // w3
  struct System_Object_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  UnityEngine_Component_o *v232; // x1
  Il2CppClass **v233; // x0
  __int64 v234; // x1
  __int64 v235; // x2
  int32_t v236; // w2
  int32_t v237; // w3
  struct System_Object_array *v238; // x8
  _QWORD *v239; // x9
  __int64 v240; // x10
  UnityEngine_Component_o *v241; // x1
  Il2CppClass **v242; // x0
  __int64 v243; // x1
  __int64 v244; // x2
  int32_t v245; // w2
  int32_t v246; // w3
  struct System_Object_array *v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  UnityEngine_Component_o *v250; // x1
  Il2CppClass **v251; // x0
  __int64 v252; // x1
  __int64 v253; // x2
  int32_t v254; // w2
  int32_t v255; // w3
  struct System_Object_array *v256; // x8
  _QWORD *v257; // x9
  __int64 v258; // x10
  UnityEngine_Component_o *v259; // x1
  Il2CppClass **v260; // x0
  int32_t v261; // w2
  int32_t v262; // w3
  struct System_Object_array *v263; // x8
  _QWORD *v264; // x9
  __int64 v265; // x10
  UnityEngine_Component_o *v266; // x1
  Il2CppClass **v267; // x0
  int32_t v268; // w2
  int32_t v269; // w3
  struct System_Object_array *v270; // x8
  _QWORD *v271; // x9
  __int64 v272; // x10
  UnityEngine_Component_o *v273; // x1
  Il2CppClass **v274; // x0
  int32_t v275; // w2
  int32_t v276; // w3
  struct System_Object_array *v277; // x8
  _QWORD *v278; // x9
  __int64 v279; // x10
  UnityEngine_Component_o *v280; // x1
  Il2CppClass **v281; // x0
  __int64 v282; // x10
  UnityEngine_Component_o *v283; // x1
  Il2CppClass **v284; // x0
  int32_t v285; // w2
  int32_t v286; // w3
  Il2CppObject *mExchangeServantTimeRoot; // x1
  struct System_Object_array *v288; // x8
  _QWORD *v289; // x9
  __int64 v290; // x10
  unsigned int max_length; // w11
  Il2CppObject *v292; // x1
  Il2CppClass **v293; // x0
  __int64 v294; // x10
  Il2CppClass **v295; // x0
  struct ShopNotice_o *v296; // x8
  ShopNoticeRemainTime_o *v297; // x21
  int32_t v298; // w2
  int32_t v299; // w3
  const MethodInfo *v300; // x2
  struct ShopNotice_o *v301; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v304; // x2
  struct ShopNotice_o *v305; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v307; // x2
  struct ShopNotice_o *v308; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  __int64 v310; // x1
  __int64 v311; // x2
  UILabel_o *v312; // x20
  ShopNoticeRemainTimeLabel_o *v313; // x22
  int32_t v314; // w2
  int32_t v315; // w3
  UILabel_o *v316; // x20
  ShopNoticeRemainTimeLabel_o *v317; // x22
  int32_t v318; // w2
  int32_t v319; // w3
  UILabel_o *v320; // x20
  ShopNoticeRemainTimeLabel_o *v321; // x22
  int32_t v322; // w2
  int32_t v323; // w3
  struct ShopNotice_o *v324; // x8
  struct ShopNotice_o *v325; // x8
  struct ShopNotice_o *v326; // x8
  int32_t v327; // w2
  int32_t v328; // w3
  struct System_Object_array *v329; // x8
  _QWORD *v330; // x9
  __int64 v331; // x10
  UnityEngine_Component_o *v332; // x1
  Il2CppClass **v333; // x0
  int32_t v334; // w2
  int32_t v335; // w3
  struct System_Object_array *v336; // x8
  _QWORD *v337; // x9
  __int64 v338; // x10
  UnityEngine_Component_o *v339; // x1
  Il2CppClass **v340; // x0
  int32_t v341; // w2
  int32_t v342; // w3
  struct System_Object_array *v343; // x8
  _QWORD *v344; // x9
  __int64 v345; // x10
  UnityEngine_Component_o *v346; // x1
  Il2CppClass **v347; // x0
  __int64 v348; // x1
  __int64 v349; // x2
  int32_t v350; // w2
  int32_t v351; // w3
  struct System_Object_array *v352; // x8
  _QWORD *v353; // x9
  __int64 v354; // x10
  UnityEngine_Component_o *v355; // x1
  Il2CppClass **v356; // x0
  int32_t v357; // w2
  int32_t v358; // w3
  struct System_Object_array *v359; // x8
  _QWORD *v360; // x9
  __int64 v361; // x10
  UnityEngine_Component_o *v362; // x1
  Il2CppClass **v363; // x0
  int32_t v364; // w2
  int32_t v365; // w3
  Il2CppObject *v366; // x1
  struct System_Object_array *v367; // x8
  _QWORD *v368; // x9
  __int64 v369; // x10
  Il2CppClass **v370; // x0

  if ( (byte_49FBB81 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, v8);
    sub_1B640C8(&ShopNoticeRemainTimeLabel_TypeInfo, v9);
    sub_1B640C8(&ShopNoticeRemainTime_TypeInfo, v10);
    sub_1B640C8(&ShopNoticeTween_TypeInfo, v11);
    byte_49FBB81 = 1;
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
    v20 = this->fields.shopNotice;
    if ( !v20 )
      goto LABEL_324;
    if ( v20->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v21, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
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
      v22->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v23 = this->fields.shopNotice;
    if ( !v23 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v23->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
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
      v24->fields._LimitedType_k__BackingField == 2,
      0LL);
    v25 = this->fields.shopNotice;
    if ( !v25 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v25->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
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
      !v26->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
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
      v27->fields._LimitedType_k__BackingField == 4,
      0LL);
    v30 = this->fields.shopNotice;
    if ( !v30 )
      goto LABEL_324;
    LimitedType_k__BackingField = v30->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v33 = (ShopNoticeTween_o *)sub_1B64314(ShopNoticeTween_TypeInfo, v28, v29);
        ShopNoticeTween___ctor(v33, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v33;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shopNoticeTween, (int32_t)v33, v34, v35);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_324;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v38 = this->fields.shopNotice;
      if ( !v38 )
        goto LABEL_324;
      v39 = v38->fields._LimitedType_k__BackingField;
      switch ( v39 )
      {
        case 6:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          items = v40->fields._items;
          v44 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !items )
            goto LABEL_324;
          size = v40->fields._size;
          v46 = mNewItemSp;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v40->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v46;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v46, v41, v42);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v122 = v40->fields._items;
          v123 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v122 )
            goto LABEL_324;
          v124 = v40->fields._size;
          v125 = mNewItemSp;
          if ( (unsigned int)v124 >= v122->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
          }
          else
          {
            v126 = &v122->obj.klass + v124;
            v40->fields._size = v124 + 1;
            v126[4] = (Il2CppClass *)v125;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v126 + 4), (int32_t)v125, v120, v121);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v127,
                                                                v128);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v205 = v129->fields._items;
          v206 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v205 )
            goto LABEL_324;
          v207 = v129->fields._size;
          v208 = mNewItemSp;
          if ( (unsigned int)v207 >= v205->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v129,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
          }
          else
          {
            v209 = &v205->obj.klass + v207;
            v129->fields._size = v207 + 1;
            v209[4] = (Il2CppClass *)v208;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v209 + 4), (int32_t)v208, v203, v204);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          goto LABEL_256;
        case 10:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v59 = v40->fields._items;
          v60 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v59 )
            goto LABEL_324;
          v61 = v40->fields._size;
          v62 = mNewItemSp;
          if ( (unsigned int)v61 >= v59->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &v59->obj.klass + v61;
            v40->fields._size = v61 + 1;
            v63[4] = (Il2CppClass *)v62;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v62, v57, v58);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v132 = v40->fields._items;
          v133 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v132 )
            goto LABEL_324;
          v134 = v40->fields._size;
          v135 = mNewItemSp;
          if ( (unsigned int)v134 >= v132->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          }
          else
          {
            v136 = &v132->obj.klass + v134;
            v40->fields._size = v134 + 1;
            v136[4] = (Il2CppClass *)v135;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v136 + 4), (int32_t)v135, v130, v131);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v137,
                                                                v138);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v212 = v129->fields._items;
          v213 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v212 )
            goto LABEL_324;
          goto LABEL_237;
        case 12:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v66 = v40->fields._items;
          v67 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v66 )
            goto LABEL_324;
          v68 = v40->fields._size;
          v69 = mNewItemSp;
          if ( (unsigned int)v68 >= v66->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v70 = &v66->obj.klass + v68;
            v40->fields._size = v68 + 1;
            v70[4] = (Il2CppClass *)v69;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v69, v64, v65);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v141 = v40->fields._items;
          v142 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v141 )
            goto LABEL_324;
          v143 = v40->fields._size;
          v144 = mNewItemSp;
          if ( (unsigned int)v143 >= v141->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = &v141->obj.klass + v143;
            v40->fields._size = v143 + 1;
            v145[4] = (Il2CppClass *)v144;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v145 + 4), (int32_t)v144, v139, v140);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v146,
                                                                v147);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v212 = v129->fields._items;
          v213 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v212 )
            goto LABEL_324;
          goto LABEL_237;
        case 14:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v73 = v40->fields._items;
          v74 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v73 )
            goto LABEL_324;
          v75 = v40->fields._size;
          v76 = mNewItemSp;
          if ( (unsigned int)v75 >= v73->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = &v73->obj.klass + v75;
            v40->fields._size = v75 + 1;
            v77[4] = (Il2CppClass *)v76;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 4), (int32_t)v76, v71, v72);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v150 = v40->fields._items;
          v151 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v150 )
            goto LABEL_324;
          v152 = v40->fields._size;
          v153 = mNewItemSp;
          if ( (unsigned int)v152 >= v150->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
          }
          else
          {
            v154 = &v150->obj.klass + v152;
            v40->fields._size = v152 + 1;
            v154[4] = (Il2CppClass *)v153;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v154 + 4), (int32_t)v153, v148, v149);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v216 = v40->fields._items;
          v217 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v216 )
            goto LABEL_324;
          v218 = v40->fields._size;
          v219 = mNewItemSp;
          if ( (unsigned int)v218 >= v216->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
          }
          else
          {
            v220 = &v216->obj.klass + v218;
            v40->fields._size = v218 + 1;
            v220[4] = (Il2CppClass *)v219;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 4), (int32_t)v219, v214, v215);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v221,
                                                                v222);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v256 = v129->fields._items;
          v257 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v256 )
            goto LABEL_324;
          v258 = v129->fields._size;
          v259 = mNewItemSp;
          if ( (unsigned int)v258 >= v256->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v129,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
          }
          else
          {
            v260 = &v256->obj.klass + v258;
            v129->fields._size = v258 + 1;
            v260[4] = (Il2CppClass *)v259;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v260 + 4), (int32_t)v259, v254, v255);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v212 = v129->fields._items;
          v213 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v212 )
            goto LABEL_324;
LABEL_237:
          v282 = v129->fields._size;
          v283 = mNewItemSp;
          if ( (unsigned int)v282 >= v212->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v129,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
          }
          else
          {
            v284 = &v212->obj.klass + v282;
            v129->fields._size = v282 + 1;
            v284[4] = (Il2CppClass *)v283;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v284 + 4), (int32_t)v283, v210, v211);
          }
          mExchangeServantTimeRoot = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
          v288 = v129->fields._items;
          v289 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v288 )
            goto LABEL_324;
          goto LABEL_258;
        case 18:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v80 = v40->fields._items;
          v81 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v80 )
            goto LABEL_324;
          v82 = v40->fields._size;
          v83 = mNewItemSp;
          if ( (unsigned int)v82 >= v80->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v80->obj.klass + v82;
            v40->fields._size = v82 + 1;
            v84[4] = (Il2CppClass *)v83;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v84 + 4), (int32_t)v83, v78, v79);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v157 = v40->fields._items;
          v158 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v157 )
            goto LABEL_324;
          v159 = v40->fields._size;
          v160 = mNewItemSp;
          if ( (unsigned int)v159 >= v157->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
          }
          else
          {
            v161 = &v157->obj.klass + v159;
            v40->fields._size = v159 + 1;
            v161[4] = (Il2CppClass *)v160;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v161 + 4), (int32_t)v160, v155, v156);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v162,
                                                                v163);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v225 = v129->fields._items;
          v226 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v225 )
            goto LABEL_324;
          goto LABEL_245;
        case 20:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v87 = v40->fields._items;
          v88 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v87 )
            goto LABEL_324;
          v89 = v40->fields._size;
          v90 = mNewItemSp;
          if ( (unsigned int)v89 >= v87->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v91 = &v87->obj.klass + v89;
            v40->fields._size = v89 + 1;
            v91[4] = (Il2CppClass *)v90;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v91 + 4), (int32_t)v90, v85, v86);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v166 = v40->fields._items;
          v167 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v166 )
            goto LABEL_324;
          v168 = v40->fields._size;
          v169 = mNewItemSp;
          if ( (unsigned int)v168 >= v166->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
          }
          else
          {
            v170 = &v166->obj.klass + v168;
            v40->fields._size = v168 + 1;
            v170[4] = (Il2CppClass *)v169;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v170 + 4), (int32_t)v169, v164, v165);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v171,
                                                                v172);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v225 = v129->fields._items;
          v226 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v225 )
            goto LABEL_324;
          goto LABEL_245;
        case 22:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v40 )
            {
              v94 = v40->fields._items;
              v95 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v40->fields._version;
              if ( v94 )
              {
                v96 = v40->fields._size;
                v97 = mNewItemSp;
                if ( (unsigned int)v96 >= v94->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v40,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
                }
                else
                {
                  v98 = &v94->obj.klass + v96;
                  v40->fields._size = v96 + 1;
                  v98[4] = (Il2CppClass *)v97;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 4), (int32_t)v97, v92, v93);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                  v175 = v40->fields._items;
                  v176 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v40->fields._version;
                  if ( v175 )
                  {
                    v177 = v40->fields._size;
                    v178 = mNewItemSp;
                    if ( (unsigned int)v177 >= v175->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v40,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v179 = &v175->obj.klass + v177;
                      v40->fields._size = v177 + 1;
                      v179[4] = (Il2CppClass *)v178;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v179 + 4), (int32_t)v178, v173, v174);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                      v229 = v40->fields._items;
                      v230 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v40->fields._version;
                      if ( v229 )
                      {
                        v231 = v40->fields._size;
                        v232 = mNewItemSp;
                        if ( (unsigned int)v231 >= v229->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v40,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v233 = &v229->obj.klass + v231;
                          v40->fields._size = v231 + 1;
                          v233[4] = (Il2CppClass *)v232;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v233 + 4), (int32_t)v232, v227, v228);
                        }
                        v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                              System_Collections_Generic_List_GameObject__TypeInfo,
                                                                              v234,
                                                                              v235);
                        System_Collections_Generic_List_object____ctor(
                          v129,
                          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                          if ( v129 )
                          {
                            v263 = v129->fields._items;
                            v264 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v129->fields._version;
                            if ( v263 )
                            {
                              v265 = v129->fields._size;
                              v266 = mNewItemSp;
                              if ( (unsigned int)v265 >= v263->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v129,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v267 = &v263->obj.klass + v265;
                                v129->fields._size = v265 + 1;
                                v267[4] = (Il2CppClass *)v266;
                                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v267 + 4), (int32_t)v266, v261, v262);
                              }
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
                              if ( mNewItemSp )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                          mNewItemSp,
                                                                          0LL);
                                v225 = v129->fields._items;
                                v226 = Method_System_Collections_Generic_List_GameObject__Add__;
                                ++v129->fields._version;
                                if ( v225 )
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
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v101 = v40->fields._items;
          v102 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v101 )
            goto LABEL_324;
          v103 = v40->fields._size;
          v104 = mNewItemSp;
          if ( (unsigned int)v103 >= v101->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
          }
          else
          {
            v105 = &v101->obj.klass + v103;
            v40->fields._size = v103 + 1;
            v105[4] = (Il2CppClass *)v104;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v105 + 4), (int32_t)v104, v99, v100);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v182 = v40->fields._items;
          v183 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v182 )
            goto LABEL_324;
          v184 = v40->fields._size;
          v185 = mNewItemSp;
          if ( (unsigned int)v184 >= v182->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
          }
          else
          {
            v186 = &v182->obj.klass + v184;
            v40->fields._size = v184 + 1;
            v186[4] = (Il2CppClass *)v185;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v186 + 4), (int32_t)v185, v180, v181);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v187,
                                                                v188);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL);
          if ( !v129 )
            goto LABEL_324;
          v225 = v129->fields._items;
          v226 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v225 )
            goto LABEL_324;
LABEL_245:
          v290 = v129->fields._size;
          max_length = v225->max_length;
          v292 = (Il2CppObject *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v108 = v40->fields._items;
          v109 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v108 )
            goto LABEL_324;
          v110 = v40->fields._size;
          v111 = mNewItemSp;
          if ( (unsigned int)v110 >= v108->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v112 = &v108->obj.klass + v110;
            v40->fields._size = v110 + 1;
            v112[4] = (Il2CppClass *)v111;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 4), (int32_t)v111, v106, v107);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v191 = v40->fields._items;
          v192 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v191 )
            goto LABEL_324;
          v193 = v40->fields._size;
          v194 = mNewItemSp;
          if ( (unsigned int)v193 >= v191->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
          }
          else
          {
            v195 = &v191->obj.klass + v193;
            v40->fields._size = v193 + 1;
            v195[4] = (Il2CppClass *)v194;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v195 + 4), (int32_t)v194, v189, v190);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v238 = v40->fields._items;
          v239 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v238 )
            goto LABEL_324;
          v240 = v40->fields._size;
          v241 = mNewItemSp;
          if ( (unsigned int)v240 >= v238->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
          }
          else
          {
            v242 = &v238->obj.klass + v240;
            v40->fields._size = v240 + 1;
            v242[4] = (Il2CppClass *)v241;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v242 + 4), (int32_t)v241, v236, v237);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v243,
                                                                v244);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v270 = v129->fields._items;
          v271 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v270 )
            goto LABEL_324;
          v272 = v129->fields._size;
          v273 = mNewItemSp;
          if ( (unsigned int)v272 >= v270->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v129,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
          }
          else
          {
            v274 = &v270->obj.klass + v272;
            v129->fields._size = v272 + 1;
            v274[4] = (Il2CppClass *)v273;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v274 + 4), (int32_t)v273, v268, v269);
          }
          v292 = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
          v225 = v129->fields._items;
          v226 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v225 )
            goto LABEL_324;
          goto LABEL_251;
        case 28:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v40 )
            goto LABEL_324;
          v115 = v40->fields._items;
          v116 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v115 )
            goto LABEL_324;
          v117 = v40->fields._size;
          v118 = mNewItemSp;
          if ( (unsigned int)v117 >= v115->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
          }
          else
          {
            v119 = &v115->obj.klass + v117;
            v40->fields._size = v117 + 1;
            v119[4] = (Il2CppClass *)v118;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v119 + 4), (int32_t)v118, v113, v114);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v198 = v40->fields._items;
          v199 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v198 )
            goto LABEL_324;
          v200 = v40->fields._size;
          v201 = mNewItemSp;
          if ( (unsigned int)v200 >= v198->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
          }
          else
          {
            v202 = &v198->obj.klass + v200;
            v40->fields._size = v200 + 1;
            v202[4] = (Il2CppClass *)v201;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v202 + 4), (int32_t)v201, v196, v197);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v247 = v40->fields._items;
          v248 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v40->fields._version;
          if ( !v247 )
            goto LABEL_324;
          v249 = v40->fields._size;
          v250 = mNewItemSp;
          if ( (unsigned int)v249 >= v247->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
          }
          else
          {
            v251 = &v247->obj.klass + v249;
            v40->fields._size = v249 + 1;
            v251[4] = (Il2CppClass *)v250;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v251 + 4), (int32_t)v250, v245, v246);
          }
          v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_GameObject__TypeInfo,
                                                                v252,
                                                                v253);
          System_Collections_Generic_List_object____ctor(
            v129,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v129 )
            goto LABEL_324;
          v277 = v129->fields._items;
          v278 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v277 )
            goto LABEL_324;
          v279 = v129->fields._size;
          v280 = mNewItemSp;
          if ( (unsigned int)v279 >= v277->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v129,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
          }
          else
          {
            v281 = &v277->obj.klass + v279;
            v129->fields._size = v279 + 1;
            v281[4] = (Il2CppClass *)v280;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v281 + 4), (int32_t)v280, v275, v276);
          }
          v292 = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
          v225 = v129->fields._items;
          v226 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v129->fields._version;
          if ( !v225 )
            goto LABEL_324;
LABEL_251:
          v290 = v129->fields._size;
          max_length = v225->max_length;
LABEL_252:
          if ( (unsigned int)v290 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v129,
              v292,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
          }
          else
          {
            v293 = &v225->obj.klass + v290;
            v129->fields._size = v290 + 1;
            v293[4] = (Il2CppClass *)v292;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v293 + 4), (int32_t)v292, v223, v224);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_324;
        default:
          v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v36,
                                                               v37);
          System_Collections_Generic_List_object____ctor(
            v40,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v39 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v40 )
              goto LABEL_324;
            v52 = v40->fields._items;
            v53 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v40->fields._version;
            if ( !v52 )
              goto LABEL_324;
            v54 = v40->fields._size;
            v55 = mNewItemSp;
            if ( (unsigned int)v54 >= v52->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v40,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v56 = &v52->obj.klass + v54;
              v40->fields._size = v54 + 1;
              v56[4] = (Il2CppClass *)v55;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v329 = v40->fields._items;
            v330 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v40->fields._version;
            if ( !v329 )
              goto LABEL_324;
            v331 = v40->fields._size;
            v332 = mNewItemSp;
            if ( (unsigned int)v331 >= v329->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v40,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v330[4] + 192LL) + 112LL));
            }
            else
            {
              v333 = &v329->obj.klass + v331;
              v40->fields._size = v331 + 1;
              v333[4] = (Il2CppClass *)v332;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v333 + 4), (int32_t)v332, v327, v328);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v336 = v40->fields._items;
            v337 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v40->fields._version;
            if ( !v336 )
              goto LABEL_324;
            v338 = v40->fields._size;
            v339 = mNewItemSp;
            if ( (unsigned int)v338 >= v336->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v40,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v337[4] + 192LL) + 112LL));
            }
            else
            {
              v340 = &v336->obj.klass + v338;
              v40->fields._size = v338 + 1;
              v340[4] = (Il2CppClass *)v339;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v340 + 4), (int32_t)v339, v334, v335);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v343 = v40->fields._items;
            v344 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v40->fields._version;
            if ( !v343 )
              goto LABEL_324;
            v345 = v40->fields._size;
            v346 = mNewItemSp;
            if ( (unsigned int)v345 >= v343->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v40,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v344[4] + 192LL) + 112LL));
            }
            else
            {
              v347 = &v343->obj.klass + v345;
              v40->fields._size = v345 + 1;
              v347[4] = (Il2CppClass *)v346;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v347 + 4), (int32_t)v346, v341, v342);
            }
            v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                  v348,
                                                                  v349);
            System_Collections_Generic_List_object____ctor(
              v129,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v129 )
              goto LABEL_324;
            v352 = v129->fields._items;
            v353 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v129->fields._version;
            if ( !v352 )
              goto LABEL_324;
            v354 = v129->fields._size;
            v355 = mNewItemSp;
            if ( (unsigned int)v354 >= v352->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v129,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v353[4] + 192LL) + 112LL));
            }
            else
            {
              v356 = &v352->obj.klass + v354;
              v129->fields._size = v354 + 1;
              v356[4] = (Il2CppClass *)v355;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v356 + 4), (int32_t)v355, v350, v351);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v359 = v129->fields._items;
            v360 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v129->fields._version;
            if ( !v359 )
              goto LABEL_324;
            v361 = v129->fields._size;
            v362 = mNewItemSp;
            if ( (unsigned int)v361 >= v359->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v129,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v360[4] + 192LL) + 112LL));
            }
            else
            {
              v363 = &v359->obj.klass + v361;
              v129->fields._size = v361 + 1;
              v363[4] = (Il2CppClass *)v362;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v363 + 4), (int32_t)v362, v357, v358);
            }
            v366 = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
            v367 = v129->fields._items;
            v368 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v129->fields._version;
            if ( !v367 )
              goto LABEL_324;
            v369 = v129->fields._size;
            if ( (unsigned int)v369 >= v367->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v129,
                v366,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v368[4] + 192LL) + 112LL));
            }
            else
            {
              v370 = &v367->obj.klass + v369;
              v129->fields._size = v369 + 1;
              v370[4] = (Il2CppClass *)v366;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v370 + 4), (int32_t)v366, v364, v365);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_324;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v288 = v129->fields._items;
            v289 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v129->fields._version;
            if ( !v288 )
              goto LABEL_324;
            mExchangeServantTimeRoot = (Il2CppObject *)mNewItemSp;
LABEL_258:
            v294 = v129->fields._size;
            if ( (unsigned int)v294 >= v288->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v129,
                mExchangeServantTimeRoot,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
            }
            else
            {
              v295 = &v288->obj.klass + v294;
              v129->fields._size = v294 + 1;
              v295[4] = (Il2CppClass *)mExchangeServantTimeRoot;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)(v295 + 4),
                (int32_t)mExchangeServantTimeRoot,
                v285,
                v286);
            }
          }
          else
          {
            v129 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                  v48,
                                                                  v49);
            System_Collections_Generic_List_object____ctor(
              v129,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_324;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v40,
            (System_Collections_Generic_List_GameObject__o *)v129,
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
    v296 = this->fields.shopNotice;
    if ( !v296 )
      goto LABEL_324;
    if ( v296->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v297 = (ShopNoticeRemainTime_o *)sub_1B64314(ShopNoticeRemainTime_TypeInfo, v28, v29),
            ShopNoticeRemainTime___ctor(v297, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v297,
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&this->fields.shopNoticeRemainTime,
              (int32_t)v297,
              v298,
              v299),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v301 = this->fields.shopNotice;
          if ( v301 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v301->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1LL,
                                                      v300);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
              v305 = this->fields.shopNotice;
              if ( v305 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v305->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          v304);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v308 = this->fields.shopNotice;
                  if ( v308 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v308->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              v307);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v312 = this->fields.mPeriodLimitedTimeLb;
                        v313 = (ShopNoticeRemainTimeLabel_o *)sub_1B64314(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                v310,
                                                                v311);
                        ShopNoticeRemainTimeLabel___ctor(v313, v312, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v313;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int32_t)v313,
                          v314,
                          v315);
                      }
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v316 = this->fields.mMonthlyLimitedTimeLb;
                        v317 = (ShopNoticeRemainTimeLabel_o *)sub_1B64314(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                v310,
                                                                v311);
                        ShopNoticeRemainTimeLabel___ctor(v317, v316, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v317;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int32_t)v317,
                          v318,
                          v319);
                      }
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v320 = this->fields.mExchangeServantItemLb;
                        v321 = (ShopNoticeRemainTimeLabel_o *)sub_1B64314(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                v310,
                                                                v311);
                        ShopNoticeRemainTimeLabel___ctor(v321, v320, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v321;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int32_t)v321,
                          v322,
                          v323);
                      }
                      v324 = this->fields.shopNotice;
                      if ( v324 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          mNewItemSp[1].monitor = (void *)v324->fields._PeriodTimeLimit_k__BackingField;
                          ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                          v325 = this->fields.shopNotice;
                          if ( v325 )
                          {
                            mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                            if ( mNewItemSp )
                            {
                              mNewItemSp[1].monitor = (void *)v325->fields._MonthlyTimeLimit_k__BackingField;
                              ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                              v326 = this->fields.shopNotice;
                              if ( v326 )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                if ( mNewItemSp )
                                {
                                  mNewItemSp[1].monitor = (void *)v326->fields._ExchangeServantTimeLimit_k__BackingField;
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
      sub_1B64324(mNewItemSp);
    }
  }
}


void __fastcall MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SummonControl_c *v7; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  UnityEngine_GameObject_o *summonCampainObject; // x0
  const MethodInfo *v10; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v13; // x1
  UILabel_o *summonCampainNumLabel; // x19
  int32_t maxNum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FBB83 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&SummonControl_TypeInfo, v3);
    sub_1B640C8(&UserGachaMaster_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_6493/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v5);
    sub_1B640C8(&StringLiteral_6494/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v6);
    byte_49FBB83 = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  if ( this->fields.isOpen )
  {
    v7 = SummonControl_TypeInfo;
    if ( !SummonControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
      v7 = SummonControl_TypeInfo;
    }
    FRIEND_POINT_SUMMON_ID = v7->static_fields->FRIEND_POINT_SUMMON_ID;
    if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
    if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, &maxNum[1], maxNum, 0LL) )
    {
      summonCampainObject = this->fields.summonCampainObject;
      if ( !summonCampainObject )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(summonCampainObject, 1, 0LL);
      summonCampainLabel1 = this->fields.summonCampainLabel1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_6493/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/,
                                                          v10);
      if ( !summonCampainLabel1
        || (UILabel__set_text(summonCampainLabel1, (System_String_o *)summonCampainObject, 0LL),
            summonCampainLabel2 = this->fields.summonCampainLabel2,
            summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_6494/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/,
                                                                v13),
            !summonCampainLabel2)
        || (UILabel__set_text(summonCampainLabel2, (System_String_o *)summonCampainObject, 0LL),
            summonCampainNumLabel = this->fields.summonCampainNumLabel,
            summonCampainObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&maxNum[1], 0LL),
            !summonCampainNumLabel) )
      {
LABEL_17:
        sub_1B64324(summonCampainObject);
      }
      UILabel__set_text(summonCampainNumLabel, (System_String_o *)summonCampainObject, 0LL);
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
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  PlayMakerFSM_o *v15; // x0

  if ( (byte_49FBB7D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&StringLiteral_8454/*"MAIN_MENU_BAR_SELECT"*/, v9);
    byte_49FBB7D = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) && !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectedKind, (int32_t)message, v11, v12);
    this->fields.selectedObject = obj;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectedObject, (int32_t)obj, v13, v14);
    v15 = this->fields.activeSceneFSM;
    if ( !v15 )
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_8454/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
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
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  UnityEngine_Component_o *v15; // x23
  UnityEngine_Transform_o *v16; // x24
  UnityEngine_GameObject_o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  struct PlayMakerFSM_o *myFSM; // x1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3

  if ( (byte_49FBB79 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, scene);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49FBB79 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    ComponentInChildren_object__48431348 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v15 = (UnityEngine_Component_o *)ComponentInChildren_object__48431348;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v15 )
      goto LABEL_28;
    v16 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v15, 0LL);
    if ( !v16 )
      goto LABEL_28;
    UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)gameObject, 0LL);
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v17 )
      goto LABEL_28;
    UnityEngine_GameObject__set_layer(v17, (int32_t)gameObject, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.activeSceneFSM, (int32_t)myFSM, v18, v19);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v21),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v22),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_28:
    sub_1B64324(gameObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


void __fastcall MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mAllBtnAct = act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAllBtnAct, (int32_t)act, (int32_t)method, v3);
}


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
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3

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
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v16);
    goto LABEL_40;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_41:
    sub_1B64324(partyBtn);
  if ( kind == 9 )
    v19 = 3;
  else
    v19 = v6;
  MainMenuBarButton__SetMode(partyBtn, v19, 0LL);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectedKind, 0, v17, v18);
  this->fields.selectedObject = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectedObject, 0, v20, v21);
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
    sub_1B64324(this);
  if ( mDispBtnActList->max_length <= kind )
    sub_1B6432C(this, *(_QWORD *)&kind);
  v5 = &mDispBtnActList->obj.klass + kind;
  v5[4] = (Il2CppClass *)act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 4), (int32_t)act, (int32_t)act, (int32_t)method);
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

  if ( (byte_49FBB94 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_1B640C8(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__, v8);
    byte_49FBB94 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_10:
    sub_1B64324(mDispBtnList);
  v10 = 0;
  while ( v10 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v10,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0LL);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mMenuBtnAct = act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mMenuBtnAct, (int32_t)act, (int32_t)method, v3);
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

  if ( (byte_49FBB93 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_49FBB93 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B64324(menuStateBtn);
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

  if ( (byte_49FBB86 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_49FBB86 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B64324(menuStateBtn);
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
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FBB89 & 1) == 0 )
  {
    sub_1B640C8(&MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo, callback);
    byte_49FBB89 = 1;
  }
  v5 = sub_1B64314(MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  struct System_Collections_Hashtable_o *v31; // x23
  struct System_Collections_Hashtable_o *v32; // x23
  struct System_Collections_Hashtable_o *v33; // x23
  struct System_Collections_Hashtable_o *v34; // x23
  System_Collections_Hashtable_o *v35; // x23
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  float v40; // s10
  struct System_Collections_Hashtable_o *v41; // x23
  struct System_Collections_Hashtable_o *v42; // x23
  struct System_Collections_Hashtable_o *v43; // x23
  struct System_Collections_Hashtable_o *v44; // x23
  struct System_Collections_Hashtable_o *v45; // x23
  System_Collections_Hashtable_o *v46; // x21
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  int32_t v49; // w1
  int v50; // [xsp+0h] [xbp-60h] BYREF
  int v51; // [xsp+4h] [xbp-5Ch]
  int v52; // [xsp+8h] [xbp-58h]
  int v53; // [xsp+18h] [xbp-48h] BYREF
  char v54[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FBB7E & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, is_open);
    sub_1B640C8(&Method_MainMenuBarBase_SwitchMenu__, v7);
    sub_1B640C8(&float_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v10);
    sub_1B640C8(&StringLiteral_22172/*"onMoveComplete"*/, v11);
    sub_1B640C8(&StringLiteral_17952/*"closeMenuStateImg"*/, v12);
    sub_1B640C8(&StringLiteral_18667/*"easeInQuad"*/, v13);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v14);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v15);
    sub_1B640C8(&StringLiteral_22192/*"onstarttarget"*/, v16);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v17);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v18);
    sub_1B640C8(&StringLiteral_22190/*"onstart"*/, v19);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v20);
    sub_1B640C8(&StringLiteral_22230/*"openMenuStateImg"*/, v21);
    sub_1B640C8(&iTween_TypeInfo, v22);
    byte_49FBB7E = 1;
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
        v54[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v54);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_20716/*"isLocal"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v31 = this->fields.table;
          v50 = v26;
          v52 = v27;
          v51 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v50);
          if ( v31 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
              v31,
              StringLiteral_22482/*"position"*/,
              menuComp,
              v31->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_22190/*"onstart"*/,
                StringLiteral_22230/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v32 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v32 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
                  v32,
                  StringLiteral_22192/*"onstarttarget"*/,
                  menuComp,
                  v32->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_22185/*"oncomplete"*/,
                    StringLiteral_22172/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v33 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v33 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
                      v33,
                      StringLiteral_22187/*"oncompletetarget"*/,
                      menuComp,
                      v33->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_18682/*"easetype"*/,
                        StringLiteral_18667/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v34 = this->fields.table;
                      v53 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v53);
                      if ( v34 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
                          v34,
                          StringLiteral_23830/*"time"*/,
                          menuComp,
                          v34->klass->vtable._24_Clear.methodPtr);
                        v35 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        iTween__MoveTo_59912984(gameObject, v35, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v36);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v37);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v38);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v39);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v47 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v47 = (_QWORD *)sub_1B640E0(Method_MainMenuBarBase_SwitchMenu__);
                        v48 = (System_Reflection_MethodBase_o *)sub_1B640AC(v47, v47[4]);
                        if ( is_open )
                          v49 = 9;
                        else
                          v49 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v48, v49, 0LL);
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
      sub_1B64324(menuComp);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v40 = -420.0;
    else
      v40 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v41 = this->fields.table;
    v54[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v54);
    if ( !v41 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v41->klass->vtable._23_Add.method)(
      v41,
      StringLiteral_20716/*"isLocal"*/,
      menuComp,
      v41->klass->vtable._24_Clear.methodPtr);
    v42 = this->fields.table;
    v50 = v26;
    v51 = LODWORD(v40);
    v52 = v27;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v50);
    if ( !v42 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_22482/*"position"*/,
      menuComp,
      v42->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22190/*"onstart"*/,
      StringLiteral_17952/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v43 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v43 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v43->klass->vtable._23_Add.method)(
      v43,
      StringLiteral_22192/*"onstarttarget"*/,
      menuComp,
      v43->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22185/*"oncomplete"*/,
      StringLiteral_22172/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v44 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v44 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_22187/*"oncompletetarget"*/,
      menuComp,
      v44->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_18682/*"easetype"*/,
      StringLiteral_18667/*"easeInQuad"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v45 = this->fields.table;
    v53 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v53);
    if ( !v45 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_23830/*"time"*/,
      menuComp,
      v45->klass->vtable._24_Clear.methodPtr);
    v46 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_59912984(gameObject, v46, 0LL);
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
  __int64 v10; // x0
  __int64 v11; // x0
  int64_t UserId; // x0
  Il2CppObject *MasterData_object; // x0
  TblUserMaster_o *v14; // x20
  int v15; // w20
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_49FBB78 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblUserMaster___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FBB78 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BB5FA4(v10);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BB5FA4(v11);
    UserId = **(_QWORD **)(v11 + 184);
    if ( !UserId )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)UserId,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblUserMaster___);
    v14 = (TblUserMaster_o *)MasterData_object;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId((const MethodInfo *)MasterData_object);
    if ( !v14 )
      goto LABEL_37;
    UserId = (int64_t)TblUserMaster__getUserData(v14, UserId, 0LL);
    if ( !UserId )
      goto LABEL_37;
    v15 = *(_DWORD *)(UserId + 24);
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BB5FA4(v16);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1BB5FA4(v17);
    UserId = **(_QWORD **)(v17 + 184);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_37;
    UserId = GachaEntity__getPrice((GachaEntity_o *)UserId, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_37;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, v15 / (int)UserId, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserId )
      goto LABEL_37;
    UserId = TblFriendMaster__GetSum((TblFriendMaster_o *)UserId, 2, 0LL);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_37;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, UserId, 0LL);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)this->fields.mMenuNoticeNumber;
    if ( UserId )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserId, 0, 0LL);
      return;
    }
LABEL_37:
    sub_1B64324(UserId);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__98_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarBase_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_49FBB98 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    this = (MainMenuBarBase_o *)sub_1B640C8(&StringLiteral_20097/*"icon_servant_exchange_available_{0}"*/, v4);
    byte_49FBB98 = 1;
  }
  shopNotice = v2->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v2->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField);
  v8 = System_String__Format((System_String_o *)StringLiteral_20097/*"icon_servant_exchange_available_{0}"*/, v7, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v8, 0LL) )
  {
    this = (MainMenuBarBase_o *)v2->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v2->fields.mExchangeServantItemDefaultAtlas, 0LL);
      this = (MainMenuBarBase_o *)v2->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v2->fields.mExchangeServantItemDefaultSpriteName, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B64324(this);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FBB85 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20280/*"img_menu_menu"*/, method);
    byte_49FBB85 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20280/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1B64324(menuStateBtn);
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
    sub_1B64324(0LL);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool isOpen; // w1
  UnityEngine_Component_o *mNewItemSp; // x0
  const MethodInfo *v6; // x2

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
      sub_1B64324(mNewItemSp);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v6);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FBB84 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20279/*"img_menu_close"*/, method);
    byte_49FBB84 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20279/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1B64324(menuStateBtn);
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
  UnityEngine_GameObject_c *klass; // x8
  __int64 v12; // x1
  UnityEngine_GameObject_c *v13; // x8
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_bool__o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_WaitUntil_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_49FBB9B & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_49FBB9B = 1;
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
  if ( !byte_49F9AB5 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AB5 = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.mEventRoot->klass;
  if ( !klass )
    goto LABEL_29;
  v10 = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !v10 )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable(v10, 0, 0LL);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v12);
    byte_49F76BD = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v13 = v10->fields.mEventRoot->klass;
  if ( !v13
    || (v10 = *(TitleInfoControl_o **)&v13->_2.static_fields_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)v10, 0, 0LL), !_4__this) )
  {
LABEL_29:
    sub_1B64324(v10);
  }
  MainMenuBarBase__SwitchMenu(_4__this, 0, 0, v14);
  v17 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v15, v16);
  System_Func_bool____ctor(
    v17,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__,
    0LL);
  v20 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v17, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v20, v22, v23);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__108_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBB99 & 1) == 0 )
  {
    sub_1B640C8(&MainMenuBarBase___c_TypeInfo, v1);
    byte_49FBB99 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MainMenuBarBase___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)MainMenuBarBase___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  __int64 v6; // x1
  QuestRewardTokenAction_c *v7; // x8

  if ( (byte_49FBB9A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v2);
    byte_49FBB9A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AB5 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AB5 = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v6);
    byte_49F76BD = 1;
  }
  v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = v4->fields.boardGameTokenAction->klass;
  if ( !v7 || (v4 = *(ScrTerminalListTop_o **)&v7->_2.static_fields_size) == 0LL )
LABEL_24:
    sub_1B64324(v4);
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
    sub_1B64324(this);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}