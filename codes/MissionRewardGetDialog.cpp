void MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CF184C & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CF184C = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC28000003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x1800000018LL;
  this->fields.BIG_FONT_SIZE = 30;
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF = 0xC2200000C2180000LL;
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF = 0xC30F00000000025CLL;
  *(_QWORD *)&this->fields.CLOSE_BUTTON_WIDGET_W_DEF = 0x38000000DALL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MissionRewardGetDialog__Close(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MissionRewardGetDialog__Close_47518364(this, 0, v2);
}


void MissionRewardGetDialog__Close_47518364(
        MissionRewardGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CF184A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MissionRewardGetDialog_EndClose__);
    byte_4CF184A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void MissionRewardGetDialog__EndClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MissionRewardGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void MissionRewardGetDialog__EndOpen(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void MissionRewardGetDialog__Init(MissionRewardGetDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4CF1847 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Transform_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1847 = 1;
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
    sub_1C7BD40(0, v4);
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
      v9 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v13 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
      sub_1C7C0DC(v14);
LABEL_37:
      sub_1C7BD40(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
  v18 = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
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
      v23 = sub_1C51E70(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !itemGetDetailLabel )
LABEL_38:
    sub_1C7BD40(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void MissionRewardGetDialog__OnClickClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionRewardGetDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4CF184B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MissionRewardGetDialog_OnClickClose__);
    byte_4CF184B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_MissionRewardGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C7BD40(v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      closeFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void MissionRewardGetDialog__Open(
        MissionRewardGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        bool isGetNoReward,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  il2cpp_array_size_t max_length; // x8
  int v15; // w26
  int v16; // w27
  Il2CppObject *itemIcon; // x24
  GiftEntity_o *v18; // x29
  UnityEngine_GameObject_o *v19; // x24
  UnityEngine_Transform_o *v20; // x25
  UnityEngine_Transform_o *v21; // x25
  ItemIconComponent_o *v22; // x24
  int num; // w8
  __int64 v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  UIWidget_o *v27; // x22
  int32_t v28; // w23
  int v29; // w20
  uint16_t Chars; // w0
  bool v31; // w8
  int32_t *p_NORMAL_FONT_SIZE; // x8
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  System_Action_o *v36; // x20
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1848 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_MissionRewardGetDialog_EndOpen__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1848 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)detail,
    (int32_t)closeCb,
    (System_String_o *)isGetNoReward,
    (int32_t)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_56;
  max_length = rewards->max_length;
  v15 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      v18 = rewards->m_Items[v16];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                itemIcon,
                                                (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        break;
      v19 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !this->fields.itemIconGrid )
        break;
      v20 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.itemIconGrid,
                                                0);
      if ( !v20 )
        break;
      UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0);
      v21 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4CE7E59 )
      {
        transform = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      if ( !v21 )
        break;
      UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0);
      if ( !transform )
        break;
      v38.fields.x = this->fields.ICON_SCALE_SIZE;
      v38.fields.y = v38.fields.x;
      v38.fields.z = v38.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v38, 0);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                v19,
                                                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v18 )
        break;
      v22 = (ItemIconComponent_o *)transform;
      if ( !transform )
        break;
      num = v18->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetGift_41487788(
        (ItemIconComponent_o *)transform,
        v18->fields.type,
        v18->fields.objectId,
        num,
        0,
        0);
      ItemIconComponent__setTypeSpritePositionY(v22, this->fields.TYPE_SPRITE_POS_Y, 0);
      if ( v15 == v16 )
        goto LABEL_22;
      if ( (unsigned int)++v16 >= LODWORD(rewards->max_length) )
        sub_1C7BD48(v24);
    }
LABEL_56:
    sub_1C7BD40(transform, v13);
  }
LABEL_22:
  transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
  if ( !transform )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
  if ( !transform )
    goto LABEL_56;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(transform, 1, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_56;
  UILabel__set_text((UILabel_o *)transform, detail, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_56;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_56;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_56;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  GameObjectExtensions__SetLocalPositionY(v26, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_56;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)transform,
                                            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !transform )
    goto LABEL_56;
  v27 = (UIWidget_o *)transform;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0);
  UIWidget__set_height(v27, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0);
  if ( !detail )
    goto LABEL_56;
  if ( detail->fields._stringLength < 1 )
  {
    v31 = 1;
  }
  else
  {
    v28 = 0;
    v29 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v28++, 0);
      if ( Chars == 10 )
        ++v29;
    }
    while ( v28 < detail->fields._stringLength );
    v31 = v29 < 5;
  }
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( v31 )
  {
    if ( !transform )
      goto LABEL_56;
    p_NORMAL_FONT_SIZE = &this->fields.NORMAL_FONT_SIZE;
  }
  else
  {
    if ( !transform )
      goto LABEL_56;
    p_NORMAL_FONT_SIZE = &this->fields.SMALL_FONT_SIZE;
  }
  UILabel__set_fontSize((UILabel_o *)transform, *p_NORMAL_FONT_SIZE, 0);
  if ( isGetNoReward )
  {
    transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
    if ( !transform )
      goto LABEL_56;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(transform, 0, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_56;
    UIWidget__set_width((UIWidget_o *)transform, 720, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_56;
    UILabel__set_fontSize((UILabel_o *)transform, this->fields.BIG_FONT_SIZE, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_56;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    GameObjectExtensions__SetLocalPositionY(v33, 36.0, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !transform )
      goto LABEL_56;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    GameObjectExtensions__SetLocalPositionY(v34, -162.0, 0);
    UIWidget__set_width(v27, 218, 0);
    UIWidget__set_height(v27, 56, 0);
  }
  else
  {
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_56;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    GameObjectExtensions__SetLocalPositionY(v35, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(transform, 1, 0);
  v36 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0, 0);
}


void MissionRewardGetDialog__Open_47518160(
        MissionRewardGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_4CF1849 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MissionRewardGetDialog_EndOpen__);
    byte_4CF1849 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    (int32_t)detail,
    (int32_t)closeCb,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0, 0);
}


void MissionRewardGetDialog_ClickDelegate___ctor(
        MissionRewardGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AB4FEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB4FAC;
}


System_IAsyncResult_o *MissionRewardGetDialog_ClickDelegate__BeginInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


void MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void MissionRewardGetDialog_ClickDelegate__Invoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}