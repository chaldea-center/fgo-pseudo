void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  struct MainMenuBarBase_StaticFields *static_fields; // x9
  MainMenuBarBase_c *v2; // x8
  struct MainMenuBarBase_StaticFields *v3; // x9

  if ( (byte_4350873 & 1) == 0 )
  {
    sub_B70694(&MainMenuBarBase_TypeInfo);
    byte_4350873 = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v2 = MainMenuBarBase_TypeInfo;
  v3 = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&v3->NOTICE_NUMBER_POS_DISP_BTN.fields.x = 0x42180000422C0000LL;
  v3->NOTICE_NUMBER_POS_DISP_BTN.fields.z = 0.0;
  v2->static_fields->ITEM_ICON_ALPHA_ANIM_SPD_RATE = 0.5;
  v2->static_fields->ITEM_ICON_ALPHA_ANIM_TIME_INTERVAL = 3.0;
  v2->static_fields->FOLDER_WAR_ID = 10000;
}


void __fastcall MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Hashtable_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Action_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4350872 & 1) == 0 )
  {
    sub_B70694(&System_Action___TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
    sub_B70694(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
    byte_4350872 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mDispBtnList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v10 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39248100(v10, 0LL);
  this->fields.table = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.table,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (struct System_Action_array *)sub_B706AC(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mDispBtnActList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  float LocalPositionY; // s0
  System_Collections_Generic_List_XWeaponTrail_Element__o *mDispBtnList; // x0
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  MainMenuBarBase_c *v11; // x0
  struct NoticeNumberComponent_o *Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  MainMenuBarBase_c *v23; // x0
  struct NoticeNumberComponent_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0
  MainMenuBarBase_c *v35; // x0
  struct NoticeNumberComponent_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ShopNotice_o *ShopNotice; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct UISprite_o *v65; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v67; // x1

  if ( (byte_4350853 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
    sub_B70694(&MainMenuBarBase_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ShopTopListViewManager_TypeInfo);
    byte_4350853 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mDispBtnList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.terminalBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.partyBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.summonBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.combineBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.shopBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.myroomBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.latestScenarioBtn,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
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
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_87;
    v9 = (UnityEngine_GameObject_o *)mDispBtnList;
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_32503456(v9, v10, 0LL);
    v11 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v11 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v9, v11->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v9 )
      goto LABEL_87;
    Component_srcLineSprite = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v9,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mMenuNoticeNumber,
      (System_Int32_array **)Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mMenuNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_87;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v20 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v20,
                                                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_87;
    v21 = (UnityEngine_GameObject_o *)mDispBtnList;
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_32503456(v21, v22, 0LL);
    v23 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v23 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v21, v23->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v21 )
      goto LABEL_87;
    v24 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v21,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = v24;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mSummonNoticeNumber,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mSummonNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_87;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    v32 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v32,
                                                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_87;
    v33 = (UnityEngine_GameObject_o *)mDispBtnList;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_32503456(v33, v34, 0LL);
    v35 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v35 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v33, v35->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v33 )
      goto LABEL_87;
    v36 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v33,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = v36;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mFriendNoticeNumber,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_87;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  if ( (BYTE3(ShopTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  }
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.shopNotice,
    (System_Int32_array **)ShopNotice,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mNewItemSp;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mLimitedItemIconRoot;
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mPeriodLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mMonthlyLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mExchangeServantItemSp;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.StartUpSummonSp;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mPeriodLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mMonthlyLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mExchangeServantItemLb;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mExchangeServantTimeRoot;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__get_gameObject(
                                                                              (UnityEngine_GameObject_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.StartUpSummonLb;
  if ( !mDispBtnList )
    goto LABEL_87;
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)mDispBtnList,
                                                                              0LL);
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mExchangeServantItemDefaultAtlas = (UnityEngine_Object_o *)this->fields.mExchangeServantItemDefaultAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Equality(
                                                                              mExchangeServantItemDefaultAtlas,
                                                                              0LL,
                                                                              0LL);
  if ( ((unsigned __int8)mDispBtnList & 1) != 0 )
  {
    mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
    if ( mExchangeServantItemSp )
    {
      mAtlas = mExchangeServantItemSp->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (System_Int32_array **)mAtlas,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      v65 = this->fields.mExchangeServantItemSp;
      if ( v65 )
      {
        mSpriteName = v65->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (System_Int32_array **)mSpriteName,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        goto LABEL_85;
      }
    }
LABEL_87:
    sub_B7076C(mDispBtnList, v4);
  }
LABEL_85:
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v67);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__BackActive(MainMenuBarBase_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Component_o *backCloseSprite; // x0
  float v6; // s1
  int v7; // s0
  int v8; // s2

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
    sub_B7076C(backCloseSprite, isOpen);
  }
  v6 = -33.0;
  v7 = -1010237440;
  if ( isOpen )
    v6 = -6.0;
  v8 = 0;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)backCloseSprite,
    *(UnityEngine_Vector3_o *)&v7,
    0LL);
}


void __fastcall MainMenuBarBase__CheckLatestScenarioButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MainMenuBarButton_o *Instance; // x0
  UnityEngine_Object_o *klass; // x20
  __int64 v6; // x10
  UnityEngine_Object_o *monitor; // x20
  MyRoomStateMaterial_o *v8; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v10; // x3
  int32_t mOldState; // w8
  struct System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *mSelectInfos; // x20
  MaterialEventLogListViewItem_Info_o *v13; // x8
  int32_t v14; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435085C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_435085C = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_31;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  klass = (UnityEngine_Object_o *)Instance[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    goto LABEL_31;
  if ( !klass )
    goto LABEL_31;
  v6 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&klass->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (MyRoomRootComponent_c *)klass->klass->_2.typeHierarchy[v6 - 1] != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_31;
  }
  monitor = (UnityEngine_Object_o *)klass[2].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (MainMenuBarButton_o *)UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_31;
  if ( !monitor )
    goto LABEL_34;
  if ( MyRoomControl__GetState((MyRoomControl_o *)monitor, 0LL) == 1 )
    goto LABEL_31;
  v8 = (MyRoomStateMaterial_o *)monitor[36].klass;
  if ( !v8 )
    goto LABEL_31;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v8, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v8, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_31;
  }
  mOldState = v8->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_31;
  mSelectInfos = v8->fields.mSelectInfos;
  if ( !mSelectInfos )
    goto LABEL_31;
  Instance = (MainMenuBarButton_o *)MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v10);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !mSelectInfos->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v13 = mSelectInfos->fields._items->m_Items[0];
  if ( !v13 )
    goto LABEL_34;
  if ( v13->fields.war_id != questId[1] )
  {
LABEL_31:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v14 = 2;
      goto LABEL_33;
    }
