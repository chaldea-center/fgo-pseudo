void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19F77 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19F77 = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC27C00003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x180000001ELL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__Close(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventConquestGetDialog__Close_46314116(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_46314116(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B19F75 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_EventConquestGetDialog_EndClose__, v10, v11);
    byte_4B19F75 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall EventConquestGetDialog__EndClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventConquestGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall EventConquestGetDialog__EndOpen(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall EventConquestGetDialog__Init(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v13; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  __int64 v26; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x20
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B19F72 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B19F72 = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_38;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemGetDetailLabel = (UILabel_o *)this->fields.itemIconGrid;
  if ( !itemGetDetailLabel )
    goto LABEL_38;
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)itemGetDetailLabel,
                                      0LL);
  if ( !itemGetDetailLabel )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)itemGetDetailLabel, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v23 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                       Enumerator,
                                       *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v23);
LABEL_37:
      sub_1BCAA3C(v23, v24);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  v28 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_31;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_31:
      v33 = sub_1C1C7C0(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1BCAA3C(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct EventConquestGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4B19F76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventConquestGetDialog_OnClickClose__, method, v2);
    byte_4B19F76 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventConquestGetDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall EventConquestGetDialog__Open(
        EventConquestGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *title,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 Instance; // x0
  int64_t UserId; // x1
  signed int max_length; // w24
  Il2CppObject *MasterData_object; // x23
  UserGameEntity_o *v37; // x25
  il2cpp_array_size_t v38; // w26
  GiftEntity_o *v39; // x21
  int v40; // w8
  int32_t qp; // w27
  BalanceConfig_c *v42; // x0
  Il2CppObject *itemIcon; // x28
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v45; // x28
  UnityEngine_Transform_o *v46; // x29
  __int64 v47; // x2
  UnityEngine_Transform_o *v48; // x29
  int32_t v49; // w29
  ItemIconComponent_o *v50; // x28
  const MethodInfo *v51; // x4
  int32_t v52; // w21
  int v53; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int v57; // w8
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20
  System_String_o *value; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v63; // [xsp+10h] [xbp-70h]
  signed int v64; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F73 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, rewards, title);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_EventConquestGetDialog_EndOpen__, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B19F73 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCb,
    (int64_t)title,
    (int32_t)detail,
    (System_String_o *)closeCb,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_80;
  max_length = rewards->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  value = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  v63 = (UserItemMaster_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( max_length >= 1 )
  {
    v37 = (UserGameEntity_o *)Instance;
    v38 = 0;
    v64 = max_length;
    do
    {
      if ( v38 >= rewards->max_length )
        sub_1BCAA44(Instance, UserId);
      v39 = rewards->m_Items[v38];
      if ( !v39 )
        goto LABEL_80;
      if ( !MasterData_object )
        goto LABEL_80;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v39->fields.objectId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_80;
      v40 = *(_DWORD *)(Instance + 48);
      if ( v40 <= 4 )
      {
        if ( v40 == 1 )
        {
          if ( !v37 )
            goto LABEL_80;
          qp = v37->fields.qp;
          goto LABEL_33;
        }
        if ( v40 == 2 )
        {
          if ( !v37 )
            goto LABEL_80;
          qp = v37->fields.stone;
          goto LABEL_33;
        }
      }
      else
      {
        switch ( v40 )
        {
          case 5:
            if ( !v37 )
              goto LABEL_80;
            qp = v37->fields.mana;
            goto LABEL_33;
          case 13:
            if ( !v37 )
              goto LABEL_80;
            qp = UserGameEntity__GetFriendPoint(v37, 0LL);
            goto LABEL_33;
          case 22:
            if ( !v37 )
              goto LABEL_80;
            qp = v37->fields.rarePri;
            goto LABEL_33;
        }
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, UserId);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (__int64)v63;
      if ( !v63 )
        goto LABEL_80;
      Instance = (__int64)UserItemMaster__GetEntityDefinitely(v63, UserId, v39->fields.objectId, 0LL);
      if ( !Instance )
        goto LABEL_80;
      qp = *(_DWORD *)(Instance + 28);
LABEL_33:
      v42 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, UserId);
        v42 = BalanceConfig_TypeInfo;
      }
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      UserItemMax = v42->static_fields->UserItemMax;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, UserId);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            itemIcon,
                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_80;
      v45 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemIconGrid )
        goto LABEL_80;
      v46 = (UnityEngine_Transform_o *)Instance;
      Instance = (__int64)UnityEngine_Component__get_transform(
                            (UnityEngine_Component_o *)this->fields.itemIconGrid,
                            0LL);
      if ( !v46 )
        goto LABEL_80;
      UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v45, 0LL);
      v48 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4B109C1 )
      {
        Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, UserId, v47);
        byte_4B109C1 = 1;
      }
      if ( !v48 )
        goto LABEL_80;
      UnityEngine_Transform__set_localPosition(v48, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v45, 0LL);
      if ( !Instance )
        goto LABEL_80;
      v65.fields.x = this->fields.ICON_SCALE_SIZE;
      v65.fields.y = v65.fields.x;
      v65.fields.z = v65.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v65, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v45,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      v49 = v39->fields.num < 0 ? -1 : v39->fields.num;
      if ( !Instance )
        goto LABEL_80;
      v50 = (ItemIconComponent_o *)Instance;
      ItemIconComponent__SetGift_38855180(
        (ItemIconComponent_o *)Instance,
        v39->fields.type,
        v39->fields.objectId,
        v49,
        0,
        0LL);
      ItemIconComponent__setTypeSpritePositionY(v50, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v50,
        qp,
        v49,
        qp >= UserItemMax,
        v51);
      max_length = v64;
    }
    while ( v64 != ++v38 );
  }
  Instance = (__int64)this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL),
        Instance = (__int64)this->fields.titleLabel,
        UserId = (int64_t)value,
        !Instance)
    || (UILabel__set_text((UILabel_o *)Instance, value, 0LL), (Instance = (__int64)this->fields.itemGetDetailLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, detail, 0LL), !detail) )
  {
LABEL_80:
    sub_1BCAA3C(Instance, UserId);
  }
  if ( detail->fields._stringLength < 1 )
  {
    v53 = 0;
  }
  else
  {
    v52 = 0;
    v53 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v52++, 0LL);
      if ( Chars == 10 )
        ++v53;
    }
    while ( v52 < detail->fields._stringLength );
  }
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( v53 >= 5 )
  {
    if ( !Instance )
      goto LABEL_80;
    p_SMALL_FONT_SIZE = &this->fields.SMALL_FONT_SIZE;
  }
  else
  {
    if ( !Instance )
      goto LABEL_80;
    p_SMALL_FONT_SIZE = &this->fields.NORMAL_FONT_SIZE;
  }
  UILabel__set_fontSize((UILabel_o *)Instance, *p_SMALL_FONT_SIZE, 0LL);
  if ( max_length == 3 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_80;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v53 < 5 )
    {
      v57 = -1037303808;
      goto LABEL_77;
    }
LABEL_76:
    v57 = -1038352384;
    goto LABEL_77;
  }
  if ( max_length == 2 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_80;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v53 < 4 )
    {
      v57 = -1037565952;
      goto LABEL_77;
    }
    goto LABEL_76;
  }
  if ( max_length != 1 )
    goto LABEL_78;
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_80;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v57 = -1038090240;
LABEL_77:
  GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v57, 0LL);
LABEL_78:
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_46313916(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4B19F74 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, reward, detail);
    sub_1BCA7E0(&Method_EventConquestGetDialog_EndOpen__, v10, v11);
    byte_4B19F74 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCb,
    (int64_t)detail,
    (int32_t)closeCb,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v13);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetDialog_ClickDelegate___ctor(
        EventConquestGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A11C18;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11BD8;
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}