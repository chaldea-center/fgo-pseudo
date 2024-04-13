void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct MainMenuBarBase_StaticFields *static_fields; // x9
  MainMenuBarBase_c *v5; // x8
  struct MainMenuBarBase_StaticFields *v6; // x9

  if ( (byte_42E72AC & 1) == 0 )
  {
    sub_B5D5C4(&MainMenuBarBase_TypeInfo, v1, v2, v3);
    byte_42E72AC = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v5 = MainMenuBarBase_TypeInfo;
  v6 = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&v6->NOTICE_NUMBER_POS_DISP_BTN.fields.x = 0x42180000422C0000LL;
  v6->NOTICE_NUMBER_POS_DISP_BTN.fields.z = 0.0;
  v5->static_fields->ITEM_ICON_ALPHA_ANIM_SPD_RATE = 0.5;
  v5->static_fields->ITEM_ICON_ALPHA_ANIM_TIME_INTERVAL = 3.0;
  v5->static_fields->FOLDER_WAR_ID = 10000;
}


void __fastcall MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Hashtable_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Action_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E72AB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo, v11, v12, v13);
    byte_42E72AB = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mDispBtnList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v21 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v21, 0LL);
  this->fields.table = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.table,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v28;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  float LocalPositionY; // s0
  System_Collections_Generic_List_XWeaponTrail_Element__o *mDispBtnList; // x0
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x0
  MainMenuBarBase_c *v31; // x0
  struct NoticeNumberComponent_o *Component_srcLineSprite; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v40; // x20
  UnityEngine_GameObject_o *v41; // x20
  UnityEngine_GameObject_o *v42; // x0
  MainMenuBarBase_c *v43; // x0
  struct NoticeNumberComponent_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  struct UnityEngine_GameObject_o *v52; // x20
  UnityEngine_GameObject_o *v53; // x20
  UnityEngine_GameObject_o *v54; // x0
  MainMenuBarBase_c *v55; // x0
  struct NoticeNumberComponent_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct ShopNotice_o *ShopNotice; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct UISprite_o *v85; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v87; // x1

  if ( (byte_42E728C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__, v8, v9, v10);
    sub_B5D5C4(&MainMenuBarBase_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ShopTopListViewManager_TypeInfo, v20, v21, v22);
    byte_42E728C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mDispBtnList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.terminalBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.partyBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.summonBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.combineBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.shopBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.myroomBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispBtnList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.latestScenarioBtn,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
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
                                                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_87;
    v29 = (UnityEngine_GameObject_o *)mDispBtnList;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(v29, v30, 0LL);
    v31 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v31 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v29, v31->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v29 )
      goto LABEL_87;
    Component_srcLineSprite = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v29,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mMenuNoticeNumber,
      (System_Int32_array **)Component_srcLineSprite,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
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
    v40 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v40,
                                                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_87;
    v41 = (UnityEngine_GameObject_o *)mDispBtnList;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(v41, v42, 0LL);
    v43 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v43 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v41, v43->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v41 )
      goto LABEL_87;
    v44 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v41,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = v44;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mSummonNoticeNumber,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
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
    v52 = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v52,
                                                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_87;
    v53 = (UnityEngine_GameObject_o *)mDispBtnList;
    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(v53, v54, 0LL);
    v55 = MainMenuBarBase_TypeInfo;
    if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v55 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v53, v55->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v53 )
      goto LABEL_87;
    v56 = (struct NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v53,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = v56;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFriendNoticeNumber,
      (System_Int32_array **)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.shopNotice,
    (System_Int32_array **)ShopNotice,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (System_Int32_array **)mAtlas,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      v85 = this->fields.mExchangeServantItemSp;
      if ( v85 )
      {
        mSpriteName = v85->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (System_Int32_array **)mSpriteName,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
        goto LABEL_85;
      }
    }
LABEL_87:
    sub_B5D69C(mDispBtnList, v24);
  }
LABEL_85:
  mDispBtnList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v87);
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
    sub_B5D69C(backCloseSprite, isOpen);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  MainMenuBarButton_o *Instance; // x0
  UnityEngine_Object_o *klass; // x20
  __int64 v16; // x10
  UnityEngine_Object_o *monitor; // x20
  MyRoomStateMaterial_o *v18; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v20; // x3
  int32_t mOldState; // w8
  struct System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *mSelectInfs; // x20
  MaterialEventLogListViewItem_Info_o *v23; // x8
  int32_t v24; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7295 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    byte_42E7295 = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_31;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v16 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&klass->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (MyRoomRootComponent_c *)klass->klass->_2.typeHierarchy[v16 - 1] != MyRoomRootComponent_TypeInfo )
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
  v18 = (MyRoomStateMaterial_o *)monitor[36].klass;
  if ( !v18 )
    goto LABEL_31;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v18, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v18, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_31;
  }
  mOldState = v18->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_31;
  mSelectInfs = v18->fields.mSelectInfs;
  if ( !mSelectInfs )
    goto LABEL_31;
  Instance = (MainMenuBarButton_o *)MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v20);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !mSelectInfs->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v23 = mSelectInfs->fields._items->m_Items[0];
  if ( !v23 )
    goto LABEL_34;
  if ( v23->fields.war_id != questId[1] )
  {
LABEL_31:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v24 = 2;
      goto LABEL_33;
    }
