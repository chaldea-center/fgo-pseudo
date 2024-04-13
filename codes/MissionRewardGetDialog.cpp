void __fastcall MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7420 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7420 = 1;
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

  MissionRewardGetDialog__Close_22799096(this, 0LL, v2);
}


void __fastcall MissionRewardGetDialog__Close_22799096(
        MissionRewardGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E741E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MissionRewardGetDialog_EndClose__, v10, v11, v12);
    byte_42E741E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall MissionRewardGetDialog__EndOpen(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall MissionRewardGetDialog__Init(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_IEnumerator_c *v26; // x8
  unsigned __int64 v27; // x10
  System_Collections_IEnumerator_c **v28; // x11
  __int64 v29; // x0
  UnityEngine_Component_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v34; // x0
  __int64 v35; // x3
  __int64 v36; // x8
  __int64 v37; // x20
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0

  if ( (byte_42E741B & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E741B = 1;
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
    sub_B5D69C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = (System_Collections_IEnumerator_c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        v28 += 2;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1].method;
    }
    else
    {
LABEL_18:
      v29 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v25);
    }
    v30 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(
                                       Enumerator,
                                       *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_38;
    v32 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (UnityEngine_Transform_c *)v30->klass->_2.typeHierarchy[v32 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v30 = (UnityEngine_Component_o *)sub_B5D990(v30);
LABEL_38:
      sub_B5D69C(v30, v31);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v30, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v34 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v34 )
  {
    v36 = *(_QWORD *)v34;
    v37 = v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_32;
      }
      v40 = v36 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_32:
      v40 = sub_AF54C0(v34, System_IDisposable_TypeInfo, 0LL, v35);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_39:
    sub_B5D69C(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionRewardGetDialog__OnClickClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  MissionRewardGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42E741F & 1) == 0 )
  {
    sub_B5D5C4(&Method_MissionRewardGetDialog_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42E741F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_MissionRewardGetDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B5D69C(0LL, v7);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v29; // x1
  __int64 v30; // x26
  il2cpp_array_size_t v31; // w27
  UnityEngine_Component_o **p_itemIconGrid; // x25
  struct UnityEngine_GameObject_o *itemIcon; // x23
  GiftEntity_o *v34; // x20
  UnityEngine_GameObject_o *v35; // x23
  UnityEngine_Transform_o *v36; // x24
  UnityEngine_Transform_o *v37; // x24
  int v38; // s0
  ItemIconComponent_o *v41; // x23
  int32_t v42; // w3
  __int64 v43; // x0
  __int64 v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // x0
  UIWidget_o *v47; // x22
  int32_t v48; // w23
  int v49; // w20
  uint16_t Chars; // w0
  bool v51; // w8
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  System_Action_o *v56; // x20
  bool v57; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  v8 = isQpMax;
  if ( (byte_42E741C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)rewards, (_DWORD)detail, closeCb);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v16, v17, v18);
    sub_B5D5C4(&Method_MissionRewardGetDialog_EndOpen__, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    byte_42E741C = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B5D560(
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
  v30 = *(_QWORD *)&rewards->max_length;
  if ( (int)v30 <= 0 )
  {
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
  }
  else
  {
    v57 = v8;
    v31 = 0;
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
    while ( 1 )
    {
      itemIcon = this->fields.itemIcon;
      v34 = rewards->m_Items[v31];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_59;
      v35 = (UnityEngine_GameObject_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)transform,
                                               0LL);
      if ( !*p_itemIconGrid )
        goto LABEL_59;
      v36 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*p_itemIconGrid, 0LL);
      if ( !v36 )
        goto LABEL_59;
      UnityEngine_Transform__set_parent(v36, (UnityEngine_Transform_o *)transform, 0LL);
      v37 = UnityEngine_GameObject__get_transform(v35, 0LL);
      *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v37 )
        goto LABEL_59;
      UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v35, 0LL);
      if ( !transform )
        goto LABEL_59;
      v58.fields.x = this->fields.ICON_SCALE_SIZE;
      v58.fields.y = v58.fields.x;
      v58.fields.z = v58.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v58, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v35,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v34 )
        goto LABEL_59;
      v41 = (ItemIconComponent_o *)transform;
      if ( !transform )
        goto LABEL_59;
      v42 = v34->fields.num <= 1 ? -1 : v34->fields.num;
      ItemIconComponent__SetGift((ItemIconComponent_o *)transform, v34->fields.type, v34->fields.objectId, v42, 0, 0LL);
      ItemIconComponent__setTypeSpritePositionY(v41, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      if ( (int)++v31 >= (int)v30 )
        break;
      if ( v31 >= rewards->max_length )
      {
        v44 = sub_B5D6C8(v43);
        sub_B5D668(v44, 0LL);
      }
    }
    v8 = v57;
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
  v46 = UnityEngine_Component__get_gameObject(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v46, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !transform )
    goto LABEL_59;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           transform,
                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !transform )
    goto LABEL_59;
  v47 = (UIWidget_o *)transform;
  UIWidget__set_width((UIWidget_o *)transform, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0LL);
  UIWidget__set_height(v47, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0LL);
  if ( !detail )
    goto LABEL_59;
  if ( detail->fields.m_stringLength < 1 )
  {
    v51 = 1;
  }
  else
  {
    v48 = 0;
    v49 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v48++, 0LL);
      if ( Chars == 10 )
        ++v49;
    }
    while ( v48 < detail->fields.m_stringLength );
    v51 = v49 < 5;
  }
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( v51 )
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
              v53 = UnityEngine_Component__get_gameObject(transform, 0LL);
              GameObjectExtensions__SetLocalPositionY(v53, 36.0, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.closeButton;
              if ( transform )
              {
                v54 = UnityEngine_Component__get_gameObject(transform, 0LL);
                GameObjectExtensions__SetLocalPositionY(v54, -162.0, 0LL);
                UIWidget__set_width(v47, 218, 0LL);
                UIWidget__set_height(v47, 56, 0LL);
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_B5D69C(transform, v29);
  }
  transform = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !transform )
    goto LABEL_59;
  v55 = UnityEngine_Component__get_gameObject(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v55, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0LL);
LABEL_57:
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
}


void __fastcall MissionRewardGetDialog__Open_22798884(
        MissionRewardGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        MissionRewardGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  System_Action_o *v15; // x20

  if ( (byte_42E741D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)reward, (_DWORD)detail, closeCb);
    sub_B5D5C4(&Method_MissionRewardGetDialog_EndOpen__, v10, v11, v12);
    byte_42E741D = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B5D560(
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
    sub_B5D69C(0LL, v14);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall MissionRewardGetDialog_ClickDelegate__BeginInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__Invoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  MissionRewardGetDialog_ClickDelegate_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  MissionRewardGetDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  MissionRewardGetDialog_ClickDelegate_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (MissionRewardGetDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}