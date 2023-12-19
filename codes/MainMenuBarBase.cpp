void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MainMenuBarBase_StaticFields *static_fields; // x9
  MainMenuBarBase_c *v3; // x8
  struct MainMenuBarBase_StaticFields *v4; // x9

  if ( (byte_40F8E4D & 1) == 0 )
  {
    sub_B16FFC(&MainMenuBarBase_TypeInfo, v1);
    byte_40F8E4D = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v3 = MainMenuBarBase_TypeInfo;
  v4 = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&v4->NOTICE_NUMBER_POS_DISP_BTN.fields.x = 0x42180000422C0000LL;
  v4->NOTICE_NUMBER_POS_DISP_BTN.fields.z = 0.0;
  v3->static_fields->ITEM_ICON_ALPHA_ANIM_SPD_RATE = 0.5;
  v3->static_fields->ITEM_ICON_ALPHA_ANIM_TIME_INTERVAL = 3.0;
}


void __fastcall MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Hashtable_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x2
  struct System_Action_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F8E4C & 1) == 0 )
  {
    sub_B16FFC(&System_Action___TypeInfo, method);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo, v8);
    byte_40F8E4C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_MainMenuBarButton__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mDispBtnList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v20 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v16, v17, v18, v19);
  System_Collections_Hashtable___ctor_38240048(v20, 0LL);
  this->fields.table = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.table,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v28 = (struct System_Action_array *)sub_B17014(System_Action___TypeInfo, 8LL, v27);
  this->fields.mDispBtnActList = v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mDispBtnActList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  float LocalPositionY; // s0
  struct System_Collections_Generic_List_MainMenuBarButton__o *mDispBtnList; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v12; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v13; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v14; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v15; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v16; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v17; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v18; // x0
  struct System_Collections_Generic_List_MainMenuBarButton__o *v19; // x0
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x0
  MainMenuBarBase_c *v25; // x0
  struct NoticeNumberComponent_o *Component_srcLineSprite; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  NoticeNumberComponent_o *v33; // x0
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v35; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x20
  UnityEngine_GameObject_o *v38; // x0
  MainMenuBarBase_c *v39; // x0
  struct NoticeNumberComponent_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  NoticeNumberComponent_o *v47; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v49; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x20
  UnityEngine_GameObject_o *v52; // x0
  MainMenuBarBase_c *v53; // x0
  struct NoticeNumberComponent_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  NoticeNumberComponent_o *v61; // x0
  struct ShopNotice_o *ShopNotice; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_Component_o *mNewItemSp; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *mLimitedItemIconRoot; // x0
  UnityEngine_Component_o *mPeriodLimitedItemSp; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Component_o *mMonthlyLimitedItemSp; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_Component_o *mExchangeServantItemSp; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Component_o *StartUpSummonSp; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Component_o *mPeriodLimitedTimeLb; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_Component_o *mMonthlyLimitedTimeLb; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Component_o *mExchangeServantItemLb; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_GameObject_o *mExchangeServantTimeRoot; // x0
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_Component_o *StartUpSummonLb; // x0
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct UISprite_o *v97; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct UISprite_o *v105; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_GameObject_o *summonCampainObject; // x0
  const MethodInfo *v108; // x1

  if ( (byte_40F8E2D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__, v4);
    sub_B16FFC(&MainMenuBarBase_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ShopTopListViewManager_TypeInfo, v8);
    byte_40F8E2D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mDispBtnList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
  v12 = this->fields.mDispBtnList;
  if ( !v12 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.terminalBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  v13 = this->fields.mDispBtnList;
  if ( !v13 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.partyBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  v14 = this->fields.mDispBtnList;
  if ( !v14 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.summonBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  v15 = this->fields.mDispBtnList;
  if ( !v15 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.combineBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  v16 = this->fields.mDispBtnList;
  if ( !v16 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.shopBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  v17 = this->fields.mDispBtnList;
  if ( !v17 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  v18 = this->fields.mDispBtnList;
  if ( !v18 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.myroomBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  v19 = this->fields.mDispBtnList;
  if ( !v19 )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.latestScenarioBtn,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_87;
    v23 = (UnityEngine_GameObject_o *)v22;
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(v23, v24, 0LL);
    v25 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v25 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v23, v25->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v23 )
      goto LABEL_87;
    Component_srcLineSprite = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v23,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mMenuNoticeNumber,
      (System_Int32_array **)Component_srcLineSprite,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v33 = this->fields.mMenuNoticeNumber;
    if ( !v33 )
      goto LABEL_87;
    NoticeNumberComponent__SetNumber(v33, 0, 0LL);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v35 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v36 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            (UnityEngine_UI_Dropdown_DropdownItem_o *)v35,
            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_87;
    v37 = (UnityEngine_GameObject_o *)v36;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(v37, v38, 0LL);
    v39 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v39 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v37, v39->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v37 )
      goto LABEL_87;
    v40 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v37,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = v40;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mSummonNoticeNumber,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v47 = this->fields.mSummonNoticeNumber;
    if ( !v47 )
      goto LABEL_87;
    NoticeNumberComponent__SetNumber(v47, 0, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    v49 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v50 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            (UnityEngine_UI_Dropdown_DropdownItem_o *)v49,
            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_87;
    v51 = (UnityEngine_GameObject_o *)v50;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(v51, v52, 0LL);
    v53 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v53 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v51, v53->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v51 )
      goto LABEL_87;
    v54 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v51,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = v54;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFriendNoticeNumber,
      (System_Int32_array **)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    v61 = this->fields.mFriendNoticeNumber;
    if ( !v61 )
      goto LABEL_87;
    NoticeNumberComponent__SetNumber(v61, 0, 0LL);
  }
  if ( (BYTE3(ShopTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  }
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.shopNotice,
    (System_Int32_array **)ShopNotice,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
  if ( !mNewItemSp )
    goto LABEL_87;
  v70 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
  if ( !v70 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v70, 0, 0LL);
  mLimitedItemIconRoot = this->fields.mLimitedItemIconRoot;
  if ( !mLimitedItemIconRoot )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(mLimitedItemIconRoot, 0, 0LL);
  mPeriodLimitedItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
  if ( !mPeriodLimitedItemSp )
    goto LABEL_87;
  v73 = UnityEngine_Component__get_gameObject(mPeriodLimitedItemSp, 0LL);
  if ( !v73 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v73, 0, 0LL);
  mMonthlyLimitedItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
  if ( !mMonthlyLimitedItemSp )
    goto LABEL_87;
  v75 = UnityEngine_Component__get_gameObject(mMonthlyLimitedItemSp, 0LL);
  if ( !v75 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v75, 0, 0LL);
  mExchangeServantItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
  if ( !mExchangeServantItemSp )
    goto LABEL_87;
  v77 = UnityEngine_Component__get_gameObject(mExchangeServantItemSp, 0LL);
  if ( !v77 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v77, 0, 0LL);
  StartUpSummonSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
  if ( !StartUpSummonSp )
    goto LABEL_87;
  v79 = UnityEngine_Component__get_gameObject(StartUpSummonSp, 0LL);
  if ( !v79 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v79, 0, 0LL);
  mPeriodLimitedTimeLb = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
  if ( !mPeriodLimitedTimeLb )
    goto LABEL_87;
  v81 = UnityEngine_Component__get_gameObject(mPeriodLimitedTimeLb, 0LL);
  if ( !v81 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v81, 0, 0LL);
  mMonthlyLimitedTimeLb = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
  if ( !mMonthlyLimitedTimeLb )
    goto LABEL_87;
  v83 = UnityEngine_Component__get_gameObject(mMonthlyLimitedTimeLb, 0LL);
  if ( !v83 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v83, 0, 0LL);
  mExchangeServantItemLb = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
  if ( !mExchangeServantItemLb )
    goto LABEL_87;
  v85 = UnityEngine_Component__get_gameObject(mExchangeServantItemLb, 0LL);
  if ( !v85 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v85, 0, 0LL);
  mExchangeServantTimeRoot = this->fields.mExchangeServantTimeRoot;
  if ( !mExchangeServantTimeRoot )
    goto LABEL_87;
  v87 = UnityEngine_GameObject__get_gameObject(mExchangeServantTimeRoot, 0LL);
  if ( !v87 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v87, 0, 0LL);
  StartUpSummonLb = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
  if ( !StartUpSummonLb )
    goto LABEL_87;
  v89 = UnityEngine_Component__get_gameObject(StartUpSummonLb, 0LL);
  if ( !v89 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v89, 0, 0LL);
  mExchangeServantItemDefaultAtlas = (UnityEngine_Object_o *)this->fields.mExchangeServantItemDefaultAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mExchangeServantItemDefaultAtlas, 0LL, 0LL) )
  {
    v97 = this->fields.mExchangeServantItemSp;
    if ( v97 )
    {
      mAtlas = v97->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (System_Int32_array **)mAtlas,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96);
      v105 = this->fields.mExchangeServantItemSp;
      if ( v105 )
      {
        mSpriteName = v105->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (System_Int32_array **)mSpriteName,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
        goto LABEL_85;
      }
    }
LABEL_87:
    sub_B170D4();
  }
LABEL_85:
  summonCampainObject = this->fields.summonCampainObject;
  if ( !summonCampainObject )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(summonCampainObject, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v108);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__BackActive(MainMenuBarBase_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Component_o *backCloseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *backOpenSprite; // x0
  UnityEngine_GameObject_o *v8; // x0
  UIWidget_o *v9; // x0
  UIWidget_o *v10; // x0
  UnityEngine_GameObject_o *menuGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  float v13; // s1
  int v14; // s0
  int v15; // s2

  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(backCloseSprite, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, !isOpen, 0LL);
  backOpenSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite;
  if ( !backOpenSprite )
    goto LABEL_12;
  v8 = UnityEngine_Component__get_gameObject(backOpenSprite, 0LL);
  if ( !v8
    || (UnityEngine_GameObject__SetActive(v8, isOpen, 0LL), (v9 = (UIWidget_o *)this->fields.backOpenSprite) == 0LL)
    || (UIWidget__SetDirty(v9, 0LL), (v10 = (UIWidget_o *)this->fields.backCloseSprite) == 0LL)
    || (UIWidget__SetDirty(v10, 0LL), (menuGrid = this->fields.menuGrid) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(menuGrid, 0LL)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  v13 = -33.0;
  v14 = -1010237440;
  if ( isOpen )
    v13 = -6.0;
  v15 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
}


void __fastcall MainMenuBarBase__CheckLatestScenarioButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UnityEngine_Object_o *basePanel; // x20
  __int64 v8; // x10
  void *monitor; // x20
  MyRoomStateMaterial_o *v10; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v12; // x3
  int32_t mOldState; // w8
  struct System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *mSelectInfs; // x20
  MaterialEventLogListViewItem_Info_o *v15; // x8
  MainMenuBarButton_o *latestScenarioBtn; // x0
  int32_t v17; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8E36 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, method);
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_40F8E36 = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_31;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  basePanel = (UnityEngine_Object_o *)Instance->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL) )
    goto LABEL_31;
  if ( !basePanel )
    goto LABEL_31;
  v8 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v8 - 1] != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_31;
  }
  monitor = basePanel[2].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    goto LABEL_31;
  if ( !monitor )
    goto LABEL_34;
  if ( MyRoomControl__GetState((MyRoomControl_o *)monitor, 0LL) == 1 )
    goto LABEL_31;
  v10 = (MyRoomStateMaterial_o *)*((_QWORD *)monitor + 107);
  if ( !v10 )
    goto LABEL_31;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v10, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v10, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_31;
  }
  mOldState = v10->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_31;
  mSelectInfs = v10->fields.mSelectInfs;
  if ( !mSelectInfs || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v12) )
    goto LABEL_31;
  if ( !mSelectInfs->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v15 = mSelectInfs->fields._items->m_Items[0];
  if ( !v15 )
    goto LABEL_34;
  if ( v15->fields.war_id != questId[1] )
  {
LABEL_31:
    latestScenarioBtn = this->fields.latestScenarioBtn;
    if ( latestScenarioBtn )
    {
      v17 = 2;
      goto LABEL_33;
    }
LABEL_34:
    sub_B170D4();
  }
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    goto LABEL_34;
  v17 = 3;
LABEL_33:
  MainMenuBarButton__SetMode(latestScenarioBtn, v17, 0LL);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t v4; // w1
  MainMenuBarButton_o *terminalBtn; // x0

  if ( (byte_40F8E35 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F8E35 = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
    {
      v4 = 2;
      goto LABEL_19;
    }
LABEL_20:
    sub_B170D4();
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6043 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6043 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !this->fields.terminalBtn )
    goto LABEL_20;
  if ( v3->static_fields->_DispState_k__BackingField == 1 )
    v4 = 3;
  else
    v4 = 2;
  terminalBtn = this->fields.terminalBtn;
LABEL_19:
  MainMenuBarButton__SetMode(terminalBtn, v4, 0LL);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  float mFrameInPosY; // s14
  UnityEngine_GameObject_o *v22; // x0
  float v23; // s8
  System_Int32_array **Component_UIWidget; // x0
  MoveObject_o **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  float v32; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v36; // x21
  float v37; // s12
  float v38; // s13
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_o *v48; // x23
  float v49; // s3
  float v50; // s0
  float v51; // s5
  float v52; // s2
  float v53; // s4
  float v54; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8E4B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, is_framein);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v8);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    sub_B16FFC(&Method_MainMenuBarBase___c__DisplayClass124_0__FrameInOut_b__0__, v10);
    sub_B16FFC(&Method_MainMenuBarBase___c__DisplayClass124_0__FrameInOut_b__1__, v11);
    sub_B16FFC(&MainMenuBarBase___c__DisplayClass124_0_TypeInfo, v12);
    byte_40F8E4B = 1;
  }
  v13 = sub_B170CC(MainMenuBarBase___c__DisplayClass124_0_TypeInfo, is_framein, is_force, method, v4);
  MainMenuBarBase___c__DisplayClass124_0___ctor((MainMenuBarBase___c__DisplayClass124_0_o *)v13, 0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v13 )
    goto LABEL_31;
  *(_QWORD *)(v13 + 16) = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), gameObject, v15, v16, v17, v18, v19, v20);
  mFrameInPosY = this->fields.mFrameInPosY;
  v22 = *(UnityEngine_GameObject_o **)(v13 + 16);
  if ( is_framein )
    v23 = this->fields.mFrameInPosY;
  else
    v23 = -90.0;
  *(float *)(v13 + 32) = v23;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v22,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v25 = (MoveObject_o **)(v13 + 24);
  *(_QWORD *)(v13 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), Component_UIWidget, v26, v27, v28, v29, v30, v31);
  if ( is_force
    || (v32 = *(float *)(v13 + 32),
        v32 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0LL)) )
  {
    if ( *v25 )
    {
      MoveObject__Stop(*v25, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), *(float *)(v13 + 32), 0LL);
      return;
    }
