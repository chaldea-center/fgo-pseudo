void EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC155E & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC155E = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC27C00003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x180000001ELL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventConquestGetDialog__Close(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventConquestGetDialog__Close_31859476(this, 0, v2);
}


void EventConquestGetDialog__Close_31859476(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CC155C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventConquestGetDialog_EndClose__);
    byte_4CC155C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 3;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void EventConquestGetDialog__EndClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventConquestGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C71354(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void EventConquestGetDialog__EndOpen(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void EventConquestGetDialog__Init(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  if ( (byte_4CC1559 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC1559 = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_38;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  itemGetDetailLabel = (UILabel_o *)this->fields.itemIconGrid;
  if ( !itemGetDetailLabel )
    goto LABEL_38;
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)itemGetDetailLabel,
                                      0);
  if ( !itemGetDetailLabel )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)itemGetDetailLabel, 0);
  if ( !Enumerator )
    sub_1C71608(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v9 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_18:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_37;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v14 = (UnityEngine_Component_o *)sub_1C719A4(v14);
LABEL_37:
      sub_1C71608(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
  v18 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
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
      v23 = sub_1C47738(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1C71608(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct EventConquestGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4CC155D & 1) == 0 )
  {
    sub_1C713B0(&Method_EventConquestGetDialog_OnClickClose__);
    byte_4CC155D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventConquestGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C71608(v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      closeFunc->fields.method);
  }
}


void EventConquestGetDialog__Open(
        EventConquestGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *title,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  System_String_o *v12; // x1
  int max_length; // w24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v15; // x21
  BalanceConfig_c **v16; // x29
  UserGameEntity_o *v17; // x25
  unsigned int v18; // w27
  GiftEntity_o *v19; // x26
  int v20; // w8
  int64_t qp; // x28
  BalanceConfig_c *v22; // x0
  Il2CppObject *itemIcon; // x21
  BalanceConfig_c **v24; // x20
  int64_t UserItemMax; // x24
  UnityEngine_GameObject_o *v26; // x29
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *v28; // x21
  int32_t v29; // w21
  ItemIconComponent_o *v30; // x29
  const MethodInfo *v31; // x4
  int32_t v32; // w21
  int v33; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v37; // w8
  System_Action_o *v38; // x20
  System_String_o *v39; // [xsp+0h] [xbp-80h]
  System_String_o *v40; // [xsp+8h] [xbp-78h]
  Il2CppObject *v41; // [xsp+10h] [xbp-70h]
  int v42; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC155A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_EventConquestGetDialog_EndOpen__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC155A = 1;
  }
  this->fields.closeFunc = closeCb;
  Instance = sub_1C71354(&this->fields.closeFunc, closeCb);
  if ( !rewards )
    goto LABEL_84;
  max_length = rewards->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v39 = detail;
  v40 = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( max_length >= 1 )
  {
    v16 = &BalanceConfig_TypeInfo;
    v17 = (UserGameEntity_o *)Instance;
    v18 = 0;
    v42 = max_length;
    v41 = v15;
    do
    {
      if ( v18 >= LODWORD(rewards->max_length) )
        sub_1C71610(Instance);
      v19 = rewards->m_Items[v18];
      if ( !v19 )
        goto LABEL_84;
      if ( !MasterData_object )
        goto LABEL_84;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v19->fields.objectId,
                            (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_84;
      v20 = *(_DWORD *)(Instance + 48);
      if ( v20 <= 4 )
      {
        if ( v20 == 1 )
        {
          if ( !v17 )
            goto LABEL_84;
          qp = v17->fields.qp;
          goto LABEL_37;
        }
        if ( v20 == 2 )
        {
          if ( !v17 )
            goto LABEL_84;
          qp = v17->fields.stone;
          goto LABEL_37;
        }
      }
      else
      {
        switch ( v20 )
        {
          case 5:
            if ( !v17 )
              goto LABEL_84;
            qp = v17->fields.mana;
            goto LABEL_37;
          case 13:
            if ( !v17 )
              goto LABEL_84;
            qp = UserGameEntity__GetFriendPoint(v17, 0);
            goto LABEL_37;
          case 22:
            if ( !v17 )
              goto LABEL_84;
            qp = v17->fields.rarePri;
            goto LABEL_37;
        }
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC112A )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC112A = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v15 )
        goto LABEL_84;
      Instance = (__int64)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v15,
                            *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                            v19->fields.objectId,
                            0);
      if ( !Instance )
        goto LABEL_84;
      qp = *(int *)(Instance + 28);
LABEL_37:
      v22 = *v16;
      if ( !(*v16)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = *v16;
      }
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      v24 = v16;
      UserItemMax = v22->static_fields->UserItemMax;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            itemIcon,
                            (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_84;
      v26 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.itemIconGrid )
        goto LABEL_84;
      v27 = (UnityEngine_Transform_o *)Instance;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemIconGrid, 0);
      if ( !v27 )
        goto LABEL_84;
      UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)Instance, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v26, 0);
      v28 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4CC0D09 )
      {
        Instance = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D09 = 1;
      }
      if ( !v28 )
        goto LABEL_84;
      UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v26, 0);
      if ( !Instance )
        goto LABEL_84;
      v43.fields.x = this->fields.ICON_SCALE_SIZE;
      v43.fields.y = v43.fields.x;
      v43.fields.z = v43.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v43, 0);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v26,
                            (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      v29 = v19->fields.num < 0 ? -1 : v19->fields.num;
      if ( !Instance )
        goto LABEL_84;
      v30 = (ItemIconComponent_o *)Instance;
      ItemIconComponent__SetGift_41196280(
        (ItemIconComponent_o *)Instance,
        v19->fields.type,
        v19->fields.objectId,
        v29,
        0,
        0);
      ItemIconComponent__setTypeSpritePositionY(v30, this->fields.TYPE_SPRITE_POS_Y, 0);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v30,
        qp,
        v29,
        qp >= UserItemMax,
        v31);
      max_length = v42;
      v16 = v24;
      v15 = v41;
    }
    while ( v42 != ++v18 );
  }
  Instance = (__int64)this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0),
        Instance = (__int64)this->fields.titleLabel,
        v12 = v40,
        !Instance)
    || (UILabel__set_text((UILabel_o *)Instance, v40, 0), (Instance = (__int64)this->fields.itemGetDetailLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, v39, 0), !v39) )
  {
LABEL_84:
    sub_1C71608(Instance, v12);
  }
  if ( v39->fields._stringLength < 1 )
  {
    v33 = 0;
  }
  else
  {
    v32 = 0;
    v33 = 0;
    do
    {
      Chars = System_String__get_Chars(v39, v32++, 0);
      if ( Chars == 10 )
        ++v33;
    }
    while ( v32 < v39->fields._stringLength );
  }
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( v33 >= 5 )
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
  UILabel__set_fontSize((UILabel_o *)Instance, *p_SMALL_FONT_SIZE, 0);
  if ( max_length == 3 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( v33 < 5 )
    {
      v37 = -43.0;
      goto LABEL_81;
    }
LABEL_80:
    v37 = -39.0;
    goto LABEL_81;
  }
  if ( max_length == 2 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( v33 < 4 )
    {
      v37 = -42.0;
      goto LABEL_81;
    }
    goto LABEL_80;
  }
  if ( max_length != 1 )
    goto LABEL_82;
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_84;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v37 = -40.0;
LABEL_81:
  GameObjectExtensions__SetLocalPositionY(gameObject, v37, 0);
LABEL_82:
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v38 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0, 0);
}


void EventConquestGetDialog__Open_31859272(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4CC155B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventConquestGetDialog_EndOpen__);
    byte_4CC155B = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C71354(&this->fields.closeFunc, closeCb);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v9, 0, 0, 0);
}


void EventConquestGetDialog_ClickDelegate___ctor(
        EventConquestGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9DFEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9DFAC;
}


System_IAsyncResult_o *EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}