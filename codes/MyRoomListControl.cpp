void MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4C521D0 & 1) == 0 )
  {
    sub_1C3E564(&MyRoomListControl_TypeInfo);
    byte_4C521D0 = 1;
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
  const MethodInfo *v74; // x3
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  UILabel_o *v79; // x25
  System_String_o *klass; // x26
  System_String_o *v81; // x1
  MyRoomListControl_c *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  BalanceConfig_c *v89; // x0
  int32_t GalleryReleaseQuestId; // w25
  bool IsQuestClear_40371188; // w25
  System_String_o *v92; // x25
  Il2CppObject *v93; // x0
  __int64 v94; // x1
  const MethodInfo *v95; // x2
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  MyRoomListControl___c_c *v98; // x8
  EventDelegate_Callback_o *_9__17_0; // x25
  Il2CppObject *v100; // x26
  struct MyRoomListControl___c_StaticFields *static_fields; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  __int64 v104; // x0
  __int64 v105; // x1
  int monitor; // w8
  Il2CppObject *v107; // x0
  __int64 v108; // x1
  __int64 v109; // x0
  __int64 v110; // x1
  System_Collections_Generic_List_object__o *v111; // x23
  EventDelegate_Callback_o *v112; // x25
  EventDelegate_o *v113; // x24
  __int64 v114; // x0
  __int64 v115; // x1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  Il2CppClass **v121; // x0
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  Il2CppClass *v126; // x1
  MyRoomListControl_c *v127; // x0
  __int128 v128; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v129; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v130; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C521C9 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_1C3E564(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C3E564(&MyRoomListControl_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_MyRoomListControl___c__Awake_b__17_0__);
    sub_1C3E564(&MyRoomListControl___c_TypeInfo);
    sub_1C3E564(&StringLiteral_8848/*"MYROOM_MENU_NAME_3"*/);
    sub_1C3E564(&StringLiteral_8856/*"MYROOM_NOT_OPEN_GALLERY"*/);
    sub_1C3E564(&StringLiteral_22171/*"nameLabel"*/);
    sub_1C3E564(&StringLiteral_3492/*"CLICK_TITLE"*/);
    sub_1C3E564(&StringLiteral_8840/*"MYROOM_MENU_NAME_1"*/);
    sub_1C3E564(&StringLiteral_3461/*"CLICK_GAMEOPTION"*/);
    sub_1C3E564(&StringLiteral_8846/*"MYROOM_MENU_NAME_15"*/);
    sub_1C3E564(&StringLiteral_8849/*"MYROOM_MENU_NAME_4"*/);
    sub_1C3E564(&StringLiteral_3470/*"CLICK_NOTICE"*/);
    sub_1C3E564(&StringLiteral_3447/*"CLICK_CONTINUE_DEVICE"*/);
    sub_1C3E564(&StringLiteral_3482/*"CLICK_SOUND_PLAYER"*/);
    sub_1C3E564(&StringLiteral_8845/*"MYROOM_MENU_NAME_14"*/);
    sub_1C3E564(&StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C3E564(&StringLiteral_8852/*"MYROOM_MENU_NAME_7"*/);
    sub_1C3E564(&StringLiteral_8854/*"MYROOM_MENU_NAME_9"*/);
    sub_1C3E564(&StringLiteral_3436/*"CLICK_ACCOUNT_LINKAGE"*/);
    sub_1C3E564(&StringLiteral_8842/*"MYROOM_MENU_NAME_11"*/);
    sub_1C3E564(&StringLiteral_3460/*"CLICK_GALLERY"*/);
    sub_1C3E564(&StringLiteral_8847/*"MYROOM_MENU_NAME_2"*/);
    sub_1C3E564(&StringLiteral_3466/*"CLICK_MATERIAL"*/);
    sub_1C3E564(&StringLiteral_8850/*"MYROOM_MENU_NAME_5"*/);
    sub_1C3E564(&StringLiteral_8853/*"MYROOM_MENU_NAME_8"*/);
    sub_1C3E564(&StringLiteral_3472/*"CLICK_PROFILE"*/);
    sub_1C3E564(&StringLiteral_3477/*"CLICK_SERIAL_CODE"*/);
    sub_1C3E564(&StringLiteral_8843/*"MYROOM_MENU_NAME_12"*/);
    sub_1C3E564(&StringLiteral_8851/*"MYROOM_MENU_NAME_6"*/);
    sub_1C3E564(&StringLiteral_3479/*"CLICK_SERVANT_MENU"*/);
    sub_1C3E564(&StringLiteral_3493/*"CLICK_USER_ITEM"*/);
    sub_1C3E564(&StringLiteral_3455/*"CLICK_EXCHANGE_SVT_COIN"*/);
    sub_1C3E564(&StringLiteral_8844/*"MYROOM_MENU_NAME_13"*/);
    byte_4C521C9 = 1;
  }
  memset(&v130, 0, sizeof(v130));
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8842/*"MYROOM_MENU_NAME_11"*/, 0);
  v5 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v5, v4, 0, (System_String_o *)StringLiteral_3466/*"CLICK_MATERIAL"*/, 0, v6);
  if ( !v3 )