LABEL_34:
    sub_B5D69C(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_34;
  v24 = 3;
LABEL_33:
  MainMenuBarButton__SetMode(Instance, v24, v2);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v6; // w1

  if ( (byte_42E7294 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7294 = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
    {
      v6 = 2;
      goto LABEL_19;
    }
LABEL_20:
    sub_B5D69C(terminalBtn, method);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B1F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E4B1F = 1;
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
    v6 = 3;
  else
    v6 = 2;
  terminalBtn = this->fields.terminalBtn;
LABEL_19:
  MainMenuBarButton__SetMode(terminalBtn, v6, v2);
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
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  __int64 v22; // x20
  System_Int32_array **gameObject; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  float mFrameInPosY; // s14
  UnityEngine_GameObject_o *v32; // x0
  float v33; // s8
  System_Int32_array **Component_UIWidget; // x0
  System_Int32_array ***v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  float v42; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v46; // x21
  float v47; // s12
  float v48; // s13
  System_Action_o *v49; // x22
  System_Action_o *v50; // x23
  float v51; // s3
  float v52; // s0
  float v53; // s5
  float v54; // s2
  float v55; // s4
  float v56; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E72AA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, is_framein, is_force, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v7, v8, v9);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__0__, v13, v14, v15);
    sub_B5D5C4(&Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__1__, v16, v17, v18);
    sub_B5D5C4(&MainMenuBarBase___c__DisplayClass127_0_TypeInfo, v19, v20, v21);
    byte_42E72AA = 1;
  }
  v22 = sub_B5D694(MainMenuBarBase___c__DisplayClass127_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass127_0___ctor((MainMenuBarBase___c__DisplayClass127_0_o *)v22, 0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v22 )
    goto LABEL_31;
  *(_QWORD *)(v22 + 16) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), gameObject, v25, v26, v27, v28, v29, v30);
  mFrameInPosY = this->fields.mFrameInPosY;
  v32 = *(UnityEngine_GameObject_o **)(v22 + 16);
  if ( is_framein )
    v33 = this->fields.mFrameInPosY;
  else
    v33 = -90.0;
  *(float *)(v22 + 32) = v33;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v32,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v35 = (System_Int32_array ***)(v22 + 24);
  *(_QWORD *)(v22 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), Component_UIWidget, v36, v37, v38, v39, v40, v41);
  if ( is_force
    || (v42 = *(float *)(v22 + 32),
        v42 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v22 + 16), 0LL)) )
  {
    gameObject = *v35;
    if ( *v35 )
    {
      MoveObject__Stop((MoveObject_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v22 + 16), *(float *)(v22 + 32), 0LL);
      return;
    }
LABEL_31:
    sub_B5D69C(gameObject, v24);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v22 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v58 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v22 + 16), 0LL);
  v46 = *(MoveObject_o **)(v22 + 24);
  v47 = v58.fields.x;
  v48 = v58.fields.z;
  v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)v22, Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__0__, 0LL);
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v22, Method_MainMenuBarBase___c__DisplayClass127_0__FrameInOut_b__1__, 0LL);
  if ( !v46 )
    goto LABEL_31;
  if ( is_framein )
    v51 = x;
  else
    v51 = v47;
  if ( is_framein )
    v52 = v47;
  else
    v52 = x;
  if ( is_framein )
    v53 = z;
  else
    v53 = v48;
  if ( is_framein )
    v54 = v48;
  else
    v54 = z;
  v55 = v33;
  if ( is_framein )
    v56 = -90.0;
  else
    v56 = mFrameInPosY;
  MoveObject__Play(
    v46,
    *(UnityEngine_Vector3_o *)&v52,
    *(UnityEngine_Vector3_o *)&v51,
    IntpTime_AutoResume,
    v49,
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v30; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_22276612; // x22
  QuestEntity_o *MainScenarioLatestClear; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v35; // x20
  MainMenuBarBase_c *v36; // x0

  if ( (byte_42E72A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestScriptMaster___, (_DWORD)warId, (_DWORD)questId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v9, v10, v11);
    sub_B5D5C4(&MainMenuBarBase_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v24, v25, v26);
    byte_42E72A7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v30 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_35;
  MovedEventScriptList_22276612 = QuestScriptMaster__GetMovedEventScriptList_22276612(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
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
    if ( v30 )
    {
      MainScenarioLatestClear = UserQuestMaster__GetMainScenarioLatestClear(
                                  v30,
                                  (int64_t)Instance,
                                  MovedEventScriptList_22276612,
                                  0LL);
      if ( !MainScenarioLatestClear )
        return (char)MainScenarioLatestClear;
      goto LABEL_20;
    }
LABEL_35:
    sub_B5D69C(Instance, v28);
  }
  if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v30 )
    goto LABEL_35;
  MainScenarioLatestClear = UserQuestMaster__GetLatestMainScenarioLastQuest(
                              v30,
                              (int64_t)Instance,
                              MovedEventScriptList_22276612,
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
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  *warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_35;
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0LL);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v35 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v36 = MainMenuBarBase_TypeInfo;
      if ( (BYTE3(MainMenuBarBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MainMenuBarBase_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
        v36 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v36->static_fields->FOLDER_WAR_ID )
        *warId = v35->fields.parentWarId;
    }
  }
  LOBYTE(MainScenarioLatestClear) = 1;
  return (char)MainScenarioLatestClear;
}


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ScrTerminalListTop_o *MyFsmP; // x0
  __int64 v8; // x8
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x8
  __int64 v12; // x8

  if ( (byte_42E729F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12447/*"SPOT SELECT WAIT"*/, v4, v5, v6);
    byte_42E729F = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = **(_QWORD **)&MyFsmP->fields.boardGameTokenEffectId;
  if ( !v8 )
    goto LABEL_30;
  MyFsmP = *(ScrTerminalListTop_o **)(v8 + 248);
  if ( !MyFsmP )
    goto LABEL_30;
  MyFsmP = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_30;
  MyFsmP = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_30;
  if ( (System_String__IndexOf_44650136((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12447/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v9, v10);
    byte_42E4B1E = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = **(_QWORD **)&MyFsmP->fields.boardGameTokenEffectId;
  if ( !v11 || (v12 = *(_QWORD *)(v11 + 256)) == 0 || (MyFsmP = *(ScrTerminalListTop_o **)(v12 + 520)) == 0LL )
LABEL_30:
    sub_B5D69C(MyFsmP, method);
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4

  if ( (byte_42E72A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8695/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, (_DWORD)method, v2, v3);
    byte_42E72A2 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_B5D69C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, method);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v7);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8695/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v8);
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
  if ( (byte_42E729C & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_B5D5C4(&SoundManager_TypeInfo, kind, isEnabled, method);
    byte_42E729C = 1;
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
          sub_B5D560((BattleServantConfConponent_o *)(v15 + 4), 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)&v6->fields.mAllBtnAct, 0LL, v16, v17, v18, v19, v20, v21);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v22 = 0;
          goto LABEL_16;
        }
LABEL_18:
        v23 = sub_B5D6C8(this);
        sub_B5D668(v23, 0LL);
      }
    }
    sub_B5D69C(this, *(_QWORD *)&kind);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v22 = 2;
