void MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4D2BCDB & 1) == 0 )
  {
    sub_1C93AD4(&MyRoomListControl_TypeInfo);
    byte_4D2BCDB = 1;
  }
  static_fields = MyRoomListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BTN_LABEL_POS.fields.x = 0x4080000000000000LL;
  static_fields->BTN_LABEL_POS.fields.z = 0.0;
  *(_QWORD *)&MyRoomListControl_TypeInfo->static_fields->ITEM_OFFSET_SIZE_Y = 0x43B7800042F00000LL;
}


void MyRoomListControl___ctor(MyRoomListControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomListControl__Awake(MyRoomListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  System_String_o *v4; // x22
  MyRoomListControl_MainItemInfo_o *v5; // x21
  const MethodInfo *v6; // x5
  int *EntityDefinitely; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  MyRoomListControl_MainItemInfo_o *v10; // x22
  const MethodInfo *v11; // x5
  System_String_o *v12; // x21
  MyRoomListControl_MainItemInfo_o *v13; // x22
  const MethodInfo *v14; // x5
  System_String_o *v15; // x21
  MyRoomListControl_MainItemInfo_o *v16; // x22
  const MethodInfo *v17; // x5
  System_String_o *v18; // x21
  MyRoomListControl_MainItemInfo_o *v19; // x22
  const MethodInfo *v20; // x5
  System_String_o *v21; // x21
  MyRoomListControl_MainItemInfo_o *v22; // x22
  const MethodInfo *v23; // x5
  System_String_o *v24; // x21
  EventDelegate_Callback_o *v25; // x22
  MyRoomListControl_MainItemInfo_o *v26; // x23
  const MethodInfo *v27; // x5
  System_String_o *v28; // x21
  MyRoomListControl_MainItemInfo_o *v29; // x22
  const MethodInfo *v30; // x5
  System_String_o *v31; // x21
  MyRoomListControl_MainItemInfo_o *v32; // x22
  const MethodInfo *v33; // x5
  BalanceConfig_c *v34; // x0
  System_String_o *v35; // x21
  MyRoomListControl_MainItemInfo_o *v36; // x22
  const MethodInfo *v37; // x5
  System_String_o *v38; // x21
  MyRoomListControl_MainItemInfo_o *v39; // x22
  const MethodInfo *v40; // x5
  System_String_o *v41; // x21
  MyRoomListControl_MainItemInfo_o *v42; // x22
  const MethodInfo *v43; // x5
  System_String_o *v44; // x21
  MyRoomListControl_MainItemInfo_o *v45; // x22
  const MethodInfo *v46; // x5
  Il2CppObject *Master_object; // x22
  unsigned __int64 v48; // x28
  __int64 v49; // x8
  BalanceConfig_c *v50; // x8
  int64_t v51; // x23
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v53; // x21
  MyRoomListControl_MainItemInfo_o *v54; // x22
  const MethodInfo *v55; // x5
  float v61; // s8
  Il2CppObject *current; // x28
  Il2CppObject *listItemBase; // x23
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  UnityEngine_GameObject_o *v66; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v68; // x25
  _BOOL8 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  UILabel_o *v83; // x25
  System_String_o *klass; // x26
  System_String_o *v85; // x1
  MyRoomListControl_c *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  BalanceConfig_c *v105; // x0
  int32_t GalleryReleaseQuestId; // w25
  bool IsQuestClear_41038904; // w25
  System_String_o *v108; // x25
  Il2CppObject *v109; // x0
  __int64 v110; // x1
  const MethodInfo *v111; // x2
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  MyRoomListControl___c_c *v118; // x8
  EventDelegate_Callback_o *_9__17_0; // x25
  Il2CppObject *v120; // x26
  struct MyRoomListControl___c_StaticFields *static_fields; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  __int64 v128; // x0
  __int64 v129; // x1
  int monitor; // w8
  Il2CppObject *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x0
  __int64 v134; // x1
  System_Collections_Generic_List_object__o *v135; // x23
  EventDelegate_Callback_o *v136; // x25
  EventDelegate_o *v137; // x24
  __int64 v138; // x0
  __int64 v139; // x1
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  struct System_Object_array *items; // x8
  _QWORD *v147; // x9
  __int64 size; // x10
  Il2CppClass **v149; // x0
  Il2CppObject *v150; // x0
  __int64 v151; // x1
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  Il2CppClass *v158; // x1
  MyRoomListControl_c *v159; // x0
  __int128 v160; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v161; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v162; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D2BCD4 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_1C93AD4(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C93AD4(&MyRoomListControl_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_MyRoomListControl___c__Awake_b__17_0__);
    sub_1C93AD4(&MyRoomListControl___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_8899/*"MYROOM_MENU_NAME_3"*/);
    sub_1C93AD4(&StringLiteral_8907/*"MYROOM_NOT_OPEN_GALLERY"*/);
    sub_1C93AD4(&StringLiteral_22421/*"nameLabel"*/);
    sub_1C93AD4(&StringLiteral_3513/*"CLICK_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8891/*"MYROOM_MENU_NAME_1"*/);
    sub_1C93AD4(&StringLiteral_3482/*"CLICK_GAMEOPTION"*/);
    sub_1C93AD4(&StringLiteral_8897/*"MYROOM_MENU_NAME_15"*/);
    sub_1C93AD4(&StringLiteral_8900/*"MYROOM_MENU_NAME_4"*/);
    sub_1C93AD4(&StringLiteral_3491/*"CLICK_NOTICE"*/);
    sub_1C93AD4(&StringLiteral_3467/*"CLICK_CONTINUE_DEVICE"*/);
    sub_1C93AD4(&StringLiteral_3503/*"CLICK_SOUND_PLAYER"*/);
    sub_1C93AD4(&StringLiteral_8896/*"MYROOM_MENU_NAME_14"*/);
    sub_1C93AD4(&StringLiteral_3478/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C93AD4(&StringLiteral_8903/*"MYROOM_MENU_NAME_7"*/);
    sub_1C93AD4(&StringLiteral_8905/*"MYROOM_MENU_NAME_9"*/);
    sub_1C93AD4(&StringLiteral_3456/*"CLICK_ACCOUNT_LINKAGE"*/);
    sub_1C93AD4(&StringLiteral_8893/*"MYROOM_MENU_NAME_11"*/);
    sub_1C93AD4(&StringLiteral_3481/*"CLICK_GALLERY"*/);
    sub_1C93AD4(&StringLiteral_8898/*"MYROOM_MENU_NAME_2"*/);
    sub_1C93AD4(&StringLiteral_3487/*"CLICK_MATERIAL"*/);
    sub_1C93AD4(&StringLiteral_8901/*"MYROOM_MENU_NAME_5"*/);
    sub_1C93AD4(&StringLiteral_8904/*"MYROOM_MENU_NAME_8"*/);
    sub_1C93AD4(&StringLiteral_3493/*"CLICK_PROFILE"*/);
    sub_1C93AD4(&StringLiteral_3498/*"CLICK_SERIAL_CODE"*/);
    sub_1C93AD4(&StringLiteral_8894/*"MYROOM_MENU_NAME_12"*/);
    sub_1C93AD4(&StringLiteral_8902/*"MYROOM_MENU_NAME_6"*/);
    sub_1C93AD4(&StringLiteral_3500/*"CLICK_SERVANT_MENU"*/);
    sub_1C93AD4(&StringLiteral_3514/*"CLICK_USER_ITEM"*/);
    sub_1C93AD4(&StringLiteral_3475/*"CLICK_EXCHANGE_SVT_COIN"*/);
    sub_1C93AD4(&StringLiteral_8895/*"MYROOM_MENU_NAME_13"*/);
    byte_4D2BCD4 = 1;
  }
  memset(&v162, 0, sizeof(v162));
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8893/*"MYROOM_MENU_NAME_11"*/, 0);
  v5 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v5, v4, 0, (System_String_o *)StringLiteral_3487/*"CLICK_MATERIAL"*/, 0, v6);
  if ( !v3 )
LABEL_88:
    sub_1C93D2C(EntityDefinitely, v8);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v5,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8894/*"MYROOM_MENU_NAME_12"*/, 0);
  v10 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v10, v9, 0, (System_String_o *)StringLiteral_3500/*"CLICK_SERVANT_MENU"*/, 0, v11);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v10,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8897/*"MYROOM_MENU_NAME_15"*/, 0);
  v13 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v13, v12, 0, (System_String_o *)StringLiteral_3481/*"CLICK_GALLERY"*/, 0, v14);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v13,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8891/*"MYROOM_MENU_NAME_1"*/, 0);
  v16 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v16, v15, 0, (System_String_o *)StringLiteral_3514/*"CLICK_USER_ITEM"*/, 0, v17);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v16,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8898/*"MYROOM_MENU_NAME_2"*/, 0);
  v19 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v19, v18, 0, (System_String_o *)StringLiteral_3503/*"CLICK_SOUND_PLAYER"*/, 0, v20);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v19,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8899/*"MYROOM_MENU_NAME_3"*/, 0);
  v22 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v22, v21, 0, (System_String_o *)StringLiteral_3493/*"CLICK_PROFILE"*/, 0, v23);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v22,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MYROOM_MENU_NAME_4"*/, 0);
  v25 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v25, (Il2CppObject *)this, (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__, 0);
  v26 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v26, v24, 1, (System_String_o *)StringLiteral_3478/*"CLICK_FAVORITE_CHANGE"*/, v25, v27);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v26,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8901/*"MYROOM_MENU_NAME_5"*/, 0);
  v29 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v29, v28, 0, (System_String_o *)StringLiteral_3491/*"CLICK_NOTICE"*/, 0, v30);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v29,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8902/*"MYROOM_MENU_NAME_6"*/, 0);
  v32 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v32, v31, 0, (System_String_o *)StringLiteral_3482/*"CLICK_GAMEOPTION"*/, 0, v33);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v32,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v34 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  if ( v34->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8903/*"MYROOM_MENU_NAME_7"*/, 0);
    v36 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v36, v35, 0, (System_String_o *)StringLiteral_3498/*"CLICK_SERIAL_CODE"*/, 0, v37);
    System_Collections_Generic_HashSet_object___Add(
      v3,
      (Il2CppObject *)v36,
      (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8904/*"MYROOM_MENU_NAME_8"*/, 0);
  v39 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v39, v38, 0, (System_String_o *)StringLiteral_3467/*"CLICK_CONTINUE_DEVICE"*/, 0, v40);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v39,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8895/*"MYROOM_MENU_NAME_13"*/, 0);
  v42 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v42, v41, 0, (System_String_o *)StringLiteral_3456/*"CLICK_ACCOUNT_LINKAGE"*/, 0, v43);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v42,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MYROOM_MENU_NAME_9"*/, 0);
  v45 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v45, v44, 0, (System_String_o *)StringLiteral_3513/*"CLICK_TITLE"*/, 0, v46);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v45,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  v48 = 0;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v49 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 472LL);
    if ( !v49 )
      goto LABEL_88;
    if ( (__int64)v48 >= *(int *)(v49 + 24) )
      goto LABEL_37;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    EntityDefinitely = (int *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityDefinitely = (int *)NetworkManager_TypeInfo;
    }
    v50 = BalanceConfig_TypeInfo;
    v51 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL);
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v50 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v50->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_88;
    if ( v48 >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      sub_1C93D34(EntityDefinitely);
    if ( !Master_object )
      goto LABEL_88;
    EntityDefinitely = (int *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)Master_object,
                                v51,
                                ExchangeSvtCoinItemIds->m_Items[v48],
                                0);
    if ( !EntityDefinitely )
      goto LABEL_88;
    ++v48;
  }
  while ( EntityDefinitely[7] < 1 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8896/*"MYROOM_MENU_NAME_14"*/, 0);
  v54 = (MyRoomListControl_MainItemInfo_o *)sub_1C93D20(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v54, v53, 0, (System_String_o *)StringLiteral_3475/*"CLICK_EXCHANGE_SVT_COIN"*/, 0, v55);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v54,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v161,
    v3,
    (const MethodInfo_372C334 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v162 = v161;
  __asm { FMOV            V0.4S, #1.0 }
  v61 = 0.0;
  v160 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v162,
            (const MethodInfo_35F9AA8 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v162.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v64 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v66 = (UnityEngine_GameObject_o *)v64;
    if ( !v64 )
      sub_1C93D2C(0, v65);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v64, 1, 0);
    GameObjectExtensions__SafeSetParent(v66, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0);
    GameObjectExtensions__SetLocalPosition_36745272(v66, 0.0, v61, 0.0, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v66,
                         (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v68 = UnityEngine_GameObject__GetComponent_object_(
            v66,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v69 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v68, 0, 0);
    if ( v69 )
    {
      if ( !v68 )
        sub_1C93D2C(v69, v70);
      v71 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v68->klass->vtable[33].methodPtr)(
              v68,
              v68->klass->vtable[33].method);
      if ( !Component_object )
        sub_1C93D2C(v71, v72);
      Component_object[2].klass = (Il2CppClass *)v66;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[2], (int32_t)v66, v73, v74, v75, v76, v77, v78);
      *(_OWORD *)&Component_object[2].monitor = v160;
      *(_OWORD *)&Component_object[4].monitor = v160;
    }
    GameObject = GameObjectExtensions__FindGameObject(v66, (System_String_o *)StringLiteral_22421/*"nameLabel"*/, 0);
    if ( !GameObject )
      sub_1C93D2C(0, v80);
    v81 = UnityEngine_GameObject__GetComponent_object_(
            GameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1C93D2C(v81, v82);
    v83 = (UILabel_o *)v81;
    if ( !v81 )
      sub_1C93D2C(0, v82);
    UILabel__set_text((UILabel_o *)v81, (System_String_o *)current[1].klass, 0);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_8896/*"MYROOM_MENU_NAME_14"*/, 0);
    if ( System_String__op_Equality(klass, v85, 0) )
    {
      UILabel__set_overflowMethod(v83, 2, 0);
      v86 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
        v86 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_50252316(v83, v86->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0.0, 0);
      this->fields.exchangeSvtCoinMenuBoard = v66;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.exchangeSvtCoinMenuBoard,
        (int32_t)v66,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3478/*"CLICK_FAVORITE_CHANGE"*/, 0) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.favoriteChangeMenuBtn,
        (int32_t)Component_object,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
      this->fields.favoriteTxtLb = v83;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.favoriteTxtLb,
        (int32_t)v83,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
    }
    v105 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v105 = BalanceConfig_TypeInfo;
    }
    GalleryReleaseQuestId = v105->static_fields->GalleryReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_41038904 = CondType__IsQuestClear_41038904(GalleryReleaseQuestId, -1, 0, 0);
    if ( !(IsQuestClear_41038904
         | !System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3481/*"CLICK_GALLERY"*/, 0)) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v108 = LocalizationManager__Get((System_String_o *)StringLiteral_8907/*"MYROOM_NOT_OPEN_GALLERY"*/, 0);
      v109 = UnityEngine_GameObject__GetComponent_object_(
               v66,
               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
      if ( !v109 )
        sub_1C93D2C(0, v110);
      MyRoomListItem__EnableBlackOutPanel((MyRoomListItem_o *)v109, v108, v111);
      LODWORD(current[1].monitor) = 1;
      v118 = MyRoomListControl___c_TypeInfo;
      if ( !MyRoomListControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl___c_TypeInfo);
        v118 = MyRoomListControl___c_TypeInfo;
      }
      _9__17_0 = v118->static_fields->__9__17_0;
      if ( !_9__17_0 )
      {
        if ( !v118->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v118);
          v118 = MyRoomListControl___c_TypeInfo;
        }
        v120 = (Il2CppObject *)v118->static_fields->__9;
        _9__17_0 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(_9__17_0, v120, (intptr_t)Method_MyRoomListControl___c__Awake_b__17_0__, 0);
        static_fields = MyRoomListControl___c_TypeInfo->static_fields;
        static_fields->__9__17_0 = _9__17_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__17_0,
          (int32_t)_9__17_0,
          v122,
          v123,
          v124,
          v125,
          v126,
          v127);
      }
      current[2].monitor = _9__17_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&current[2].monitor,
        (int32_t)_9__17_0,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117);
      if ( !Component_object )
        sub_1C93D2C(v128, v129);
      *(_OWORD *)&Component_object[3].monitor = v160;
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v131 = UnityEngine_GameObject__GetComponent_object_(
                 v66,
                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v131 )
          sub_1C93D2C(0, v132);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v131, 0, 0);
        if ( !Component_object )
          sub_1C93D2C(v133, v134);
        v135 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v136 = (EventDelegate_Callback_o *)current[2].monitor;
        v137 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
        EventDelegate___ctor_49997180(v137, v136, 0);
        if ( !v135 )
          sub_1C93D2C(v138, v139);
        items = v135->fields._items;
        v147 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v135->fields._version;
        if ( !items )
          sub_1C93D2C(v138, v139);
        size = v135->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v135,
            (Il2CppObject *)v137,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
        }
        else
        {
          v149 = &items->obj.klass + size;
          v135->fields._size = size + 1;
          v149[4] = (Il2CppClass *)v137;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v149 + 4), (int32_t)v137, v140, v141, v142, v143, v144, v145);
        }
      }
    }
    else
    {
      v150 = UnityEngine_GameObject__GetComponent_object_(
               v66,
               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v150 )
        sub_1C93D2C(0, v151);
      v158 = current[2].klass;
      v150[2].monitor = v158;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v150[2].monitor, (int32_t)v158, v152, v153, v154, v155, v156, v157);
    }
    v159 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v159 = MyRoomListControl_TypeInfo;
    }
    v61 = v61 - v159->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v162,
    (const MethodInfo_35F9AA4 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_36745272(this->fields.itemDummy, 0.0, v61, 0.0, 0);
}


