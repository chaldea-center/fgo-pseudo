void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_43544F5 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_43544F5 = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC27C00003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x180000001ELL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__Close(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventConquestGetDialog__Close_29865576(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_29865576(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_43544F3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventConquestGetDialog_EndClose__);
    byte_43544F3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall EventConquestGetDialog__EndClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventConquestGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall EventConquestGetDialog__EndOpen(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall EventConquestGetDialog__Init(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  unsigned __int64 v11; // x10
  System_Collections_IEnumerator_c **v12; // x11
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  if ( (byte_43544F0 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_Transform_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43544F0 = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemGetDetailLabel = (UILabel_o *)this->fields.itemIconGrid;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)itemGetDetailLabel,
                                      0LL);
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)itemGetDetailLabel, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        v12 += 2;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_18:
      v13 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_38;
    v16 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[v16 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B70A60(v14);
LABEL_38:
      sub_B7076C(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  }
  v18 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_32;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_32:
      v23 = sub_B08590(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_39:
    sub_B7076C(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventConquestGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_43544F4 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43544F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B7076C(0LL, v3);
    EventConquestGetDialog_ClickDelegate__Invoke(closeFunc, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetDialog__Open(
        EventConquestGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *title,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *v10; // x22
  void *Instance; // x0
  int64_t UserId; // x1
  signed int max_length; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGameEntity_o *v17; // x25
  __int64 v18; // x22
  struct UIGrid_o **p_itemIconGrid; // x28
  int32_t *v20; // x21
  int v21; // w8
  int32_t qp; // w26
  BalanceConfig_c *v23; // x0
  struct UnityEngine_GameObject_o *itemIcon; // x27
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v26; // x27
  UnityEngine_Component_o *v27; // x8
  struct UIGrid_o **v28; // x20
  UnityEngine_Transform_o *v29; // x28
  UnityEngine_Transform_o *transform; // x28
  int v31; // s0
  int32_t v34; // w28
  ItemIconComponent_o *v35; // x27
  const MethodInfo *v36; // x4
  int32_t v37; // w21
  int v38; // w22
  uint16_t Chars; // w0
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  int v42; // s0
  System_Action_o *v43; // x20
  __int64 v44; // x0
  System_String_o *v45; // [xsp+0h] [xbp-80h]
  System_String_o *v46; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v47; // [xsp+10h] [xbp-70h]
  GiftEntity_o **m_Items; // [xsp+18h] [xbp-68h]
  GiftEntity_array *v49; // [xsp+20h] [xbp-60h]
  int v50; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v10 = title;
  if ( (byte_43544F1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_EventConquestGetDialog_EndOpen__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43544F1 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCb,
    (System_String_array **)title,
    (System_String_array **)detail,
    (System_Boolean_array **)closeCb,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_83;
  max_length = rewards->max_length;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v46 = detail;
  v47 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( max_length <= 0 )
  {
    p_itemIconGrid = &this->fields.itemIconGrid;
    goto LABEL_52;
  }
  v17 = (UserGameEntity_o *)Instance;
  v45 = v10;
  v18 = 0LL;
  p_itemIconGrid = &this->fields.itemIconGrid;
  m_Items = rewards->m_Items;
  v49 = rewards;
  v50 = max_length;
  do
  {
    if ( (unsigned int)v18 >= rewards->max_length )
    {
      v44 = sub_B70798(Instance);
      sub_B70738(v44, 0LL);
    }
    v20 = (int32_t *)m_Items[v18];
    if ( !v20 )
      goto LABEL_83;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_83;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v20[6],
                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_83;
    v21 = *((_DWORD *)Instance + 12);
    if ( v21 <= 4 )
    {
      if ( v21 == 1 )
      {
        if ( !v17 )
          goto LABEL_83;
        qp = v17->fields.qp;
        goto LABEL_34;
      }
      if ( v21 == 2 )
      {
        if ( !v17 )
          goto LABEL_83;
        qp = v17->fields.stone;
        goto LABEL_34;
      }
    }
    else
    {
      switch ( v21 )
      {
        case 5:
          if ( !v17 )
            goto LABEL_83;
          qp = v17->fields.mana;
          goto LABEL_34;
        case 13:
          if ( !v17 )
            goto LABEL_83;
          qp = UserGameEntity__GetFriendPoint(v17, 0LL);
          goto LABEL_34;
        case 22:
          if ( !v17 )
            goto LABEL_83;
          qp = v17->fields.rarePri;
          goto LABEL_34;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    Instance = v47;
    if ( !v47 )
      goto LABEL_83;
    Instance = UserItemMaster__GetEntityDefinitely(v47, UserId, v20[6], 0LL);
    if ( !Instance )
      goto LABEL_83;
    qp = *((_DWORD *)Instance + 7);
LABEL_34:
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    itemIcon = this->fields.itemIcon;
    UserItemMax = v23->static_fields->UserItemMax;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                 (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_83;
    v26 = (UnityEngine_GameObject_o *)Instance;
    Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    v27 = (UnityEngine_Component_o *)*p_itemIconGrid;
    if ( !*p_itemIconGrid )
      goto LABEL_83;
    v28 = p_itemIconGrid;
    v29 = (UnityEngine_Transform_o *)Instance;
    Instance = UnityEngine_Component__get_transform(v27, 0LL);
    if ( !v29 )
      goto LABEL_83;
    UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)Instance, 0LL);
    transform = UnityEngine_GameObject__get_transform(v26, 0LL);
    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_83;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
    Instance = UnityEngine_GameObject__get_transform(v26, 0LL);
    if ( !Instance )
      goto LABEL_83;
    v51.fields.x = this->fields.ICON_SCALE_SIZE;
    v51.fields.y = v51.fields.x;
    v51.fields.z = v51.fields.x;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v51, 0LL);
    Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 v26,
                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    v34 = v20[7] < 0 ? -1 : v20[7];
    if ( !Instance )
      goto LABEL_83;
    v35 = (ItemIconComponent_o *)Instance;
    ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v20[5], v20[6], v34, 0, 0LL);
    ItemIconComponent__setTypeSpritePositionY(v35, this->fields.TYPE_SPRITE_POS_Y, 0LL);
    EventConquestGetIconComponent__setPossessionCounterLabel(
      (EventConquestGetIconComponent_o *)v35,
      qp,
      v34,
      qp >= UserItemMax,
      v36);
    max_length = v50;
    rewards = v49;
    ++v18;
    p_itemIconGrid = v28;
  }
  while ( (int)v18 < v50 );
  v10 = v45;
LABEL_52:
  Instance = *p_itemIconGrid;
  if ( !*p_itemIconGrid )
    goto LABEL_83;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_83;
  UILabel__set_text((UILabel_o *)Instance, v10, 0LL);
  Instance = this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_83;
  UILabel__set_text((UILabel_o *)Instance, v46, 0LL);
  if ( !v46 )
    goto LABEL_83;
  if ( v46->fields.m_stringLength < 1 )
  {
    v38 = 0;
  }
  else
  {
    v37 = 0;
    v38 = 0;
    do
    {
      Chars = System_String__get_Chars(v46, v37++, 0LL);
      if ( Chars == 10 )
        ++v38;
    }
    while ( v37 < v46->fields.m_stringLength );
  }
  Instance = this->fields.itemGetDetailLabel;
  if ( v38 < 5 )
  {
    if ( Instance )
    {
      NORMAL_FONT_SIZE = this->fields.NORMAL_FONT_SIZE;
      goto LABEL_68;
    }
LABEL_83:
    sub_B7076C(Instance, UserId);
  }
  if ( !Instance )
    goto LABEL_83;
  NORMAL_FONT_SIZE = this->fields.SMALL_FONT_SIZE;
LABEL_68:
  UILabel__set_fontSize((UILabel_o *)Instance, NORMAL_FONT_SIZE, 0LL);
  switch ( max_length )
  {
    case 3:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( v38 < 5 )
      {
        v42 = -1037303808;
        goto LABEL_80;
      }
      goto LABEL_79;
    case 2:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( v38 < 4 )
      {
        v42 = -1037565952;
        goto LABEL_80;
      }
LABEL_79:
      v42 = -1038352384;
      goto LABEL_80;
    case 1:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v42 = -1038090240;
LABEL_80:
      GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v42, 0LL);
      break;
  }
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v43 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_29865364(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_43544F2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventConquestGetDialog_EndOpen__);
    byte_43544F2 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCb,
    (System_String_array **)detail,
    (System_String_array **)closeCb,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetDialog_ClickDelegate___ctor(
        EventConquestGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  EventConquestGetDialog_ClickDelegate_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  EventConquestGetDialog_ClickDelegate_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  EventConquestGetDialog_ClickDelegate_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (EventConquestGetDialog_ClickDelegate_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B706C4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B706BC(v18);
      v21 = sub_B70AC0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B08590(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B70744(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B08590(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}