LABEL_34:
    sub_B7076C(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_34;
  v14 = 3;
LABEL_33:
  MainMenuBarButton__SetMode(Instance, v14, v2);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v5; // w1

  if ( (byte_435085B & 1) == 0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435085B = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
    {
      v5 = 2;
      goto LABEL_19;
    }
LABEL_20:
    sub_B7076C(terminalBtn, method);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEA2 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEA2 = 1;
  }
  terminalBtn = (MainMenuBarButton_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    terminalBtn = (MainMenuBarButton_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !this->fields.terminalBtn )
    goto LABEL_20;
  if ( **(_DWORD **)&terminalBtn[7].fields == 1 )
    v5 = 3;
  else
    v5 = 2;
  terminalBtn = this->fields.terminalBtn;
LABEL_19:
  MainMenuBarButton__SetMode(terminalBtn, v5, v2);
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
  System_Int32_array **gameObject; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  float mFrameInPosY; // s14
  UnityEngine_GameObject_o *v17; // x0
  float v18; // s8
  System_Int32_array **Component_UIWidget; // x0
  System_Int32_array ***v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  float v27; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v31; // x21
  float v32; // s12
  float v33; // s13
  System_Action_o *v34; // x22
  System_Action_o *v35; // x23
  float v36; // s3
  float v37; // s0
  float v38; // s5
  float v39; // s2
  float v40; // s4
  float v41; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4350871 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__0__);
    sub_B70694(&Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__1__);
    sub_B70694(&MainMenuBarBase___c__DisplayClass127_0_TypeInfo);
    byte_4350871 = 1;
  }
  v7 = sub_B70764(MainMenuBarBase___c__DisplayClass127_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass127_0___ctor((MainMenuBarBase___c__DisplayClass127_0_o *)v7, 0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_31;
  *(_QWORD *)(v7 + 16) = gameObject;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), gameObject, v10, v11, v12, v13, v14, v15);
  mFrameInPosY = this->fields.mFrameInPosY;
  v17 = *(UnityEngine_GameObject_o **)(v7 + 16);
  if ( is_framein )
    v18 = this->fields.mFrameInPosY;
  else
    v18 = -90.0;
  *(float *)(v7 + 32) = v18;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v17,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v20 = (System_Int32_array ***)(v7 + 24);
  *(_QWORD *)(v7 + 24) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), Component_UIWidget, v21, v22, v23, v24, v25, v26);
  if ( is_force
    || (v27 = *(float *)(v7 + 32),
        v27 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), 0LL)) )
  {
    gameObject = *v20;
    if ( *v20 )
    {
      MoveObject__Stop((MoveObject_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), *(float *)(v7 + 32), 0LL);
      return;
    }
LABEL_31:
    sub_B7076C(gameObject, v9);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v43 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
  v31 = *(MoveObject_o **)(v7 + 24);
  v32 = v43.fields.x;
  v33 = v43.fields.z;
  v34 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__0__, 0LL);
  v35 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__1__, 0LL);
  if ( !v31 )
    goto LABEL_31;
  if ( is_framein )
    v36 = x;
  else
    v36 = v32;
  if ( is_framein )
    v37 = v32;
  else
    v37 = x;
  if ( is_framein )
    v38 = z;
  else
    v38 = v33;
  if ( is_framein )
    v39 = v33;
  else
    v39 = z;
  v40 = v18;
  if ( is_framein )
    v41 = -90.0;
  else
    v41 = mFrameInPosY;
  MoveObject__Play(
    v31,
    *(UnityEngine_Vector3_o *)&v37,
    *(UnityEngine_Vector3_o *)&v36,
    IntpTime_AutoResume,
    v34,
    v35,
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v9; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_22247280; // x22
  QuestEntity_o *MainScenarioLatestClear; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v14; // x20
  MainMenuBarBase_c *v15; // x0

  if ( (byte_435086E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&MainMenuBarBase_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    byte_435086E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v9 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_35;
  MovedEventScriptList_22247280 = QuestScriptMaster__GetMovedEventScriptList_22247280(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_35;
  if ( !WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL) )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( v9 )
    {
      MainScenarioLatestClear = UserQuestMaster__GetMainScenarioLatestClear(
                                  v9,
                                  (int64_t)Instance,
                                  MovedEventScriptList_22247280,
                                  0LL);
      if ( !MainScenarioLatestClear )
        return (char)MainScenarioLatestClear;
      goto LABEL_20;
    }
LABEL_35:
    sub_B7076C(Instance, v7);
  }
  if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v9 )
    goto LABEL_35;
  MainScenarioLatestClear = UserQuestMaster__GetLatestMainScenarioLastQuest(
                              v9,
                              (int64_t)Instance,
                              MovedEventScriptList_22247280,
                              0LL);
  if ( !MainScenarioLatestClear )
    return (char)MainScenarioLatestClear;
LABEL_20:
  *questId = MainScenarioLatestClear->fields.id;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  *warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_35;
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0LL);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v14 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v15 = MainMenuBarBase_TypeInfo;
      if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
        v15 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v15->static_fields->FOLDER_WAR_ID )
        *warId = v14->fields.parentWarId;
    }
  }
  LOBYTE(MainScenarioLatestClear) = 1;
  return (char)MainScenarioLatestClear;
}


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *MyFsmP; // x0
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8

  if ( (byte_4350866 & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_12468/*"SPOT SELECT WAIT"*/);
    byte_4350866 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v3 = **(_QWORD **)&MyFsmP->fields.boardGameTokenEffectId;
  if ( !v3 )
    goto LABEL_30;
  MyFsmP = *(ScrTerminalListTop_o **)(v3 + 248);
  if ( !MyFsmP )
    goto LABEL_30;
  MyFsmP = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_30;
  MyFsmP = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_30;
  if ( (System_String__IndexOf_44830516((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12468/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = **(_QWORD **)&MyFsmP->fields.boardGameTokenEffectId;
  if ( !v4 || (v5 = *(_QWORD *)(v4 + 256)) == 0 || (MyFsmP = *(ScrTerminalListTop_o **)(v5 + 520)) == 0LL )
LABEL_30:
    sub_B7076C(MyFsmP, method);
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4350869 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8710/*"MAIN_MENU_BAR_SELECT_COMBINE"*/);
    byte_4350869 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_B7076C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, method);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8710/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v6);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Action_array *v14; // x8
  Il2CppClass **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t v22; // w0
  __int64 v23; // x0

  v6 = this;
  if ( (byte_4350863 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_B70694(&SoundManager_TypeInfo);
    byte_4350863 = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( mDispBtnActList->max_length <= kind )
        goto LABEL_18;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0LL);
      v14 = v6->fields.mDispBtnActList;
      if ( v14 )
      {
        if ( v14->max_length > kind )
        {
          v15 = &v14->obj.klass + kind;
          v15[4] = 0LL;
          sub_B70630((BattleServantConfConponent_o *)(v15 + 4), 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&v6->fields.mAllBtnAct, 0LL, v16, v17, v18, v19, v20, v21);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v22 = 0;
          goto LABEL_16;
        }
LABEL_18:
        v23 = sub_B70798(this);
        sub_B70738(v23, 0LL);
      }
    }
    sub_B7076C(this, *(_QWORD *)&kind);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v22 = 2;
LABEL_16:
  SoundManager__playSystemSe(v22, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4350867 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8714/*"MAIN_MENU_BAR_SELECT_PARTY"*/);
    byte_4350867 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_B7076C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, method);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8714/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_435086B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8711/*"MAIN_MENU_BAR_SELECT_FRIEND"*/);
    byte_435086B = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_B7076C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, method);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8711/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v6);
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
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435086D & 1) == 0 )
  {
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&StringLiteral_8712/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_435086D = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_B7076C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, method);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v6, &questId[1], questId, v7) )
    {
      v9 = MyRoomRootComponent_TypeInfo;
      if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v9 = MyRoomRootComponent_TypeInfo;
      }
      v11 = questId[0];
      v10 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v9->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v13 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523832(v13, MYROOM_STATE_NEW_MATERIAL, v10, v11, 0LL);
    }
    else
    {
      v13 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8712/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v13, v8);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_435086C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8712/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_435086C = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_B7076C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, method);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8712/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v6);
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

  if ( (byte_435086A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8715/*"MAIN_MENU_BAR_SELECT_SHOP"*/);
    byte_435086A = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_B7076C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, method);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8715/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4350868 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8716/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_4350868 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_B7076C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, method);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8716/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *terminalBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v8; // x4
  __int64 v9; // x8
  UnityEngine_Object_o *v10; // x20
  TerminalPramsManager_c *v11; // x0
  __int64 v12; // x8
  System_String_o *v13; // x20
  __int64 v14; // x8
  TerminalPramsManager_c *v15; // x0
  __int64 v16; // x8
  TerminalSceneComponent_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  const MethodInfo *v19; // x2
  MainMenuBarBase___c_c *v20; // x0
  struct MainMenuBarBase___c_StaticFields *static_fields; // x8
  System_Action_o *_9__109_0; // x20
  Il2CppObject *v23; // x21
  struct MainMenuBarBase___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_IEnumerator_o *v31; // x1
  __int64 v32; // x8
  const MethodInfo *v33; // x3
  TerminalPramsManager_c *v34; // x0
  __int64 v35; // x8

  if ( (byte_4350864 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_MainMenuBarBase___c__OnClickTerminal_b__109_0__);
    sub_B70694(&MainMenuBarBase___c_TypeInfo);
    sub_B70694(&StringLiteral_8717/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/);
    sub_B70694(&StringLiteral_12468/*"SPOT SELECT WAIT"*/);
    sub_B70694(&StringLiteral_2992/*"CAPTER WAIT"*/);
    byte_4350864 = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_152;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, method);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
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
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v9 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v9 )
      goto LABEL_152;
    v10 = *(UnityEngine_Object_o **)(v9 + 248);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