void MyRoomListControl__ClickFavoriteChange(MyRoomListControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Master_object; // x20
  Il2CppObject *fsmTemplate; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x22

  if ( (byte_4D2BCD8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C93AD4(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_1C93AD4(&OpeningMovieData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_3478/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C93AD4(&StringLiteral_8890/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2BCD8 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3478/*"CLICK_FAVORITE_CHANGE"*/, 0);
      return;
    }
LABEL_18:
    sub_1C93D2C(myRoomFsm, method);
  }
  v4 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_MyRoomListControl_ClickFavoriteChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_3463274 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8890/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0);
  v9 = System_String__Format(v8, fsmTemplate, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v9,
    v11,
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
  UnityEngine_Object_o *exchangeSvtCoinMenuBoard; // x20
  UnityEngine_GameObject_o *itemDummy; // x20
  float LocalPositionY; // s0
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  UIScrollView_o *menuListScrollView; // x0

  if ( (byte_4D2BCDA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BCDA = 1;
  }
  exchangeSvtCoinMenuBoard = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(exchangeSvtCoinMenuBoard, 0, 0) )
  {
    itemDummy = this->fields.itemDummy;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(this->fields.exchangeSvtCoinMenuBoard, 0);
    GameObjectExtensions__SetLocalPositionY(itemDummy, LocalPositionY, 0);
    v6 = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v6, 0);
    menuListScrollView = this->fields.menuListScrollView;
    if ( !menuListScrollView
      || (((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, float))menuListScrollView->klass->vtable._9_SetDragAmount.methodPtr)(
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
      sub_1C93D2C(menuListScrollView, v7);
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
  int max_length; // w9
  int v7; // w8
  Il2CppObject *Component_object; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  int v11; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2BCD7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BCD7 = 1;
  }
  v11 = 0;
  if ( !items )
    goto LABEL_17;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C93D34(this);
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = System_Int32__ToString((int32_t)&v11, 0);
        v10 = System_String__Concat_64425724(prefixStr, v9, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (MyRoomListControl_o *)LocalizationManager__Get(v10, 0);
        if ( !Component_object )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_object, (System_String_o *)this, 0);
      }
      v7 = v11 + 1;
      v11 = v7;
      max_length = items->max_length;
      if ( v7 >= max_length )
        return;
    }
LABEL_17:
    sub_1C93D2C(this, items);
  }
}


void MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  long double v2; // q8
  _BOOL8 _41140656; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v6; // x2
  MyRoomListControl_o *v7; // x0
  const MethodInfo *v8; // x3
  void *noticeComp; // x0
  __int64 v10; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  System_String_o *TransitionScrollTabName_k__BackingField; // x20
  System_String_o *v15; // x20
  TerminalPramsManager_c *v16; // x0
  int32_t childCount; // w0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int v24; // w26
  int32_t v25; // w21
  int v26; // w27
  int32_t v27; // w22
  UnityEngine_Object_o *Child; // x23
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  __int64 v31; // x20
  TerminalPramsManager_c *v32; // x0
  GrandQuestFolderBoardItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v35; // x8
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2BCD5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_8906/*"MYROOM_NOTICE_NAME_"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2BCD5 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _41140656 = TutorialFlag__Get_41140656(106, 0);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _41140656;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_41140656, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_8906/*"MYROOM_NOTICE_NAME_"*/, v8);
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
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2BD03 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2BD03 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  LODWORD(v2) = 0;
  if ( !System_String__IsNullOrEmpty(v12->static_fields->_TransitionScrollTabName_k__BackingField, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2BD03 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2BD03 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    TransitionScrollTabName_k__BackingField = v13->static_fields->_TransitionScrollTabName_k__BackingField;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get(TransitionScrollTabName_k__BackingField, 0);
    if ( System_String__op_Inequality(v15, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2BD03 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2BD03 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v15, v16->static_fields->_TransitionScrollTabName_k__BackingField, 0) )
      {
        noticeComp = this->fields.myRoomListGrid;
        if ( !noticeComp )
          goto LABEL_67;
        noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0);
        if ( !noticeComp )
          goto LABEL_67;
        childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)noticeComp, 0);
        v24 = childCount - 1;
        if ( childCount >= 1 )
        {
          v25 = childCount;
          v26 = 0;
          v27 = 0;
          while ( 1 )
          {
            noticeComp = this->fields.myRoomListGrid;
            if ( !noticeComp )
              break;
            noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0);
            if ( !noticeComp )
              break;
            Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(
                                              (UnityEngine_Transform_o *)noticeComp,
                                              v27,
                                              0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            noticeComp = (void *)UnityEngine_Object__op_Equality(Child, 0, 0);
            if ( ((unsigned __int8)noticeComp & 1) == 0 )
            {
              if ( !Child )
                break;
              Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)Child,
                                                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              noticeComp = (void *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
              if ( ((unsigned __int8)noticeComp & 1) != 0 )
              {
                if ( !Component_object )
                  break;
                monitor = (System_String_o **)Component_object[1].monitor;
                if ( !monitor )
                  break;
                if ( System_String__op_Equality(monitor[52], v15, 0) )
                  goto LABEL_51;
              }
              ++v26;
            }
            if ( v25 == ++v27 )
              goto LABEL_51;
          }
LABEL_67:
          sub_1C93D2C(noticeComp, v10);
        }
        v26 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = StringLiteral_1/*""*/;
        if ( !byte_4D2A6F1 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2A6F1 = 1;
        }
        v32 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v32 = TerminalPramsManager_TypeInfo;
        }
        *(float *)&v2 = (float)v26 / (float)v24;
        p_TransitionScrollTabName_k__BackingField = (GrandQuestFolderBoardItem_o *)&v32->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v31;
        sub_1C93A78(p_TransitionScrollTabName_k__BackingField, v31, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  noticeComp = this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_67;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD, float, long double))(*(_QWORD *)noticeComp + 456LL))(
    noticeComp,
    0,
    *(_QWORD *)(*(_QWORD *)noticeComp + 464LL),
    0.0,
    v2);
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
  if ( !this->fields.isUseFavorite )
  {
    noticeComp = this->fields.favoriteChangeMenuBtn;
    if ( !noticeComp )
      goto LABEL_67;
    v36.fields.r = 0.5;
    v36.fields.g = 0.5;
    v36.fields.b = 0.5;
    v36.fields.a = 1.0;
    UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v36, 0);
    favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
    if ( !favoriteChangeMenuBtn )
      goto LABEL_67;
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_D004E0;
    v35 = this->fields.favoriteChangeMenuBtn;
    if ( !v35 )
      goto LABEL_67;
    v35->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_D004E0;
    noticeComp = this->fields.favoriteTxtLb;
    if ( !noticeComp )
      goto LABEL_67;
    UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)((char *)noticeComp + 492), 0);
  }
}


