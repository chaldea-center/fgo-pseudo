void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MyRoomListControl_StaticFields *static_fields; // x9

  if ( (byte_40F9B17 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomListControl_TypeInfo, v1);
    byte_40F9B17 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v47; // x1
  __int64 v48; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v49; // x20
  System_String_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  MyRoomListControl_MainItemInfo_o *v55; // x21
  System_String_o *v56; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  MyRoomListControl_MainItemInfo_o *v61; // x22
  System_String_o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  MyRoomListControl_MainItemInfo_o *v67; // x22
  System_String_o *v68; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  MyRoomListControl_MainItemInfo_o *v73; // x22
  System_String_o *v74; // x21
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  MyRoomListControl_MainItemInfo_o *v79; // x22
  System_String_o *v80; // x21
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  EventDelegate_Callback_o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  MyRoomListControl_MainItemInfo_o *v90; // x23
  System_String_o *v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  MyRoomListControl_MainItemInfo_o *v96; // x22
  System_String_o *v97; // x21
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  MyRoomListControl_MainItemInfo_o *v102; // x22
  BalanceConfig_c *v103; // x0
  System_String_o *v104; // x21
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  MyRoomListControl_MainItemInfo_o *v109; // x22
  System_String_o *v110; // x21
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  MyRoomListControl_MainItemInfo_o *v115; // x22
  System_String_o *v116; // x21
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  MyRoomListControl_MainItemInfo_o *v121; // x22
  float v122; // s8
  Il2CppObject *current; // x28
  struct UnityEngine_GameObject_o *listItemBase; // x22
  UnityEngine_GameObject_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x22
  UIWidget_o *Component_UIWidget; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  UnityEngine_GameObject_o *GameObject; // x0
  UILabel_o *v136; // x0
  struct UILabel_o *v137; // x24
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  int monitor; // w8
  UnityEngine_Behaviour_o *v151; // x0
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  __int64 v155; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mOnRender; // x22
  EventDelegate_Callback_o *v157; // x24
  EventDelegate_o *v158; // x23
  srcLineSprite_o *v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **klass; // x1
  MyRoomListControl_c *v167; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v168; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v169; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_40F9B11 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__, v9);
    sub_B16FFC(&EventDelegate_TypeInfo, v10);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&MyRoomListControl_MainItemInfo_TypeInfo, v21);
    sub_B16FFC(&Method_MyRoomListControl_ClickFavoriteChange__, v22);
    sub_B16FFC(&MyRoomListControl_TypeInfo, v23);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v24);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_8847, v26);
    sub_B16FFC(&StringLiteral_20917, v27);
    sub_B16FFC(&StringLiteral_3076, v28);
    sub_B16FFC(&StringLiteral_8842, v29);
    sub_B16FFC(&StringLiteral_3053, v30);
    sub_B16FFC(&StringLiteral_8848, v31);
    sub_B16FFC(&StringLiteral_3060, v32);
    sub_B16FFC(&StringLiteral_3044, v33);
    sub_B16FFC(&StringLiteral_3068, v34);
    sub_B16FFC(&StringLiteral_3050, v35);
    sub_B16FFC(&StringLiteral_8851, v36);
    sub_B16FFC(&StringLiteral_8853, v37);
    sub_B16FFC(&StringLiteral_8844, v38);
    sub_B16FFC(&StringLiteral_8846, v39);
    sub_B16FFC(&StringLiteral_3056, v40);
    sub_B16FFC(&StringLiteral_8849, v41);
    sub_B16FFC(&StringLiteral_8852, v42);
    sub_B16FFC(&StringLiteral_3062, v43);
    sub_B16FFC(&StringLiteral_3065, v44);
    sub_B16FFC(&StringLiteral_8845, v45);
    sub_B16FFC(&StringLiteral_8850, v46);
    sub_B16FFC(&StringLiteral_3066, v47);
    sub_B16FFC(&StringLiteral_3077, v48);
    byte_40F9B11 = 1;
  }
  memset(&v169, 0, sizeof(v169));
  v49 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo,
                                                                             method,
                                                                             v2,
                                                                             v3,
                                                                             v4);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v49,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8844, 0LL);
  v55 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v51, v52, v53, v54);
  MyRoomListControl_MainItemInfo___ctor(v55, v50, 0, (System_String_o *)StringLiteral_3056, 0LL, 0LL);
  if ( !v49 )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v55,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_8845, 0LL);
  v61 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v57, v58, v59, v60);
  MyRoomListControl_MainItemInfo___ctor(v61, v56, 0, (System_String_o *)StringLiteral_3066, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v61,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8842, 0LL);
  v67 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v63, v64, v65, v66);
  MyRoomListControl_MainItemInfo___ctor(v67, v62, 0, (System_String_o *)StringLiteral_3077, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v67,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_8846, 0LL);
  v73 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v69, v70, v71, v72);
  MyRoomListControl_MainItemInfo___ctor(v73, v68, 0, (System_String_o *)StringLiteral_3068, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v73,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8847, 0LL);
  v79 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v75, v76, v77, v78);
  MyRoomListControl_MainItemInfo___ctor(v79, v74, 0, (System_String_o *)StringLiteral_3062, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v79,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_8848, 0LL);
  v85 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v81, v82, v83, v84);
  EventDelegate_Callback___ctor(v85, (Il2CppObject *)this, Method_MyRoomListControl_ClickFavoriteChange__, 0LL);
  v90 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v86, v87, v88, v89);
  MyRoomListControl_MainItemInfo___ctor(v90, v80, 1, (System_String_o *)StringLiteral_3050, v85, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v90,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_8849, 0LL);
  v96 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v92, v93, v94, v95);
  MyRoomListControl_MainItemInfo___ctor(v96, v91, 0, (System_String_o *)StringLiteral_3060, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v96,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_8850, 0LL);
  v102 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v98, v99, v100, v101);
  MyRoomListControl_MainItemInfo___ctor(v102, v97, 0, (System_String_o *)StringLiteral_3053, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v102,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v103 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v103 = BalanceConfig_TypeInfo;
  }
  if ( v103->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v104 = LocalizationManager__Get((System_String_o *)StringLiteral_8851, 0LL);
    v109 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(
                                                 MyRoomListControl_MainItemInfo_TypeInfo,
                                                 v105,
                                                 v106,
                                                 v107,
                                                 v108);
    MyRoomListControl_MainItemInfo___ctor(v109, v104, 0, (System_String_o *)StringLiteral_3065, 0LL, 0LL);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
      v49,
      (WarBoardAIRoute_RouteData_o *)v109,
      (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_8852, 0LL);
  v115 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v111, v112, v113, v114);
  MyRoomListControl_MainItemInfo___ctor(v115, v110, 0, (System_String_o *)StringLiteral_3044, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v115,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_8853, 0LL);
  v121 = (MyRoomListControl_MainItemInfo_o *)sub_B170CC(MyRoomListControl_MainItemInfo_TypeInfo, v117, v118, v119, v120);
  MyRoomListControl_MainItemInfo___ctor(v121, v116, 0, (System_String_o *)StringLiteral_3076, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v49,
    (WarBoardAIRoute_RouteData_o *)v121,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v168,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v49,
    (const MethodInfo_21DF444 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v169 = v168;
  v122 = 0.0;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v169,
            (const MethodInfo_20739E4 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v169.fields._current;
    listItemBase = this->fields.listItemBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v125 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)listItemBase,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v126 = v125;
    if ( !v125 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v125, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v126, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_27420076(v126, 0.0, v122, 0.0, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v126,
                           (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v126,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        sub_B170D4();
      ((void (__fastcall *)(UnityEngine_Object_o *, void *))Component_srcLineSprite->klass[2]._1.typeMetadataHandle)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[2]._1.interopData);
      if ( !Component_UIWidget )
        sub_B170D4();
      Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v126;
      sub_B16F98(
        (BattleServantConfConponent_o *)&Component_UIWidget->fields.leftAnchor,
        (System_Int32_array **)v126,
        v129,
        v130,
        v131,
        v132,
        v133,
        v134);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.rightAnchor = UnityEngine_Color__get_white(0LL);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.mGo = UnityEngine_Color__get_white(0LL);
    }
    GameObject = GameObjectExtensions__FindGameObject(v126, (System_String_o *)StringLiteral_20917, 0LL);
    if ( !GameObject )
      sub_B170D4();
    v136 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          GameObject,
                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_B170D4();
    v137 = v136;
    if ( !v136 )
      sub_B170D4();
    UILabel__set_text(v136, (System_String_o *)current[1].klass, 0LL);
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3050, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_UIWidget;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.favoriteChangeMenuBtn,
        (System_Int32_array **)Component_UIWidget,
        v138,
        v139,
        v140,
        v141,
        v142,
        v143);
      this->fields.favoriteTxtLb = v137;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.favoriteTxtLb,
        (System_Int32_array **)v137,
        v144,
        v145,
        v146,
        v147,
        v148,
        v149);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v151 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v126,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v151 )
          sub_B170D4();
        UnityEngine_Behaviour__set_enabled(v151, 0, 0LL);
        if ( !Component_UIWidget )
          sub_B170D4();
        mOnRender = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_UIWidget->fields.mOnRender;
        v157 = (EventDelegate_Callback_o *)current[2].monitor;
        v158 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v152, v153, v154, v155);
        EventDelegate___ctor_29412484(v158, v157, 0LL);
        if ( !mOnRender )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          mOnRender,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v158,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      }
    }
    else
    {
      v159 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               v126,
               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v159 )
        sub_B170D4();
      klass = (System_Int32_array **)current[2].klass;
      *(_QWORD *)&v159->fields.mtIsUpdate = klass;
      sub_B16F98((BattleServantConfConponent_o *)&v159->fields.mtIsUpdate, klass, v160, v161, v162, v163, v164, v165);
    }
    v167 = MyRoomListControl_TypeInfo;
    if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v167 = MyRoomListControl_TypeInfo;
    }
    v122 = v122 - v167->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v169,
    (const MethodInfo_20739E0 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_27420076(this->fields.itemDummy, 0.0, v122, 0.0, 0LL);
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
  PlayMakerFSM_o *myRoomFsm; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  int32_t FirstWarId; // w0
  WarEntity_o *Entity; // x0
  Il2CppObject *longName; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  CommonUI_o *Instance; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x22

  if ( (byte_40F9B15 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_MyRoomListControl_callBackNotificationDlg__, v7);
    sub_B16FFC(&OpeningMovieData_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_3050, v11);
    sub_B16FFC(&StringLiteral_8841, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40F9B15 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3050, 0LL);
      return;
    }
LABEL_22:
    sub_B170D4();
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  }
  FirstWarId = OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             FirstWarId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_22;
  longName = (Il2CppObject *)Entity->fields.longName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8841, 0LL);
  v20 = System_String__Format(v19, longName, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1,
    v20,
    v26,
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
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  System_String_o *v14; // x0
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F9B14 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___, items);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    this = (MyRoomListControl_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F9B14 = 1;
  }
  v15 = 0;
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
        sub_B17100(this, items, prefixStr);
        sub_B170A0();
      }
      v10 = items->m_Items[v9];
      if ( !v10 )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v10,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = System_Int32__ToString((int32_t)&v15, 0LL);
        v13 = System_String__Concat_43743732(prefixStr, v12, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get(v13, 0LL);
        if ( !Component_srcLineSprite )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_srcLineSprite, v14, 0LL);
      }
      v9 = v15 + 1;
      v15 = v9;
      max_length = items->max_length;
      if ( v9 >= max_length )
        return;
    }
