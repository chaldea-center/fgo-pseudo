void MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x8
  MyRoomListControl_c *v2; // x9

  if ( (byte_596B948 & 1) == 0 )
  {
    sub_2213A60(&MyRoomListControl_TypeInfo);
    byte_596B948 = 1;
  }
  static_fields = MyRoomListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BTN_LABEL_POS.fields.x = 0x4080000000000000LL;
  v2 = MyRoomListControl_TypeInfo;
  static_fields->BTN_LABEL_POS.fields.z = 0.0;
  *(_QWORD *)&v2->static_fields->ITEM_OFFSET_SIZE_Y = 0x43B7800042F00000LL;
}


void MyRoomListControl___ctor(MyRoomListControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomListControl__Awake(MyRoomListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x22
  MyRoomListControl_MainItemInfo_o *v7; // x21
  const MethodInfo *v8; // x5
  int *EntityDefinitely; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  MyRoomListControl_MainItemInfo_o *v12; // x22
  const MethodInfo *v13; // x5
  System_String_o *v14; // x21
  MyRoomListControl_MainItemInfo_o *v15; // x22
  const MethodInfo *v16; // x5
  System_String_o *v17; // x21
  MyRoomListControl_MainItemInfo_o *v18; // x22
  const MethodInfo *v19; // x5
  System_String_o *v20; // x21
  MyRoomListControl_MainItemInfo_o *v21; // x22
  const MethodInfo *v22; // x5
  System_String_o *v23; // x21
  MyRoomListControl_MainItemInfo_o *v24; // x22
  const MethodInfo *v25; // x5
  System_String_o *v26; // x21
  EventDelegate_Callback_o *v27; // x22
  MyRoomListControl_MainItemInfo_o *v28; // x23
  const MethodInfo *v29; // x5
  System_String_o *v30; // x21
  MyRoomListControl_MainItemInfo_o *v31; // x22
  const MethodInfo *v32; // x5
  System_String_o *v33; // x21
  MyRoomListControl_MainItemInfo_o *v34; // x22
  const MethodInfo *v35; // x5
  __int64 v36; // x1
  __int64 v37; // x2
  BalanceConfig_c *v38; // x0
  System_String_o *v39; // x21
  MyRoomListControl_MainItemInfo_o *v40; // x22
  const MethodInfo *v41; // x5
  System_String_o *v42; // x21
  MyRoomListControl_MainItemInfo_o *v43; // x22
  const MethodInfo *v44; // x5
  System_String_o *v45; // x21
  MyRoomListControl_MainItemInfo_o *v46; // x22
  const MethodInfo *v47; // x5
  System_String_o *v48; // x21
  MyRoomListControl_MainItemInfo_o *v49; // x22
  const MethodInfo *v50; // x5
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x2
  Il2CppObject *Master_object; // x22
  unsigned __int64 v55; // x26
  __int64 v56; // x8
  BalanceConfig_c *v57; // x8
  int64_t v58; // x23
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v60; // x21
  MyRoomListControl_MainItemInfo_o *v61; // x22
  const MethodInfo *v62; // x5
  float v68; // s8
  __int64 v69; // x1
  __int64 v70; // x2
  Il2CppObject *current; // x26
  Il2CppObject *listItemBase; // x20
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  UnityEngine_GameObject_o *v75; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v77; // x22
  _BOOL8 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x0
  __int64 v81; // x1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v89; // x1
  Il2CppObject *v90; // x0
  __int64 v91; // x1
  UILabel_o *v92; // x22
  __int64 v93; // x1
  __int64 v94; // x2
  System_String_o *klass; // x23
  System_String_o *v96; // x1
  __int64 v97; // x1
  __int64 v98; // x2
  MyRoomListControl_c *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  __int64 v106; // x1
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  BalanceConfig_c *v119; // x0
  int32_t GalleryReleaseQuestId; // w22
  bool IsQuestClear_47284152; // w22
  __int64 v122; // x1
  __int64 v123; // x2
  System_String_o *v124; // x22
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  const MethodInfo *v127; // x2
  __int64 v128; // x1
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  MyRoomListControl___c_c *v135; // x0
  struct MyRoomListControl___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__17_0; // x22
  Il2CppObject *v138; // x23
  struct MyRoomListControl___c_StaticFields *v139; // x0
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  __int64 v146; // x0
  int monitor; // w8
  Il2CppObject *v148; // x0
  __int64 v149; // x1
  __int64 v150; // x0
  __int64 v151; // x1
  System_Collections_Generic_List_object__o *v152; // x20
  EventDelegate_Callback_o *v153; // x22
  EventDelegate_o *v154; // x21
  __int64 v155; // x0
  __int64 v156; // x1
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct System_Object_array *items; // x8
  _QWORD *v164; // x9
  __int64 size; // x10
  Il2CppClass **v166; // x0
  Il2CppObject *v167; // x0
  __int64 v168; // x1
  System_String_o *v169; // x2
  System_String_o *v170; // x3
  int32_t v171; // w4
  int32_t v172; // w5
  bool v173; // w6
  bool v174; // w7
  Il2CppClass *v175; // x1
  MyRoomListControl_c *v176; // x0
  __int128 v177; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v178; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v179; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_596B941 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_2213A60(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_2213A60(&MyRoomListControl_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MyRoomListControl___c__Awake_b__17_0__);
    sub_2213A60(&MyRoomListControl___c_TypeInfo);
    sub_2213A60(&StringLiteral_9215/*"MYROOM_MENU_NAME_3"*/);
    sub_2213A60(&StringLiteral_9223/*"MYROOM_NOT_OPEN_GALLERY"*/);
    sub_2213A60(&StringLiteral_23269/*"nameLabel"*/);
    sub_2213A60(&StringLiteral_3634/*"CLICK_TITLE"*/);
    sub_2213A60(&StringLiteral_9207/*"MYROOM_MENU_NAME_1"*/);
    sub_2213A60(&StringLiteral_3602/*"CLICK_GAMEOPTION"*/);
    sub_2213A60(&StringLiteral_9213/*"MYROOM_MENU_NAME_15"*/);
    sub_2213A60(&StringLiteral_9216/*"MYROOM_MENU_NAME_4"*/);
    sub_2213A60(&StringLiteral_3611/*"CLICK_NOTICE"*/);
    sub_2213A60(&StringLiteral_3587/*"CLICK_CONTINUE_DEVICE"*/);
    sub_2213A60(&StringLiteral_3624/*"CLICK_SOUND_PLAYER"*/);
    sub_2213A60(&StringLiteral_9212/*"MYROOM_MENU_NAME_14"*/);
    sub_2213A60(&StringLiteral_3598/*"CLICK_FAVORITE_CHANGE"*/);
    sub_2213A60(&StringLiteral_9219/*"MYROOM_MENU_NAME_7"*/);
    sub_2213A60(&StringLiteral_9221/*"MYROOM_MENU_NAME_9"*/);
    sub_2213A60(&StringLiteral_3575/*"CLICK_ACCOUNT_LINKAGE"*/);
    sub_2213A60(&StringLiteral_9209/*"MYROOM_MENU_NAME_11"*/);
    sub_2213A60(&StringLiteral_3601/*"CLICK_GALLERY"*/);
    sub_2213A60(&StringLiteral_9214/*"MYROOM_MENU_NAME_2"*/);
    sub_2213A60(&StringLiteral_3607/*"CLICK_MATERIAL"*/);
    sub_2213A60(&StringLiteral_9217/*"MYROOM_MENU_NAME_5"*/);
    sub_2213A60(&StringLiteral_9220/*"MYROOM_MENU_NAME_8"*/);
    sub_2213A60(&StringLiteral_3613/*"CLICK_PROFILE"*/);
    sub_2213A60(&StringLiteral_3619/*"CLICK_SERIAL_CODE"*/);
    sub_2213A60(&StringLiteral_9210/*"MYROOM_MENU_NAME_12"*/);
    sub_2213A60(&StringLiteral_9218/*"MYROOM_MENU_NAME_6"*/);
    sub_2213A60(&StringLiteral_3621/*"CLICK_SERVANT_MENU"*/);
    sub_2213A60(&StringLiteral_3635/*"CLICK_USER_ITEM"*/);
    sub_2213A60(&StringLiteral_3595/*"CLICK_EXCHANGE_SVT_COIN"*/);
    sub_2213A60(&StringLiteral_9211/*"MYROOM_MENU_NAME_13"*/);
    byte_596B941 = 1;
  }
  memset(&v179, 0, sizeof(v179));
  v3 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9209/*"MYROOM_MENU_NAME_11"*/, 0);
  v7 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v7, v6, 0, (System_String_o *)StringLiteral_3607/*"CLICK_MATERIAL"*/, 0, v8);
  if ( !v3 )
