void __fastcall MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42AE817 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AE817 = 1;
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

  MissionRewardGetDialog__Close_22411620(this, 0LL, v2);
}


void __fastcall MissionRewardGetDialog__Close_22411620(
        MissionRewardGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42AE815 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MissionRewardGetDialog_EndClose__);
    byte_42AE815 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
  __int64 v5; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  __int64 v23; // x20
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  if ( (byte_42AE812 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE812 = 1;
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
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_18:
      v15 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v11);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_38;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v16 = (UnityEngine_Component_o *)sub_B52D50(v16);
LABEL_38:
      sub_B52A5C(v16, v17);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  v20 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v22 = *(_QWORD *)v20;
    v23 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_32;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_32:
      v26 = sub_AEB880(v20, System_IDisposable_TypeInfo, 0LL, v21);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_39:
    sub_B52A5C(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionRewardGetDialog__OnClickClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MissionRewardGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42AE816 & 1) == 0 )
  {
    sub_B52984(&Method_MissionRewardGetDialog_OnClickClose__);
    byte_42AE816 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_MissionRewardGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B52A5C(0LL, v5);
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
  UnityEngine_Component_o *transform; // x0
  __int64 v14; // x1
  __int64 v15; // x26
  il2cpp_array_size_t v16; // w27
  UnityEngine_Component_o **p_itemIconGrid; // x25
  struct UnityEngine_GameObject_o *itemIcon; // x23
  GiftEntity_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x23
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_Transform_o *v22; // x24
  int v23; // s0
  ItemIconComponent_o *v26; // x23
  int32_t v27; // w3
  __int64 v28; // x0
  __int64 v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UIWidget_o *v32; // x22
  int32_t v33; // w23
  int v34; // w20
  uint16_t Chars; // w0
  bool v36; // w8
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  System_Action_o *v41; // x20
  bool v42; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v8 = isQpMax;
  if ( (byte_42AE813 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_MissionRewardGetDialog_EndOpen__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE813 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B52920(
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
  v15 = *(_QWORD *)&rewards->max_length;
  if ( (int)v15 <= 0 )
  {
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
  }
  else
  {
    v42 = v8;
    v16 = 0;
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
    while ( 1 )
    {
      itemIcon = this->fields.itemIcon;
      v19 = rewards->m_Items[v16];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                               (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_59;
      v20 = (UnityEngine_GameObject_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)transform,
                                               0LL);
      if ( !*p_itemIconGrid )
        goto LABEL_59;
      v21 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_itemIconGrid, 0LL);
      if ( !v21 )
        goto LABEL_59;
      UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)transform, 0LL);
      v22 = UnityEngine_GameObject__get_transform(v20, 0LL);
      *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v22 )
        goto LABEL_59;
      UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
      if ( !transform )
        goto LABEL_59;
      v43.fields.x = this->fields.ICON_SCALE_SIZE;
      v43.fields.y = v43.fields.x;
      v43.fields.z = v43.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v43, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v20,
                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v19 )
        goto LABEL_59;
      v26 = (ItemIconComponent_o *)transform;
      if ( !transform )
        goto LABEL_59;
      v27 = v19->fields.num <= 1 ? -1 : v19->fields.num;
      ItemIconComponent__SetGift((ItemIconComponent_o *)transform, v19->fields.type, v19->fields.objectId, v27, 0, 0LL);
      ItemIconComponent__setTypeSpritePositionY(v26, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      if ( (int)++v16 >= (int)v15 )
        break;
      if ( v16 >= rewards->max_length )
      {
        v29 = sub_B52A88(v28);
        sub_B52A28(v29, 0LL);
      }
    }
    v8 = v42;
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
  v31 = UnityEngine_Component__get_gameObject(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v31, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_59;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           transform,
                                           (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !transform )
    goto LABEL_59;
  v32 = (UIWidget_o *)transform;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0LL);
  UIWidget__set_height(v32, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0LL);
  if ( !detail )
    goto LABEL_59;
  if ( detail->fields.m_stringLength < 1 )
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
    while ( v33 < detail->fields.m_stringLength );
    v36 = v34 < 5;
  }
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( v36 )
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
              v38 = UnityEngine_Component__get_gameObject(transform, 0LL);
              GameObjectExtensions__SetLocalPositionY(v38, 36.0, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.closeButton;
              if ( transform )
              {
                v39 = UnityEngine_Component__get_gameObject(transform, 0LL);
                GameObjectExtensions__SetLocalPositionY(v39, -162.0, 0LL);
                UIWidget__set_width(v32, 218, 0LL);
                UIWidget__set_height(v32, 56, 0LL);
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_B52A5C(transform, v14);
  }
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_59;
  v40 = UnityEngine_Component__get_gameObject(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v40, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0LL);
LABEL_57:
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall MissionRewardGetDialog__Open_22411408(
        MissionRewardGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_42AE814 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MissionRewardGetDialog_EndOpen__);
    byte_42AE814 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B52920(
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
    sub_B52A5C(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardGetDialog_ClickDelegate___ctor(
        MissionRewardGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall MissionRewardGetDialog_ClickDelegate__BeginInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B52928(this, &v5, callback, object);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B529B4(v21) & 1) == 0 )
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
      v23 = sub_B529AC(v21);
      v24 = sub_B52DB0(v21);
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
            v17 = sub_AEB880(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B52A34(v16, v21);
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
            v15 = sub_AEB880(v20, class_0, v9, v11);
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