LABEL_31:
    sub_B170D4();
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v56 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  v36 = *(MoveObject_o **)(v13 + 24);
  v37 = v56.fields.x;
  v38 = v56.fields.z;
  v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
  System_Action___ctor(v43, (Il2CppObject *)v13, Method_MainMenuBarBase___c__DisplayClass124_0__FrameInOut_b__0__, 0LL);
  v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
  System_Action___ctor(v48, (Il2CppObject *)v13, Method_MainMenuBarBase___c__DisplayClass124_0__FrameInOut_b__1__, 0LL);
  if ( !v36 )
    goto LABEL_31;
  if ( is_framein )
    v49 = x;
  else
    v49 = v37;
  if ( is_framein )
    v50 = v37;
  else
    v50 = x;
  if ( is_framein )
    v51 = z;
  else
    v51 = v38;
  if ( is_framein )
    v52 = v38;
  else
    v52 = z;
  v53 = v23;
  if ( is_framein )
    v54 = -90.0;
  else
    v54 = mFrameInPosY;
  MoveObject__Play(
    v36,
    *(UnityEngine_Vector3_o *)&v50,
    *(UnityEngine_Vector3_o *)&v49,
    IntpTime_AutoResume,
    v43,
    v48,
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v14; // x21
  WebViewManager_o *v15; // x0
  QuestScriptMaster_o *v16; // x0
  System_Collections_Generic_List_int__o *MovedEventScriptList_21502292; // x22
  WebViewManager_o *v18; // x0
  WarMaster_o *v19; // x0
  int64_t v20; // x0
  QuestEntity_o *MainScenarioLatestClear; // x0
  int64_t UserId; // x0
  QuestTree_o *v23; // x0

  if ( (byte_40F8E48 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestScriptMaster___, warId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v11);
    byte_40F8E48 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v14 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_26;
  v16 = (QuestScriptMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v15,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !v16 )
    goto LABEL_26;
  MovedEventScriptList_21502292 = QuestScriptMaster__GetMovedEventScriptList_21502292(v16, 0LL);
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v18 )
    goto LABEL_26;
  v19 = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)v18,
                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v19 )
    goto LABEL_26;
  if ( !WarMaster__IsClearAllMainScenario(v19, 0LL) )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v14 )
      goto LABEL_26;
    MainScenarioLatestClear = UserQuestMaster__GetMainScenarioLatestClear(
                                v14,
                                UserId,
                                MovedEventScriptList_21502292,
                                0LL);
    if ( !MainScenarioLatestClear )
      return (char)MainScenarioLatestClear;
    goto LABEL_20;
  }
  if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v20 = NetworkManager__get_UserId(0LL);
  if ( !v14 )
    goto LABEL_26;
  MainScenarioLatestClear = UserQuestMaster__GetLatestMainScenarioLastQuest(
                              v14,
                              v20,
                              MovedEventScriptList_21502292,
                              0LL);
  if ( MainScenarioLatestClear )
  {
LABEL_20:
    *questId = MainScenarioLatestClear->fields.id;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v23 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v23 )
    {
      *warId = QuestTree__GetWarID_ByQuestID(v23, *questId, 0LL);
      LOBYTE(MainScenarioLatestClear) = 1;
      return (char)MainScenarioLatestClear;
    }
LABEL_26:
    sub_B170D4();
  }
  return (char)MainScenarioLatestClear;
}


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  PlayMakerFSM_o *MyFsmP; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v8; // x1
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *v10; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  UnityEngine_GameObject_o *allMaskObj; // x0

  if ( (byte_40F8E40 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12247, v2);
    byte_40F8E40 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_30;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_30;
  MyFsmP = ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL);
  if ( !MyFsmP )
    goto LABEL_30;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(MyFsmP, 0LL);
  if ( !ActiveStateName )
    goto LABEL_30;
  if ( (System_String__IndexOf_43816080(ActiveStateName, (System_String_o *)StringLiteral_12247, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v8);
    byte_40F6042 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  v10 = v9->static_fields->mInstance;
  if ( !v10 || (mTerminalMap = v10->fields.mTerminalMap) == 0LL || (allMaskObj = mTerminalMap->fields.allMaskObj) == 0LL )
LABEL_30:
    sub_B170D4();
  return !UnityEngine_GameObject__get_activeSelf(allMaskObj, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_40F8E43 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8579, method);
    byte_40F8E43 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_B170D4();
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8579, 0LL, v6);
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
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Action_array *v13; // x8
  Il2CppClass **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t v21; // w0

  v6 = this;
  if ( (byte_40F8E3D & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_40F8E3D = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( mDispBtnActList->max_length <= kind )
        goto LABEL_18;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0LL);
      v13 = v6->fields.mDispBtnActList;
      if ( v13 )
      {
        if ( v13->max_length > kind )
        {
          v14 = &v13->obj.klass + kind;
          v14[4] = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v14 + 4),
            0LL,
            (System_String_array **)isEnabled,
            v8,
            v9,
            v10,
            v11,
            v12);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&v6->fields.mAllBtnAct, 0LL, v15, v16, v17, v18, v19, v20);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v21 = 0;
          goto LABEL_16;
        }
