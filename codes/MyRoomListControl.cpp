void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4A1B3EB & 1) == 0 )
  {
    sub_1B715CC(&MyRoomListControl_TypeInfo, v1);
    byte_4A1B3EB = 1;
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
  System_Collections_Generic_HashSet_T__o *v48; // x20
  System_String_o *v49; // x22
  MyRoomListControl_MainItemInfo_o *v50; // x21
  const MethodInfo *v51; // x5
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x21
  MyRoomListControl_MainItemInfo_o *v55; // x22
  const MethodInfo *v56; // x5
  System_String_o *v57; // x21
  MyRoomListControl_MainItemInfo_o *v58; // x22
  const MethodInfo *v59; // x5
  System_String_o *v60; // x21
  MyRoomListControl_MainItemInfo_o *v61; // x22
  const MethodInfo *v62; // x5
  System_String_o *v63; // x21
  MyRoomListControl_MainItemInfo_o *v64; // x22
  const MethodInfo *v65; // x5
  System_String_o *v66; // x21
  EventDelegate_Callback_o *v67; // x22
  MyRoomListControl_MainItemInfo_o *v68; // x23
  const MethodInfo *v69; // x5
  System_String_o *v70; // x21
  MyRoomListControl_MainItemInfo_o *v71; // x22
  const MethodInfo *v72; // x5
  System_String_o *v73; // x21
  MyRoomListControl_MainItemInfo_o *v74; // x22
  const MethodInfo *v75; // x5
  BalanceConfig_c *v76; // x0
  System_String_o *v77; // x21
  MyRoomListControl_MainItemInfo_o *v78; // x22
  const MethodInfo *v79; // x5
  System_String_o *v80; // x21
  MyRoomListControl_MainItemInfo_o *v81; // x22
  const MethodInfo *v82; // x5
  System_String_o *v83; // x21
  MyRoomListControl_MainItemInfo_o *v84; // x22
  const MethodInfo *v85; // x5
  System_String_o *v86; // x21
  MyRoomListControl_MainItemInfo_o *v87; // x22
  const MethodInfo *v88; // x5
  float v94; // s8
  Il2CppObject *current; // x26
  Il2CppObject *listItemBase; // x22
  Il2CppObject *v97; // x0
  __int64 v98; // x1
  UnityEngine_GameObject_o *v99; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v101; // x24
  _BOOL8 v102; // x0
  __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x1
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v107; // x1
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  struct UILabel_o *v110; // x24
  int monitor; // w8
  Il2CppObject *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x0
  __int64 v115; // x1
  System_Collections_Generic_List_object__o *v116; // x22
  EventDelegate_Callback_o *v117; // x24
  EventDelegate_o *v118; // x23
  __int64 v119; // x0
  __int64 v120; // x1
  struct System_Object_array *items; // x8
  _QWORD *v122; // x9
  __int64 size; // x10
  Il2CppClass **v124; // x0
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  MyRoomListControl_c *v127; // x0
  __int128 v128; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v129; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v130; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A1B3E5 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&EventDelegate_Callback_TypeInfo, v3);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__, v6);
    sub_1B715CC(&EventDelegate_TypeInfo, v7);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v8);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v9);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__, v14);
    sub_1B715CC(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_1B715CC(&LocalizationManager_TypeInfo, v17);
    sub_1B715CC(&MyRoomListControl_MainItemInfo_TypeInfo, v18);
    sub_1B715CC(&Method_MyRoomListControl_ClickFavoriteChange__, v19);
    sub_1B715CC(&MyRoomListControl_TypeInfo, v20);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v22);
    sub_1B715CC(&StringLiteral_8770/*"MYROOM_MENU_NAME_3"*/, v23);
    sub_1B715CC(&StringLiteral_21930/*"nameLabel"*/, v24);
    sub_1B715CC(&StringLiteral_3557/*"CLICK_TITLE"*/, v25);
    sub_1B715CC(&StringLiteral_8764/*"MYROOM_MENU_NAME_1"*/, v26);
    sub_1B715CC(&StringLiteral_3530/*"CLICK_GAMEOPTION"*/, v27);
    sub_1B715CC(&StringLiteral_8771/*"MYROOM_MENU_NAME_4"*/, v28);
    sub_1B715CC(&StringLiteral_3539/*"CLICK_NOTICE"*/, v29);
    sub_1B715CC(&StringLiteral_3520/*"CLICK_CONTINUE_DEVICE"*/, v30);
    sub_1B715CC(&StringLiteral_3549/*"CLICK_SOUND_PLAYER"*/, v31);
    sub_1B715CC(&StringLiteral_3527/*"CLICK_FAVORITE_CHANGE"*/, v32);
    sub_1B715CC(&StringLiteral_8774/*"MYROOM_MENU_NAME_7"*/, v33);
    sub_1B715CC(&StringLiteral_8776/*"MYROOM_MENU_NAME_9"*/, v34);
    sub_1B715CC(&StringLiteral_3509/*"CLICK_ACCOUNT_LINKAGE"*/, v35);
    sub_1B715CC(&StringLiteral_8766/*"MYROOM_MENU_NAME_11"*/, v36);
    sub_1B715CC(&StringLiteral_8769/*"MYROOM_MENU_NAME_2"*/, v37);
    sub_1B715CC(&StringLiteral_3535/*"CLICK_MATERIAL"*/, v38);
    sub_1B715CC(&StringLiteral_8772/*"MYROOM_MENU_NAME_5"*/, v39);
    sub_1B715CC(&StringLiteral_8775/*"MYROOM_MENU_NAME_8"*/, v40);
    sub_1B715CC(&StringLiteral_3541/*"CLICK_PROFILE"*/, v41);
    sub_1B715CC(&StringLiteral_3546/*"CLICK_SERIAL_CODE"*/, v42);
    sub_1B715CC(&StringLiteral_8767/*"MYROOM_MENU_NAME_12"*/, v43);
    sub_1B715CC(&StringLiteral_8773/*"MYROOM_MENU_NAME_6"*/, v44);
    sub_1B715CC(&StringLiteral_3547/*"CLICK_SERVANT_MENU"*/, v45);
    sub_1B715CC(&StringLiteral_3558/*"CLICK_USER_ITEM"*/, v46);
    sub_1B715CC(&StringLiteral_8768/*"MYROOM_MENU_NAME_13"*/, v47);
    byte_4A1B3E5 = 1;
  }
  memset(&v130, 0, sizeof(v130));
  v48 = (System_Collections_Generic_HashSet_T__o *)sub_1B71818(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v48,
    (const MethodInfo_338EE34 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8766/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v50 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v50, v49, 0, (System_String_o *)StringLiteral_3535/*"CLICK_MATERIAL"*/, 0LL, v51);
  if ( !v48 )
    sub_1B71828(v52, v53);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v50,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v55 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v55, v54, 0, (System_String_o *)StringLiteral_3547/*"CLICK_SERVANT_MENU"*/, 0LL, v56);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v55,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8764/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v58 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v58, v57, 0, (System_String_o *)StringLiteral_3558/*"CLICK_USER_ITEM"*/, 0LL, v59);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v58,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_8769/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v61 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v61, v60, 0, (System_String_o *)StringLiteral_3549/*"CLICK_SOUND_PLAYER"*/, 0LL, v62);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v61,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_8770/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v64 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v64, v63, 0, (System_String_o *)StringLiteral_3541/*"CLICK_PROFILE"*/, 0LL, v65);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v64,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v67 = (EventDelegate_Callback_o *)sub_1B71818(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v67,
    (Il2CppObject *)this,
    (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__,
    0LL);
  v68 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v68, v66, 1, (System_String_o *)StringLiteral_3527/*"CLICK_FAVORITE_CHANGE"*/, v67, v69);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v68,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v71 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v71, v70, 0, (System_String_o *)StringLiteral_3539/*"CLICK_NOTICE"*/, 0LL, v72);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v71,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_8773/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v74 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v74, v73, 0, (System_String_o *)StringLiteral_3530/*"CLICK_GAMEOPTION"*/, 0LL, v75);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v74,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v76 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v76 = BalanceConfig_TypeInfo;
  }
  if ( v76->static_fields->SerialCodeMenuDispFlg == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v77 = LocalizationManager__Get((System_String_o *)StringLiteral_8774/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v78 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v78, v77, 0, (System_String_o *)StringLiteral_3546/*"CLICK_SERIAL_CODE"*/, 0LL, v79);
    System_Collections_Generic_HashSet_object___Add(
      v48,
      (Il2CppObject *)v78,
      (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v81 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v81, v80, 0, (System_String_o *)StringLiteral_3520/*"CLICK_CONTINUE_DEVICE"*/, 0LL, v82);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v81,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_8768/*"MYROOM_MENU_NAME_13"*/, 0LL);
  v84 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v84, v83, 0, (System_String_o *)StringLiteral_3509/*"CLICK_ACCOUNT_LINKAGE"*/, 0LL, v85);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v84,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8776/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v87 = (MyRoomListControl_MainItemInfo_o *)sub_1B71818(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v87, v86, 0, (System_String_o *)StringLiteral_3557/*"CLICK_TITLE"*/, 0LL, v88);
  System_Collections_Generic_HashSet_object___Add(
    v48,
    (Il2CppObject *)v87,
    (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v129,
    v48,
    (const MethodInfo_338F99C *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v130 = v129;
  __asm { FMOV            V0.4S, #1.0 }
  v94 = 0.0;
  v128 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v130,
            (const MethodInfo_324F348 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v130.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v97 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v99 = (UnityEngine_GameObject_o *)v97;
    if ( !v97 )
      sub_1B71828(0LL, v98);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v97, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v99, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_33529508(v99, 0.0, v94, 0.0, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v99,
                         (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v101 = UnityEngine_GameObject__GetComponent_object_(
             v99,
             (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v102 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v101, 0LL, 0LL);
    if ( v102 )
    {
      if ( !v101 )
        sub_1B71828(v102, v103);
      v104 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v101->klass->vtable[33].method)(
               v101,
               v101->klass->vtable[34].methodPtr);
      if ( !Component_object )
        sub_1B71828(v104, v105);
      Component_object[2].klass = (Il2CppClass *)v99;
      sub_1B71570(&Component_object[2]);
      *(_OWORD *)&Component_object[2].monitor = v128;
      *(_OWORD *)&Component_object[4].monitor = v128;
    }
    GameObject = GameObjectExtensions__FindGameObject(v99, (System_String_o *)StringLiteral_21930/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_1B71828(0LL, v107);
    v108 = UnityEngine_GameObject__GetComponent_object_(
             GameObject,
             (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1B71828(v108, v109);
    v110 = (struct UILabel_o *)v108;
    if ( !v108 )
      sub_1B71828(0LL, v109);
    UILabel__set_text((UILabel_o *)v108, (System_String_o *)current[1].klass, 0LL);
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3527/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1B71570(&this->fields.favoriteChangeMenuBtn);
      this->fields.favoriteTxtLb = v110;
      sub_1B71570(&this->fields.favoriteTxtLb);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v112 = UnityEngine_GameObject__GetComponent_object_(
                 v99,
                 (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v112 )
          sub_1B71828(0LL, v113);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v112, 0, 0LL);
        if ( !Component_object )
          sub_1B71828(v114, v115);
        v116 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v117 = (EventDelegate_Callback_o *)current[2].monitor;
        v118 = (EventDelegate_o *)sub_1B71818(EventDelegate_TypeInfo);
        EventDelegate___ctor_46645204(v118, v117, 0LL);
        if ( !v116 )
          sub_1B71828(v119, v120);
        items = v116->fields._items;
        v122 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v116->fields._version;
        if ( !items )
          sub_1B71828(v119, v120);
        size = v116->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v116,
            (Il2CppObject *)v118,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
        }
        else
        {
          v124 = &items->obj.klass + size;
          v116->fields._size = size + 1;
          v124[4] = (Il2CppClass *)v118;
          sub_1B71570(v124 + 4);
        }
      }
    }
    else
    {
      v125 = UnityEngine_GameObject__GetComponent_object_(
               v99,
               (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v125 )
        sub_1B71828(0LL, v126);
      v125[2].monitor = current[2].klass;
      sub_1B71570(&v125[2].monitor);
    }
    v127 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v127 = MyRoomListControl_TypeInfo;
    }
    v94 = v94 - v127->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v130,
    (const MethodInfo_324F344 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_33529508(this->fields.itemDummy, 0.0, v94, 0.0, 0LL);
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

  if ( (byte_4A1B3E9 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_DataManager_GetMaster_WarMaster___, v3);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_1B715CC(&LocalizationManager_TypeInfo, v6);
    sub_1B715CC(&Method_MyRoomListControl_ClickFavoriteChange__, v7);
    sub_1B715CC(&Method_MyRoomListControl_callBackNotificationDlg__, v8);
    sub_1B715CC(&OpeningMovieData_TypeInfo, v9);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B715CC(&StringLiteral_3527/*"CLICK_FAVORITE_CHANGE"*/, v11);
    sub_1B715CC(&StringLiteral_8763/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, v12);
    sub_1B715CC(&StringLiteral_1/*""*/, v13);
    byte_4A1B3E9 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3527/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_18:
    sub_1B71828(myRoomFsm, method);
  }
  v15 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B715E4(Method_MyRoomListControl_ClickFavoriteChange__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B715B0(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_30F8760 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8763/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v20 = System_String__Format(v19, fsmTemplate, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
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

  if ( (byte_4A1B3E8 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___, items);
    sub_1B715CC(&LocalizationManager_TypeInfo, v6);
    this = (MyRoomListControl_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    byte_4A1B3E8 = 1;
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
        sub_1B71830(this, items);
      this = (MyRoomListControl_o *)items->m_Items[v9];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = System_Int32__ToString((int32_t)&v13, 0LL);
        v12 = System_String__Concat_61505504(prefixStr, v11, 0LL);
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
    sub_1B71828(this, items);
  }
}


void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 _37486428; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v6; // x2
  MyRoomListControl_o *v7; // x0
  const MethodInfo *v8; // x3
  char *noticeComp; // x0
  __int64 v10; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A1B3E6 & 1) == 0 )
  {
    sub_1B715CC(&TutorialFlag_TypeInfo, method);
    sub_1B715CC(&StringLiteral_8777/*"MYROOM_NOTICE_NAME_"*/, v3);
    byte_4A1B3E6 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37486428 = TutorialFlag__Get_37486428(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _37486428;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_37486428, noticeListGrid, v6);
  MyRoomListControl__SetBtnName(v7, this->fields.noticeItems, (System_String_o *)StringLiteral_8777/*"MYROOM_NOTICE_NAME_"*/, v8);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_17;
  noticeComp = (char *)myRoomControl->fields.noticeComp;
  if ( !noticeComp )
    goto LABEL_17;
  noticeComp = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noticeComp, 0LL);
  if ( !noticeComp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noticeComp, 0, 0LL);
  noticeComp = (char *)this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_17;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD, float, float))(*(_QWORD *)noticeComp + 456LL))(
    noticeComp,
    0LL,
    *(_QWORD *)(*(_QWORD *)noticeComp + 464LL),
    0.0,
    0.0);
  noticeComp = (char *)this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_17;
  (*(void (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)noticeComp + 440LL))(
    noticeComp,
    1LL,
    *(_QWORD *)(*(_QWORD *)noticeComp + 448LL));
  noticeComp = (char *)this->fields.menuListScrollView;
  if ( !noticeComp )
    goto LABEL_17;
  UIScrollView__UpdatePosition((UIScrollView_o *)noticeComp, 0LL);
  if ( this->fields.isUseFavorite )
    return;
  noticeComp = (char *)this->fields.favoriteChangeMenuBtn;
  if ( !noticeComp )
    goto LABEL_17;
  v14.fields.r = 0.5;
  v14.fields.g = 0.5;
  v14.fields.b = 0.5;
  v14.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v14, 0LL);
  favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
  if ( !favoriteChangeMenuBtn
    || (favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_BAA5D0,
        (v13 = this->fields.favoriteChangeMenuBtn) == 0LL)
    || (v13->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BAA5D0,
        (noticeComp = (char *)this->fields.favoriteTxtLb) == 0LL) )
  {
LABEL_17:
    sub_1B71828(noticeComp, v10);
  }
  UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)(noticeComp + 492), 0LL);
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
  Il2CppObject *ComponentInChildren_object__48570608; // x22
  UnityEngine_GameObject_o *v23; // x0
  MyRoomListControl_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x22
  __int128 v26; // [xsp+0h] [xbp-70h]

  if ( (byte_4A1B3E7 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, grid);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, v4);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_UISprite___, v5);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_UIButton___, v6);
    sub_1B715CC(&MyRoomListControl_TypeInfo, v7);
    this = (MyRoomListControl_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    byte_4A1B3E7 = 1;
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
                             (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__48570608(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_2E520F0 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                  (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0LL);
          if ( !v20 )
            break;
          v20[2].klass = (Il2CppClass *)this;
          v21 = v20 + 2;
          sub_1B71570(v21);
          *(_OWORD *)&v21->monitor = v26;
          *(_OWORD *)&v21[2].monitor = v26;
        }
        ComponentInChildren_object__48570608 = UnityEngine_Component__GetComponentInChildren_object__48570608(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_2E520F0 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__48570608,
                                        0LL,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__48570608 )
            break;
          v23 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__48570608,
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
    sub_1B71828(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A1B3EA & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A1B3EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
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
  sub_1B71570(&this->fields);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1B71570(&this->fields.EventName);
  this->fields.ClickAction = clickAction;
  sub_1B71570(&this->fields.ClickAction);
}