void __fastcall ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  int64_t v13; // x1
  int64_t v14; // x1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B12A79 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20546/*"img_index_03"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20545/*"img_index_02"*/, v10, v11);
    byte_4B12A79 = 1;
  }
  static_fields = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LABEL_HEIGHT_MAX = 0xA800000BB8LL;
  static_fields->TITLE_NAME_LEFT_POS = -88;
  v13 = StringLiteral_20545/*"img_index_02"*/;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20545/*"img_index_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_20546/*"img_index_03"*/;
  v15 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v15->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_20546/*"img_index_03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->TITLE_BASE_LONG_SPRITE_NAME, v14, v16, v17, v18, v19, v20, v21);
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
    sub_1BCAA3C(0LL, method);
  ShiningIconComponent__Set_38945552(newIcon, 0, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UILabel_o *titleName; // x0
  UISprite_o *titleBase; // x19
  UISprite_o *v10; // x21
  float v11; // s0
  UIWidget_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v15; // s8
  float v16; // s8
  UILabel_o *v17; // x19

  if ( (byte_4B12A78 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B12A78 = 1;
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
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7);
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
    sub_1BCAA3C(titleName, v7);
  }
  titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v10 = this->fields.titleBase;
  if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7);
  if ( !v10 )
    goto LABEL_34;
  UISprite__set_spriteName(
    v10,
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
  if ( v11 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    titleName = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleName, 0LL);
    if ( !titleName )
      goto LABEL_34;
    LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleName, 0LL);
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    v16 = (float)(1.0 - v15)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
    TITLE_NAME_LEFT_POS = v16
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
    v12 = (UIWidget_o *)this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7);
    if ( !v12 )
      goto LABEL_34;
    UIWidget__set_width(
      v12,
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
  v17 = this->fields.titleName;
  if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7);
  if ( !v17 )
    goto LABEL_34;
  UILabel__SetCondensedScale(
    v17,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *titleNumSprite; // x24
  System_String_o *transform; // x0
  __int64 v23; // x1
  bool v24; // w1
  UISprite_o *v25; // x23
  System_String_o *v26; // x0
  UIWidget_o *messageLabel; // x23
  int32_t mHeight; // w28
  ServantStatusFlavorTextListViewItemDrawText2_c *v29; // x0
  UILabel_o *v30; // x24
  UnityEngine_GameObject_o *mainPrefab; // x25
  UnityEngine_GameObject_o *rubyPrefab; // x26
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  RubyLabelHelper_o *v36; // x23
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w22
  __int64 v39; // x1
  UnityEngine_Object_o *baseCollider; // x23
  int v41; // w24
  int v42; // s0
  float v43; // s1
  float v45; // s1
  UnityEngine_Object_o *baseSprite; // x22
  float v47; // s0
  float v48; // s1
  float v49; // s2
  int v50; // w22
  float v51; // s8
  float v52; // s10
  float v53; // s9
  float v54; // s11
  float v55; // s0
  float v56; // s3
  float v57; // s1
  float v58; // s2
  float v59; // s0
  float v60; // s1
  float v61; // s2
  float v62; // s8
  float v63; // s10
  float v64; // s9
  __int64 v65; // x1
  UnityEngine_Object_o *newIcon; // x21
  int32_t v67; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  v67 = profileNum;
  if ( (byte_4B12A77 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, isOpen);
    sub_1BCA7E0(&RubyLabelHelper_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_20792/*"img_txt_profile"*/, v19, v20);
    byte_4B12A77 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode && this->fields.isFirst )
  {
    this->fields.isFirst = 0;
    titleNumSprite = (UnityEngine_Object_o *)this->fields.titleNumSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    transform = (System_String_o *)UnityEngine_Object__op_Inequality(titleNumSprite, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( profileNum >= 1 && this->fields.profileNumMax >= profileNum )
      {
        v25 = this->fields.titleNumSprite;
        v26 = System_Int32__ToString((int32_t)&v67, 0LL);
        transform = System_String__Concat_62401220((System_String_o *)StringLiteral_20792/*"img_txt_profile"*/, v26, 0LL);
        if ( !v25 )
          goto LABEL_57;
        UISprite__set_spriteName(v25, transform, 0LL);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        ((void (__fastcall *)(System_String_o *, void *))transform->klass[1]._1.typeMetadataHandle)(
          transform,
          transform->klass[1]._1.interopData);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v24 = 1;
      }
      else
      {
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v24 = 0;
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, v24, 0LL);
    }
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_57;
    mHeight = messageLabel->fields.mHeight;
    v29 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v23);
      v29 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    }
    UIWidget__set_height(messageLabel, v29->static_fields->LABEL_HEIGHT_MAX, 0LL);
    v30 = this->fields.messageLabel;
    rubyPrefab = this->fields.rubyPrefab;
    mainPrefab = this->fields.mainPrefab;
    v36 = (RubyLabelHelper_o *)sub_1BCAA2C(RubyLabelHelper_TypeInfo, v33, v34, v35);
    RubyLabelHelper___ctor(v36, v30, mainPrefab, rubyPrefab, 0LL);
    if ( !v36 )
      goto LABEL_57;
    RubyLabelHelper__SetText(v36, text, 0LL);
    Size = RubyLabelHelper__get_Size(v36, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
    v41 = y - mHeight;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      *(UnityEngine_Vector3_o *)&v42 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0LL);
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v45 = v43 + (float)v41;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.baseSprite;
      if ( !transform )
        goto LABEL_57;
      UIWidget__set_height((UIWidget_o *)transform, HIDWORD(transform[7].klass) + v41, 0LL);
    }
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_57;
    *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (System_String_o *)this->fields.messageLabel;
    v50 = v41 >= 0 ? v41 : v41 + 1;
    if ( !transform )
      goto LABEL_57;
    v51 = v47;
    v52 = v48;
    v53 = v49;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_57;
    v54 = (float)(v50 >> 1);
    v68.fields.y = v52 + v54;
    v68.fields.x = v51;
    v68.fields.z = v53;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v68, 0LL);
    transform = (System_String_o *)this->fields.titleBase;
    v55 = 0.5;
    if ( isOpen )
      v55 = 1.0;
    if ( !transform )
      goto LABEL_57;
    v56 = 1.0;
    v57 = v55;
    v58 = v55;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)&v55, 0LL);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform
      || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)&v59 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL),
          (transform = (System_String_o *)this->fields.titleBase) == 0LL)
      || (v62 = v59,
          v63 = v60,
          v64 = v61,
          (transform = (System_String_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)transform,
                                            0LL)) == 0LL) )
    {
LABEL_57:
      sub_1BCAA3C(transform, v23);
    }
    v69.fields.y = v63 + v54;
    v69.fields.x = v62;
    v69.fields.z = v64;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v69, 0LL);
    newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
    if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.newIcon;
      if ( transform )
      {
        ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)transform, isNew, 0LL);
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
    sub_1BCAA3C(this, method);
  return messageLabel->fields.mFontSize;
}


float __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *messageLabel; // x8

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(messageLabel, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}