LABEL_88:
    sub_1C3E7C0(EntityDefinitely, v8);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v5,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MYROOM_MENU_NAME_12"*/, 0);
  v10 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v10, v9, 0, (System_String_o *)StringLiteral_3479/*"CLICK_SERVANT_MENU"*/, 0, v11);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v10,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8846/*"MYROOM_MENU_NAME_15"*/, 0);
  v13 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v13, v12, 0, (System_String_o *)StringLiteral_3460/*"CLICK_GALLERY"*/, 0, v14);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v13,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MYROOM_MENU_NAME_1"*/, 0);
  v16 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v16, v15, 0, (System_String_o *)StringLiteral_3493/*"CLICK_USER_ITEM"*/, 0, v17);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v16,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"MYROOM_MENU_NAME_2"*/, 0);
  v19 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v19, v18, 0, (System_String_o *)StringLiteral_3482/*"CLICK_SOUND_PLAYER"*/, 0, v20);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v19,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"MYROOM_MENU_NAME_3"*/, 0);
  v22 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v22, v21, 0, (System_String_o *)StringLiteral_3472/*"CLICK_PROFILE"*/, 0, v23);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v22,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MYROOM_MENU_NAME_4"*/, 0);
  v25 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v25, (Il2CppObject *)this, (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__, 0);
  v26 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v26, v24, 1, (System_String_o *)StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/, v25, v27);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v26,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8850/*"MYROOM_MENU_NAME_5"*/, 0);
  v29 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v29, v28, 0, (System_String_o *)StringLiteral_3470/*"CLICK_NOTICE"*/, 0, v30);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v29,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8851/*"MYROOM_MENU_NAME_6"*/, 0);
  v32 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v32, v31, 0, (System_String_o *)StringLiteral_3461/*"CLICK_GAMEOPTION"*/, 0, v33);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v32,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
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
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8852/*"MYROOM_MENU_NAME_7"*/, 0);
    v36 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v36, v35, 0, (System_String_o *)StringLiteral_3477/*"CLICK_SERIAL_CODE"*/, 0, v37);
    System_Collections_Generic_HashSet_object___Add(
      v3,
      (Il2CppObject *)v36,
      (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8853/*"MYROOM_MENU_NAME_8"*/, 0);
  v39 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v39, v38, 0, (System_String_o *)StringLiteral_3447/*"CLICK_CONTINUE_DEVICE"*/, 0, v40);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v39,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8844/*"MYROOM_MENU_NAME_13"*/, 0);
  v42 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v42, v41, 0, (System_String_o *)StringLiteral_3436/*"CLICK_ACCOUNT_LINKAGE"*/, 0, v43);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v42,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8854/*"MYROOM_MENU_NAME_9"*/, 0);
  v45 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v45, v44, 0, (System_String_o *)StringLiteral_3492/*"CLICK_TITLE"*/, 0, v46);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v45,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  v48 = 0;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v49 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 480LL);
    if ( !v49 )
      goto LABEL_88;
    if ( (__int64)v48 >= *(int *)(v49 + 24) )
      goto LABEL_37;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
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
      sub_1C3E7C8(EntityDefinitely, v8);
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
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MYROOM_MENU_NAME_14"*/, 0);
  v54 = (MyRoomListControl_MainItemInfo_o *)sub_1C3E7B0(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v54, v53, 0, (System_String_o *)StringLiteral_3455/*"CLICK_EXCHANGE_SVT_COIN"*/, 0, v55);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v54,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v129,
    v3,
    (const MethodInfo_366D034 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v130 = v129;
  __asm { FMOV            V0.4S, #1.0 }
  v61 = 0.0;
  v128 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v130,
            (const MethodInfo_353F6DC *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v130.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v64 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v66 = (UnityEngine_GameObject_o *)v64;
    if ( !v64 )
      sub_1C3E7C0(0, v65);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v64, 1, 0);
    GameObjectExtensions__SafeSetParent(v66, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0);
    GameObjectExtensions__SetLocalPosition_36176396(v66, 0.0, v61, 0.0, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v66,
                         (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v68 = UnityEngine_GameObject__GetComponent_object_(
            v66,
            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v69 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v68, 0, 0);
    if ( v69 )
    {
      if ( !v68 )
        sub_1C3E7C0(v69, v70);
      v71 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v68->klass->vtable[33].methodPtr)(
              v68,
              v68->klass->vtable[33].method);
      if ( !Component_object )
        sub_1C3E7C0(v71, v72);
      Component_object[2].klass = (Il2CppClass *)v66;
      sub_1C3E508((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v66, v73, v74);
      *(_OWORD *)&Component_object[2].monitor = v128;
      *(_OWORD *)&Component_object[4].monitor = v128;
    }
    GameObject = GameObjectExtensions__FindGameObject(v66, (System_String_o *)StringLiteral_22171/*"nameLabel"*/, 0);
    if ( !GameObject )
      sub_1C3E7C0(0, v76);
    v77 = UnityEngine_GameObject__GetComponent_object_(
            GameObject,
            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1C3E7C0(v77, v78);
    v79 = (UILabel_o *)v77;
    if ( !v77 )
      sub_1C3E7C0(0, v78);
    UILabel__set_text((UILabel_o *)v77, (System_String_o *)current[1].klass, 0);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MYROOM_MENU_NAME_14"*/, 0);
    if ( System_String__op_Equality(klass, v81, 0) )
    {
      UILabel__set_overflowMethod(v79, 2, 0);
      v82 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
        v82 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_49599236(v79, v82->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0.0, 0);
      this->fields.exchangeSvtCoinMenuBoard = v66;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.exchangeSvtCoinMenuBoard, (int32_t)v66, v83, v84);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/, 0) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.favoriteChangeMenuBtn, (int32_t)Component_object, v85, v86);
      this->fields.favoriteTxtLb = v79;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.favoriteTxtLb, (int32_t)v79, v87, v88);
    }
    v89 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v89 = BalanceConfig_TypeInfo;
    }
    GalleryReleaseQuestId = v89->static_fields->GalleryReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40371188 = CondType__IsQuestClear_40371188(GalleryReleaseQuestId, -1, 0, 0);
    if ( !(IsQuestClear_40371188
         | !System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3460/*"CLICK_GALLERY"*/, 0)) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_8856/*"MYROOM_NOT_OPEN_GALLERY"*/, 0);
      v93 = UnityEngine_GameObject__GetComponent_object_(
              v66,
              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
      if ( !v93 )
        sub_1C3E7C0(0, v94);
      MyRoomListItem__EnableBlackOutPanel((MyRoomListItem_o *)v93, v92, v95);
      LODWORD(current[1].monitor) = 1;
      v98 = MyRoomListControl___c_TypeInfo;
      if ( !MyRoomListControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl___c_TypeInfo);
        v98 = MyRoomListControl___c_TypeInfo;
      }
      _9__17_0 = v98->static_fields->__9__17_0;
      if ( !_9__17_0 )
      {
        if ( !v98->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v98);
          v98 = MyRoomListControl___c_TypeInfo;
        }
        v100 = (Il2CppObject *)v98->static_fields->__9;
        _9__17_0 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(_9__17_0, v100, (intptr_t)Method_MyRoomListControl___c__Awake_b__17_0__, 0);
        static_fields = MyRoomListControl___c_TypeInfo->static_fields;
        static_fields->__9__17_0 = _9__17_0;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v102, v103);
      }
      current[2].monitor = _9__17_0;
      sub_1C3E508((CGThumbnailListItem_o *)&current[2].monitor, (int32_t)_9__17_0, v96, v97);
      if ( !Component_object )
        sub_1C3E7C0(v104, v105);
      *(_OWORD *)&Component_object[3].monitor = v128;
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v107 = UnityEngine_GameObject__GetComponent_object_(
                 v66,
                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v107 )
          sub_1C3E7C0(0, v108);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v107, 0, 0);
        if ( !Component_object )
          sub_1C3E7C0(v109, v110);
        v111 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v112 = (EventDelegate_Callback_o *)current[2].monitor;
        v113 = (EventDelegate_o *)sub_1C3E7B0(EventDelegate_TypeInfo);
        EventDelegate___ctor_49347188(v113, v112, 0);
        if ( !v111 )
          sub_1C3E7C0(v114, v115);
        items = v111->fields._items;
        v119 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v111->fields._version;
        if ( !items )
          sub_1C3E7C0(v114, v115);
        size = v111->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v111,
            (Il2CppObject *)v113,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
        }
        else
        {
          v121 = &items->obj.klass + size;
          v111->fields._size = size + 1;
          v121[4] = (Il2CppClass *)v113;
          sub_1C3E508((CGThumbnailListItem_o *)(v121 + 4), (int32_t)v113, v116, v117);
        }
      }
    }
    else
    {
      v122 = UnityEngine_GameObject__GetComponent_object_(
               v66,
               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v122 )
        sub_1C3E7C0(0, v123);
      v126 = current[2].klass;
      v122[2].monitor = v126;
      sub_1C3E508((CGThumbnailListItem_o *)&v122[2].monitor, (int32_t)v126, v124, v125);
    }
    v127 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v127 = MyRoomListControl_TypeInfo;
    }
    v61 = v61 - v127->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v130,
    (const MethodInfo_353F6D8 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_36176396(this->fields.itemDummy, 0.0, v61, 0.0, 0);
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

  if ( (byte_4C521CD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C3E564(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_1C3E564(&OpeningMovieData_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C3E564(&StringLiteral_8839/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C521CD = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/, 0);
      return;
    }
LABEL_18:
    sub_1C3E7C0(myRoomFsm, method);
  }
  v4 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_MyRoomListControl_ClickFavoriteChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0);
  v9 = System_String__Format(v8, fsmTemplate, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C521CF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C521CF = 1;
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
    UnityEngine_Object__Destroy_71341564(v6, 0);
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
      sub_1C3E7C0(menuListScrollView, v7);
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

  if ( (byte_4C521CC & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C521CC = 1;
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
        sub_1C3E7C8(this, items);
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = System_Int32__ToString((int32_t)&v11, 0);
        v10 = System_String__Concat_63636468(prefixStr, v9, 0);
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
    sub_1C3E7C0(this, items);
  }
}


void MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  long double v2; // q8
  _BOOL8 _40473944; // x0
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
  const MethodInfo *v19; // x3
  int v20; // w26
  int32_t v21; // w21
  int v22; // w27
  int32_t v23; // w22
  UnityEngine_Object_o *Child; // x23
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  __int64 v27; // x20
  TerminalPramsManager_c *v28; // x0
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v31; // x8
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C521CA & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&StringLiteral_8855/*"MYROOM_NOTICE_NAME_"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C521CA = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40473944 = TutorialFlag__Get_40473944(106, 0);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _40473944;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_40473944, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_8855/*"MYROOM_NOTICE_NAME_"*/, v8);
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
  if ( !byte_4C5224A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5224A = 1;
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
    if ( !byte_4C5224A )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5224A = 1;
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
      if ( !byte_4C5224A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C5224A = 1;
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
        v20 = childCount - 1;
        if ( childCount >= 1 )
        {
          v21 = childCount;
          v22 = 0;
          v23 = 0;
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
                                              v23,
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
                                                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
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
              ++v22;
            }
            if ( v21 == ++v23 )
              goto LABEL_51;
          }
LABEL_67:
          sub_1C3E7C0(noticeComp, v10);
        }
        v22 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = StringLiteral_1/*""*/;
        if ( !byte_4C50C89 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C50C89 = 1;
        }
        v28 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v28 = TerminalPramsManager_TypeInfo;
        }
        *(float *)&v2 = (float)v22 / (float)v20;
        p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v28->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = (CGThumbnailListItem_c *)v27;
        sub_1C3E508(p_TransitionScrollTabName_k__BackingField, v27, v18, v19);
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
    v32.fields.r = 0.5;
    v32.fields.g = 0.5;
    v32.fields.b = 0.5;
    v32.fields.a = 1.0;
    UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v32, 0);
    favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
    if ( !favoriteChangeMenuBtn )
      goto LABEL_67;
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_C11A90;
    v31 = this->fields.favoriteChangeMenuBtn;
    if ( !v31 )
      goto LABEL_67;
    v31->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_C11A90;
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
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x24
  Il2CppObject *ComponentInChildren_object__51315876; // x22
  UnityEngine_GameObject_o *v20; // x0
  MyRoomListControl_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x22
  __int128 v23; // [xsp+0h] [xbp-70h]

  if ( (byte_4C521CB & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C3E564(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C3E564(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C521CB = 1;
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
    v23 = _Q0;
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
                             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__51315876(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                  (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0);
          if ( !v15 )
            break;
          v15[2].klass = (Il2CppClass *)this;
          v18 = v15 + 2;
          sub_1C3E508((CGThumbnailListItem_o *)v18, (int32_t)this, v16, v17);
          *(_OWORD *)&v18->monitor = v23;
          *(_OWORD *)&v18[2].monitor = v23;
        }
        ComponentInChildren_object__51315876 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__51315876,
                                        0,
                                        0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__51315876 )
            break;
          v20 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__51315876,
                  0);
          v21 = MyRoomListControl_TypeInfo;
          v22 = v20;
          if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v21 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v22, v21->static_fields->BTN_LABEL_POS, 0);
        }
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_31:
    sub_1C3E7C0(this, grid);
  }
}


void MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C521CE & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C521CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.Name = name;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v11, v12);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.EventName, (int32_t)eventName, v13, v14);
  this->fields.ClickAction = clickAction;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ClickAction, (int32_t)clickAction, v15, v16);
}


void MyRoomListControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C521D1 & 1) == 0 )
  {
    sub_1C3E564(&MyRoomListControl___c_TypeInfo);
    byte_4C521D1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(MyRoomListControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomListControl___c_TypeInfo->static_fields->__9 = (struct MyRoomListControl___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)MyRoomListControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MyRoomListControl___c___ctor(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomListControl___c___Awake_b__17_0(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C521D2 & 1) == 0 )
  {
    sub_1C3E564(&Method_MyRoomListControl___c__Awake_b__17_0__);
    byte_4C521D2 = 1;
  }
  v2 = Method_MyRoomListControl___c__Awake_b__17_0__;
  if ( (*((_BYTE *)Method_MyRoomListControl___c__Awake_b__17_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C3E57C(Method_MyRoomListControl___c__Awake_b__17_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3E548(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}