LABEL_88:
    sub_2213CDC(EntityDefinitely, v10);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v7,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9210/*"MYROOM_MENU_NAME_12"*/, 0);
  v12 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v12, v11, 0, (System_String_o *)StringLiteral_3621/*"CLICK_SERVANT_MENU"*/, 0, v13);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v12,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9213/*"MYROOM_MENU_NAME_15"*/, 0);
  v15 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v15, v14, 0, (System_String_o *)StringLiteral_3601/*"CLICK_GALLERY"*/, 0, v16);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v15,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9207/*"MYROOM_MENU_NAME_1"*/, 0);
  v18 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v18, v17, 0, (System_String_o *)StringLiteral_3635/*"CLICK_USER_ITEM"*/, 0, v19);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v18,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9214/*"MYROOM_MENU_NAME_2"*/, 0);
  v21 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v21, v20, 0, (System_String_o *)StringLiteral_3624/*"CLICK_SOUND_PLAYER"*/, 0, v22);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v21,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9215/*"MYROOM_MENU_NAME_3"*/, 0);
  v24 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v24, v23, 0, (System_String_o *)StringLiteral_3613/*"CLICK_PROFILE"*/, 0, v25);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v24,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9216/*"MYROOM_MENU_NAME_4"*/, 0);
  v27 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v27, (Il2CppObject *)this, (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__, 0);
  v28 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v28, v26, 1, (System_String_o *)StringLiteral_3598/*"CLICK_FAVORITE_CHANGE"*/, v27, v29);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v28,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9217/*"MYROOM_MENU_NAME_5"*/, 0);
  v31 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v31, v30, 0, (System_String_o *)StringLiteral_3611/*"CLICK_NOTICE"*/, 0, v32);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v31,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9218/*"MYROOM_MENU_NAME_6"*/, 0);
  v34 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v34, v33, 0, (System_String_o *)StringLiteral_3602/*"CLICK_GAMEOPTION"*/, 0, v35);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v34,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v38 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v36, v37);
    v38 = BalanceConfig_TypeInfo;
  }
  if ( v38->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9219/*"MYROOM_MENU_NAME_7"*/, 0);
    v40 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v40, v39, 0, (System_String_o *)StringLiteral_3619/*"CLICK_SERIAL_CODE"*/, 0, v41);
    System_Collections_Generic_HashSet_object___Add(
      v3,
      (Il2CppObject *)v40,
      (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"MYROOM_MENU_NAME_8"*/, 0);
  v43 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v43, v42, 0, (System_String_o *)StringLiteral_3587/*"CLICK_CONTINUE_DEVICE"*/, 0, v44);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v43,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"MYROOM_MENU_NAME_13"*/, 0);
  v46 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v46, v45, 0, (System_String_o *)StringLiteral_3575/*"CLICK_ACCOUNT_LINKAGE"*/, 0, v47);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v46,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"MYROOM_MENU_NAME_9"*/, 0);
  v49 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v49, v48, 0, (System_String_o *)StringLiteral_3634/*"CLICK_TITLE"*/, 0, v50);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v49,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51, v52);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  v55 = 0;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v53);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v56 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 472LL);
    if ( !v56 )
      goto LABEL_88;
    if ( (__int64)v55 >= *(int *)(v56 + 24) )
      goto LABEL_37;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v53);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    EntityDefinitely = (int *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v53);
      EntityDefinitely = (int *)NetworkManager_TypeInfo;
    }
    v57 = BalanceConfig_TypeInfo;
    v58 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL);
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v53);
      v57 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v57->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_88;
    if ( v55 >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      sub_2213CE4(EntityDefinitely);
    if ( !Master_object )
      goto LABEL_88;
    EntityDefinitely = (int *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)Master_object,
                                v58,
                                ExchangeSvtCoinItemIds->m_Items[v55],
                                0);
    if ( !EntityDefinitely )
      goto LABEL_88;
    ++v55;
  }
  while ( EntityDefinitely[7] < 1 );
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v53);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"MYROOM_MENU_NAME_14"*/, 0);
  v61 = (MyRoomListControl_MainItemInfo_o *)sub_2213CCC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v61, v60, 0, (System_String_o *)StringLiteral_3595/*"CLICK_EXCHANGE_SVT_COIN"*/, 0, v62);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v61,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v178,
    v3,
    (const MethodInfo_42BAE44 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  __asm { FMOV            V1.4S, #1.0 }
  v68 = 0.0;
  v179 = v178;
  v177 = _Q1;
  v178.fields._set = 0;
  *(_QWORD *)&v178.fields._index = &v179;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v179,
            (const MethodInfo_40FB544 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v179.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69, v70);
    v73 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v75 = (UnityEngine_GameObject_o *)v73;
    if ( !v73 )
      sub_2213CDC(0, v74);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v73, 1, 0);
    GameObjectExtensions__SafeSetParent(v75, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0);
    GameObjectExtensions__SetLocalPosition_42891620(v75, 0.0, v68, 0.0, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v75,
                         (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v77 = UnityEngine_GameObject__GetComponent_object_(
            v75,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v78 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v77, 0, 0);
    if ( v78 )
    {
      if ( !v77 )
        sub_2213CDC(v78, v79);
      v80 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v77->klass->vtable[33].methodPtr)(
              v77,
              v77->klass->vtable[33].method);
      if ( !Component_object )
        sub_2213CDC(v80, v81);
      Component_object[2].klass = (Il2CppClass *)v75;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&Component_object[2], (int32_t)v75, v82, v83, v84, v85, v86, v87);
      *(_OWORD *)&Component_object[2].monitor = v177;
      *(_OWORD *)&Component_object[4].monitor = v177;
    }
    GameObject = GameObjectExtensions__FindGameObject(v75, (System_String_o *)StringLiteral_23269/*"nameLabel"*/, 0);
    if ( !GameObject )
      sub_2213CDC(0, v89);
    v90 = UnityEngine_GameObject__GetComponent_object_(
            GameObject,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_2213CDC(v90, v91);
    v92 = (UILabel_o *)v90;
    if ( !v90 )
      sub_2213CDC(0, v91);
    UILabel__set_text((UILabel_o *)v90, (System_String_o *)current[1].klass, 0);
    klass = (System_String_o *)current[1].klass;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93, v94);
    v96 = LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"MYROOM_MENU_NAME_14"*/, 0);
    if ( System_String__op_Equality(klass, v96, 0) )
    {
      UILabel__set_overflowMethod(v92, 2, 0);
      v99 = MyRoomListControl_TypeInfo;
      if ( !*(&MyRoomListControl_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo, v97, v98);
        v99 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_56591096(v92, v99->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0.0, 0);
      this->fields.exchangeSvtCoinMenuBoard = v75;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.exchangeSvtCoinMenuBoard,
        (int32_t)v75,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3598/*"CLICK_FAVORITE_CHANGE"*/, 0) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.favoriteChangeMenuBtn,
        (int32_t)Component_object,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      this->fields.favoriteTxtLb = v92;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.favoriteTxtLb,
        (int32_t)v92,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
    }
    v119 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v106, v107);
      v119 = BalanceConfig_TypeInfo;
    }
    GalleryReleaseQuestId = v119->static_fields->GalleryReleaseQuestId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v106, v107);
    IsQuestClear_47284152 = CondType__IsQuestClear_47284152(GalleryReleaseQuestId, -1, 0, 0);
    if ( !(IsQuestClear_47284152
         | !System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3601/*"CLICK_GALLERY"*/, 0)) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v122, v123);
      v124 = LocalizationManager__Get((System_String_o *)StringLiteral_9223/*"MYROOM_NOT_OPEN_GALLERY"*/, 0);
      v125 = UnityEngine_GameObject__GetComponent_object_(
               v75,
               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
      if ( !v125 )
        sub_2213CDC(0, v126);
      MyRoomListItem__EnableBlackOutPanel((MyRoomListItem_o *)v125, v124, v127);
      v135 = MyRoomListControl___c_TypeInfo;
      LODWORD(current[1].monitor) = 1;
      if ( !*(&v135->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v135, v128, v129);
        v135 = MyRoomListControl___c_TypeInfo;
      }
      static_fields = v135->static_fields;
      _9__17_0 = static_fields->__9__17_0;
      if ( !_9__17_0 )
      {
        if ( !*(&v135->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v135, v128, v129);
          static_fields = MyRoomListControl___c_TypeInfo->static_fields;
        }
        v138 = (Il2CppObject *)static_fields->__9;
        _9__17_0 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(_9__17_0, v138, (intptr_t)Method_MyRoomListControl___c__Awake_b__17_0__, 0);
        v139 = MyRoomListControl___c_TypeInfo->static_fields;
        v139->__9__17_0 = _9__17_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v139->__9__17_0,
          (int32_t)_9__17_0,
          v140,
          v141,
          v142,
          v143,
          v144,
          v145);
      }
      current[2].monitor = _9__17_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&current[2].monitor,
        (int32_t)_9__17_0,
        v129,
        v130,
        v131,
        v132,
        v133,
        v134);
      if ( !Component_object )
        sub_2213CDC(v146, v122);
      *(_OWORD *)&Component_object[3].monitor = v177;
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v148 = UnityEngine_GameObject__GetComponent_object_(
                 v75,
                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v148 )
          sub_2213CDC(0, v149);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v148, 0, 0);
        if ( !Component_object )
          sub_2213CDC(v150, v151);
        v152 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v153 = (EventDelegate_Callback_o *)current[2].monitor;
        v154 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
        EventDelegate___ctor_56337280(v154, v153, 0);
        if ( !v152
          || (items = v152->fields._items,
              v164 = Method_System_Collections_Generic_List_EventDelegate__Add__,
              ++v152->fields._version,
              !items) )
        {
          sub_2213CDC(v155, v156);
        }
        size = v152->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v152,
            (Il2CppObject *)v154,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
        }
        else
        {
          v166 = &items->obj.klass + size;
          v152->fields._size = size + 1;
          v166[4] = (Il2CppClass *)v154;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v166 + 4), (int32_t)v154, v157, v158, v159, v160, v161, v162);
        }
      }
    }
    else
    {
      v167 = UnityEngine_GameObject__GetComponent_object_(
               v75,
               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v167 )
        sub_2213CDC(0, v168);
      v175 = current[2].klass;
      v167[2].monitor = v175;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v167[2].monitor,
        (int32_t)v175,
        v169,
        v170,
        v171,
        v172,
        v173,
        v174);
    }
    v176 = MyRoomListControl_TypeInfo;
    if ( !*(&MyRoomListControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo, v122, v123);
      v176 = MyRoomListControl_TypeInfo;
    }
    v68 = v68 - v176->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v179,
    (const MethodInfo_40FB540 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_42891620(this->fields.itemDummy, 0.0, v68, 0.0, 0);
}


