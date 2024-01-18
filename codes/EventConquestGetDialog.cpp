void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418A315 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A315 = 1;
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

  EventConquestGetDialog__Close_29714032(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_29714032(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418A313 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_EventConquestGetDialog_EndClose__, v10);
    byte_418A313 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall EventConquestGetDialog__EndOpen(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall EventConquestGetDialog__Init(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x20
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_418A310 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418A310 = 1;
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
    sub_B2C434(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_18:
      v19 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v15);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_38;
    v22 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v22 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v20);
LABEL_38:
      sub_B2C434(v20, v21);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v24 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v26 = *(_QWORD *)v24;
    v27 = v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_32;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_32:
      v30 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_39:
    sub_B2C434(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventConquestGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_418A314 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A314 = 1;
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
      sub_B2C434(0LL, v3);
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
  GiftEntity_array *v11; // x26
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
  void *Instance; // x0
  int64_t UserId; // x1
  int max_length; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGameEntity_o *v27; // x25
  __int64 v28; // x22
  struct UIGrid_o **p_itemIconGrid; // x28
  int32_t *v30; // x21
  int v31; // w8
  int32_t qp; // w26
  BalanceConfig_c *v33; // x0
  struct UnityEngine_GameObject_o *itemIcon; // x27
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v36; // x27
  UnityEngine_Component_o *v37; // x8
  struct UIGrid_o **v38; // x20
  UnityEngine_Transform_o *v39; // x28
  UnityEngine_Transform_o *transform; // x28
  int v41; // s0
  int32_t v44; // w28
  ItemIconComponent_o *v45; // x27
  const MethodInfo *v46; // x4
  int32_t v47; // w21
  int v48; // w22
  uint16_t Chars; // w0
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  int v52; // s0
  System_Action_o *v53; // x20
  __int64 v54; // x0
  System_String_o *v55; // [xsp+0h] [xbp-80h]
  System_String_o *v56; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v57; // [xsp+10h] [xbp-70h]
  GiftEntity_o **m_Items; // [xsp+18h] [xbp-68h]
  GiftEntity_array *v59; // [xsp+20h] [xbp-60h]
  int v60; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  v10 = title;
  v11 = rewards;
  if ( (byte_418A311 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, rewards);
    sub_B2C35C(&BalanceConfig_TypeInfo, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_EventConquestGetDialog_EndOpen__, v17);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___, v18);
    sub_B2C35C(&NetworkManager_TypeInfo, v19);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_418A311 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCb,
    (System_String_array **)title,
    (System_String_array **)detail,
    (System_Boolean_array **)closeCb,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !v11 )
    goto LABEL_83;
  max_length = v11->max_length;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v56 = detail;
  v57 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( max_length <= 0 )
  {
    p_itemIconGrid = &this->fields.itemIconGrid;
    goto LABEL_52;
  }
  v27 = (UserGameEntity_o *)Instance;
  v55 = v10;
  v28 = 0LL;
  p_itemIconGrid = &this->fields.itemIconGrid;
  m_Items = v11->m_Items;
  v59 = v11;
  v60 = max_length;
  do
  {
    if ( (unsigned int)v28 >= v11->max_length )
    {
      v54 = sub_B2C460(Instance);
      sub_B2C400(v54, 0LL);
    }
    v30 = (int32_t *)m_Items[v28];
    if ( !v30 )
      goto LABEL_83;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_83;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v30[6],
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_83;
    v31 = *((_DWORD *)Instance + 12);
    if ( v31 <= 4 )
    {
      if ( v31 == 1 )
      {
        if ( !v27 )
          goto LABEL_83;
        qp = v27->fields.qp;
        goto LABEL_34;
      }
      if ( v31 == 2 )
      {
        if ( !v27 )
          goto LABEL_83;
        qp = v27->fields.stone;
        goto LABEL_34;
      }
    }
    else
    {
      switch ( v31 )
      {
        case 5:
          if ( !v27 )
            goto LABEL_83;
          qp = v27->fields.mana;
          goto LABEL_34;
        case 13:
          if ( !v27 )
            goto LABEL_83;
          qp = UserGameEntity__GetFriendPoint(v27, 0LL);
          goto LABEL_34;
        case 22:
          if ( !v27 )
            goto LABEL_83;
          qp = v27->fields.rarePri;
          goto LABEL_34;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    Instance = v57;
    if ( !v57 )
      goto LABEL_83;
    Instance = UserItemMaster__GetEntityDefinitely(v57, UserId, v30[6], 0LL);
    if ( !Instance )
      goto LABEL_83;
    qp = *((_DWORD *)Instance + 7);
LABEL_34:
    v33 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    itemIcon = this->fields.itemIcon;
    UserItemMax = v33->static_fields->UserItemMax;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_83;
    v36 = (UnityEngine_GameObject_o *)Instance;
    Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    v37 = (UnityEngine_Component_o *)*p_itemIconGrid;
    if ( !*p_itemIconGrid )
      goto LABEL_83;
    v38 = p_itemIconGrid;
    v39 = (UnityEngine_Transform_o *)Instance;
    Instance = UnityEngine_Component__get_transform(v37, 0LL);
    if ( !v39 )
      goto LABEL_83;
    UnityEngine_Transform__set_parent(v39, (UnityEngine_Transform_o *)Instance, 0LL);
    transform = UnityEngine_GameObject__get_transform(v36, 0LL);
    *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_83;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v41, 0LL);
    Instance = UnityEngine_GameObject__get_transform(v36, 0LL);
    if ( !Instance )
      goto LABEL_83;
    v61.fields.x = this->fields.ICON_SCALE_SIZE;
    v61.fields.y = v61.fields.x;
    v61.fields.z = v61.fields.x;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v61, 0LL);
    Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 v36,
                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    v44 = v30[7] < 0 ? -1 : v30[7];
    if ( !Instance )
      goto LABEL_83;
    v45 = (ItemIconComponent_o *)Instance;
    ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v30[5], v30[6], v44, 0, 0LL);
    ItemIconComponent__setTypeSpritePositionY(v45, this->fields.TYPE_SPRITE_POS_Y, 0LL);
    EventConquestGetIconComponent__setPossessionCounterLabel(
      (EventConquestGetIconComponent_o *)v45,
      qp,
      v44,
      qp >= UserItemMax,
      v46);
    max_length = v60;
    v11 = v59;
    ++v28;
    p_itemIconGrid = v38;
  }
  while ( (int)v28 < v60 );
  v10 = v55;
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
  UILabel__set_text((UILabel_o *)Instance, v56, 0LL);
  if ( !v56 )
    goto LABEL_83;
  if ( v56->fields.m_stringLength < 1 )
  {
    v48 = 0;
  }
  else
  {
    v47 = 0;
    v48 = 0;
    do
    {
      Chars = System_String__get_Chars(v56, v47++, 0LL);
      if ( Chars == 10 )
        ++v48;
    }
    while ( v47 < v56->fields.m_stringLength );
  }
  Instance = this->fields.itemGetDetailLabel;
  if ( v48 < 5 )
  {
    if ( Instance )
    {
      NORMAL_FONT_SIZE = this->fields.NORMAL_FONT_SIZE;
      goto LABEL_68;
    }
LABEL_83:
    sub_B2C434(Instance, UserId);
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
      if ( v48 < 5 )
      {
        v52 = -1037303808;
        goto LABEL_80;
      }
      goto LABEL_79;
    case 2:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( v48 < 4 )
      {
        v52 = -1037565952;
        goto LABEL_80;
      }
LABEL_79:
      v52 = -1038352384;
      goto LABEL_80;
    case 1:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v52 = -1038090240;
LABEL_80:
      GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v52, 0LL);
      break;
  }
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_29713820(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_418A312 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, reward);
    sub_B2C35C(&Method_EventConquestGetDialog_EndOpen__, v10);
    byte_418A312 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
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
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
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
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
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
            v15 = sub_AC5258(v20, class_0, v9, v11);
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