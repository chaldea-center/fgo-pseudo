void __fastcall ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B74A2 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_20032/*"img_index_03"*/, v4);
    sub_1B4CF90(&StringLiteral_20031/*"img_index_02"*/, v5);
    byte_49B74A2 = 1;
  }
  static_fields = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LABEL_HEIGHT_MAX = 0xA800000BB8LL;
  static_fields->TITLE_NAME_LEFT_POS = -88;
  v7 = StringLiteral_20031/*"img_index_02"*/;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20031/*"img_index_02"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v7, v2, v3);
  v8 = StringLiteral_20032/*"img_index_03"*/;
  v9 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v9->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_20032/*"img_index_03"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v9->TITLE_BASE_LONG_SPRITE_NAME, v8, v10, v11);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2___ctor(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__Awake(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText2__GetKind(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  return 2;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__HideNew(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  ShiningIconComponent_o *newIcon; // x0

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_1B4D1EC(0LL, method);
  ShiningIconComponent__Set_38774460(newIcon, 0, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleName; // x0
  UISprite_o *titleBase; // x19
  UISprite_o *v9; // x21
  float v10; // s0
  UIWidget_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v14; // s8
  float v15; // s8
  UILabel_o *v16; // x19

  if ( (byte_49B74A1 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title);
    sub_1B4CF90(&StringLiteral_1/*""*/, v5);
    byte_49B74A1 = 1;
  }
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleName = this->fields.titleName;
    if ( titleName )
    {
      UILabel__set_text(titleName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      titleBase = this->fields.titleBase;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( titleBase )
      {
        UISprite__set_spriteName(
          titleBase,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
    }
LABEL_34:
    sub_1B4D1EC(titleName, v6);
  }
  titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v9 = this->fields.titleBase;
  if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  if ( !v9 )
    goto LABEL_34;
  UISprite__set_spriteName(
    v9,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
    0LL);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  UILabel__set_overflowMethod(titleName, 2, 0LL);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  UILabel__set_alignment(titleName, 2, 0LL);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  UILabel__set_text(titleName, title, 0LL);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleName->klass->vtable._33_MakePixelPerfect.method)(
    titleName,
    titleName->klass->vtable._34_get_minWidth.methodPtr);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleName->klass->vtable._22_get_localSize.method)(
    titleName,
    titleName->klass->vtable._23_get_drawingDimensions.methodPtr);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  if ( v10 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    titleName = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleName, 0LL);
    if ( !titleName )
      goto LABEL_34;
    LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleName, 0LL);
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    v15 = (float)(1.0 - v14)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
    TITLE_NAME_LEFT_POS = v15
                        + (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  else
  {
    UILabel__set_overflowMethod(titleName, 0, 0LL);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    UILabel__set_alignment(titleName, 1, 0LL);
    titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    v11 = (UIWidget_o *)this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    if ( !v11 )
      goto LABEL_34;
    UIWidget__set_width(
      v11,
      ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0LL);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
    TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
  titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v16 = this->fields.titleName;
  if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  if ( !v16 )
    goto LABEL_34;
  UILabel__SetCondensedScale(
    v16,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetItem(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *titleNumSprite; // x24
  System_String_o *transform; // x0
  __int64 v20; // x1
  bool v21; // w1
  UISprite_o *v22; // x23
  System_String_o *v23; // x0
  UIWidget_o *messageLabel; // x23
  int32_t mHeight; // w28
  ServantStatusFlavorTextListViewItemDrawText2_c *v26; // x0
  UILabel_o *v27; // x24
  UnityEngine_GameObject_o *mainPrefab; // x25
  UnityEngine_GameObject_o *rubyPrefab; // x26
  RubyLabelHelper_o *v30; // x23
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w22
  UnityEngine_Object_o *baseCollider; // x23
  int v34; // w24
  int v35; // s0
  float v36; // s1
  float v38; // s1
  UnityEngine_Object_o *baseSprite; // x22
  float v40; // s0
  float v41; // s1
  float v42; // s2
  int v43; // w22
  float v44; // s8
  float v45; // s10
  float v46; // s9
  float v47; // s11
  float v48; // s0
  float v49; // s3
  float v50; // s1
  float v51; // s2
  float v52; // s0
  float v53; // s1
  float v54; // s2
  float v55; // s8
  float v56; // s10
  float v57; // s9
  UnityEngine_Object_o *newIcon; // x21
  int32_t v59; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  v59 = profileNum;
  if ( (byte_49B74A0 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, item);
    sub_1B4CF90(&RubyLabelHelper_TypeInfo, v15);
    sub_1B4CF90(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v16);
    sub_1B4CF90(&StringLiteral_20285/*"img_txt_profile"*/, v17);
    byte_49B74A0 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode && this->fields.isFirst )
  {
    this->fields.isFirst = 0;
    titleNumSprite = (UnityEngine_Object_o *)this->fields.titleNumSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (System_String_o *)UnityEngine_Object__op_Inequality(titleNumSprite, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( profileNum >= 1 && this->fields.profileNumMax >= profileNum )
      {
        v22 = this->fields.titleNumSprite;
        v23 = System_Int32__ToString((int32_t)&v59, 0LL);
        transform = System_String__Concat_61093468((System_String_o *)StringLiteral_20285/*"img_txt_profile"*/, v23, 0LL);
        if ( !v22 )
          goto LABEL_57;
        UISprite__set_spriteName(v22, transform, 0LL);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        ((void (__fastcall *)(System_String_o *, void *))transform->klass[1]._1.typeMetadataHandle)(
          transform,
          transform->klass[1]._1.interopData);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v21 = 1;
      }
      else
      {
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v21 = 0;
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, v21, 0LL);
    }
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_57;
    mHeight = messageLabel->fields.mHeight;
    v26 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      v26 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    }
    UIWidget__set_height(messageLabel, v26->static_fields->LABEL_HEIGHT_MAX, 0LL);
    v27 = this->fields.messageLabel;
    rubyPrefab = this->fields.rubyPrefab;
    mainPrefab = this->fields.mainPrefab;
    v30 = (RubyLabelHelper_o *)sub_1B4D1DC(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v30, v27, mainPrefab, rubyPrefab, 0LL);
    if ( !v30 )
      goto LABEL_57;
    RubyLabelHelper__SetText(v30, text, 0LL);
    Size = RubyLabelHelper__get_Size(v30, 0LL);
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    if ( Size.fields.y == INFINITY )
      y = 0x80000000;
    else
      y = (int)Size.fields.y;
    UIWidget__set_height((UIWidget_o *)transform, y, 0LL);
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v34 = y - mHeight;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      *(UnityEngine_Vector3_o *)&v35 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0LL);
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v38 = v36 + (float)v34;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.baseSprite;
      if ( !transform )
        goto LABEL_57;
      UIWidget__set_height((UIWidget_o *)transform, HIDWORD(transform[7].klass) + v34, 0LL);
    }
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_57;
    *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (System_String_o *)this->fields.messageLabel;
    v43 = v34 >= 0 ? v34 : v34 + 1;
    if ( !transform )
      goto LABEL_57;
    v44 = v40;
    v45 = v41;
    v46 = v42;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_57;
    v47 = (float)(v43 >> 1);
    v60.fields.y = v45 + v47;
    v60.fields.x = v44;
    v60.fields.z = v46;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v60, 0LL);
    transform = (System_String_o *)this->fields.titleBase;
    v48 = 0.5;
    if ( isOpen )
      v48 = 1.0;
    if ( !transform )
      goto LABEL_57;
    v49 = 1.0;
    v50 = v48;
    v51 = v48;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)&v48, 0LL);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform
      || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)&v52 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL),
          (transform = (System_String_o *)this->fields.titleBase) == 0LL)
      || (v55 = v52,
          v56 = v53,
          v57 = v54,
          (transform = (System_String_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)transform,
                                            0LL)) == 0LL) )
    {
LABEL_57:
      sub_1B4D1EC(transform, v20);
    }
    v61.fields.y = v56 + v47;
    v61.fields.x = v55;
    v61.fields.z = v57;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v61, 0LL);
    newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.newIcon;
      if ( transform )
      {
        ShiningIconComponent__Set_38774460((ShiningIconComponent_o *)transform, isNew, 0LL);
        return;
      }
      goto LABEL_57;
    }
  }
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelFontSize(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *messageLabel; // x8

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1B4D1EC(this, method);
  return messageLabel->fields.mFontSize;
}


float __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *messageLabel; // x8

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1B4D1EC(this, method);
  return (float)messageLabel->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL)) == 0LL )
  {
    sub_1B4D1EC(messageLabel, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}