void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FC5DE & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC5DE = 1;
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

  EventConquestGetDialog__Close_29403092(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_29403092(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FC5DC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_EventConquestGetDialog_EndClose__, v10);
    byte_40FC5DC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UnityEngine_Component_o *itemIconGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x20
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_40FC5D9 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FC5D9 = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemIconGrid = (UnityEngine_Component_o *)this->fields.itemIconGrid;
  if ( !itemIconGrid )
    goto LABEL_39;
  transform = UnityEngine_Component__get_transform(itemIconGrid, 0LL);
  if ( !transform )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_18:
      v18 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_38;
    v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v19);
LABEL_38:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v22 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_32;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_32:
      v27 = sub_AAFEF8(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
LABEL_39:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  EventConquestGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40FC5DD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC5DD = 1;
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
      sub_B170D4();
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
  int max_length; // w24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  WebViewManager_o *v26; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  UserGameEntity_o *v30; // x25
  __int64 v31; // x22
  UIGrid_o **p_itemIconGrid; // x28
  int32_t *v33; // x21
  WarEntity_o *Entity; // x0
  int bannerId; // w8
  int32_t qp; // w26
  int64_t UserId; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  BalanceConfig_c *v39; // x0
  struct UnityEngine_GameObject_o *itemIcon; // x27
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x27
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *v45; // x8
  UIGrid_o **v46; // x20
  UnityEngine_Transform_o *v47; // x28
  UnityEngine_Transform_o *v48; // x0
  UnityEngine_Transform_o *v49; // x28
  int v50; // s0
  UnityEngine_Transform_o *v53; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  int32_t v55; // w28
  ItemIconComponent_o *v56; // x27
  const MethodInfo *v57; // x4
  UILabel_o *titleLabel; // x0
  UILabel_o *itemGetDetailLabel; // x0
  int32_t v60; // w21
  int v61; // w22
  uint16_t Chars; // w0
  UILabel_o *v63; // x0
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v67; // s0
  UnityEngine_Component_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Action_o *v75; // x20
  System_String_o *v76; // [xsp+0h] [xbp-80h]
  System_String_o *v77; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v78; // [xsp+10h] [xbp-70h]
  GiftEntity_o **m_Items; // [xsp+18h] [xbp-68h]
  GiftEntity_array *v80; // [xsp+20h] [xbp-60h]
  int v81; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  v10 = title;
  v11 = rewards;
  if ( (byte_40FC5DA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, rewards);
    sub_B16FFC(&BalanceConfig_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_EventConquestGetDialog_EndOpen__, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___, v18);
    sub_B16FFC(&NetworkManager_TypeInfo, v19);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40FC5DA = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B16F98(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v26 )
    goto LABEL_83;
  v77 = detail;
  v78 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v26,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( max_length <= 0 )
  {
    p_itemIconGrid = &this->fields.itemIconGrid;
    goto LABEL_52;
  }
  v30 = SelfUserGame;
  v76 = v10;
  v31 = 0LL;
  p_itemIconGrid = &this->fields.itemIconGrid;
  m_Items = v11->m_Items;
  v80 = v11;
  v81 = max_length;
  do
  {
    if ( (unsigned int)v31 >= v11->max_length )
    {
      sub_B17100(SelfUserGame, v28, v29);
      sub_B170A0();
    }
    v33 = (int32_t *)m_Items[v31];
    if ( !v33 )
      goto LABEL_83;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_83;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v33[6],
               (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_83;
    bannerId = Entity->fields.bannerId;
    if ( bannerId <= 4 )
    {
      if ( bannerId == 1 )
      {
        if ( !v30 )
          goto LABEL_83;
        qp = v30->fields.qp;
        goto LABEL_34;
      }
      if ( bannerId == 2 )
      {
        if ( !v30 )
          goto LABEL_83;
        qp = v30->fields.stone;
        goto LABEL_34;
      }
    }
    else
    {
      switch ( bannerId )
      {
        case 5:
          if ( !v30 )
            goto LABEL_83;
          qp = v30->fields.mana;
          goto LABEL_34;
        case 13:
          if ( !v30 )
            goto LABEL_83;
          qp = UserGameEntity__GetFriendPoint(v30, 0LL);
          goto LABEL_34;
        case 22:
          if ( !v30 )
            goto LABEL_83;
          qp = v30->fields.rarePri;
          goto LABEL_34;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v78 )
      goto LABEL_83;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(v78, UserId, v33[6], 0LL);
    if ( !EntityDefinitely )
      goto LABEL_83;
    qp = EntityDefinitely->fields.num;
LABEL_34:
    v39 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    itemIcon = this->fields.itemIcon;
    UserItemMax = v39->static_fields->UserItemMax;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v42 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v42 )
      goto LABEL_83;
    v43 = v42;
    transform = UnityEngine_GameObject__get_transform(v42, 0LL);
    v45 = *p_itemIconGrid;
    if ( !*p_itemIconGrid )
      goto LABEL_83;
    v46 = p_itemIconGrid;
    v47 = transform;
    v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v45, 0LL);
    if ( !v47 )
      goto LABEL_83;
    UnityEngine_Transform__set_parent(v47, v48, 0LL);
    v49 = UnityEngine_GameObject__get_transform(v43, 0LL);
    *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v49 )
      goto LABEL_83;
    UnityEngine_Transform__set_localPosition(v49, *(UnityEngine_Vector3_o *)&v50, 0LL);
    v53 = UnityEngine_GameObject__get_transform(v43, 0LL);
    if ( !v53 )
      goto LABEL_83;
    v82.fields.x = this->fields.ICON_SCALE_SIZE;
    v82.fields.y = v82.fields.x;
    v82.fields.z = v82.fields.x;
    UnityEngine_Transform__set_localScale(v53, v82, 0LL);
    Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v43,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    v55 = v33[7] < 0 ? -1 : v33[7];
    if ( !Component_srcLineSprite )
      goto LABEL_83;
    v56 = Component_srcLineSprite;
    ItemIconComponent__SetGift(Component_srcLineSprite, v33[5], v33[6], v55, 0, 0LL);
    ItemIconComponent__setTypeSpritePositionY(v56, this->fields.TYPE_SPRITE_POS_Y, 0LL);
    EventConquestGetIconComponent__setPossessionCounterLabel(
      (EventConquestGetIconComponent_o *)v56,
      qp,
      v55,
      qp >= UserItemMax,
      v57);
    max_length = v81;
    v11 = v80;
    ++v31;
    p_itemIconGrid = v46;
  }
  while ( (int)v31 < v81 );
  v10 = v76;
LABEL_52:
  if ( !*p_itemIconGrid )
    goto LABEL_83;
  UIGrid__set_repositionNow(*p_itemIconGrid, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_83;
  UILabel__set_text(titleLabel, v10, 0LL);
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  if ( !itemGetDetailLabel )
    goto LABEL_83;
  UILabel__set_text(itemGetDetailLabel, v77, 0LL);
  if ( !v77 )
    goto LABEL_83;
  if ( v77->fields.m_stringLength < 1 )
  {
    v61 = 0;
  }
  else
  {
    v60 = 0;
    v61 = 0;
    do
    {
      Chars = System_String__get_Chars(v77, v60++, 0LL);
      if ( Chars == 10 )
        ++v61;
    }
    while ( v60 < v77->fields.m_stringLength );
  }
  v63 = this->fields.itemGetDetailLabel;
  if ( v61 < 5 )
  {
    if ( v63 )
    {
      NORMAL_FONT_SIZE = this->fields.NORMAL_FONT_SIZE;
      goto LABEL_68;
    }
LABEL_83:
    sub_B170D4();
  }
  if ( !v63 )
    goto LABEL_83;
  NORMAL_FONT_SIZE = this->fields.SMALL_FONT_SIZE;
LABEL_68:
  UILabel__set_fontSize(v63, NORMAL_FONT_SIZE, 0LL);
  switch ( max_length )
  {
    case 3:
      v69 = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
      if ( !v69 )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject(v69, 0LL);
      if ( v61 < 5 )
      {
        v67 = -1037303808;
        goto LABEL_80;
      }
      goto LABEL_79;
    case 2:
      v68 = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
      if ( !v68 )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject(v68, 0LL);
      if ( v61 < 4 )
      {
        v67 = -1037565952;
        goto LABEL_80;
      }
LABEL_79:
      v67 = -1038352384;
      goto LABEL_80;
    case 1:
      v65 = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
      if ( !v65 )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject(v65, 0LL);
      v67 = -1038090240;
LABEL_80:
      GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v67, 0LL);
      break;
  }
  v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v70 )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive(v70, 1, 0LL);
  v75 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
  System_Action___ctor(v75, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_29402880(
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40FC5DB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, reward);
    sub_B16FFC(&Method_EventConquestGetDialog_EndOpen__, v10);
    byte_40FC5DB = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B16F98(
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetDialog_ClickDelegate___ctor(
        EventConquestGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  EventConquestGetDialog_ClickDelegate_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  EventConquestGetDialog_ClickDelegate_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  EventConquestGetDialog_ClickDelegate_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (EventConquestGetDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}