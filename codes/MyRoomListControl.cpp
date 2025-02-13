void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4BD7CE7 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomListControl_TypeInfo);
    byte_4BD7CE7 = 1;
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
  EventDelegate_Callback_o *v22; // x22
  MyRoomListControl_MainItemInfo_o *v23; // x23
  const MethodInfo *v24; // x5
  System_String_o *v25; // x21
  MyRoomListControl_MainItemInfo_o *v26; // x22
  const MethodInfo *v27; // x5
  System_String_o *v28; // x21
  MyRoomListControl_MainItemInfo_o *v29; // x22
  const MethodInfo *v30; // x5
  BalanceConfig_c *v31; // x0
  System_String_o *v32; // x21
  MyRoomListControl_MainItemInfo_o *v33; // x22
  const MethodInfo *v34; // x5
  System_String_o *v35; // x21
  MyRoomListControl_MainItemInfo_o *v36; // x22
  const MethodInfo *v37; // x5
  System_String_o *v38; // x21
  MyRoomListControl_MainItemInfo_o *v39; // x22
  const MethodInfo *v40; // x5
  System_String_o *v41; // x21
  MyRoomListControl_MainItemInfo_o *v42; // x22
  const MethodInfo *v43; // x5
  Il2CppObject *Master_object; // x22
  unsigned __int64 v45; // x27
  __int64 v46; // x8
  BalanceConfig_c *v47; // x8
  int64_t v48; // x23
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v50; // x21
  MyRoomListControl_MainItemInfo_o *v51; // x22
  const MethodInfo *v52; // x5
  float v58; // s8
  Il2CppObject *current; // x27
  Il2CppObject *listItemBase; // x23
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  UnityEngine_GameObject_o *v63; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v65; // x25
  _BOOL8 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x0
  __int64 v69; // x1
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v71; // x1
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  UILabel_o *v74; // x25
  System_String_o *klass; // x26
  System_String_o *v76; // x1
  MyRoomListControl_c *v77; // x0
  int monitor; // w8
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x0
  __int64 v82; // x1
  System_Collections_Generic_List_object__o *v83; // x23
  EventDelegate_Callback_o *v84; // x25
  EventDelegate_o *v85; // x24
  __int64 v86; // x0
  __int64 v87; // x1
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  Il2CppClass **v91; // x0
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  Il2CppClass *v94; // x1
  MyRoomListControl_c *v95; // x0
  __int128 v96; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v97; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v98; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BD7CE0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_1C21E38(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C21E38(&MyRoomListControl_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_8993/*"MYROOM_MENU_NAME_3"*/);
    sub_1C21E38(&StringLiteral_22386/*"nameLabel"*/);
    sub_1C21E38(&StringLiteral_3627/*"CLICK_TITLE"*/);
    sub_1C21E38(&StringLiteral_8986/*"MYROOM_MENU_NAME_1"*/);
    sub_1C21E38(&StringLiteral_3600/*"CLICK_GAMEOPTION"*/);
    sub_1C21E38(&StringLiteral_8994/*"MYROOM_MENU_NAME_4"*/);
    sub_1C21E38(&StringLiteral_3609/*"CLICK_NOTICE"*/);
    sub_1C21E38(&StringLiteral_3588/*"CLICK_CONTINUE_DEVICE"*/);
    sub_1C21E38(&StringLiteral_3619/*"CLICK_SOUND_PLAYER"*/);
    sub_1C21E38(&StringLiteral_8991/*"MYROOM_MENU_NAME_14"*/);
    sub_1C21E38(&StringLiteral_3597/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C21E38(&StringLiteral_8997/*"MYROOM_MENU_NAME_7"*/);
    sub_1C21E38(&StringLiteral_8999/*"MYROOM_MENU_NAME_9"*/);
    sub_1C21E38(&StringLiteral_3577/*"CLICK_ACCOUNT_LINKAGE"*/);
    sub_1C21E38(&StringLiteral_8988/*"MYROOM_MENU_NAME_11"*/);
    sub_1C21E38(&StringLiteral_8992/*"MYROOM_MENU_NAME_2"*/);
    sub_1C21E38(&StringLiteral_3605/*"CLICK_MATERIAL"*/);
    sub_1C21E38(&StringLiteral_8995/*"MYROOM_MENU_NAME_5"*/);
    sub_1C21E38(&StringLiteral_8998/*"MYROOM_MENU_NAME_8"*/);
    sub_1C21E38(&StringLiteral_3611/*"CLICK_PROFILE"*/);
    sub_1C21E38(&StringLiteral_3616/*"CLICK_SERIAL_CODE"*/);
    sub_1C21E38(&StringLiteral_8989/*"MYROOM_MENU_NAME_12"*/);
    sub_1C21E38(&StringLiteral_8996/*"MYROOM_MENU_NAME_6"*/);
    sub_1C21E38(&StringLiteral_3617/*"CLICK_SERVANT_MENU"*/);
    sub_1C21E38(&StringLiteral_3628/*"CLICK_USER_ITEM"*/);
    sub_1C21E38(&StringLiteral_3595/*"CLICK_EXCHANGE_SVT_COIN"*/);
    sub_1C21E38(&StringLiteral_8990/*"MYROOM_MENU_NAME_13"*/);
    byte_4BD7CE0 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8988/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v5 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v5, v4, 0, (System_String_o *)StringLiteral_3605/*"CLICK_MATERIAL"*/, 0LL, v6);
  if ( !v3 )
LABEL_72:
    sub_1C22094(EntityDefinitely, v8);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v5,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8989/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v10 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v10, v9, 0, (System_String_o *)StringLiteral_3617/*"CLICK_SERVANT_MENU"*/, 0LL, v11);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v10,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8986/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v13 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v13, v12, 0, (System_String_o *)StringLiteral_3628/*"CLICK_USER_ITEM"*/, 0LL, v14);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v13,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8992/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v16 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v16, v15, 0, (System_String_o *)StringLiteral_3619/*"CLICK_SOUND_PLAYER"*/, 0LL, v17);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v16,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8993/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v19 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v19, v18, 0, (System_String_o *)StringLiteral_3611/*"CLICK_PROFILE"*/, 0LL, v20);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v19,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8994/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v22 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__,
    0LL);
  v23 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v23, v21, 1, (System_String_o *)StringLiteral_3597/*"CLICK_FAVORITE_CHANGE"*/, v22, v24);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v23,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8995/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v26 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v26, v25, 0, (System_String_o *)StringLiteral_3609/*"CLICK_NOTICE"*/, 0LL, v27);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v26,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8996/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v29 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v29, v28, 0, (System_String_o *)StringLiteral_3600/*"CLICK_GAMEOPTION"*/, 0LL, v30);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v29,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  if ( v31->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8997/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v33 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v33, v32, 0, (System_String_o *)StringLiteral_3616/*"CLICK_SERIAL_CODE"*/, 0LL, v34);
    System_Collections_Generic_HashSet_object___Add(
      v3,
      (Il2CppObject *)v33,
      (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8998/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v36 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v36, v35, 0, (System_String_o *)StringLiteral_3588/*"CLICK_CONTINUE_DEVICE"*/, 0LL, v37);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v36,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8990/*"MYROOM_MENU_NAME_13"*/, 0LL);
  v39 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v39, v38, 0, (System_String_o *)StringLiteral_3577/*"CLICK_ACCOUNT_LINKAGE"*/, 0LL, v40);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v39,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8999/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v42 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v42, v41, 0, (System_String_o *)StringLiteral_3627/*"CLICK_TITLE"*/, 0LL, v43);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v42,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  v45 = 0LL;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v46 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 456LL);
    if ( !v46 )
      goto LABEL_72;
    if ( (__int64)v45 >= *(int *)(v46 + 24) )
      goto LABEL_37;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    EntityDefinitely = (int *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityDefinitely = (int *)NetworkManager_TypeInfo;
    }
    v47 = BalanceConfig_TypeInfo;
    v48 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL);
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v47->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_72;
    if ( v45 >= ExchangeSvtCoinItemIds->max_length )
      sub_1C2209C(EntityDefinitely, v8);
    if ( !Master_object )
      goto LABEL_72;
    EntityDefinitely = (int *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)Master_object,
                                v48,
                                ExchangeSvtCoinItemIds->m_Items[v45 + 1],
                                0LL);
    if ( !EntityDefinitely )
      goto LABEL_72;
    ++v45;
  }
  while ( EntityDefinitely[7] < 1 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8991/*"MYROOM_MENU_NAME_14"*/, 0LL);
  v51 = (MyRoomListControl_MainItemInfo_o *)sub_1C22084(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v51, v50, 0, (System_String_o *)StringLiteral_3595/*"CLICK_EXCHANGE_SVT_COIN"*/, 0LL, v52);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v51,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v97,
    v3,
    (const MethodInfo_350970C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v98 = v97;
  __asm { FMOV            V0.4S, #1.0 }
  v58 = 0.0;
  v96 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_33E0D2C *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v98.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v61 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v63 = (UnityEngine_GameObject_o *)v61;
    if ( !v61 )
      sub_1C22094(0LL, v62);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v61, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v63, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_34797772(v63, 0.0, v58, 0.0, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v63,
                         (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v65 = UnityEngine_GameObject__GetComponent_object_(
            v63,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v66 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v65, 0LL, 0LL);
    if ( v66 )
    {
      if ( !v65 )
        sub_1C22094(v66, v67);
      v68 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v65->klass->vtable[33].method)(
              v65,
              v65->klass->vtable[34].methodPtr);
      if ( !Component_object )
        sub_1C22094(v68, v69);
      Component_object[2].klass = (Il2CppClass *)v63;
      sub_1C21DDC(&Component_object[2], v63);
      *(_OWORD *)&Component_object[2].monitor = v96;
      *(_OWORD *)&Component_object[4].monitor = v96;
    }
    GameObject = GameObjectExtensions__FindGameObject(v63, (System_String_o *)StringLiteral_22386/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_1C22094(0LL, v71);
    v72 = UnityEngine_GameObject__GetComponent_object_(
            GameObject,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1C22094(v72, v73);
    v74 = (UILabel_o *)v72;
    if ( !v72 )
      sub_1C22094(0LL, v73);
    UILabel__set_text((UILabel_o *)v72, (System_String_o *)current[1].klass, 0LL);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_8991/*"MYROOM_MENU_NAME_14"*/, 0LL);
    if ( System_String__op_Equality(klass, v76, 0LL) )
    {
      UILabel__set_overflowMethod(v74, 2, 0LL);
      v77 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
        v77 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_48213524(v74, v77->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0.0, 0LL);
      this->fields.exchangeSvtCoinMenuBoard = v63;
      sub_1C21DDC(&this->fields.exchangeSvtCoinMenuBoard, v63);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3597/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1C21DDC(&this->fields.favoriteChangeMenuBtn, Component_object);
      this->fields.favoriteTxtLb = v74;
      sub_1C21DDC(&this->fields.favoriteTxtLb, v74);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v79 = UnityEngine_GameObject__GetComponent_object_(
                v63,
                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v79 )
          sub_1C22094(0LL, v80);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v79, 0, 0LL);
        if ( !Component_object )
          sub_1C22094(v81, v82);
        v83 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v84 = (EventDelegate_Callback_o *)current[2].monitor;
        v85 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
        EventDelegate___ctor_47961380(v85, v84, 0LL);
        if ( !v83 )
          sub_1C22094(v86, v87);
        items = v83->fields._items;
        v89 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v83->fields._version;
        if ( !items )
          sub_1C22094(v86, v87);
        size = v83->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v83,
            (Il2CppObject *)v85,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &items->obj.klass + size;
          v83->fields._size = size + 1;
          v91[4] = (Il2CppClass *)v85;
          sub_1C21DDC(v91 + 4, v85);
        }
      }
    }
    else
    {
      v92 = UnityEngine_GameObject__GetComponent_object_(
              v63,
              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v92 )
        sub_1C22094(0LL, v93);
      v94 = current[2].klass;
      v92[2].monitor = v94;
      sub_1C21DDC(&v92[2].monitor, v94);
    }
    v95 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v95 = MyRoomListControl_TypeInfo;
    }
    v58 = v58 - v95->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_33E0D28 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_34797772(this->fields.itemDummy, 0.0, v58, 0.0, 0LL);
}


