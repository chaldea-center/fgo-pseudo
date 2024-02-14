void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MainMenuBarBase_StaticFields *static_fields; // x9
  MainMenuBarBase_c *v3; // x8
  struct MainMenuBarBase_StaticFields *v4; // x9

  if ( (byte_4212FDE & 1) == 0 )
  {
    sub_B0D8A4(&MainMenuBarBase_TypeInfo, v1);
    byte_4212FDE = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Hashtable_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Action_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4212FDD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action___TypeInfo, method);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo, v6);
    byte_4212FDD = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_MainMenuBarButton__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mDispBtnList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v16 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, v14, v15);
  System_Collections_Hashtable___ctor_38437272(v16, 0LL);
  this->fields.table = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.table,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (struct System_Action_array *)sub_B0D8BC(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mDispBtnActList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *mDispBtnList; // x0
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  MainMenuBarBase_c *v16; // x0
  struct NoticeNumberComponent_o *Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x0
  MainMenuBarBase_c *v28; // x0
  struct NoticeNumberComponent_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v37; // x20
  UnityEngine_GameObject_o *v38; // x20
  UnityEngine_GameObject_o *v39; // x0
  MainMenuBarBase_c *v40; // x0
  struct NoticeNumberComponent_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct ShopNotice_o *ShopNotice; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct UISprite_o *v70; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v72; // x1

  if ( (byte_4212FBE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__, v4);
    sub_B0D8A4(&MainMenuBarBase_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&ShopTopListViewManager_TypeInfo, v8);
    byte_4212FBE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mDispBtnList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.terminalBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.partyBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.summonBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.combineBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.shopBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.myroomBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.latestScenarioBtn,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
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
                                                                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_87;
    v14 = (UnityEngine_GameObject_o *)mDispBtnList;
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_31184716(v14, v15, 0LL);
    v16 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v16 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v14, v16->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v14 )
      goto LABEL_87;
    Component_srcLineSprite = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v14,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mMenuNoticeNumber,
      (System_Int32_array **)Component_srcLineSprite,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
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
    v25 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v25,
                                                                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_87;
    v26 = (UnityEngine_GameObject_o *)mDispBtnList;
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_31184716(v26, v27, 0LL);
    v28 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v28 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v26, v28->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v26 )
      goto LABEL_87;
    v29 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v26,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = v29;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mSummonNoticeNumber,
      (System_Int32_array **)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
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
    v37 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v37,
                                                                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_87;
    v38 = (UnityEngine_GameObject_o *)mDispBtnList;
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_31184716(v38, v39, 0LL);
    v40 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v40 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v38, v40->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v38 )
      goto LABEL_87;
    v41 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v38,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = v41;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFriendNoticeNumber,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.shopNotice,
    (System_Int32_array **)ShopNotice,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (System_Int32_array **)mAtlas,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      v70 = this->fields.mExchangeServantItemSp;
      if ( v70 )
      {
        mSpriteName = v70->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (System_Int32_array **)mSpriteName,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
        goto LABEL_85;
      }
    }
LABEL_87:
    sub_B0D97C(mDispBtnList);
  }
LABEL_85:
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v72);
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
    sub_B0D97C(backCloseSprite);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MainMenuBarButton_o *Instance; // x0
  UnityEngine_Object_o *klass; // x20
  __int64 v9; // x10
  void *monitor; // x20
  MyRoomStateMaterial_o *v11; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v13; // x3
  int32_t mOldState; // w8
  struct System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *mSelectInfs; // x20
  MaterialEventLogListViewItem_Info_o *v16; // x8
  int32_t v17; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212FC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, method);
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4212FC7 = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_31;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v9 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&klass->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (MyRoomRootComponent_c *)klass->klass->_2.typeHierarchy[v9 - 1] != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_31;
  }
  monitor = klass[2].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (MainMenuBarButton_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_31;
  if ( !monitor )
    goto LABEL_34;
  if ( MyRoomControl__GetState((MyRoomControl_o *)monitor, 0LL) == 1 )
    goto LABEL_31;
  v11 = (MyRoomStateMaterial_o *)*((_QWORD *)monitor + 107);
  if ( !v11 )
    goto LABEL_31;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v11, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v11, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_31;
  }
  mOldState = v11->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_31;
  mSelectInfs = v11->fields.mSelectInfs;
  if ( !mSelectInfs )
    goto LABEL_31;
  Instance = (MainMenuBarButton_o *)MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v13);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !mSelectInfs->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v16 = mSelectInfs->fields._items->m_Items[0];
  if ( !v16 )
    goto LABEL_34;
  if ( v16->fields.war_id != questId[1] )
  {
LABEL_31:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v17 = 2;
      goto LABEL_33;
    }
LABEL_34:
    sub_B0D97C(Instance);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_34;
  v17 = 3;