LABEL_16:
  SoundManager__playSystemSe(v22, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4

  if ( (byte_42E72A0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8699/*"MAIN_MENU_BAR_SELECT_PARTY"*/, (_DWORD)method, v2, v3);
    byte_42E72A0 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_B5D69C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, method);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v7);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8699/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v8);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4

  if ( (byte_42E72A4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8696/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, (_DWORD)method, v2, v3);
    byte_42E72A4 = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_B5D69C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, method);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v7);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8696/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v8);
}


void __fastcall MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MainMenuBarButton_o *latestScenarioBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v13; // x3
  MainMenuBarBase_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  MyRoomRootComponent_c *v17; // x0
  int32_t v18; // w21
  int32_t v19; // w22
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x23
  SceneJumpInfo_o *v21; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E72A6 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8697/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, v8, v9, v10);
    byte_42E72A6 = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_B5D69C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, method);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v13);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v14, &questId[1], questId, v15) )
    {
      v17 = MyRoomRootComponent_TypeInfo;
      if ( (BYTE3(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v17 = MyRoomRootComponent_TypeInfo;
      }
      v19 = questId[0];
      v18 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v17->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v21 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509152(v21, MYROOM_STATE_NEW_MATERIAL, v18, v19, 0LL);
    }
    else
    {
      v21 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8697/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v21, v16);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4

  if ( (byte_42E72A5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8697/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (_DWORD)method, v2, v3);
    byte_42E72A5 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_B5D69C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, method);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v7);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8697/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v8);
}


void __fastcall MainMenuBarBase__OnClickOutSide(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MainMenuBarBase__SwitchMenu(this, 0, 1, v2);
}


void __fastcall MainMenuBarBase__OnClickShop(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarButton_o *shopBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4

  if ( (byte_42E72A3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8700/*"MAIN_MENU_BAR_SELECT_SHOP"*/, (_DWORD)method, v2, v3);
    byte_42E72A3 = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_B5D69C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, method);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v7);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8700/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v8);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4

  if ( (byte_42E72A1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8701/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, (_DWORD)method, v2, v3);
    byte_42E72A1 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_B5D69C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, method);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v7);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8701/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v8);
}


void __fastcall MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  MainMenuBarButton_o *terminalBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  TerminalSceneComponent_c *v35; // x0
  UnityEngine_Object_o *mInstance; // x20
  int v37; // w2
  __int64 v38; // x3
  const MethodInfo *v39; // x4
  __int64 v40; // x8
  UnityEngine_Object_o *v41; // x20
  TerminalPramsManager_c *v42; // x0
  __int64 v43; // x8
  System_String_o *v44; // x20
  __int64 v45; // x8
  TerminalPramsManager_c *v46; // x0
  __int64 v47; // x8
  int v48; // w2
  __int64 v49; // x3
  TerminalSceneComponent_c *v50; // x0
  TerminalPramsManager_c *v51; // x0
  const MethodInfo *v52; // x2
  __int64 v53; // x3
  MainMenuBarBase___c_c *v54; // x0
  struct MainMenuBarBase___c_StaticFields *static_fields; // x8
  System_Action_o *_9__109_0; // x20
  Il2CppObject *v57; // x21
  struct MainMenuBarBase___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_IEnumerator_o *v65; // x1
  __int64 v66; // x8
  const MethodInfo *v67; // x3
  int v68; // w2
  __int64 v69; // x3
  TerminalPramsManager_c *v70; // x0
  __int64 v71; // x8

  if ( (byte_42E729D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_MainMenuBarBase___c__OnClickTerminal_b__109_0__, v14, v15, v16);
    sub_B5D5C4(&MainMenuBarBase___c_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8702/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12447/*"SPOT SELECT WAIT"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2983/*"CAPTER WAIT"*/, v26, v27, v28);
    byte_42E729D = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_152;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, method);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v31);
  if ( IsEnabled )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v32, v33, v34);
      byte_42E4B1E = 1;
    }
    v35 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v35 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v35->static_fields->mInstance;
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
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v37, v38);
      byte_42E4B1E = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v40 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v40 )
      goto LABEL_152;
    v41 = *(UnityEngine_Object_o **)(v40 + 248);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
    {
LABEL_155:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B2A )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v37, v38);
        byte_42E4B2A = 1;
      }
      v51 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v51 = TerminalPramsManager_TypeInfo;
      }
      v51->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_42E4B29 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v37, v38);
        v51 = TerminalPramsManager_TypeInfo;
        byte_42E4B29 = 1;
      }
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = TerminalPramsManager_TypeInfo;
      }
      v51->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_42E4B5E )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v37, v38);
        v51 = TerminalPramsManager_TypeInfo;
        byte_42E4B5E = 1;
      }
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = TerminalPramsManager_TypeInfo;
      }
      v51->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_115;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_156;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B1F )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v37, v38);
      byte_42E4B1F = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v42 = TerminalPramsManager_TypeInfo;
    }
    if ( v42->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_156;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v37, v38);
      byte_42E4B1E = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v43 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v43 )
      goto LABEL_152;
    terminalBtn = *(MainMenuBarButton_o **)(v43 + 248);
    if ( !terminalBtn )
      goto LABEL_152;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_152;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_152;
    v44 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_44650136((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12447/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_44650136(v44, (System_String_o *)StringLiteral_2983/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_156;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v37, v38);
      byte_42E4B1E = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v45 = **(_QWORD **)&terminalBtn[7].fields;
    if ( !v45 )
      goto LABEL_152;
    terminalBtn = *(MainMenuBarButton_o **)(v45 + 248);
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
      if ( !byte_42E4B2A )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v37, v38);
        byte_42E4B2A = 1;
      }
      v46 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v46 = TerminalPramsManager_TypeInfo;
      }
      v46->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_42E4B29 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v37, v38);
        v46 = TerminalPramsManager_TypeInfo;
        byte_42E4B29 = 1;
      }
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = TerminalPramsManager_TypeInfo;
      }
      v46->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v37, v38);
        byte_42E4B1E = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v47 = **(_QWORD **)&terminalBtn[7].fields;
      if ( v47 )
      {
        terminalBtn = *(MainMenuBarButton_o **)(v47 + 248);
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v48, v49);
            byte_42E4B1E = 1;
          }
          v50 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v50 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v50->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_115:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8702/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v39);
            return;
          }
        }
      }