LABEL_18:
        sub_B17100(this, *(_QWORD *)&kind, isEnabled);
        sub_B170A0();
      }
    }
    sub_B170D4();
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v21 = 2;
LABEL_16:
  SoundManager__playSystemSe(v21, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_40F8E41 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8583, method);
    byte_40F8E41 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_B170D4();
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8583, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_40F8E45 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8580, method);
    byte_40F8E45 = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_B170D4();
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8580, 0LL, v6);
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
  __int64 v12; // x3
  const MethodInfo *v13; // x4
  MyRoomRootComponent_c *v14; // x0
  int32_t v15; // w21
  int32_t v16; // w22
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x23
  SceneJumpInfo_o *v18; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8E47 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, method);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8581, v4);
    byte_40F8E47 = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_B170D4();
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v7);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v8, &questId[1], questId, v9) )
    {
      v14 = MyRoomRootComponent_TypeInfo;
      if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v14 = MyRoomRootComponent_TypeInfo;
      }
      v16 = questId[0];
      v15 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v14->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v18 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v10, v11, v12, v13);
      SceneJumpInfo___ctor_29748100(v18, MYROOM_STATE_NEW_MATERIAL, v15, v16, 0LL);
    }
    else
    {
      v18 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8581, (Il2CppObject *)v18, v13);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_40F8E46 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8581, method);
    byte_40F8E46 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_B170D4();
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8581, 0LL, v6);
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

  if ( (byte_40F8E44 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8584, method);
    byte_40F8E44 = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_B170D4();
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8584, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_40F8E42 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8585, method);
    byte_40F8E42 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_B170D4();
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8585, 0LL, v6);
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
  TerminalSceneComponent_c *v19; // x0
  struct TerminalSceneComponent_o *v20; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  TerminalPramsManager_c *v22; // x0
  TerminalSceneComponent_c *v23; // x0
  struct TerminalSceneComponent_o *v24; // x8
  ScrTerminalListTop_o *v25; // x0
  PlayMakerFSM_o *MyFsmP; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v28; // x20
  TerminalSceneComponent_c *v29; // x0
  struct TerminalSceneComponent_o *v30; // x8
  ScrTerminalListTop_o *v31; // x0
  TerminalPramsManager_c *v32; // x0
  TerminalSceneComponent_c *v33; // x0
  struct TerminalSceneComponent_o *v34; // x8
  ScrTerminalListTop_o *v35; // x0
  __int64 v36; // x1
  TerminalSceneComponent_c *v37; // x0
  TerminalSceneComponent_o *v38; // x0
  TerminalPramsManager_c *v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  MainMenuBarBase___c_c *v44; // x0
  struct MainMenuBarBase___c_StaticFields *static_fields; // x8
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v47; // x21
  struct MainMenuBarBase___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_IEnumerator_o *v55; // x1
  TerminalSceneComponent_c *v56; // x0
  struct TerminalSceneComponent_o *v57; // x8
  ScrTerminalListTop_o *v58; // x0
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  TerminalPramsManager_c *v61; // x0
  TerminalSceneComponent_c *v62; // x0
  struct TerminalSceneComponent_o *v63; // x8
  ScrTerminalListTop_o *v64; // x0

  if ( (byte_40F8E3E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
    sub_B16FFC(&Method_MainMenuBarBase___c__OnClickTerminal_b__106_0__, v6);
    sub_B16FFC(&MainMenuBarBase___c_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8586, v8);
    sub_B16FFC(&StringLiteral_12247, v9);
    sub_B16FFC(&StringLiteral_2915, v10);
    byte_40F8E3E = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_152;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v13);
  if ( IsEnabled )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v14);
      byte_40F6042 = 1;
    }
    v15 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v15 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v15->static_fields->mInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
      goto LABEL_155;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v17);
      byte_40F6042 = 1;
    }
    v19 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    v20 = v19->static_fields->mInstance;
    if ( !v20 )
      goto LABEL_152;
    mTerminalList = (UnityEngine_Object_o *)v20->fields.mTerminalList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
    {
LABEL_155:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F604E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
        byte_40F604E = 1;
      }
      v39 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_40F604D )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
        v39 = TerminalPramsManager_TypeInfo;
        byte_40F604D = 1;
      }
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_40F6082 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
        v39 = TerminalPramsManager_TypeInfo;
        byte_40F6082 = 1;
      }
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_115;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_156;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6043 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
      byte_40F6043 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    if ( v22->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_156;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v17);
      byte_40F6042 = 1;
    }
    v23 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v23 = TerminalSceneComponent_TypeInfo;
    }
    v24 = v23->static_fields->mInstance;
    if ( !v24 )
      goto LABEL_152;
    v25 = v24->fields.mTerminalList;
    if ( !v25 )
      goto LABEL_152;
    MyFsmP = ScrTerminalListTop__mfGetMyFsmP(v25, 0LL);
    if ( !MyFsmP )
      goto LABEL_152;
    ActiveStateName = PlayMakerFSM__get_ActiveStateName(MyFsmP, 0LL);
    if ( !ActiveStateName )
      goto LABEL_152;
    v28 = ActiveStateName;
    if ( (System_String__IndexOf_43816080(ActiveStateName, (System_String_o *)StringLiteral_12247, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_43816080(v28, (System_String_o *)StringLiteral_2915, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_156;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v17);
      byte_40F6042 = 1;
    }
    v29 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v29 = TerminalSceneComponent_TypeInfo;
    }
    v30 = v29->static_fields->mInstance;
    if ( !v30 )
      goto LABEL_152;
    v31 = v30->fields.mTerminalList;
    if ( !v31 )
      goto LABEL_152;
    if ( ScrTerminalListTop__GetPrioredParentId(v31, 0LL) )
    {
LABEL_156:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F604E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
        byte_40F604E = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v32 = TerminalPramsManager_TypeInfo;
      }
      v32->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_40F604D )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
        v32 = TerminalPramsManager_TypeInfo;
        byte_40F604D = 1;
      }
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = TerminalPramsManager_TypeInfo;
      }
      v32->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v17);
        byte_40F6042 = 1;
      }
      v33 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v33 = TerminalSceneComponent_TypeInfo;
      }
      v34 = v33->static_fields->mInstance;
      if ( v34 )
      {
        v35 = v34->fields.mTerminalList;
        if ( v35 )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard(v35, 0LL);
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v36);
            byte_40F6042 = 1;
          }
          v37 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v37 = TerminalSceneComponent_TypeInfo;
          }
          v38 = v37->static_fields->mInstance;
          if ( v38 )
          {
            TerminalSceneComponent__CallQuestInformationClose(v38, 0LL);
LABEL_115:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8586, 0LL, v18);
            return;
          }
        }
      }
LABEL_152:
      sub_B170D4();
    }
    if ( (System_String__IndexOf_43816080(v28, (System_String_o *)StringLiteral_2915, 0LL) & 0x80000000) != 0 )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v40);
        byte_40F6042 = 1;
      }
      v56 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v56 = TerminalSceneComponent_TypeInfo;
      }
      v57 = v56->static_fields->mInstance;
      if ( !v57 )
        goto LABEL_152;
      v58 = v57->fields.mTerminalList;
      if ( !v58 )
        goto LABEL_152;
      ScrTerminalListTop__SetTopLastIndexNextBoard(v58, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v59);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F696C )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v60);
        byte_40F696C = 1;
      }
      v61 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v61 = TerminalPramsManager_TypeInfo;
      }
      v61->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v60);
        byte_40F6042 = 1;
      }
      v62 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v62 = TerminalSceneComponent_TypeInfo;
      }
      v63 = v62->static_fields->mInstance;
      if ( !v63 )
        goto LABEL_152;
      v64 = v63->fields.mTerminalList;
      if ( !v64 )
        goto LABEL_152;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v64, 0, 0LL);
    }
    else
    {
      v44 = MainMenuBarBase___c_TypeInfo;
      if ( (BYTE3(MainMenuBarBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v44 = MainMenuBarBase___c_TypeInfo;
      }
      static_fields = v44->static_fields;
      _9__106_0 = static_fields->__9__106_0;
      if ( !_9__106_0 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        }
        v47 = (Il2CppObject *)static_fields->__9;
        _9__106_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
        System_Action___ctor(_9__106_0, v47, Method_MainMenuBarBase___c__OnClickTerminal_b__106_0__, 0LL);
        v48 = MainMenuBarBase___c_TypeInfo->static_fields;
        v48->__9__106_0 = _9__106_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v48->__9__106_0,
          (System_Int32_array **)_9__106_0,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
      }
      v55 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__106_0, v41);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v55, 0LL);
    }
  }
}


void __fastcall MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0LL);
  this->fields.mMenuBtnAct = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mMenuBtnAct, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8E31 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F8E31 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    AvalonSceneManager__transitionScene(
      Instance,
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

  if ( (byte_40F8E32 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8582, v3);
    byte_40F8E32 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) )
  {
    selectedKind = this->fields.selectedKind;
    v6 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v6 )