void MyRoomListControl__ClickFavoriteChange(MyRoomListControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x20
  __int64 v11; // x2
  Il2CppObject *fsmTemplate; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v16; // x22

  if ( (byte_596B945 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_2213A60(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_2213A60(&OpeningMovieData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3598/*"CLICK_FAVORITE_CHANGE"*/);
    sub_2213A60(&StringLiteral_9206/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B945 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3598/*"CLICK_FAVORITE_CHANGE"*/, 0);
      return;
    }
LABEL_18:
    sub_2213CDC(myRoomFsm, method);
  }
  v4 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_MyRoomListControl_ClickFavoriteChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !*(&OpeningMovieData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo, v8, v9);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v11);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9206/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0);
  v14 = System_String__Format(v13, fsmTemplate, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v14,
    v16,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    0.0,
    0,
    0);
}


void MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *exchangeSvtCoinMenuBoard; // x20
  UnityEngine_GameObject_o *itemDummy; // x20
  float LocalPositionY; // s0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x1
  UIScrollView_o *menuListScrollView; // x0

  if ( (byte_596B947 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B947 = 1;
  }
  exchangeSvtCoinMenuBoard = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(exchangeSvtCoinMenuBoard, 0, 0) )
  {
    itemDummy = this->fields.itemDummy;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(this->fields.exchangeSvtCoinMenuBoard, 0);
    GameObjectExtensions__SetLocalPositionY(itemDummy, LocalPositionY, 0);
    v9 = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(v9, 0);
    menuListScrollView = this->fields.menuListScrollView;
    if ( !menuListScrollView
      || (((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, double, double))menuListScrollView->klass->vtable._9_SetDragAmount.methodPtr)(
            menuListScrollView,
            0,
            menuListScrollView->klass->vtable._9_SetDragAmount.method,
            0.0,
            0.0),
          (menuListScrollView = this->fields.menuListScrollView) == 0)
      || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))menuListScrollView->klass->vtable._8_UpdateScrollbars.methodPtr)(
            menuListScrollView,
            1,
            menuListScrollView->klass->vtable._8_UpdateScrollbars.method),
          (menuListScrollView = this->fields.menuListScrollView) == 0) )
    {
      sub_2213CDC(menuListScrollView, v10);
    }
    UIScrollView__UpdatePosition(menuListScrollView, 0);
  }
}