LABEL_152:
      sub_B5D69C(terminalBtn, method);
    }
    if ( (System_String__IndexOf_44650136(v44, (System_String_o *)StringLiteral_2983/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, (_DWORD)v52, v53);
        byte_42E4B1E = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v66 = **(_QWORD **)&terminalBtn[7].fields;
      if ( !v66 )
        goto LABEL_152;
      terminalBtn = *(MainMenuBarButton_o **)(v66 + 248);
      if ( !terminalBtn )
        goto LABEL_152;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v67);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CB0 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v68, v69);
        byte_42E5CB0 = 1;
      }
      v70 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v70 = TerminalPramsManager_TypeInfo;
      }
      v70->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v68, v69);
        byte_42E4B1E = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v71 = **(_QWORD **)&terminalBtn[7].fields;
      if ( !v71 )
        goto LABEL_152;
      terminalBtn = *(MainMenuBarButton_o **)(v71 + 248);
      if ( !terminalBtn )
        goto LABEL_152;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0LL);
    }
    else
    {
      v54 = MainMenuBarBase___c_TypeInfo;
      if ( (BYTE3(MainMenuBarBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v54 = MainMenuBarBase___c_TypeInfo;
      }
      static_fields = v54->static_fields;
      _9__109_0 = static_fields->__9__109_0;
      if ( !_9__109_0 )
      {
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        }
        v57 = (Il2CppObject *)static_fields->__9;
        _9__109_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__109_0, v57, Method_MainMenuBarBase___c__OnClickTerminal_b__109_0__, 0LL);
        v58 = MainMenuBarBase___c_TypeInfo->static_fields;
        v58->__9__109_0 = _9__109_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v58->__9__109_0,
          (System_Int32_array **)_9__109_0,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
      }
      v65 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__109_0, v52);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v65, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mMenuBtnAct, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7290 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7290 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v10; // x0

  if ( (byte_42E7291 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8698/*"MAIN_MENU_BAR_SELECT_NONE"*/, v5, v6, v7);
    byte_42E7291 = 1;
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
    v10 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v10 )
