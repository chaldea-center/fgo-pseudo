void __fastcall MissionRewardGetDialog___ctor(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F7D54 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F7D54 = 1;
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

  MissionRewardGetDialog__Close_21039884(this, 0LL, v2);
}


void __fastcall MissionRewardGetDialog__Close_21039884(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F7D52 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_MissionRewardGetDialog_EndClose__, v10);
    byte_40F7D52 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UnityEngine_Component_o *itemIconGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x20
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_40F7D4F & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F7D4F = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1, 0LL);
  itemIconGrid = (UnityEngine_Component_o *)this->fields.itemIconGrid;
  if ( !itemIconGrid )
    goto LABEL_39;
  transform = UnityEngine_Component__get_transform(itemIconGrid, 0LL);
  if ( !transform )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_18:
      v18 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_38;
    v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v19);
LABEL_38:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v22 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_32;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_32:
      v27 = sub_AAFEF8(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
LABEL_39:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionRewardGetDialog__OnClickClose(MissionRewardGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MissionRewardGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40F7D53 & 1) == 0 )
  {
    sub_B16FFC(&Method_MissionRewardGetDialog_OnClickClose__, method);
    byte_40F7D53 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionRewardGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionRewardGetDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_MissionRewardGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B170D4();
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
  __int64 v18; // x26
  il2cpp_array_size_t v19; // w27
  UnityEngine_Component_o **p_itemIconGrid; // x25
  struct UnityEngine_GameObject_o *itemIcon; // x23
  GiftEntity_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v26; // x24
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *v28; // x24
  int v29; // s0
  UnityEngine_Transform_o *v32; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  ItemIconComponent_o *v34; // x23
  int32_t v35; // w3
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *itemGetDetailLabel; // x0
  UIWidget_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v48; // x22
  int32_t v49; // w23
  int v50; // w20
  uint16_t Chars; // w0
  bool v52; // w8
  UILabel_o *v53; // x0
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_GameObject_o *v55; // x0
  UIWidget_o *v56; // x0
  UILabel_o *v57; // x0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x20
  bool v70; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  v8 = isQpMax;
  if ( (byte_40F7D50 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, rewards);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v14);
    sub_B16FFC(&Method_MissionRewardGetDialog_EndOpen__, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    byte_40F7D50 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B16F98(
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
  v18 = *(_QWORD *)&rewards->max_length;
  if ( (int)v18 <= 0 )
  {
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
  }
  else
  {
    v70 = v8;
    v19 = 0;
    p_itemIconGrid = (UnityEngine_Component_o **)&this->fields.itemIconGrid;
    while ( 1 )
    {
      itemIcon = this->fields.itemIcon;
      v22 = rewards->m_Items[v19];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v23 )
        goto LABEL_59;
      v24 = v23;
      transform = UnityEngine_GameObject__get_transform(v23, 0LL);
      if ( !*p_itemIconGrid )
        goto LABEL_59;
      v26 = transform;
      v27 = UnityEngine_Component__get_transform(*p_itemIconGrid, 0LL);
      if ( !v26 )
        goto LABEL_59;
      UnityEngine_Transform__set_parent(v26, v27, 0LL);
      v28 = UnityEngine_GameObject__get_transform(v24, 0LL);
      *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v28 )
        goto LABEL_59;
      UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
      v32 = UnityEngine_GameObject__get_transform(v24, 0LL);
      if ( !v32 )
        goto LABEL_59;
      v71.fields.x = this->fields.ICON_SCALE_SIZE;
      v71.fields.y = v71.fields.x;
      v71.fields.z = v71.fields.x;
      UnityEngine_Transform__set_localScale(v32, v71, 0LL);
      Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v24,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( !v22 )
        goto LABEL_59;
      v34 = Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        goto LABEL_59;
      v35 = v22->fields.num <= 1 ? -1 : v22->fields.num;
      ItemIconComponent__SetGift(Component_srcLineSprite, v22->fields.type, v22->fields.objectId, v35, 0, 0LL);
      ItemIconComponent__setTypeSpritePositionY(v34, this->fields.TYPE_SPRITE_POS_Y, 0LL);
      if ( (int)++v19 >= (int)v18 )
        break;
      if ( v19 >= rewards->max_length )
      {
        sub_B17100(v36, v37, v38);
        sub_B170A0();
      }
    }
    v8 = v70;
  }
  if ( !*p_itemIconGrid )
    goto LABEL_59;
  UIGrid__set_repositionNow((UIGrid_o *)*p_itemIconGrid, 1, 0LL);
  if ( !*p_itemIconGrid )
    goto LABEL_59;
  gameObject = UnityEngine_Component__get_gameObject(*p_itemIconGrid, 0LL);
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  if ( !itemGetDetailLabel )
    goto LABEL_59;
  UILabel__set_text(itemGetDetailLabel, detail, 0LL);
  v41 = (UIWidget_o *)this->fields.itemGetDetailLabel;
  if ( !v41 )
    goto LABEL_59;
  UIWidget__set_width(v41, this->fields.ITEM_GET_DETAIL_LABEL_WIDTH_DEF, 0LL);
  v42 = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !v42 )
    goto LABEL_59;
  v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
  GameObjectExtensions__SetLocalPositionY(v43, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y_DEF, 0LL);
  closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_59;
  v45 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
  GameObjectExtensions__SetLocalPositionY(v45, this->fields.CLOSE_BUTTON_POS_Y_DEF, 0LL);
  v46 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v46 )
    goto LABEL_59;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v46,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !Component_WebViewObject )
    goto LABEL_59;
  v48 = (UIWidget_o *)Component_WebViewObject;
  UIWidget__set_width((UIWidget_o *)Component_WebViewObject, this->fields.CLOSE_BUTTON_WIDGET_W_DEF, 0LL);
  UIWidget__set_height(v48, this->fields.CLOSE_BUTTON_WIDGET_H_DEF, 0LL);
  if ( !detail )
    goto LABEL_59;
  if ( detail->fields.m_stringLength < 1 )
  {
    v52 = 1;
  }
  else
  {
    v49 = 0;
    v50 = 0;
    do
    {
      Chars = System_String__get_Chars(detail, v49++, 0LL);
      if ( Chars == 10 )
        ++v50;
    }
    while ( v49 < detail->fields.m_stringLength );
    v52 = v50 < 5;
  }
  v53 = this->fields.itemGetDetailLabel;
  if ( v52 )
  {
    if ( !v53 )
      goto LABEL_59;
    NORMAL_FONT_SIZE = this->fields.NORMAL_FONT_SIZE;
  }
  else
  {
    if ( !v53 )
      goto LABEL_59;
    NORMAL_FONT_SIZE = this->fields.SMALL_FONT_SIZE;
  }
  UILabel__set_fontSize(v53, NORMAL_FONT_SIZE, 0LL);
  if ( v8 )
  {
    if ( *p_itemIconGrid )
    {
      v55 = UnityEngine_Component__get_gameObject(*p_itemIconGrid, 0LL);
      if ( v55 )
      {
        UnityEngine_GameObject__SetActive(v55, 0, 0LL);
        v56 = (UIWidget_o *)this->fields.itemGetDetailLabel;
        if ( v56 )
        {
          UIWidget__set_width(v56, 720, 0LL);
          v57 = this->fields.itemGetDetailLabel;
          if ( v57 )
          {
            UILabel__set_fontSize(v57, this->fields.BIG_FONT_SIZE, 0LL);
            v58 = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
            if ( v58 )
            {
              v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
              GameObjectExtensions__SetLocalPositionY(v59, 36.0, 0LL);
              v60 = (UnityEngine_Component_o *)this->fields.closeButton;
              if ( v60 )
              {
                v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
                GameObjectExtensions__SetLocalPositionY(v61, -162.0, 0LL);
                UIWidget__set_width(v48, 218, 0LL);
                UIWidget__set_height(v48, 56, 0LL);
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_B170D4();
  }
  v62 = (UnityEngine_Component_o *)this->fields.itemGetDetailLabel;
  if ( !v62 )
    goto LABEL_59;
  v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
  GameObjectExtensions__SetLocalPositionY(v63, this->fields.ITEM_GET_DETAIL_LABEL_POS_Y, 0LL);
LABEL_57:
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v64 )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(v64, 1, 0LL);
  v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
}


void __fastcall MissionRewardGetDialog__Open_21039672(
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40F7D51 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, reward);
    sub_B16FFC(&Method_MissionRewardGetDialog_EndOpen__, v10);
    byte_40F7D51 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B16F98(
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_MissionRewardGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall MissionRewardGetDialog_ClickDelegate__EndInvoke(
        MissionRewardGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  MissionRewardGetDialog_ClickDelegate_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  MissionRewardGetDialog_ClickDelegate_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
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
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}