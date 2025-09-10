void MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4C226C1 & 1) == 0 )
  {
    sub_1C2D490(&MyRoomListControl_TypeInfo);
    byte_4C226C1 = 1;
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
  __int64 v47; // x2
  Il2CppObject *Master_object; // x22
  unsigned __int64 v49; // x28
  __int64 v50; // x8
  BalanceConfig_c *v51; // x8
  int64_t v52; // x23
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v54; // x21
  MyRoomListControl_MainItemInfo_o *v55; // x22
  const MethodInfo *v56; // x5
  float v62; // s8
  Il2CppObject *current; // x28
  Il2CppObject *listItemBase; // x23
  Il2CppObject *v65; // x0
  __int64 v66; // x1
  UnityEngine_GameObject_o *v67; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v69; // x25
  _BOOL8 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x0
  __int64 v79; // x1
  UILabel_o *v80; // x25
  System_String_o *klass; // x26
  System_String_o *v82; // x1
  MyRoomListControl_c *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  BalanceConfig_c *v90; // x0
  int32_t GalleryReleaseQuestId; // w25
  bool IsQuestClear_40102980; // w25
  System_String_o *v93; // x25
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  const MethodInfo *v96; // x2
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  MyRoomListControl___c_c *v99; // x8
  EventDelegate_Callback_o *_9__17_0; // x25
  Il2CppObject *v101; // x26
  struct MyRoomListControl___c_StaticFields *static_fields; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  __int64 v105; // x0
  __int64 v106; // x1
  int monitor; // w8
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x0
  __int64 v111; // x1
  System_Collections_Generic_List_object__o *v112; // x23
  EventDelegate_Callback_o *v113; // x25
  EventDelegate_o *v114; // x24
  __int64 v115; // x0
  __int64 v116; // x1
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  struct System_Object_array *items; // x8
  _QWORD *v120; // x9
  __int64 size; // x10
  Il2CppClass **v122; // x0
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  Il2CppClass *v127; // x1
  MyRoomListControl_c *v128; // x0
  __int128 v129; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v130; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v131; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C226BA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_1C2D490(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C2D490(&MyRoomListControl_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_MyRoomListControl___c__Awake_b__17_0__);
    sub_1C2D490(&MyRoomListControl___c_TypeInfo);
    sub_1C2D490(&StringLiteral_8841/*"MYROOM_MENU_NAME_3"*/);
    sub_1C2D490(&StringLiteral_8849/*"MYROOM_NOT_OPEN_GALLERY"*/);
    sub_1C2D490(&StringLiteral_22133/*"nameLabel"*/);
    sub_1C2D490(&StringLiteral_3485/*"CLICK_TITLE"*/);
    sub_1C2D490(&StringLiteral_8833/*"MYROOM_MENU_NAME_1"*/);
    sub_1C2D490(&StringLiteral_3454/*"CLICK_GAMEOPTION"*/);
    sub_1C2D490(&StringLiteral_8839/*"MYROOM_MENU_NAME_15"*/);
    sub_1C2D490(&StringLiteral_8842/*"MYROOM_MENU_NAME_4"*/);
    sub_1C2D490(&StringLiteral_3463/*"CLICK_NOTICE"*/);
    sub_1C2D490(&StringLiteral_3440/*"CLICK_CONTINUE_DEVICE"*/);
    sub_1C2D490(&StringLiteral_3475/*"CLICK_SOUND_PLAYER"*/);
    sub_1C2D490(&StringLiteral_8838/*"MYROOM_MENU_NAME_14"*/);
    sub_1C2D490(&StringLiteral_3450/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C2D490(&StringLiteral_8845/*"MYROOM_MENU_NAME_7"*/);
    sub_1C2D490(&StringLiteral_8847/*"MYROOM_MENU_NAME_9"*/);
    sub_1C2D490(&StringLiteral_3429/*"CLICK_ACCOUNT_LINKAGE"*/);
    sub_1C2D490(&StringLiteral_8835/*"MYROOM_MENU_NAME_11"*/);
    sub_1C2D490(&StringLiteral_3453/*"CLICK_GALLERY"*/);
    sub_1C2D490(&StringLiteral_8840/*"MYROOM_MENU_NAME_2"*/);
    sub_1C2D490(&StringLiteral_3459/*"CLICK_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_8843/*"MYROOM_MENU_NAME_5"*/);
    sub_1C2D490(&StringLiteral_8846/*"MYROOM_MENU_NAME_8"*/);
    sub_1C2D490(&StringLiteral_3465/*"CLICK_PROFILE"*/);
    sub_1C2D490(&StringLiteral_3470/*"CLICK_SERIAL_CODE"*/);
    sub_1C2D490(&StringLiteral_8836/*"MYROOM_MENU_NAME_12"*/);
    sub_1C2D490(&StringLiteral_8844/*"MYROOM_MENU_NAME_6"*/);
    sub_1C2D490(&StringLiteral_3472/*"CLICK_SERVANT_MENU"*/);
    sub_1C2D490(&StringLiteral_3486/*"CLICK_USER_ITEM"*/);
    sub_1C2D490(&StringLiteral_3448/*"CLICK_EXCHANGE_SVT_COIN"*/);
    sub_1C2D490(&StringLiteral_8837/*"MYROOM_MENU_NAME_13"*/);
    byte_4C226BA = 1;
  }
  memset(&v131, 0, sizeof(v131));
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8835/*"MYROOM_MENU_NAME_11"*/, 0);
  v5 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v5, v4, 0, (System_String_o *)StringLiteral_3459/*"CLICK_MATERIAL"*/, 0, v6);
  if ( !v3 )
