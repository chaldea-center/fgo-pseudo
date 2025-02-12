void __fastcall MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BB7950 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB7950 = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC28000003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x1800000018LL;
  this->fields.BIG_FONT_SIZE = 30;
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF = 0xC2200000C2180000LL;
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF = 0xC30F00000000025CLL;
  *(_QWORD *)&this->fields.CLOSE_BUTTON_WIDGET_W_DEF = 0x38000000DALL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionRewardGetDialog__Close(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MissionRewardGetDialog__Close_45374908(this, 0LL, v2);
}


void __fastcall MissionRewardGetDialog__Close_45374908(
        MissionRewardGetDialog_o *this,
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

  if ( (byte_4BB794E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_MissionRewardGetDialog_EndClose__, v10);
    byte_4BB794E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall MissionRewardGetDialog__EndClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
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

  MissionRewardGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C13CC8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall MissionRewardGetDialog__EndOpen(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall MissionRewardGetDialog__Init(MissionRewardGetDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4BB794B & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&UnityEngine_Transform_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB794B = 1;
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
    sub_1C13F80(0LL, v8);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1C14240(v18);
LABEL_37:
      sub_1C13F80(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
  }
  v22 = sub_1C13E60(Enumerator, System_IDisposable_TypeInfo);
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
      v27 = sub_1C65D04(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1C13F80(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionRewardGetDialog__OnClickClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionRewardGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4BB794F & 1) == 0 )
  {
    sub_1C13D24(&Method_MissionRewardGetDialog_OnClickClose__, method);
    byte_4BB794F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_MissionRewardGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C13F80(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardGetDialog__Open(
        MissionRewardGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        bool isGetNoReward,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  int v20; // w26
  int v21; // w27
  Il2CppObject *itemIcon; // x24
  GiftEntity_o *v23; // x29
  UnityEngine_GameObject_o *v24; // x24
  UnityEngine_Transform_o *v25; // x25
  UnityEngine_Transform_o *v26; // x25
  ItemIconComponent_o *v27; // x24
  int32_t num; // w3
  __int64 v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UIWidget_o *v32; // x22
  int32_t v33; // w23
  int v34; // w20
  uint16_t Chars; // w0
  bool v36; // w8
  int32_t *p_NORMAL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  System_Action_o *v41; // x20
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB794C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, rewards);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v12);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v13);
    sub_1C13D24(&Method_MissionRewardGetDialog_EndOpen__, v14);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    byte_4BB794C = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCb,
    (int64_t)detail,
    (int32_t)closeCb,
    (System_String_o *)isGetNoReward,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_57;
  v19 = *(_QWORD *)&rewards->max_length;
  v20 = v19 - 1;
  if ( (int)v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      v23 = rewards->m_Items[v21];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                itemIcon,
                                                (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        break;
      v24 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !this->fields.itemIconGrid )
        break;
      v25 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.itemIconGrid,
                                                0LL);
      if ( !v25 )
        break;
      UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
      v26 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4BAEDA1 )
      {
        transform = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v18);
        byte_4BAEDA1 = 1;
      }
      if ( !v26 )
        break;
      UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
      if ( !transform )
        break;
      v43.fields.x = this->fields.ICON_SCALE_SIZE;
      v43.fields.y = v43.fields.x;
      v43.fields.z = v43.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v43, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                v24,
                                                (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v23 )
        break;
      v27 = (ItemIconComponent_o *)transform;
      if ( !transform )
        break;
      if ( v23->fields.num <= 1 )
        num = -1;
      else
        num = v23->fields.num;
      ItemIconComponent__SetGift_39286592(
        (ItemIconComponent_o *)transform,
        v23->fields.type,
        v23->fields.objectId,
        num,
        0,
        0LL);
      ItemIconComponent__setTypeSpritePositionY(v27, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      if ( v20 == v21 )
        goto LABEL_23;
      if ( ++v21 >= rewards->max_length )
        sub_1C13F88(v29, v18);
    }
LABEL_57:
    sub_1C13F80(transform, v18);
  }
LABEL_23:
  transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
  if ( !transform )
    goto LABEL_57;
  UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0LL);
  transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
  if ( !transform )
    goto LABEL_57;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(transform, 1, 0LL);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)transform, detail, 0LL);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_57;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF, 0LL);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_57;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF, 0LL);
  transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_57;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v31, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0LL);
  transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_57;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)transform,
                                            (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !transform )
    goto LABEL_57;
  v32 = (UIWidget_o *)transform;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0LL);
  UIWidget__set_height(v32, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0LL);
  if ( !detail )
    goto LABEL_57;
  if ( detail->fields._stringLength < 1 )
  {
    v36 = 1;
  }
  else
  {
    v33 = 0;
    v34 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v33++, 0LL);
      if ( Chars == 10 )
        ++v34;
    }
    while ( v33 < detail->fields._stringLength );
    v36 = v34 < 5;
  }
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( v36 )
  {
    if ( !transform )
      goto LABEL_57;
    p_NORMAL_FONT_SIZE = &this->fields.NORMAL_FONT_SIZE;
  }
  else
  {
    if ( !transform )
      goto LABEL_57;
    p_NORMAL_FONT_SIZE = &this->fields.SMALL_FONT_SIZE;
  }
  UILabel__set_fontSize((UILabel_o *)transform, *p_NORMAL_FONT_SIZE, 0LL);
  if ( isGetNoReward )
  {
    transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
    if ( !transform )
      goto LABEL_57;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_57;
    UIWidget__set_width((UIWidget_o *)transform, 720, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_57;
    UILabel__set_fontSize((UILabel_o *)transform, this->fields.BIG_FONT_SIZE, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_57;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    GameObjectExtensions__SetLocalPositionY(v38, 36.0, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !transform )
      goto LABEL_57;
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    GameObjectExtensions__SetLocalPositionY(v39, -162.0, 0LL);
    UIWidget__set_width(v32, 218, 0LL);
    UIWidget__set_height(v32, 56, 0LL);
  }
  else
  {
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_57;
    v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    GameObjectExtensions__SetLocalPositionY(v40, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0LL);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(transform, 1, 0LL);
  v41 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall MissionRewardGetDialog__Open_45374708(
        MissionRewardGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4BB794D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, reward);
    sub_1C13D24(&Method_MissionRewardGetDialog_EndOpen__, v10);
    byte_4BB794D = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C13CC8(
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
    sub_1C13F80(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardGetDialog_ClickDelegate___ctor(
        MissionRewardGetDialog_ClickDelegate_o *this,
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A58FE0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A58FA0;
}


System_IAsyncResult_o *__fastcall MissionRewardGetDialog_ClickDelegate__BeginInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C13CD8(this, &v5, callback, object);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__Invoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}