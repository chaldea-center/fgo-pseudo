void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MyRoomListControl_StaticFields *static_fields; // x9

  if ( (byte_41874B3 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomListControl_TypeInfo, v1);
    byte_41874B3 = 1;
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v46; // x20
  System_String_o *v47; // x22
  MyRoomListControl_MainItemInfo_o *v48; // x21
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x21
  MyRoomListControl_MainItemInfo_o *v52; // x22
  System_String_o *v53; // x21
  MyRoomListControl_MainItemInfo_o *v54; // x22
  System_String_o *v55; // x21
  MyRoomListControl_MainItemInfo_o *v56; // x22
  System_String_o *v57; // x21
  MyRoomListControl_MainItemInfo_o *v58; // x22
  System_String_o *v59; // x21
  EventDelegate_Callback_o *v60; // x22
  MyRoomListControl_MainItemInfo_o *v61; // x23
  System_String_o *v62; // x21
  MyRoomListControl_MainItemInfo_o *v63; // x22
  System_String_o *v64; // x21
  MyRoomListControl_MainItemInfo_o *v65; // x22
  BalanceConfig_c *v66; // x0
  System_String_o *v67; // x21
  MyRoomListControl_MainItemInfo_o *v68; // x22
  System_String_o *v69; // x21
  MyRoomListControl_MainItemInfo_o *v70; // x22
  System_String_o *v71; // x21
  MyRoomListControl_MainItemInfo_o *v72; // x22
  float v73; // s8
  Il2CppObject *current; // x28
  struct UnityEngine_GameObject_o *listItemBase; // x22
  UnityEngine_GameObject_o *v76; // x0
  __int64 v77; // x1
  UnityEngine_GameObject_o *v78; // x22
  UIWidget_o *Component_UIWidget; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  _BOOL8 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v92; // x1
  UILabel_o *v93; // x0
  __int64 v94; // x1
  struct UILabel_o *v95; // x24
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  int monitor; // w8
  UnityEngine_Behaviour_o *v109; // x0
  __int64 v110; // x1
  __int64 v111; // x0
  __int64 v112; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mOnRender; // x22
  EventDelegate_Callback_o *v114; // x24
  EventDelegate_o *v115; // x23
  __int64 v116; // x0
  __int64 v117; // x1
  srcLineSprite_o *v118; // x0
  __int64 v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **klass; // x1
  MyRoomListControl_c *v127; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v128; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v129; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_41874AD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__, v6);
    sub_B2C35C(&EventDelegate_TypeInfo, v7);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&MyRoomListControl_MainItemInfo_TypeInfo, v18);
    sub_B2C35C(&Method_MyRoomListControl_ClickFavoriteChange__, v19);
    sub_B2C35C(&MyRoomListControl_TypeInfo, v20);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_8876/*"MYROOM_MENU_NAME_3"*/, v23);
    sub_B2C35C(&StringLiteral_21005/*"nameLabel"*/, v24);
    sub_B2C35C(&StringLiteral_3085/*"CLICK_TITLE"*/, v25);
    sub_B2C35C(&StringLiteral_8871/*"MYROOM_MENU_NAME_1"*/, v26);
    sub_B2C35C(&StringLiteral_3062/*"CLICK_GAMEOPTION"*/, v27);
    sub_B2C35C(&StringLiteral_8877/*"MYROOM_MENU_NAME_4"*/, v28);
    sub_B2C35C(&StringLiteral_3069/*"CLICK_NOTICE"*/, v29);
    sub_B2C35C(&StringLiteral_3053/*"CLICK_CONTINUE_DEVICE"*/, v30);
    sub_B2C35C(&StringLiteral_3077/*"CLICK_SOUND_PLAYER"*/, v31);
    sub_B2C35C(&StringLiteral_3059/*"CLICK_FAVORITE_CHANGE"*/, v32);
    sub_B2C35C(&StringLiteral_8880/*"MYROOM_MENU_NAME_7"*/, v33);
    sub_B2C35C(&StringLiteral_8882/*"MYROOM_MENU_NAME_9"*/, v34);
    sub_B2C35C(&StringLiteral_8873/*"MYROOM_MENU_NAME_11"*/, v35);
    sub_B2C35C(&StringLiteral_8875/*"MYROOM_MENU_NAME_2"*/, v36);
    sub_B2C35C(&StringLiteral_3065/*"CLICK_MATERIAL"*/, v37);
    sub_B2C35C(&StringLiteral_8878/*"MYROOM_MENU_NAME_5"*/, v38);
    sub_B2C35C(&StringLiteral_8881/*"MYROOM_MENU_NAME_8"*/, v39);
    sub_B2C35C(&StringLiteral_3071/*"CLICK_PROFILE"*/, v40);
    sub_B2C35C(&StringLiteral_3074/*"CLICK_SERIAL_CODE"*/, v41);
    sub_B2C35C(&StringLiteral_8874/*"MYROOM_MENU_NAME_12"*/, v42);
    sub_B2C35C(&StringLiteral_8879/*"MYROOM_MENU_NAME_6"*/, v43);
    sub_B2C35C(&StringLiteral_3075/*"CLICK_SERVANT_MENU"*/, v44);
    sub_B2C35C(&StringLiteral_3086/*"CLICK_USER_ITEM"*/, v45);
    byte_41874AD = 1;
  }
  memset(&v129, 0, sizeof(v129));
  v46 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v46,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8873/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v48 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v48, v47, 0, (System_String_o *)StringLiteral_3065/*"CLICK_MATERIAL"*/, 0LL, 0LL);
  if ( !v46 )
    sub_B2C434(v49, v50);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v48,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8874/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v52 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v52, v51, 0, (System_String_o *)StringLiteral_3075/*"CLICK_SERVANT_MENU"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v52,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8871/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v54 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v54, v53, 0, (System_String_o *)StringLiteral_3086/*"CLICK_USER_ITEM"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v54,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_8875/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v56 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v56, v55, 0, (System_String_o *)StringLiteral_3077/*"CLICK_SOUND_PLAYER"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v56,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8876/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v58 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v58, v57, 0, (System_String_o *)StringLiteral_3071/*"CLICK_PROFILE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v58,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8877/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v60 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v60, (Il2CppObject *)this, Method_MyRoomListControl_ClickFavoriteChange__, 0LL);
  v61 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v61, v59, 1, (System_String_o *)StringLiteral_3059/*"CLICK_FAVORITE_CHANGE"*/, v60, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v61,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8878/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v63 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v63, v62, 0, (System_String_o *)StringLiteral_3069/*"CLICK_NOTICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v63,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8879/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v65 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v65, v64, 0, (System_String_o *)StringLiteral_3062/*"CLICK_GAMEOPTION"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v65,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v66 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  if ( v66->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_8880/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v68 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v68, v67, 0, (System_String_o *)StringLiteral_3074/*"CLICK_SERIAL_CODE"*/, 0LL, 0LL);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
      v46,
      (WarBoardAIRoute_RouteData_o *)v68,
      (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8881/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v70 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v70, v69, 0, (System_String_o *)StringLiteral_3053/*"CLICK_CONTINUE_DEVICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v70,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_8882/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v72 = (MyRoomListControl_MainItemInfo_o *)sub_B2C42C(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v72, v71, 0, (System_String_o *)StringLiteral_3085/*"CLICK_TITLE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v46,
    (WarBoardAIRoute_RouteData_o *)v72,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v128,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v46,
    (const MethodInfo_2D8C544 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v129 = v128;
  v73 = 0.0;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v129,
            (const MethodInfo_20E9DBC *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v129.fields._current;
    listItemBase = this->fields.listItemBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v76 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)listItemBase,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v78 = v76;
    if ( !v76 )
      sub_B2C434(0LL, v77);
    UnityEngine_GameObject__SetActive(v76, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v78, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_31326032(v78, 0.0, v73, 0.0, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v78,
                           (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v78,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v81 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( v81 )
    {
      if ( !Component_srcLineSprite )
        sub_B2C434(v81, v82);
      v83 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))Component_srcLineSprite->klass[2]._1.typeMetadataHandle)(
              Component_srcLineSprite,
              Component_srcLineSprite->klass[2]._1.interopData);
      if ( !Component_UIWidget )
        sub_B2C434(v83, v84);
      Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v78;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&Component_UIWidget->fields.leftAnchor,
        (System_Int32_array **)v78,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.rightAnchor = UnityEngine_Color__get_white(0LL);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.mGo = UnityEngine_Color__get_white(0LL);
    }
    GameObject = GameObjectExtensions__FindGameObject(v78, (System_String_o *)StringLiteral_21005/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_B2C434(0LL, v92);
    v93 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         GameObject,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_B2C434(v93, v94);
    v95 = v93;
    if ( !v93 )
      sub_B2C434(0LL, v94);
    UILabel__set_text(v93, (System_String_o *)current[1].klass, 0LL);
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3059/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_UIWidget;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.favoriteChangeMenuBtn,
        (System_Int32_array **)Component_UIWidget,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      this->fields.favoriteTxtLb = v95;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.favoriteTxtLb,
        (System_Int32_array **)v95,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v109 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v78,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v109 )
          sub_B2C434(0LL, v110);
        UnityEngine_Behaviour__set_enabled(v109, 0, 0LL);
        if ( !Component_UIWidget )
          sub_B2C434(v111, v112);
        mOnRender = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_UIWidget->fields.mOnRender;
        v114 = (EventDelegate_Callback_o *)current[2].monitor;
        v115 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
        EventDelegate___ctor_29723424(v115, v114, 0LL);
        if ( !mOnRender )
          sub_B2C434(v116, v117);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          mOnRender,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v115,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      }
    }
    else
    {
      v118 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               v78,
               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v118 )
        sub_B2C434(0LL, v119);
      klass = (System_Int32_array **)current[2].klass;
      *(_QWORD *)&v118->fields.mtIsUpdate = klass;
      sub_B2C2F8((BattleServantConfConponent_o *)&v118->fields.mtIsUpdate, klass, v120, v121, v122, v123, v124, v125);
    }
    v127 = MyRoomListControl_TypeInfo;
    if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v127 = MyRoomListControl_TypeInfo;
    }
    v73 = v73 - v127->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v129,
    (const MethodInfo_20E9DB8 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_31326032(this->fields.itemDummy, 0.0, v73, 0.0, 0LL);
}


void __fastcall MyRoomListControl__ClickFavoriteChange(MyRoomListControl_o *this, const MethodInfo *method)
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
  __int64 v13; // x1
  void *myRoomFsm; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v20; // x22

  if ( (byte_41874B1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_MyRoomListControl_callBackNotificationDlg__, v7);
    sub_B2C35C(&OpeningMovieData_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_3059/*"CLICK_FAVORITE_CHANGE"*/, v11);
    sub_B2C35C(&StringLiteral_8870/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_41874B1 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_3059/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_22:
    sub_B2C434(myRoomFsm, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
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
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_22;
  v16 = (Il2CppObject *)*((_QWORD *)myRoomFsm + 5);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8870/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v18 = System_String__Format(v17, v16, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v18,
    v20,
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
  __int64 v6; // x1
  __int64 v7; // x1
  signed int max_length; // w9
  int v9; // w8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x22
  __int64 v13; // x0
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41874B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___, items);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    this = (MyRoomListControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_41874B0 = 1;
  }
  v14 = 0;
  if ( !items )
    goto LABEL_19;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
      {
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      this = (MyRoomListControl_o *)items->m_Items[v9];
      if ( !this )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = System_Int32__ToString((int32_t)&v14, 0LL);
        v12 = System_String__Concat_44305532(prefixStr, v11, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (MyRoomListControl_o *)LocalizationManager__Get(v12, 0LL);
        if ( !Component_srcLineSprite )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_srcLineSprite, (System_String_o *)this, 0LL);
      }
      v9 = v14 + 1;
      v14 = v9;
      max_length = items->max_length;
      if ( v9 >= max_length )
        return;
    }
LABEL_19:
    sub_B2C434(this, items);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 _28617756; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v6; // x2
  MyRoomListControl_o *v7; // x0
  const MethodInfo *v8; // x3
  char *noticeComp; // x0
  __int64 v10; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  UIButtonColor_o *favoriteChangeMenuBtn; // x20
  int v13; // s0
  struct UIButton_o *v17; // x20
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  struct UIButton_o *v22; // x20
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s3

  if ( (byte_41874AE & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8883/*"MYROOM_NOTICE_NAME_"*/, v3);
    byte_41874AE = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = TutorialFlag__Get_28617756(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _28617756;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_28617756, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_8883/*"MYROOM_NOTICE_NAME_"*/, v8);
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
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_gray(0LL);
  if ( !favoriteChangeMenuBtn )
    goto LABEL_18;
  UIButtonColor__set_defaultColor(favoriteChangeMenuBtn, *(UnityEngine_Color_o *)&v13, 0LL);
  v17 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
  if ( !v17 )
    goto LABEL_18;
  v17->fields.hover.fields.r = v18;
  v17->fields.hover.fields.g = v19;
  v17->fields.hover.fields.b = v20;
  v17->fields.hover.fields.a = v21;
  v22 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_gray(0LL);
  if ( !v22
    || (v22->fields.disabledColor.fields.r = v23,
        v22->fields.disabledColor.fields.g = v24,
        v22->fields.disabledColor.fields.b = v25,
        v22->fields.disabledColor.fields.a = v26,
        (noticeComp = (char *)this->fields.favoriteTxtLb) == 0LL) )
  {
LABEL_18:
    sub_B2C434(noticeComp, v10);
  }
  UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)(noticeComp + 484), 0LL);
}


