void MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4C3E44A & 1) == 0 )
  {
    sub_1C37058(&MyRoomListControl_TypeInfo);
    byte_4C3E44A = 1;
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
  System_String_o *v8; // x21
  MyRoomListControl_MainItemInfo_o *v9; // x22
  const MethodInfo *v10; // x5
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
  EventDelegate_Callback_o *v24; // x22
  MyRoomListControl_MainItemInfo_o *v25; // x23
  const MethodInfo *v26; // x5
  System_String_o *v27; // x21
  MyRoomListControl_MainItemInfo_o *v28; // x22
  const MethodInfo *v29; // x5
  System_String_o *v30; // x21
  MyRoomListControl_MainItemInfo_o *v31; // x22
  const MethodInfo *v32; // x5
  BalanceConfig_c *v33; // x0
  System_String_o *v34; // x21
  MyRoomListControl_MainItemInfo_o *v35; // x22
  const MethodInfo *v36; // x5
  System_String_o *v37; // x21
  MyRoomListControl_MainItemInfo_o *v38; // x22
  const MethodInfo *v39; // x5
  System_String_o *v40; // x21
  MyRoomListControl_MainItemInfo_o *v41; // x22
  const MethodInfo *v42; // x5
  System_String_o *v43; // x21
  MyRoomListControl_MainItemInfo_o *v44; // x22
  const MethodInfo *v45; // x5
  Il2CppObject *Master_object; // x22
  unsigned __int64 v47; // x28
  __int64 v48; // x8
  BalanceConfig_c *v49; // x8
  int64_t v50; // x23
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v52; // x21
  MyRoomListControl_MainItemInfo_o *v53; // x22
  const MethodInfo *v54; // x5
  float v60; // s8
  Il2CppObject *current; // x28
  Il2CppObject *listItemBase; // x23
  Il2CppObject *v63; // x0
  UnityEngine_GameObject_o *v64; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v66; // x25
  _BOOL8 v67; // x0
  __int64 v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  UnityEngine_GameObject_o *GameObject; // x0
  Il2CppObject *v72; // x0
  UILabel_o *v73; // x25
  System_String_o *klass; // x26
  System_String_o *v75; // x1
  MyRoomListControl_c *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  BalanceConfig_c *v83; // x0
  int32_t GalleryReleaseQuestId; // w25
  bool IsQuestClear_40324848; // w25
  System_String_o *v86; // x25
  Il2CppObject *v87; // x0
  const MethodInfo *v88; // x2
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  MyRoomListControl___c_c *v91; // x8
  EventDelegate_Callback_o *_9__17_0; // x25
  Il2CppObject *v93; // x26
  struct MyRoomListControl___c_StaticFields *static_fields; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  __int64 v97; // x0
  int monitor; // w8
  Il2CppObject *v99; // x0
  __int64 v100; // x0
  System_Collections_Generic_List_object__o *v101; // x23
  EventDelegate_Callback_o *v102; // x25
  EventDelegate_o *v103; // x24
  __int64 v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x0
  Il2CppObject *v111; // x0
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  Il2CppClass *v114; // x1
  MyRoomListControl_c *v115; // x0
  __int128 v116; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v117; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v118; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C3E443 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_1C37058(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C37058(&MyRoomListControl_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_MyRoomListControl___c__Awake_b__17_0__);
    sub_1C37058(&MyRoomListControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_8848/*"MYROOM_MENU_NAME_3"*/);
    sub_1C37058(&StringLiteral_8856/*"MYROOM_NOT_OPEN_GALLERY"*/);
    sub_1C37058(&StringLiteral_22153/*"nameLabel"*/);
    sub_1C37058(&StringLiteral_3492/*"CLICK_TITLE"*/);
    sub_1C37058(&StringLiteral_8840/*"MYROOM_MENU_NAME_1"*/);
    sub_1C37058(&StringLiteral_3461/*"CLICK_GAMEOPTION"*/);
    sub_1C37058(&StringLiteral_8846/*"MYROOM_MENU_NAME_15"*/);
    sub_1C37058(&StringLiteral_8849/*"MYROOM_MENU_NAME_4"*/);
    sub_1C37058(&StringLiteral_3470/*"CLICK_NOTICE"*/);
    sub_1C37058(&StringLiteral_3447/*"CLICK_CONTINUE_DEVICE"*/);
    sub_1C37058(&StringLiteral_3482/*"CLICK_SOUND_PLAYER"*/);
    sub_1C37058(&StringLiteral_8845/*"MYROOM_MENU_NAME_14"*/);
    sub_1C37058(&StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C37058(&StringLiteral_8852/*"MYROOM_MENU_NAME_7"*/);
    sub_1C37058(&StringLiteral_8854/*"MYROOM_MENU_NAME_9"*/);
    sub_1C37058(&StringLiteral_3436/*"CLICK_ACCOUNT_LINKAGE"*/);
    sub_1C37058(&StringLiteral_8842/*"MYROOM_MENU_NAME_11"*/);
    sub_1C37058(&StringLiteral_3460/*"CLICK_GALLERY"*/);
    sub_1C37058(&StringLiteral_8847/*"MYROOM_MENU_NAME_2"*/);
    sub_1C37058(&StringLiteral_3466/*"CLICK_MATERIAL"*/);
    sub_1C37058(&StringLiteral_8850/*"MYROOM_MENU_NAME_5"*/);
    sub_1C37058(&StringLiteral_8853/*"MYROOM_MENU_NAME_8"*/);
    sub_1C37058(&StringLiteral_3472/*"CLICK_PROFILE"*/);
    sub_1C37058(&StringLiteral_3477/*"CLICK_SERIAL_CODE"*/);
    sub_1C37058(&StringLiteral_8843/*"MYROOM_MENU_NAME_12"*/);
    sub_1C37058(&StringLiteral_8851/*"MYROOM_MENU_NAME_6"*/);
    sub_1C37058(&StringLiteral_3479/*"CLICK_SERVANT_MENU"*/);
    sub_1C37058(&StringLiteral_3493/*"CLICK_USER_ITEM"*/);
    sub_1C37058(&StringLiteral_3455/*"CLICK_EXCHANGE_SVT_COIN"*/);
    sub_1C37058(&StringLiteral_8844/*"MYROOM_MENU_NAME_13"*/);
    byte_4C3E443 = 1;
  }
  memset(&v118, 0, sizeof(v118));
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8842/*"MYROOM_MENU_NAME_11"*/, 0);
  v5 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v5, v4, 0, (System_String_o *)StringLiteral_3466/*"CLICK_MATERIAL"*/, 0, v6);
  if ( !v3 )
