void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct MyRoomListControl_StaticFields *static_fields; // x9

  if ( (byte_42E8563 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomListControl_TypeInfo, v1, v2, v3);
    byte_42E8563 = 1;
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v134; // x20
  System_String_o *v135; // x22
  MyRoomListControl_MainItemInfo_o *v136; // x21
  __int64 v137; // x0
  __int64 v138; // x1
  System_String_o *v139; // x21
  MyRoomListControl_MainItemInfo_o *v140; // x22
  System_String_o *v141; // x21
  MyRoomListControl_MainItemInfo_o *v142; // x22
  System_String_o *v143; // x21
  MyRoomListControl_MainItemInfo_o *v144; // x22
  System_String_o *v145; // x21
  MyRoomListControl_MainItemInfo_o *v146; // x22
  System_String_o *v147; // x21
  EventDelegate_Callback_o *v148; // x22
  MyRoomListControl_MainItemInfo_o *v149; // x23
  System_String_o *v150; // x21
  MyRoomListControl_MainItemInfo_o *v151; // x22
  System_String_o *v152; // x21
  MyRoomListControl_MainItemInfo_o *v153; // x22
  BalanceConfig_c *v154; // x0
  System_String_o *v155; // x21
  MyRoomListControl_MainItemInfo_o *v156; // x22
  System_String_o *v157; // x21
  MyRoomListControl_MainItemInfo_o *v158; // x22
  System_String_o *v159; // x21
  MyRoomListControl_MainItemInfo_o *v160; // x22
  float v161; // s8
  Il2CppObject *current; // x28
  struct UnityEngine_GameObject_o *listItemBase; // x22
  UnityEngine_GameObject_o *v164; // x0
  __int64 v165; // x1
  UnityEngine_GameObject_o *v166; // x22
  UIWidget_o *Component_UIWidget; // x23
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  _BOOL8 v169; // x0
  __int64 v170; // x1
  __int64 v171; // x0
  __int64 v172; // x1
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v180; // x1
  UILabel_o *v181; // x0
  __int64 v182; // x1
  struct UILabel_o *v183; // x24
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  int monitor; // w8
  UnityEngine_Behaviour_o *v197; // x0
  __int64 v198; // x1
  __int64 v199; // x0
  __int64 v200; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mOnRender; // x22
  EventDelegate_Callback_o *v202; // x24
  EventDelegate_o *v203; // x23
  __int64 v204; // x0
  __int64 v205; // x1
  srcLineSprite_o *v206; // x0
  __int64 v207; // x1
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **klass; // x1
  MyRoomListControl_c *v215; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v216; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v217; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_42E855D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&EventDelegate_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v44, v45, v46);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&MyRoomListControl_MainItemInfo_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_MyRoomListControl_ClickFavoriteChange__, v53, v54, v55);
    sub_B5D5C4(&MyRoomListControl_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v59, v60, v61);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_8967/*"MYROOM_MENU_NAME_3"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_21280/*"nameLabel"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_3149/*"CLICK_TITLE"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_8962/*"MYROOM_MENU_NAME_1"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_3122/*"CLICK_GAMEOPTION"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_8968/*"MYROOM_MENU_NAME_4"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_3131/*"CLICK_NOTICE"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_3112/*"CLICK_CONTINUE_DEVICE"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_3141/*"CLICK_SOUND_PLAYER"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_3119/*"CLICK_FAVORITE_CHANGE"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_8971/*"MYROOM_MENU_NAME_7"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_8973/*"MYROOM_MENU_NAME_9"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_8964/*"MYROOM_MENU_NAME_11"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_8966/*"MYROOM_MENU_NAME_2"*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_3127/*"CLICK_MATERIAL"*/, v107, v108, v109);
    sub_B5D5C4(&StringLiteral_8969/*"MYROOM_MENU_NAME_5"*/, v110, v111, v112);
    sub_B5D5C4(&StringLiteral_8972/*"MYROOM_MENU_NAME_8"*/, v113, v114, v115);
    sub_B5D5C4(&StringLiteral_3133/*"CLICK_PROFILE"*/, v116, v117, v118);
    sub_B5D5C4(&StringLiteral_3138/*"CLICK_SERIAL_CODE"*/, v119, v120, v121);
    sub_B5D5C4(&StringLiteral_8965/*"MYROOM_MENU_NAME_12"*/, v122, v123, v124);
    sub_B5D5C4(&StringLiteral_8970/*"MYROOM_MENU_NAME_6"*/, v125, v126, v127);
    sub_B5D5C4(&StringLiteral_3139/*"CLICK_SERVANT_MENU"*/, v128, v129, v130);
    sub_B5D5C4(&StringLiteral_3150/*"CLICK_USER_ITEM"*/, v131, v132, v133);
    byte_42E855D = 1;
  }
  memset(&v217, 0, sizeof(v217));
  v134 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v134,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v135 = LocalizationManager__Get((System_String_o *)StringLiteral_8964/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v136 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v136, v135, 0, (System_String_o *)StringLiteral_3127/*"CLICK_MATERIAL"*/, 0LL, 0LL);
  if ( !v134 )
    sub_B5D69C(v137, v138);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v136,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v139 = LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v140 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v140, v139, 0, (System_String_o *)StringLiteral_3139/*"CLICK_SERVANT_MENU"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v140,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v141 = LocalizationManager__Get((System_String_o *)StringLiteral_8962/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v142 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v142, v141, 0, (System_String_o *)StringLiteral_3150/*"CLICK_USER_ITEM"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v142,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v143 = LocalizationManager__Get((System_String_o *)StringLiteral_8966/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v144 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v144, v143, 0, (System_String_o *)StringLiteral_3141/*"CLICK_SOUND_PLAYER"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v144,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v145 = LocalizationManager__Get((System_String_o *)StringLiteral_8967/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v146 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v146, v145, 0, (System_String_o *)StringLiteral_3133/*"CLICK_PROFILE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v146,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v147 = LocalizationManager__Get((System_String_o *)StringLiteral_8968/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v148 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v148, (Il2CppObject *)this, Method_MyRoomListControl_ClickFavoriteChange__, 0LL);
  v149 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v149, v147, 1, (System_String_o *)StringLiteral_3119/*"CLICK_FAVORITE_CHANGE"*/, v148, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v149,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_8969/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v151 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v151, v150, 0, (System_String_o *)StringLiteral_3131/*"CLICK_NOTICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v151,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_8970/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v153 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v153, v152, 0, (System_String_o *)StringLiteral_3122/*"CLICK_GAMEOPTION"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v153,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v154 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v154 = BalanceConfig_TypeInfo;
  }
  if ( v154->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v155 = LocalizationManager__Get((System_String_o *)StringLiteral_8971/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v156 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v156, v155, 0, (System_String_o *)StringLiteral_3138/*"CLICK_SERIAL_CODE"*/, 0LL, 0LL);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
      v134,
      (WarBoardAIRoute_RouteData_o *)v156,
      (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v157 = LocalizationManager__Get((System_String_o *)StringLiteral_8972/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v158 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v158, v157, 0, (System_String_o *)StringLiteral_3112/*"CLICK_CONTINUE_DEVICE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v158,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v159 = LocalizationManager__Get((System_String_o *)StringLiteral_8973/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v160 = (MyRoomListControl_MainItemInfo_o *)sub_B5D694(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v160, v159, 0, (System_String_o *)StringLiteral_3149/*"CLICK_TITLE"*/, 0LL, 0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    v134,
    (WarBoardAIRoute_RouteData_o *)v160,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v216,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v134,
    (const MethodInfo_250693C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v217 = v216;
  v161 = 0.0;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v217,
            (const MethodInfo_201E960 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v217.fields._current;
    listItemBase = this->fields.listItemBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v164 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)listItemBase,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v166 = v164;
    if ( !v164 )
      sub_B5D69C(0LL, v165);
    UnityEngine_GameObject__SetActive(v164, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v166, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_32430604(v166, 0.0, v161, 0.0, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v166,
                           (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v166,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v169 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( v169 )
    {
      if ( !Component_srcLineSprite )
        sub_B5D69C(v169, v170);
      v171 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))Component_srcLineSprite->klass[2]._1.typeMetadataHandle)(
               Component_srcLineSprite,
               Component_srcLineSprite->klass[2]._1.interopData);
      if ( !Component_UIWidget )
        sub_B5D69C(v171, v172);
      Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v166;
      sub_B5D560(
        (BattleServantConfConponent_o *)&Component_UIWidget->fields.leftAnchor,
        (System_Int32_array **)v166,
        v173,
        v174,
        v175,
        v176,
        v177,
        v178);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.rightAnchor = UnityEngine_Color__get_white(0LL);
      *(UnityEngine_Color_o *)&Component_UIWidget->fields.mGo = UnityEngine_Color__get_white(0LL);
    }
    GameObject = GameObjectExtensions__FindGameObject(v166, (System_String_o *)StringLiteral_21280/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_B5D69C(0LL, v180);
    v181 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          GameObject,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_B5D69C(v181, v182);
    v183 = v181;
    if ( !v181 )
      sub_B5D69C(0LL, v182);
    UILabel__set_text(v181, (System_String_o *)current[1].klass, 0LL);
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3119/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_UIWidget;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.favoriteChangeMenuBtn,
        (System_Int32_array **)Component_UIWidget,
        v184,
        v185,
        v186,
        v187,
        v188,
        v189);
      this->fields.favoriteTxtLb = v183;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.favoriteTxtLb,
        (System_Int32_array **)v183,
        v190,
        v191,
        v192,
        v193,
        v194,
        v195);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v197 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v166,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v197 )
          sub_B5D69C(0LL, v198);
        UnityEngine_Behaviour__set_enabled(v197, 0, 0LL);
        if ( !Component_UIWidget )
          sub_B5D69C(v199, v200);
        mOnRender = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_UIWidget->fields.mOnRender;
        v202 = (EventDelegate_Callback_o *)current[2].monitor;
        v203 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
        EventDelegate___ctor_29822308(v203, v202, 0LL);
        if ( !mOnRender )
          sub_B5D69C(v204, v205);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          mOnRender,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v203,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      }
    }
    else
    {
      v206 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               v166,
               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v206 )
        sub_B5D69C(0LL, v207);
      klass = (System_Int32_array **)current[2].klass;
      *(_QWORD *)&v206->fields.mtIsUpdate = klass;
      sub_B5D560((BattleServantConfConponent_o *)&v206->fields.mtIsUpdate, klass, v208, v209, v210, v211, v212, v213);
    }
    v215 = MyRoomListControl_TypeInfo;
    if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v215 = MyRoomListControl_TypeInfo;
    }
    v161 = v161 - v215->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v217,
    (const MethodInfo_201E95C *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_32430604(this->fields.itemDummy, 0.0, v161, 0.0, 0LL);
}