void __fastcall MyRoomListControl__ClickFavoriteChange(MyRoomListControl_o *this, const MethodInfo *method)
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

  if ( (byte_4BD7CE4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1C21E38(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_1C21E38(&OpeningMovieData_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_3597/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1C21E38(&StringLiteral_8985/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7CE4 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3597/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_18:
    sub_1C22094(myRoomFsm, method);
  }
  v4 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_MyRoomListControl_ClickFavoriteChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8985/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v9 = System_String__Format(v8, fsmTemplate, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
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
    0LL,
    0.0,
    0LL);
}


void __fastcall MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(MyRoomListControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exchangeSvtCoinMenuBoard; // x20
  UnityEngine_GameObject_o *itemDummy; // x20
  float LocalPositionY; // s0
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  UIScrollView_o *menuListScrollView; // x0

  if ( (byte_4BD7CE6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7CE6 = 1;
  }
  exchangeSvtCoinMenuBoard = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(exchangeSvtCoinMenuBoard, 0LL, 0LL) )
  {
    itemDummy = this->fields.itemDummy;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(this->fields.exchangeSvtCoinMenuBoard, 0LL);
    GameObjectExtensions__SetLocalPositionY(itemDummy, LocalPositionY, 0LL);
    v6 = (UnityEngine_Object_o *)this->fields.exchangeSvtCoinMenuBoard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v6, 0LL);
    menuListScrollView = this->fields.menuListScrollView;
    if ( !menuListScrollView
      || (((void (__fastcall *)(UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))menuListScrollView->klass->vtable._9_SetDragAmount.method)(
            menuListScrollView,
            0LL,
            menuListScrollView->klass->vtable._10_MoveRelative.methodPtr,
            0.0,
            0.0),
          (menuListScrollView = this->fields.menuListScrollView) == 0LL)
      || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))menuListScrollView->klass->vtable._8_UpdateScrollbars.method)(
            menuListScrollView,
            1LL,
            menuListScrollView->klass->vtable._9_SetDragAmount.methodPtr),
          (menuListScrollView = this->fields.menuListScrollView) == 0LL) )
    {
      sub_1C22094(menuListScrollView, v7);
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
  signed int max_length; // w9
  int v7; // w8
  Il2CppObject *Component_object; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  int v11; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BD7CE3 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7CE3 = 1;
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
        sub_1C2209C(this, items);
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = System_Int32__ToString((int32_t)&v11, 0LL);
        v10 = System_String__Concat_63115476(prefixStr, v9, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (MyRoomListControl_o *)LocalizationManager__Get(v10, 0LL);
        if ( !Component_object )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_object, (System_String_o *)this, 0LL);
      }
      v7 = v11 + 1;
      v11 = v7;
      max_length = items->max_length;
      if ( v7 >= max_length )
        return;
    }
