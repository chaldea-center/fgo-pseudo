void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4A49A83 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomListControl_TypeInfo, v1);
    byte_4A49A83 = 1;
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
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  System_Collections_Generic_HashSet_T__o *v60; // x20
  System_String_o *v61; // x22
  MyRoomListControl_MainItemInfo_o *v62; // x21
  const MethodInfo *v63; // x5
  int *EntityDefinitely; // x0
  __int64 v65; // x1
  System_String_o *v66; // x21
  MyRoomListControl_MainItemInfo_o *v67; // x22
  const MethodInfo *v68; // x5
  System_String_o *v69; // x21
  MyRoomListControl_MainItemInfo_o *v70; // x22
  const MethodInfo *v71; // x5
  System_String_o *v72; // x21
  MyRoomListControl_MainItemInfo_o *v73; // x22
  const MethodInfo *v74; // x5
  System_String_o *v75; // x21
  MyRoomListControl_MainItemInfo_o *v76; // x22
  const MethodInfo *v77; // x5
  System_String_o *v78; // x21
  MyRoomListControl_MainItemInfo_o *v79; // x22
  const MethodInfo *v80; // x5
  System_String_o *v81; // x21
  EventDelegate_Callback_o *v82; // x22
  MyRoomListControl_MainItemInfo_o *v83; // x23
  const MethodInfo *v84; // x5
  System_String_o *v85; // x21
  MyRoomListControl_MainItemInfo_o *v86; // x22
  const MethodInfo *v87; // x5
  System_String_o *v88; // x21
  MyRoomListControl_MainItemInfo_o *v89; // x22
  const MethodInfo *v90; // x5
  BalanceConfig_c *v91; // x0
  System_String_o *v92; // x21
  MyRoomListControl_MainItemInfo_o *v93; // x22
  const MethodInfo *v94; // x5
  System_String_o *v95; // x21
  MyRoomListControl_MainItemInfo_o *v96; // x22
  const MethodInfo *v97; // x5
  System_String_o *v98; // x21
  MyRoomListControl_MainItemInfo_o *v99; // x22
  const MethodInfo *v100; // x5
  System_String_o *v101; // x21
  MyRoomListControl_MainItemInfo_o *v102; // x22
  const MethodInfo *v103; // x5
  Il2CppObject *Master_object; // x22
  unsigned __int64 v105; // x28
  __int64 v106; // x8
  BalanceConfig_c *v107; // x8
  int64_t v108; // x23
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v110; // x21
  MyRoomListControl_MainItemInfo_o *v111; // x22
  const MethodInfo *v112; // x5
  float v118; // s8
  Il2CppObject *current; // x28
  Il2CppObject *listItemBase; // x23
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  UnityEngine_GameObject_o *v123; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v125; // x25
  _BOOL8 v126; // x0
  __int64 v127; // x1
  __int64 v128; // x0
  __int64 v129; // x1
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v133; // x1
  Il2CppObject *v134; // x0
  __int64 v135; // x1
  UILabel_o *v136; // x25
  System_String_o *klass; // x26
  System_String_o *v138; // x1
  MyRoomListControl_c *v139; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  BalanceConfig_c *v146; // x0
  int32_t GalleryReleaseQuestId; // w25
  bool IsQuestClear_38542260; // w25
  System_String_o *v149; // x25
  Il2CppObject *v150; // x0
  __int64 v151; // x1
  const MethodInfo *v152; // x2
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  MyRoomListControl___c_c *v155; // x8
  EventDelegate_Callback_o *_9__17_0; // x25
  Il2CppObject *v157; // x26
  struct MyRoomListControl___c_StaticFields *static_fields; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  __int64 v161; // x0
  __int64 v162; // x1
  int monitor; // w8
  Il2CppObject *v164; // x0
  __int64 v165; // x1
  __int64 v166; // x0
  __int64 v167; // x1
  System_Collections_Generic_List_object__o *v168; // x23
  EventDelegate_Callback_o *v169; // x25
  EventDelegate_o *v170; // x24
  __int64 v171; // x0
  __int64 v172; // x1
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  struct System_Object_array *items; // x8
  _QWORD *v176; // x9
  __int64 size; // x10
  Il2CppClass **v178; // x0
  Il2CppObject *v179; // x0
  __int64 v180; // x1
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  Il2CppClass *v183; // x1
  MyRoomListControl_c *v184; // x0
  __int128 v185; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v186; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v187; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A49A7C & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1B863B8(&CondType_TypeInfo, v4);
    sub_1B863B8(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__, v9);
    sub_1B863B8(&EventDelegate_TypeInfo, v10);
    sub_1B863B8(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v11);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___, v12);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v13);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v14);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v18);
    sub_1B863B8(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v20);
    sub_1B863B8(&LocalizationManager_TypeInfo, v21);
    sub_1B863B8(&MyRoomListControl_MainItemInfo_TypeInfo, v22);
    sub_1B863B8(&Method_MyRoomListControl_ClickFavoriteChange__, v23);
    sub_1B863B8(&MyRoomListControl_TypeInfo, v24);
    sub_1B863B8(&NetworkManager_TypeInfo, v25);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v26);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v27);
    sub_1B863B8(&Method_MyRoomListControl___c__Awake_b__17_0__, v28);
    sub_1B863B8(&MyRoomListControl___c_TypeInfo, v29);
    sub_1B863B8(&StringLiteral_8694/*"MYROOM_MENU_NAME_3"*/, v30);
    sub_1B863B8(&StringLiteral_8702/*"MYROOM_NOT_OPEN_GALLERY"*/, v31);
    sub_1B863B8(&StringLiteral_21829/*"nameLabel"*/, v32);
    sub_1B863B8(&StringLiteral_3490/*"CLICK_TITLE"*/, v33);
    sub_1B863B8(&StringLiteral_8686/*"MYROOM_MENU_NAME_1"*/, v34);
    sub_1B863B8(&StringLiteral_3462/*"CLICK_GAMEOPTION"*/, v35);
    sub_1B863B8(&StringLiteral_8692/*"MYROOM_MENU_NAME_15"*/, v36);
    sub_1B863B8(&StringLiteral_8695/*"MYROOM_MENU_NAME_4"*/, v37);
    sub_1B863B8(&StringLiteral_3471/*"CLICK_NOTICE"*/, v38);
    sub_1B863B8(&StringLiteral_3449/*"CLICK_CONTINUE_DEVICE"*/, v39);
    sub_1B863B8(&StringLiteral_3482/*"CLICK_SOUND_PLAYER"*/, v40);
    sub_1B863B8(&StringLiteral_8691/*"MYROOM_MENU_NAME_14"*/, v41);
    sub_1B863B8(&StringLiteral_3458/*"CLICK_FAVORITE_CHANGE"*/, v42);
    sub_1B863B8(&StringLiteral_8698/*"MYROOM_MENU_NAME_7"*/, v43);
    sub_1B863B8(&StringLiteral_8700/*"MYROOM_MENU_NAME_9"*/, v44);
    sub_1B863B8(&StringLiteral_3438/*"CLICK_ACCOUNT_LINKAGE"*/, v45);
    sub_1B863B8(&StringLiteral_8688/*"MYROOM_MENU_NAME_11"*/, v46);
    sub_1B863B8(&StringLiteral_3461/*"CLICK_GALLERY"*/, v47);
    sub_1B863B8(&StringLiteral_8693/*"MYROOM_MENU_NAME_2"*/, v48);
    sub_1B863B8(&StringLiteral_3467/*"CLICK_MATERIAL"*/, v49);
    sub_1B863B8(&StringLiteral_8696/*"MYROOM_MENU_NAME_5"*/, v50);
    sub_1B863B8(&StringLiteral_8699/*"MYROOM_MENU_NAME_8"*/, v51);
    sub_1B863B8(&StringLiteral_3473/*"CLICK_PROFILE"*/, v52);
    sub_1B863B8(&StringLiteral_3478/*"CLICK_SERIAL_CODE"*/, v53);
    sub_1B863B8(&StringLiteral_8689/*"MYROOM_MENU_NAME_12"*/, v54);
    sub_1B863B8(&StringLiteral_8697/*"MYROOM_MENU_NAME_6"*/, v55);
    sub_1B863B8(&StringLiteral_3479/*"CLICK_SERVANT_MENU"*/, v56);
    sub_1B863B8(&StringLiteral_3491/*"CLICK_USER_ITEM"*/, v57);
    sub_1B863B8(&StringLiteral_3456/*"CLICK_EXCHANGE_SVT_COIN"*/, v58);
    sub_1B863B8(&StringLiteral_8690/*"MYROOM_MENU_NAME_13"*/, v59);
    byte_4A49A7C = 1;
  }
  memset(&v187, 0, sizeof(v187));
  v60 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v60,
    (const MethodInfo_34BDC34 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_8688/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v62 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v62, v61, 0, (System_String_o *)StringLiteral_3467/*"CLICK_MATERIAL"*/, 0LL, v63);
  if ( !v60 )
