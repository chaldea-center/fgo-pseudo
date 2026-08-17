void MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0
  int v4; // w8

  if ( (byte_59743B4 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_59743B4 = 1;
  }
  v3 = BaseDialog_TypeInfo;
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF = 0xC30F00000000025CLL;
  this->fields.BIG_FONT_SIZE = 30;
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC28000003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x1800000018LL;
  *(_QWORD *)&this->fields.CLOSE_BUTTON_WIDGET_W_DEF = 0x38000000DALL;
  v4 = *(&v3->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF = 0xC2200000C2180000LL;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MissionRewardGetDialog__Close(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MissionRewardGetDialog__Close_55014960(this, 0, v2);
}


void MissionRewardGetDialog__Close_55014960(
        MissionRewardGetDialog_o *this,
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

  if ( (byte_59743B2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionRewardGetDialog_EndClose__);
    byte_59743B2 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void MissionRewardGetDialog__EndClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
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

  MissionRewardGetDialog__Init(this, method);
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


void MissionRewardGetDialog__EndOpen(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void MissionRewardGetDialog__Init(MissionRewardGetDialog_o *this, const MethodInfo *method)
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
  __int64 naturalAligment; // x9
  __int64 v18; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x21
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_IEnumerator_o *v26; // [xsp+28h] [xbp-38h]

  if ( (byte_59743AF & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59743AF = 1;
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
  v26 = Enumerator;
  while ( 1 )
  {
    if ( !v26 )
      goto LABEL_38;
    klass = v26->klass;
    v7 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
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
      v9 = sub_224BC3C(v26, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v26, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v26->klass;
    v11 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
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
      v13 = sub_224BC3C(v26, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v26,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_2213CDC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v14, UnityEngine_Transform_TypeInfo, v16);
LABEL_38:
      sub_2213CDC(Enumerator, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  v20 = sub_2213BB4(v26, System_IDisposable_TypeInfo);
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
          goto LABEL_32;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_32:
      v25 = sub_224BC3C(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !itemGetDetailLabel )
LABEL_40:
    sub_2213CDC(itemGetDetailLabel, method);
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

  if ( (byte_59743B3 & 1) == 0 )
  {
    sub_2213A60(&Method_MissionRewardGetDialog_OnClickClose__);
    byte_59743B3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MissionRewardGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      closeFunc->fields.method);
  }
}


void MissionRewardGetDialog__Open(
        MissionRewardGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        bool isGetNoReward,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  il2cpp_array_size_t max_length; // x26
  __int64 v15; // x27
  GiftEntity_o *v16; // x20
  Il2CppObject *itemIcon; // x24
  UnityEngine_GameObject_o *v18; // x24
  UnityEngine_Transform_o *v19; // x25
  UnityEngine_Transform_o *v20; // x25
  ItemIconComponent_o *v21; // x24
  int num; // w8
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

  if ( (byte_59743B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_MissionRewardGetDialog_EndOpen__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59743B0 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCb,
    detail,
    (System_String_o *)closeCb,
    isGetNoReward,
    (int32_t)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_55;
  max_length = rewards->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= LODWORD(rewards->max_length) )
        sub_2213CE4(transform);
      v16 = rewards->m_Items[v15];
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                itemIcon,
                                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        break;
      v18 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !this->fields.itemIconGrid )
        break;
      v19 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.itemIconGrid,
                                                0);
      if ( !v19 )
        break;
      UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0);
      v20 = (UnityEngine_Transform_o *)transform;
      if ( !byte_5969AE0 )
      {
        transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v20 )
        break;
      UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0);
      if ( !transform )
        break;
      v36.fields.x = this->fields.ICON_SCALE_SIZE;
      v36.fields.y = v36.fields.x;
      v36.fields.z = v36.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v36, 0);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                v18,
                                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v16 )
        break;
      v21 = (ItemIconComponent_o *)transform;
      if ( !transform )
        break;
      num = v16->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetGift_47884936(
        (ItemIconComponent_o *)transform,
        v16->fields.type,
        v16->fields.objectId,
        num,
        0,
        0);
      ItemIconComponent__setTypeSpritePositionY(v21, this->fields.TYPE_SPRITE_POS_Y, 0);
      if ( (_DWORD)max_length == (_DWORD)++v15 )
        goto LABEL_21;
    }
LABEL_55:
    sub_2213CDC(transform, v13);
  }
LABEL_21:
  transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
  if ( !transform )
    goto LABEL_55;
  UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
  if ( !transform )
    goto LABEL_55;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(transform, 1, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)transform, detail, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_55;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_55;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_55;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  GameObjectExtensions__SetLocalPositionY(v24, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0);
  transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_55;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)transform,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !transform )
    goto LABEL_55;
  v25 = (UIWidget_o *)transform;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0);
  UIWidget__set_height(v25, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0);
  if ( !detail )
    goto LABEL_55;
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
      Chars = System_String__get_Chars(detail, v26++, 0);
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
      goto LABEL_55;
    p_NORMAL_FONT_SIZE = &this->fields.NORMAL_FONT_SIZE;
  }
  else
  {
    if ( !transform )
      goto LABEL_55;
    p_NORMAL_FONT_SIZE = &this->fields.SMALL_FONT_SIZE;
  }
  UILabel__set_fontSize((UILabel_o *)transform, *p_NORMAL_FONT_SIZE, 0);
  if ( isGetNoReward )
  {
    transform = (UnityEngine_GameObject_o *)this->fields.itemIconGrid;
    if ( !transform )
      goto LABEL_55;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive(transform, 0, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_55;
    UIWidget__set_width((UIWidget_o *)transform, 720, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_55;
    UILabel__set_fontSize((UILabel_o *)transform, this->fields.BIG_FONT_SIZE, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_55;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    GameObjectExtensions__SetLocalPositionY(v31, 36.0, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !transform )
      goto LABEL_55;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    GameObjectExtensions__SetLocalPositionY(v32, -162.0, 0);
    UIWidget__set_width(v25, 218, 0);
    UIWidget__set_height(v25, 56, 0);
  }
  else
  {
    transform = (UnityEngine_GameObject_o *)this->fields.itemGetDetailLabel;
    if ( !transform )
      goto LABEL_55;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    GameObjectExtensions__SetLocalPositionY(v33, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(transform, 1, 0);
  v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0, 0);
}


void MissionRewardGetDialog__Open_55014756(
        MissionRewardGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_59743B1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionRewardGetDialog_EndOpen__);
    byte_59743B1 = 1;
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
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0, 0);
}


void MissionRewardGetDialog_ClickDelegate___ctor(
        MissionRewardGetDialog_ClickDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2013FBC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2013F7C;
}


System_IAsyncResult_o *MissionRewardGetDialog_ClickDelegate__BeginInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MissionRewardGetDialog_ClickDelegate__Invoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}