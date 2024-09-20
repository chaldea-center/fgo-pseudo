void __fastcall MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E3C6 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E3C6 = 1;
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

  MissionRewardGetDialog__Close_44261596(this, 0LL, v2);
}


void __fastcall MissionRewardGetDialog__Close_44261596(
        MissionRewardGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5E3C4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MissionRewardGetDialog_EndClose__);
    byte_4A5E3C4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 3;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall MissionRewardGetDialog__EndClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MissionRewardGetDialog__Init(this, method);
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


void __fastcall MissionRewardGetDialog__EndOpen(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall MissionRewardGetDialog__Init(MissionRewardGetDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E3C1 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E3C1 = 1;
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


void __fastcall MissionRewardGetDialog__OnClickClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionRewardGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4A5E3C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_MissionRewardGetDialog_OnClickClose__);
    byte_4A5E3C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MissionRewardGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall MissionRewardGetDialog__Open(
        MissionRewardGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        bool isGetNoReward,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  int v13; // w26
  int v14; // w27
  Il2CppObject *itemIcon; // x24
  GiftEntity_o *v16; // x29
  UnityEngine_GameObject_o *v17; // x24
  UnityEngine_Transform_o *v18; // x25
  UnityEngine_Transform_o *v19; // x25
  ItemIconComponent_o *v20; // x24
  int32_t num; // w3
  __int64 v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  UIWidget_o *v25; // x22
  int32_t v26; // w23
  int v27; // w20
  uint16_t Chars; // w0
  bool v29; // w8
  int32_t *p_NORMAL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  System_Action_o *v34; // x20
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E3C2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_MissionRewardGetDialog_EndOpen__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E3C2 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)detail,
    (int32_t)closeCb);
  if ( !rewards )
    goto LABEL_57;
  v12 = *(_QWORD *)&rewards->max_length;
  v13 = v12 - 1;
  if ( (int)v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      v16 = rewards->m_Items[v14];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                itemIcon,
                                                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        break;
      v17 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !this->fields.itemIconGrid )
        break;
      v18 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.itemIconGrid,
                                                0LL);
      if ( !v18 )
        break;
      UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
      v19 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4A55CE1 )
      {
        transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v19 )
        break;
      UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
      if ( !transform )
        break;
      v36.fields.x = this->fields.ICON_SCALE_SIZE;
      v36.fields.y = v36.fields.x;
      v36.fields.z = v36.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v36, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                v17,
                                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v16 )
        break;
      v20 = (ItemIconComponent_o *)transform;
      if ( !transform )
        break;
      if ( v16->fields.num <= 1 )
        num = -1;
      else
        num = v16->fields.num;
      ItemIconComponent__SetGift_38144896(
        (ItemIconComponent_o *)transform,
        v16->fields.type,
        v16->fields.objectId,
        num,
        0,
        0LL);
      ItemIconComponent__setTypeSpritePositionY(v20, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      if ( v13 == v14 )
        goto LABEL_23;
      if ( ++v14 >= rewards->max_length )
        sub_1B88814(v22, v11);
    }
LABEL_57:
    sub_1B8880C(transform, v11);
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
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v24, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0LL);
  transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_57;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)transform,
                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !transform )
    goto LABEL_57;
  v25 = (UIWidget_o *)transform;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0LL);
  UIWidget__set_height(v25, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0LL);
  if ( !detail )
    goto LABEL_57;
  if ( detail->fields._stringLength < 1 )
  {
    v29 = 1;
  }
  else
  {
    v26 = 0;
    v27 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v26++, 0LL);
      if ( Chars == 10 )
        ++v27;
    }
    while ( v26 < detail->fields._stringLength );
    v29 = v27 < 5;
  }
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( v29 )
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
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    GameObjectExtensions__SetLocalPositionY(v31, 36.0, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !transform )
      goto LABEL_57;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    GameObjectExtensions__SetLocalPositionY(v32, -162.0, 0LL);
    UIWidget__set_width(v25, 218, 0LL);
    UIWidget__set_height(v25, 56, 0LL);
  }
  else
  {
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_57;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    GameObjectExtensions__SetLocalPositionY(v33, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0LL);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(transform, 1, 0LL);
  v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
}


void __fastcall MissionRewardGetDialog__Open_44261396(
        MissionRewardGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4A5E3C3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MissionRewardGetDialog_EndOpen__);
    byte_4A5E3C3 = 1;
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
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v9, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardGetDialog_ClickDelegate___ctor(
        MissionRewardGetDialog_ClickDelegate_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19D28AC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D286C;
}


System_IAsyncResult_o *__fastcall MissionRewardGetDialog_ClickDelegate__BeginInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__Invoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}