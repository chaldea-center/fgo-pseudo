void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4B11A4D & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomListControl_TypeInfo, v1, v2);
    byte_4B11A4D = 1;
  }
  static_fields = MyRoomListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BTN_LABEL_POS.fields.x = 0x4080000000000000LL;
  static_fields->BTN_LABEL_POS.fields.z = 0.0;
  *(_QWORD *)&MyRoomListControl_TypeInfo->static_fields->ITEM_OFFSET_SIZE_Y = 0x43B7800042F00000LL;
}


void __fastcall MyRoomListControl___ctor(MyRoomListControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomListControl__Awake(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  System_Collections_Generic_HashSet_T__o *v105; // x20
  __int64 v106; // x1
  System_String_o *v107; // x22
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  MyRoomListControl_MainItemInfo_o *v111; // x21
  const MethodInfo *v112; // x5
  int64_t UserId; // x0
  __int64 v114; // x1
  System_String_o *v115; // x21
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  MyRoomListControl_MainItemInfo_o *v119; // x22
  const MethodInfo *v120; // x5
  System_String_o *v121; // x21
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  MyRoomListControl_MainItemInfo_o *v125; // x22
  const MethodInfo *v126; // x5
  System_String_o *v127; // x21
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  MyRoomListControl_MainItemInfo_o *v131; // x22
  const MethodInfo *v132; // x5
  System_String_o *v133; // x21
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  MyRoomListControl_MainItemInfo_o *v137; // x22
  const MethodInfo *v138; // x5
  System_String_o *v139; // x21
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  EventDelegate_Callback_o *v143; // x22
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  MyRoomListControl_MainItemInfo_o *v147; // x23
  const MethodInfo *v148; // x5
  System_String_o *v149; // x21
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  MyRoomListControl_MainItemInfo_o *v153; // x22
  const MethodInfo *v154; // x5
  System_String_o *v155; // x21
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  MyRoomListControl_MainItemInfo_o *v159; // x22
  const MethodInfo *v160; // x5
  __int64 v161; // x1
  BalanceConfig_c *v162; // x0
  System_String_o *v163; // x21
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x3
  MyRoomListControl_MainItemInfo_o *v167; // x22
  const MethodInfo *v168; // x5
  System_String_o *v169; // x21
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  MyRoomListControl_MainItemInfo_o *v173; // x22
  const MethodInfo *v174; // x5
  System_String_o *v175; // x21
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  MyRoomListControl_MainItemInfo_o *v179; // x22
  const MethodInfo *v180; // x5
  System_String_o *v181; // x21
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x3
  MyRoomListControl_MainItemInfo_o *v185; // x22
  const MethodInfo *v186; // x5
  __int64 v187; // x1
  Il2CppObject *Master_object; // x21
  unsigned __int64 v189; // x23
  __int64 v190; // x8
  BalanceConfig_c *v191; // x8
  int64_t v192; // x22
  struct System_Int32_array *Shop17ConsumeItemIds; // x8
  System_String_o *v194; // x21
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  MyRoomListControl_MainItemInfo_o *v198; // x22
  const MethodInfo *v199; // x5
  float v205; // s8
  __int64 v206; // x1
  Il2CppObject *current; // x27
  Il2CppObject *listItemBase; // x23
  Il2CppObject *v209; // x0
  __int64 v210; // x1
  UnityEngine_GameObject_o *v211; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v213; // x25
  _BOOL8 v214; // x0
  __int64 v215; // x1
  __int64 v216; // x0
  __int64 v217; // x1
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v219; // x1
  Il2CppObject *v220; // x0
  __int64 v221; // x1
  UILabel_o *v222; // x25
  __int64 v223; // x1
  System_String_o *klass; // x26
  System_String_o *v225; // x1
  __int64 v226; // x1
  MyRoomListControl_c *v227; // x0
  __int64 v228; // x1
  int monitor; // w8
  Il2CppObject *v230; // x0
  __int64 v231; // x1
  __int64 v232; // x0
  __int64 v233; // x1
  __int64 v234; // x2
  __int64 v235; // x3
  System_Collections_Generic_List_object__o *v236; // x23
  EventDelegate_Callback_o *v237; // x25
  EventDelegate_o *v238; // x24
  __int64 v239; // x0
  __int64 v240; // x1
  struct System_Object_array *items; // x8
  _QWORD *v242; // x9
  __int64 size; // x10
  Il2CppClass **v244; // x0
  Il2CppObject *v245; // x0
  __int64 v246; // x1
  Il2CppClass *v247; // x1
  MyRoomListControl_c *v248; // x0
  __int128 v249; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v250; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v251; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B11A46 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__,
      v15,
      v16);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v35, v36);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&MyRoomListControl_MainItemInfo_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_MyRoomListControl_ClickFavoriteChange__, v41, v42);
    sub_1BCA7E0(&MyRoomListControl_TypeInfo, v43, v44);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v47, v48);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_8932/*"MYROOM_MENU_NAME_3"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_22222/*"nameLabel"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_3603/*"CLICK_TITLE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_8925/*"MYROOM_MENU_NAME_1"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_3574/*"CLICK_GAMEOPTION"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_8933/*"MYROOM_MENU_NAME_4"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_3583/*"CLICK_NOTICE"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_3564/*"CLICK_CONTINUE_DEVICE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_3595/*"CLICK_SOUND_PLAYER"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_8930/*"MYROOM_MENU_NAME_14"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_3592/*"CLICK_SHOP17"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_3571/*"CLICK_FAVORITE_CHANGE"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_8936/*"MYROOM_MENU_NAME_7"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_8938/*"MYROOM_MENU_NAME_9"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_3553/*"CLICK_ACCOUNT_LINKAGE"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_8927/*"MYROOM_MENU_NAME_11"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_8931/*"MYROOM_MENU_NAME_2"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_3579/*"CLICK_MATERIAL"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_8934/*"MYROOM_MENU_NAME_5"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_8937/*"MYROOM_MENU_NAME_8"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_3585/*"CLICK_PROFILE"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_3590/*"CLICK_SERIAL_CODE"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_8928/*"MYROOM_MENU_NAME_12"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_8935/*"MYROOM_MENU_NAME_6"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_3591/*"CLICK_SERVANT_MENU"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_3604/*"CLICK_USER_ITEM"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_8929/*"MYROOM_MENU_NAME_13"*/, v103, v104);
    byte_4B11A46 = 1;
  }
  memset(&v251, 0, sizeof(v251));
  v105 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_HashSet_object____ctor(
    v105,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_8927/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v111 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v108, v109, v110);
  MyRoomListControl_MainItemInfo___ctor(v111, v107, 0, (System_String_o *)StringLiteral_3579/*"CLICK_MATERIAL"*/, 0LL, v112);
  if ( !v105 )
