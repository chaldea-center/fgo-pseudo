void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x9

  if ( (byte_42AFAC4 & 1) == 0 )
  {
    sub_B52984(&MyRoomListControl_TypeInfo);
    byte_42AFAC4 = 1;
  }
  static_fields = MyRoomListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BTN_LABEL_POS.fields.x = 0x4080000000000000LL;
  static_fields->BTN_LABEL_POS.fields.z = 0.0;
  MyRoomListControl_TypeInfo->static_fields->ITEM_OFFSET_SIZE_Y = 120.0;
}


void __fastcall MyRoomListControl___ctor(MyRoomListControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomListControl__Awake(MyRoomListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v3; // x20
  System_String_o *v4; // x22
  MyRoomListControl_MainItemInfo_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  MyRoomListControl_MainItemInfo_o *v9; // x22
  System_String_o *v10; // x21
  MyRoomListControl_MainItemInfo_o *v11; // x22
  System_String_o *v12; // x21
  MyRoomListControl_MainItemInfo_o *v13; // x22
  System_String_o *v14; // x21
  MyRoomListControl_MainItemInfo_o *v15; // x22
  System_String_o *v16; // x21
  EventDelegate_Callback_o *v17; // x22
  MyRoomListControl_MainItemInfo_o *v18; // x23
  System_String_o *v19; // x21
  MyRoomListControl_MainItemInfo_o *v20; // x22
  System_String_o *v21; // x21
  MyRoomListControl_MainItemInfo_o *v22; // x22
  BalanceConfig_c *v23; // x0
  System_String_o *v24; // x21
  MyRoomListControl_MainItemInfo_o *v25; // x22
  System_String_o *v26; // x21
  MyRoomListControl_MainItemInfo_o *v27; // x22
  System_String_o *v28; // x21
  MyRoomListControl_MainItemInfo_o *v29; // x22
  float v30; // s8
  Il2CppObject *current; // x28
  struct UnityEngine_GameObject_o *listItemBase; // x22
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x22
  UIWidget_o *Component_UIWidget; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v49; // x1
  UILabel_o *v50; // x0
  __int64 v51; // x1
  struct UILabel_o *v52; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int monitor; // w8
  UnityEngine_Behaviour_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x0
  __int64 v69; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mOnRender; // x22
  EventDelegate_Callback_o *v71; // x24
  EventDelegate_o *v72; // x23
  __int64 v73; // x0
  __int64 v74; // x1
  srcLineSprite_o *v75; // x0
  __int64 v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **klass; // x1
  MyRoomListControl_c *v84; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v85; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v86; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_42AFABE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_B52984(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_B52984(&MyRoomListControl_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_8930/*"MYROOM_MENU_NAME_3"*/);
    sub_B52984(&StringLiteral_21174/*"nameLabel"*/);
    sub_B52984(&StringLiteral_3117/*"CLICK_TITLE"*/);
    sub_B52984(&StringLiteral_8925/*"MYROOM_MENU_NAME_1"*/);
    sub_B52984(&StringLiteral_3094/*"CLICK_GAMEOPTION"*/);
    sub_B52984(&StringLiteral_8931/*"MYROOM_MENU_NAME_4"*/);
    sub_B52984(&StringLiteral_3101/*"CLICK_NOTICE"*/);
    sub_B52984(&StringLiteral_3085/*"CLICK_CONTINUE_DEVICE"*/);
    sub_B52984(&StringLiteral_3109/*"CLICK_SOUND_PLAYER"*/);
    sub_B52984(&StringLiteral_3091/*"CLICK_FAVORITE_CHANGE"*/);
    sub_B52984(&StringLiteral_8934/*"MYROOM_MENU_NAME_7"*/);
    sub_B52984(&StringLiteral_8936/*"MYROOM_MENU_NAME_9"*/);
    sub_B52984(&StringLiteral_8927/*"MYROOM_MENU_NAME_11"*/);
    sub_B52984(&StringLiteral_8929/*"MYROOM_MENU_NAME_2"*/);
    sub_B52984(&StringLiteral_3097/*"CLICK_MATERIAL"*/);
    sub_B52984(&StringLiteral_8932/*"MYROOM_MENU_NAME_5"*/);
    sub_B52984(&StringLiteral_8935/*"MYROOM_MENU_NAME_8"*/);
    sub_B52984(&StringLiteral_3103/*"CLICK_PROFILE"*/);
    sub_B52984(&StringLiteral_3106/*"CLICK_SERIAL_CODE"*/);
    sub_B52984(&StringLiteral_8928/*"MYROOM_MENU_NAME_12"*/);
    sub_B52984(&StringLiteral_8933/*"MYROOM_MENU_NAME_6"*/);
    sub_B52984(&StringLiteral_3107/*"CLICK_SERVANT_MENU"*/);
    sub_B52984(&StringLiteral_3118/*"CLICK_USER_ITEM"*/);
    byte_42AFABE = 1;
  }
  memset(&v86, 0, sizeof(v86));
  v3 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v3,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8927/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v5 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v5, v4, 0, (System_String_o *)StringLiteral_3097/*"CLICK_MATERIAL"*/, 0LL, 0LL);
  if ( !v3 )
    sub_B52A5C(v6, v7);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v5,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8928/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v9 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v9, v8, 0, (System_String_o *)StringLiteral_3107/*"CLICK_SERVANT_MENU"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v9,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8925/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v11 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v11, v10, 0, (System_String_o *)StringLiteral_3118/*"CLICK_USER_ITEM"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v11,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8929/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v13 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v13, v12, 0, (System_String_o *)StringLiteral_3109/*"CLICK_SOUND_PLAYER"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v13,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8930/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v15 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v15, v14, 0, (System_String_o *)StringLiteral_3103/*"CLICK_PROFILE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v15,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8931/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v17 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, Method_MyRoomListControl_ClickFavoriteChange__, 0LL);
  v18 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v18, v16, 1, (System_String_o *)StringLiteral_3091/*"CLICK_FAVORITE_CHANGE"*/, v17, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v18,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8932/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v20 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v20, v19, 0, (System_String_o *)StringLiteral_3101/*"CLICK_NOTICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v20,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8933/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v22 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v22, v21, 0, (System_String_o *)StringLiteral_3094/*"CLICK_GAMEOPTION"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v22,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( v23->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8934/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v25 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v25, v24, 0, (System_String_o *)StringLiteral_3106/*"CLICK_SERIAL_CODE"*/, 0LL, 0LL);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
      v3,
      (WarBoardAIRoute_RouteData_o *)v25,
      (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8935/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v27 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v27, v26, 0, (System_String_o *)StringLiteral_3085/*"CLICK_CONTINUE_DEVICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v27,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8936/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v29 = (MyRoomListControl_MainItemInfo_o *)sub_B52A54(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v29, v28, 0, (System_String_o *)StringLiteral_3117/*"CLICK_TITLE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v3,
    (WarBoardAIRoute_RouteData_o *)v29,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v3,
    (const MethodInfo_24E0B0C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v86 = v85;
  v30 = 0.0;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v86,
            (const MethodInfo_20112EC *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v86.fields._current;
    listItemBase = this->fields.listItemBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)listItemBase,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v35 = v33;
    if ( !v33 )
      sub_B52A5C(0LL, v34);
    UnityEngine_GameObject__SetActive(v33, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v35, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_32085168(v35, 0.0, v30, 0.0, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v35,
                           (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v35,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v38 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( v38 )
    {
      if ( !Component_srcLineSprite )
        sub_B52A5C(v38, v39);
      v40 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))Component_srcLineSprite->klass[2]._1.typeMetadataHandle)(
              Component_srcLineSprite,
              Component_srcLineSprite->klass[2]._1.interopData);
      if ( !Component_UIWidget )
        sub_B52A5C(v40, v41);
      Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v35;
      sub_B52920(
        (BattleServantConfConponent_o *)&Component_UIWidget->fields.leftAnchor,
        (System_Int32_array **)v35,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.rightAnchor = UnityEngine_Color__get_white(0LL);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.mGo = UnityEngine_Color__get_white(0LL);
    }
    GameObject = GameObjectExtensions__FindGameObject(v35, (System_String_o *)StringLiteral_21174/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_B52A5C(0LL, v49);
    v50 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         GameObject,
                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_B52A5C(v50, v51);
    v52 = v50;
    if ( !v50 )
      sub_B52A5C(0LL, v51);
    UILabel__set_text(v50, (System_String_o *)current[1].klass, 0LL);
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3091/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_UIWidget;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.favoriteChangeMenuBtn,
        (System_Int32_array **)Component_UIWidget,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      this->fields.favoriteTxtLb = v52;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.favoriteTxtLb,
        (System_Int32_array **)v52,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v66 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v35,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v66 )
          sub_B52A5C(0LL, v67);
        UnityEngine_Behaviour__set_enabled(v66, 0, 0LL);
        if ( !Component_UIWidget )
          sub_B52A5C(v68, v69);
        mOnRender = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_UIWidget->fields.mOnRender;
        v71 = (EventDelegate_Callback_o *)current[2].monitor;
        v72 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
        EventDelegate___ctor_29649660(v72, v71, 0LL);
        if ( !mOnRender )
          sub_B52A5C(v73, v74);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          mOnRender,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      }
    }
    else
    {
      v75 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              v35,
              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v75 )
        sub_B52A5C(0LL, v76);
      klass = (System_Int32_array **)current[2].klass;
      *(_QWORD *)&v75->fields.mtIsUpdate = klass;
      sub_B52920((BattleServantConfConponent_o *)&v75->fields.mtIsUpdate, klass, v77, v78, v79, v80, v81, v82);
    }
    v84 = MyRoomListControl_TypeInfo;
    if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v84 = MyRoomListControl_TypeInfo;
    }
    v30 = v30 - v84->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v86,
    (const MethodInfo_20112E8 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_32085168(this->fields.itemDummy, 0.0, v30, 0.0, 0LL);
}


void __fastcall MyRoomListControl__ClickFavoriteChange(MyRoomListControl_o *this, const MethodInfo *method)
{
  void *myRoomFsm; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  Il2CppObject *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v9; // x22

  if ( (byte_42AFAC2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_B52984(&OpeningMovieData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_3091/*"CLICK_FAVORITE_CHANGE"*/);
    sub_B52984(&StringLiteral_8924/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFAC2 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_3091/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_22:
    sub_B52A5C(myRoomFsm, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  }
  myRoomFsm = (void *)OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  myRoomFsm = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                Master_WarQuestSelectionMaster,
                (int32_t)myRoomFsm,
                (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_22;
  v5 = (Il2CppObject *)*((_QWORD *)myRoomFsm + 5);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8924/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v7 = System_String__Format(v6, v5, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v7,
    v9,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0LL,
    0LL);
}


void __fastcall MyRoomListControl__SetBtnName(
        MyRoomListControl_o *this,
        UnityEngine_GameObject_array *items,
        System_String_o *prefixStr,
        const MethodInfo *method)
{
  signed int max_length; // w9
  int v7; // w8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  __int64 v11; // x0
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42AFAC1 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_B52984(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFAC1 = 1;
  }
  v12 = 0;
  if ( !items )
    goto LABEL_19;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
      {
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = System_Int32__ToString((int32_t)&v12, 0LL);
        v10 = System_String__Concat_44568316(prefixStr, v9, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (MyRoomListControl_o *)LocalizationManager__Get(v10, 0LL);
        if ( !Component_srcLineSprite )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_srcLineSprite, (System_String_o *)this, 0LL);
      }
      v7 = v12 + 1;
      v12 = v7;
      max_length = items->max_length;
      if ( v7 >= max_length )
        return;
    }
LABEL_19:
    sub_B52A5C(this, items);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  _BOOL8 _29217932; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v5; // x2
  MyRoomListControl_o *v6; // x0
  const MethodInfo *v7; // x3
  char *noticeComp; // x0
  __int64 v9; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  UIButtonColor_o *favoriteChangeMenuBtn; // x20
  int v12; // s0
  struct UIButton_o *v16; // x20
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  struct UIButton_o *v21; // x20
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3

  if ( (byte_42AFABF & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_8937/*"MYROOM_NOTICE_NAME_"*/);
    byte_42AFABF = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29217932 = TutorialFlag__Get_29217932(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _29217932;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_29217932, noticeListGrid, v5);
  MyRoomListControl__SetBtnName(v6, this->fields.noticeItems, (System_String_o *)StringLiteral_8937/*"MYROOM_NOTICE_NAME_"*/, v7);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_18;
  noticeComp = (char *)myRoomControl->fields.noticeComp;
  if ( !noticeComp )
    goto LABEL_18;
  noticeComp = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noticeComp, 0LL);
  if ( !noticeComp )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noticeComp, 0, 0LL);
  noticeComp = (char *)this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_18;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD, float, float))(*(_QWORD *)noticeComp + 456LL))(
    noticeComp,
    0LL,
    *(_QWORD *)(*(_QWORD *)noticeComp + 464LL),
    0.0,
    0.0);
  noticeComp = (char *)this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_18;
  (*(void (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)noticeComp + 440LL))(
    noticeComp,
    1LL,
    *(_QWORD *)(*(_QWORD *)noticeComp + 448LL));
  noticeComp = (char *)this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_18;
  UIScrollView__UpdatePosition((UIScrollView_o *)noticeComp, 0LL);
  if ( this->fields.isUseFavorite )
    return;
  favoriteChangeMenuBtn = (UIButtonColor_o *)this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
  if ( !favoriteChangeMenuBtn )
    goto LABEL_18;
  UIButtonColor__set_defaultColor(favoriteChangeMenuBtn, *(UnityEngine_Color_o *)&v12, 0LL);
  v16 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !v16 )
    goto LABEL_18;
  v16->fields.hover.fields.r = v17;
  v16->fields.hover.fields.g = v18;
  v16->fields.hover.fields.b = v19;
  v16->fields.hover.fields.a = v20;
  v21 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !v21
    || (v21->fields.disabledColor.fields.r = v22,
        v21->fields.disabledColor.fields.g = v23,
        v21->fields.disabledColor.fields.b = v24,
        v21->fields.disabledColor.fields.a = v25,
        (noticeComp = (char *)this->fields.favoriteTxtLb) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(noticeComp, v9);
  }
  UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)(noticeComp + 484), 0LL);
}


