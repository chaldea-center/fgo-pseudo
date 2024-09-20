void __fastcall MyRoomListControl___cctor(const MethodInfo *method)
{
  struct MyRoomListControl_StaticFields *static_fields; // x8

  if ( (byte_4A56A5A & 1) == 0 )
  {
    sub_1B885B0(&MyRoomListControl_TypeInfo);
    byte_4A56A5A = 1;
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
  System_Collections_Generic_HashSet_T__o *v3; // x20
  System_String_o *v4; // x22
  MyRoomListControl_MainItemInfo_o *v5; // x21
  const MethodInfo *v6; // x5
  __int64 v7; // x0
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
  float v49; // s8
  Il2CppObject *current; // x26
  Il2CppObject *listItemBase; // x22
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  UnityEngine_GameObject_o *v54; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v56; // x24
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  __int64 v60; // x1
  UnityEngine_GameObject_o *GameObject; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  struct UILabel_o *v65; // x24
  int monitor; // w8
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  System_Collections_Generic_List_object__o *v71; // x22
  EventDelegate_Callback_o *v72; // x24
  EventDelegate_o *v73; // x23
  __int64 v74; // x0
  __int64 v75; // x1
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  Il2CppObject *v80; // x0
  __int64 v81; // x1
  Il2CppClass *klass; // x1
  MyRoomListControl_c *v83; // x0
  __int128 v84; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v85; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v86; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A56A54 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__get_Current__);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MyRoomListControl_MainItemInfo_TypeInfo);
    sub_1B885B0(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1B885B0(&MyRoomListControl_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8802/*"MYROOM_MENU_NAME_3"*/);
    sub_1B885B0(&StringLiteral_21985/*"nameLabel"*/);
    sub_1B885B0(&StringLiteral_3575/*"CLICK_TITLE"*/);
    sub_1B885B0(&StringLiteral_8796/*"MYROOM_MENU_NAME_1"*/);
    sub_1B885B0(&StringLiteral_3548/*"CLICK_GAMEOPTION"*/);
    sub_1B885B0(&StringLiteral_8803/*"MYROOM_MENU_NAME_4"*/);
    sub_1B885B0(&StringLiteral_3557/*"CLICK_NOTICE"*/);
    sub_1B885B0(&StringLiteral_3538/*"CLICK_CONTINUE_DEVICE"*/);
    sub_1B885B0(&StringLiteral_3567/*"CLICK_SOUND_PLAYER"*/);
    sub_1B885B0(&StringLiteral_3545/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1B885B0(&StringLiteral_8806/*"MYROOM_MENU_NAME_7"*/);
    sub_1B885B0(&StringLiteral_8808/*"MYROOM_MENU_NAME_9"*/);
    sub_1B885B0(&StringLiteral_3527/*"CLICK_ACCOUNT_LINKAGE"*/);
    sub_1B885B0(&StringLiteral_8798/*"MYROOM_MENU_NAME_11"*/);
    sub_1B885B0(&StringLiteral_8801/*"MYROOM_MENU_NAME_2"*/);
    sub_1B885B0(&StringLiteral_3553/*"CLICK_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_8804/*"MYROOM_MENU_NAME_5"*/);
    sub_1B885B0(&StringLiteral_8807/*"MYROOM_MENU_NAME_8"*/);
    sub_1B885B0(&StringLiteral_3559/*"CLICK_PROFILE"*/);
    sub_1B885B0(&StringLiteral_3564/*"CLICK_SERIAL_CODE"*/);
    sub_1B885B0(&StringLiteral_8799/*"MYROOM_MENU_NAME_12"*/);
    sub_1B885B0(&StringLiteral_8805/*"MYROOM_MENU_NAME_6"*/);
    sub_1B885B0(&StringLiteral_3565/*"CLICK_SERVANT_MENU"*/);
    sub_1B885B0(&StringLiteral_3576/*"CLICK_USER_ITEM"*/);
    sub_1B885B0(&StringLiteral_8800/*"MYROOM_MENU_NAME_13"*/);
    byte_4A56A54 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo___ctor__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MYROOM_MENU_NAME_11"*/, 0LL);
  v5 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v5, v4, 0, (System_String_o *)StringLiteral_3553/*"CLICK_MATERIAL"*/, 0LL, v6);
  if ( !v3 )
    sub_1B8880C(v7, v8);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v5,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8799/*"MYROOM_MENU_NAME_12"*/, 0LL);
  v10 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v10, v9, 0, (System_String_o *)StringLiteral_3565/*"CLICK_SERVANT_MENU"*/, 0LL, v11);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v10,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8796/*"MYROOM_MENU_NAME_1"*/, 0LL);
  v13 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v13, v12, 0, (System_String_o *)StringLiteral_3576/*"CLICK_USER_ITEM"*/, 0LL, v14);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v13,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8801/*"MYROOM_MENU_NAME_2"*/, 0LL);
  v16 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v16, v15, 0, (System_String_o *)StringLiteral_3567/*"CLICK_SOUND_PLAYER"*/, 0LL, v17);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v16,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MYROOM_MENU_NAME_3"*/, 0LL);
  v19 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v19, v18, 0, (System_String_o *)StringLiteral_3559/*"CLICK_PROFILE"*/, 0LL, v20);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v19,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MYROOM_MENU_NAME_4"*/, 0LL);
  v22 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)Method_MyRoomListControl_ClickFavoriteChange__,
    0LL);
  v23 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v23, v21, 1, (System_String_o *)StringLiteral_3545/*"CLICK_FAVORITE_CHANGE"*/, v22, v24);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v23,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8804/*"MYROOM_MENU_NAME_5"*/, 0LL);
  v26 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v26, v25, 0, (System_String_o *)StringLiteral_3557/*"CLICK_NOTICE"*/, 0LL, v27);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v26,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8805/*"MYROOM_MENU_NAME_6"*/, 0LL);
  v29 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v29, v28, 0, (System_String_o *)StringLiteral_3548/*"CLICK_GAMEOPTION"*/, 0LL, v30);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v29,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
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
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MYROOM_MENU_NAME_7"*/, 0LL);
    v33 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
    MyRoomListControl_MainItemInfo___ctor(v33, v32, 0, (System_String_o *)StringLiteral_3564/*"CLICK_SERIAL_CODE"*/, 0LL, v34);
    System_Collections_Generic_HashSet_object___Add(
      v3,
      (Il2CppObject *)v33,
      (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8807/*"MYROOM_MENU_NAME_8"*/, 0LL);
  v36 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v36, v35, 0, (System_String_o *)StringLiteral_3538/*"CLICK_CONTINUE_DEVICE"*/, 0LL, v37);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v36,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8800/*"MYROOM_MENU_NAME_13"*/, 0LL);
  v39 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v39, v38, 0, (System_String_o *)StringLiteral_3527/*"CLICK_ACCOUNT_LINKAGE"*/, 0LL, v40);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v39,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8808/*"MYROOM_MENU_NAME_9"*/, 0LL);
  v42 = (MyRoomListControl_MainItemInfo_o *)sub_1B887FC(MyRoomListControl_MainItemInfo_TypeInfo);
  MyRoomListControl_MainItemInfo___ctor(v42, v41, 0, (System_String_o *)StringLiteral_3575/*"CLICK_TITLE"*/, 0LL, v43);
  System_Collections_Generic_HashSet_object___Add(
    v3,
    (Il2CppObject *)v42,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__Add__);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v85,
    v3,
    (const MethodInfo_33B9CEC *)Method_System_Collections_Generic_HashSet_MyRoomListControl_MainItemInfo__GetEnumerator__);
  v86 = v85;
  __asm { FMOV            V0.4S, #1.0 }
  v49 = 0.0;
  v84 = _Q0;
  while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_3277D94 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__MoveNext__) )
  {
    current = v86.fields._current;
    listItemBase = (Il2CppObject *)this->fields.listItemBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v52 = UnityEngine_Object__Instantiate_object_(
            listItemBase,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v54 = (UnityEngine_GameObject_o *)v52;
    if ( !v52 )
      sub_1B8880C(0LL, v53);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v52, 1, 0LL);
    GameObjectExtensions__SafeSetParent(v54, (UnityEngine_Component_o *)this->fields.myRoomListGrid, 0LL);
    GameObjectExtensions__SetLocalPosition_33724224(v54, 0.0, v49, 0.0, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         v54,
                         (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    v56 = UnityEngine_GameObject__GetComponent_object_(
            v54,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v57 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, 0LL, 0LL);
    if ( v57 )
    {
      if ( !v56 )
        sub_1B8880C(v57, v58);
      v59 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v56->klass->vtable[33].method)(
              v56,
              v56->klass->vtable[34].methodPtr);
      if ( !Component_object )
        sub_1B8880C(v59, v60);
      Component_object[2].klass = (Il2CppClass *)v54;
      sub_1B88554(&Component_object[2], v54);
      *(_OWORD *)&Component_object[2].monitor = v84;
      *(_OWORD *)&Component_object[4].monitor = v84;
    }
    GameObject = GameObjectExtensions__FindGameObject(v54, (System_String_o *)StringLiteral_21985/*"nameLabel"*/, 0LL);
    if ( !GameObject )
      sub_1B8880C(0LL, v62);
    v63 = UnityEngine_GameObject__GetComponent_object_(
            GameObject,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !current )
      sub_1B8880C(v63, v64);
    v65 = (struct UILabel_o *)v63;
    if ( !v63 )
      sub_1B8880C(0LL, v64);
    UILabel__set_text((UILabel_o *)v63, (System_String_o *)current[1].klass, 0LL);
    if ( System_String__op_Equality((System_String_o *)current[2].klass, (System_String_o *)StringLiteral_3545/*"CLICK_FAVORITE_CHANGE"*/, 0LL) )
    {
      this->fields.favoriteChangeMenuBtn = (struct UIButton_o *)Component_object;
      sub_1B88554(&this->fields.favoriteChangeMenuBtn, Component_object);
      this->fields.favoriteTxtLb = v65;
      sub_1B88554(&this->fields.favoriteTxtLb, v65);
    }
    monitor = (int)current[1].monitor;
    if ( monitor )
    {
      if ( monitor == 1 )
      {
        v67 = UnityEngine_GameObject__GetComponent_object_(
                v54,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
        if ( !v67 )
          sub_1B8880C(0LL, v68);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v67, 0, 0LL);
        if ( !Component_object )
          sub_1B8880C(v69, v70);
        v71 = (System_Collections_Generic_List_object__o *)Component_object[12].monitor;
        v72 = (EventDelegate_Callback_o *)current[2].monitor;
        v73 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
        EventDelegate___ctor_46786736(v73, v72, 0LL);
        if ( !v71 )
          sub_1B8880C(v74, v75);
        items = v71->fields._items;
        v77 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v71->fields._version;
        if ( !items )
          sub_1B8880C(v74, v75);
        size = v71->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v71,
            (Il2CppObject *)v73,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = &items->obj.klass + size;
          v71->fields._size = size + 1;
          v79[4] = (Il2CppClass *)v73;
          sub_1B88554(v79 + 4, v73);
        }
      }
    }
    else
    {
      v80 = UnityEngine_GameObject__GetComponent_object_(
              v54,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
      if ( !v80 )
        sub_1B8880C(0LL, v81);
      klass = current[2].klass;
      v80[2].monitor = klass;
      sub_1B88554(&v80[2].monitor, klass);
    }
    v83 = MyRoomListControl_TypeInfo;
    if ( !MyRoomListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomListControl_TypeInfo);
      v83 = MyRoomListControl_TypeInfo;
    }
    v49 = v49 - v83->static_fields->ITEM_OFFSET_SIZE_Y;
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_3277D90 *)Method_System_Collections_Generic_HashSet_Enumerator_MyRoomListControl_MainItemInfo__Dispose__);
  GameObjectExtensions__SetLocalPosition_33724224(this->fields.itemDummy, 0.0, v49, 0.0, 0LL);
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

  if ( (byte_4A56A58 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_MyRoomListControl_ClickFavoriteChange__);
    sub_1B885B0(&Method_MyRoomListControl_callBackNotificationDlg__);
    sub_1B885B0(&OpeningMovieData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_3545/*"CLICK_FAVORITE_CHANGE"*/);
    sub_1B885B0(&StringLiteral_8795/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56A58 = 1;
  }
  if ( this->fields.isUseFavorite )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3545/*"CLICK_FAVORITE_CHANGE"*/, 0LL);
      return;
    }
