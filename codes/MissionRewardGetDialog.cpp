void __fastcall MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4187363 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187363 = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC28000003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x1800000018LL;
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF = 0xC2200000C2180000LL;
  this->fields.BIG_FONT_SIZE = 30;
  *(_QWORD *)&this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF = 0xC30F00000000025CLL;
  *(_QWORD *)&this->fields.CLOSE_BUTTON_WIDGET_W_DEF = 0x38000000DALL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionRewardGetDialog__Close(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MissionRewardGetDialog__Close_24449624(this, 0LL, v2);
}


void __fastcall MissionRewardGetDialog__Close_24449624(
        MissionRewardGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187361 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_MissionRewardGetDialog_EndClose__, v10);
    byte_4187361 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall MissionRewardGetDialog__EndClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MissionRewardGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
  __int64 v9; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x20
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_418735E & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418735E = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemGetDetailLabel = (UILabel_o *)this->fields.itemIconGrid;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)itemGetDetailLabel,
                                      0LL);
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)itemGetDetailLabel, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_18:
      v19 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v15);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_38;
    v22 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v22 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v20 = (UnityEngine_Component_o *)sub_B2C728(v20);
LABEL_38:
      sub_B2C434(v20, v21);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v24 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v26 = *(_QWORD *)v24;
    v27 = v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_32;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_32:
      v30 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_39:
    sub_B2C434(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionRewardGetDialog__OnClickClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MissionRewardGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_4187362 & 1) == 0 )
  {
    sub_B2C35C(&Method_MissionRewardGetDialog_OnClickClose__, method);
    byte_4187362 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_MissionRewardGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B2C434(0LL, v5);
    MissionRewardGetDialog_ClickDelegate__Invoke(closeFunc, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardGetDialog__Open(
        MissionRewardGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        bool isQpMax,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  bool v8; // w24
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v19; // x1
  __int64 v20; // x26
  il2cpp_array_size_t v21; // w27
  UnityEngine_Component_o **p_itemIconGrid; // x25
  struct UnityEngine_GameObject_o *itemIcon; // x23
  GiftEntity_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x23
  UnityEngine_Transform_o *v26; // x24
  UnityEngine_Transform_o *v27; // x24
  int v28; // s0
  ItemIconComponent_o *v31; // x23
  int32_t v32; // w3
  __int64 v33; // x0
  __int64 v34; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  UIWidget_o *v37; // x22
  int32_t v38; // w23
  int v39; // w20
  uint16_t Chars; // w0
  bool v41; // w8
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  System_Action_o *v46; // x20
  bool v47; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v8 = isQpMax;
  if ( (byte_418735F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, rewards);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v14);
    sub_B2C35C(&Method_MissionRewardGetDialog_EndOpen__, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    byte_418735F = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCb,
    (System_String_array **)detail,
    (System_String_array **)closeCb,
    (System_Boolean_array **)isQpMax,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !rewards )
    goto LABEL_59;
  v20 = *(_QWORD *)&rewards->max_length;
  if ( (int)v20 <= 0 )
  {
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
  }
  else
  {
    v47 = v8;
    v21 = 0;
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
    while ( 1 )
    {
      itemIcon = this->fields.itemIcon;
      v24 = rewards->m_Items[v21];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_59;
      v25 = (UnityEngine_GameObject_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)transform,
                                               0LL);
      if ( !*p_itemIconGrid )
        goto LABEL_59;
      v26 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_itemIconGrid, 0LL);
      if ( !v26 )
        goto LABEL_59;
      UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)transform, 0LL);
      v27 = UnityEngine_GameObject__get_transform(v25, 0LL);
      *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v27 )
        goto LABEL_59;
      UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !transform )
        goto LABEL_59;
      v48.fields.x = this->fields.ICON_SCALE_SIZE;
      v48.fields.y = v48.fields.x;
      v48.fields.z = v48.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v48, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v25,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v24 )
        goto LABEL_59;
      v31 = (ItemIconComponent_o *)transform;
      if ( !transform )
        goto LABEL_59;
      v32 = v24->fields.num <= 1 ? -1 : v24->fields.num;
      ItemIconComponent__SetGift((ItemIconComponent_o *)transform, v24->fields.type, v24->fields.objectId, v32, 0, 0LL);
      ItemIconComponent__setTypeSpritePositionY(v31, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      if ( (int)++v21 >= (int)v20 )
        break;
      if ( v21 >= rewards->max_length )
      {
        v34 = sub_B2C460(v33);
        sub_B2C400(v34, 0LL);
      }
    }
    v8 = v47;
  }
  transform = *p_itemIconGrid;
  if ( !*p_itemIconGrid )
    goto LABEL_59;
  UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0LL);
  transform = *p_itemIconGrid;
  if ( !*p_itemIconGrid )
    goto LABEL_59;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)transform, detail, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_59;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_59;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_59;
  v36 = UnityEngine_Component__get_gameObject(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v36, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_59;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           transform,
                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !transform )
    goto LABEL_59;
  v37 = (UIWidget_o *)transform;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0LL);
  UIWidget__set_height(v37, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0LL);
  if ( !detail )
    goto LABEL_59;
  if ( detail->fields.m_stringLength < 1 )
  {
    v41 = 1;
  }
  else
  {
    v38 = 0;
    v39 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v38++, 0LL);
      if ( Chars == 10 )
        ++v39;
    }
    while ( v38 < detail->fields.m_stringLength );
    v41 = v39 < 5;
  }
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( v41 )
  {
    if ( !transform )
      goto LABEL_59;
    NORMAL_FONT_SIZE = this->fields.NORMAL_FONT_SIZE;
  }
  else
  {
    if ( !transform )
      goto LABEL_59;
    NORMAL_FONT_SIZE = this->fields.SMALL_FONT_SIZE;
  }
  UILabel__set_fontSize((UILabel_o *)transform, NORMAL_FONT_SIZE, 0LL);
  if ( v8 )
  {
    transform = *p_itemIconGrid;
    if ( *p_itemIconGrid )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
      if ( transform )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
        if ( transform )
        {
          UIWidget__set_width((UIWidget_o *)transform, 720, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
          if ( transform )
          {
            UILabel__set_fontSize((UILabel_o *)transform, this->fields.BIG_FONT_SIZE, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
            if ( transform )
            {
              v43 = UnityEngine_Component__get_gameObject(transform, 0LL);
              GameObjectExtensions__SetLocalPositionY(v43, 36.0, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.closeButton;
              if ( transform )
              {
                v44 = UnityEngine_Component__get_gameObject(transform, 0LL);
                GameObjectExtensions__SetLocalPositionY(v44, -162.0, 0LL);
                UIWidget__set_width(v37, 218, 0LL);
                UIWidget__set_height(v37, 56, 0LL);
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_B2C434(transform, v19);
  }
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_59;
  v45 = UnityEngine_Component__get_gameObject(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v45, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0LL);
LABEL_57:
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
}


void __fastcall MissionRewardGetDialog__Open_24449412(
        MissionRewardGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4187360 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, reward);
    sub_B2C35C(&Method_MissionRewardGetDialog_EndOpen__, v10);
    byte_4187360 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCb,
    (System_String_array **)detail,
    (System_String_array **)closeCb,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall MissionRewardGetDialog_ClickDelegate__BeginInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__Invoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  MissionRewardGetDialog_ClickDelegate_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  MissionRewardGetDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  MissionRewardGetDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (MissionRewardGetDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}