LABEL_33:
  MainMenuBarButton__SetMode(Instance, v17, v2);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v5; // w1

  if ( (byte_4212FC6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4212FC6 = 1;
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
    sub_B0D97C(terminalBtn);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421083E = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  float mFrameInPosY; // s14
  UnityEngine_GameObject_o *v21; // x0
  float v22; // s8
  System_Int32_array **Component_UIWidget; // x0
  System_Int32_array ***v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  float v31; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v35; // x21
  float v36; // s12
  float v37; // s13
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x23
  float v44; // s3
  float v45; // s0
  float v46; // s5
  float v47; // s2
  float v48; // s4
  float v49; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212FDC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, is_framein);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    sub_B0D8A4(&Method_MainMenuBarBase___c__DisplayClass126_0__FrameInOut_b__0__, v9);
    sub_B0D8A4(&Method_MainMenuBarBase___c__DisplayClass126_0__FrameInOut_b__1__, v10);
    sub_B0D8A4(&MainMenuBarBase___c__DisplayClass126_0_TypeInfo, v11);
    byte_4212FDC = 1;
  }
  v12 = sub_B0D974(MainMenuBarBase___c__DisplayClass126_0_TypeInfo, is_framein, is_force);
  MainMenuBarBase___c__DisplayClass126_0___ctor((MainMenuBarBase___c__DisplayClass126_0_o *)v12, 0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    goto LABEL_31;
  *(_QWORD *)(v12 + 16) = gameObject;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), gameObject, v14, v15, v16, v17, v18, v19);
  mFrameInPosY = this->fields.mFrameInPosY;
  v21 = *(UnityEngine_GameObject_o **)(v12 + 16);
  if ( is_framein )
    v22 = this->fields.mFrameInPosY;
  else
    v22 = -90.0;
  *(float *)(v12 + 32) = v22;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v21,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v24 = (System_Int32_array ***)(v12 + 24);
  *(_QWORD *)(v12 + 24) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), Component_UIWidget, v25, v26, v27, v28, v29, v30);
  if ( is_force
    || (v31 = *(float *)(v12 + 32),
        v31 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), 0LL)) )
  {
    gameObject = *v24;
    if ( *v24 )
    {
      MoveObject__Stop((MoveObject_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v12 + 16), *(float *)(v12 + 32), 0LL);
      return;
    }
LABEL_31:
    sub_B0D97C(gameObject);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v51 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  v35 = *(MoveObject_o **)(v12 + 24);
  v36 = v51.fields.x;
  v37 = v51.fields.z;
  v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass126_0__FrameInOut_b__0__, 0LL);
  v43 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(v43, (Il2CppObject *)v12, Method_MainMenuBarBase___c__DisplayClass126_0__FrameInOut_b__1__, 0LL);
  if ( !v35 )
    goto LABEL_31;
  if ( is_framein )
    v44 = x;
  else
    v44 = v36;
  if ( is_framein )
    v45 = v36;
  else
    v45 = x;
  if ( is_framein )
    v46 = z;
  else
    v46 = v37;
  if ( is_framein )
    v47 = v37;
  else
    v47 = z;
  v48 = v22;
  if ( is_framein )
    v49 = -90.0;
  else
    v49 = mFrameInPosY;
  MoveObject__Play(
    v35,
    *(UnityEngine_Vector3_o *)&v45,
    *(UnityEngine_Vector3_o *)&v44,
    IntpTime_AutoResume,
    v40,
    v43,
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v14; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_21461548; // x22
  QuestEntity_o *MainScenarioLatestClear; // x0

  if ( (byte_4212FD9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestScriptMaster___, warId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v11);
    byte_4212FD9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v14 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_26;
  MovedEventScriptList_21461548 = QuestScriptMaster__GetMovedEventScriptList_21461548(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_26;
  if ( !WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL) )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v14 )
      goto LABEL_26;
    MainScenarioLatestClear = UserQuestMaster__GetMainScenarioLatestClear(
                                v14,
                                (int64_t)Instance,
                                MovedEventScriptList_21461548,
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
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v14 )
    goto LABEL_26;
  MainScenarioLatestClear = UserQuestMaster__GetLatestMainScenarioLastQuest(
                              v14,
                              (int64_t)Instance,
                              MovedEventScriptList_21461548,
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
    Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( Instance )
    {
      *warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL);
      LOBYTE(MainScenarioLatestClear) = 1;
      return (char)MainScenarioLatestClear;
    }
LABEL_26:
    sub_B0D97C(Instance);
  }
  return (char)MainScenarioLatestClear;
}


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ScrTerminalListTop_o *MyFsmP; // x0
  __int64 v4; // x8
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 v7; // x8

  if ( (byte_4212FD1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12338/*"SPOT SELECT WAIT"*/, v2);
    byte_4212FD1 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = **(_QWORD **)&MyFsmP->fields.boardGameTokenEffectId;
  if ( !v4 )
    goto LABEL_30;
  MyFsmP = *(ScrTerminalListTop_o **)(v4 + 248);
  if ( !MyFsmP )
    goto LABEL_30;
  MyFsmP = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_30;
  MyFsmP = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_30;
  if ( (System_String__IndexOf_43922252((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12338/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    byte_421083D = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = **(_QWORD **)&MyFsmP->fields.boardGameTokenEffectId;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 256)) == 0 || (MyFsmP = *(ScrTerminalListTop_o **)(v7 + 520)) == 0LL )
LABEL_30:
    sub_B0D97C(MyFsmP);
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4212FD4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8630/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, method);
    byte_4212FD4 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_B0D97C(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, method);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8630/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v6);
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
  if ( (byte_4212FCE & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4212FCE = 1;
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
          sub_B0D840((BattleServantConfConponent_o *)(v15 + 4), 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&v6->fields.mAllBtnAct, 0LL, v16, v17, v18, v19, v20, v21);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v22 = 0;
          goto LABEL_16;
        }
LABEL_18:
        v23 = sub_B0D9A8(this);
        sub_B0D948(v23, 0LL);
      }
    }
    sub_B0D97C(this);
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

  if ( (byte_4212FD2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8634/*"MAIN_MENU_BAR_SELECT_PARTY"*/, method);
    byte_4212FD2 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_B0D97C(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, method);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8634/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4212FD6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8631/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, method);
    byte_4212FD6 = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_B0D97C(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, method);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8631/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v6);
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
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212FD8 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, method);
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_8632/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, v4);
    byte_4212FD8 = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_B0D97C(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, method);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v7);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v8, &questId[1], questId, v9) )
    {
      v13 = MyRoomRootComponent_TypeInfo;
      if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v13 = MyRoomRootComponent_TypeInfo;
      }
      v15 = questId[0];
      v14 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v13->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v17 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v10, v11);
      SceneJumpInfo___ctor_16651724(v17, MYROOM_STATE_NEW_MATERIAL, v14, v15, 0LL);
    }
    else
    {
      v17 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8632/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v17, v12);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4212FD7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8632/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, method);
    byte_4212FD7 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_B0D97C(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, method);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8632/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v6);
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

  if ( (byte_4212FD5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8635/*"MAIN_MENU_BAR_SELECT_SHOP"*/, method);
    byte_4212FD5 = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_B0D97C(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, method);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8635/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4212FD3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8636/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, method);
    byte_4212FD3 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_B0D97C(0LL);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, method);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8636/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v6);
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
  __int64 v19; // x8
  UnityEngine_Object_o *v20; // x20
  TerminalPramsManager_c *v21; // x0
  __int64 v22; // x8
  System_String_o *v23; // x20
  __int64 v24; // x8
  TerminalPramsManager_c *v25; // x0
  __int64 v26; // x8
  __int64 v27; // x1
  TerminalSceneComponent_c *v28; // x0
  TerminalPramsManager_c *v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  MainMenuBarBase___c_c *v32; // x0
  struct MainMenuBarBase___c_StaticFields *static_fields; // x8
  System_Action_o *_9__108_0; // x20
  Il2CppObject *v35; // x21
  struct MainMenuBarBase___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_IEnumerator_o *v43; // x1
  __int64 v44; // x8
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  TerminalPramsManager_c *v47; // x0
  __int64 v48; // x8

  if ( (byte_4212FCF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_MainMenuBarBase___c__OnClickTerminal_b__108_0__, v6);
    sub_B0D8A4(&MainMenuBarBase___c_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_8637/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, v8);
    sub_B0D8A4(&StringLiteral_12338/*"SPOT SELECT WAIT"*/, v9);
    sub_B0D8A4(&StringLiteral_2936/*"CAPTER WAIT"*/, v10);
    byte_4212FCF = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_152;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, method);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v13);
  if ( IsEnabled )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v14);
      byte_421083D = 1;
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
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v17);
      byte_421083D = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v19 )
      goto LABEL_152;
    v20 = *(UnityEngine_Object_o **)(v19 + 248);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
