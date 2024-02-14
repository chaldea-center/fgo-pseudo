void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MyRoomListControl_StaticFields *static_fields; // x9

  if ( (byte_4213E00 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomListControl_TypeInfo, v1);
    byte_4213E00 = 1;
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
  __int64 v2; // x2
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
  __int64 v46; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v47; // x20
  System_String_o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  MyRoomListControl_MainItemInfo_o *v51; // x21
  __int64 v52; // x0
  System_String_o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  MyRoomListControl_MainItemInfo_o *v56; // x22
  System_String_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  MyRoomListControl_MainItemInfo_o *v60; // x22
  System_String_o *v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  MyRoomListControl_MainItemInfo_o *v64; // x22
  System_String_o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  MyRoomListControl_MainItemInfo_o *v68; // x22
  System_String_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  EventDelegate_Callback_o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  MyRoomListControl_MainItemInfo_o *v75; // x23
  System_String_o *v76; // x21
  __int64 v77; // x1
  __int64 v78; // x2
  MyRoomListControl_MainItemInfo_o *v79; // x22
  System_String_o *v80; // x21
  __int64 v81; // x1
  __int64 v82; // x2
  MyRoomListControl_MainItemInfo_o *v83; // x22
  BalanceConfig_c *v84; // x0
  System_String_o *v85; // x21
  __int64 v86; // x1
  __int64 v87; // x2
  MyRoomListControl_MainItemInfo_o *v88; // x22
  System_String_o *v89; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  MyRoomListControl_MainItemInfo_o *v92; // x22
  System_String_o *v93; // x21
  __int64 v94; // x1
  __int64 v95; // x2
  MyRoomListControl_MainItemInfo_o *v96; // x22
  float v97; // s8
  Il2CppObject *current; // x28
  struct UnityEngine_GameObject_o *listItemBase; // x22
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x22
  UIWidget_o *Component_UIWidget; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  _BOOL8 v104; // x0
  __int64 v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  UnityEngine_GameObject_o *GameObject; // x0
  UILabel_o *v113; // x0
  struct UILabel_o *v114; // x24
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  int monitor; // w8
  UnityEngine_Behaviour_o *v128; // x0
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mOnRender; // x22
  EventDelegate_Callback_o *v133; // x24
  EventDelegate_o *v134; // x23
  __int64 v135; // x0
  srcLineSprite_o *v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **klass; // x1
  MyRoomListControl_c *v144; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v145; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v146; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4213DFA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__, v7);
    sub_B0D8A4(&EventDelegate_TypeInfo, v8);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&MyRoomListControl_MainItemInfo_TypeInfo, v19);
    sub_B0D8A4(&Method_MyRoomListControl_ClickFavoriteChange__, v20);
    sub_B0D8A4(&MyRoomListControl_TypeInfo, v21);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_8899/*"MYROOM_MENU_NAME_3"*/, v24);
    sub_B0D8A4(&StringLiteral_21072/*"nameLabel"*/, v25);
    sub_B0D8A4(&StringLiteral_3097/*"CLICK_TITLE"*/, v26);
    sub_B0D8A4(&StringLiteral_8894/*"MYROOM_MENU_NAME_1"*/, v27);
    sub_B0D8A4(&StringLiteral_3074/*"CLICK_GAMEOPTION"*/, v28);
    sub_B0D8A4(&StringLiteral_8900/*"MYROOM_MENU_NAME_4"*/, v29);
    sub_B0D8A4(&StringLiteral_3081/*"CLICK_NOTICE"*/, v30);
    sub_B0D8A4(&StringLiteral_3065/*"CLICK_CONTINUE_DEVICE"*/, v31);
    sub_B0D8A4(&StringLiteral_3089/*"CLICK_SOUND_PLAYER"*/, v32);
    sub_B0D8A4(&StringLiteral_3071/*"CLICK_FAVORITE_CHANGE"*/, v33);
    sub_B0D8A4(&StringLiteral_8903/*"MYROOM_MENU_NAME_7"*/, v34);
    sub_B0D8A4(&StringLiteral_8905/*"MYROOM_MENU_NAME_9"*/, v35);
    sub_B0D8A4(&StringLiteral_8896/*"MYROOM_MENU_NAME_11"*/, v36);
    sub_B0D8A4(&StringLiteral_8898/*"MYROOM_MENU_NAME_2"*/, v37);
    sub_B0D8A4(&StringLiteral_3077/*"CLICK_MATERIAL"*/, v38);
    sub_B0D8A4(&StringLiteral_8901/*"MYROOM_MENU_NAME_5"*/, v39);
    sub_B0D8A4(&StringLiteral_8904/*"MYROOM_MENU_NAME_8"*/, v40);
    sub_B0D8A4(&StringLiteral_3083/*"CLICK_PROFILE"*/, v41);
    sub_B0D8A4(&StringLiteral_3086/*"CLICK_SERIAL_CODE"*/, v42);
    sub_B0D8A4(&StringLiteral_8897/*"MYROOM_MENU_NAME_12"*/, v43);
    sub_B0D8A4(&StringLiteral_8902/*"MYROOM_MENU_NAME_6"*/, v44);
    sub_B0D8A4(&StringLiteral_3087/*"CLICK_SERVANT_MENU"*/, v45);
    sub_B0D8A4(&StringLiteral_3098/*"CLICK_USER_ITEM"*/, v46);
    byte_4213DFA = 1;
  }
  memset(&v146, 0, sizeof(v146));
  v47 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo,
                                                                             method,
                                                                             v2);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v47,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_8896/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v51 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v49, v50);
  MyRoomListControl_MainItemInfo___ctor(v51, v48, 0, (System_String_o *)StringLiteral_3077/*"CLICK_MATERIAL"*/, 0LL, 0LL);
  if ( !v47 )
    sub_B0D97C(v52);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v51,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8897/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v56 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v54, v55);
  MyRoomListControl_MainItemInfo___ctor(v56, v53, 0, (System_String_o *)StringLiteral_3087/*"CLICK_SERVANT_MENU"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v56,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8894/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v60 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v58, v59);
  MyRoomListControl_MainItemInfo___ctor(v60, v57, 0, (System_String_o *)StringLiteral_3098/*"CLICK_USER_ITEM"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v60,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_8898/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v64 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v62, v63);
  MyRoomListControl_MainItemInfo___ctor(v64, v61, 0, (System_String_o *)StringLiteral_3089/*"CLICK_SOUND_PLAYER"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v64,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8899/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v68 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v66, v67);
  MyRoomListControl_MainItemInfo___ctor(v68, v65, 0, (System_String_o *)StringLiteral_3083/*"CLICK_PROFILE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v68,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v72 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v70, v71);
  EventDelegate_Callback___ctor(v72, (Il2CppObject *)this, Method_MyRoomListControl_ClickFavoriteChange__, 0LL);
  v75 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v73, v74);
  MyRoomListControl_MainItemInfo___ctor(v75, v69, 1, (System_String_o *)StringLiteral_3071/*"CLICK_FAVORITE_CHANGE"*/, v72, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v75,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_8901/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v79 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v77, v78);
  MyRoomListControl_MainItemInfo___ctor(v79, v76, 0, (System_String_o *)StringLiteral_3081/*"CLICK_NOTICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v79,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_8902/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v83 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v81, v82);
  MyRoomListControl_MainItemInfo___ctor(v83, v80, 0, (System_String_o *)StringLiteral_3074/*"CLICK_GAMEOPTION"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v83,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v84 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
  }
  if ( v84->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_8903/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v88 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v86, v87);
    MyRoomListControl_MainItemInfo___ctor(v88, v85, 0, (System_String_o *)StringLiteral_3086/*"CLICK_SERIAL_CODE"*/, 0LL, 0LL);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
      v47,
      (WarBoardAIRoute_RouteData_o *)v88,
      (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_8904/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v92 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v90, v91);
  MyRoomListControl_MainItemInfo___ctor(v92, v89, 0, (System_String_o *)StringLiteral_3065/*"CLICK_CONTINUE_DEVICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v92,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v96 = (MyRoomListControl_MainItemInfo_o *)sub_B0D974(MyRoomListControl_MainItemInfo_TypeInfo, v94, v95);
  MyRoomListControl_MainItemInfo___ctor(v96, v93, 0, (System_String_o *)StringLiteral_3097/*"CLICK_TITLE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v47,
    (WarBoardAIRoute_RouteData_o *)v96,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v145,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v47,
    (const MethodInfo_2C7C4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v146 = v145;
  v97 = 0.0;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v146,
            (const MethodInfo_2111EE0 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v146.fields._current;
    listItemBase = this->fields.listItemBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v100 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)listItemBase,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v101 = v100;
    if ( !v100 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v100, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v101, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_31178796(v101, 0.0, v97, 0.0, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v101,
                           (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v101,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v104 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( v104 )
    {
      if ( !Component_srcLineSprite )
        sub_B0D97C(v104);
      v105 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))Component_srcLineSprite->klass[2]._1.typeMetadataHandle)(
               Component_srcLineSprite,
               Component_srcLineSprite->klass[2]._1.interopData);
      if ( !Component_UIWidget )
        sub_B0D97C(v105);
      Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v101;
      sub_B0D840(
        (BattleServantConfConponent_o *)&Component_UIWidget->fields.leftAnchor,
        (System_Int32_array **)v101,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.rightAnchor = UnityEngine_Color__get_white(0LL);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.mGo = UnityEngine_Color__get_white(0LL);
    }
    GameObject = GameObjectExtensions__FindGameObject(v101, (System_String_o *)StringLiteral_21072/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_B0D97C(0LL);
    v113 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          GameObject,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_B0D97C(v113);
    v114 = v113;
    if ( !v113 )
      sub_B0D97C(0LL);
    UILabel__set_text(v113, (System_String_o *)current[1].klass, 0LL);
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3071/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_UIWidget;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.favoriteChangeMenuBtn,
        (System_Int32_array **)Component_UIWidget,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
      this->fields.favoriteTxtLb = v114;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.favoriteTxtLb,
        (System_Int32_array **)v114,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v128 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v101,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v128 )
          sub_B0D97C(0LL);
        UnityEngine_Behaviour__set_enabled(v128, 0, 0LL);
        if ( !Component_UIWidget )
          sub_B0D97C(v129);
        mOnRender = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_UIWidget->fields.mOnRender;
        v133 = (EventDelegate_Callback_o *)current[2].monitor;
        v134 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v130, v131);
        EventDelegate___ctor_28889248(v134, v133, 0LL);
        if ( !mOnRender )
          sub_B0D97C(v135);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          mOnRender,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v134,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      }
    }
    else
    {
      v136 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               v101,
               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v136 )
        sub_B0D97C(0LL);
      klass = (System_Int32_array **)current[2].klass;
      *(_QWORD *)&v136->fields.mtIsUpdate = klass;
      sub_B0D840((BattleServantConfConponent_o *)&v136->fields.mtIsUpdate, klass, v137, v138, v139, v140, v141, v142);
    }
    v144 = MyRoomListControl_TypeInfo;
    if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v144 = MyRoomListControl_TypeInfo;
    }
    v97 = v97 - v144->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v146,
    (const MethodInfo_2111EDC *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_31178796(this->fields.itemDummy, 0.0, v97, 0.0, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x22

  if ( (byte_4213DFE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_MyRoomListControl_callBackNotificationDlg__, v7);
    sub_B0D8A4(&OpeningMovieData_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_3071/*"CLICK_FAVORITE_CHANGE"*/, v11);
    sub_B0D8A4(&StringLiteral_8893/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4213DFE = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_3071/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_22:
    sub_B0D97C(myRoomFsm);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
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
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_22;
  v16 = (Il2CppObject *)*((_QWORD *)myRoomFsm + 5);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8893/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v18 = System_String__Format(v17, v16, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v18,
    v22,
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

  if ( (byte_4213DFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___, items);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    this = (MyRoomListControl_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4213DFD = 1;
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
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      this = (MyRoomListControl_o *)items->m_Items[v9];
      if ( !this )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = System_Int32__ToString((int32_t)&v14, 0LL);
        v12 = System_String__Concat_43849904(prefixStr, v11, 0LL);
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
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 _28088484; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v6; // x2
  MyRoomListControl_o *v7; // x0
  const MethodInfo *v8; // x3
  char *noticeComp; // x0
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

  if ( (byte_4213DFB & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8906/*"MYROOM_NOTICE_NAME_"*/, v3);
    byte_4213DFB = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = TutorialFlag__Get_28088484(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _28088484;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_28088484, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_8906/*"MYROOM_NOTICE_NAME_"*/, v8);
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
    sub_B0D97C(noticeComp);
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

  if ( (byte_4213DFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, grid);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v4);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v6);
    sub_B0D8A4(&MyRoomListControl_TypeInfo, v7);
    this = (MyRoomListControl_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4213DFC = 1;
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
                                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                              (UnityEngine_Component_o *)Child,
                                                              (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                                 (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                          0LL);
          if ( !Component_UIWidget )
            break;
          Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)this;
          p_leftAnchor = &Component_UIWidget->fields.leftAnchor;
          sub_B0D840(
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
                                                                 (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
    sub_B0D97C(this);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4213DFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4213DFF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.Name = name;
  sub_B0D840(&this->fields, name);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_B0D840(&this->fields.EventName, eventName);
  this->fields.ClickAction = clickAction;
  sub_B0D840(&this->fields.ClickAction, clickAction);
}