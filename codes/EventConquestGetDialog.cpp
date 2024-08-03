void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A0001C & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A0001C = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC27C00003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x180000001ELL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__Close(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventConquestGetDialog__Close_45125644(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_45125644(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4A0001A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_EventConquestGetDialog_EndClose__, v6);
    byte_4A0001A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 3;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall EventConquestGetDialog__EndClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventConquestGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A00017 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_4A00017 = 1;
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
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v17);
LABEL_37:
      sub_1B64324(v17);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  v20 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_31;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_31:
      v25 = sub_1BB60A8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1B64324(itemGetDetailLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct EventConquestGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4A0001B & 1) == 0 )
  {
    sub_1B640C8(&Method_EventConquestGetDialog_OnClickClose__, method);
    byte_4A0001B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventConquestGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B64324(v5);
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
  __int64 Instance; // x0
  signed int max_length; // w24
  Il2CppObject *MasterData_object; // x23
  __int64 v24; // x1
  UserGameEntity_o *v25; // x25
  il2cpp_array_size_t v26; // w26
  GiftEntity_o *v27; // x21
  int v28; // w8
  int32_t qp; // w27
  int64_t UserId; // x1
  BalanceConfig_c *v31; // x0
  Il2CppObject *itemIcon; // x28
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v34; // x28
  UnityEngine_Transform_o *v35; // x29
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x29
  int32_t v38; // w29
  ItemIconComponent_o *v39; // x28
  const MethodInfo *v40; // x4
  int32_t v41; // w21
  int v42; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int v46; // w8
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x20
  System_String_o *value; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v51; // [xsp+10h] [xbp-70h]
  signed int v52; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00018 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, rewards);
    sub_1B640C8(&BalanceConfig_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_EventConquestGetDialog_EndOpen__, v15);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4A00018 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)title,
    (int32_t)detail);
  if ( !rewards )
    goto LABEL_80;
  max_length = rewards->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  value = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  v51 = (UserItemMaster_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( max_length >= 1 )
  {
    v25 = (UserGameEntity_o *)Instance;
    v26 = 0;
    v52 = max_length;
    do
    {
      if ( v26 >= rewards->max_length )
        sub_1B6432C(Instance, v24);
      v27 = rewards->m_Items[v26];
      if ( !v27 )
        goto LABEL_80;
      if ( !MasterData_object )
        goto LABEL_80;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v27->fields.objectId,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_80;
      v28 = *(_DWORD *)(Instance + 48);
      if ( v28 <= 4 )
      {
        if ( v28 == 1 )
        {
          if ( !v25 )
            goto LABEL_80;
          qp = v25->fields.qp;
          goto LABEL_33;
        }
        if ( v28 == 2 )
        {
          if ( !v25 )
            goto LABEL_80;
          qp = v25->fields.stone;
          goto LABEL_33;
        }
      }
      else
      {
        switch ( v28 )
        {
          case 5:
            if ( !v25 )
              goto LABEL_80;
            qp = v25->fields.mana;
            goto LABEL_33;
          case 13:
            if ( !v25 )
              goto LABEL_80;
            qp = UserGameEntity__GetFriendPoint(v25, 0LL);
            goto LABEL_33;
          case 22:
            if ( !v25 )
              goto LABEL_80;
            qp = v25->fields.rarePri;
            goto LABEL_33;
        }
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (__int64)v51;
      if ( !v51 )
        goto LABEL_80;
      Instance = (__int64)UserItemMaster__GetEntityDefinitely(v51, UserId, v27->fields.objectId, 0LL);
      if ( !Instance )
        goto LABEL_80;
      qp = *(_DWORD *)(Instance + 28);
LABEL_33:
      v31 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v31 = BalanceConfig_TypeInfo;
      }
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      UserItemMax = v31->static_fields->UserItemMax;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            itemIcon,
                            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_80;
      v34 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemIconGrid )
        goto LABEL_80;
      v35 = (UnityEngine_Transform_o *)Instance;
      Instance = (__int64)UnityEngine_Component__get_transform(
                            (UnityEngine_Component_o *)this->fields.itemIconGrid,
                            0LL);
      if ( !v35 )
        goto LABEL_80;
      UnityEngine_Transform__set_parent(v35, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
      v37 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_49F7111 )
      {
        Instance = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v36);
        byte_49F7111 = 1;
      }
      if ( !v37 )
        goto LABEL_80;
      UnityEngine_Transform__set_localPosition(v37, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
      if ( !Instance )
        goto LABEL_80;
      v53.fields.x = this->fields.ICON_SCALE_SIZE;
      v53.fields.y = v53.fields.x;
      v53.fields.z = v53.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v53, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v34,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      v38 = v27->fields.num < 0 ? -1 : v27->fields.num;
      if ( !Instance )
        goto LABEL_80;
      v39 = (ItemIconComponent_o *)Instance;
      ItemIconComponent__SetGift_37829292(
        (ItemIconComponent_o *)Instance,
        v27->fields.type,
        v27->fields.objectId,
        v38,
        0,
        0LL);
      ItemIconComponent__setTypeSpritePositionY(v39, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v39,
        qp,
        v38,
        qp >= UserItemMax,
        v40);
      max_length = v52;
    }
    while ( v52 != ++v26 );
  }
  Instance = (__int64)this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL), (Instance = (__int64)this->fields.titleLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, value, 0LL), (Instance = (__int64)this->fields.itemGetDetailLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, detail, 0LL), !detail) )
  {
LABEL_80:
    sub_1B64324(Instance);
  }
  if ( detail->fields._stringLength < 1 )
  {
    v42 = 0;
  }
  else
  {
    v41 = 0;
    v42 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v41++, 0LL);
      if ( Chars == 10 )
        ++v42;
    }
    while ( v41 < detail->fields._stringLength );
  }
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( v42 >= 5 )
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
    if ( v42 < 5 )
    {
      v46 = -1037303808;
      goto LABEL_77;
    }
LABEL_76:
    v46 = -1038352384;
    goto LABEL_77;
  }
  if ( max_length == 2 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_80;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v42 < 4 )
    {
      v46 = -1037565952;
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
  v46 = -1038090240;
LABEL_77:
  GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v46, 0LL);
LABEL_78:
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v49 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v47, v48);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_45125444(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x20

  if ( (byte_4A00019 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, reward);
    sub_1B640C8(&Method_EventConquestGetDialog_EndOpen__, v7);
    byte_4A00019 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)detail,
    (int32_t)closeCb);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetDialog_ClickDelegate___ctor(
        EventConquestGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B0DF8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0DB8;
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}