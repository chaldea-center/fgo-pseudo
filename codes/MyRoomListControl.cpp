void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4B32A08 & 1) == 0 )
  {
    sub_1BD3458(&MyRoomListControl_TypeInfo, v1);
    byte_4B32A08 = 1;
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
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  System_Collections_Generic_HashSet_T__o *v53; // x20
  System_String_o *v54; // x22
  MyRoomListControl_MainItemInfo_o *v55; // x21
  const MethodInfo *v56; // x5
  int *EntityDefinitely; // x0
  __int64 v58; // x1
  System_String_o *v59; // x21
  MyRoomListControl_MainItemInfo_o *v60; // x22
  const MethodInfo *v61; // x5
  System_String_o *v62; // x21
  MyRoomListControl_MainItemInfo_o *v63; // x22
  const MethodInfo *v64; // x5
  System_String_o *v65; // x21
  MyRoomListControl_MainItemInfo_o *v66; // x22
  const MethodInfo *v67; // x5
  System_String_o *v68; // x21
  MyRoomListControl_MainItemInfo_o *v69; // x22
  const MethodInfo *v70; // x5
  System_String_o *v71; // x21
  EventDelegate_Callback_o *v72; // x22
  MyRoomListControl_MainItemInfo_o *v73; // x23
  const MethodInfo *v74; // x5
  System_String_o *v75; // x21
  MyRoomListControl_MainItemInfo_o *v76; // x22
  const MethodInfo *v77; // x5
  System_String_o *v78; // x21
  MyRoomListControl_MainItemInfo_o *v79; // x22
  const MethodInfo *v80; // x5
  BalanceConfig_c *v81; // x0
  System_String_o *v82; // x21
  MyRoomListControl_MainItemInfo_o *v83; // x22
  const MethodInfo *v84; // x5
  System_String_o *v85; // x21
  MyRoomListControl_MainItemInfo_o *v86; // x22
  const MethodInfo *v87; // x5
  System_String_o *v88; // x21
  MyRoomListControl_MainItemInfo_o *v89; // x22
  const MethodInfo *v90; // x5
  System_String_o *v91; // x21
  MyRoomListControl_MainItemInfo_o *v92; // x22
  const MethodInfo *v93; // x5
  Il2CppObject *Master_object; // x22
  unsigned __int64 v95; // x27
  __int64 v96; // x8
  BalanceConfig_c *v97; // x8
  int64_t v98; // x23
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v100; // x21
  MyRoomListControl_MainItemInfo_o *v101; // x22
  const MethodInfo *v102; // x5
  float v108; // s8
  Il2CppObject *current; // x27
  Il2CppObject *listItemBase; // x23
  Il2CppObject *v111; // x0
  __int64 v112; // x1
  UnityEngine_GameObject_o *v113; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v115; // x25
  _BOOL8 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x0
  __int64 v119; // x1
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  UILabel_o *v124; // x25
  System_String_o *klass; // x26
  System_String_o *v126; // x1
  MyRoomListControl_c *v127; // x0
  int monitor; // w8
  Il2CppObject *v129; // x0
  __int64 v130; // x1
  __int64 v131; // x0
  __int64 v132; // x1
  System_Collections_Generic_List_object__o *v133; // x23
  EventDelegate_Callback_o *v134; // x25
  EventDelegate_o *v135; // x24
  __int64 v136; // x0
  __int64 v137; // x1
  struct System_Object_array *items; // x8
  _QWORD *v139; // x9
  __int64 size; // x10
  Il2CppClass **v141; // x0
  Il2CppObject *v142; // x0
  __int64 v143; // x1
  MyRoomListControl_c *v144; // x0
  __int128 v145; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v146; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v147; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B32A01 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&EventDelegate_Callback_TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__, v8);
    sub_1BD3458(&EventDelegate_TypeInfo, v9);
    sub_1BD3458(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v10);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v11);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v16);
    sub_1BD3458(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventDelegate__Add__, v18);
    sub_1BD3458(&LocalizationManager_TypeInfo, v19);
    sub_1BD3458(&MyRoomListControl_MainItemInfo_TypeInfo, v20);
    sub_1BD3458(&Method_MyRoomListControl_ClickFavoriteChange__, v21);
    sub_1BD3458(&MyRoomListControl_TypeInfo, v22);
    sub_1BD3458(&NetworkManager_TypeInfo, v23);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v24);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v25);
    sub_1BD3458(&StringLiteral_8946/*"MYROOM_MENU_NAME_3"*/, v26);
    sub_1BD3458(&StringLiteral_22255/*"nameLabel"*/, v27);
    sub_1BD3458(&StringLiteral_3610/*"CLICK_TITLE"*/, v28);
    sub_1BD3458(&StringLiteral_8939/*"MYROOM_MENU_NAME_1"*/, v29);
    sub_1BD3458(&StringLiteral_3583/*"CLICK_GAMEOPTION"*/, v30);
    sub_1BD3458(&StringLiteral_8947/*"MYROOM_MENU_NAME_4"*/, v31);
    sub_1BD3458(&StringLiteral_3592/*"CLICK_NOTICE"*/, v32);
    sub_1BD3458(&StringLiteral_3571/*"CLICK_CONTINUE_DEVICE"*/, v33);
    sub_1BD3458(&StringLiteral_3602/*"CLICK_SOUND_PLAYER"*/, v34);
    sub_1BD3458(&StringLiteral_8944/*"MYROOM_MENU_NAME_14"*/, v35);
    sub_1BD3458(&StringLiteral_3580/*"CLICK_FAVORITE_CHANGE"*/, v36);
    sub_1BD3458(&StringLiteral_8950/*"MYROOM_MENU_NAME_7"*/, v37);
    sub_1BD3458(&StringLiteral_8952/*"MYROOM_MENU_NAME_9"*/, v38);
    sub_1BD3458(&StringLiteral_3560/*"CLICK_ACCOUNT_LINKAGE"*/, v39);
    sub_1BD3458(&StringLiteral_8941/*"MYROOM_MENU_NAME_11"*/, v40);
    sub_1BD3458(&StringLiteral_8945/*"MYROOM_MENU_NAME_2"*/, v41);
    sub_1BD3458(&StringLiteral_3588/*"CLICK_MATERIAL"*/, v42);
    sub_1BD3458(&StringLiteral_8948/*"MYROOM_MENU_NAME_5"*/, v43);
    sub_1BD3458(&StringLiteral_8951/*"MYROOM_MENU_NAME_8"*/, v44);
    sub_1BD3458(&StringLiteral_3594/*"CLICK_PROFILE"*/, v45);
    sub_1BD3458(&StringLiteral_3599/*"CLICK_SERIAL_CODE"*/, v46);
    sub_1BD3458(&StringLiteral_8942/*"MYROOM_MENU_NAME_12"*/, v47);
    sub_1BD3458(&StringLiteral_8949/*"MYROOM_MENU_NAME_6"*/, v48);
    sub_1BD3458(&StringLiteral_3600/*"CLICK_SERVANT_MENU"*/, v49);
    sub_1BD3458(&StringLiteral_3611/*"CLICK_USER_ITEM"*/, v50);
    sub_1BD3458(&StringLiteral_3578/*"CLICK_EXCHANGE_SVT_COIN"*/, v51);
    sub_1BD3458(&StringLiteral_8943/*"MYROOM_MENU_NAME_13"*/, v52);
    byte_4B32A01 = 1;
  }
  memset(&v147, 0, sizeof(v147));
  v53 = (System_Collections_Generic_HashSet_T__o *)sub_1BD36A4(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v53,
    (const MethodInfo_347A0FC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8941/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v55 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v55, v54, 0, (System_String_o *)StringLiteral_3588/*"CLICK_MATERIAL"*/, 0LL, v56);
  if ( !v53 )
LABEL_72:
    sub_1BD36B4(EntityDefinitely, v58);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v55,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8942/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v60 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v60, v59, 0, (System_String_o *)StringLiteral_3600/*"CLICK_SERVANT_MENU"*/, 0LL, v61);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v60,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8939/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v63 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v63, v62, 0, (System_String_o *)StringLiteral_3611/*"CLICK_USER_ITEM"*/, 0LL, v64);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v63,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8945/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v66 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v66, v65, 0, (System_String_o *)StringLiteral_3602/*"CLICK_SOUND_PLAYER"*/, 0LL, v67);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v66,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_8946/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v69 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v69, v68, 0, (System_String_o *)StringLiteral_3594/*"CLICK_PROFILE"*/, 0LL, v70);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v69,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_8947/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v72 = (EventDelegate_Callback_o *)sub_1BD36A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v72,
    (Il2CppObject *)this,
    (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__,
    0LL);
  v73 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v73, v71, 1, (System_String_o *)StringLiteral_3580/*"CLICK_FAVORITE_CHANGE"*/, v72, v74);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v73,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_8948/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v76 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v76, v75, 0, (System_String_o *)StringLiteral_3592/*"CLICK_NOTICE"*/, 0LL, v77);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v76,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8949/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v79 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v79, v78, 0, (System_String_o *)StringLiteral_3583/*"CLICK_GAMEOPTION"*/, 0LL, v80);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v79,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v81 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v81 = BalanceConfig_TypeInfo;
  }
  if ( v81->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_8950/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v83 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v83, v82, 0, (System_String_o *)StringLiteral_3599/*"CLICK_SERIAL_CODE"*/, 0LL, v84);
    System_Collections_Generic_HashSet_object___Add(
      v53,
      (Il2CppObject *)v83,
      (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_8951/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v86 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v86, v85, 0, (System_String_o *)StringLiteral_3571/*"CLICK_CONTINUE_DEVICE"*/, 0LL, v87);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v86,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_8943/*"MYROOM_MENU_NAME_13"*/, 0LL);
  v89 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v89, v88, 0, (System_String_o *)StringLiteral_3560/*"CLICK_ACCOUNT_LINKAGE"*/, 0LL, v90);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v89,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_8952/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v92 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v92, v91, 0, (System_String_o *)StringLiteral_3610/*"CLICK_TITLE"*/, 0LL, v93);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v92,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
  v95 = 0LL;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v96 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 456LL);
    if ( !v96 )
      goto LABEL_72;
    if ( (__int64)v95 >= *(int *)(v96 + 24) )
      goto LABEL_37;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B31D77 )
    {
      sub_1BD3458(&NetworkManager_TypeInfo, v58);
      byte_4B31D77 = 1;
    }
    EntityDefinitely = (int *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityDefinitely = (int *)NetworkManager_TypeInfo;
    }
    v97 = BalanceConfig_TypeInfo;
    v98 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL);
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v97 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v97->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_72;
    if ( v95 >= ExchangeSvtCoinItemIds->max_length )
      sub_1BD36BC(EntityDefinitely, v58);
    if ( !Master_object )
      goto LABEL_72;
    EntityDefinitely = (int *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)Master_object,
                                v98,
                                ExchangeSvtCoinItemIds->m_Items[v95 + 1],
                                0LL);
    if ( !EntityDefinitely )
      goto LABEL_72;
    ++v95;
  }
  while ( EntityDefinitely[7] < 1 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_8944/*"MYROOM_MENU_NAME_14"*/, 0LL);
  v101 = (MyRoomListControl_MainItemInfo_o *)sub_1BD36A4(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v101, v100, 0, (System_String_o *)StringLiteral_3578/*"CLICK_EXCHANGE_SVT_COIN"*/, 0LL, v102);
  System_Collections_Generic_HashSet_object___Add(
    v53,
    (Il2CppObject *)v101,
    (const MethodInfo_347B2E0 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v146,
    v53,
    (const MethodInfo_347AC64 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v147 = v146;
  __asm { FMOV            V0.4S, #1.0 }
  v108 = 0.0;
  v145 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v147,
            (const MethodInfo_33358E0 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v147.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v111 = UnityEngine_Object__Instantiate_object_(
             listItemBase,
             (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v113 = (UnityEngine_GameObject_o *)v111;
    if ( !v111 )
      sub_1BD36B4(0LL, v112);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v111, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v113, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_34381008(v113, 0.0, v108, 0.0, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v113,
                         (const MethodInfo_2F83564 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v115 = UnityEngine_GameObject__GetComponent_object_(
             v113,
             (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v116 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v115, 0LL, 0LL);
    if ( v116 )
    {
      if ( !v115 )
        sub_1BD36B4(v116, v117);
      v118 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v115->klass->vtable[33].method)(
               v115,
               v115->klass->vtable[34].methodPtr);
      if ( !Component_object )
        sub_1BD36B4(v118, v119);
      Component_object[2].klass = (Il2CppClass *)v113;
      sub_1BD33FC(&Component_object[2]);
      *(_OWORD *)&Component_object[2].monitor = v145;
      *(_OWORD *)&Component_object[4].monitor = v145;
    }
    GameObject = GameObjectExtensions__FindGameObject(v113, (System_String_o *)StringLiteral_22255/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_1BD36B4(0LL, v121);
    v122 = UnityEngine_GameObject__GetComponent_object_(
             GameObject,
             (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1BD36B4(v122, v123);
    v124 = (UILabel_o *)v122;
    if ( !v122 )
      sub_1BD36B4(0LL, v123);
    UILabel__set_text((UILabel_o *)v122, (System_String_o *)current[1].klass, 0LL);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v126 = LocalizationManager__Get((System_String_o *)StringLiteral_8944/*"MYROOM_MENU_NAME_14"*/, 0LL);
    if ( System_String__op_Equality(klass, v126, 0LL) )
    {
      UILabel__set_overflowMethod(v124, 2, 0LL);
      v127 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
        v127 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_47726000(v124, v127->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0LL);
      this->fields.exchangeSvtCoinMenuBoard = v113;
      sub_1BD33FC(&this->fields.exchangeSvtCoinMenuBoard);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3580/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1BD33FC(&this->fields.favoriteChangeMenuBtn);
      this->fields.favoriteTxtLb = v124;
      sub_1BD33FC(&this->fields.favoriteTxtLb);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v129 = UnityEngine_GameObject__GetComponent_object_(
                 v113,
                 (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v129 )
          sub_1BD36B4(0LL, v130);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v129, 0, 0LL);
        if ( !Component_object )
          sub_1BD36B4(v131, v132);
        v133 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v134 = (EventDelegate_Callback_o *)current[2].monitor;
        v135 = (EventDelegate_o *)sub_1BD36A4(EventDelegate_TypeInfo);
        EventDelegate___ctor_47473860(v135, v134, 0LL);
        if ( !v133 )
          sub_1BD36B4(v136, v137);
        items = v133->fields._items;
        v139 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v133->fields._version;
        if ( !items )
          sub_1BD36B4(v136, v137);
        size = v133->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v133,
            (Il2CppObject *)v135,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
        }
        else
        {
          v141 = &items->obj.klass + size;
          v133->fields._size = size + 1;
          v141[4] = (Il2CppClass *)v135;
          sub_1BD33FC(v141 + 4);
        }
      }
    }
    else
    {
      v142 = UnityEngine_GameObject__GetComponent_object_(
               v113,
               (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v142 )
        sub_1BD36B4(0LL, v143);
      v142[2].monitor = current[2].klass;
      sub_1BD33FC(&v142[2].monitor);
    }
    v144 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v144 = MyRoomListControl_TypeInfo;
    }
    v108 = v108 - v144->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v147,
    (const MethodInfo_33358DC *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_34381008(this->fields.itemDummy, 0.0, v108, 0.0, 0LL);
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
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *Master_object; // x20
  Il2CppObject *fsmTemplate; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v22; // x22

  if ( (byte_4B32A05 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMaster_WarMaster___, v3);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_1BD3458(&LocalizationManager_TypeInfo, v6);
    sub_1BD3458(&Method_MyRoomListControl_ClickFavoriteChange__, v7);
    sub_1BD3458(&Method_MyRoomListControl_callBackNotificationDlg__, v8);
    sub_1BD3458(&OpeningMovieData_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BD3458(&StringLiteral_3580/*"CLICK_FAVORITE_CHANGE"*/, v11);
    sub_1BD3458(&StringLiteral_8938/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, v12);
    sub_1BD3458(&StringLiteral_1/*""*/, v13);
    byte_4B32A05 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3580/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_18:
    sub_1BD36B4(myRoomFsm, method);
  }
  v15 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BD3470(Method_MyRoomListControl_ClickFavoriteChange__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BD343C(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_31D1EF0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v20 = System_String__Format(v19, fsmTemplate, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_MyRoomListControl_callBackNotificationDlg__, 0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v20,
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

  if ( (byte_4B32A07 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B32A07 = 1;
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
    UnityEngine_Object__Destroy_70278272(v6, 0LL);
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
      sub_1BD36B4(menuListScrollView, v7);
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
  __int64 v7; // x1
  signed int max_length; // w9
  int v9; // w8
  Il2CppObject *Component_object; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x22
  int v13; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B32A04 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___, items);
    sub_1BD3458(&LocalizationManager_TypeInfo, v6);
    this = (MyRoomListControl_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    byte_4B32A04 = 1;
  }
  v13 = 0;
  if ( !items )
    goto LABEL_17;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1BD36BC(this, items);
      this = (MyRoomListControl_o *)items->m_Items[v9];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = System_Int32__ToString((int32_t)&v13, 0LL);
        v12 = System_String__Concat_62525248(prefixStr, v11, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (MyRoomListControl_o *)LocalizationManager__Get(v12, 0LL);
        if ( !Component_object )
          break;
        SetMenuNameControl__setMenuName((SetMenuNameControl_o *)Component_object, (System_String_o *)this, 0LL);
      }
      v9 = v13 + 1;
      v13 = v9;
      max_length = items->max_length;
      if ( v9 >= max_length )
        return;
    }
LABEL_17:
    sub_1BD36B4(this, items);
  }
}


void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL8 _38470128; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v12; // x2
  MyRoomListControl_o *v13; // x0
  const MethodInfo *v14; // x3
  void *noticeComp; // x0
  __int64 v16; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  System_String_o *TransitionScrollTabName_k__BackingField; // x20
  System_String_o *v22; // x20
  TerminalPramsManager_c *v23; // x0
  int32_t childCount; // w0
  int v25; // w26
  int32_t v26; // w21
  int v27; // w27
  int32_t v28; // w22
  UnityEngine_Object_o *Child; // x23
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  struct System_String_o *v32; // x20
  TerminalPramsManager_c *v33; // x0
  struct System_String_o **p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v36; // x8
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B32A02 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v4);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    sub_1BD3458(&TutorialFlag_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_8953/*"MYROOM_NOTICE_NAME_"*/, v8);
    sub_1BD3458(&StringLiteral_1/*""*/, v9);
    byte_4B32A02 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38470128 = TutorialFlag__Get_38470128(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _38470128;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_38470128, noticeListGrid, v12);
  MyRoomListControl__SetBtnName(v13, this->fields.noticeItems, (System_String_o *)StringLiteral_8953/*"MYROOM_NOTICE_NAME_"*/, v14);
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
  if ( !byte_4B32A76 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v18);
    byte_4B32A76 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  LODWORD(v2) = 0;
  if ( !System_String__IsNullOrEmpty(v19->static_fields->_TransitionScrollTabName_k__BackingField, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B32A76 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v16);
      byte_4B32A76 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    TransitionScrollTabName_k__BackingField = v20->static_fields->_TransitionScrollTabName_k__BackingField;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get(TransitionScrollTabName_k__BackingField, 0LL);
    if ( System_String__op_Inequality(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B32A76 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v16);
        byte_4B32A76 = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v22, v23->static_fields->_TransitionScrollTabName_k__BackingField, 0LL) )
      {
        noticeComp = this->fields.myRoomListGrid;
        if ( !noticeComp )
          goto LABEL_67;
        noticeComp = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noticeComp, 0LL);
        if ( !noticeComp )
          goto LABEL_67;
        childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)noticeComp, 0LL);
        v25 = childCount - 1;
        if ( childCount >= 1 )
        {
          v26 = childCount;
          v27 = 0;
          v28 = 0;
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
                                              v28,
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
                                                           (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
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
                if ( System_String__op_Equality(monitor[52], v22, 0LL) )
                  goto LABEL_51;
              }
              ++v27;
            }
            if ( v26 == ++v28 )
              goto LABEL_51;
          }
LABEL_67:
          sub_1BD36B4(noticeComp, v16);
        }
        v27 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v32 = (struct System_String_o *)StringLiteral_1/*""*/;
        if ( !byte_4B31F0B )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v16);
          byte_4B31F0B = 1;
        }
        v33 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v33 = TerminalPramsManager_TypeInfo;
        }
        *(float *)&v2 = (float)v27 / (float)v25;
        p_TransitionScrollTabName_k__BackingField = &v33->static_fields->_TransitionScrollTabName_k__BackingField;
        *p_TransitionScrollTabName_k__BackingField = v32;
        sub_1BD33FC(p_TransitionScrollTabName_k__BackingField);
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
    v37.fields.r = 0.5;
    v37.fields.g = 0.5;
    v37.fields.b = 0.5;
    v37.fields.a = 1.0;
    UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v37, 0LL);
    favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
    if ( !favoriteChangeMenuBtn )
      goto LABEL_67;
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_BD7760;
    v36 = this->fields.favoriteChangeMenuBtn;
    if ( !v36 )
      goto LABEL_67;
    v36->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BD7760;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t childCount; // w0
  int32_t v10; // w20
  int32_t v11; // w21
  UnityEngine_Object_o *Child; // x22
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v20; // x24
  Il2CppObject *v21; // x24
  Il2CppObject *ComponentInChildren_object__49447820; // x22
  UnityEngine_GameObject_o *v23; // x0
  MyRoomListControl_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x22
  __int128 v26; // [xsp+0h] [xbp-70h]

  if ( (byte_4B32A03 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, grid);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v4);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UISprite___, v5);
    sub_1BD3458(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v6);
    sub_1BD3458(&MyRoomListControl_TypeInfo, v7);
    this = (MyRoomListControl_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    byte_4B32A03 = 1;
  }
  if ( !grid )
    goto LABEL_31;
  this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v10 = childCount;
    v11 = 0;
    __asm { FMOV            V0.4S, #1.0 }
    v26 = _Q0;
    while ( 1 )
    {
      this = (MyRoomListControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v11, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Child )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Child,
                             (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__49447820(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_2F2838C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
          v20 = GameObjectExtensions__SafeGetComponent_object_(
                  gameObject,
                  (const MethodInfo_2F83564 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0LL);
          if ( !v20 )
            break;
          v20[2].klass = (Il2CppClass *)this;
          v21 = v20 + 2;
          sub_1BD33FC(v21);
          *(_OWORD *)&v21->monitor = v26;
          *(_OWORD *)&v21[2].monitor = v26;
        }
        ComponentInChildren_object__49447820 = UnityEngine_Component__GetComponentInChildren_object__49447820(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_2F2838C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__49447820,
                                        0LL,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__49447820 )
            break;
          v23 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__49447820,
                  0LL);
          v24 = MyRoomListControl_TypeInfo;
          v25 = v23;
          if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v24 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v25, v24->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( v10 == ++v11 )
        return;
    }
LABEL_31:
    sub_1BD36B4(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B32A06 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B32A06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
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
  sub_1BD33FC(&this->fields);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1BD33FC(&this->fields.EventName);
  this->fields.ClickAction = clickAction;
  sub_1BD33FC(&this->fields.ClickAction);
}