void MyRoomListControl__SetBtnName(
        MyRoomListControl_o *this,
        UnityEngine_GameObject_array *items,
        System_String_o *prefixStr,
        const MethodInfo *method)
{
  int max_length; // w8
  unsigned int v7; // w9
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x22
  int v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596B944 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B944 = 1;
  }
  v15 = 0;
  if ( !items )
    goto LABEL_17;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_2213CE4(this);
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = System_Int32__ToString((int32_t)&v15, 0);
        v14 = System_String__Concat_75651716(prefixStr, v11, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
        this = (MyRoomListControl_o *)LocalizationManager__Get(v14, 0);
        if ( !Component_object )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_object, (System_String_o *)this, 0);
      }
      max_length = items->max_length;
      v7 = ++v15;
      if ( v15 >= max_length )
        return;
    }
LABEL_17:
    sub_2213CDC(this, items);
  }
}


void MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 _47388504; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v6; // x2
  MyRoomListControl_o *v7; // x0
  const MethodInfo *v8; // x3
  void *noticeComp; // x0
  __int64 v10; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  TerminalPramsManager_c *v14; // x0
  __int64 v15; // x2
  float v16; // s8
  TerminalPramsManager_c *v17; // x0
  System_String_o *TransitionScrollTabName_k__BackingField; // x20
  System_String_o *v19; // x20
  __int64 v20; // x2
  TerminalPramsManager_c *v21; // x0
  int32_t childCount; // w0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int v29; // w26
  int32_t v30; // w21
  int v31; // w27
  int32_t i; // w22
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *Child; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  float v40; // s8
  MissionNaviTransitionBoardItem_c *v41; // x20
  TerminalPramsManager_c *v42; // x0
  MissionNaviTransitionBoardItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v45; // x8
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B942 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_9222/*"MYROOM_NOTICE_NAME_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B942 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  _47388504 = TutorialFlag__Get_47388504(106, 0);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _47388504;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_47388504, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_9222/*"MYROOM_NOTICE_NAME_"*/, v8);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_67;
  noticeComp = myRoomControl->fields.noticeComp;
  if ( !noticeComp )
    goto LABEL_67;
  noticeComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noticeComp, 0);
  if ( !noticeComp )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noticeComp, 0, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
  if ( !byte_596B977 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596B977 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v16 = 0.0;
  if ( !System_String__IsNullOrEmpty(v14->static_fields->_TransitionScrollTabName_k__BackingField, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v15);
    if ( !byte_596B977 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596B977 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v15);
      v17 = TerminalPramsManager_TypeInfo;
    }
    TransitionScrollTabName_k__BackingField = v17->static_fields->_TransitionScrollTabName_k__BackingField;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v15);
    v19 = LocalizationManager__Get(TransitionScrollTabName_k__BackingField, 0);
    if ( System_String__op_Inequality(v19, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v20);
      if ( !byte_596B977 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596B977 = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v20);
        v21 = TerminalPramsManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v19, v21->static_fields->_TransitionScrollTabName_k__BackingField, 0) )
      {
        noticeComp = this->fields.myRoomListGrid;
        if ( !noticeComp )
          goto LABEL_67;
        noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0);
        if ( !noticeComp )
          goto LABEL_67;
        childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)noticeComp, 0);
        v29 = childCount - 1;
        if ( childCount < 1 )
        {
          v40 = 0.0;
        }
        else
        {
          v30 = childCount;
          v31 = 0;
          for ( i = 0; i != v30; ++i )
          {
            noticeComp = this->fields.myRoomListGrid;
            if ( !noticeComp )
              goto LABEL_67;
            noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0);
            if ( !noticeComp )
              goto LABEL_67;
            Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)noticeComp, i, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
            noticeComp = (void *)UnityEngine_Object__op_Equality(Child, 0, 0);
            if ( ((unsigned __int8)noticeComp & 1) == 0 )
            {
              if ( !Child )
                goto LABEL_67;
              Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)Child,
                                                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
              noticeComp = (void *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
              if ( ((unsigned __int8)noticeComp & 1) != 0 )
              {
                if ( !Component_object )
                  goto LABEL_67;
                monitor = (System_String_o **)Component_object[1].monitor;
                if ( !monitor )
                  goto LABEL_67;
                if ( System_String__op_Equality(monitor[52], v19, 0) )
                  break;
              }
              ++v31;
            }
          }
          v40 = (float)v31;
        }
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v23);
        v41 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
        if ( !byte_596A093 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596A093 = 1;
        }
        v42 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v23);
          v42 = TerminalPramsManager_TypeInfo;
        }
        v16 = v40 / (float)v29;
        p_TransitionScrollTabName_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v42->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = v41;
        sub_2213A04(p_TransitionScrollTabName_k__BackingField, (int32_t)v41, v23, v24, v25, v26, v27, v28);
      }
    }
  }
  noticeComp = this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_67;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD, double, float))(*(_QWORD *)noticeComp + 456LL))(
    noticeComp,
    0,
    *(_QWORD *)(*(_QWORD *)noticeComp + 464LL),
    0.0,
    v16);
  noticeComp = this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_67;
  (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)noticeComp + 440LL))(
    noticeComp,
    1,
    *(_QWORD *)(*(_QWORD *)noticeComp + 448LL));
  noticeComp = this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_67;
  UIScrollView__UpdatePosition((UIScrollView_o *)noticeComp, 0);
  if ( this->fields.isUseFavorite )
    return;
  noticeComp = this->fields.favoriteChangeMenuBtn;
  if ( !noticeComp )
    goto LABEL_67;
  v46.fields.r = 0.5;
  v46.fields.g = 0.5;
  v46.fields.b = 0.5;
  v46.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v46, 0);
  favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
  if ( !favoriteChangeMenuBtn
    || (favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_E9D170,
        (v45 = this->fields.favoriteChangeMenuBtn) == 0)
    || (v45->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_E9D170,
        (noticeComp = this->fields.favoriteTxtLb) == 0) )
  {
LABEL_67:
    sub_2213CDC(noticeComp, v10);
  }
  UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)((char *)noticeComp + 492), 0);
}