LABEL_18:
    sub_1B8880C(myRoomFsm, method);
  }
  v4 = Method_MyRoomListControl_ClickFavoriteChange__;
  if ( (*((_BYTE *)Method_MyRoomListControl_ClickFavoriteChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_MyRoomListControl_ClickFavoriteChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  myRoomFsm = (PlayMakerFSM_o *)OpeningMovieData__GetFirstWarId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  myRoomFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  (int32_t)myRoomFsm,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !myRoomFsm )
    goto LABEL_18;
  fsmTemplate = (Il2CppObject *)myRoomFsm->fields.fsmTemplate;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8795/*"MYROOM_MENU_FAVORITE_INFO_TXT"*/, 0LL);
  v9 = System_String__Format(v8, fsmTemplate, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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

  if ( (byte_4A56A57 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (MyRoomListControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56A57 = 1;
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
        sub_1B88814(this, items);
      this = (MyRoomListControl_o *)items->m_Items[v7];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SetMenuNameControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MyRoomListControl_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = System_Int32__ToString((int32_t)&v11, 0LL);
        v10 = System_String__Concat_61707032(prefixStr, v9, 0LL);
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
    sub_1B8880C(this, items);
  }
}


void __fastcall MyRoomListControl__Setup(MyRoomListControl_o *this, const MethodInfo *method)
{
  _BOOL8 _37688364; // x0
  UIGrid_o *noticeListGrid; // x1
  const MethodInfo *v5; // x2
  MyRoomListControl_o *v6; // x0
  const MethodInfo *v7; // x3
  char *noticeComp; // x0
  __int64 v9; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  struct UIButton_o *favoriteChangeMenuBtn; // x8
  struct UIButton_o *v12; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A56A55 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_8809/*"MYROOM_NOTICE_NAME_"*/);
    byte_4A56A55 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37688364 = TutorialFlag__Get_37688364(106, 0LL);
  noticeListGrid = this->fields.noticeListGrid;
  this->fields.isUseFavorite = _37688364;
  MyRoomListControl__SetupScrollListBtn((MyRoomListControl_o *)_37688364, noticeListGrid, v5);
  MyRoomListControl__SetBtnName(v6, this->fields.noticeItems, (System_String_o *)StringLiteral_8809/*"MYROOM_NOTICE_NAME_"*/, v7);
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
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)noticeComp, v13, 0LL);
  favoriteChangeMenuBtn = this->fields.favoriteChangeMenuBtn;
  if ( !favoriteChangeMenuBtn
    || (favoriteChangeMenuBtn->fields.hover = (struct UnityEngine_Color_o)xmmword_BB4110,
        (v12 = this->fields.favoriteChangeMenuBtn) == 0LL)
    || (v12->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BB4110,
        (noticeComp = (char *)this->fields.favoriteTxtLb) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(noticeComp, v9);
  }
  UILabel__set_gradientBottom((UILabel_o *)noticeComp, *(UnityEngine_Color_o *)(noticeComp + 492), 0LL);
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
  Il2CppObject *ComponentInChildren_object__48719376; // x22
  UnityEngine_GameObject_o *v18; // x0
  MyRoomListControl_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x22
  __int128 v21; // [xsp+0h] [xbp-70h]

  if ( (byte_4A56A56 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_UIButton___);
    sub_1B885B0(&MyRoomListControl_TypeInfo);
    this = (MyRoomListControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56A56 = 1;
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
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          Component_object = UnityEngine_Component__GetComponentInChildren_object__48719376(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
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
                  (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_UIButton___);
          this = (MyRoomListControl_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)Component_object,
                                          0LL);
          if ( !v15 )
            break;
          v15[2].klass = (Il2CppClass *)this;
          v16 = v15 + 2;
          sub_1B88554(v16, this);
          *(_OWORD *)&v16->monitor = v21;
          *(_OWORD *)&v16[2].monitor = v21;
        }
        ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                 (UnityEngine_Component_o *)Child,
                                                 (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomListControl_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object__48719376,
                                        0LL,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !ComponentInChildren_object__48719376 )
            break;
          v18 = UnityEngine_Component__get_gameObject(
                  (UnityEngine_Component_o *)ComponentInChildren_object__48719376,
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
    sub_1B8880C(this, grid);
  }
}


void __fastcall MyRoomListControl__callBackNotificationDlg(MyRoomListControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A56A59 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56A59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
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
  sub_1B88554(&this->fields, name);
  this->fields.Type = type;
  this->fields.EventName = eventName;
  sub_1B88554(&this->fields.EventName, eventName);
  this->fields.ClickAction = clickAction;
  sub_1B88554(&this->fields.ClickAction, clickAction);
}