LABEL_68:
    sub_1BCAA3C(UserId, v114);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v111,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_8928/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v119 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v116, v117, v118);
  MyRoomListControl_MainItemInfo___ctor(v119, v115, 0, (System_String_o *)StringLiteral_3591/*"CLICK_SERVANT_MENU"*/, 0LL, v120);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v119,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_8925/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v125 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v122, v123, v124);
  MyRoomListControl_MainItemInfo___ctor(v125, v121, 0, (System_String_o *)StringLiteral_3604/*"CLICK_USER_ITEM"*/, 0LL, v126);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v125,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v127 = LocalizationManager__Get((System_String_o *)StringLiteral_8931/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v131 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v128, v129, v130);
  MyRoomListControl_MainItemInfo___ctor(v131, v127, 0, (System_String_o *)StringLiteral_3595/*"CLICK_SOUND_PLAYER"*/, 0LL, v132);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v131,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_8932/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v137 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v134, v135, v136);
  MyRoomListControl_MainItemInfo___ctor(v137, v133, 0, (System_String_o *)StringLiteral_3585/*"CLICK_PROFILE"*/, 0LL, v138);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v137,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v139 = LocalizationManager__Get((System_String_o *)StringLiteral_8933/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v143 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v140, v141, v142);
  EventDelegate_Callback___ctor(
    v143,
    (Il2CppObject *)this,
    (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__,
    0LL);
  v147 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v144, v145, v146);
  MyRoomListControl_MainItemInfo___ctor(v147, v139, 1, (System_String_o *)StringLiteral_3571/*"CLICK_FAVORITE_CHANGE"*/, v143, v148);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v147,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v149 = LocalizationManager__Get((System_String_o *)StringLiteral_8934/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v153 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v150, v151, v152);
  MyRoomListControl_MainItemInfo___ctor(v153, v149, 0, (System_String_o *)StringLiteral_3583/*"CLICK_NOTICE"*/, 0LL, v154);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v153,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v155 = LocalizationManager__Get((System_String_o *)StringLiteral_8935/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v159 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v156, v157, v158);
  MyRoomListControl_MainItemInfo___ctor(v159, v155, 0, (System_String_o *)StringLiteral_3574/*"CLICK_GAMEOPTION"*/, 0LL, v160);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v159,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v162 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v161);
    v162 = BalanceConfig_TypeInfo;
  }
  if ( v162->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v161);
    v163 = LocalizationManager__Get((System_String_o *)StringLiteral_8936/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v167 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v164, v165, v166);
    MyRoomListControl_MainItemInfo___ctor(v167, v163, 0, (System_String_o *)StringLiteral_3590/*"CLICK_SERIAL_CODE"*/, 0LL, v168);
    System_Collections_Generic_HashSet_object___Add(
      v105,
      (Il2CppObject *)v167,
      (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v161);
  v169 = LocalizationManager__Get((System_String_o *)StringLiteral_8937/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v173 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v170, v171, v172);
  MyRoomListControl_MainItemInfo___ctor(v173, v169, 0, (System_String_o *)StringLiteral_3564/*"CLICK_CONTINUE_DEVICE"*/, 0LL, v174);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v173,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v175 = LocalizationManager__Get((System_String_o *)StringLiteral_8929/*"MYROOM_MENU_NAME_13"*/, 0LL);
  v179 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v176, v177, v178);
  MyRoomListControl_MainItemInfo___ctor(v179, v175, 0, (System_String_o *)StringLiteral_3553/*"CLICK_ACCOUNT_LINKAGE"*/, 0LL, v180);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v179,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v181 = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v185 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v182, v183, v184);
  MyRoomListControl_MainItemInfo___ctor(v185, v181, 0, (System_String_o *)StringLiteral_3603/*"CLICK_TITLE"*/, 0LL, v186);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v185,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v187);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  v189 = 0LL;
  do
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v114);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    v190 = *(_QWORD *)(*(_QWORD *)(UserId + 184) + 456LL);
    if ( !v190 )
      goto LABEL_68;
    if ( (__int64)v189 >= *(int *)(v190 + 24) )
      goto LABEL_33;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v114);
    UserId = NetworkManager__get_UserId(0LL);
    v191 = BalanceConfig_TypeInfo;
    v192 = UserId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v114);
      v191 = BalanceConfig_TypeInfo;
    }
    Shop17ConsumeItemIds = v191->static_fields->Shop17ConsumeItemIds;
    if ( !Shop17ConsumeItemIds )
      goto LABEL_68;
    if ( v189 >= Shop17ConsumeItemIds->max_length )
      sub_1BCAA44(UserId, v114);
    if ( !Master_object )
      goto LABEL_68;
    UserId = (int64_t)UserItemMaster__GetEntityDefinitely(
                        (UserItemMaster_o *)Master_object,
                        v192,
                        Shop17ConsumeItemIds->m_Items[v189 + 1],
                        0LL);
    if ( !UserId )
      goto LABEL_68;
    ++v189;
  }
  while ( *(int *)(UserId + 28) < 1 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v114);
  v194 = LocalizationManager__Get((System_String_o *)StringLiteral_8930/*"MYROOM_MENU_NAME_14"*/, 0LL);
  v198 = (MyRoomListControl_MainItemInfo_o *)sub_1BCAA2C(MyRoomListControl_MainItemInfo_TypeInfo, v195, v196, v197);
  MyRoomListControl_MainItemInfo___ctor(v198, v194, 0, (System_String_o *)StringLiteral_3592/*"CLICK_SHOP17"*/, 0LL, v199);
  System_Collections_Generic_HashSet_object___Add(
    v105,
    (Il2CppObject *)v198,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_33:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v250,
    v105,
    (const MethodInfo_345BB30 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v251 = v250;
  __asm { FMOV            V0.4S, #1.0 }
  v205 = 0.0;
  v249 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v251,
            (const MethodInfo_33167AC *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v251.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v206);
    v209 = UnityEngine_Object__Instantiate_object_(
             listItemBase,
             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v211 = (UnityEngine_GameObject_o *)v209;
    if ( !v209 )
      sub_1BCAA3C(0LL, v210);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v209, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v211, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_34331148(v211, 0.0, v205, 0.0, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v211,
                         (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v213 = UnityEngine_GameObject__GetComponent_object_(
             v211,
             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v214 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v213, 0LL, 0LL);
    if ( v214 )
    {
      if ( !v213 )
        sub_1BCAA3C(v214, v215);
      v216 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v213->klass->vtable[33].method)(
               v213,
               v213->klass->vtable[34].methodPtr);
      if ( !Component_object )
        sub_1BCAA3C(v216, v217);
      Component_object[2].klass = (Il2CppClass *)v211;
      sub_1BCA784(&Component_object[2], v211);
      *(_OWORD *)&Component_object[2].monitor = v249;
      *(_OWORD *)&Component_object[4].monitor = v249;
    }
    GameObject = GameObjectExtensions__FindGameObject(v211, (System_String_o *)StringLiteral_22222/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_1BCAA3C(0LL, v219);
    v220 = UnityEngine_GameObject__GetComponent_object_(
             GameObject,
             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1BCAA3C(v220, v221);
    v222 = (UILabel_o *)v220;
    if ( !v220 )
      sub_1BCAA3C(0LL, v221);
    UILabel__set_text((UILabel_o *)v220, (System_String_o *)current[1].klass, 0LL);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v223);
    v225 = LocalizationManager__Get((System_String_o *)StringLiteral_8930/*"MYROOM_MENU_NAME_14"*/, 0LL);
    if ( System_String__op_Equality(klass, v225, 0LL) )
    {
      UILabel__set_overflowMethod(v222, 2, 0LL);
      v227 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo, v226);
        v227 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_47600808(v222, v227->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0LL);
      this->fields.exchangeSvtCoinMenuBoard = v211;
      sub_1BCA784(&this->fields.exchangeSvtCoinMenuBoard, v211);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3571/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1BCA784(&this->fields.favoriteChangeMenuBtn, Component_object);
      this->fields.favoriteTxtLb = v222;
      sub_1BCA784(&this->fields.favoriteTxtLb, v222);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v230 = UnityEngine_GameObject__GetComponent_object_(
                 v211,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v230 )
          sub_1BCAA3C(0LL, v231);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v230, 0, 0LL);
        if ( !Component_object )
          sub_1BCAA3C(v232, v233);
        v236 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v237 = (EventDelegate_Callback_o *)current[2].monitor;
        v238 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v233, v234, v235);
        EventDelegate___ctor_47348668(v238, v237, 0LL);
        if ( !v236 )
          sub_1BCAA3C(v239, v240);
        items = v236->fields._items;
        v242 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v236->fields._version;
        if ( !items )
          sub_1BCAA3C(v239, v240);
        size = v236->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v236,
            (Il2CppObject *)v238,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
        }
        else
        {
          v244 = &items->obj.klass + size;
          v236->fields._size = size + 1;
          v244[4] = (Il2CppClass *)v238;
          sub_1BCA784(v244 + 4, v238);
        }
      }
    }
    else
    {
      v245 = UnityEngine_GameObject__GetComponent_object_(
               v211,
               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v245 )
        sub_1BCAA3C(0LL, v246);
      v247 = current[2].klass;
      v245[2].monitor = v247;
      sub_1BCA784(&v245[2].monitor, v247);
    }
    v248 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo, v228);
      v248 = MyRoomListControl_TypeInfo;
    }
    v205 = v205 - v248->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v251,
    (const MethodInfo_33167A8 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_34331148(this->fields.itemDummy, 0.0, v205, 0.0, 0LL);
}