LABEL_13:
        sub_B170D4();
    }
    else
    {
      if ( !v6 )
        goto LABEL_13;
      selectedKind = (System_String_o *)StringLiteral_8582;
    }
    PlayMakerFSM__SendEvent(v6, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8E30 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F8E30 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F604D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_40F8E38 & 1) == 0 )
  {
    sub_B16FFC(&ShopTopListViewManager_TypeInfo, method);
    byte_40F8E38 = 1;
  }
  if ( (BYTE3(ShopTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  }
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.shopNotice,
    (System_Int32_array **)ShopNotice,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct ShopNotice_o *shopNotice; // x8
  struct ShopNotice_o *v15; // x8
  UnityEngine_GameObject_o *mLimitedItemIconRoot; // x0
  UnityEngine_Component_o *mPeriodLimitedItemSp; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct ShopNotice_o *v19; // x8
  UnityEngine_Component_o *mMonthlyLimitedItemSp; // x0
  UnityEngine_GameObject_o *v21; // x0
  struct ShopNotice_o *v22; // x8
  UnityEngine_Component_o *mExchangeServantItemSp; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct ShopNotice_o *v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct ShopNotice_o *v30; // x8
  System_Action_o *v31; // x20
  UnityEngine_Component_o *StartUpSummonSp; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct ShopNotice_o *v34; // x8
  UnityEngine_Component_o *mPeriodLimitedTimeLb; // x0
  UnityEngine_GameObject_o *v36; // x0
  struct ShopNotice_o *v37; // x8
  UnityEngine_Component_o *mMonthlyLimitedTimeLb; // x0
  UnityEngine_GameObject_o *v39; // x0
  struct ShopNotice_o *v40; // x8
  struct ShopNotice_o *v41; // x8
  UnityEngine_GameObject_o *mExchangeServantTimeRoot; // x0
  UnityEngine_Component_o *mExchangeServantItemLb; // x0
  UnityEngine_GameObject_o *v44; // x0
  struct ShopNotice_o *v45; // x8
  UnityEngine_Component_o *StartUpSummonLb; // x0
  UnityEngine_GameObject_o *v47; // x0
  struct ShopNotice_o *v48; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  struct ShopNotice_o *v53; // x8
  unsigned int LimitedType_k__BackingField; // w8
  ShopNoticeTween_o *shopNoticeTween; // x0
  ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  struct ShopNotice_o *v68; // x8
  int32_t v69; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x21
  UnityEngine_Component_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Component_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x22
  UnityEngine_Component_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_Component_o *v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  UnityEngine_Component_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_Component_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_Component_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  UnityEngine_Component_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_Component_o *v101; // x0
  UnityEngine_GameObject_o *v102; // x0
  UnityEngine_Component_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_Component_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  UnityEngine_Component_o *v111; // x0
  UnityEngine_Component_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_Component_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  UnityEngine_GameObject_o *v120; // x0
  UnityEngine_Component_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_Component_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  UnityEngine_Component_o *v131; // x0
  UnityEngine_GameObject_o *v132; // x0
  UnityEngine_Component_o *v133; // x0
  struct UnityEngine_GameObject_o *v134; // x1
  const MethodInfo_2F25CD8 *v135; // x2
  UnityEngine_Component_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  UnityEngine_Component_o *v144; // x0
  UnityEngine_Component_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  UnityEngine_Component_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  UnityEngine_GameObject_o *v153; // x0
  UnityEngine_Component_o *v154; // x0
  UnityEngine_GameObject_o *v155; // x0
  UnityEngine_Component_o *v156; // x0
  UnityEngine_GameObject_o *v157; // x0
  UnityEngine_Component_o *v158; // x0
  UnityEngine_GameObject_o *v159; // x0
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  UnityEngine_Component_o *v164; // x0
  UnityEngine_GameObject_o *v165; // x0
  UnityEngine_Component_o *v166; // x0
  UnityEngine_GameObject_o *v167; // x0
  const MethodInfo_2F25CD8 *v168; // x2
  struct UnityEngine_GameObject_o *v169; // x1
  UnityEngine_Component_o *v170; // x0
  UnityEngine_GameObject_o *v171; // x0
  UnityEngine_Component_o *v172; // x0
  UnityEngine_GameObject_o *v173; // x0
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  UnityEngine_GameObject_o *v178; // x0
  UnityEngine_Component_o *v179; // x0
  UnityEngine_GameObject_o *v180; // x0
  UnityEngine_Component_o *v181; // x0
  UnityEngine_GameObject_o *v182; // x0
  UnityEngine_Component_o *v183; // x0
  UnityEngine_GameObject_o *v184; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  UnityEngine_Component_o *v189; // x0
  UnityEngine_Component_o *v190; // x0
  UnityEngine_GameObject_o *v191; // x0
  UnityEngine_Component_o *v192; // x0
  UnityEngine_GameObject_o *v193; // x0
  UnityEngine_Component_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x0
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x3
  __int64 v199; // x4
  UnityEngine_GameObject_o *v200; // x0
  ShopNoticeTween_o *v201; // x0
  struct ShopNotice_o *v202; // x8
  ShopNoticeRemainTime_o *shopNoticeRemainTime; // x0
  ShopNoticeRemainTime_o *v204; // x21
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  ShopNoticeRemainTime_o *v211; // x0
  const MethodInfo *v212; // x2
  struct ShopNotice_o *v213; // x8
  UILabel_o *v214; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  System_String_o *RestTime5; // x0
  const MethodInfo *v217; // x2
  struct ShopNotice_o *v218; // x8
  UILabel_o *v219; // x20
  System_String_o *v220; // x0
  const MethodInfo *v221; // x2
  struct ShopNotice_o *v222; // x8
  UILabel_o *v223; // x20
  System_String_o *v224; // x0
  __int64 v225; // x1
  __int64 v226; // x2
  __int64 v227; // x3
  __int64 v228; // x4
  ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x20
  UILabel_o *v230; // x21
  ShopNoticeRemainTimeLabel_o *v231; // x22
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v239; // x22
  ShopNoticeRemainTimeLabel_o *v240; // x23
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x22
  UILabel_o *v248; // x23
  ShopNoticeRemainTimeLabel_o *v249; // x24
  System_String_array **v250; // x2
  System_String_array **v251; // x3
  System_Boolean_array **v252; // x4
  System_Int32_array **v253; // x5
  System_Int32_array *v254; // x6
  System_Int32_array *v255; // x7
  struct ShopNotice_o *v256; // x8
  struct ShopNoticeRemainTimeLabel_o *periodShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v258; // x8
  struct ShopNoticeRemainTimeLabel_o *monthlyShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v260; // x8
  struct ShopNoticeRemainTimeLabel_o *exchangeServantShopNoticeRemainTimeLabel; // x9
  ShopNoticeTween_o *v262; // x0

  if ( (byte_40F8E37 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__97_0__, v8);
    sub_B16FFC(&ShopNoticeRemainTimeLabel_TypeInfo, v9);
    sub_B16FFC(&ShopNoticeRemainTime_TypeInfo, v10);
    sub_B16FFC(&ShopNoticeTween_TypeInfo, v11);
    byte_40F8E37 = 1;
  }
  if ( this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    gameObject = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    shopNotice = this->fields.shopNotice;
    if ( !shopNotice )
      goto LABEL_165;
    if ( !gameObject )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(gameObject, shopNotice->fields._IsShowNew_k__BackingField, 0LL);
    v15 = this->fields.shopNotice;
    if ( !v15 )
      goto LABEL_165;
    mLimitedItemIconRoot = this->fields.mLimitedItemIconRoot;
    if ( !mLimitedItemIconRoot )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(mLimitedItemIconRoot, v15->fields._LimitedType_k__BackingField != 0, 0LL);
    mPeriodLimitedItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mPeriodLimitedItemSp )
      goto LABEL_165;
    v18 = UnityEngine_Component__get_gameObject(mPeriodLimitedItemSp, 0LL);
    v19 = this->fields.shopNotice;
    if ( !v19 )
      goto LABEL_165;
    if ( !v18 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v18, v19->fields._LimitedType_k__BackingField == 1, 0LL);
    mMonthlyLimitedItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mMonthlyLimitedItemSp )
      goto LABEL_165;
    v21 = UnityEngine_Component__get_gameObject(mMonthlyLimitedItemSp, 0LL);
    v22 = this->fields.shopNotice;
    if ( !v22 )
      goto LABEL_165;
    if ( !v21 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v21, v22->fields._LimitedType_k__BackingField == 2, 0LL);
    mExchangeServantItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mExchangeServantItemSp )
      goto LABEL_165;
    v24 = UnityEngine_Component__get_gameObject(mExchangeServantItemSp, 0LL);
    v25 = this->fields.shopNotice;
    if ( !v25 )
      goto LABEL_165;
    if ( !v24 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v24, v25->fields._LimitedType_k__BackingField == 3, 0LL);
    v30 = this->fields.shopNotice;
    if ( !v30 )
      goto LABEL_165;
    if ( v30->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__97_0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v31, 1, 0LL);
    }
    StartUpSummonSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !StartUpSummonSp )
      goto LABEL_165;
    v33 = UnityEngine_Component__get_gameObject(StartUpSummonSp, 0LL);
    v34 = this->fields.shopNotice;
    if ( !v34 )
      goto LABEL_165;
    if ( !v33 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v33, v34->fields._LimitedType_k__BackingField == 4, 0LL);
    mPeriodLimitedTimeLb = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mPeriodLimitedTimeLb )
      goto LABEL_165;
    v36 = UnityEngine_Component__get_gameObject(mPeriodLimitedTimeLb, 0LL);
    v37 = this->fields.shopNotice;
    if ( !v37 )
      goto LABEL_165;
    if ( !v36 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v36, v37->fields._LimitedType_k__BackingField == 1, 0LL);
    mMonthlyLimitedTimeLb = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mMonthlyLimitedTimeLb )
      goto LABEL_165;
    v39 = UnityEngine_Component__get_gameObject(mMonthlyLimitedTimeLb, 0LL);
    v40 = this->fields.shopNotice;
    if ( !v40 )
      goto LABEL_165;
    if ( !v39 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v39, v40->fields._LimitedType_k__BackingField == 2, 0LL);
    v41 = this->fields.shopNotice;
    if ( !v41 )
      goto LABEL_165;
    mExchangeServantTimeRoot = this->fields.mExchangeServantTimeRoot;
    if ( !mExchangeServantTimeRoot )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(mExchangeServantTimeRoot, v41->fields._LimitedType_k__BackingField == 3, 0LL);
    mExchangeServantItemLb = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mExchangeServantItemLb )
      goto LABEL_165;
    v44 = UnityEngine_Component__get_gameObject(mExchangeServantItemLb, 0LL);
    v45 = this->fields.shopNotice;
    if ( !v45 )
      goto LABEL_165;
    if ( !v44 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v44, !v45->fields._IsIndefiniteExchangeServant_k__BackingField, 0LL);
    StartUpSummonLb = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !StartUpSummonLb )
      goto LABEL_165;
    v47 = UnityEngine_Component__get_gameObject(StartUpSummonLb, 0LL);
    v48 = this->fields.shopNotice;
    if ( !v48 )
      goto LABEL_165;
    if ( !v47 )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(v47, v48->fields._LimitedType_k__BackingField == 4, 0LL);
    v53 = this->fields.shopNotice;
    if ( !v53 )
      goto LABEL_165;
    LimitedType_k__BackingField = v53->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      shopNoticeTween = this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !shopNoticeTween )
      {
        v57 = (ShopNoticeTween_o *)sub_B170CC(ShopNoticeTween_TypeInfo, v49, v50, v51, v52);
        ShopNoticeTween___ctor(v57, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v57;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.shopNoticeTween,
          (System_Int32_array **)v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        shopNoticeTween = this->fields.shopNoticeTween;
        if ( !shopNoticeTween )
          goto LABEL_165;
      }
      ShopNoticeTween__Stop(shopNoticeTween, 0LL);
      v68 = this->fields.shopNotice;
      if ( !v68 )
        goto LABEL_165;
      v69 = v68->fields._LimitedType_k__BackingField;
      switch ( v69 )
      {
        case 6:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v71 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !v71 )
            goto LABEL_165;
          v72 = UnityEngine_Component__get_gameObject(v71, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v73 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !v73 )
            goto LABEL_165;
          v74 = UnityEngine_Component__get_gameObject(v73, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v75, v76, v77, v78);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v80 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !v80 )
            goto LABEL_165;
          v81 = UnityEngine_Component__get_gameObject(v80, 0LL);
          if ( !v79 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v79,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v82 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !v82 )
            goto LABEL_165;
          goto LABEL_125;
        case 10:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v103 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !v103 )
            goto LABEL_165;
          v104 = UnityEngine_Component__get_gameObject(v103, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v104,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v105 = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !v105 )
            goto LABEL_165;
          v106 = UnityEngine_Component__get_gameObject(v105, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v106,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v107, v108, v109, v110);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v111 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !v111 )
            goto LABEL_165;
          goto LABEL_74;
        case 12:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v112 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !v112 )
            goto LABEL_165;
          v113 = UnityEngine_Component__get_gameObject(v112, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v114 = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !v114 )
            goto LABEL_165;
          v115 = UnityEngine_Component__get_gameObject(v114, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v115,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v116, v117, v118, v119);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v111 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !v111 )
            goto LABEL_165;