LABEL_88:
    sub_1C2D6EC(EntityDefinitely, v8);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v5,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8836/*"MYROOM_MENU_NAME_12"*/, 0);
  v10 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v10, v9, 0, (System_String_o *)StringLiteral_3472/*"CLICK_SERVANT_MENU"*/, 0, v11);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v10,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MYROOM_MENU_NAME_15"*/, 0);
  v13 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v13, v12, 0, (System_String_o *)StringLiteral_3453/*"CLICK_GALLERY"*/, 0, v14);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v13,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8833/*"MYROOM_MENU_NAME_1"*/, 0);
  v16 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v16, v15, 0, (System_String_o *)StringLiteral_3486/*"CLICK_USER_ITEM"*/, 0, v17);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v16,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MYROOM_MENU_NAME_2"*/, 0);
  v19 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v19, v18, 0, (System_String_o *)StringLiteral_3475/*"CLICK_SOUND_PLAYER"*/, 0, v20);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v19,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8841/*"MYROOM_MENU_NAME_3"*/, 0);
  v22 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v22, v21, 0, (System_String_o *)StringLiteral_3465/*"CLICK_PROFILE"*/, 0, v23);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v22,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8842/*"MYROOM_MENU_NAME_4"*/, 0);
  v25 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v25, (Il2CppObject *)this, (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__, 0);
  v26 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v26, v24, 1, (System_String_o *)StringLiteral_3450/*"CLICK_FAVORITE_CHANGE"*/, v25, v27);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v26,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MYROOM_MENU_NAME_5"*/, 0);
  v29 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v29, v28, 0, (System_String_o *)StringLiteral_3463/*"CLICK_NOTICE"*/, 0, v30);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v29,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8844/*"MYROOM_MENU_NAME_6"*/, 0);
  v32 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v32, v31, 0, (System_String_o *)StringLiteral_3454/*"CLICK_GAMEOPTION"*/, 0, v33);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v32,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
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
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MYROOM_MENU_NAME_7"*/, 0);
    v36 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v36, v35, 0, (System_String_o *)StringLiteral_3470/*"CLICK_SERIAL_CODE"*/, 0, v37);
    System_Collections_Generic_HashSet_object___Add(
      v3,
      (Il2CppObject *)v36,
      (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8846/*"MYROOM_MENU_NAME_8"*/, 0);
  v39 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v39, v38, 0, (System_String_o *)StringLiteral_3440/*"CLICK_CONTINUE_DEVICE"*/, 0, v40);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v39,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8837/*"MYROOM_MENU_NAME_13"*/, 0);
  v42 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v42, v41, 0, (System_String_o *)StringLiteral_3429/*"CLICK_ACCOUNT_LINKAGE"*/, 0, v43);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v42,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"MYROOM_MENU_NAME_9"*/, 0);
  v45 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v45, v44, 0, (System_String_o *)StringLiteral_3485/*"CLICK_TITLE"*/, 0, v46);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v45,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
  v49 = 0;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v50 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 480LL);
    if ( !v50 )
      goto LABEL_88;
    if ( (__int64)v49 >= *(int *)(v50 + 24) )
      goto LABEL_37;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    EntityDefinitely = (int *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityDefinitely = (int *)NetworkManager_TypeInfo;
    }
    v51 = BalanceConfig_TypeInfo;
    v52 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL);
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v51->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_88;
    if ( v49 >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      sub_1C2D6F4(EntityDefinitely, v8, v47);
    if ( !Master_object )
      goto LABEL_88;
    EntityDefinitely = (int *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)Master_object,
                                v52,
                                ExchangeSvtCoinItemIds->m_Items[v49],
                                0);
    if ( !EntityDefinitely )
      goto LABEL_88;
    ++v49;
  }
  while ( EntityDefinitely[7] < 1 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8838/*"MYROOM_MENU_NAME_14"*/, 0);
  v55 = (MyRoomListControl_MainItemInfo_o *)sub_1C2D6DC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v55, v54, 0, (System_String_o *)StringLiteral_3448/*"CLICK_EXCHANGE_SVT_COIN"*/, 0, v56);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v55,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v130,
    v3,
    (const MethodInfo_36418F0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v131 = v130;
  __asm { FMOV            V0.4S, #1.0 }
  v62 = 0.0;
  v129 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v131,
            (const MethodInfo_3513F98 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v131.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v65 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v67 = (UnityEngine_GameObject_o *)v65;
    if ( !v65 )
      sub_1C2D6EC(0, v66);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v65, 1, 0);
    GameObjectExtensions__SafeSetParent(v67, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0);
    GameObjectExtensions__SetLocalPosition_35918600(v67, 0.0, v62, 0.0, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v67,
                         (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v69 = UnityEngine_GameObject__GetComponent_object_(
            v67,
            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v70 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0, 0);
    if ( v70 )
    {
      if ( !v69 )
        sub_1C2D6EC(v70, v71);
      v72 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v69->klass->vtable[33].methodPtr)(
              v69,
              v69->klass->vtable[33].method);
      if ( !Component_object )
        sub_1C2D6EC(v72, v73);
      Component_object[2].klass = (Il2CppClass *)v67;
      sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v67, v74, v75);
      *(_OWORD *)&Component_object[2].monitor = v129;
      *(_OWORD *)&Component_object[4].monitor = v129;
    }
    GameObject = GameObjectExtensions__FindGameObject(v67, (System_String_o *)StringLiteral_22133/*"nameLabel"*/, 0);
    if ( !GameObject )
      sub_1C2D6EC(0, v77);
    v78 = UnityEngine_GameObject__GetComponent_object_(
            GameObject,
            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1C2D6EC(v78, v79);
    v80 = (UILabel_o *)v78;
    if ( !v78 )
      sub_1C2D6EC(0, v79);
    UILabel__set_text((UILabel_o *)v78, (System_String_o *)current[1].klass, 0);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_8838/*"MYROOM_MENU_NAME_14"*/, 0);
    if ( System_String__op_Equality(klass, v82, 0) )
    {
      UILabel__set_overflowMethod(v80, 2, 0);
      v83 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
        v83 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_49422820(v80, v83->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0.0, 0);
      this->fields.exchangeSvtCoinMenuBoard = v67;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.exchangeSvtCoinMenuBoard, (int32_t)v67, v84, v85);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3450/*"CLICK_FAVORITE_CHANGE"*/, 0) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.favoriteChangeMenuBtn, (int32_t)Component_object, v86, v87);
      this->fields.favoriteTxtLb = v80;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.favoriteTxtLb, (int32_t)v80, v88, v89);
    }
    v90 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v90 = BalanceConfig_TypeInfo;
    }
    GalleryReleaseQuestId = v90->static_fields->GalleryReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40102980 = CondType__IsQuestClear_40102980(GalleryReleaseQuestId, -1, 0, 0);
    if ( !(IsQuestClear_40102980
         | !System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3453/*"CLICK_GALLERY"*/, 0)) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MYROOM_NOT_OPEN_GALLERY"*/, 0);
      v94 = UnityEngine_GameObject__GetComponent_object_(
              v67,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
      if ( !v94 )
        sub_1C2D6EC(0, v95);
      MyRoomListItem__EnableBlackOutPanel((MyRoomListItem_o *)v94, v93, v96);
      LODWORD(current[1].monitor) = 1;
      v99 = MyRoomListControl___c_TypeInfo;
      if ( !MyRoomListControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl___c_TypeInfo);
        v99 = MyRoomListControl___c_TypeInfo;
      }
      _9__17_0 = v99->static_fields->__9__17_0;
      if ( !_9__17_0 )
      {
        if ( !v99->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v99);
          v99 = MyRoomListControl___c_TypeInfo;
        }
        v101 = (Il2CppObject *)v99->static_fields->__9;
        _9__17_0 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(_9__17_0, v101, (intptr_t)Method_MyRoomListControl___c__Awake_b__17_0__, 0);
        static_fields = MyRoomListControl___c_TypeInfo->static_fields;
        static_fields->__9__17_0 = _9__17_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v103, v104);
      }
      current[2].monitor = _9__17_0;
      sub_1C2D434((CGThumbnailListItem_o *)&current[2].monitor, (int32_t)_9__17_0, v97, v98);
      if ( !Component_object )
        sub_1C2D6EC(v105, v106);
      *(_OWORD *)&Component_object[3].monitor = v129;
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v108 = UnityEngine_GameObject__GetComponent_object_(
                 v67,
                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v108 )
          sub_1C2D6EC(0, v109);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v108, 0, 0);
        if ( !Component_object )
          sub_1C2D6EC(v110, v111);
        v112 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v113 = (EventDelegate_Callback_o *)current[2].monitor;
        v114 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
        EventDelegate___ctor_49170772(v114, v113, 0);
        if ( !v112 )
          sub_1C2D6EC(v115, v116);
        items = v112->fields._items;
        v120 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v112->fields._version;
        if ( !items )
          sub_1C2D6EC(v115, v116);
        size = v112->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v112,
            (Il2CppObject *)v114,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
        }
        else
        {
          v122 = &items->obj.klass + size;
          v112->fields._size = size + 1;
          v122[4] = (Il2CppClass *)v114;
          sub_1C2D434((CGThumbnailListItem_o *)(v122 + 4), (int32_t)v114, v117, v118);
        }
      }
    }
    else
    {
      v123 = UnityEngine_GameObject__GetComponent_object_(
               v67,
               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v123 )
        sub_1C2D6EC(0, v124);
      v127 = current[2].klass;
      v123[2].monitor = v127;
      sub_1C2D434((CGThumbnailListItem_o *)&v123[2].monitor, (int32_t)v127, v125, v126);
    }
    v128 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v128 = MyRoomListControl_TypeInfo;
    }
    v62 = v62 - v128->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v131,
    (const MethodInfo_3513F94 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_35918600(this->fields.itemDummy, 0.0, v62, 0.0, 0);
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

  if ( (byte_4C226BE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C2D490(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_1C2D490(&OpeningMovieData_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_3450/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C2D490(&StringLiteral_8832/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C226BE = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3450/*"CLICK_FAVORITE_CHANGE"*/, 0);
      return;
    }
LABEL_18:
    sub_1C2D6EC(myRoomFsm, method);
  }
  v4 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_MyRoomListControl_ClickFavoriteChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8832/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0);
  v9 = System_String__Format(v8, fsmTemplate, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C226C0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C226C0 = 1;
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
    UnityEngine_Object__Destroy_71163704(v6, 0);
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
      sub_1C2D6EC(menuListScrollView, v7);
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

  if ( (byte_4C226BD & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C226BD = 1;
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
        sub_1C2D6F4(this, items, prefixStr);
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = System_Int32__ToString((int32_t)&v11, 0);
        v10 = System_String__Concat_63457864(prefixStr, v9, 0);
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
    sub_1C2D6EC(this, items);
  }
}


void MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  long double v2; // q8
  _BOOL8 _40206092; // x0
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

  if ( (byte_4C226BB & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_8848/*"MYROOM_NOTICE_NAME_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C226BB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40206092 = TutorialFlag__Get_40206092(106, 0);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _40206092;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_40206092, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_8848/*"MYROOM_NOTICE_NAME_"*/, v8);
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
  if ( !byte_4C2273B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2273B = 1;
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
    if ( !byte_4C2273B )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2273B = 1;
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
      if ( !byte_4C2273B )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2273B = 1;
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
                                                           (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
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
          sub_1C2D6EC(noticeComp, v10);
        }
        v22 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = StringLiteral_1/*""*/;
        if ( !byte_4C21386 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C21386 = 1;
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
        sub_1C2D434(p_TransitionScrollTabName_k__BackingField, v27, v18, v19);
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
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_C090F0;
    v31 = this->fields.favoriteChangeMenuBtn;
    if ( !v31 )
      goto LABEL_67;
    v31->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_C090F0;
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
  Il2CppObject *ComponentInChildren_object__51139460; // x22
  UnityEngine_GameObject_o *v20; // x0
  MyRoomListControl_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x22
  __int128 v23; // [xsp+0h] [xbp-70h]

  if ( (byte_4C226BC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C2D490(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C226BC = 1;
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
                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__51139460(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                  (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0);
          if ( !v15 )
            break;
          v15[2].klass = (Il2CppClass *)this;
          v18 = v15 + 2;
          sub_1C2D434((CGThumbnailListItem_o *)v18, (int32_t)this, v16, v17);
          *(_OWORD *)&v18->monitor = v23;
          *(_OWORD *)&v18[2].monitor = v23;
        }
        ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__51139460,
                                        0,
                                        0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__51139460 )
            break;
          v20 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__51139460,
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
    sub_1C2D6EC(this, grid);
  }
}


void MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C226BF & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C226BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v11, v12);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.EventName, (int32_t)eventName, v13, v14);
  this->fields.ClickAction = clickAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ClickAction, (int32_t)clickAction, v15, v16);
}


void MyRoomListControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C226C2 & 1) == 0 )
  {
    sub_1C2D490(&MyRoomListControl___c_TypeInfo);
    byte_4C226C2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MyRoomListControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomListControl___c_TypeInfo->static_fields->__9 = (struct MyRoomListControl___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MyRoomListControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MyRoomListControl___c___ctor(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomListControl___c___Awake_b__17_0(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C226C3 & 1) == 0 )
  {
    sub_1C2D490(&Method_MyRoomListControl___c__Awake_b__17_0__);
    byte_4C226C3 = 1;
  }
  v2 = Method_MyRoomListControl___c__Awake_b__17_0__;
  if ( (*((_BYTE *)Method_MyRoomListControl___c__Awake_b__17_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C2D4A8(Method_MyRoomListControl___c__Awake_b__17_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C2D474(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}