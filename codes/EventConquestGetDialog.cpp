void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EE07 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EE07 = 1;
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

  EventConquestGetDialog__Close_45500488(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_45500488(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5EE05 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventConquestGetDialog_EndClose__);
    byte_4A5EE05 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 3;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5EE02 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EE02 = 1;
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
    sub_1B8880C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_18:
      v13 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B88ACC(v14);
LABEL_37:
      sub_1B8880C(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  v18 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_31;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_31:
      v23 = sub_1BDA590(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1B8880C(itemGetDetailLabel, method);
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

  if ( (byte_4A5EE06 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventConquestGetDialog_OnClickClose__);
    byte_4A5EE06 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventConquestGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B8880C(v5, v6);
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
  void *Instance; // x0
  int64_t UserId; // x1
  signed int max_length; // w24
  Il2CppObject *MasterData_object; // x23
  UserGameEntity_o *v15; // x25
  il2cpp_array_size_t v16; // w26
  GiftEntity_o *v17; // x21
  int v18; // w8
  int32_t qp; // w27
  BalanceConfig_c *v20; // x0
  Il2CppObject *itemIcon; // x28
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v23; // x28
  UnityEngine_Transform_o *v24; // x29
  UnityEngine_Transform_o *v25; // x29
  int32_t v26; // w29
  ItemIconComponent_o *v27; // x28
  const MethodInfo *v28; // x4
  int32_t v29; // w21
  int v30; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int v34; // w8
  System_Action_o *v35; // x20
  System_String_o *value; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v37; // [xsp+10h] [xbp-70h]
  signed int v38; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EE03 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_EventConquestGetDialog_EndOpen__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE03 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)title,
    (int32_t)detail);
  if ( !rewards )
    goto LABEL_80;
  max_length = rewards->max_length;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  value = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  v37 = (UserItemMaster_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( max_length >= 1 )
  {
    v15 = (UserGameEntity_o *)Instance;
    v16 = 0;
    v38 = max_length;
    do
    {
      if ( v16 >= rewards->max_length )
        sub_1B88814(Instance, UserId);
      v17 = rewards->m_Items[v16];
      if ( !v17 )
        goto LABEL_80;
      if ( !MasterData_object )
        goto LABEL_80;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v17->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_80;
      v18 = *((_DWORD *)Instance + 12);
      if ( v18 <= 4 )
      {
        if ( v18 == 1 )
        {
          if ( !v15 )
            goto LABEL_80;
          qp = v15->fields.qp;
          goto LABEL_33;
        }
        if ( v18 == 2 )
        {
          if ( !v15 )
            goto LABEL_80;
          qp = v15->fields.stone;
          goto LABEL_33;
        }
      }
      else
      {
        switch ( v18 )
        {
          case 5:
            if ( !v15 )
              goto LABEL_80;
            qp = v15->fields.mana;
            goto LABEL_33;
          case 13:
            if ( !v15 )
              goto LABEL_80;
            qp = UserGameEntity__GetFriendPoint(v15, 0LL);
            goto LABEL_33;
          case 22:
            if ( !v15 )
              goto LABEL_80;
            qp = v15->fields.rarePri;
            goto LABEL_33;
        }
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = v37;
      if ( !v37 )
        goto LABEL_80;
      Instance = UserItemMaster__GetEntityDefinitely(v37, UserId, v17->fields.objectId, 0LL);
      if ( !Instance )
        goto LABEL_80;
      qp = *((_DWORD *)Instance + 7);
LABEL_33:
      v20 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v20 = BalanceConfig_TypeInfo;
      }
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      UserItemMax = v20->static_fields->UserItemMax;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__Instantiate_object_(
                   itemIcon,
                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_80;
      v23 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemIconGrid )
        goto LABEL_80;
      v24 = (UnityEngine_Transform_o *)Instance;
      Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemIconGrid, 0LL);
      if ( !v24 )
        goto LABEL_80;
      UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = UnityEngine_GameObject__get_transform(v23, 0LL);
      v25 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4A55CE1 )
      {
        Instance = (void *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v25 )
        goto LABEL_80;
      UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = UnityEngine_GameObject__get_transform(v23, 0LL);
      if ( !Instance )
        goto LABEL_80;
      v39.fields.x = this->fields.ICON_SCALE_SIZE;
      v39.fields.y = v39.fields.x;
      v39.fields.z = v39.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v39, 0LL);
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   v23,
                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      v26 = v17->fields.num < 0 ? -1 : v17->fields.num;
      if ( !Instance )
        goto LABEL_80;
      v27 = (ItemIconComponent_o *)Instance;
      ItemIconComponent__SetGift_38144896(
        (ItemIconComponent_o *)Instance,
        v17->fields.type,
        v17->fields.objectId,
        v26,
        0,
        0LL);
      ItemIconComponent__setTypeSpritePositionY(v27, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v27,
        qp,
        v26,
        qp >= UserItemMax,
        v28);
      max_length = v38;
    }
    while ( v38 != ++v16 );
  }
  Instance = this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL),
        Instance = this->fields.titleLabel,
        UserId = (int64_t)value,
        !Instance)
    || (UILabel__set_text((UILabel_o *)Instance, value, 0LL), (Instance = this->fields.itemGetDetailLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)Instance, detail, 0LL), !detail) )
  {
LABEL_80:
    sub_1B8880C(Instance, UserId);
  }
  if ( detail->fields._stringLength < 1 )
  {
    v30 = 0;
  }
  else
  {
    v29 = 0;
    v30 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v29++, 0LL);
      if ( Chars == 10 )
        ++v30;
    }
    while ( v29 < detail->fields._stringLength );
  }
  Instance = this->fields.itemGetDetailLabel;
  if ( v30 >= 5 )
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
    Instance = this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_80;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v30 < 5 )
    {
      v34 = -1037303808;
      goto LABEL_77;
    }
LABEL_76:
    v34 = -1038352384;
    goto LABEL_77;
  }
  if ( max_length == 2 )
  {
    Instance = this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_80;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v30 < 4 )
    {
      v34 = -1037565952;
      goto LABEL_77;
    }
    goto LABEL_76;
  }
  if ( max_length != 1 )
    goto LABEL_78;
  Instance = this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_80;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v34 = -1038090240;
LABEL_77:
  GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v34, 0LL);
LABEL_78:
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_45500288(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4A5EE04 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventConquestGetDialog_EndOpen__);
    byte_4A5EE04 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)detail,
    (int32_t)closeCb);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v9, 0, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D3670;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3630;
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}