LABEL_88:
    sub_1B86614(EntityDefinitely, v65);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v62,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8689/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v67 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v67, v66, 0, (System_String_o *)StringLiteral_3479/*"CLICK_SERVANT_MENU"*/, 0LL, v68);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v67,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MYROOM_MENU_NAME_15"*/, 0LL);
  v70 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v70, v69, 0, (System_String_o *)StringLiteral_3461/*"CLICK_GALLERY"*/, 0LL, v71);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v70,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_8686/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v73 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v73, v72, 0, (System_String_o *)StringLiteral_3491/*"CLICK_USER_ITEM"*/, 0LL, v74);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v73,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_8693/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v76 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v76, v75, 0, (System_String_o *)StringLiteral_3482/*"CLICK_SOUND_PLAYER"*/, 0LL, v77);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v76,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8694/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v79 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v79, v78, 0, (System_String_o *)StringLiteral_3473/*"CLICK_PROFILE"*/, 0LL, v80);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v79,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_8695/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v82 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v82,
    (Il2CppObject *)this,
    (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__,
    0LL);
  v83 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v83, v81, 1, (System_String_o *)StringLiteral_3458/*"CLICK_FAVORITE_CHANGE"*/, v82, v84);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v83,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_8696/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v86 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v86, v85, 0, (System_String_o *)StringLiteral_3471/*"CLICK_NOTICE"*/, 0LL, v87);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v86,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_8697/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v89 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v89, v88, 0, (System_String_o *)StringLiteral_3462/*"CLICK_GAMEOPTION"*/, 0LL, v90);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v89,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v91 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v91 = BalanceConfig_TypeInfo;
  }
  if ( v91->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_8698/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v93 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v93, v92, 0, (System_String_o *)StringLiteral_3478/*"CLICK_SERIAL_CODE"*/, 0LL, v94);
    System_Collections_Generic_HashSet_object___Add(
      v60,
      (Il2CppObject *)v93,
      (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v96 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v96, v95, 0, (System_String_o *)StringLiteral_3449/*"CLICK_CONTINUE_DEVICE"*/, 0LL, v97);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v96,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8690/*"MYROOM_MENU_NAME_13"*/, 0LL);
  v99 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v99, v98, 0, (System_String_o *)StringLiteral_3438/*"CLICK_ACCOUNT_LINKAGE"*/, 0LL, v100);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v99,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_8700/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v102 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v102, v101, 0, (System_String_o *)StringLiteral_3490/*"CLICK_TITLE"*/, 0LL, v103);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v102,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserItemMaster___);
  v105 = 0LL;
  do
  {
    EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (int *)BalanceConfig_TypeInfo;
    }
    v106 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 456LL);
    if ( !v106 )
      goto LABEL_88;
    if ( (__int64)v105 >= *(int *)(v106 + 24) )
      goto LABEL_37;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v65);
      byte_4A48C25 = 1;
    }
    EntityDefinitely = (int *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityDefinitely = (int *)NetworkManager_TypeInfo;
    }
    v107 = BalanceConfig_TypeInfo;
    v108 = *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL);
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v107 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v107->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_88;
    if ( v105 >= ExchangeSvtCoinItemIds->max_length )
      sub_1B8661C(EntityDefinitely, v65);
    if ( !Master_object )
      goto LABEL_88;
    EntityDefinitely = (int *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)Master_object,
                                v108,
                                ExchangeSvtCoinItemIds->m_Items[v105 + 1],
                                0LL);
    if ( !EntityDefinitely )
      goto LABEL_88;
    ++v105;
  }
  while ( EntityDefinitely[7] < 1 );
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_8691/*"MYROOM_MENU_NAME_14"*/, 0LL);
  v111 = (MyRoomListControl_MainItemInfo_o *)sub_1B86604(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v111, v110, 0, (System_String_o *)StringLiteral_3456/*"CLICK_EXCHANGE_SVT_COIN"*/, 0LL, v112);
  System_Collections_Generic_HashSet_object___Add(
    v60,
    (Il2CppObject *)v111,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
LABEL_37:
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v186,
    v60,
    (const MethodInfo_34BE79C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v187 = v186;
  __asm { FMOV            V0.4S, #1.0 }
  v118 = 0.0;
  v185 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v187,
            (const MethodInfo_33980C4 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v187.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v121 = UnityEngine_Object__Instantiate_object_(
             listItemBase,
             (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v123 = (UnityEngine_GameObject_o *)v121;
    if ( !v121 )
      sub_1B86614(0LL, v122);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v121, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v123, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_34382496(v123, 0.0, v118, 0.0, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v123,
                         (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v125 = UnityEngine_GameObject__GetComponent_object_(
             v123,
             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v126 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v125, 0LL, 0LL);
    if ( v126 )
    {
      if ( !v125 )
        sub_1B86614(v126, v127);
      v128 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v125->klass->vtable[33].method)(
               v125,
               v125->klass->vtable[34].methodPtr);
      if ( !Component_object )
        sub_1B86614(v128, v129);
      Component_object[2].klass = (Il2CppClass *)v123;
      sub_1B8635C((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v123, v130, v131);
      *(_OWORD *)&Component_object[2].monitor = v185;
      *(_OWORD *)&Component_object[4].monitor = v185;
    }
    GameObject = GameObjectExtensions__FindGameObject(v123, (System_String_o *)StringLiteral_21829/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_1B86614(0LL, v133);
    v134 = UnityEngine_GameObject__GetComponent_object_(
             GameObject,
             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1B86614(v134, v135);
    v136 = (UILabel_o *)v134;
    if ( !v134 )
      sub_1B86614(0LL, v135);
    UILabel__set_text((UILabel_o *)v134, (System_String_o *)current[1].klass, 0LL);
    klass = (System_String_o *)current[1].klass;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v138 = LocalizationManager__Get((System_String_o *)StringLiteral_8691/*"MYROOM_MENU_NAME_14"*/, 0LL);
    if ( System_String__op_Equality(klass, v138, 0LL) )
    {
      UILabel__set_overflowMethod(v136, 2, 0LL);
      v139 = MyRoomListControl_TypeInfo;
      if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
        v139 = MyRoomListControl_TypeInfo;
      }
      UILabel__SetCondensedScale_48026468(v136, v139->static_fields->BOARD_LB_WIDTH_SVT_COIN, 0.0, 0LL);
      this->fields.exchangeSvtCoinMenuBoard = v123;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.exchangeSvtCoinMenuBoard, (int32_t)v123, v140, v141);
    }
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3458/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.favoriteChangeMenuBtn, (int32_t)Component_object, v142, v143);
      this->fields.favoriteTxtLb = v136;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.favoriteTxtLb, (int32_t)v136, v144, v145);
    }
    v146 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v146 = BalanceConfig_TypeInfo;
    }
    GalleryReleaseQuestId = v146->static_fields->GalleryReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_38542260 = CondType__IsQuestClear_38542260(GalleryReleaseQuestId, -1, 0, 0LL);
    if ( !(IsQuestClear_38542260 | !System_String__op_Equality(
                                      (System_String_o *)current[2].klass,
                                      (System_String_o *)StringLiteral_3461/*"CLICK_GALLERY"*/,
                                      0LL)) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v149 = LocalizationManager__Get((System_String_o *)StringLiteral_8702/*"MYROOM_NOT_OPEN_GALLERY"*/, 0LL);
      v150 = UnityEngine_GameObject__GetComponent_object_(
               v123,
               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MyRoomListItem___);
      if ( !v150 )
        sub_1B86614(0LL, v151);
      MyRoomListItem__EnableBlackOutPanel((MyRoomListItem_o *)v150, v149, v152);
      LODWORD(current[1].monitor) = 1;
      v155 = MyRoomListControl___c_TypeInfo;
      if ( !MyRoomListControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomListControl___c_TypeInfo);
        v155 = MyRoomListControl___c_TypeInfo;
      }
      _9__17_0 = v155->static_fields->__9__17_0;
      if ( !_9__17_0 )
      {
        if ( !v155->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v155);
          v155 = MyRoomListControl___c_TypeInfo;
        }
        v157 = (Il2CppObject *)v155->static_fields->__9;
        _9__17_0 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(_9__17_0, v157, (intptr_t)Method_MyRoomListControl___c__Awake_b__17_0__, 0LL);
        static_fields = MyRoomListControl___c_TypeInfo->static_fields;
        static_fields->__9__17_0 = _9__17_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v159, v160);
      }
      current[2].monitor = _9__17_0;
      sub_1B8635C((CGThumbnailListItem_o *)&current[2].monitor, (int32_t)_9__17_0, v153, v154);
      if ( !Component_object )
        sub_1B86614(v161, v162);
      *(_OWORD *)&Component_object[3].monitor = v185;
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v164 = UnityEngine_GameObject__GetComponent_object_(
                 v123,
                 (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v164 )
          sub_1B86614(0LL, v165);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v164, 0, 0LL);
        if ( !Component_object )
          sub_1B86614(v166, v167);
        v168 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v169 = (EventDelegate_Callback_o *)current[2].monitor;
        v170 = (EventDelegate_o *)sub_1B86604(EventDelegate_TypeInfo);
        EventDelegate___ctor_47774260(v170, v169, 0LL);
        if ( !v168 )
          sub_1B86614(v171, v172);
        items = v168->fields._items;
        v176 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v168->fields._version;
        if ( !items )
          sub_1B86614(v171, v172);
        size = v168->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v168,
            (Il2CppObject *)v170,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
        }
        else
        {
          v178 = &items->obj.klass + size;
          v168->fields._size = size + 1;
          v178[4] = (Il2CppClass *)v170;
          sub_1B8635C((CGThumbnailListItem_o *)(v178 + 4), (int32_t)v170, v173, v174);
        }
      }
    }
    else
    {
      v179 = UnityEngine_GameObject__GetComponent_object_(
               v123,
               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v179 )
        sub_1B86614(0LL, v180);
      v183 = current[2].klass;
      v179[2].monitor = v183;
      sub_1B8635C((CGThumbnailListItem_o *)&v179[2].monitor, (int32_t)v183, v181, v182);
    }
    v184 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v184 = MyRoomListControl_TypeInfo;
    }
    v118 = v118 - v184->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v187,
    (const MethodInfo_33980C0 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_34382496(this->fields.itemDummy, 0.0, v118, 0.0, 0LL);
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

  if ( (byte_4A49A80 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&Method_MyRoomListControl_ClickFavoriteChange__, v7);
    sub_1B863B8(&Method_MyRoomListControl_callBackNotificationDlg__, v8);
    sub_1B863B8(&OpeningMovieData_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_3458/*"CLICK_FAVORITE_CHANGE"*/, v11);
    sub_1B863B8(&StringLiteral_8685/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, v12);
    sub_1B863B8(&StringLiteral_1/*""*/, v13);
    byte_4A49A80 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3458/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_18:
    sub_1B86614(myRoomFsm, method);
  }
  v15 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B863D0(Method_MyRoomListControl_ClickFavoriteChange__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B8639C(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_3214280 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8685/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v20 = System_String__Format(v19, fsmTemplate, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A49A82 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A49A82 = 1;
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
    UnityEngine_Object__Destroy_69356292(v6, 0LL);
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
      sub_1B86614(menuListScrollView, v7);
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

  if ( (byte_4A49A7F & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___, items);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    this = (MyRoomListControl_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A49A7F = 1;
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
        sub_1B8661C(this, items);
      this = (MyRoomListControl_o *)items->m_Items[v9];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = System_Int32__ToString((int32_t)&v13, 0LL);
        v12 = System_String__Concat_61645176(prefixStr, v11, 0LL);
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
    sub_1B86614(this, items);
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
  _BOOL8 _38640612; // x0
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int v27; // w26
  int32_t v28; // w21
  int v29; // w27
  int32_t v30; // w22
  UnityEngine_Object_o *Child; // x23
  UnityEngine_Object_o *Component_object; // x23
  System_String_o **monitor; // x8
  CGThumbnailListItem_c *v34; // x20
  TerminalPramsManager_c *v35; // x0
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v38; // x8
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A49A7D & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_SetMenuNameControl___, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B863B8(&TutorialFlag_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_8701/*"MYROOM_NOTICE_NAME_"*/, v8);
    sub_1B863B8(&StringLiteral_1/*""*/, v9);
    byte_4A49A7D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38640612 = TutorialFlag__Get_38640612(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _38640612;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_38640612, noticeListGrid, v12);
  MyRoomListControl__SetBtnName(v13, this->fields.noticeItems, (System_String_o *)StringLiteral_8701/*"MYROOM_NOTICE_NAME_"*/, v14);
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
  if ( !byte_4A49AF7 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    byte_4A49AF7 = 1;
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
    if ( !byte_4A49AF7 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v16);
      byte_4A49AF7 = 1;
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
      if ( !byte_4A49AF7 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v16);
        byte_4A49AF7 = 1;
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
        v27 = childCount - 1;
        if ( childCount >= 1 )
        {
          v28 = childCount;
          v29 = 0;
          v30 = 0;
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
                                              v30,
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
                                                           (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_SetMenuNameControl___);
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
              ++v29;
            }
            if ( v28 == ++v30 )
              goto LABEL_51;
          }
LABEL_67:
          sub_1B86614(noticeComp, v16);
        }
        v29 = 0;
LABEL_51:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
        if ( !byte_4A48DBB )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v16);
          byte_4A48DBB = 1;
        }
        v35 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v35 = TerminalPramsManager_TypeInfo;
        }
        *(float *)&v2 = (float)v29 / (float)v27;
        p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v35->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = v34;
        sub_1B8635C(p_TransitionScrollTabName_k__BackingField, (int32_t)v34, v25, v26);
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
    v39.fields.r = 0.5;
    v39.fields.g = 0.5;
    v39.fields.b = 0.5;
    v39.fields.a = 1.0;
    UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v39, 0LL);
    favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
    if ( !favoriteChangeMenuBtn )
      goto LABEL_67;
    favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_BC2680;
    v38 = this->fields.favoriteChangeMenuBtn;
    if ( !v38 )
      goto LABEL_67;
    v38->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BC2680;
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x24
  Il2CppObject *ComponentInChildren_object__49695012; // x22
  UnityEngine_GameObject_o *v25; // x0
  MyRoomListControl_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x22
  __int128 v28; // [xsp+0h] [xbp-70h]

  if ( (byte_4A49A7E & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, grid);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v4);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UISprite___, v5);
    sub_1B863B8(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v6);
    sub_1B863B8(&MyRoomListControl_TypeInfo, v7);
    this = (MyRoomListControl_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A49A7E = 1;
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
    v28 = _Q0;
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
                             (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__49695012(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_2F64924 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                  (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0LL);
          if ( !v20 )
            break;
          v20[2].klass = (Il2CppClass *)this;
          v23 = v20 + 2;
          sub_1B8635C((CGThumbnailListItem_o *)v23, (int32_t)this, v21, v22);
          *(_OWORD *)&v23->monitor = v28;
          *(_OWORD *)&v23[2].monitor = v28;
        }
        ComponentInChildren_object__49695012 = UnityEngine_Component__GetComponentInChildren_object__49695012(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_2F64924 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__49695012,
                                        0LL,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__49695012 )
            break;
          v25 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__49695012,
                  0LL);
          v26 = MyRoomListControl_TypeInfo;
          v27 = v25;
          if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
            v26 = MyRoomListControl_TypeInfo;
          }
          GameObjectExtensions__SetLocalPosition(v27, v26->static_fields->BTN_LABEL_POS, 0LL);
        }
      }
      if ( v10 == ++v11 )
        return;
    }
LABEL_31:
    sub_1B86614(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A49A81 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A81 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.Name = name;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v11, v12);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.EventName, (int32_t)eventName, v13, v14);
  this->fields.ClickAction = clickAction;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.ClickAction, (int32_t)clickAction, v15, v16);
}


void __fastcall MyRoomListControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A49A84 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomListControl___c_TypeInfo, v1);
    byte_4A49A84 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(MyRoomListControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomListControl___c_TypeInfo->static_fields->__9 = (struct MyRoomListControl___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)MyRoomListControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MyRoomListControl___c___ctor(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomListControl___c___Awake_b__17_0(MyRoomListControl___c_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A49A85 & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomListControl___c__Awake_b__17_0__, method);
    byte_4A49A85 = 1;
  }
  v2 = Method_MyRoomListControl___c__Awake_b__17_0__;
  if ( (*((_BYTE *)Method_MyRoomListControl___c__Awake_b__17_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B863D0(Method_MyRoomListControl___c__Awake_b__17_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B8639C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0LL);
}