void MyRoomListControl__SetupScrollListBtn(MyRoomListControl_o *this, UIGrid_o *grid, const MethodInfo *method)
{
  int32_t childCount; // w0
  int32_t v10; // w20
  int32_t v11; // w21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *Child; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Component_object; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *ComponentInChildren_object__58855044; // x22
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  MyRoomListControl_c *v35; // x8
  UnityEngine_GameObject_o *v36; // x22
  __int128 v37; // [xsp+0h] [xbp-70h]

  if ( (byte_596B943 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_2213A60(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B943 = 1;
  }
  if ( !grid )
    goto LABEL_31;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
  if ( !this )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    __asm { FMOV            V0.4S, #1.0 }
    v10 = childCount;
    v11 = 0;
    v37 = _Q0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v11, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Child )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Child,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__58855044(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            break;
          ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[33].methodPtr)(
            Component_object,
            Component_object->klass->vtable[33].method);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0);
          v21 = GameObjectExtensions__SafeGetComponent_object_(
                  gameObject,
                  (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0);
          if ( !v21 )
            break;
          v21[2].klass = (Il2CppClass *)this;
          v28 = v21 + 2;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)v28, (int32_t)this, v22, v23, v24, v25, v26, v27);
          *(_OWORD *)&v28->monitor = v37;
          *(_OWORD *)&v28[2].monitor = v37;
        }
        ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__58855044,
                                        0,
                                        0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__58855044 )
            break;
          v32 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__58855044,
                  0);
          v35 = MyRoomListControl_TypeInfo;
          v36 = v32;
          if ( !*(&MyRoomListControl_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo, v33, v34);
            v35 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v36, v35->static_fields->BTN_LABEL_POS, 0);
        }
      }
      if ( v10 == ++v11 )
        return;
    }
