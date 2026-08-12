void EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w8

  if ( (byte_596A4B3 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A4B3 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x180000001ELL;
  v5 = *(&v4->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC27C00003F59999ALL;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventConquestGetDialog__Close(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventConquestGetDialog__Close_38055272(this, 0, v2);
}


void EventConquestGetDialog__Close_38055272(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596A4B1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventConquestGetDialog_EndClose__);
    byte_596A4B1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void EventConquestGetDialog__EndClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventConquestGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void EventConquestGetDialog__EndOpen(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void EventConquestGetDialog__Init(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  UILabel_o *itemGetDetailLabel; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 naturalAligment; // x9
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x21
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_IEnumerator_o *v28; // [xsp+28h] [xbp-38h]

  if ( (byte_596A4AE & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A4AE = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_40;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  itemGetDetailLabel = (UILabel_o *)this->fields.itemIconGrid;
  if ( !itemGetDetailLabel )
    goto LABEL_40;
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)itemGetDetailLabel,
                                      0);
  if ( !itemGetDetailLabel )
    goto LABEL_40;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)itemGetDetailLabel, 0);
  v28 = Enumerator;
  while ( 1 )
  {
    if ( !v28 )
      goto LABEL_38;
    klass = v28->klass;
    v7 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_12;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v9 = sub_224BC3C(v28, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v28, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v28->klass;
    v11 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_19;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_19:
      v13 = sub_224BC3C(v28, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v28,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_2213CDC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_221405C(v14, UnityEngine_Transform_TypeInfo, v16, v17);
LABEL_38:
      sub_2213CDC(Enumerator, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  v22 = sub_2213BB4(v28, System_IDisposable_TypeInfo);
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
          goto LABEL_32;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_32:
      v27 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !itemGetDetailLabel )
LABEL_40:
    sub_2213CDC(itemGetDetailLabel, method);
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

  if ( (byte_596A4B2 & 1) == 0 )
  {
    sub_2213A60(&Method_EventConquestGetDialog_OnClickClose__);
    byte_596A4B2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventConquestGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventConquestGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventConquestGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_2213CDC(v5, v6);
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
  bool v6; // w6
  bool v7; // w7
  __int64 Instance; // x0
  System_String_o *v14; // x1
  il2cpp_array_size_t max_length; // x26
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v17; // x21
  UserGameEntity_o *v18; // x25
  __int64 v19; // x27
  int32_t *v20; // x22
  __int64 v21; // x2
  int v22; // w8
  int64_t qp; // x28
  BalanceConfig_c *v24; // x0
  GiftEntity_array *v25; // x24
  Il2CppObject *itemIcon; // x21
  int64_t UserItemMax; // x26
  UnityEngine_GameObject_o *v28; // x29
  UnityEngine_Transform_o *v29; // x21
  UnityEngine_Transform_o *v30; // x21
  bool v31; // w21
  ItemIconComponent_o *v32; // x29
  int32_t v33; // w26
  const MethodInfo *v34; // x4
  int32_t v35; // w21
  int v36; // w22
  uint16_t Chars; // w0
  int32_t *p_SMALL_FONT_SIZE; // x8
  int v39; // w8
  float v40; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v42; // x20
  System_String_o *value; // [xsp+8h] [xbp-88h]
  Il2CppObject *v44; // [xsp+10h] [xbp-80h]
  int v45; // [xsp+18h] [xbp-78h]
  GiftEntity_o **m_Items; // [xsp+28h] [xbp-68h]
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A4AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_EventConquestGetDialog_EndOpen__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A4AF = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    title,
    detail,
    (int32_t)closeCb,
    (int32_t)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_85;
  max_length = rewards->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  value = title;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( (int)max_length >= 1 )
  {
    v18 = (UserGameEntity_o *)Instance;
    v19 = 0;
    v44 = v17;
    v45 = max_length;
    m_Items = rewards->m_Items;
    do
    {
      if ( (unsigned int)v19 >= LODWORD(rewards->max_length) )
        sub_2213CE4(Instance);
      v20 = (int32_t *)m_Items[v19];
      if ( !v20 )
        goto LABEL_85;
      if ( !MasterData_object )
        goto LABEL_85;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v20[6],
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_85;
      v22 = *(_DWORD *)(Instance + 48);
      if ( v22 <= 4 )
      {
        if ( v22 == 1 )
        {
          if ( !v18 )
            goto LABEL_85;
          qp = v18->fields.qp;
          goto LABEL_37;
        }
        if ( v22 == 2 )
        {
          if ( !v18 )
            goto LABEL_85;
          qp = v18->fields.stone;
          goto LABEL_37;
        }
      }
      else
      {
        switch ( v22 )
        {
          case 5:
            if ( !v18 )
              goto LABEL_85;
            qp = v18->fields.mana;
            goto LABEL_37;
          case 13:
            if ( !v18 )
              goto LABEL_85;
            qp = UserGameEntity__GetFriendPoint(v18, 0);
            goto LABEL_37;
          case 22:
            if ( !v18 )
              goto LABEL_85;
            qp = v18->fields.rarePri;
            goto LABEL_37;
        }
      }
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v21);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v21);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v17 )
        goto LABEL_85;
      Instance = (__int64)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v17,
                            *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                            v20[6],
                            0);
      if ( !Instance )
        goto LABEL_85;
      qp = *(int *)(Instance + 28);
LABEL_37:
      v24 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v21);
        v24 = BalanceConfig_TypeInfo;
      }
      v25 = rewards;
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      UserItemMax = v24->static_fields->UserItemMax;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v21);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            itemIcon,
                            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_85;
      v28 = (UnityEngine_GameObject_o *)Instance;
      Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.itemIconGrid )
        goto LABEL_85;
      v29 = (UnityEngine_Transform_o *)Instance;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemIconGrid, 0);
      if ( !v29 )
        goto LABEL_85;
      UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)Instance, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
      v30 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_5969AE0 )
      {
        Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v30 )
        goto LABEL_85;
      UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Instance = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
      if ( !Instance )
        goto LABEL_85;
      v47.fields.x = this->fields.ICON_SCALE_SIZE;
      v47.fields.y = v47.fields.x;
      v47.fields.z = v47.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v47, 0);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v28,
                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
      if ( !Instance )
        goto LABEL_85;
      v31 = qp >= UserItemMax;
      v32 = (ItemIconComponent_o *)Instance;
      if ( v20[7] < 0 )
        v33 = -1;
      else
        v33 = v20[7];
      ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)Instance, v20[5], v20[6], v33, 0, 0);
      ItemIconComponent__setTypeSpritePositionY(v32, this->fields.TYPE_SPRITE_POS_Y, 0);
      EventConquestGetIconComponent__setPossessionCounterLabel(
        (EventConquestGetIconComponent_o *)v32,
        qp,
        v33,
        v31,
        v34);
      v17 = v44;
      LODWORD(max_length) = v45;
      rewards = v25;
    }
    while ( v45 != (_DWORD)++v19 );
  }
  Instance = (__int64)this->fields.itemIconGrid;
  if ( !Instance
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0),
        Instance = (__int64)this->fields.titleLabel,
        v14 = value,
        !Instance)
    || (UILabel__set_text((UILabel_o *)Instance, value, 0), (Instance = (__int64)this->fields.itemGetDetailLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Instance, detail, 0), !detail) )
  {
LABEL_85:
    sub_2213CDC(Instance, v14);
  }
  if ( detail->fields._stringLength < 1 )
  {
    v36 = 0;
  }
  else
  {
    v35 = 0;
    v36 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v35++, 0);
      if ( Chars == 10 )
        ++v36;
    }
    while ( v35 < detail->fields._stringLength );
  }
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( v36 >= 5 )
  {
    if ( !Instance )
      goto LABEL_85;
    p_SMALL_FONT_SIZE = &this->fields.SMALL_FONT_SIZE;
  }
  else
  {
    if ( !Instance )
      goto LABEL_85;
    p_SMALL_FONT_SIZE = &this->fields.NORMAL_FONT_SIZE;
  }
  UILabel__set_fontSize((UILabel_o *)Instance, *p_SMALL_FONT_SIZE, 0);
  if ( (_DWORD)max_length == 3 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( v36 < 5 )
    {
      if ( !Instance )
        goto LABEL_85;
      v39 = -1037303808;
      goto LABEL_82;
    }
    goto LABEL_80;
  }
  if ( (_DWORD)max_length == 2 )
  {
    Instance = (__int64)this->fields.itemGetDetailLabel;
    if ( v36 < 4 )
    {
      if ( !Instance )
        goto LABEL_85;
      v39 = -1037565952;
      goto LABEL_82;
    }
LABEL_80:
    if ( !Instance )
      goto LABEL_85;
    v39 = -1038352384;
    goto LABEL_82;
  }
  if ( (_DWORD)max_length != 1 )
    goto LABEL_83;
  Instance = (__int64)this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_85;
  v39 = -1038090240;
LABEL_82:
  v40 = *(float *)&v39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v40, 0);
LABEL_83:
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
}


void EventConquestGetDialog__Open_38055068(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_596A4B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventConquestGetDialog_EndOpen__);
    byte_596A4B0 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    detail,
    (System_String_o *)closeCb,
    (int32_t)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0, 0);
}


void EventConquestGetDialog_ClickDelegate___ctor(
        EventConquestGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFF38C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FFF34C;
}


System_IAsyncResult_o *EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}