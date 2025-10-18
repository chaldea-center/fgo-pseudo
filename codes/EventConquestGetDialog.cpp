void EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3D193 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3D193 = 1;
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

  EventConquestGetDialog__Close_31626548(this, 0, v2);
}


void EventConquestGetDialog__Close_31626548(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C3D191 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventConquestGetDialog_EndClose__);
    byte_4C3D191 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 3;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
    sub_1C36FFC(p_closeCallbackFunc, 0);
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
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x20
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0

  if ( (byte_4C3D18E & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D18E = 1;
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
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_11;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v8)(Enumerator, *(_QWORD *)(v8 + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 2;
        if ( !v10 )
          goto LABEL_18;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1];
    }
    else
    {
LABEL_18:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                       Enumerator,
                                       *(_QWORD *)(v12 + 8));
    if ( !v13 )
      goto LABEL_37;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v13 = (UnityEngine_Component_o *)sub_1C37574(v13);
LABEL_37:
      sub_1C372B4(v13);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  v16 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v16 )
  {
    v17 = *(_QWORD *)v16;
    v18 = v16;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_31;
      }
      v21 = v17 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_31:
      v21 = sub_1C87870(v16, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1C372B4(itemGetDetailLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct EventConquestGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C3D192 & 1) == 0 )
  {
    sub_1C37058(&Method_EventConquestGetDialog_OnClickClose__);
    byte_4C3D192 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventConquestGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C372B4(v5);
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
  DataManager_o *Instance; // x0
  int max_length; // w24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v14; // x21
  BalanceConfig_c **v15; // x29
  UserGameEntity_o *v16; // x25
  unsigned int v17; // w27
  GiftEntity_o *v18; // x26
  int lookup; // w8
  int64_t qp; // x28
  BalanceConfig_c *v21; // x0
  Il2CppObject *itemIcon; // x21
  BalanceConfig_c **v23; // x20
  int64_t UserItemMax; // x24
  UnityEngine_GameObject_o *v25; // x29
  UnityEngine_Transform_o *v26; // x21
  UnityEngine_Transform_o *v27; // x21
  int32_t v28; // w21
  ItemIconComponent_o *v29; // x29
  const MethodInfo *v30; // x4
  int32_t v31; // w21
  int v32; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v36; // w8
  System_Action_o *v37; // x20
  System_String_o *v38; // [xsp+0h] [xbp-80h]
  System_String_o *v39; // [xsp+8h] [xbp-78h]
  Il2CppObject *v40; // [xsp+10h] [xbp-70h]
  int v41; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D18F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_EventConquestGetDialog_EndOpen__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D18F = 1;
  }
  this->fields.closeFunc = closeCb;
  Instance = (DataManager_o *)sub_1C36FFC(&this->fields.closeFunc, closeCb);
  if ( !rewards )
    goto LABEL_84;
  max_length = rewards->max_length;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v38 = detail;
  v39 = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v14 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( max_length >= 1 )
  {
    v15 = &BalanceConfig_TypeInfo;
    v16 = (UserGameEntity_o *)Instance;
    v17 = 0;
    v41 = max_length;
    v40 = v14;
    do
    {
      if ( v17 >= LODWORD(rewards->max_length) )
        sub_1C372BC(Instance);
      v18 = rewards->m_Items[v17];
      if ( !v18 )
        goto LABEL_84;
      if ( !MasterData_object )
        goto LABEL_84;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    v18->fields.objectId,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_84;
      lookup = (int)Instance->fields.lookup;
      if ( lookup <= 4 )
      {
        if ( lookup == 1 )
        {
          if ( !v16 )
            goto LABEL_84;
          qp = v16->fields.qp;
          goto LABEL_37;
        }
        if ( lookup == 2 )
        {
          if ( !v16 )
            goto LABEL_84;
          qp = v16->fields.stone;
          goto LABEL_37;
        }
      }
      else
      {
        switch ( lookup )
        {
          case 5:
            if ( !v16 )
              goto LABEL_84;
            qp = v16->fields.mana;
            goto LABEL_37;
          case 13:
            if ( !v16 )
              goto LABEL_84;
            qp = UserGameEntity__GetFriendPoint(v16, 0);
            goto LABEL_37;
          case 22:
            if ( !v16 )
              goto LABEL_84;
            qp = v16->fields.rarePri;
            goto LABEL_37;
        }
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_84;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)v14,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v18->fields.objectId,
                                    0);
      if ( !Instance )
        goto LABEL_84;
      qp = SHIDWORD(Instance->fields.m_CancellationTokenSource);
LABEL_37:
      v21 = *v15;
      if ( !(*v15)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = *v15;
      }
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      v23 = v15;
      UserItemMax = v21->static_fields->UserItemMax;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                    itemIcon,
                                    (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_84;
      v25 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.itemIconGrid )
        goto LABEL_84;
      v26 = (UnityEngine_Transform_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)this->fields.itemIconGrid,
                                    0);
      if ( !v26 )
        goto LABEL_84;
      UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)Instance, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0);
      v27 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4C3C921 )
      {
        Instance = (DataManager_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( !v27 )
        goto LABEL_84;
      UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0);
      if ( !Instance )
        goto LABEL_84;
      v42.fields.x = this->fields.ICON_SCALE_SIZE;
      v42.fields.y = v42.fields.x;
      v42.fields.z = v42.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v42, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v25,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      v28 = v18->fields.num < 0 ? -1 : v18->fields.num;
      if ( !Instance )
        goto LABEL_84;
      v29 = (ItemIconComponent_o *)Instance;
      ItemIconComponent__SetGift_40921900(
        (ItemIconComponent_o *)Instance,
        v18->fields.type,
        v18->fields.objectId,
        v28,
        0,
        0);
      ItemIconComponent__setTypeSpritePositionY(v29, this->fields.TYPE_SPRITE_POS_Y, 0);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v29,
        qp,
        v28,
        qp >= UserItemMax,
        v30);
      max_length = v41;
      v15 = v23;
      v14 = v40;
    }
    while ( v41 != ++v17 );
  }
  Instance = (DataManager_o *)this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0), (Instance = (DataManager_o *)this->fields.titleLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, v39, 0),
        (Instance = (DataManager_o *)this->fields.itemGetDetailLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, v38, 0), !v38) )
  {
LABEL_84:
    sub_1C372B4(Instance);
  }
  if ( v38->fields._stringLength < 1 )
  {
    v32 = 0;
  }
  else
  {
    v31 = 0;
    v32 = 0;
    do
    {
      Chars = System_String__get_Chars(v38, v31++, 0);
      if ( Chars == 10 )
        ++v32;
    }
    while ( v31 < v38->fields._stringLength );
  }
  Instance = (DataManager_o *)this->fields.itemGetDetailLabel;
  if ( v32 >= 5 )
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
    Instance = (DataManager_o *)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( v32 < 5 )
    {
      v36 = -43.0;
      goto LABEL_81;
    }
LABEL_80:
    v36 = -39.0;
    goto LABEL_81;
  }
  if ( max_length == 2 )
  {
    Instance = (DataManager_o *)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( v32 < 4 )
    {
      v36 = -42.0;
      goto LABEL_81;
    }
    goto LABEL_80;
  }
  if ( max_length != 1 )
    goto LABEL_82;
  Instance = (DataManager_o *)this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_84;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v36 = -40.0;
LABEL_81:
  GameObjectExtensions__SetLocalPositionY(gameObject, v36, 0);
LABEL_82:
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v37 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0, 0);
}


void EventConquestGetDialog__Open_31626344(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v8; // x20

  if ( (byte_4C3D190 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventConquestGetDialog_EndOpen__);
    byte_4C3D190 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C36FFC(&this->fields.closeFunc, closeCb);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0, 0);
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A72CC4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A72C84;
}


System_IAsyncResult_o *EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}