LABEL_155:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DEAD )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DEAD = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_434DEAC )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_434DEAC = 1;
      }
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_434DEE1 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_434DEE1 = 1;
      }
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_115;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_156;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEA2 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEA2 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( v11->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_156;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v12 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v12 )
      goto LABEL_152;
    terminalBtn = *(MainMenuBarButton_o **)(v12 + 248);
    if ( !terminalBtn )
      goto LABEL_152;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_152;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_152;
    v13 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_44830516((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12468/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_44830516(v13, (System_String_o *)StringLiteral_2992/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_156;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v14 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v14 )
      goto LABEL_152;
    terminalBtn = *(MainMenuBarButton_o **)(v14 + 248);
    if ( !terminalBtn )
      goto LABEL_152;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0LL) )
    {
LABEL_156:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DEAD )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DEAD = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_434DEAC )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
        byte_434DEAC = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v16 = **(_QWORD **)&terminalBtn[7].fields;
      if ( v16 )
      {
        terminalBtn = *(MainMenuBarButton_o **)(v16 + 248);
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          v17 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v17 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v17->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_115:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8717/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v8);
            return;
          }
        }
      }
LABEL_152:
      sub_B7076C(terminalBtn, method);
    }
    if ( (System_String__IndexOf_44830516(v13, (System_String_o *)StringLiteral_2992/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v32 = **(_QWORD **)&terminalBtn[7].fields;
      if ( !v32 )
        goto LABEL_152;
      terminalBtn = *(MainMenuBarButton_o **)(v32 + 248);
      if ( !terminalBtn )
        goto LABEL_152;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v33);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434EF98 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434EF98 = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = TerminalPramsManager_TypeInfo;
      }
      v34->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v35 = **(_QWORD **)&terminalBtn[7].fields;
      if ( !v35 )
        goto LABEL_152;
      terminalBtn = *(MainMenuBarButton_o **)(v35 + 248);
      if ( !terminalBtn )
        goto LABEL_152;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0LL);
    }
    else
    {
      v20 = MainMenuBarBase___c_TypeInfo;
      if ( (BYTE3(MainMenuBarBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v20 = MainMenuBarBase___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__109_0 = static_fields->__9__109_0;
      if ( !_9__109_0 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)static_fields->__9;
        _9__109_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(_9__109_0, v23, Method_MainMenuBarBase___c__OnClickTerminal_b__109_0__, 0LL);
        v24 = MainMenuBarBase___c_TypeInfo->static_fields;
        v24->__9__109_0 = _9__109_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v24->__9__109_0,
          (System_Int32_array **)_9__109_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      v31 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__109_0, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.mMenuBtnAct, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4350857 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4350857 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v4);
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
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_4350858 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_8713/*"MAIN_MENU_BAR_SELECT_NONE"*/);
    byte_4350858 = 1;
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
    v5 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v5 )
LABEL_13:
        sub_B7076C(v5, selectedKind);
    }
    else
    {
      if ( !v5 )
        goto LABEL_13;
      selectedKind = (System_String_o *)StringLiteral_8713/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v5, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4350856 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350856 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEAC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEAC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
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

  if ( (byte_435085E & 1) == 0 )
  {
    sub_B70694(&ShopTopListViewManager_TypeInfo);
    byte_435085E = 1;
  }
  if ( (BYTE3(ShopTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  }
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_B70630(
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ShopNotice_o *v27; // x8
  int32_t v28; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  struct UnityEngine_GameObject_o *mExchangeServantTimeRoot; // x1
  const MethodInfo_3025688 *v40; // x2
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  const MethodInfo_3025688 *v46; // x2
  struct UnityEngine_GameObject_o *v47; // x1
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct ShopNotice_o *v54; // x8
  ShopNoticeRemainTime_o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct ShopNotice_o *v62; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  struct ShopNotice_o *v65; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  struct ShopNotice_o *v67; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  struct ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x20
  UILabel_o *v70; // x21
  ShopNoticeRemainTimeLabel_o *v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v79; // x22
  ShopNoticeRemainTimeLabel_o *v80; // x23
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x22
  UILabel_o *v88; // x23
  ShopNoticeRemainTimeLabel_o *v89; // x24
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct ShopNotice_o *v96; // x8
  struct ShopNoticeRemainTimeLabel_o *periodShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v98; // x8
  struct ShopNoticeRemainTimeLabel_o *monthlyShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v100; // x8
  struct ShopNoticeRemainTimeLabel_o *exchangeServantShopNoticeRemainTimeLabel; // x9

  if ( (byte_435085D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__100_0__);
    sub_B70694(&ShopNoticeRemainTimeLabel_TypeInfo);
    sub_B70694(&ShopNoticeRemainTime_TypeInfo);
    sub_B70694(&ShopNoticeTween_TypeInfo);
    byte_435085D = 1;
  }
  if ( this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    shopNotice = this->fields.shopNotice;
    if ( !shopNotice )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      shopNotice->fields._IsShowNew_k__BackingField,
      0LL);
    v5 = this->fields.shopNotice;
    if ( !v5 )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v5->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v6 = this->fields.shopNotice;
    if ( !v6 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v6->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v7 = this->fields.shopNotice;
    if ( !v7 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v7->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v8 = this->fields.shopNotice;
    if ( !v8 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v8->fields._LimitedType_k__BackingField == 3,
      0LL);
    v9 = this->fields.shopNotice;
    if ( !v9 )
      goto LABEL_165;
    if ( v9->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__100_0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v10, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v11 = this->fields.shopNotice;
    if ( !v11 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v11->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v12 = this->fields.shopNotice;
    if ( !v12 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v12->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v13 = this->fields.shopNotice;
    if ( !v13 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v13->fields._LimitedType_k__BackingField == 2,
      0LL);
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v15 = this->fields.shopNotice;
    if ( !v15 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v15->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v16 = this->fields.shopNotice;
    if ( !v16 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v16->fields._LimitedType_k__BackingField == 4,
      0LL);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_165;
    LimitedType_k__BackingField = v17->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v20 = (ShopNoticeTween_o *)sub_B70764(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v20, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v20;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.shopNoticeTween,
          (System_Int32_array **)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_165;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v27 = this->fields.shopNotice;
      if ( !v27 )
        goto LABEL_165;
      v28 = v27->fields._LimitedType_k__BackingField;
      switch ( v28 )
      {
        case 6:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          gameObject = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v31 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v31,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_125;
        case 10:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v35 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_74;
        case 12:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v36 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_74:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v31 )
            goto LABEL_165;
          goto LABEL_84;
        case 14:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v37 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v38 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v31 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v31,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
LABEL_84:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v31,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mExchangeServantTimeRoot = this->fields.mExchangeServantTimeRoot;
          v40 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__;
          goto LABEL_126;
        case 18:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v41 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_94;
        case 20:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v42 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_94:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v31 )
            goto LABEL_165;
LABEL_109:
          v47 = (struct UnityEngine_GameObject_o *)mNewItemSp;
          goto LABEL_123;
        case 22:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v43 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v44 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v31 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v31,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          v45 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v46 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__;
          v47 = v45;
          goto LABEL_124;
        case 24:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v29 )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v29,
                (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
              mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
              if ( mNewItemSp )
              {
                v48 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v29,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
                v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v31,
                  (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                            (UnityEngine_GameObject_o *)mNewItemSp,
                                                            0LL);
                  if ( v31 )
                    goto LABEL_109;
                }
              }
            }
          }
          goto LABEL_165;
        case 26:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v49 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v50 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_121;
        case 28:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v29 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v51 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v52 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v31,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_121:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( v31 )
            goto LABEL_122;
          goto LABEL_165;
        default:
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v28 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v29 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v32 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v33 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v34 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v31,
              (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v31 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
LABEL_122:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v47 = this->fields.mExchangeServantTimeRoot;
LABEL_123:
            v46 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_124:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
              v46);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_165;
LABEL_125:
            v53 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v40 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__;
            mExchangeServantTimeRoot = v53;
LABEL_126:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mExchangeServantTimeRoot,
              v40);
          }
          else
          {
            v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v31,
              (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_165;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v29,
            (System_Collections_Generic_List_GameObject__o *)v31,
            0LL);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
          if ( !mNewItemSp )
            goto LABEL_165;
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)mNewItemSp, 0, 0LL);
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_165;
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
    v54 = this->fields.shopNotice;
    if ( !v54 )
      goto LABEL_165;
    if ( v54->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v55 = (ShopNoticeRemainTime_o *)sub_B70764(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v55, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v55,
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.shopNoticeRemainTime,
              (System_Int32_array **)v55,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v62 = this->fields.shopNotice;
          if ( v62 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v62->fields._PeriodTimeLimit_k__BackingField;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1LL,
                                                      0LL);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
              v65 = this->fields.shopNotice;
              if ( v65 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v65->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          0LL);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v67 = this->fields.shopNotice;
                  if ( v67 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v67->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              0LL);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v70 = this->fields.mPeriodLimitedTimeLb;
                        v71 = (ShopNoticeRemainTimeLabel_o *)sub_B70764(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v71, v70, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v71;
                        sub_B70630(
                          (BattleServantConfConponent_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v71,
                          v72,
                          v73,
                          v74,
                          v75,
                          v76,
                          v77);
                      }
                      p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v79 = this->fields.mMonthlyLimitedTimeLb;
                        v80 = (ShopNoticeRemainTimeLabel_o *)sub_B70764(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v80, v79, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v80;
                        sub_B70630(
                          (BattleServantConfConponent_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v80,
                          v81,
                          v82,
                          v83,
                          v84,
                          v85,
                          v86);
                      }
                      p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v88 = this->fields.mExchangeServantItemLb;
                        v89 = (ShopNoticeRemainTimeLabel_o *)sub_B70764(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v89, v88, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v89;
                        sub_B70630(
                          (BattleServantConfConponent_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v89,
                          v90,
                          v91,
                          v92,
                          v93,
                          v94,
                          v95);
                      }
                      v96 = this->fields.shopNotice;
                      if ( v96 )
                      {
                        periodShopNoticeRemainTimeLabel = this->fields.periodShopNoticeRemainTimeLabel;
                        if ( periodShopNoticeRemainTimeLabel )
                        {
                          periodShopNoticeRemainTimeLabel->fields.timeLimit = v96->fields._PeriodTimeLimit_k__BackingField;
                          mNewItemSp = (UnityEngine_Component_o *)*p_periodShopNoticeRemainTimeLabel;
                          if ( *p_periodShopNoticeRemainTimeLabel )
                          {
                            ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                            v98 = this->fields.shopNotice;
                            if ( v98 )
                            {
                              monthlyShopNoticeRemainTimeLabel = this->fields.monthlyShopNoticeRemainTimeLabel;
                              if ( monthlyShopNoticeRemainTimeLabel )
                              {
                                monthlyShopNoticeRemainTimeLabel->fields.timeLimit = v98->fields._MonthlyTimeLimit_k__BackingField;
                                mNewItemSp = (UnityEngine_Component_o *)*p_monthlyShopNoticeRemainTimeLabel;
                                if ( *p_monthlyShopNoticeRemainTimeLabel )
                                {
                                  ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                                  v100 = this->fields.shopNotice;
                                  if ( v100 )
                                  {
                                    exchangeServantShopNoticeRemainTimeLabel = this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                    if ( exchangeServantShopNoticeRemainTimeLabel )
                                    {
                                      exchangeServantShopNoticeRemainTimeLabel->fields.timeLimit = v100->fields._ExchangeServantTimeLimit_k__BackingField;
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
LABEL_165:
      sub_B7076C(mNewItemSp, method);
    }
  }
}


void __fastcall MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  SummonControl_c *v3; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  __int64 v5; // x1
  UnityEngine_GameObject_o *summonCampainObject; // x0
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  UILabel_o *summonCampainNumLabel; // x19
  int32_t maxNum[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435085F & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&SummonControl_TypeInfo);
    sub_B70694(&UserGachaMaster_TypeInfo);
    sub_B70694(&StringLiteral_6579/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/);
    sub_B70694(&StringLiteral_6580/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/);
    byte_435085F = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  if ( this->fields.isOpen )
  {
    v3 = SummonControl_TypeInfo;
    if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
      v3 = SummonControl_TypeInfo;
    }
    FRIEND_POINT_SUMMON_ID = v3->static_fields->FRIEND_POINT_SUMMON_ID;
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
      summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_6579/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/,
                                                          0LL);
      if ( !summonCampainLabel1
        || (UILabel__set_text(summonCampainLabel1, (System_String_o *)summonCampainObject, 0LL),
            summonCampainLabel2 = this->fields.summonCampainLabel2,
            summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_6580/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/,
                                                                0LL),
            !summonCampainLabel2)
        || (UILabel__set_text(summonCampainLabel2, (System_String_o *)summonCampainObject, 0LL),
            summonCampainNumLabel = this->fields.summonCampainNumLabel,
            summonCampainObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&maxNum[1], 0LL),
            !summonCampainNumLabel) )
      {
LABEL_20:
        sub_B7076C(summonCampainObject, v5);
      }
      UILabel__set_text(summonCampainNumLabel, (System_String_o *)summonCampainObject, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  PlayMakerFSM_o *v23; // x0

  if ( (byte_4350859 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_8709/*"MAIN_MENU_BAR_SELECT"*/);
    byte_4350859 = 1;
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
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selectedKind,
      (System_Int32_array **)message,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this->fields.selectedObject = obj;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selectedObject,
      (System_Int32_array **)obj,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v23 = this->fields.activeSceneFSM;
    if ( !v23 )
      sub_B7076C(0LL, v22);
    PlayMakerFSM__SendEvent(v23, (System_String_o *)StringLiteral_8709/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
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
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v14; // x23
  UnityEngine_Transform_o *v15; // x24
  UnityEngine_GameObject_o *v16; // x24
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  if ( (byte_4350855 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350855 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_31;
    ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                (UnityEngine_Component_o *)scene,
                                                                (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
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
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v14 = ComponentInChildren_UIWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v14 )
      goto LABEL_31;
    v15 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
    if ( !v15 )
      goto LABEL_31;
    UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)gameObject, 0LL);
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v16 )
      goto LABEL_31;
    UnityEngine_GameObject__set_layer(v16, (int32_t)gameObject, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scene, 0LL, 0LL);
  myFSM = 0LL;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_31;
    myFSM = scene->fields.myFSM;
  }
  if ( !this )
    goto LABEL_31;
  this->fields.activeSceneFSM = myFSM;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.activeSceneFSM,
    (System_Int32_array **)myFSM,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v23),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v24),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_31:
    sub_B7076C(gameObject, myFSM);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


void __fastcall MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mAllBtnAct = act;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mAllBtnAct,
    (System_Int32_array **)act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v8; // w1
  const MethodInfo *v10; // x2
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  const MethodInfo *v18; // x2
  int32_t v19; // w1
  const MethodInfo *v20; // x2
  int32_t v21; // w1
  const MethodInfo *v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // w1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  partyBtn = this->fields.partyBtn;
  if ( isActive )
    v6 = 2;
  else
    v6 = 1;
  if ( !partyBtn )
    goto LABEL_41;
  v8 = kind == 3 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v8, (const MethodInfo *)isActive);
  partyBtn = this->fields.summonBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v11 = kind == 4 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v11, v10);
  partyBtn = this->fields.combineBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v13 = kind == 5 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v13, v12);
  partyBtn = this->fields.shopBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v15 = kind == 6 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v15, v14);
  partyBtn = this->fields.friendBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v17 = kind == 7 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v17, v16);
  partyBtn = this->fields.myroomBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v19 = kind == 8 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v19, v18);
  partyBtn = this->fields.terminalBtn;
  if ( !partyBtn )
    goto LABEL_41;
  if ( kind == 1 )
    v21 = 3;
  else
    v21 = v6;
  MainMenuBarButton__SetMode(partyBtn, v21, v20);
  if ( kind == 8 && isActive )
  {
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, *(const MethodInfo **)&kind);
    goto LABEL_40;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_41:
    sub_B7076C(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v29 = 3;
  else
    v29 = v6;
  MainMenuBarButton__SetMode(partyBtn, v29, v22);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.selectedKind, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.selectedObject = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.selectedObject, 0LL, v30, v31, v32, v33, v34, v35);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_array *mDispBtnActList; // x21
  Il2CppClass **v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_B7076C(this, kind);
  if ( act )
  {
    this = (MainMenuBarBase_o *)sub_B70754(act, mDispBtnActList->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_B7078C();
      sub_B70738(v13, 0LL);
    }
  }
  if ( mDispBtnActList->max_length <= kind )
  {
    v12 = sub_B70798(this);
    sub_B70738(v12, 0LL);
  }
  v11 = &mDispBtnActList->obj.klass + kind;
  v11[4] = (Il2CppClass *)act;
  sub_B70630(
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
  MainMenuBarBase_o *v6; // x20
  struct System_Collections_Generic_List_MainMenuBarButton__o *mDispBtnList; // x24
  __int64 v8; // x22
  int size; // w8

  v6 = this;
  if ( (byte_4350870 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__);
    this = (MainMenuBarBase_o *)sub_B70694(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    byte_4350870 = 1;
  }
  mDispBtnList = v6->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_12:
    sub_B7076C(this, is_enable);
  v8 = 0LL;
  while ( 1 )
  {
    size = mDispBtnList->fields._size;
    if ( (int)v8 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (MainMenuBarBase_o *)mDispBtnList->fields._items->m_Items[v8];
    if ( this )
    {
      this = (MainMenuBarBase_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (MainMenuBarBase_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)this,
                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( this )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, kind == (_DWORD)v8 && is_enable, 0LL);
          mDispBtnList = v6->fields.mDispBtnList;
          ++v8;
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
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v5);
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
  sub_B70630(
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
  __int64 v8; // x1

  if ( (byte_435086F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_435086F = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0LL);
  menuStateBtn = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B7076C(menuStateBtn, isEnable);
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

  if ( (byte_4350862 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4350862 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B7076C(menuStateBtn, is_enable);
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

  if ( (byte_4350865 & 1) == 0 )
  {
    sub_B70694(&MainMenuBarBase__SetTerminalQuestListClose_d__110_TypeInfo);
    byte_4350865 = 1;
  }
  v5 = sub_B70764(MainMenuBarBase__SetTerminalQuestListClose_d__110_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__110___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__110_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
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
  _BOOL4 v5; // w19
  UnityEngine_GameObject_o *menuComp; // x0
  int v8; // s0
  int v9; // s2
  int v10; // s9
  int v11; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v13; // x2
  struct System_Collections_Hashtable_o *table; // x23
  __int64 v15; // x2
  struct System_Collections_Hashtable_o *v16; // x23
  __int64 v17; // x2
  struct System_Collections_Hashtable_o *v18; // x23
  struct System_Collections_Hashtable_o *v19; // x23
  struct System_Collections_Hashtable_o *v20; // x23
  __int64 v21; // x2
  System_Collections_Hashtable_o *v22; // x23
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  _BOOL4 v27; // w24
  struct System_Collections_Hashtable_o *v28; // x23
  __int64 v29; // x2
  int v30; // s10
  struct System_Collections_Hashtable_o *v31; // x23
  __int64 v32; // x2
  struct System_Collections_Hashtable_o *v33; // x23
  struct System_Collections_Hashtable_o *v34; // x23
  struct System_Collections_Hashtable_o *v35; // x23
  __int64 v36; // x2
  System_Collections_Hashtable_o *v37; // x21
  int32_t v38; // w19
  int v39; // [xsp+0h] [xbp-60h] BYREF
  int v40; // [xsp+4h] [xbp-5Ch]
  int v41; // [xsp+8h] [xbp-58h]
  int v42; // [xsp+18h] [xbp-48h] BYREF
  char v43[4]; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = is_open;
  if ( (byte_435085A & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_18388/*"easetype"*/);
    sub_B70694(&StringLiteral_21593/*"onMoveComplete"*/);
    sub_B70694(&StringLiteral_17743/*"closeMenuStateImg"*/);
    sub_B70694(&StringLiteral_18373/*"easeInQuad"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21607/*"oncompletetarget"*/);
    sub_B70694(&StringLiteral_21613/*"onstarttarget"*/);
    sub_B70694(&StringLiteral_21866/*"position"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_21611/*"onstart"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&StringLiteral_21647/*"openMenuStateImg"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435085A = 1;
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
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)menuComp, !v5, 0LL);
    if ( v5 )
    {
      menuComp = (UnityEngine_GameObject_o *)this->fields.table;
      if ( menuComp )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
          menuComp,
          menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
        table = this->fields.table;
        v43[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v15);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_20250/*"isLocal"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v16 = this->fields.table;
          v39 = v10;
          v41 = v11;
          v40 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v39, v17);
          if ( v16 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
              v16,
              StringLiteral_21866/*"position"*/,
              menuComp,
              v16->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_21611/*"onstart"*/,
                StringLiteral_21647/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v18 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v18 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
                  v18,
                  StringLiteral_21613/*"onstarttarget"*/,
                  menuComp,
                  v18->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_21605/*"oncomplete"*/,
                    StringLiteral_21593/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v19 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v19 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
                      v19,
                      StringLiteral_21607/*"oncompletetarget"*/,
                      menuComp,
                      v19->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_18388/*"easetype"*/,
                        StringLiteral_18373/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v20 = this->fields.table;
                      v42 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v42, v21);
                      if ( v20 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
                          v20,
                          StringLiteral_23053/*"time"*/,
                          menuComp,
                          v20->klass->vtable._24_Clear.methodPtr);
                        v22 = this->fields.table;
                        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !iTween_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        }
                        iTween__MoveTo_42827204(gameObject, v22, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v23);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v24);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v25);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v26);
                        if ( !is_play_se )
                          return;
LABEL_39:
                        if ( v5 )
                          v38 = 9;
                        else
                          v38 = 10;
                        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(v38, 0LL);
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
      sub_B7076C(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    v27 = !this->fields.mIsCloseHideMode;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v28 = this->fields.table;
    v43[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v29);
    if ( !v28 )
      goto LABEL_47;
    v30 = dword_32E9938[v27];
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_20250/*"isLocal"*/,
      menuComp,
      v28->klass->vtable._24_Clear.methodPtr);
    v31 = this->fields.table;
    v39 = v10;
    v40 = v30;
    v41 = v11;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v39, v32);
    if ( !v31 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
      v31,
      StringLiteral_21866/*"position"*/,
      menuComp,
      v31->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_21611/*"onstart"*/,
      StringLiteral_17743/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v33 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v33 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_21613/*"onstarttarget"*/,
      menuComp,
      v33->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_21605/*"oncomplete"*/,
      StringLiteral_21593/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v34 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v34 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_21607/*"oncompletetarget"*/,
      menuComp,
      v34->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_18388/*"easetype"*/,
      StringLiteral_18373/*"easeInQuad"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v35 = this->fields.table;
    v42 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v42, v36);
    if ( !v35 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v35->klass->vtable._23_Add.method)(
      v35,
      StringLiteral_23053/*"time"*/,
      menuComp,
      v35->klass->vtable._24_Clear.methodPtr);
    v37 = this->fields.table;
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_42827204(gameObject, v37, 0LL);
    if ( is_play_se )
      goto LABEL_39;
  }
}


void __fastcall MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  int64_t UserId; // x0
  TblUserMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v9; // w22
  __int64 v10; // x20
  __int64 v11; // x20
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_4350854 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350854 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v6 = **(_QWORD **)(v5 + 192);
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_B08394(v6);
    UserId = **(_QWORD **)(v6 + 184);
    if ( !UserId )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)UserId,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    UserId = (int64_t)TblUserMaster__getUserData(MasterData_WarQuestSelectionMaster, UserId, 0LL);
    if ( !UserId )
      goto LABEL_41;
    v9 = *(_DWORD *)(UserId + 24);
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_B08394(v10);
    v11 = **(_QWORD **)(v10 + 192);
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_B08394(v11);
    UserId = **(_QWORD **)(v11 + 184);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_41;
    UserId = GachaEntity__getPrice((GachaEntity_o *)UserId, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, v9 / (int)UserId, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserId )
      goto LABEL_41;
    UserId = TblFriendMaster__GetSum((TblFriendMaster_o *)UserId, 2, 0LL);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, UserId, 0LL);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)this->fields.mMenuNoticeNumber;
    if ( UserId )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserId, 0, 0LL);
      return;
    }
LABEL_41:
    sub_B7076C(UserId, v4);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__100_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MainMenuBarBase_o *v3; // x19
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4350874 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    this = (MainMenuBarBase_o *)sub_B70694(&StringLiteral_19666/*"icon_servant_exchange_available_{0}"*/);
    byte_4350874 = 1;
  }
  shopNotice = v3->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_12;
  mExchangeServantItemSp = v3->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField, v2);
  v7 = System_String__Format((System_String_o *)StringLiteral_19666/*"icon_servant_exchange_available_{0}"*/, v6, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v7, 0LL) )
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
LABEL_12:
    sub_B7076C(this, method);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4350861 & 1) == 0 )
  {
    sub_B70694(&AndroidBackKeyManager_TypeInfo);
    sub_B70694(&StringLiteral_19837/*"img_menu_menu"*/);
    byte_4350861 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19837/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_B7076C(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0LL);
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
    sub_B7076C(0LL, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
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
      sub_B7076C(mNewItemSp, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v7);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4350860 & 1) == 0 )
  {
    sub_B70694(&AndroidBackKeyManager_TypeInfo);
    sub_B70694(&StringLiteral_19836/*"img_menu_close"*/);
    byte_4350860 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19836/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_B7076C(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0LL);
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


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__110___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__110_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__110__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__110_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  UISprite_c *v8; // x8
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_434F380 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__110_0__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_434F380 = 1;
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
  if ( !byte_434EF98 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EF98 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !klass )
    goto LABEL_34;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_34;
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0LL);
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !v8
    || (genericContainerHandle = *(TitleInfoControl_o **)&v8->_2.element_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)genericContainerHandle, 0, 0LL), !_4__this) )
  {
LABEL_34:
    sub_B7076C(genericContainerHandle, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v9 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__110_0__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v10 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_B70630(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__110__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__110_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__110__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__110_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__110_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__110__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__110_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__110__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__110_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0

  if ( (byte_434F37E & 1) == 0 )
  {
    sub_B70694(&MainMenuBarBase___c_TypeInfo);
    byte_434F37E = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MainMenuBarBase___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__109_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalSceneComponent_c *mTerminalList; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct TerminalSceneComponent_o *v5; // x8

  if ( (byte_434F37F & 1) == 0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434F37F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434EF98 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EF98 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  mTerminalList = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mTerminalList->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_29;
  mTerminalList = (TerminalSceneComponent_c *)mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_29;
  ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)mTerminalList, 0LL);
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  mTerminalList = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = TerminalSceneComponent_TypeInfo;
  }
  v5 = mTerminalList->static_fields->mInstance;
  if ( !v5 || (mTerminalList = (TerminalSceneComponent_c *)v5->fields.mTerminalList) == 0LL )
LABEL_29:
    sub_B7076C(mTerminalList, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)mTerminalList, 0, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass127_0___ctor(
        MainMenuBarBase___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass127_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B7076C(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.z, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass127_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}