LABEL_13:
        sub_B5D69C(v10, selectedKind);
    }
    else
    {
      if ( !v10 )
        goto LABEL_13;
      selectedKind = (System_String_o *)StringLiteral_8698/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v10, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E728F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    byte_42E728F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B29 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ShopNotice_o *ShopNotice; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42E7297 & 1) == 0 )
  {
    sub_B5D5C4(&ShopTopListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7297 = 1;
  }
  if ( (BYTE3(ShopTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  }
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.shopNotice,
    (System_Int32_array **)ShopNotice,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  MainMenuBarBase__ResetShopNoticeDraw(this, v12);
}


void __fastcall MainMenuBarBase__ResetShopNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_Component_o *mNewItemSp; // x0
  struct ShopNotice_o *shopNotice; // x8
  struct ShopNotice_o *v34; // x8
  struct ShopNotice_o *v35; // x8
  struct ShopNotice_o *v36; // x8
  struct ShopNotice_o *v37; // x8
  struct ShopNotice_o *v38; // x8
  System_Action_o *v39; // x20
  struct ShopNotice_o *v40; // x8
  struct ShopNotice_o *v41; // x8
  struct ShopNotice_o *v42; // x8
  struct ShopNotice_o *v43; // x8
  struct ShopNotice_o *v44; // x8
  struct ShopNotice_o *v45; // x8
  struct ShopNotice_o *v46; // x8
  unsigned int LimitedType_k__BackingField; // w8
  struct ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct ShopNotice_o *v56; // x8
  int32_t v57; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x22
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  struct UnityEngine_GameObject_o *mExchangeServantTimeRoot; // x1
  const MethodInfo_3056FC0 *v69; // x2
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  const MethodInfo_3056FC0 *v75; // x2
  struct UnityEngine_GameObject_o *v76; // x1
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  struct ShopNotice_o *v83; // x8
  ShopNoticeRemainTime_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct ShopNotice_o *v91; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  struct ShopNotice_o *v94; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  struct ShopNotice_o *v96; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  struct ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x20
  UILabel_o *v99; // x21
  ShopNoticeRemainTimeLabel_o *v100; // x22
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v108; // x22
  ShopNoticeRemainTimeLabel_o *v109; // x23
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x22
  UILabel_o *v117; // x23
  ShopNoticeRemainTimeLabel_o *v118; // x24
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  struct ShopNotice_o *v125; // x8
  struct ShopNoticeRemainTimeLabel_o *periodShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v127; // x8
  struct ShopNoticeRemainTimeLabel_o *monthlyShopNoticeRemainTimeLabel; // x9
  struct ShopNotice_o *v129; // x8
  struct ShopNoticeRemainTimeLabel_o *exchangeServantShopNoticeRemainTimeLabel; // x9

  if ( (byte_42E7296 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__100_0__, v20, v21, v22);
    sub_B5D5C4(&ShopNoticeRemainTimeLabel_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ShopNoticeRemainTime_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ShopNoticeTween_TypeInfo, v29, v30, v31);
    byte_42E7296 = 1;
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
    v34 = this->fields.shopNotice;
    if ( !v34 )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v34->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v35 = this->fields.shopNotice;
    if ( !v35 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v35->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v36 = this->fields.shopNotice;
    if ( !v36 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v36->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v37 = this->fields.shopNotice;
    if ( !v37 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v37->fields._LimitedType_k__BackingField == 3,
      0LL);
    v38 = this->fields.shopNotice;
    if ( !v38 )
      goto LABEL_165;
    if ( v38->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__100_0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v39, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v40 = this->fields.shopNotice;
    if ( !v40 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v40->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v41 = this->fields.shopNotice;
    if ( !v41 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v41->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v42 = this->fields.shopNotice;
    if ( !v42 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v42->fields._LimitedType_k__BackingField == 2,
      0LL);
    v43 = this->fields.shopNotice;
    if ( !v43 )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v43->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v44 = this->fields.shopNotice;
    if ( !v44 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v44->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_165;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v45 = this->fields.shopNotice;
    if ( !v45 )
      goto LABEL_165;
    if ( !mNewItemSp )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v45->fields._LimitedType_k__BackingField == 4,
      0LL);
    v46 = this->fields.shopNotice;
    if ( !v46 )
      goto LABEL_165;
    LimitedType_k__BackingField = v46->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v49 = (ShopNoticeTween_o *)sub_B5D694(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v49, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v49;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.shopNoticeTween,
          (System_Int32_array **)v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_165;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v56 = this->fields.shopNotice;
      if ( !v56 )
        goto LABEL_165;
      v57 = v56->fields._LimitedType_k__BackingField;
      switch ( v57 )
      {
        case 6:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          gameObject = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v60 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v60,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_125;
        case 10:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v64 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_74;
        case 12:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v65 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_74:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v60 )
            goto LABEL_165;
          goto LABEL_84;
        case 14:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v66 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v67 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v60 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v60,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
LABEL_84:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v60,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mExchangeServantTimeRoot = this->fields.mExchangeServantTimeRoot;
          v69 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
          goto LABEL_126;
        case 18:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v70 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_94;
        case 20:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v71 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_94:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v60 )
            goto LABEL_165;
LABEL_109:
          v76 = (struct UnityEngine_GameObject_o *)mNewItemSp;
          goto LABEL_123;
        case 22:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v72 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v73 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v60 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v60,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          v74 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v75 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
          v76 = v74;
          goto LABEL_124;
        case 24:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v58 )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v58,
                (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
              mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
              if ( mNewItemSp )
              {
                v77 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v58,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
                v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v60,
                  (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                            (UnityEngine_GameObject_o *)mNewItemSp,
                                                            0LL);
                  if ( v60 )
                    goto LABEL_109;
                }
              }
            }
          }
          goto LABEL_165;
        case 26:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v78 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v79 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
          goto LABEL_121;
        case 28:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v58 )
            goto LABEL_165;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v80 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_165;
          v81 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v60,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_165;
LABEL_121:
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( v60 )
            goto LABEL_122;
          goto LABEL_165;
        default:
          v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v58,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v57 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v58 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v58,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v61 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v58,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v62 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v58,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_165;
            v63 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v58,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v60,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v60 )
              goto LABEL_165;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v60,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_165;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
LABEL_122:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v60,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mNewItemSp,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v76 = this->fields.mExchangeServantTimeRoot;
LABEL_123:
            v75 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_124:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v60,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
              v75);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_165;
LABEL_125:
            v82 = UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v69 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
            mExchangeServantTimeRoot = v82;
LABEL_126:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v60,
              (EventMissionProgressRequest_Argument_ProgressData_o *)mExchangeServantTimeRoot,
              v69);
          }
          else
          {
            v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v60,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_165;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v58,
            (System_Collections_Generic_List_GameObject__o *)v60,
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
    v83 = this->fields.shopNotice;
    if ( !v83 )
      goto LABEL_165;
    if ( v83->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v84 = (ShopNoticeRemainTime_o *)sub_B5D694(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v84, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v84,
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.shopNoticeRemainTime,
              (System_Int32_array **)v84,
              v85,
              v86,
              v87,
              v88,
              v89,
              v90),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v91 = this->fields.shopNotice;
          if ( v91 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v91->fields._PeriodTimeLimit_k__BackingField;
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
              v94 = this->fields.shopNotice;
              if ( v94 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v94->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          0LL);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v96 = this->fields.shopNotice;
                  if ( v96 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v96->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              0LL);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v99 = this->fields.mPeriodLimitedTimeLb;
                        v100 = (ShopNoticeRemainTimeLabel_o *)sub_B5D694(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v100, v99, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v100;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v100,
                          v101,
                          v102,
                          v103,
                          v104,
                          v105,
                          v106);
                      }
                      p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v108 = this->fields.mMonthlyLimitedTimeLb;
                        v109 = (ShopNoticeRemainTimeLabel_o *)sub_B5D694(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v109, v108, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v109;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v109,
                          v110,
                          v111,
                          v112,
                          v113,
                          v114,
                          v115);
                      }
                      p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v117 = this->fields.mExchangeServantItemLb;
                        v118 = (ShopNoticeRemainTimeLabel_o *)sub_B5D694(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v118, v117, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v118;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (System_Int32_array **)v118,
                          v119,
                          v120,
                          v121,
                          v122,
                          v123,
                          v124);
                      }
                      v125 = this->fields.shopNotice;
                      if ( v125 )
                      {
                        periodShopNoticeRemainTimeLabel = this->fields.periodShopNoticeRemainTimeLabel;
                        if ( periodShopNoticeRemainTimeLabel )
                        {
                          periodShopNoticeRemainTimeLabel->fields.timeLimit = v125->fields._PeriodTimeLimit_k__BackingField;
                          mNewItemSp = (UnityEngine_Component_o *)*p_periodShopNoticeRemainTimeLabel;
                          if ( *p_periodShopNoticeRemainTimeLabel )
                          {
                            ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                            v127 = this->fields.shopNotice;
                            if ( v127 )
                            {
                              monthlyShopNoticeRemainTimeLabel = this->fields.monthlyShopNoticeRemainTimeLabel;
                              if ( monthlyShopNoticeRemainTimeLabel )
                              {
                                monthlyShopNoticeRemainTimeLabel->fields.timeLimit = v127->fields._MonthlyTimeLimit_k__BackingField;
                                mNewItemSp = (UnityEngine_Component_o *)*p_monthlyShopNoticeRemainTimeLabel;
                                if ( *p_monthlyShopNoticeRemainTimeLabel )
                                {
                                  ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                                  v129 = this->fields.shopNotice;
                                  if ( v129 )
                                  {
                                    exchangeServantShopNoticeRemainTimeLabel = this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                    if ( exchangeServantShopNoticeRemainTimeLabel )
                                    {
                                      exchangeServantShopNoticeRemainTimeLabel->fields.timeLimit = v129->fields._ExchangeServantTimeLimit_k__BackingField;
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
      sub_B5D69C(mNewItemSp, method);
    }
  }
}


void __fastcall MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  SummonControl_c *v17; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  __int64 v19; // x1
  UnityEngine_GameObject_o *summonCampainObject; // x0
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  UILabel_o *summonCampainNumLabel; // x19
  int32_t maxNum[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7298 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SummonControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UserGachaMaster_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6566/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6567/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v14, v15, v16);
    byte_42E7298 = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  if ( this->fields.isOpen )
  {
    v17 = SummonControl_TypeInfo;
    if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
      v17 = SummonControl_TypeInfo;
    }
    FRIEND_POINT_SUMMON_ID = v17->static_fields->FRIEND_POINT_SUMMON_ID;
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
                                                          (System_String_o *)StringLiteral_6566/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/,
                                                          0LL);
      if ( !summonCampainLabel1
        || (UILabel__set_text(summonCampainLabel1, (System_String_o *)summonCampainObject, 0LL),
            summonCampainLabel2 = this->fields.summonCampainLabel2,
            summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_6567/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/,
                                                                0LL),
            !summonCampainLabel2)
        || (UILabel__set_text(summonCampainLabel2, (System_String_o *)summonCampainObject, 0LL),
            summonCampainNumLabel = this->fields.summonCampainNumLabel,
            summonCampainObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&maxNum[1], 0LL),
            !summonCampainNumLabel) )
      {
LABEL_20:
        sub_B5D69C(summonCampainObject, v19);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *activeSceneFSM; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  PlayMakerFSM_o *v26; // x0

  if ( (byte_42E7292 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, type, (_DWORD)message, obj);
    sub_B5D5C4(&StringLiteral_8694/*"MAIN_MENU_BAR_SELECT"*/, v9, v10, v11);
    byte_42E7292 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectedKind,
      (System_Int32_array **)message,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.selectedObject = obj;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectedObject,
      (System_Int32_array **)obj,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v26 = this->fields.activeSceneFSM;
    if ( !v26 )
      sub_B5D69C(0LL, v25);
    PlayMakerFSM__SendEvent(v26, (System_String_o *)StringLiteral_8694/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct PlayMakerFSM_o *myFSM; // x1
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *v20; // x23
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_GameObject_o *v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3

  if ( (byte_42E728E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentInChildren_UICamera___,
      (_DWORD)scene,
      kind,
      *(_QWORD *)&panelDepth);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICamera___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E728E = 1;
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
                                                                (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
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
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v20 = ComponentInChildren_UIWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v20 )
      goto LABEL_31;
    v21 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v20, 0LL);
    if ( !v21 )
      goto LABEL_31;
    UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)gameObject, 0LL);
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v22 )
      goto LABEL_31;
    UnityEngine_GameObject__set_layer(v22, (int32_t)gameObject, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.activeSceneFSM,
    (System_Int32_array **)myFSM,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v29),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v30),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(gameObject, myFSM);
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
  sub_B5D560(
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
    sub_B5D69C(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v29 = 3;
  else
    v29 = v6;
  MainMenuBarButton__SetMode(partyBtn, v29, v22);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectedKind, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.selectedObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectedObject, 0LL, v30, v31, v32, v33, v34, v35);
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
    sub_B5D69C(this, kind);
  if ( act )
  {
    this = (MainMenuBarBase_o *)sub_B5D684(act, mDispBtnActList->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_B5D6BC();
      sub_B5D668(v13, 0LL);
    }
  }
  if ( mDispBtnActList->max_length <= kind )
  {
    v12 = sub_B5D6C8(this);
    sub_B5D668(v12, 0LL);
  }
  v11 = &mDispBtnActList->obj.klass + kind;
  v11[4] = (Il2CppClass *)act;
  sub_B5D560(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_List_MainMenuBarButton__o *mDispBtnList; // x24
  __int64 v14; // x22
  int size; // w8

  v6 = this;
  if ( (byte_42E72A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, kind, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__, v7, v8, v9);
    this = (MainMenuBarBase_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__,
                                  v10,
                                  v11,
                                  v12);
    byte_42E72A9 = 1;
  }
  mDispBtnList = v6->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_12:
    sub_B5D69C(this, is_enable);
  v14 = 0LL;
  while ( 1 )
  {
    size = mDispBtnList->fields._size;
    if ( (int)v14 >= size )
      break;
    if ( size <= (unsigned int)v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (MainMenuBarBase_o *)mDispBtnList->fields._items->m_Items[v14];
    if ( this )
    {
      this = (MainMenuBarBase_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (MainMenuBarBase_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)this,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( this )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, kind == (_DWORD)v14 && is_enable, 0LL);
          mDispBtnList = v6->fields.mDispBtnList;
          ++v14;
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
    sub_B5D69C(0LL, v5);
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
  sub_B5D560(
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

  if ( (byte_42E72A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable, isGray, method);
    byte_42E72A8 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B5D69C(menuStateBtn, isEnable);
  }
  UIButtonColor__set_state((UIButtonColor_o *)menuStateBtn, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetOutSideColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *menuStateBtn; // x0

  if ( (byte_42E729B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, is_enable, (_DWORD)method, v3);
    byte_42E729B = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_B5D69C(menuStateBtn, is_enable);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E729E & 1) == 0 )
  {
    sub_B5D5C4(&MainMenuBarBase__SetTerminalQuestListClose_d__110_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E729E = 1;
  }
  v6 = sub_B5D694(MainMenuBarBase__SetTerminalQuestListClose_d__110_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__110___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__110_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
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
  _BOOL4 v5; // w19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  UnityEngine_GameObject_o *menuComp; // x0
  int v56; // s0
  int v57; // s2
  int v58; // s9
  int v59; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v61; // x2
  struct System_Collections_Hashtable_o *table; // x23
  struct System_Collections_Hashtable_o *v63; // x23
  struct System_Collections_Hashtable_o *v64; // x23
  struct System_Collections_Hashtable_o *v65; // x23
  struct System_Collections_Hashtable_o *v66; // x23
  System_Collections_Hashtable_o *v67; // x23
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x1
  _BOOL4 v72; // w24
  struct System_Collections_Hashtable_o *v73; // x23
  int v74; // s10
  struct System_Collections_Hashtable_o *v75; // x23
  struct System_Collections_Hashtable_o *v76; // x23
  struct System_Collections_Hashtable_o *v77; // x23
  struct System_Collections_Hashtable_o *v78; // x23
  System_Collections_Hashtable_o *v79; // x21
  int32_t v80; // w19
  int v81; // [xsp+0h] [xbp-60h] BYREF
  int v82; // [xsp+4h] [xbp-5Ch]
  int v83; // [xsp+8h] [xbp-58h]
  int v84; // [xsp+18h] [xbp-48h] BYREF
  char v85[4]; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = is_open;
  if ( (byte_42E7293 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, is_open, is_play_se, method);
    sub_B5D5C4(&float_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SoundManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21530/*"onMoveComplete"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_17696/*"closeMenuStateImg"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_18326/*"easeInQuad"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21550/*"onstarttarget"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_21548/*"onstart"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_21584/*"openMenuStateImg"*/, v49, v50, v51);
    sub_B5D5C4(&iTween_TypeInfo, v52, v53, v54);
    byte_42E7293 = 1;
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
    *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)menuComp, 0LL);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    v58 = v56;
    v59 = v57;
    gameObject = UnityEngine_GameObject__get_gameObject(menuComp, 0LL);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v61);
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
        v85[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v85);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_20191/*"isLocal"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v63 = this->fields.table;
          v81 = v58;
          v83 = v59;
          v82 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v81);
          if ( v63 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v63->klass->vtable._23_Add.method)(
              v63,
              StringLiteral_21800/*"position"*/,
              menuComp,
              v63->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_21548/*"onstart"*/,
                StringLiteral_21584/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v64 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v64 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v64->klass->vtable._23_Add.method)(
                  v64,
                  StringLiteral_21550/*"onstarttarget"*/,
                  menuComp,
                  v64->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_21542/*"oncomplete"*/,
                    StringLiteral_21530/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v65 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v65 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v65->klass->vtable._23_Add.method)(
                      v65,
                      StringLiteral_21544/*"oncompletetarget"*/,
                      menuComp,
                      v65->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_18341/*"easetype"*/,
                        StringLiteral_18326/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v66 = this->fields.table;
                      v84 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v84);
                      if ( v66 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v66->klass->vtable._23_Add.method)(
                          v66,
                          StringLiteral_22982/*"time"*/,
                          menuComp,
                          v66->klass->vtable._24_Clear.methodPtr);
                        v67 = this->fields.table;
                        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !iTween_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        }
                        iTween__MoveTo_43183064(gameObject, v67, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v68);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v69);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v70);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v71);
                        if ( !is_play_se )
                          return;
LABEL_39:
                        if ( v5 )
                          v80 = 9;
                        else
                          v80 = 10;
                        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(v80, 0LL);
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
      sub_B5D69C(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    v72 = !this->fields.mIsCloseHideMode;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v73 = this->fields.table;
    v85[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v85);
    if ( !v73 )
      goto LABEL_47;
    v74 = dword_32A1868[v72];
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v73->klass->vtable._23_Add.method)(
      v73,
      StringLiteral_20191/*"isLocal"*/,
      menuComp,
      v73->klass->vtable._24_Clear.methodPtr);
    v75 = this->fields.table;
    v81 = v58;
    v82 = v74;
    v83 = v59;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v81);
    if ( !v75 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v75->klass->vtable._23_Add.method)(
      v75,
      StringLiteral_21800/*"position"*/,
      menuComp,
      v75->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_21548/*"onstart"*/,
      StringLiteral_17696/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v76 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v76 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v76->klass->vtable._23_Add.method)(
      v76,
      StringLiteral_21550/*"onstarttarget"*/,
      menuComp,
      v76->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_21542/*"oncomplete"*/,
      StringLiteral_21530/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v77 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v77 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v77->klass->vtable._23_Add.method)(
      v77,
      StringLiteral_21544/*"oncompletetarget"*/,
      menuComp,
      v77->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_18341/*"easetype"*/,
      StringLiteral_18326/*"easeInQuad"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v78 = this->fields.table;
    v84 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v84);
    if ( !v78 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v78->klass->vtable._23_Add.method)(
      v78,
      StringLiteral_22982/*"time"*/,
      menuComp,
      v78->klass->vtable._24_Clear.methodPtr);
    v79 = this->fields.table;
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_43183064(gameObject, v79, 0LL);
    if ( is_play_se )
      goto LABEL_39;
  }
}