LABEL_74:
          v120 = UnityEngine_Component__get_gameObject(v111, 0LL);
          if ( !v79 )
            goto LABEL_165;
          goto LABEL_84;
        case 14:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v121 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !v121 )
            goto LABEL_165;
          v122 = UnityEngine_Component__get_gameObject(v121, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v122,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v123 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !v123 )
            goto LABEL_165;
          v124 = UnityEngine_Component__get_gameObject(v123, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v124,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v125 = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !v125 )
            goto LABEL_165;
          v126 = UnityEngine_Component__get_gameObject(v125, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v126,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v127, v128, v129, v130);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v131 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !v131 )
            goto LABEL_165;
          v132 = UnityEngine_Component__get_gameObject(v131, 0LL);
          if ( !v79 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v79,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v132,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v133 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !v133 )
            goto LABEL_165;
          v120 = UnityEngine_Component__get_gameObject(v133, 0LL);
LABEL_84:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v79,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v120,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v134 = this->fields.mExchangeServantTimeRoot;
          v135 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
          goto LABEL_126;
        case 18:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v136 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !v136 )
            goto LABEL_165;
          v137 = UnityEngine_Component__get_gameObject(v136, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v137,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v138 = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !v138 )
            goto LABEL_165;
          v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v139,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v140, v141, v142, v143);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v144 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !v144 )
            goto LABEL_165;
          goto LABEL_94;
        case 20:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v145 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !v145 )
            goto LABEL_165;
          v146 = UnityEngine_Component__get_gameObject(v145, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v146,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v147 = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !v147 )
            goto LABEL_165;
          v148 = UnityEngine_Component__get_gameObject(v147, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v148,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v149, v150, v151, v152);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v144 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !v144 )
            goto LABEL_165;
LABEL_94:
          v153 = UnityEngine_Component__get_gameObject(v144, 0LL);
          if ( !v79 )
            goto LABEL_165;
LABEL_109:
          v169 = v153;
          goto LABEL_123;
        case 22:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v154 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !v154 )
            goto LABEL_165;
          v155 = UnityEngine_Component__get_gameObject(v154, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v155,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v156 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !v156 )
            goto LABEL_165;
          v157 = UnityEngine_Component__get_gameObject(v156, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v157,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v158 = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !v158 )
            goto LABEL_165;
          v159 = UnityEngine_Component__get_gameObject(v158, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v159,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v160, v161, v162, v163);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v164 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !v164 )
            goto LABEL_165;
          v165 = UnityEngine_Component__get_gameObject(v164, 0LL);
          if ( !v79 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v79,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v165,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v166 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !v166 )
            goto LABEL_165;
          v167 = UnityEngine_Component__get_gameObject(v166, 0LL);
          v168 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
          v169 = v167;
          goto LABEL_124;
        case 24:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v170 = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( v170 )
          {
            v171 = UnityEngine_Component__get_gameObject(v170, 0LL);
            if ( v70 )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v70,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v171,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
              v172 = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
              if ( v172 )
              {
                v173 = UnityEngine_Component__get_gameObject(v172, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v70,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v173,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v174, v175, v176, v177);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v79,
                  (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                v178 = this->fields.mExchangeServantTimeRoot;
                if ( v178 )
                {
                  v153 = UnityEngine_GameObject__get_gameObject(v178, 0LL);
                  if ( v79 )
                    goto LABEL_109;
                }
              }
            }
          }
          goto LABEL_165;
        case 26:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v179 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !v179 )
            goto LABEL_165;
          v180 = UnityEngine_Component__get_gameObject(v179, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v180,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v181 = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !v181 )
            goto LABEL_165;
          v182 = UnityEngine_Component__get_gameObject(v181, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v182,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v183 = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !v183 )
            goto LABEL_165;
          v184 = UnityEngine_Component__get_gameObject(v183, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v184,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v185, v186, v187, v188);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v189 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !v189 )
            goto LABEL_165;
          goto LABEL_121;
        case 28:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v190 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !v190 )
            goto LABEL_165;
          v191 = UnityEngine_Component__get_gameObject(v190, 0LL);
          if ( !v70 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v191,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v192 = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !v192 )
            goto LABEL_165;
          v193 = UnityEngine_Component__get_gameObject(v192, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v193,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v194 = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !v194 )
            goto LABEL_165;
          v195 = UnityEngine_Component__get_gameObject(v194, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v195,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v196, v197, v198, v199);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          v189 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !v189 )
            goto LABEL_165;
LABEL_121:
          v102 = UnityEngine_Component__get_gameObject(v189, 0LL);
          if ( v79 )
            goto LABEL_122;
          goto LABEL_165;
        default:
          v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65, v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v70,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v69 == 30 )
          {
            v87 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !v87 )
              goto LABEL_165;
            v88 = UnityEngine_Component__get_gameObject(v87, 0LL);
            if ( !v70 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v70,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v89 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !v89 )
              goto LABEL_165;
            v90 = UnityEngine_Component__get_gameObject(v89, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v70,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v91 = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !v91 )
              goto LABEL_165;
            v92 = UnityEngine_Component__get_gameObject(v91, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v70,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v93 = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !v93 )
              goto LABEL_165;
            v94 = UnityEngine_Component__get_gameObject(v93, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v70,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v95, v96, v97, v98);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v79,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            v99 = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !v99 )
              goto LABEL_165;
            v100 = UnityEngine_Component__get_gameObject(v99, 0LL);
            if ( !v79 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v101 = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !v101 )
              goto LABEL_165;
            v102 = UnityEngine_Component__get_gameObject(v101, 0LL);
LABEL_122:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v102,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v169 = this->fields.mExchangeServantTimeRoot;
LABEL_123:
            v168 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_124:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v169,
              v168);
            v82 = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !v82 )
              goto LABEL_165;
LABEL_125:
            v200 = UnityEngine_Component__get_gameObject(v82, 0LL);
            v135 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
            v134 = v200;