void MyRoomListControl__SetupScrollListBtn(MyRoomListControl_o *this, UIGrid_o *grid, const MethodInfo *method)
{
  int32_t childCount; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  UnityEngine_Object_o *Child; // x22
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *v22; // x24
  Il2CppObject *ComponentInChildren_object__52016240; // x22
  UnityEngine_GameObject_o *v24; // x0
  MyRoomListControl_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x22
  __int128 v27; // [xsp+0h] [xbp-70h]

  if ( (byte_4D2BCD6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C93AD4(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BCD6 = 1;
  }
  if ( !grid )
    goto LABEL_31;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
  if ( !this )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount;
    v6 = 0;
    __asm { FMOV            V0.4S, #1.0 }
    v27 = _Q0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v6, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Child )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Child,
                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__52016240(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            break;
          ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[33].methodPtr)(
            Component_object,
            Component_object->klass->vtable[33].method);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0);
          v15 = GameObjectExtensions__SafeGetComponent_object_(
                  gameObject,
                  (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0);
          if ( !v15 )
            break;
          v15[2].klass = (Il2CppClass *)this;
          v22 = v15 + 2;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)v22, (int32_t)this, v16, v17, v18, v19, v20, v21);
          *(_OWORD *)&v22->monitor = v27;
          *(_OWORD *)&v22[2].monitor = v27;
        }
        ComponentInChildren_object__52016240 = UnityEngine_Component__GetComponentInChildren_object__52016240(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__52016240,
                                        0,
                                        0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__52016240 )
            break;
          v24 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__52016240,
                  0);
          v25 = MyRoomListControl_TypeInfo;
          v26 = v24;
          if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v25 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v26, v25->static_fields->BTN_LABEL_POS, 0);
        }
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_31:
    sub_1C93D2C(this, grid);
  }
}


void MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2BCD9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BCD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.Name = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)name, v11, v12, v13, v14, v15, v16);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.EventName, (int32_t)eventName, v17, v18, v19, v20, v21, v22);
  this->fields.ClickAction = clickAction;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.ClickAction,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BCDC & 1) == 0 )
  {
    sub_1C93AD4(&MyRoomListControl___c_TypeInfo);
    byte_4D2BCDC = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(MyRoomListControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomListControl___c_TypeInfo->static_fields->__9 = (struct MyRoomListControl___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MyRoomListControl___c_TypeInfo->static_fields,
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

  if ( (byte_4D2BCDD & 1) == 0 )
  {
    sub_1C93AD4(&Method_MyRoomListControl___c__Awake_b__17_0__);
    byte_4D2BCDD = 1;
  }
  v2 = Method_MyRoomListControl___c__Awake_b__17_0__;
  if ( (*((_BYTE *)Method_MyRoomListControl___c__Awake_b__17_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C93AEC(Method_MyRoomListControl___c__Awake_b__17_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}