LABEL_31:
    sub_2213CDC(this, grid);
  }
}


void MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596B946 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B946 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void MyRoomListControl_MainItemInfo___ctor(
        MyRoomListControl_MainItemInfo_o *this,
        System_String_o *name,
        int32_t type,
        System_String_o *eventName,
        EventDelegate_Callback_o *clickAction,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.Name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)name, v11, v12, v13, v14, v15, v16);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.EventName,
    (int32_t)eventName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.ClickAction = clickAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ClickAction,
    (int32_t)clickAction,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void MyRoomListControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B949 & 1) == 0 )
  {
    sub_2213A60(&MyRoomListControl___c_TypeInfo);
    byte_596B949 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MyRoomListControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomListControl___c_TypeInfo->static_fields->__9 = (struct MyRoomListControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MyRoomListControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyRoomListControl___c___ctor(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomListControl___c___Awake_b__17_0(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_596B94A & 1) == 0 )
  {
    sub_2213A60(&Method_MyRoomListControl___c__Awake_b__17_0__);
    byte_596B94A = 1;
  }
  v2 = Method_MyRoomListControl___c__Awake_b__17_0__;
  if ( (*((_BYTE *)Method_MyRoomListControl___c__Awake_b__17_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_MyRoomListControl___c__Awake_b__17_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}