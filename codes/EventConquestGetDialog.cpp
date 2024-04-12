void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B27A2 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B27A2 = 1;
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

  EventConquestGetDialog__Close_29640268(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_29640268(
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

  if ( (byte_42B27A0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventConquestGetDialog_EndClose__);
    byte_42B27A0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v5; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  __int64 v23; // x20
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  if ( (byte_42B279D & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B279D = 1;
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
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_18:
      v15 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v11);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_38;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B52D50(v16);
LABEL_38:
      sub_B52A5C(v16, v17);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  v20 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v22 = *(_QWORD *)v20;
    v23 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_32;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_32:
      v26 = sub_AEB880(v20, System_IDisposable_TypeInfo, 0LL, v21);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_39:
    sub_B52A5C(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventConquestGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42B27A1 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B27A1 = 1;
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
      sub_B52A5C(0LL, v3);
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
  if ( (byte_42B279E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_EventConquestGetDialog_EndOpen__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B279E = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B52920(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v46 = detail;
  v47 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
      v44 = sub_B52A88(Instance);
      sub_B52A28(v44, 0LL);
    }
    v20 = (int32_t *)m_Items[v18];
    if ( !v20 )
      goto LABEL_83;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_83;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v20[6],
                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
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
    sub_B52A5C(Instance, UserId);
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
  v43 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_29640056(
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

  if ( (byte_42B279F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventConquestGetDialog_EndOpen__);
    byte_42B279F = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B52920(
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
    sub_B52A5C(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B52928(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  EventConquestGetDialog_ClickDelegate_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  EventConquestGetDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  EventConquestGetDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (EventConquestGetDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B529B4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B529AC(v21);
      v24 = sub_B52DB0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AEB880(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B52A34(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AEB880(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}