void __fastcall MyRoomListControl__ClickFavoriteChange(MyRoomListControl_o *this, const MethodInfo *method)
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  void *myRoomFsm; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  Il2CppObject *v40; // x20
  System_String_o *v41; // x0
  System_String_o *v42; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v44; // x22

  if ( (byte_42E8561 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_MyRoomListControl_callBackNotificationDlg__, v17, v18, v19);
    sub_B5D5C4(&OpeningMovieData_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SoundManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_3119/*"CLICK_FAVORITE_CHANGE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_8961/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1/*""*/, v35, v36, v37);
    byte_42E8561 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_3119/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(myRoomFsm, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
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
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_22;
  v40 = (Il2CppObject *)*((_QWORD *)myRoomFsm + 5);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8961/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v42 = System_String__Format(v41, v40, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v42,
    v44,
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  signed int max_length; // w9
  int v13; // w8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  __int64 v17; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E8560 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___,
      (_DWORD)items,
      (_DWORD)prefixStr,
      method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    this = (MyRoomListControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E8560 = 1;
  }
  v18 = 0;
  if ( !items )
    goto LABEL_19;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      this = (MyRoomListControl_o *)items->m_Items[v13];
      if ( !this )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = System_Int32__ToString((int32_t)&v18, 0LL);
        v16 = System_String__Concat_44577788(prefixStr, v15, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (MyRoomListControl_o *)LocalizationManager__Get(v16, 0LL);
        if ( !Component_srcLineSprite )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_srcLineSprite, (System_String_o *)this, 0LL);
      }
      v13 = v18 + 1;
      v18 = v13;
      max_length = items->max_length;
      if ( v13 >= max_length )
        return;
    }
LABEL_19:
    sub_B5D69C(this, items);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 _29295864; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v10; // x2
  MyRoomListControl_o *v11; // x0
  const MethodInfo *v12; // x3
  char *noticeComp; // x0
  __int64 v14; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  UIButtonColor_o *favoriteChangeMenuBtn; // x20
  int v17; // s0
  struct UIButton_o *v21; // x20
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  struct UIButton_o *v26; // x20
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s3

  if ( (byte_42E855E & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8974/*"MYROOM_NOTICE_NAME_"*/, v5, v6, v7);
    byte_42E855E = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = TutorialFlag__Get_29295864(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _29295864;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_29295864, noticeListGrid, v10);
  MyRoomListControl__SetBtnName(v11, this->fields.noticeItems, (System_String_o *)StringLiteral_8974/*"MYROOM_NOTICE_NAME_"*/, v12);
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
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !favoriteChangeMenuBtn )
    goto LABEL_18;
  UIButtonColor__set_defaultColor(favoriteChangeMenuBtn, *(UnityEngine_Color_o *)&v17, 0LL);
  v21 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !v21 )
    goto LABEL_18;
  v21->fields.hover.fields.r = v22;
  v21->fields.hover.fields.g = v23;
  v21->fields.hover.fields.b = v24;
  v21->fields.hover.fields.a = v25;
  v26 = this->fields.favoriteChangeMenuBtn;
  *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_gray(0LL);
  if ( !v26
    || (v26->fields.disabledColor.fields.r = v27,
        v26->fields.disabledColor.fields.g = v28,
        v26->fields.disabledColor.fields.b = v29,
        v26->fields.disabledColor.fields.a = v30,
        (noticeComp = (char *)this->fields.favoriteTxtLb) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(noticeComp, v14);
  }
  UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)(noticeComp + 484), 0LL);
}