void __fastcall MyRoomListControl__SetupScrollListBtn(
        MyRoomListControl_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t childCount; // w0
  int32_t v10; // w20
  int32_t v11; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x24
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UIRect_AnchorPoint_o **p_leftAnchor; // x24
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x22
  UnityEngine_GameObject_o *v24; // x0
  MyRoomListControl_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x22

  if ( (byte_41874AF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, grid);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v4);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v5);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v6);
    sub_B2C35C(&MyRoomListControl_TypeInfo, v7);
    this = (MyRoomListControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41874AF = 1;
  }
  if ( !grid )
    goto LABEL_36;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_36;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v10 = childCount;
    v11 = 0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v11, 0LL);
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
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                              (UnityEngine_Component_o *)Child,
                                                              (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                                 (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                          0LL);
          if ( !Component_UIWidget )
            break;
          Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)this;
          p_leftAnchor = &Component_UIWidget->fields.leftAnchor;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)p_leftAnchor,
            (System_Int32_array **)this,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          *(UnityEngine_Color_o *)(p_leftAnchor + 1) = UnityEngine_Color__get_white(0LL);
          *(UnityEngine_Color_o *)(p_leftAnchor + 5) = UnityEngine_Color__get_white(0LL);
        }
        ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                 (UnityEngine_Component_o *)Child,
                                                                 (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ComponentInChildren_UIWidget, 0LL);
          v25 = MyRoomListControl_TypeInfo;
          v26 = v24;
          if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v25 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v26, v25->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( ++v11 >= v10 )
        return;
    }
LABEL_36:
    sub_B2C434(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_41874B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41874B2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v11, v12, v13, v14, v15, v16);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.EventName,
    (System_Int32_array **)eventName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.ClickAction = clickAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ClickAction,
    (System_Int32_array **)clickAction,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}