LABEL_155:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210849 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
        byte_4210849 = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4210848 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
        v29 = TerminalPramsManager_TypeInfo;
        byte_4210848 = 1;
      }
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_421087D )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
        v29 = TerminalPramsManager_TypeInfo;
        byte_421087D = 1;
      }
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_115;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_156;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421083E )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
      byte_421083E = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    if ( v21->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_156;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v17);
      byte_421083D = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v22 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v22 )
      goto LABEL_152;
    terminalBtn = *(MainMenuBarButton_o **)(v22 + 248);
    if ( !terminalBtn )
      goto LABEL_152;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_152;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_152;
    v23 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_43922252((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12338/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_43922252(v23, (System_String_o *)StringLiteral_2936/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_156;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v17);
      byte_421083D = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v24 )
      goto LABEL_152;
    terminalBtn = *(MainMenuBarButton_o **)(v24 + 248);
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
      if ( !byte_4210849 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
        byte_4210849 = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      v25->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4210848 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
        v25 = TerminalPramsManager_TypeInfo;
        byte_4210848 = 1;
      }
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = TerminalPramsManager_TypeInfo;
      }
      v25->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v17);
        byte_421083D = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v26 = **(_QWORD **)&terminalBtn[7].fields;
      if ( v26 )
      {
        terminalBtn = *(MainMenuBarButton_o **)(v26 + 248);
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v27);
            byte_421083D = 1;
          }
          v28 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v28 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v28->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_115:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8637/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v18);
            return;
          }
        }
      }
