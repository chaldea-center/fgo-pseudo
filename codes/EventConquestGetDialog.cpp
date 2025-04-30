void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A52510 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A52510 = 1;
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

  EventConquestGetDialog__Close_46834908(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_46834908(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A5250E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_EventConquestGetDialog_EndClose__, v6);
    byte_4A5250E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 3;
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall EventConquestGetDialog__EndClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventConquestGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B8635C(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A5250B & 1) == 0 )
  {
    sub_1B863B8(&System_IDisposable_TypeInfo, method);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&UnityEngine_Transform_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A5250B = 1;
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
    sub_1B86614(0LL, v8);
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
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B868D4(v18);
LABEL_37:
      sub_1B86614(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
  }
  v22 = sub_1B864F4(Enumerator, System_IDisposable_TypeInfo);
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
      v27 = sub_1BD6B4C(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1B86614(itemGetDetailLabel, method);
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

  if ( (byte_4A5250F & 1) == 0 )
  {
    sub_1B863B8(&Method_EventConquestGetDialog_OnClickClose__, method);
    byte_4A5250F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_EventConquestGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B86614(v5, v6);
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
  System_String_o *v22; // x1
  signed int max_length; // w24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v25; // x21
  BalanceConfig_c **v26; // x29
  UserGameEntity_o *v27; // x25
  il2cpp_array_size_t v28; // w27
  GiftEntity_o *v29; // x26
  int v30; // w8
  int32_t qp; // w28
  BalanceConfig_c *v32; // x0
  Il2CppObject *itemIcon; // x21
  BalanceConfig_c **v34; // x20
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v36; // x29
  UnityEngine_Transform_o *v37; // x21
  UnityEngine_Transform_o *v38; // x21
  int32_t v39; // w21
  ItemIconComponent_o *v40; // x29
  const MethodInfo *v41; // x4
  int32_t v42; // w21
  int v43; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int v47; // w8
  System_Action_o *v48; // x20
  System_String_o *v49; // [xsp+0h] [xbp-80h]
  System_String_o *v50; // [xsp+8h] [xbp-78h]
  Il2CppObject *v51; // [xsp+10h] [xbp-70h]
  signed int v52; // [xsp+1Ch] [xbp-64h]
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5250C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, rewards);
    sub_1B863B8(&BalanceConfig_TypeInfo, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v13);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1B863B8(&Method_EventConquestGetDialog_EndOpen__, v15);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___, v16);
    sub_1B863B8(&NetworkManager_TypeInfo, v17);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4A5250C = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)title,
    (const MethodInfo *)detail);
  if ( !rewards )
    goto LABEL_84;
  max_length = rewards->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v49 = detail;
  v50 = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v25 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( max_length >= 1 )
  {
    v26 = &BalanceConfig_TypeInfo;
    v27 = (UserGameEntity_o *)Instance;
    v28 = 0;
    v52 = max_length;
    v51 = v25;
    do
    {
      if ( v28 >= rewards->max_length )
        sub_1B8661C(Instance, v22);
      v29 = rewards->m_Items[v28];
      if ( !v29 )
        goto LABEL_84;
      if ( !MasterData_object )
        goto LABEL_84;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v29->fields.objectId,
                            (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_84;
      v30 = *(_DWORD *)(Instance + 48);
      if ( v30 <= 4 )
      {
        if ( v30 == 1 )
        {
          if ( !v27 )
            goto LABEL_84;
          qp = v27->fields.qp;
          goto LABEL_37;
        }
        if ( v30 == 2 )
        {
          if ( !v27 )
            goto LABEL_84;
          qp = v27->fields.stone;
          goto LABEL_37;
        }
      }
      else
      {
        switch ( v30 )
        {
          case 5:
            if ( !v27 )
              goto LABEL_84;
            qp = v27->fields.mana;
            goto LABEL_37;
          case 13:
            if ( !v27 )
              goto LABEL_84;
            qp = UserGameEntity__GetFriendPoint(v27, 0LL);
            goto LABEL_37;
          case 22:
            if ( !v27 )
              goto LABEL_84;
            qp = v27->fields.rarePri;
            goto LABEL_37;
        }
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v22);
        byte_4A48C25 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_84;
      Instance = (__int64)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v25,
                            *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                            v29->fields.objectId,
                            0LL);
      if ( !Instance )
        goto LABEL_84;
      qp = *(_DWORD *)(Instance + 28);
LABEL_37:
      v32 = *v26;
      if ( !(*v26)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = *v26;
      }
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      v34 = v26;
      UserItemMax = v32->static_fields->UserItemMax;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            itemIcon,
                            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_84;
      v36 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemIconGrid )
        goto LABEL_84;
      v37 = (UnityEngine_Transform_o *)Instance;
      Instance = (__int64)UnityEngine_Component__get_transform(
                            (UnityEngine_Component_o *)this->fields.itemIconGrid,
                            0LL);
      if ( !v37 )
        goto LABEL_84;
      UnityEngine_Transform__set_parent(v37, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
      v38 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4A487E1 )
      {
        Instance = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v22);
        byte_4A487E1 = 1;
      }
      if ( !v38 )
        goto LABEL_84;
      UnityEngine_Transform__set_localPosition(v38, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
      if ( !Instance )
        goto LABEL_84;
      v53.fields.x = this->fields.ICON_SCALE_SIZE;
      v53.fields.y = v53.fields.x;
      v53.fields.z = v53.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v53, 0LL);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v36,
                            (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      v39 = v29->fields.num < 0 ? -1 : v29->fields.num;
      if ( !Instance )
        goto LABEL_84;
      v40 = (ItemIconComponent_o *)Instance;
      ItemIconComponent__SetGift_39099496(
        (ItemIconComponent_o *)Instance,
        v29->fields.type,
        v29->fields.objectId,
        v39,
        0,
        0LL);
      ItemIconComponent__setTypeSpritePositionY(v40, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v40,
        qp,
        v39,
        qp >= UserItemMax,
        v41);
      max_length = v52;
      v26 = v34;
      v25 = v51;
    }
    while ( v52 != ++v28 );
  }
  Instance = (__int64)this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL),
        Instance = (__int64)this->fields.titleLabel,
        v22 = v50,
        !Instance)
    || (UILabel__set_text((UILabel_o *)Instance, v50, 0LL), (Instance = (__int64)this->fields.itemGetDetailLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, v49, 0LL), !v49) )
  {
LABEL_84:
    sub_1B86614(Instance, v22);
  }
  if ( v49->fields._stringLength < 1 )
  {
    v43 = 0;
  }
  else
  {
    v42 = 0;
    v43 = 0;
    do
    {
      Chars = System_String__get_Chars(v49, v42++, 0LL);
      if ( Chars == 10 )
        ++v43;
    }
    while ( v42 < v49->fields._stringLength );
  }
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( v43 >= 5 )
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
    if ( v43 < 5 )
    {
      v47 = -1037303808;
      goto LABEL_81;
    }
LABEL_80:
    v47 = -1038352384;
    goto LABEL_81;
  }
  if ( max_length == 2 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( !Instance )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( v43 < 4 )
    {
      v47 = -1037565952;
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
  v47 = -1038090240;
LABEL_81:
  GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v47, 0LL);
LABEL_82:
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v48 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_46834708(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4A5250D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, reward);
    sub_1B863B8(&Method_EventConquestGetDialog_EndOpen__, v7);
    byte_4A5250D = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)detail,
    (const MethodInfo *)closeCb);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B86614(0LL, v9);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v10, 0, 0LL);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D785C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D781C;
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}