LABEL_17:
    sub_1C22094(this, items);
  }
}


void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  long double v2; // q8
  _BOOL8 _38930984; // x0
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
  int v18; // w26
  int32_t v19; // w21
  int v20; // w27
  int32_t v21; // w22
  UnityEngine_Object_o *Child; // x23
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  struct System_String_o *v25; // x20
  TerminalPramsManager_c *v26; // x0
  struct System_String_o **p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v29; // x8
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7CE1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_9000/*"MYROOM_NOTICE_NAME_"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7CE1 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38930984 = TutorialFlag__Get_38930984(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _38930984;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_38930984, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_9000/*"MYROOM_NOTICE_NAME_"*/, v8);
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7D55 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7D55 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  LODWORD(v2) = 0;
  if ( !System_String__IsNullOrEmpty(v12->static_fields->_TransitionScrollTabName_k__BackingField, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7D55 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7D55 = 1;
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
    v15 = LocalizationManager__Get(TransitionScrollTabName_k__BackingField, 0LL);
    if ( System_String__op_Inequality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7D55 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7D55 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v15, v16->static_fields->_TransitionScrollTabName_k__BackingField, 0LL) )
      {
        noticeComp = this->fields.myRoomListGrid;
        if ( !noticeComp )
          goto LABEL_67;
        noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0LL);
        if ( !noticeComp )
          goto LABEL_67;
        childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)noticeComp, 0LL);
        v18 = childCount - 1;
        if ( childCount >= 1 )
        {
          v19 = childCount;
          v20 = 0;
          v21 = 0;
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
                                              v21,
                                              0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            noticeComp = (void *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
            if ( ((unsigned __int8)noticeComp & 1) == 0 )
            {
              if ( !Child )
                break;
              Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)Child,
                                                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              noticeComp = (void *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
              if ( ((unsigned __int8)noticeComp & 1) != 0 )
              {
                if ( !Component_object )
                  break;
                monitor = (System_String_o **)Component_object[1].monitor;
                if ( !monitor )
                  break;
                if ( System_String__op_Equality(monitor[52], v15, 0LL) )
                  goto LABEL_51;
              }
              ++v20;
            }
            if ( v19 == ++v21 )
              goto LABEL_51;
          }
LABEL_67:
          sub_1C22094(noticeComp, v10);
        }
        v20 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = (struct System_String_o *)StringLiteral_1/*""*/;
        if ( !byte_4BD7186 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD7186 = 1;
        }
        v26 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v26 = TerminalPramsManager_TypeInfo;
        }
        *(float *)&v2 = (float)v20 / (float)v18;
        p_TransitionScrollTabName_k__BackingField = &v26->static_fields->_TransitionScrollTabName_k__BackingField;
        *p_TransitionScrollTabName_k__BackingField = v25;
        sub_1C21DDC(p_TransitionScrollTabName_k__BackingField, v25);
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
    v2);
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
    v30.fields.r = 0.5;
    v30.fields.g = 0.5;
    v30.fields.b = 0.5;
    v30.fields.a = 1.0;
    UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v30, 0LL);
    favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
    if ( !favoriteChangeMenuBtn )
      goto LABEL_67;
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_BFDCB0;
    v29 = this->fields.favoriteChangeMenuBtn;
    if ( !v29 )
      goto LABEL_67;
    v29->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BFDCB0;
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
  int32_t childCount; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  UnityEngine_Object_o *Child; // x22
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v15; // x24
  Il2CppObject *v16; // x24
  Il2CppObject *ComponentInChildren_object__49965836; // x22
  UnityEngine_GameObject_o *v18; // x0
  MyRoomListControl_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x22
  __int128 v21; // [xsp+0h] [xbp-70h]

  if ( (byte_4BD7CE2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1C21E38(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7CE2 = 1;
  }
  if ( !grid )
    goto LABEL_31;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount;
    v6 = 0;
    __asm { FMOV            V0.4S, #1.0 }
    v21 = _Q0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v6, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Child )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Child,
                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__49965836(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v15 = GameObjectExtensions__SafeGetComponent_object_(
                  gameObject,
                  (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0LL);
          if ( !v15 )
            break;
          v15[2].klass = (Il2CppClass *)this;
          v16 = v15 + 2;
          sub_1C21DDC(v16, this);
          *(_OWORD *)&v16->monitor = v21;
          *(_OWORD *)&v16[2].monitor = v21;
        }
        ComponentInChildren_object__49965836 = UnityEngine_Component__GetComponentInChildren_object__49965836(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__49965836,
                                        0LL,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__49965836 )
            break;
          v18 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__49965836,
                  0LL);
          v19 = MyRoomListControl_TypeInfo;
          v20 = v18;
          if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v19 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v20, v19->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_31:
    sub_1C22094(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7CE5 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7CE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
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
  sub_1C21DDC(&this->fields, name);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1C21DDC(&this->fields.EventName, eventName);
  this->fields.ClickAction = clickAction;
  sub_1C21DDC(&this->fields.ClickAction, clickAction);
}