LABEL_152:
      sub_B0D97C(terminalBtn);
    }
    if ( (System_String__IndexOf_43922252(v23, (System_String_o *)StringLiteral_2936/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v30);
        byte_421083D = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v44 = **(_QWORD **)&terminalBtn[7].fields;
      if ( !v44 )
        goto LABEL_152;
      terminalBtn = *(MainMenuBarButton_o **)(v44 + 248);
      if ( !terminalBtn )
        goto LABEL_152;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v45);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210FAE )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v46);
        byte_4210FAE = 1;
      }
      v47 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v47 = TerminalPramsManager_TypeInfo;
      }
      v47->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v46);
        byte_421083D = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v48 = **(_QWORD **)&terminalBtn[7].fields;
      if ( !v48 )
        goto LABEL_152;
      terminalBtn = *(MainMenuBarButton_o **)(v48 + 248);
      if ( !terminalBtn )
        goto LABEL_152;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0LL);
    }
    else
    {
      v32 = MainMenuBarBase___c_TypeInfo;
      if ( (BYTE3(MainMenuBarBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v32 = MainMenuBarBase___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__108_0 = static_fields->__9__108_0;
      if ( !_9__108_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__108_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
        System_Action___ctor(_9__108_0, v35, Method_MainMenuBarBase___c__OnClickTerminal_b__108_0__, 0LL);
        v36 = MainMenuBarBase___c_TypeInfo->static_fields;
        v36->__9__108_0 = _9__108_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v36->__9__108_0,
          (System_Int32_array **)_9__108_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      v43 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__108_0, v31);
      UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v43, 0LL);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mMenuBtnAct, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4212FC2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4212FC2 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
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

  if ( (byte_4212FC3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8633/*"MAIN_MENU_BAR_SELECT_NONE"*/, v3);
    byte_4212FC3 = 1;
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
        sub_B0D97C(v6);
    }
    else
    {
      if ( !v6 )
        goto LABEL_13;
      selectedKind = (System_String_o *)StringLiteral_8633/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v6, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4212FC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_4212FC1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210848 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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

  if ( (byte_4212FC9 & 1) == 0 )
  {
    sub_B0D8A4(&ShopTopListViewManager_TypeInfo, method);
    byte_4212FC9 = 1;
  }
  if ( (BYTE3(ShopTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  }
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_B0D840(
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
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  struct ShopNotice_o *v42; // x8
  int32_t v43; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  struct UnityEngine_GameObject_o *mExchangeServantTimeRoot; // x1
  const MethodInfo_2FC56E8 *v67; // x2
  UnityEngine_GameObject_o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  UnityEngine_GameObject_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  UnityEngine_GameObject_o *v78; // x0
  const MethodInfo_2FC56E8 *v79; // x2
  struct UnityEngine_GameObject_o *v80; // x1
  UnityEngine_GameObject_o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  UnityEngine_GameObject_o *v92; // x0
  struct ShopNotice_o *v93; // x8
  ShopNoticeRemainTime_o *v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct ShopNotice_o *v101; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  struct ShopNotice_o *v104; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  struct ShopNotice_o *v106; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  __int64 v108; // x1
  __int64 v109; // x2
  struct ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x20
  UILabel_o *v111; // x21
  ShopNoticeRemainTimeLabel_o *v112; // x22
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v120; // x22
  ShopNoticeRemainTimeLabel_o *v121; // x23
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x22
  UILabel_o *v129; // x23
  ShopNoticeRemainTimeLabel_o *v130; // x24
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct ShopNotice_o *v137; // x8
  struct ShopNoticeRemainTimeLabel_o *periodShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v139; // x8
  struct ShopNoticeRemainTimeLabel_o *monthlyShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v141; // x8
  struct ShopNoticeRemainTimeLabel_o *exchangeServantShopNoticeRemainTimeLabel; // x9

  if ( (byte_4212FC8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__99_0__, v8);
    sub_B0D8A4(&ShopNoticeRemainTimeLabel_TypeInfo, v9);
    sub_B0D8A4(&ShopNoticeRemainTime_TypeInfo, v10);
    sub_B0D8A4(&ShopNoticeTween_TypeInfo, v11);
    byte_4212FC8 = 1;
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
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
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
      v15->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
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
      v16->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v17->fields._LimitedType_k__BackingField == 3,
      0LL);
    v20 = this->fields.shopNotice;
    if ( !v20 )
      goto LABEL_165;
    if ( v20->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__99_0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v21, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v22 = this->fields.shopNotice;
    if ( !v22 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v22->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v23 = this->fields.shopNotice;
    if ( !v23 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v23->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v24 = this->fields.shopNotice;
    if ( !v24 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v24->fields._LimitedType_k__BackingField == 2,
      0LL);
    v25 = this->fields.shopNotice;
    if ( !v25 )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v25->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v26 = this->fields.shopNotice;
    if ( !v26 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v26->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v27 = this->fields.shopNotice;
    if ( !v27 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v27->fields._LimitedType_k__BackingField == 4,
      0LL);
    v30 = this->fields.shopNotice;
    if ( !v30 )
      goto LABEL_165;
    LimitedType_k__BackingField = v30->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v33 = (ShopNoticeTween_o *)sub_B0D974(ShopNoticeTween_TypeInfo, v28, v29);
        ShopNoticeTween___ctor(v33, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v33;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.shopNoticeTween,
          (System_Int32_array **)v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_165;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v42 = this->fields.shopNotice;
      if ( !v42 )
        goto LABEL_165;
      v43 = v42->fields._LimitedType_k__BackingField;
      switch ( v43 )
      {
        case 6:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          gameObject = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v46, v47);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v48 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_125;
        case 10:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v56 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v57, v58);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_74;
        case 12:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v59 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v60, v61);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_74:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v48 )
            goto LABEL_165;
          goto LABEL_84;
        case 14:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v62 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v63 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v64, v65);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v48 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
LABEL_84:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mExchangeServantTimeRoot = this->fields.mExchangeServantTimeRoot;
          v67 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
          goto LABEL_126;
        case 18:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v68 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v69, v70);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_94;
        case 20:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v71 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v72, v73);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_94:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v48 )
            goto LABEL_165;
LABEL_109:
          v80 = (struct UnityEngine_GameObject_o *)mNewItemSp;
          goto LABEL_123;
        case 22:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v74 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v75 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v76, v77);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v48 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          v78 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v79 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
          v80 = v78;
          goto LABEL_124;
        case 24:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v44 )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v44,
                (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
              mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
              if ( mNewItemSp )
              {
                v81 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v44,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v82, v83);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v48,
                  (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                            (UnityEngine_GameObject_o *)mNewItemSp,
                                                            0LL);
                  if ( v48 )
                    goto LABEL_109;
                }
              }
            }
          }
          goto LABEL_165;
        case 26:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v84 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v85 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v86, v87);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_121;
        case 28:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v44 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v88 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v89 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v90, v91);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v48,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_121:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( v48 )
            goto LABEL_122;
          goto LABEL_165;
        default:
          v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v44,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v43 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v44 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v51 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v52 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v53 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v54, v55);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v48,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v48 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v48,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