void __fastcall MyRoomListControl__ClickFavoriteChange(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *Master_object; // x20
  Il2CppObject *fsmTemplate; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  Il2CppObject *Instance; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x22

  if ( (byte_4B11A4A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_MyRoomListControl_ClickFavoriteChange__, v12, v13);
    sub_1BCA7E0(&Method_MyRoomListControl_callBackNotificationDlg__, v14, v15);
    sub_1BCA7E0(&OpeningMovieData_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&StringLiteral_3571/*"CLICK_FAVORITE_CHANGE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8924/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B11A4A = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3571/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(myRoomFsm, method);
  }
  v27 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1BCA7F8(Method_MyRoomListControl_ClickFavoriteChange__);
  v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo, v30);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8924/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v34 = System_String__Format(v33, fsmTemplate, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v34,
    v39,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0LL,
    0.0,
    0LL);
}


void __fastcall MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *exchangeSvtCoinMenuBoard; // x20
  UnityEngine_GameObject_o *itemDummy; // x20
  float LocalPositionY; // s0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  UIScrollView_o *menuListScrollView; // x0

  if ( (byte_4B11A4C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11A4C = 1;
  }
  exchangeSvtCoinMenuBoard = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(exchangeSvtCoinMenuBoard, 0LL, 0LL) )
  {
    itemDummy = this->fields.itemDummy;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(this->fields.exchangeSvtCoinMenuBoard, 0LL);
    GameObjectExtensions__SetLocalPositionY(itemDummy, LocalPositionY, 0LL);
    v8 = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(v8, 0LL);
    menuListScrollView = this->fields.menuListScrollView;
    if ( !menuListScrollView
      || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))menuListScrollView->klass->vtable._8_UpdateScrollbars.method)(
            menuListScrollView,
            1LL,
            menuListScrollView->klass->vtable._9_SetDragAmount.methodPtr),
          (menuListScrollView = this->fields.menuListScrollView) == 0LL) )
    {
      sub_1BCAA3C(menuListScrollView, v9);
    }
    UIScrollView__UpdatePosition(menuListScrollView, 0LL);
  }
}


void __fastcall MyRoomListControl__SetBtnName(
        MyRoomListControl_o *this,
        UnityEngine_GameObject_array *items,
        System_String_o *prefixStr,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  signed int max_length; // w9
  int v11; // w8
  __int64 v12; // x1
  Il2CppObject *Component_object; // x21
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x22
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B11A49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___, items, prefixStr);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    this = (MyRoomListControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B11A49 = 1;
  }
  v17 = 0;
  if ( !items )
    goto LABEL_17;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1BCAA44(this, items);
      this = (MyRoomListControl_o *)items->m_Items[v11];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v14 = System_Int32__ToString((int32_t)&v17, 0LL);
        v16 = System_String__Concat_62401220(prefixStr, v14, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
        this = (MyRoomListControl_o *)LocalizationManager__Get(v16, 0LL);
        if ( !Component_object )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_object, (System_String_o *)this, 0LL);
      }
      v11 = v17 + 1;
      v17 = v11;
      max_length = items->max_length;
      if ( v11 >= max_length )
        return;
    }
LABEL_17:
    sub_1BCAA3C(this, items);
  }
}


void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q8
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  _BOOL8 _38402052; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v19; // x2
  MyRoomListControl_o *v20; // x0
  const MethodInfo *v21; // x3
  void *noticeComp; // x0
  __int64 v23; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  TerminalPramsManager_c *v27; // x0
  __int64 v28; // x2
  TerminalPramsManager_c *v29; // x0
  System_String_o *TransitionScrollTabName_k__BackingField; // x20
  System_String_o *v31; // x20
  __int64 v32; // x2
  TerminalPramsManager_c *v33; // x0
  int32_t childCount; // w0
  __int64 v35; // x2
  int v36; // w26
  int32_t v37; // w21
  int v38; // w27
  int32_t v39; // w22
  __int64 v40; // x1
  UnityEngine_Object_o *Child; // x23
  __int64 v42; // x1
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  struct System_String_o *v45; // x20
  TerminalPramsManager_c *v46; // x0
  struct System_String_o **p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v49; // x8
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11A47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_8939/*"MYROOM_NOTICE_NAME_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B11A47 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  _38402052 = TutorialFlag__Get_38402052(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _38402052;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_38402052, noticeListGrid, v19);
  MyRoomListControl__SetBtnName(v20, this->fields.noticeItems, (System_String_o *)StringLiteral_8939/*"MYROOM_NOTICE_NAME_"*/, v21);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_67;
  noticeComp = myRoomControl->fields.noticeComp;
  if ( !noticeComp )
    goto LABEL_67;
  noticeComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noticeComp, 0LL);
  if ( !noticeComp )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noticeComp, 0, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
  if ( !byte_4B11ABB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v26);
    byte_4B11ABB = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    v27 = TerminalPramsManager_TypeInfo;
  }
  LODWORD(v3) = 0;
  if ( !System_String__IsNullOrEmpty(v27->static_fields->_TransitionScrollTabName_k__BackingField, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
    if ( !byte_4B11ABB )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v28);
      byte_4B11ABB = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
      v29 = TerminalPramsManager_TypeInfo;
    }
    TransitionScrollTabName_k__BackingField = v29->static_fields->_TransitionScrollTabName_k__BackingField;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    v31 = LocalizationManager__Get(TransitionScrollTabName_k__BackingField, 0LL);
    if ( System_String__op_Inequality(v31, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
      if ( !byte_4B11ABB )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v32);
        byte_4B11ABB = 1;
      }
      v33 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
        v33 = TerminalPramsManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v31, v33->static_fields->_TransitionScrollTabName_k__BackingField, 0LL) )
      {
        noticeComp = this->fields.myRoomListGrid;
        if ( !noticeComp )
          goto LABEL_67;
        noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0LL);
        if ( !noticeComp )
          goto LABEL_67;
        childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)noticeComp, 0LL);
        v36 = childCount - 1;
        if ( childCount >= 1 )
        {
          v37 = childCount;
          v38 = 0;
          v39 = 0;
          while ( 1 )
          {
            noticeComp = this->fields.myRoomListGrid;
            if ( !noticeComp )
              break;
            noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0LL);
            if ( !noticeComp )
              break;
            Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(
                                              (UnityEngine_Transform_o *)noticeComp,
                                              v39,
                                              0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
            noticeComp = (void *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
            if ( ((unsigned __int8)noticeComp & 1) == 0 )
            {
              if ( !Child )
                break;
              Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)Child,
                                                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
              noticeComp = (void *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
              if ( ((unsigned __int8)noticeComp & 1) != 0 )
              {
                if ( !Component_object )
                  break;
                monitor = (System_String_o **)Component_object[1].monitor;
                if ( !monitor )
                  break;
                if ( System_String__op_Equality(monitor[52], v31, 0LL) )
                  goto LABEL_51;
              }
              ++v38;
            }
            if ( v37 == ++v39 )
              goto LABEL_51;
          }
LABEL_67:
          sub_1BCAA3C(noticeComp, v23);
        }
        v38 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
        v45 = (struct System_String_o *)StringLiteral_1/*""*/;
        if ( !byte_4B10F87 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v35);
          byte_4B10F87 = 1;
        }
        v46 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
          v46 = TerminalPramsManager_TypeInfo;
        }
        *(float *)&v3 = (float)v38 / (float)v36;
        p_TransitionScrollTabName_k__BackingField = &v46->static_fields->_TransitionScrollTabName_k__BackingField;
        *p_TransitionScrollTabName_k__BackingField = v45;
        sub_1BCA784(p_TransitionScrollTabName_k__BackingField, v45);
      }
    }
  }
  noticeComp = this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_67;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD, float, long double))(*(_QWORD *)noticeComp + 456LL))(
    noticeComp,
    0LL,
    *(_QWORD *)(*(_QWORD *)noticeComp + 464LL),
    0.0,
    v3);
  noticeComp = this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_67;
  (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)noticeComp + 440LL))(
    noticeComp,
    1LL,
    *(_QWORD *)(*(_QWORD *)noticeComp + 448LL));
  noticeComp = this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_67;
  UIScrollView__UpdatePosition((UIScrollView_o *)noticeComp, 0LL);
  if ( !this->fields.isUseFavorite )
  {
    noticeComp = this->fields.favoriteChangeMenuBtn;
    if ( !noticeComp )
      goto LABEL_67;
    v50.fields.r = 0.5;
    v50.fields.g = 0.5;
    v50.fields.b = 0.5;
    v50.fields.a = 1.0;
    UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v50, 0LL);
    favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
    if ( !favoriteChangeMenuBtn )
      goto LABEL_67;
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_BD2310;
    v49 = this->fields.favoriteChangeMenuBtn;
    if ( !v49 )
      goto LABEL_67;
    v49->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BD2310;
    noticeComp = this->fields.favoriteTxtLb;
    if ( !noticeComp )
      goto LABEL_67;
    UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)((char *)noticeComp + 492), 0LL);
  }
}


