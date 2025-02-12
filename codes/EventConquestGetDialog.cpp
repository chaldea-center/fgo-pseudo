void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BCB901 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BCB901 = 1;
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

  EventConquestGetDialog__Close_46851456(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_46851456(
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
  System_Action_o *v11; // x20

  if ( (byte_4BCB8FF & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_EventConquestGetDialog_EndClose__, v10);
    byte_4BCB8FF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_1C1AB78(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x20
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4BCB8FC & 1) == 0 )
  {
    sub_1C1ABD4(&System_IDisposable_TypeInfo, method);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&UnityEngine_Transform_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v6);
    byte_4BCB8FC = 1;
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
    sub_1C1AE30(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_18:
      v17 = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C1B0F0(v18);
LABEL_37:
      sub_1C1AE30(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
  }
  v22 = sub_1C1AD10(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_31:
      v27 = sub_1C6CBB4(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1C1AE30(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct EventConquestGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4BCB900 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventConquestGetDialog_OnClickClose__, method);
    byte_4BCB900 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_EventConquestGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C1AE30(v5, v6);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 Instance; // x0
  System_String_o *v24; // x1
  signed int max_length; // w24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v27; // x21
  BalanceConfig_c **v28; // x29
  UserGameEntity_o *v29; // x25
  il2cpp_array_size_t v30; // w27
  GiftEntity_o *v31; // x26
  int v32; // w8
  int32_t qp; // w28
  BalanceConfig_c *v34; // x0
  Il2CppObject *itemIcon; // x21
  BalanceConfig_c **v36; // x20
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v38; // x29
  UnityEngine_Transform_o *v39; // x21
  UnityEngine_Transform_o *v40; // x21
  int32_t v41; // w21
  ItemIconComponent_o *v42; // x29
  const MethodInfo *v43; // x4
  int32_t v44; // w21
  int v45; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int v49; // w8
  System_Action_o *v50; // x20
  System_String_o *v51; // [xsp+0h] [xbp-80h]
  System_String_o *v52; // [xsp+8h] [xbp-78h]
  Il2CppObject *v53; // [xsp+10h] [xbp-70h]
  signed int v54; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB8FD & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, rewards);
    sub_1C1ABD4(&BalanceConfig_TypeInfo, v13);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16);
    sub_1C1ABD4(&Method_EventConquestGetDialog_EndOpen__, v17);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___, v18);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v19);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v21);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BCB8FD = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCb,
    (int64_t)title,
    (int32_t)detail,
    (System_String_o *)closeCb,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_84;
  max_length = rewards->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v51 = detail;
  v52 = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( max_length >= 1 )
  {
    v28 = &BalanceConfig_TypeInfo;
    v29 = (UserGameEntity_o *)Instance;
    v30 = 0;
    v54 = max_length;
    v53 = v27;
    do
    {
      if ( v30 >= rewards->max_length )
        sub_1C1AE38(Instance, v24);
      v31 = rewards->m_Items[v30];
      if ( !v31 )
        goto LABEL_84;
      if ( !MasterData_object )
        goto LABEL_84;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v31->fields.objectId,
                            (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_84;
      v32 = *(_DWORD *)(Instance + 48);
      if ( v32 <= 4 )
      {
        if ( v32 == 1 )
        {
          if ( !v29 )
            goto LABEL_84;
          qp = v29->fields.qp;
          goto LABEL_37;
        }
        if ( v32 == 2 )
        {
          if ( !v29 )
            goto LABEL_84;
          qp = v29->fields.stone;
          goto LABEL_37;
        }
      }
      else
      {
        switch ( v32 )
        {
          case 5:
            if ( !v29 )
              goto LABEL_84;
            qp = v29->fields.mana;
            goto LABEL_37;
          case 13:
            if ( !v29 )
              goto LABEL_84;
            qp = UserGameEntity__GetFriendPoint(v29, 0LL);
            goto LABEL_37;
          case 22:
            if ( !v29 )
              goto LABEL_84;
            qp = v29->fields.rarePri;
            goto LABEL_37;
        }
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, v24);
        byte_4BC2585 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v27 )
        goto LABEL_84;
      Instance = (__int64)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v27,
                            *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                            v31->fields.objectId,
                            0LL);
      if ( !Instance )
        goto LABEL_84;
      qp = *(_DWORD *)(Instance + 28);
LABEL_37:
      v34 = *v28;
      if ( !(*v28)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = *v28;
      }
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      v36 = v28;
      UserItemMax = v34->static_fields->UserItemMax;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            itemIcon,
                            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_84;
      v38 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemIconGrid )
        goto LABEL_84;
      v39 = (UnityEngine_Transform_o *)Instance;
      Instance = (__int64)UnityEngine_Component__get_transform(
                            (UnityEngine_Component_o *)this->fields.itemIconGrid,
                            0LL);
      if ( !v39 )
        goto LABEL_84;
      UnityEngine_Transform__set_parent(v39, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
      v40 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4BC2141 )
      {
        Instance = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v24);
        byte_4BC2141 = 1;
      }
      if ( !v40 )
        goto LABEL_84;
      UnityEngine_Transform__set_localPosition(v40, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
      if ( !Instance )
        goto LABEL_84;
      v55.fields.x = this->fields.ICON_SCALE_SIZE;
      v55.fields.y = v55.fields.x;
      v55.fields.z = v55.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v55, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v38,
                            (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      v41 = v31->fields.num < 0 ? -1 : v31->fields.num;
      if ( !Instance )
        goto LABEL_84;
      v42 = (ItemIconComponent_o *)Instance;
      ItemIconComponent__SetGift_39340176(
        (ItemIconComponent_o *)Instance,
        v31->fields.type,
        v31->fields.objectId,
        v41,
        0,
        0LL);
      ItemIconComponent__setTypeSpritePositionY(v42, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v42,
        qp,
        v41,
        qp >= UserItemMax,
        v43);
      max_length = v54;
      v28 = v36;
      v27 = v53;
    }
    while ( v54 != ++v30 );
  }
  Instance = (__int64)this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL),
        Instance = (__int64)this->fields.titleLabel,
        v24 = v52,
        !Instance)
    || (UILabel__set_text((UILabel_o *)Instance, v52, 0LL), (Instance = (__int64)this->fields.itemGetDetailLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, v51, 0LL), !v51) )
  {
LABEL_84:
    sub_1C1AE30(Instance, v24);
  }
  if ( v51->fields._stringLength < 1 )
  {
    v45 = 0;
  }
  else
  {
    v44 = 0;
    v45 = 0;
    do
    {
      Chars = System_String__get_Chars(v51, v44++, 0LL);
      if ( Chars == 10 )
        ++v45;
    }
    while ( v44 < v51->fields._stringLength );
  }
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( v45 >= 5 )
  {
    if ( !Instance )
      goto LABEL_84;
    p_SMALL_FONT_SIZE = &this->fields.SMALL_FONT_SIZE;
  }
  else
  {
    if ( !Instance )
      goto LABEL_84;
    p_SMALL_FONT_SIZE = &this->fields.NORMAL_FONT_SIZE;
  }
  UILabel__set_fontSize((UILabel_o *)Instance, *p_SMALL_FONT_SIZE, 0LL);
  if ( max_length == 3 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v45 < 5 )
    {
      v49 = -1037303808;
      goto LABEL_81;
    }
LABEL_80:
    v49 = -1038352384;
    goto LABEL_81;
  }
  if ( max_length == 2 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v45 < 4 )
    {
      v49 = -1037565952;
      goto LABEL_81;
    }
    goto LABEL_80;
  }
  if ( max_length != 1 )
    goto LABEL_82;
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_84;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v49 = -1038090240;
LABEL_81:
  GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v49, 0LL);
LABEL_82:
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v50 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_46851256(
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4BCB8FE & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, reward);
    sub_1C1ABD4(&Method_EventConquestGetDialog_EndOpen__, v10);
    byte_4BCB8FE = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C1AB78(
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
    sub_1C1AE30(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v13 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A60F20;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60EE0;
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}