LABEL_126:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v134,
              v135);
          }
          else
          {
            v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v83, v84, v85, v86);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v79,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          if ( !*p_shopNoticeTween )
            goto LABEL_165;
          ShopNoticeTween__AddTargets(
            *p_shopNoticeTween,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v70,
            (System_Collections_Generic_List_GameObject__o *)v79,
            0LL);
          v201 = this->fields.shopNoticeTween;
          if ( !v201 )
            goto LABEL_165;
          ShopNoticeTween__SetActiveSwitchingTargets(v201, 0, 0LL);
          if ( !*p_shopNoticeTween )
            goto LABEL_165;
          ShopNoticeTween__Start(*p_shopNoticeTween, 0LL);
          break;
      }
    }
    else
    {
      v262 = this->fields.shopNoticeTween;
      if ( v262 )
        ShopNoticeTween__Stop(v262, 0LL);
    }
    v202 = this->fields.shopNotice;
    if ( !v202 )
      goto LABEL_165;
    if ( v202->fields._LimitedType_k__BackingField )
    {
      shopNoticeRemainTime = this->fields.shopNoticeRemainTime;
      if ( shopNoticeRemainTime
        || (v204 = (ShopNoticeRemainTime_o *)sub_B170CC(ShopNoticeRemainTime_TypeInfo, v49, v50, v51, v52),
            ShopNoticeRemainTime___ctor(v204, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v204,
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.shopNoticeRemainTime,
              (System_Int32_array **)v204,
              v205,
              v206,
              v207,
              v208,
              v209,
              v210),
            (shopNoticeRemainTime = this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice(shopNoticeRemainTime, this->fields.shopNotice, 0LL);
        v211 = this->fields.shopNoticeRemainTime;
        if ( v211 )
        {
          ShopNoticeRemainTime__Start(v211, 0LL);
          v213 = this->fields.shopNotice;
          if ( v213 )
          {
            v214 = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v213->fields._PeriodTimeLimit_k__BackingField;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            RestTime5 = LocalizationManager__GetRestTime5(PeriodTimeLimit_k__BackingField, -1LL, v212);
            if ( v214 )
            {
              UILabel__set_text(v214, RestTime5, 0LL);
              v218 = this->fields.shopNotice;
              if ( v218 )
              {
                v219 = this->fields.mMonthlyLimitedTimeLb;
                v220 = LocalizationManager__GetRestTime5(v218->fields._MonthlyTimeLimit_k__BackingField, -1LL, v217);
                if ( v219 )
                {
                  UILabel__set_text(v219, v220, 0LL);
                  v222 = this->fields.shopNotice;
                  if ( v222 )
                  {
                    v223 = this->fields.mExchangeServantItemLb;
                    v224 = LocalizationManager__GetRestTime5(
                             v222->fields._ExchangeServantTimeLimit_k__BackingField,
                             -1LL,
                             v221);
                    if ( v223 )
                    {
                      UILabel__set_text(v223, v224, 0LL);
                      p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v230 = this->fields.mPeriodLimitedTimeLb;
                        v231 = (ShopNoticeRemainTimeLabel_o *)sub_B170CC(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                v225,
                                                                v226,
                                                                v227,
                                                                v228);
                        ShopNoticeRemainTimeLabel___ctor(v231, v230, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v231;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v231,
                          v232,
                          v233,
                          v234,
                          v235,
                          v236,
                          v237);
                      }
                      p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v239 = this->fields.mMonthlyLimitedTimeLb;
                        v240 = (ShopNoticeRemainTimeLabel_o *)sub_B170CC(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                v225,
                                                                v226,
                                                                v227,
                                                                v228);
                        ShopNoticeRemainTimeLabel___ctor(v240, v239, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v240;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v240,
                          v241,
                          v242,
                          v243,
                          v244,
                          v245,
                          v246);
                      }
                      p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v248 = this->fields.mExchangeServantItemLb;
                        v249 = (ShopNoticeRemainTimeLabel_o *)sub_B170CC(
                                                                ShopNoticeRemainTimeLabel_TypeInfo,
                                                                v225,
                                                                v226,
                                                                v227,
                                                                v228);
                        ShopNoticeRemainTimeLabel___ctor(v249, v248, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v249;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v249,
                          v250,
                          v251,
                          v252,
                          v253,
                          v254,
                          v255);
                      }
                      v256 = this->fields.shopNotice;
                      if ( v256 )
                      {
                        periodShopNoticeRemainTimeLabel = this->fields.periodShopNoticeRemainTimeLabel;
                        if ( periodShopNoticeRemainTimeLabel )
                        {
                          periodShopNoticeRemainTimeLabel->fields.timeLimit = v256->fields._PeriodTimeLimit_k__BackingField;
                          if ( *p_periodShopNoticeRemainTimeLabel )
                          {
                            ShopNoticeRemainTimeLabel__Start(*p_periodShopNoticeRemainTimeLabel, 0LL);
                            v258 = this->fields.shopNotice;
                            if ( v258 )
                            {
                              monthlyShopNoticeRemainTimeLabel = this->fields.monthlyShopNoticeRemainTimeLabel;
                              if ( monthlyShopNoticeRemainTimeLabel )
                              {
                                monthlyShopNoticeRemainTimeLabel->fields.timeLimit = v258->fields._MonthlyTimeLimit_k__BackingField;
                                if ( *p_monthlyShopNoticeRemainTimeLabel )
                                {
                                  ShopNoticeRemainTimeLabel__Start(*p_monthlyShopNoticeRemainTimeLabel, 0LL);
                                  v260 = this->fields.shopNotice;
                                  if ( v260 )
                                  {
                                    exchangeServantShopNoticeRemainTimeLabel = this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                    if ( exchangeServantShopNoticeRemainTimeLabel )
                                    {
                                      exchangeServantShopNoticeRemainTimeLabel->fields.timeLimit = v260->fields._ExchangeServantTimeLimit_k__BackingField;
                                      if ( *p_exchangeServantShopNoticeRemainTimeLabel )
                                      {
                                        ShopNoticeRemainTimeLabel__Start(
                                          *p_exchangeServantShopNoticeRemainTimeLabel,
                                          0LL);
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
LABEL_165:
      sub_B170D4();
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
  System_String_o *v12; // x0
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v14; // x1
  System_String_o *v15; // x0
  UILabel_o *summonCampainNumLabel; // x19
  System_String_o *v17; // x0
  int32_t maxNum[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8E39 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&SummonControl_TypeInfo, v3);
    sub_B16FFC(&UserGachaMaster_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_6463, v5);
    sub_B16FFC(&StringLiteral_6464, v6);
    byte_40F8E39 = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  if ( this->fields.isOpen )
  {
    v7 = SummonControl_TypeInfo;
    if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
      v7 = SummonControl_TypeInfo;
    }
    FRIEND_POINT_SUMMON_ID = v7->static_fields->FRIEND_POINT_SUMMON_ID;
    if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserGachaMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
    }
    if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, &maxNum[1], maxNum, 0LL) )
    {
      summonCampainObject = this->fields.summonCampainObject;
      if ( !summonCampainObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(summonCampainObject, 1, 0LL);
      summonCampainLabel1 = this->fields.summonCampainLabel1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6463, v10);
      if ( !summonCampainLabel1
        || (UILabel__set_text(summonCampainLabel1, v12, 0LL),
            summonCampainLabel2 = this->fields.summonCampainLabel2,
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6464, v14),
            !summonCampainLabel2)
        || (UILabel__set_text(summonCampainLabel2, v15, 0LL),
            summonCampainNumLabel = this->fields.summonCampainNumLabel,
            v17 = System_Int32__ToString((int32_t)&maxNum[1], 0LL),
            !summonCampainNumLabel) )
      {
LABEL_20:
        sub_B170D4();
      }
      UILabel__set_text(summonCampainNumLabel, v17, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  PlayMakerFSM_o *v23; // x0

  if ( (byte_40F8E33 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&StringLiteral_8578, v9);
    byte_40F8E33 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) && !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectedKind,
      (System_Int32_array **)message,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    this->fields.selectedObject = obj;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectedObject,
      (System_Int32_array **)obj,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v23 = this->fields.activeSceneFSM;
    if ( !v23 )
      sub_B170D4();
    PlayMakerFSM__SendEvent(v23, (System_String_o *)StringLiteral_8578, 0LL);
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
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v15; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v17; // x24
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x24
  UnityEngine_GameObject_o *v20; // x0
  int32_t layer; // w0
  bool v22; // w0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct PlayMakerFSM_o *myFSM; // x1
  UIPanel_o *rootPanel; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  UnityEngine_Collider_o *mOutSide; // x0

  if ( (byte_40F8E2F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, scene);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40F8E2F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) )
  {
    if ( !scene )
      goto LABEL_31;
    ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                (UnityEngine_Component_o *)scene,
                                                                (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_31;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                gameObject,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v15 = ComponentInChildren_UIWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v15 )
      goto LABEL_31;
    v17 = transform;
    v18 = UnityEngine_Component__get_transform(v15, 0LL);
    if ( !v17 )
      goto LABEL_31;
    UnityEngine_Transform__set_parent(v17, v18, 0LL);
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20 = UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !v20 )
      goto LABEL_31;
    layer = UnityEngine_GameObject__get_layer(v20, 0LL);
    if ( !v19 )
      goto LABEL_31;
    UnityEngine_GameObject__set_layer(v19, layer, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scene, 0LL, 0LL);
  myFSM = 0LL;
  if ( v22 )
  {
    if ( !scene )
      goto LABEL_31;
    myFSM = scene->fields.myFSM;
  }
  if ( !this )
    goto LABEL_31;
  this->fields.activeSceneFSM = myFSM;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.activeSceneFSM,
    (System_Int32_array **)myFSM,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  rootPanel = this->fields.rootPanel;
  if ( !rootPanel
    || (UIPanel__set_depth(rootPanel, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v31),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v32),
        (mOutSide = (UnityEngine_Collider_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(mOutSide, 0, 0LL);
}


void __fastcall MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mAllBtnAct = act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAllBtnAct,
    (System_Int32_array **)act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  MainMenuBarButton_o *summonBtn; // x0
  int32_t v11; // w1
  MainMenuBarButton_o *combineBtn; // x0
  int32_t v13; // w1
  MainMenuBarButton_o *shopBtn; // x0
  int32_t v15; // w1
  MainMenuBarButton_o *friendBtn; // x0
  int32_t v17; // w1
  MainMenuBarButton_o *myroomBtn; // x0
  int32_t v19; // w1
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v21; // w1
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  MainMenuBarButton_o *latestScenarioBtn; // x0
  int32_t v30; // w1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  partyBtn = this->fields.partyBtn;
  if ( isActive )
    v6 = 2;
  else
    v6 = 1;
  if ( !partyBtn )
    goto LABEL_41;
  v9 = kind == 3 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v9, 0LL);
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    goto LABEL_41;
  v11 = kind == 4 ? 3 : v6;
  MainMenuBarButton__SetMode(summonBtn, v11, 0LL);
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_41;
  v13 = kind == 5 ? 3 : v6;
  MainMenuBarButton__SetMode(combineBtn, v13, 0LL);
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    goto LABEL_41;
  v15 = kind == 6 ? 3 : v6;
  MainMenuBarButton__SetMode(shopBtn, v15, 0LL);
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    goto LABEL_41;
  v17 = kind == 7 ? 3 : v6;
  MainMenuBarButton__SetMode(friendBtn, v17, 0LL);
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    goto LABEL_41;
  v19 = kind == 8 ? 3 : v6;
  MainMenuBarButton__SetMode(myroomBtn, v19, 0LL);
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_41;
  if ( kind == 1 )
    v21 = 3;
  else
    v21 = v6;
  MainMenuBarButton__SetMode(terminalBtn, v21, 0LL);
  if ( kind == 8 && isActive )
  {
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v22);
    goto LABEL_40;
  }
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
LABEL_41:
    sub_B170D4();
  if ( kind == 9 )
    v30 = 3;
  else
    v30 = v6;
  MainMenuBarButton__SetMode(latestScenarioBtn, v30, 0LL);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectedKind, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.selectedObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectedObject, 0LL, v31, v32, v33, v34, v35, v36);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_array *mDispBtnActList; // x21
  Il2CppClass **v11; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_B170D4();
  if ( act )
  {
    this = (MainMenuBarBase_o *)sub_B170BC(act, mDispBtnActList->obj.klass->_1.element_class);
    if ( !this )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( mDispBtnActList->max_length <= kind )
  {
    sub_B17100(this, *(_QWORD *)&kind, act);
    sub_B170A0();
  }
  v11 = &mDispBtnActList->obj.klass + kind;
  v11[4] = (Il2CppClass *)act;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 4),
    (System_Int32_array **)act,
    (System_String_array **)act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
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
  struct System_Collections_Generic_List_MainMenuBarButton__o *mDispBtnList; // x24
  __int64 v10; // x22
  int size; // w8
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0

  if ( (byte_40F8E4A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_B16FFC(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__, v8);
    byte_40F8E4A = 1;
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_12:
    sub_B170D4();
  v10 = 0LL;
  while ( 1 )
  {
    size = mDispBtnList->fields._size;
    if ( (int)v10 >= size )
      break;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v12 = (UnityEngine_Component_o *)mDispBtnList->fields._items->m_Items[v10];
    if ( v12 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( gameObject )
      {
        Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              gameObject,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Collider__set_enabled(Component_srcLineSprite, kind == (_DWORD)v10 && is_enable, 0LL);
          mDispBtnList = this->fields.mDispBtnList;
          ++v10;
          if ( mDispBtnList )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void __fastcall MainMenuBarBase__SetMenuActive(MainMenuBarBase_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mMenuBtnAct = act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMenuBtnAct,
    (System_Int32_array **)act,
    (System_String_array **)method,
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *backCloseSprite; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Collider_o *v12; // x0
  UnityEngine_Collider_o *mOutSide; // x0
  struct UIButton_o *v14; // x0
  __int64 v15; // x1
  UIButtonColor_o *menuFrameBnt; // x0

  if ( (byte_40F8E49 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_40F8E49 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !Component_srcLineSprite )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(Component_srcLineSprite, isEnable, 0LL);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_18;
  v11 = UnityEngine_Component__get_gameObject(backCloseSprite, 0LL);
  if ( !v11 )
    goto LABEL_18;
  v12 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v11,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(v12, isEnable, 0LL);
  if ( !isEnable )
  {
    mOutSide = (UnityEngine_Collider_o *)this->fields.mOutSide;
    if ( !mOutSide )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled(mOutSide, 0, 0LL);
  }
  v14 = this->fields.menuStateBtn;
  if ( !v14
    || (!isGray ? (v15 = 0LL) : (v15 = 3LL),
        ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._14_SetState.method)(
          v14,
          v15,
          1LL,
          v14->klass->vtable._15_OnClick.methodPtr),
        (menuFrameBnt = (UIButtonColor_o *)this->fields.menuFrameBnt) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  UIButtonColor__set_state(menuFrameBnt, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetOutSideColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  UnityEngine_Collider_o *mOutSide; // x0

  if ( (byte_40F8E3C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_40F8E3C = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !Component_srcLineSprite )
    goto LABEL_10;
  if ( UnityEngine_Collider__get_enabled(Component_srcLineSprite, 0LL) )
  {
    mOutSide = (UnityEngine_Collider_o *)this->fields.mOutSide;
    if ( mOutSide )
    {
      UnityEngine_Collider__set_enabled(mOutSide, is_enable, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F8E3F & 1) == 0 )
  {
    sub_B16FFC(&MainMenuBarBase__SetTerminalQuestListClose_d__107_TypeInfo, callback);
    byte_40F8E3F = 1;
  }
  v7 = sub_B170CC(MainMenuBarBase__SetTerminalQuestListClose_d__107_TypeInfo, callback, method, v3, v4);
  MainMenuBarBase__SetTerminalQuestListClose_d__107___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__107_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
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
  _BOOL4 v5; // w19
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
  UnityEngine_Transform_o *transform; // x0
  int v25; // s0
  int v26; // s2
  UnityEngine_GameObject_o *v27; // x0
  int v28; // s9
  int v29; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v31; // x2
  NoticeNumberComponent_o *mMenuNoticeNumber; // x0
  struct System_Collections_Hashtable_o *table; // x0
  struct System_Collections_Hashtable_o *v34; // x23
  __int64 v35; // x0
  struct System_Collections_Hashtable_o *v36; // x23
  __int64 v37; // x0
  struct System_Collections_Hashtable_o *v38; // x0
  struct System_Collections_Hashtable_o *v39; // x23
  UnityEngine_GameObject_o *v40; // x0
  struct System_Collections_Hashtable_o *v41; // x0
  struct System_Collections_Hashtable_o *v42; // x23
  UnityEngine_GameObject_o *v43; // x0
  struct System_Collections_Hashtable_o *v44; // x0
  struct System_Collections_Hashtable_o *v45; // x23
  __int64 v46; // x0
  System_Collections_Hashtable_o *v47; // x23
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  struct System_Collections_Hashtable_o *v52; // x0
  _BOOL4 v53; // w24
  struct System_Collections_Hashtable_o *v54; // x23
  __int64 v55; // x0
  int v56; // s10
  struct System_Collections_Hashtable_o *v57; // x23
  __int64 v58; // x0
  struct System_Collections_Hashtable_o *v59; // x0
  struct System_Collections_Hashtable_o *v60; // x23
  UnityEngine_GameObject_o *v61; // x0
  struct System_Collections_Hashtable_o *v62; // x0
  struct System_Collections_Hashtable_o *v63; // x23
  UnityEngine_GameObject_o *v64; // x0
  struct System_Collections_Hashtable_o *v65; // x0
  struct System_Collections_Hashtable_o *v66; // x23
  __int64 v67; // x0
  System_Collections_Hashtable_o *v68; // x21
  int32_t v69; // w19
  int v70; // [xsp+0h] [xbp-60h] BYREF
  int v71; // [xsp+4h] [xbp-5Ch]
  int v72; // [xsp+8h] [xbp-58h]
  int v73; // [xsp+18h] [xbp-48h] BYREF
  char v74[4]; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = is_open;
  if ( (byte_40F8E34 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, is_open);
    sub_B16FFC(&float_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18046, v10);
    sub_B16FFC(&StringLiteral_21161, v11);
    sub_B16FFC(&StringLiteral_17411, v12);
    sub_B16FFC(&StringLiteral_18031, v13);
    sub_B16FFC(&StringLiteral_22584, v14);
    sub_B16FFC(&StringLiteral_21175, v15);
    sub_B16FFC(&StringLiteral_21181, v16);
    sub_B16FFC(&StringLiteral_21419, v17);
    sub_B16FFC(&StringLiteral_19856, v18);
    sub_B16FFC(&StringLiteral_21179, v19);
    sub_B16FFC(&StringLiteral_21173, v20);
    sub_B16FFC(&StringLiteral_21215, v21);
    sub_B16FFC(&iTween_TypeInfo, v22);
    byte_40F8E34 = 1;
  }
  if ( !this->fields.isSwitchMenuMoving && ((this->fields.isOpen ^ v5) & 1) != 0 )
  {
    this->fields.isOpen = v5;
    this->fields.isSwitchMenuMoving = 1;
    if ( v5 )
      MainMenuBarBase__BackActive(this, 1, (const MethodInfo *)is_play_se);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    transform = UnityEngine_GameObject__get_transform(menuComp, 0LL);
    if ( !transform )
      goto LABEL_47;
    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v27 = this->fields.menuComp;
    if ( !v27 )
      goto LABEL_47;
    v28 = v25;
    v29 = v26;
    gameObject = UnityEngine_GameObject__get_gameObject(v27, 0LL);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v31);
    mMenuNoticeNumber = this->fields.mMenuNoticeNumber;
    if ( !mMenuNoticeNumber )
      goto LABEL_47;
    NoticeNumberComponent__SetDisp(mMenuNoticeNumber, !v5, 0LL);
    if ( v5 )
    {
      table = this->fields.table;
      if ( table )
      {
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
          table,
          table->klass->vtable._25_Clone.methodPtr);
        v34 = this->fields.table;
        v74[0] = 1;
        v35 = j_il2cpp_value_box_0(bool_TypeInfo, v74);
        if ( v34 )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
            v34,
            StringLiteral_19856,
            v35,
            v34->klass->vtable._24_Clear.methodPtr);
          v36 = this->fields.table;
          v70 = v28;
          v72 = v29;
          v71 = -1019674624;
          v37 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v70);
          if ( v36 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
              v36,
              StringLiteral_21419,
              v37,
              v36->klass->vtable._24_Clear.methodPtr);
            v38 = this->fields.table;
            if ( v38 )
            {
              ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v38->klass->vtable._23_Add.method)(
                v38,
                StringLiteral_21179,
                StringLiteral_21215,
                v38->klass->vtable._24_Clear.methodPtr);
              v39 = this->fields.table;
              v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v39 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v39->klass->vtable._23_Add.method)(
                  v39,
                  StringLiteral_21181,
                  v40,
                  v39->klass->vtable._24_Clear.methodPtr);
                v41 = this->fields.table;
                if ( v41 )
                {
                  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v41->klass->vtable._23_Add.method)(
                    v41,
                    StringLiteral_21173,
                    StringLiteral_21161,
                    v41->klass->vtable._24_Clear.methodPtr);
                  v42 = this->fields.table;
                  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v42 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
                      v42,
                      StringLiteral_21175,
                      v43,
                      v42->klass->vtable._24_Clear.methodPtr);
                    v44 = this->fields.table;
                    if ( v44 )
                    {
                      ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
                        v44,
                        StringLiteral_18046,
                        StringLiteral_18031,
                        v44->klass->vtable._24_Clear.methodPtr);
                      v45 = this->fields.table;
                      v73 = 1024148374;
                      v46 = j_il2cpp_value_box_0(float_TypeInfo, &v73);
                      if ( v45 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
                          v45,
                          StringLiteral_22584,
                          v46,
                          v45->klass->vtable._24_Clear.methodPtr);
                        v47 = this->fields.table;
                        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !iTween_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        }
                        iTween__MoveTo_18434272(gameObject, v47, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v48);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v49);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v50);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v51);
                        if ( !is_play_se )
                          return;
LABEL_39:
                        if ( v5 )
                          v69 = 9;
                        else
                          v69 = 10;
                        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(v69, 0LL);
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
      sub_B170D4();
    }
    v52 = this->fields.table;
    v53 = !this->fields.mIsCloseHideMode;
    if ( !v52 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))v52->klass->vtable._24_Clear.method)(
      v52,
      v52->klass->vtable._25_Clone.methodPtr);
    v54 = this->fields.table;
    v74[0] = 1;
    v55 = j_il2cpp_value_box_0(bool_TypeInfo, v74);
    if ( !v54 )
      goto LABEL_47;
    v56 = dword_3134BF0[v53];
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v54->klass->vtable._23_Add.method)(
      v54,
      StringLiteral_19856,
      v55,
      v54->klass->vtable._24_Clear.methodPtr);
    v57 = this->fields.table;
    v70 = v28;
    v71 = v56;
    v72 = v29;
    v58 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v70);
    if ( !v57 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v57->klass->vtable._23_Add.method)(
      v57,
      StringLiteral_21419,
      v58,
      v57->klass->vtable._24_Clear.methodPtr);
    v59 = this->fields.table;
    if ( !v59 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
      v59,
      StringLiteral_21179,
      StringLiteral_17411,
      v59->klass->vtable._24_Clear.methodPtr);
    v60 = this->fields.table;
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v60 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v60->klass->vtable._23_Add.method)(
      v60,
      StringLiteral_21181,
      v61,
      v60->klass->vtable._24_Clear.methodPtr);
    v62 = this->fields.table;
    if ( !v62 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v62->klass->vtable._23_Add.method)(
      v62,
      StringLiteral_21173,
      StringLiteral_21161,
      v62->klass->vtable._24_Clear.methodPtr);
    v63 = this->fields.table;
    v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v63 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v63->klass->vtable._23_Add.method)(
      v63,
      StringLiteral_21175,
      v64,
      v63->klass->vtable._24_Clear.methodPtr);
    v65 = this->fields.table;
    if ( !v65 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v65->klass->vtable._23_Add.method)(
      v65,
      StringLiteral_18046,
      StringLiteral_18031,
      v65->klass->vtable._24_Clear.methodPtr);
    v66 = this->fields.table;
    v73 = 1024148374;
    v67 = j_il2cpp_value_box_0(float_TypeInfo, &v73);
    if ( !v66 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v66->klass->vtable._23_Add.method)(
      v66,
      StringLiteral_22584,
      v67,
      v66->klass->vtable._24_Clear.methodPtr);
    v68 = this->fields.table;
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_18434272(gameObject, v68, 0LL);
    if ( is_play_se )
      goto LABEL_39;
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
  __int64 v10; // x20
  __int64 v11; // x20
  DataManager_o *v12; // x0
  TblUserMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  TblUserEntity_o *UserData; // x0
  int32_t friendPoint; // w22
  __int64 v17; // x20
  __int64 v18; // x20
  DataManager_o *v19; // x0
  GachaMaster_o *v20; // x0
  GachaEntity_o *FriendPointGachaEntity; // x0
  int32_t Price; // w0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *v25; // x0
  int32_t Sum; // w0
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  NoticeNumberComponent_o *v28; // x0

  if ( (byte_40F8E2E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblUserMaster___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F8E2E = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v11 = **(_QWORD **)(v10 + 192);
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AAFCFC(v11);
    v12 = **(DataManager_o ***)(v11 + 184);
    if ( !v12 )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v12,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    UserData = TblUserMaster__getUserData(MasterData_WarQuestSelectionMaster, UserId, 0LL);
    if ( !UserData )
      goto LABEL_41;
    friendPoint = UserData->fields.friendPoint;
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AAFCFC(v17);
    v18 = **(_QWORD **)(v17 + 192);
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      sub_AAFCFC(v18);
    v19 = **(DataManager_o ***)(v18 + 184);
    if ( !v19 )
      goto LABEL_41;
    v20 = (GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             v19,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !v20 )
      goto LABEL_41;
    FriendPointGachaEntity = GachaMaster__getFriendPointGachaEntity(v20, 0LL);
    if ( !FriendPointGachaEntity )
      goto LABEL_41;
    Price = GachaEntity__getPrice(FriendPointGachaEntity, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, friendPoint / Price, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v25 = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !v25 )
      goto LABEL_41;
    Sum = TblFriendMaster__GetSum(v25, 2, 0LL);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, Sum, 0LL);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    v28 = this->fields.mMenuNoticeNumber;
    if ( v28 )
    {
      NoticeNumberComponent__SetNumber(v28, 0, 0LL);
      return;
    }
LABEL_41:
    sub_B170D4();
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__97_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  UISprite_o *v9; // x0
  UISprite_o *v10; // x0
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8E4E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19289, v4);
    byte_40F8E4E = 1;
  }
  shopNotice = this->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_12;
  mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField);
  v8 = System_String__Format((System_String_o *)StringLiteral_19289, v7, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v8, 0LL) )
  {
    v9 = this->fields.mExchangeServantItemSp;
    if ( v9 )
    {
      UISprite__set_atlas(v9, this->fields.mExchangeServantItemDefaultAtlas, 0LL);
      v10 = this->fields.mExchangeServantItemSp;
      if ( v10 )
      {
        UISprite__set_spriteName(v10, this->fields.mExchangeServantItemDefaultSpriteName, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *menuStateBtn; // x0
  struct UISprite_o *menuStateImg; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_40F8E3B & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19457, v3);
    byte_40F8E3B = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19457, 0LL),
        (menuStateImg = this->fields.menuStateImg) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))menuStateImg->klass->vtable._33_MakePixelPerfect.method)(
          menuStateImg,
          menuStateImg->klass->vtable._34_get_minWidth.methodPtr),
        (v6 = (UnityEngine_Component_o *)this->fields.menuStateBtn) == 0LL) )
  {
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
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
    sub_B170D4();
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


void __fastcall MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool isOpen; // w1
  UnityEngine_Component_o *mNewItemSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mLimitedItemIconRoot; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *summonCampainObject; // x0
  const MethodInfo *v10; // x2

  isOpen = this->fields.isOpen;
  this->fields.isSwitchMenuMoving = 0;
  MainMenuBarBase__SetOutSideColliderEnable(this, isOpen, v2);
  if ( !this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp
      || (gameObject = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (mLimitedItemIconRoot = this->fields.mLimitedItemIconRoot) == 0LL)
      || (v8 = UnityEngine_GameObject__get_gameObject(mLimitedItemIconRoot, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(v8, 0, 0LL), (summonCampainObject = this->fields.summonCampainObject) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(summonCampainObject, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v10);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *menuStateBtn; // x0
  struct UISprite_o *menuStateImg; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_40F8E3A & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19456, v3);
    byte_40F8E3A = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19456, 0LL),
        (menuStateImg = this->fields.menuStateImg) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))menuStateImg->klass->vtable._33_MakePixelPerfect.method)(
          menuStateImg,
          menuStateImg->klass->vtable._34_get_minWidth.methodPtr),
        (v6 = (UnityEngine_Component_o *)this->fields.menuStateBtn) == 0LL) )
  {
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall MainMenuBarBase__set_IsCloseHideMode(MainMenuBarBase_o *this, bool value, const MethodInfo *method)
{
  this->fields.mIsCloseHideMode = value;
  if ( value )
    GameObjectExtensions__SetLocalPositionY(this->fields.menuComp, -420.0, 0LL);
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__107___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__107_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__107__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__107_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v10; // x0
  TerminalSceneComponent_c *v11; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  __int64 v14; // x1
  TerminalSceneComponent_c *v15; // x0
  struct TerminalSceneComponent_o *v16; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_bool__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UnityEngine_WaitUntil_o *v27; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_40F6911 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v3);
    sub_B16FFC(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__107_0__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_40F6911 = 1;
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
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F696C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F696C = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v11->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_34;
  mTitleInfo = mInstance->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_34;
  TitleInfoControl__SetTouchEnable(mTitleInfo, 0, 0LL);
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v14);
    byte_40F6042 = 1;
  }
  v15 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v15 = TerminalSceneComponent_TypeInfo;
  }
  v16 = v15->static_fields->mInstance;
  if ( !v16
    || (mTerminalList = v16->fields.mTerminalList) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click(mTerminalList, 0, 0LL), !_4__this) )
  {
LABEL_34:
    sub_B170D4();
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v22 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v18, v19, v20, v21);
  System_Func_bool____ctor(
    v22,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__107_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v27 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v23, v24, v25, v26);
  UnityEngine_WaitUntil___ctor(v27, v22, 0LL);
  this->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__107__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__107__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__107_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__107_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__107__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__107__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__107_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F690F & 1) == 0 )
  {
    sub_B16FFC(&MainMenuBarBase___c_TypeInfo, v1);
    byte_40F690F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MainMenuBarBase___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MainMenuBarBase___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__106_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  TerminalSceneComponent_c *v4; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v7; // x1
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_o *v9; // x8
  ScrTerminalListTop_o *v10; // x0

  if ( (byte_40F6910 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v2);
    byte_40F6910 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F696C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F696C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_29;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_29;
  ScrTerminalListTop__SetTopLastIndexNextBoard(mTerminalList, 0LL);
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v7);
    byte_40F6042 = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  v9 = v8->static_fields->mInstance;
  if ( !v9 || (v10 = v9->fields.mTerminalList) == 0LL )
LABEL_29:
    sub_B170D4();
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v10, 0, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass124_0___ctor(
        MainMenuBarBase___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass124_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B170D4();
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.z, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass124_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}