LABEL_19:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 _28023340; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v6; // x2
  MyRoomListControl_o *v7; // x0
  const MethodInfo *v8; // x3
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_Component_o *noticeComp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *menuListScrollView; // x0
  struct UIScrollView_o *v13; // x0
  UIScrollView_o *v14; // x0
  UIButtonColor_o *favoriteChangeMenuBtn; // x20
  int v16; // s0
  struct UIButton_o *v20; // x20
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  struct UIButton_o *v25; // x20
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s3
  struct UILabel_o *favoriteTxtLb; // x0

  if ( (byte_40F9B12 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8854, v3);
    byte_40F9B12 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _28023340;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_28023340, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_8854, v8);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_18;
  noticeComp = (UnityEngine_Component_o *)myRoomControl->fields.noticeComp;
  if ( !noticeComp )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(noticeComp, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    goto LABEL_18;
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))menuListScrollView->klass->vtable._9_SetDragAmount.method)(
    menuListScrollView,
    0LL,
    menuListScrollView->klass->vtable._10_MoveRelative.methodPtr,
    0.0,
    0.0);
  v13 = this->fields.menuListScrollView;
  if ( !v13 )
    goto LABEL_18;
  ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
    v13,
    1LL,
    v13->klass->vtable._9_SetDragAmount.methodPtr);
  v14 = this->fields.menuListScrollView;
  if ( !v14 )
    goto LABEL_18;
  UIScrollView__UpdatePosition(v14, 0LL);
  if ( this->fields.isUseFavorite )
    return;
  favoriteChangeMenuBtn = (UIButtonColor_o *)this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_gray(0LL);
  if ( !favoriteChangeMenuBtn )
    goto LABEL_18;
  UIButtonColor__set_defaultColor(favoriteChangeMenuBtn, *(UnityEngine_Color_o *)&v16, 0LL);
  v20 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !v20 )
    goto LABEL_18;
  v20->fields.hover.fields.r = v21;
  v20->fields.hover.fields.g = v22;
  v20->fields.hover.fields.b = v23;
  v20->fields.hover.fields.a = v24;
  v25 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
  if ( !v25
    || (v25->fields.disabledColor.fields.r = v26,
        v25->fields.disabledColor.fields.g = v27,
        v25->fields.disabledColor.fields.b = v28,
        v25->fields.disabledColor.fields.a = v29,
        (favoriteTxtLb = this->fields.favoriteTxtLb) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  UILabel__set_gradientBottom(favoriteTxtLb, favoriteTxtLb->fields.mGradientTop, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v11; // w20
  int32_t v12; // w21
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Component_o *Child; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x24
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UIRect_AnchorPoint_o **p_leftAnchor; // x24
  UnityEngine_Component_o *ComponentInChildren_UIWidget; // x22
  UnityEngine_GameObject_o *v27; // x0
  MyRoomListControl_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x22

  if ( (byte_40F9B13 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, grid);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v4);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v5);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v6);
    sub_B16FFC(&MyRoomListControl_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F9B13 = 1;
  }
  if ( !grid )
    goto LABEL_36;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !transform )
    goto LABEL_36;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( childCount >= 1 )
  {
    v11 = childCount;
    v12 = 0;
    while ( 1 )
    {
      v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !v13 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v13, v12, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Child, 0LL, 0LL) )
      {
        if ( !Child )
          break;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            Child,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                              Child,
                                                              (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        {
          if ( !Component_WebViewObject )
            break;
          ((void (__fastcall *)(UnityEngine_Object_o *, void *))Component_WebViewObject->klass[2]._1.typeMetadataHandle)(
            Component_WebViewObject,
            Component_WebViewObject->klass[2]._1.interopData);
          gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
          Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 gameObject,
                                 (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          v18 = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_WebViewObject,
                                         0LL);
          if ( !Component_UIWidget )
            break;
          Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v18;
          p_leftAnchor = &Component_UIWidget->fields.leftAnchor;
          sub_B16F98((BattleServantConfConponent_o *)p_leftAnchor, v18, v19, v20, v21, v22, v23, v24);
          *(UnityEngine_Color_o *)(p_leftAnchor + 1) = UnityEngine_Color__get_white(0LL);
          *(UnityEngine_Color_o *)(p_leftAnchor + 5) = UnityEngine_Color__get_white(0LL);
        }
        ComponentInChildren_UIWidget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                    Child,
                                                                    (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_UIWidget, 0LL, 0LL) )
        {
          if ( !ComponentInChildren_UIWidget )
            break;
          v27 = UnityEngine_Component__get_gameObject(ComponentInChildren_UIWidget, 0LL);
          v28 = MyRoomListControl_TypeInfo;
          v29 = v27;
          if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v28 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v29, v28->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( ++v12 >= v11 )
        return;
    }
LABEL_36:
    sub_B170D4();
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F9B16 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F9B16 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v11, v12, v13, v14, v15, v16);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.EventName,
    (System_Int32_array **)eventName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.ClickAction = clickAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ClickAction,
    (System_Int32_array **)clickAction,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}