LABEL_88:
    sub_1C372B4(EntityDefinitely);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v5,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MYROOM_MENU_NAME_12"*/, 0);
  v9 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v9, v8, 0, (System_String_o *)StringLiteral_3479/*"CLICK_SERVANT_MENU"*/, 0, v10);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v9,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8846/*"MYROOM_MENU_NAME_15"*/, 0);
  v12 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v12, v11, 0, (System_String_o *)StringLiteral_3460/*"CLICK_GALLERY"*/, 0, v13);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v12,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MYROOM_MENU_NAME_1"*/, 0);
  v15 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v15, v14, 0, (System_String_o *)StringLiteral_3493/*"CLICK_USER_ITEM"*/, 0, v16);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v15,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"MYROOM_MENU_NAME_2"*/, 0);
  v18 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v18, v17, 0, (System_String_o *)StringLiteral_3482/*"CLICK_SOUND_PLAYER"*/, 0, v19);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v18,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"MYROOM_MENU_NAME_3"*/, 0);
  v21 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v21, v20, 0, (System_String_o *)StringLiteral_3472/*"CLICK_PROFILE"*/, 0, v22);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v21,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MYROOM_MENU_NAME_4"*/, 0);
  v24 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v24, (Il2CppObject *)this, (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__, 0);
  v25 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v25, v23, 1, (System_String_o *)StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/, v24, v26);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v25,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8850/*"MYROOM_MENU_NAME_5"*/, 0);
  v28 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v28, v27, 0, (System_String_o *)StringLiteral_3470/*"CLICK_NOTICE"*/, 0, v29);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v28,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8851/*"MYROOM_MENU_NAME_6"*/, 0);
  v31 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v31, v30, 0, (System_String_o *)StringLiteral_3461/*"CLICK_GAMEOPTION"*/, 0, v32);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v31,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v33 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  if ( v33->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8852/*"MYROOM_MENU_NAME_7"*/, 0);
    v35 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v35, v34, 0, (System_String_o *)StringLiteral_3477/*"CLICK_SERIAL_CODE"*/, 0, v36);
    System_Collections_Generic_HashSet_object___Add(
      v3,
      (Il2CppObject *)v35,
      (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8853/*"MYROOM_MENU_NAME_8"*/, 0);
  v38 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v38, v37, 0, (System_String_o *)StringLiteral_3447/*"CLICK_CONTINUE_DEVICE"*/, 0, v39);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v38,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8844/*"MYROOM_MENU_NAME_13"*/, 0);
  v41 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v41, v40, 0, (System_String_o *)StringLiteral_3436/*"CLICK_ACCOUNT_LINKAGE"*/, 0, v42);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v41,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8854/*"MYROOM_MENU_NAME_9"*/, 0);
  v44 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v44, v43, 0, (System_String_o *)StringLiteral_3492/*"CLICK_TITLE"*/, 0, v45);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v44,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
  v47 = 0;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v48 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 480LL);
    if ( !v48 )
      goto LABEL_88;
    if ( (__int64)v47 >= *(int *)(v48 + 24) )
      goto LABEL_37;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    EntityDefinitely = (int *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityDefinitely = (int *)NetworkManager_TypeInfo;
    }
    v49 = BalanceConfig_TypeInfo;
    v50 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL);
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v49->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_88;
    if ( v47 >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      sub_1C372BC(EntityDefinitely);
    if ( !Master_object )
      goto LABEL_88;
    EntityDefinitely = (int *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)Master_object,
                                v50,
                                ExchangeSvtCoinItemIds->m_Items[v47],
                                0);
    if ( !EntityDefinitely )
      goto LABEL_88;
    ++v47;
  }
  while ( EntityDefinitely[7] < 1 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MYROOM_MENU_NAME_14"*/, 0);
  v53 = (MyRoomListControl_MainItemInfo_o *)sub_1C372A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v53, v52, 0, (System_String_o *)StringLiteral_3455/*"CLICK_EXCHANGE_SVT_COIN"*/, 0, v54);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v53,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v117,
    v3,
    (const MethodInfo_365ABF8 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v118 = v117;
  __asm { FMOV            V0.4S, #1.0 }
  v60 = 0.0;
  v116 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_352D2A0 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v118.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v63 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v64 = (UnityEngine_GameObject_o *)v63;
    if ( !v63 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v63, 1, 0);
    GameObjectExtensions__SafeSetParent(v64, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0);
    GameObjectExtensions__SetLocalPosition_36132496(v64, 0.0, v60, 0.0, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v64,
                         (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v66 = UnityEngine_GameObject__GetComponent_object_(
            v64,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v67 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v66, 0, 0);
    if ( v67 )
    {
      if ( !v66 )
        sub_1C372B4(v67);
      v68 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v66->klass->vtable[33].methodPtr)(
              v66,
              v66->klass->vtable[33].method);
      if ( !Component_object )
        sub_1C372B4(v68);
      Component_object[2].klass = (Il2CppClass *)v64;
      sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v64, v69, v70);
      *(_OWORD *)&Component_object[2].monitor = v116;
      *(_OWORD *)&Component_object[4].monitor = v116;
    }
    GameObject = GameObjectExtensions__FindGameObject(v64, (System_String_o *)StringLiteral_22153/*"nameLabel"*/, 0);
    if ( !GameObject )
      sub_1C372B4(0);
    v72 = UnityEngine_GameObject__GetComponent_object_(
            GameObject,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1C372B4(v72);
    v73 = (UILabel_o *)v72;
    if ( !v72 )
      sub_1C372B4(0);
    UILabel__set_text((UILabel_o *)v72, (System_String_o *)current[1].klass, 0);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MYROOM_MENU_NAME_14"*/, 0);
    if ( System_String__op_Equality(klass, v75, 0) )
    {
      UILabel__set_overflowMethod(v73, 2, 0);
      v76 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
        v76 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_49525996(v73, v76->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0.0, 0);
      this->fields.exchangeSvtCoinMenuBoard = v64;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.exchangeSvtCoinMenuBoard, (int32_t)v64, v77, v78);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/, 0) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.favoriteChangeMenuBtn, (int32_t)Component_object, v79, v80);
      this->fields.favoriteTxtLb = v73;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.favoriteTxtLb, (int32_t)v73, v81, v82);
    }
    v83 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v83 = BalanceConfig_TypeInfo;
    }
    GalleryReleaseQuestId = v83->static_fields->GalleryReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40324848 = CondType__IsQuestClear_40324848(GalleryReleaseQuestId, -1, 0, 0);
    if ( !(IsQuestClear_40324848
         | !System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3460/*"CLICK_GALLERY"*/, 0)) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8856/*"MYROOM_NOT_OPEN_GALLERY"*/, 0);
      v87 = UnityEngine_GameObject__GetComponent_object_(
              v64,
              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
      if ( !v87 )
        sub_1C372B4(0);
      MyRoomListItem__EnableBlackOutPanel((MyRoomListItem_o *)v87, v86, v88);
      LODWORD(current[1].monitor) = 1;
      v91 = MyRoomListControl___c_TypeInfo;
      if ( !MyRoomListControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl___c_TypeInfo);
        v91 = MyRoomListControl___c_TypeInfo;
      }
      _9__17_0 = v91->static_fields->__9__17_0;
      if ( !_9__17_0 )
      {
        if ( !v91->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v91);
          v91 = MyRoomListControl___c_TypeInfo;
        }
        v93 = (Il2CppObject *)v91->static_fields->__9;
        _9__17_0 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(_9__17_0, v93, (intptr_t)Method_MyRoomListControl___c__Awake_b__17_0__, 0);
        static_fields = MyRoomListControl___c_TypeInfo->static_fields;
        static_fields->__9__17_0 = _9__17_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v95, v96);
      }
      current[2].monitor = _9__17_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&current[2].monitor, (int32_t)_9__17_0, v89, v90);
      if ( !Component_object )
        sub_1C372B4(v97);
      *(_OWORD *)&Component_object[3].monitor = v116;
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v99 = UnityEngine_GameObject__GetComponent_object_(
                v64,
                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v99 )
          sub_1C372B4(0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v99, 0, 0);
        if ( !Component_object )
          sub_1C372B4(v100);
        v101 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v102 = (EventDelegate_Callback_o *)current[2].monitor;
        v103 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
        EventDelegate___ctor_49273948(v103, v102, 0);
        if ( !v101 )
          sub_1C372B4(v104);
        items = v101->fields._items;
        v108 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v101->fields._version;
        if ( !items )
          sub_1C372B4(v104);
        size = v101->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v101,
            (Il2CppObject *)v103,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = &items->obj.klass + size;
          v101->fields._size = size + 1;
          v110[4] = (Il2CppClass *)v103;
          sub_1C36FFC((CGThumbnailListItem_o *)(v110 + 4), (int32_t)v103, v105, v106);
        }
      }
    }
    else
    {
      v111 = UnityEngine_GameObject__GetComponent_object_(
               v64,
               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v111 )
        sub_1C372B4(0);
      v114 = current[2].klass;
      v111[2].monitor = v114;
      sub_1C36FFC((CGThumbnailListItem_o *)&v111[2].monitor, (int32_t)v114, v112, v113);
    }
    v115 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v115 = MyRoomListControl_TypeInfo;
    }
    v60 = v60 - v115->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_352D29C *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_36132496(this->fields.itemDummy, 0.0, v60, 0.0, 0);
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

  if ( (byte_4C3E447 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C37058(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_1C37058(&OpeningMovieData_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_3457/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C37058(&StringLiteral_8839/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E447 = 1;
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
    sub_1C372B4(myRoomFsm);
  }
  v4 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_MyRoomListControl_ClickFavoriteChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0);
  v9 = System_String__Format(v8, fsmTemplate, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  UIScrollView_o *menuListScrollView; // x0

  if ( (byte_4C3E449 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E449 = 1;
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
    UnityEngine_Object__Destroy_71266752(v6, 0);
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
      sub_1C372B4(menuListScrollView);
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

  if ( (byte_4C3E446 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E446 = 1;
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
        sub_1C372BC(this);
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = System_Int32__ToString((int32_t)&v11, 0);
        v10 = System_String__Concat_63561656(prefixStr, v9, 0);
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
    sub_1C372B4(this);
  }
}


void MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  long double v2; // q8
  _BOOL8 _40427704; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v6; // x2
  MyRoomListControl_o *v7; // x0
  const MethodInfo *v8; // x3
  void *noticeComp; // x0
  struct MyRoomControl_o *myRoomControl; // x8
  TerminalPramsManager_c *v11; // x0
  TerminalPramsManager_c *v12; // x0
  System_String_o *TransitionScrollTabName_k__BackingField; // x20
  System_String_o *v14; // x20
  TerminalPramsManager_c *v15; // x0
  int32_t childCount; // w0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int v19; // w26
  int32_t v20; // w21
  int v21; // w27
  int32_t v22; // w22
  UnityEngine_Object_o *Child; // x23
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  __int64 v26; // x20
  TerminalPramsManager_c *v27; // x0
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v30; // x8
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E444 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_8855/*"MYROOM_NOTICE_NAME_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E444 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40427704 = TutorialFlag__Get_40427704(106, 0);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _40427704;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_40427704, noticeListGrid, v6);
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
  if ( !byte_4C3E4C4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3E4C4 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  LODWORD(v2) = 0;
  if ( !System_String__IsNullOrEmpty(v11->static_fields->_TransitionScrollTabName_k__BackingField, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3E4C4 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3E4C4 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    TransitionScrollTabName_k__BackingField = v12->static_fields->_TransitionScrollTabName_k__BackingField;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get(TransitionScrollTabName_k__BackingField, 0);
    if ( System_String__op_Inequality(v14, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3E4C4 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3E4C4 = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v14, v15->static_fields->_TransitionScrollTabName_k__BackingField, 0) )
      {
        noticeComp = this->fields.myRoomListGrid;
        if ( !noticeComp )
          goto LABEL_67;
        noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0);
        if ( !noticeComp )
          goto LABEL_67;
        childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)noticeComp, 0);
        v19 = childCount - 1;
        if ( childCount >= 1 )
        {
          v20 = childCount;
          v21 = 0;
          v22 = 0;
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
                                              v22,
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
                                                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
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
                if ( System_String__op_Equality(monitor[52], v14, 0) )
                  goto LABEL_51;
              }
              ++v21;
            }
            if ( v20 == ++v22 )
              goto LABEL_51;
          }
LABEL_67:
          sub_1C372B4(noticeComp);
        }
        v21 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = StringLiteral_1/*""*/;
        if ( !byte_4C3CF09 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3CF09 = 1;
        }
        v27 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v27 = TerminalPramsManager_TypeInfo;
        }
        *(float *)&v2 = (float)v21 / (float)v19;
        p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v27->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = (CGThumbnailListItem_c *)v26;
        sub_1C36FFC(p_TransitionScrollTabName_k__BackingField, v26, v17, v18);
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
    v31.fields.r = 0.5;
    v31.fields.g = 0.5;
    v31.fields.b = 0.5;
    v31.fields.a = 1.0;
    UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v31, 0);
    favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
    if ( !favoriteChangeMenuBtn )
      goto LABEL_67;
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_C0E420;
    v30 = this->fields.favoriteChangeMenuBtn;
    if ( !v30 )
      goto LABEL_67;
    v30->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_C0E420;
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
  Il2CppObject *ComponentInChildren_object__51242636; // x22
  UnityEngine_GameObject_o *v20; // x0
  MyRoomListControl_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x22
  __int128 v23; // [xsp+0h] [xbp-70h]

  if ( (byte_4C3E445 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C37058(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E445 = 1;
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
                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__51242636(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                  (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0);
          if ( !v15 )
            break;
          v15[2].klass = (Il2CppClass *)this;
          v18 = v15 + 2;
          sub_1C36FFC((CGThumbnailListItem_o *)v18, (int32_t)this, v16, v17);
          *(_OWORD *)&v18->monitor = v23;
          *(_OWORD *)&v18[2].monitor = v23;
        }
        ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__51242636,
                                        0,
                                        0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__51242636 )
            break;
          v20 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__51242636,
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
    sub_1C372B4(this);
  }
}


void MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E448 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E448 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v11, v12);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.EventName, (int32_t)eventName, v13, v14);
  this->fields.ClickAction = clickAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ClickAction, (int32_t)clickAction, v15, v16);
}


void MyRoomListControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E44B & 1) == 0 )
  {
    sub_1C37058(&MyRoomListControl___c_TypeInfo);
    byte_4C3E44B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MyRoomListControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomListControl___c_TypeInfo->static_fields->__9 = (struct MyRoomListControl___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MyRoomListControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MyRoomListControl___c___ctor(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomListControl___c___Awake_b__17_0(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C3E44C & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomListControl___c__Awake_b__17_0__);
    byte_4C3E44C = 1;
  }
  v2 = Method_MyRoomListControl___c__Awake_b__17_0__;
  if ( (*((_BYTE *)Method_MyRoomListControl___c__Awake_b__17_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C37070(Method_MyRoomListControl___c__Awake_b__17_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3703C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}