LABEL_122:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v48,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v80 = this->fields.mExchangeServantTimeRoot;
LABEL_123:
            v79 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_124:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v48,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
              v79);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_165;
LABEL_125:
            v92 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v67 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
            mExchangeServantTimeRoot = v92;
LABEL_126:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v48,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mExchangeServantTimeRoot,
              v67);
          }
          else
          {
            v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v49, v50);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v48,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_165;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v44,
            (System_Collections_Generic_List_GameObject__o *)v48,
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
    v93 = this->fields.shopNotice;
    if ( !v93 )
      goto LABEL_165;
    if ( v93->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v94 = (ShopNoticeRemainTime_o *)sub_B0D974(ShopNoticeRemainTime_TypeInfo, v28, v29),
            ShopNoticeRemainTime___ctor(v94, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v94,
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.shopNoticeRemainTime,
              (System_Int32_array **)v94,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v101 = this->fields.shopNotice;
          if ( v101 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v101->fields._PeriodTimeLimit_k__BackingField;
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
              v104 = this->fields.shopNotice;
              if ( v104 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v104->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          0LL);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v106 = this->fields.shopNotice;
                  if ( v106 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v106->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              0LL);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v111 = this->fields.mPeriodLimitedTimeLb;
                        v112 = (ShopNoticeRemainTimeLabel_o *)sub_B0D974(ShopNoticeRemainTimeLabel_TypeInfo, v108, v109);
                        ShopNoticeRemainTimeLabel___ctor(v112, v111, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v112;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v112,
                          v113,
                          v114,
                          v115,
                          v116,
                          v117,
                          v118);
                      }
                      p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v120 = this->fields.mMonthlyLimitedTimeLb;
                        v121 = (ShopNoticeRemainTimeLabel_o *)sub_B0D974(ShopNoticeRemainTimeLabel_TypeInfo, v108, v109);
                        ShopNoticeRemainTimeLabel___ctor(v121, v120, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v121;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v121,
                          v122,
                          v123,
                          v124,
                          v125,
                          v126,
                          v127);
                      }
                      p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v129 = this->fields.mExchangeServantItemLb;
                        v130 = (ShopNoticeRemainTimeLabel_o *)sub_B0D974(ShopNoticeRemainTimeLabel_TypeInfo, v108, v109);
                        ShopNoticeRemainTimeLabel___ctor(v130, v129, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v130;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v130,
                          v131,
                          v132,
                          v133,
                          v134,
                          v135,
                          v136);
                      }
                      v137 = this->fields.shopNotice;
                      if ( v137 )
                      {
                        periodShopNoticeRemainTimeLabel = this->fields.periodShopNoticeRemainTimeLabel;
                        if ( periodShopNoticeRemainTimeLabel )
                        {
                          periodShopNoticeRemainTimeLabel->fields.timeLimit = v137->fields._PeriodTimeLimit_k__BackingField;
                          mNewItemSp = (UnityEngine_Component_o *)*p_periodShopNoticeRemainTimeLabel;
                          if ( *p_periodShopNoticeRemainTimeLabel )
                          {
                            ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                            v139 = this->fields.shopNotice;
                            if ( v139 )
                            {
                              monthlyShopNoticeRemainTimeLabel = this->fields.monthlyShopNoticeRemainTimeLabel;
                              if ( monthlyShopNoticeRemainTimeLabel )
                              {
                                monthlyShopNoticeRemainTimeLabel->fields.timeLimit = v139->fields._MonthlyTimeLimit_k__BackingField;
                                mNewItemSp = (UnityEngine_Component_o *)*p_monthlyShopNoticeRemainTimeLabel;
                                if ( *p_monthlyShopNoticeRemainTimeLabel )
                                {
                                  ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                                  v141 = this->fields.shopNotice;
                                  if ( v141 )
                                  {
                                    exchangeServantShopNoticeRemainTimeLabel = this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                    if ( exchangeServantShopNoticeRemainTimeLabel )
                                    {
                                      exchangeServantShopNoticeRemainTimeLabel->fields.timeLimit = v141->fields._ExchangeServantTimeLimit_k__BackingField;
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
      sub_B0D97C(mNewItemSp);
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
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  UILabel_o *summonCampainNumLabel; // x19
  int32_t maxNum[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212FCA & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&SummonControl_TypeInfo, v3);
    sub_B0D8A4(&UserGachaMaster_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_6504/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v5);
    sub_B0D8A4(&StringLiteral_6505/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v6);
    byte_4212FCA = 1;
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
      summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_6504/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/,
                                                          0LL);
      if ( !summonCampainLabel1
        || (UILabel__set_text(summonCampainLabel1, (System_String_o *)summonCampainObject, 0LL),
            summonCampainLabel2 = this->fields.summonCampainLabel2,
            summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_6505/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/,
                                                                0LL),
            !summonCampainLabel2)
        || (UILabel__set_text(summonCampainLabel2, (System_String_o *)summonCampainObject, 0LL),
            summonCampainNumLabel = this->fields.summonCampainNumLabel,
            summonCampainObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&maxNum[1], 0LL),
            !summonCampainNumLabel) )
      {
LABEL_20:
        sub_B0D97C(summonCampainObject);
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

  if ( (byte_4212FC4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&StringLiteral_8629/*"MAIN_MENU_BAR_SELECT"*/, v9);
    byte_4212FC4 = 1;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.selectedKind,
      (System_Int32_array **)message,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    this->fields.selectedObject = obj;
    sub_B0D840(
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
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(v23, (System_String_o *)StringLiteral_8629/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
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
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v15; // x23
  UnityEngine_Transform_o *v16; // x24
  UnityEngine_GameObject_o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct PlayMakerFSM_o *myFSM; // x1
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  if ( (byte_4212FC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___, scene);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4212FC0 = 1;
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
                                                                (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
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
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v15 = ComponentInChildren_UIWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v15 )
      goto LABEL_31;
    v16 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v15, 0LL);
    if ( !v16 )
      goto LABEL_31;
    UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)gameObject, 0LL);
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v17 )
      goto LABEL_31;
    UnityEngine_GameObject__set_layer(v17, (int32_t)gameObject, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.activeSceneFSM,
    (System_Int32_array **)myFSM,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v25),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v26),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_31:
    sub_B0D97C(gameObject);
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
  sub_B0D840(
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
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
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
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v22);
    goto LABEL_40;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_41:
    sub_B0D97C(partyBtn);
  if ( kind == 9 )
    v30 = 3;
  else
    v30 = v6;
  MainMenuBarButton__SetMode(partyBtn, v30, v23);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectedKind, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.selectedObject = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectedObject, 0LL, v31, v32, v33, v34, v35, v36);
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
    sub_B0D97C(this);
  if ( act )
  {
    this = (MainMenuBarBase_o *)sub_B0D964(act, mDispBtnActList->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_B0D99C();
      sub_B0D948(v13, 0LL);
    }
  }
  if ( mDispBtnActList->max_length <= kind )
  {
    v12 = sub_B0D9A8(this);
    sub_B0D948(v12, 0LL);
  }
  v11 = &mDispBtnActList->obj.klass + kind;
  v11[4] = (Il2CppClass *)act;
  sub_B0D840(
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
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_MainMenuBarButton__o *mDispBtnList; // x24
  __int64 v10; // x22
  int size; // w8

  v6 = this;
  if ( (byte_4212FDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__, v7);
    this = (MainMenuBarBase_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__, v8);
    byte_4212FDB = 1;
  }
  mDispBtnList = v6->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_12:
    sub_B0D97C(this);
  v10 = 0LL;
  while ( 1 )
  {
    size = mDispBtnList->fields._size;
    if ( (int)v10 >= size )
      break;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (MainMenuBarBase_o *)mDispBtnList->fields._items->m_Items[v10];
    if ( this )
    {
      this = (MainMenuBarBase_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (MainMenuBarBase_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)this,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( this )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, kind == (_DWORD)v10 && is_enable, 0LL);
          mDispBtnList = v6->fields.mDispBtnList;
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
    sub_B0D97C(0LL);
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
  sub_B0D840(
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

  if ( (byte_4212FDA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_4212FDA = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B0D97C(menuStateBtn);
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

  if ( (byte_4212FCD & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable);
    byte_4212FCD = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B0D97C(menuStateBtn);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4212FD0 & 1) == 0 )
  {
    sub_B0D8A4(&MainMenuBarBase__SetTerminalQuestListClose_d__109_TypeInfo, callback);
    byte_4212FD0 = 1;
  }
  v5 = sub_B0D974(MainMenuBarBase__SetTerminalQuestListClose_d__109_TypeInfo, callback, method);
  MainMenuBarBase__SetTerminalQuestListClose_d__109___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__109_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
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
  _BOOL4 v40; // w24
  struct System_Collections_Hashtable_o *v41; // x23
  int v42; // s10
  struct System_Collections_Hashtable_o *v43; // x23
  struct System_Collections_Hashtable_o *v44; // x23
  struct System_Collections_Hashtable_o *v45; // x23
  struct System_Collections_Hashtable_o *v46; // x23
  System_Collections_Hashtable_o *v47; // x21
  int32_t v48; // w19
  int v49; // [xsp+0h] [xbp-60h] BYREF
  int v50; // [xsp+4h] [xbp-5Ch]
  int v51; // [xsp+8h] [xbp-58h]
  int v52; // [xsp+18h] [xbp-48h] BYREF
  char v53[4]; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = is_open;
  if ( (byte_4212FC5 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, is_open);
    sub_B0D8A4(&float_TypeInfo, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_18170/*"easetype"*/, v10);
    sub_B0D8A4(&StringLiteral_21320/*"onMoveComplete"*/, v11);
    sub_B0D8A4(&StringLiteral_17533/*"closeMenuStateImg"*/, v12);
    sub_B0D8A4(&StringLiteral_18155/*"easeInQuad"*/, v13);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v14);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v15);
    sub_B0D8A4(&StringLiteral_21340/*"onstarttarget"*/, v16);
    sub_B0D8A4(&StringLiteral_21581/*"position"*/, v17);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v18);
    sub_B0D8A4(&StringLiteral_21338/*"onstart"*/, v19);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v20);
    sub_B0D8A4(&StringLiteral_21374/*"openMenuStateImg"*/, v21);
    sub_B0D8A4(&iTween_TypeInfo, v22);
    byte_4212FC5 = 1;
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
        v53[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v53);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_20001/*"isLocal"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v31 = this->fields.table;
          v49 = v26;
          v51 = v27;
          v50 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v49);
          if ( v31 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
              v31,
              StringLiteral_21581/*"position"*/,
              menuComp,
              v31->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_21338/*"onstart"*/,
                StringLiteral_21374/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v32 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v32 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
                  v32,
                  StringLiteral_21340/*"onstarttarget"*/,
                  menuComp,
                  v32->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_21332/*"oncomplete"*/,
                    StringLiteral_21320/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v33 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v33 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
                      v33,
                      StringLiteral_21334/*"oncompletetarget"*/,
                      menuComp,
                      v33->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_18170/*"easetype"*/,
                        StringLiteral_18155/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v34 = this->fields.table;
                      v52 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v52);
                      if ( v34 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
                          v34,
                          StringLiteral_22753/*"time"*/,
                          menuComp,
                          v34->klass->vtable._24_Clear.methodPtr);
                        v35 = this->fields.table;
                        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !iTween_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        }
                        iTween__MoveTo_42384720(gameObject, v35, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v36);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v37);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v38);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v39);
                        if ( !is_play_se )
                          return;
LABEL_39:
                        if ( v5 )
                          v48 = 9;
                        else
                          v48 = 10;
                        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(v48, 0LL);
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
      sub_B0D97C(menuComp);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    v40 = !this->fields.mIsCloseHideMode;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v41 = this->fields.table;
    v53[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v53);
    if ( !v41 )
      goto LABEL_47;
    v42 = dword_3202668[v40];
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v41->klass->vtable._23_Add.method)(
      v41,
      StringLiteral_20001/*"isLocal"*/,
      menuComp,
      v41->klass->vtable._24_Clear.methodPtr);
    v43 = this->fields.table;
    v49 = v26;
    v50 = v42;
    v51 = v27;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v49);
    if ( !v43 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v43->klass->vtable._23_Add.method)(
      v43,
      StringLiteral_21581/*"position"*/,
      menuComp,
      v43->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_21338/*"onstart"*/,
      StringLiteral_17533/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v44 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v44 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_21340/*"onstarttarget"*/,
      menuComp,
      v44->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_21332/*"oncomplete"*/,
      StringLiteral_21320/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v45 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v45 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_21334/*"oncompletetarget"*/,
      menuComp,
      v45->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_18170/*"easetype"*/,
      StringLiteral_18155/*"easeInQuad"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v46 = this->fields.table;
    v52 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v52);
    if ( !v46 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
      v46,
      StringLiteral_22753/*"time"*/,
      menuComp,
      v46->klass->vtable._24_Clear.methodPtr);
    v47 = this->fields.table;
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_42384720(gameObject, v47, 0LL);
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
  int64_t UserId; // x0
  TblUserMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v14; // w22
  __int64 v15; // x20
  __int64 v16; // x20
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_4212FBF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblUserMaster___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4212FBF = 1;
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
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v11 = **(_QWORD **)(v10 + 192);
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AA65A4(v11);
    UserId = **(_QWORD **)(v11 + 184);
    if ( !UserId )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)UserId,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
    v14 = *(_DWORD *)(UserId + 24);
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AA65A4(v15);
    v16 = **(_QWORD **)(v15 + 192);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AA65A4(v16);
    UserId = **(_QWORD **)(v16 + 184);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_41;
    UserId = GachaEntity__getPrice((GachaEntity_o *)UserId, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, v14 / (int)UserId, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_B0D97C(UserId);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__99_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarBase_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4212FDF & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    this = (MainMenuBarBase_o *)sub_B0D8A4(&StringLiteral_19424/*"icon_servant_exchange_available_{0}"*/, v4);
    byte_4212FDF = 1;
  }
  shopNotice = v2->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_12;
  mExchangeServantItemSp = v2->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField);
  v8 = System_String__Format((System_String_o *)StringLiteral_19424/*"icon_servant_exchange_available_{0}"*/, v7, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
LABEL_12:
    sub_B0D97C(this);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4212FCC & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19593/*"img_menu_menu"*/, v3);
    byte_4212FCC = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19593/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_B0D97C(menuStateBtn);
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
    sub_B0D97C(0LL);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
      sub_B0D97C(mNewItemSp);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v6);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4212FCB & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19592/*"img_menu_close"*/, v3);
    byte_4212FCB = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19592/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_B0D97C(menuStateBtn);
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


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__109___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__109_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__109__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__109_o *this,
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
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  __int64 v13; // x1
  UISprite_c *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_bool__o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_WaitUntil_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4210FA8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__109_0__, v4);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_4210FA8 = 1;
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
  if ( !byte_4210FAE )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210FAE = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v13);
    byte_421083D = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v14 = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !v14
    || (genericContainerHandle = *(TitleInfoControl_o **)&v14->_2.element_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)genericContainerHandle, 0, 0LL), !_4__this) )
  {
LABEL_34:
    sub_B0D97C(genericContainerHandle);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v17 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v15, v16);
  System_Func_bool____ctor(
    v17,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__109_0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v20 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v17, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_B0D840(p__2__current, v20);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__109__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__109__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__109_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__109_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__109__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__109__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__109_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0

  if ( (byte_4210FA6 & 1) == 0 )
  {
    sub_B0D8A4(&MainMenuBarBase___c_TypeInfo, v1);
    byte_4210FA6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MainMenuBarBase___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MainMenuBarBase___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__108_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  TerminalSceneComponent_c *mTerminalList; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  __int64 v6; // x1
  struct TerminalSceneComponent_o *v7; // x8

  if ( (byte_4210FA7 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v2);
    byte_4210FA7 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210FAE )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210FAE = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    byte_421083D = 1;
  }
  mTerminalList = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = TerminalSceneComponent_TypeInfo;
  }
  v7 = mTerminalList->static_fields->mInstance;
  if ( !v7 || (mTerminalList = (TerminalSceneComponent_c *)v7->fields.mTerminalList) == 0LL )
LABEL_29:
    sub_B0D97C(mTerminalList);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)mTerminalList, 0, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass126_0___ctor(
        MainMenuBarBase___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass126_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B0D97C(this);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.z, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass126_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}