void __fastcall MyRoomListControl__SetupScrollListBtn(
        MyRoomListControl_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
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
  int32_t childCount; // w0
  int32_t v21; // w20
  int32_t v22; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UIRect_AnchorPoint_o **p_leftAnchor; // x24
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x22
  UnityEngine_GameObject_o *v35; // x0
  MyRoomListControl_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x22

  if ( (byte_42E855F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, (_DWORD)grid, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v8, v9, v10);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v11, v12, v13);
    sub_B5D5C4(&MyRoomListControl_TypeInfo, v14, v15, v16);
    this = (MyRoomListControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E855F = 1;
  }
  if ( !grid )
    goto LABEL_36;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_36;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v21 = childCount;
    v22 = 0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v22, 0LL);
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                              (UnityEngine_Component_o *)Child,
                                                              (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                                 (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_WebViewObject,
                                          0LL);
          if ( !Component_UIWidget )
            break;
          Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)this;
          p_leftAnchor = &Component_UIWidget->fields.leftAnchor;
          sub_B5D560(
            (BattleServantConfConponent_o *)p_leftAnchor,
            (System_Int32_array **)this,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          *(UnityEngine_Color_o *)(p_leftAnchor + 1) = UnityEngine_Color__get_white(0LL);
          *(UnityEngine_Color_o *)(p_leftAnchor + 5) = UnityEngine_Color__get_white(0LL);
        }
        ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                 (UnityEngine_Component_o *)Child,
                                                                 (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
          v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ComponentInChildren_UIWidget, 0LL);
          v36 = MyRoomListControl_TypeInfo;
          v37 = v35;
          if ( (BYTE3(MyRoomListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v36 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v37, v36->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( ++v22 >= v21 )
        return;
    }
LABEL_36:
    sub_B5D69C(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E8562 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E8562 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v11, v12, v13, v14, v15, v16);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.EventName,
    (System_Int32_array **)eventName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.ClickAction = clickAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ClickAction,
    (System_Int32_array **)clickAction,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}