void __fastcall MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x20
  int64_t UserId; // x0
  TblUserMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v29; // w22
  __int64 v30; // x20
  __int64 v31; // x20
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_42E728D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblUserMaster___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E728D = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v26 = **(_QWORD **)(v25 + 192);
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      sub_AF52C4(v26);
    UserId = **(_QWORD **)(v26 + 184);
    if ( !UserId )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)UserId,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblUserMaster___);
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
    v29 = *(_DWORD *)(UserId + 24);
    v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
      sub_AF52C4(v30);
    v31 = **(_QWORD **)(v30 + 192);
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      sub_AF52C4(v31);
    UserId = **(_QWORD **)(v31 + 184);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_41;
    UserId = GachaEntity__getPrice((GachaEntity_o *)UserId, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, v29 / (int)UserId, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_41;
    UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_B5D69C(UserId, v24);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__100_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MainMenuBarBase_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E72AD & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    this = (MainMenuBarBase_o *)sub_B5D5C4(&StringLiteral_19607/*"icon_servant_exchange_available_{0}"*/, v8, v9, v10);
    byte_42E72AD = 1;
  }
  shopNotice = v4->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_12;
  mExchangeServantItemSp = v4->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField);
  v14 = System_String__Format((System_String_o *)StringLiteral_19607/*"icon_servant_exchange_available_{0}"*/, v13, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v14, 0LL) )
  {
    this = (MainMenuBarBase_o *)v4->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v4->fields.mExchangeServantItemDefaultAtlas, 0LL);
      this = (MainMenuBarBase_o *)v4->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v4->fields.mExchangeServantItemDefaultSpriteName, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(this, method);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42E729A & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19778/*"img_menu_menu"*/, v5, v6, v7);
    byte_42E729A = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19778/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_B5D69C(menuStateBtn, method);
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
    sub_B5D69C(0LL, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
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
      sub_B5D69C(mNewItemSp, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v7);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42E7299 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19777/*"img_menu_close"*/, v5, v6, v7);
    byte_42E7299 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_19777/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_B5D69C(menuStateBtn, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v22; // x0
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  int v25; // w2
  __int64 v26; // x3
  UISprite_c *v27; // x8
  System_Func_bool__o *v28; // x21
  UnityEngine_WaitUntil_o *v29; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_42E5EE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__110_0__, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
    byte_42E5EE4 = 1;
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
  if ( !byte_42E5CB0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CB0 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
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
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v25, v26);
    byte_42E4B1E = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v27 = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !v27
    || (genericContainerHandle = *(TitleInfoControl_o **)&v27->_2.element_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)genericContainerHandle, 0, 0LL), !_4__this) )
  {
LABEL_34:
    sub_B5D69C(genericContainerHandle, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v28 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v28,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__110_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v29 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v29, v28, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__110_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EE2 & 1) == 0 )
  {
    sub_B5D5C4(&MainMenuBarBase___c_TypeInfo, v1, v2, v3);
    byte_42E5EE2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MainMenuBarBase___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__109_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  TerminalSceneComponent_c *mTerminalList; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  int v10; // w2
  __int64 v11; // x3
  struct TerminalSceneComponent_o *v12; // x8

  if ( (byte_42E5EE3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v4, v5, v6);
    byte_42E5EE3 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CB0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CB0 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
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
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v10, v11);
    byte_42E4B1E = 1;
  }
  mTerminalList = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = TerminalSceneComponent_TypeInfo;
  }
  v12 = mTerminalList->static_fields->mInstance;
  if ( !v12 || (mTerminalList = (TerminalSceneComponent_c *)v12->fields.mTerminalList) == 0LL )
LABEL_29:
    sub_B5D69C(mTerminalList, method);
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
    sub_B5D69C(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.z, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass127_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}