void __fastcall MyRoomListControl__SetupScrollListBtn(
        MyRoomListControl_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
  int32_t childCount; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x24
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UIRect_AnchorPoint_o **p_leftAnchor; // x24
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x22
  UnityEngine_GameObject_o *v19; // x0
  MyRoomListControl_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x22

  if ( (byte_42AFAC0 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_B52984(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFAC0 = 1;
  }
  if ( !grid )
    goto LABEL_36;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_36;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount;
    v6 = 0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v6, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Child )
          break;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)Child,
                                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                              (UnityEngine_Component_o *)Child,
                                                              (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_WebViewObject )
            break;
          ((void (__fastcall *)(UnityEngine_Object_o *, void *))Component_WebViewObject->klass[2]._1.typeMetadataHandle)(
            Component_WebViewObject,
            Component_WebViewObject->klass[2]._1.interopData);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0LL);
          Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 gameObject,
                                 (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                          0LL);
          if ( !Component_UIWidget )
            break;
          Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)this;
          p_leftAnchor = &Component_UIWidget->fields.leftAnchor;
          sub_B52920(
            (BattleServantConfConponent_o *)p_leftAnchor,
            (System_Int32_array **)this,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          *(UnityEngine_Color_o *)(p_leftAnchor + 1) = UnityEngine_Color__get_white(0LL);
          *(UnityEngine_Color_o *)(p_leftAnchor + 5) = UnityEngine_Color__get_white(0LL);
        }
        ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                 (UnityEngine_Component_o *)Child,
                                                                 (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(ComponentInChildren_UIWidget, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_UIWidget )
            break;
          v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ComponentInChildren_UIWidget, 0LL);
          v20 = MyRoomListControl_TypeInfo;
          v21 = v19;
          if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v20 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v21, v20->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( ++v6 >= v5 )
        return;
    }
LABEL_36:
    sub_B52A5C(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AFAC3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFAC3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall MyRoomListControl_MainItemInfo___ctor(
        MyRoomListControl_MainItemInfo_o *this,
        System_String_o *name,
        int32_t type,
        System_String_o *eventName,
        EventDelegate_Callback_o *clickAction,
        const MethodInfo *method)
{
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.Name = name;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v11, v12, v13, v14, v15, v16);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.EventName,
    (System_Int32_array **)eventName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.ClickAction = clickAction;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ClickAction,
    (System_Int32_array **)clickAction,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}