void __fastcall MyRoomListControl__SetupScrollListBtn(
        MyRoomListControl_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t childCount; // w0
  int32_t v15; // w20
  int32_t v16; // w21
  __int64 v22; // x1
  UnityEngine_Object_o *Child; // x22
  __int64 v24; // x1
  Il2CppObject *Component_object; // x23
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v28; // x24
  Il2CppObject *v29; // x24
  __int64 v30; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x22
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  MyRoomListControl_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x22
  __int128 v36; // [xsp+0h] [xbp-70h]

  if ( (byte_4B11A48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, grid, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v8, v9);
    sub_1BCA7E0(&MyRoomListControl_TypeInfo, v10, v11);
    this = (MyRoomListControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B11A48 = 1;
  }
  if ( !grid )
    goto LABEL_31;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v15 = childCount;
    v16 = 0;
    __asm { FMOV            V0.4S, #1.0 }
    v36 = _Q0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Child )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Child,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__49322392(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            break;
          ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[33].method)(
            Component_object,
            Component_object->klass->vtable[34].methodPtr);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0LL);
          v28 = GameObjectExtensions__SafeGetComponent_object_(
                  gameObject,
                  (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0LL);
          if ( !v28 )
            break;
          v28[2].klass = (Il2CppClass *)this;
          v29 = v28 + 2;
          sub_1BCA784(v29, this);
          *(_OWORD *)&v29->monitor = v36;
          *(_OWORD *)&v29[2].monitor = v36;
        }
        ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__49322392,
                                        0LL,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__49322392 )
            break;
          v32 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__49322392,
                  0LL);
          v34 = MyRoomListControl_TypeInfo;
          v35 = v32;
          if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo, v33);
            v34 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v35, v34->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( v15 == ++v16 )
        return;
    }
LABEL_31:
    sub_1BCAA3C(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11A4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11A4B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
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
  sub_1BCA784(&this->fields, name);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1BCA784(&this->fields.EventName, eventName);
  this->fields.ClickAction = clickAction;
  sub_1BCA784(&this->fields.ClickAction, clickAction);
}