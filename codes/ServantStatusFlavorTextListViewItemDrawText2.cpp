void ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596CB64 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_2213A60(&StringLiteral_21402/*"img_index_03"*/);
    sub_2213A60(&StringLiteral_21401/*"img_index_02"*/);
    byte_596CB64 = 1;
  }
  v7 = StringLiteral_21401/*"img_index_02"*/;
  static_fields = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LABEL_HEIGHT_MAX = 0xA800000BB8LL;
  static_fields->TITLE_NAME_LEFT_POS = -88;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_21402/*"img_index_03"*/;
  v10 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v10->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_21402/*"img_index_03"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->TITLE_BASE_LONG_SPRITE_NAME, v9, v11, v12, v13, v14, v15, v16);
}


void ServantStatusFlavorTextListViewItemDrawText2___ctor(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusFlavorTextListViewItemDrawText2__Awake(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t ServantStatusFlavorTextListViewItemDrawText2__GetKind(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  return 2;
}


void ServantStatusFlavorTextListViewItemDrawText2__HideNew(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  ShiningIconComponent_o *newIcon; // x0

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_2213CDC(0, method);
  ShiningIconComponent__Set_48066308(newIcon, 0, 0);
}


void ServantStatusFlavorTextListViewItemDrawText2__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *titleName; // x0
  __int64 v8; // x2
  UISprite_o *titleBase; // x19
  UISprite_o *v10; // x21
  float v11; // s0
  __int64 v12; // x2
  UIWidget_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  __int64 v16; // x2
  float v17; // s8
  float v18; // s8
  __int64 v19; // x2
  UILabel_o *v20; // x19

  if ( (byte_596CB63 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CB63 = 1;
  }
  if ( System_String__IsNullOrEmpty(title, 0) )
  {
    titleName = this->fields.titleName;
    if ( titleName )
    {
      UILabel__set_text(titleName, (System_String_o *)StringLiteral_1/*""*/, 0);
      titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      titleBase = this->fields.titleBase;
      if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v5, v8);
      if ( titleBase )
      {
        UISprite__set_spriteName(
          titleBase,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0);
        return;
      }
    }
LABEL_35:
    sub_2213CDC(titleName, v5);
  }
  titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v10 = this->fields.titleBase;
  if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v5, v6);
  if ( !v10 )
    goto LABEL_35;
  UISprite__set_spriteName(
    v10,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
    0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_35;
  UILabel__set_overflowMethod(titleName, 2, 0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_35;
  UILabel__set_alignment(titleName, 2, 0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_35;
  UILabel__set_text(titleName, title, 0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_35;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))titleName->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleName,
    titleName->klass->vtable._33_MakePixelPerfect.method);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_35;
  v11 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))titleName->klass->vtable._22_get_localSize.methodPtr)(
          titleName,
          titleName->klass->vtable._22_get_localSize.method);
  titleName = this->fields.titleName;
  if ( v11 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    if ( !titleName )
      goto LABEL_35;
    titleName = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleName, 0);
    if ( !titleName )
      goto LABEL_35;
    LODWORD(v17) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleName, 0);
    if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v5, v16);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_35;
    v18 = (float)(1.0 - v17)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0);
    TITLE_NAME_LEFT_POS = v18
                        + (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  else
  {
    if ( !titleName )
      goto LABEL_35;
    UILabel__set_overflowMethod(titleName, 0, 0);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_35;
    UILabel__set_alignment(titleName, 1, 0);
    titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    v13 = (UIWidget_o *)this->fields.titleName;
    if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v5, v12);
    if ( !v13 )
      goto LABEL_35;
    UIWidget__set_width(
      v13,
      ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0);
    TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0);
  titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v20 = this->fields.titleName;
  if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v5, v19);
  if ( !v20 )
    goto LABEL_35;
  UILabel__SetCondensedScale(
    v20,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewItemDrawText2__SetItem(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleNumSprite; // x24
  System_String_o *transform; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  bool v19; // w1
  UISprite_o *v20; // x23
  System_String_o *v21; // x0
  UIWidget_o *messageLabel; // x23
  int32_t mHeight; // w28
  ServantStatusFlavorTextListViewItemDrawText2_c *v24; // x0
  UnityEngine_GameObject_o *mainPrefab; // x25
  UnityEngine_GameObject_o *rubyPrefab; // x26
  UILabel_o *v27; // x24
  RubyLabelHelper_o *v28; // x23
  UnityEngine_Vector2_o Size; // kr30_8
  int32_t y; // w22
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *baseCollider; // x23
  int v34; // w24
  __int64 v35; // x2
  UnityEngine_Object_o *baseSprite; // x22
  int v37; // w22
  float v38; // s11
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Object_o *newIcon; // x21
  int32_t v44; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v45; // 0:kr00_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v47; // 0:kr20_12.12
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v44 = profileNum;
  if ( (byte_596CB62 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RubyLabelHelper_TypeInfo);
    sub_2213A60(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_2213A60(&StringLiteral_21698/*"img_txt_profile"*/);
    byte_596CB62 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode && this->fields.isFirst )
  {
    titleNumSprite = (UnityEngine_Object_o *)this->fields.titleNumSprite;
    this->fields.isFirst = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isOpen);
    transform = (System_String_o *)UnityEngine_Object__op_Inequality(titleNumSprite, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( profileNum >= 1 && this->fields.profileNumMax >= profileNum )
      {
        v20 = this->fields.titleNumSprite;
        v21 = System_Int32__ToString((int32_t)&v44, 0);
        transform = System_String__Concat_75651716((System_String_o *)StringLiteral_21698/*"img_txt_profile"*/, v21, 0);
        if ( !v20 )
          goto LABEL_57;
        UISprite__set_spriteName(v20, transform, 0);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        ((void (__fastcall *)(System_String_o *, void *))transform->klass[1]._1.generic_class)(
          transform,
          transform->klass[1]._1.typeMetadataHandle);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v19 = 1;
      }
      else
      {
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v19 = 0;
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, v19, 0);
    }
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_57;
    mHeight = messageLabel->fields.mHeight;
    v24 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v17, v18);
      v24 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    }
    UIWidget__set_height(messageLabel, v24->static_fields->LABEL_HEIGHT_MAX, 0);
    rubyPrefab = this->fields.rubyPrefab;
    mainPrefab = this->fields.mainPrefab;
    v27 = this->fields.messageLabel;
    v28 = (RubyLabelHelper_o *)sub_2213CCC(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v28, v27, mainPrefab, rubyPrefab, 0);
    if ( !v28 )
      goto LABEL_57;
    RubyLabelHelper__SetText(v28, text, 0);
    Size = RubyLabelHelper__get_Size(v28, 0);
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    if ( Size.fields.y == INFINITY )
      y = 0x80000000;
    else
      y = (int)Size.fields.y;
    UIWidget__set_height((UIWidget_o *)transform, y, 0);
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
    v34 = y - mHeight;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v45 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0);
      v50.fields.x = v45.fields.x;
      v50.fields.z = v45.fields.z;
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v50.fields.y = v45.fields.y + (float)v34;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, v50, 0);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v35);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      transform = (System_String_o *)this->fields.baseSprite;
      if ( !transform )
        goto LABEL_57;
      UIWidget__set_height((UIWidget_o *)transform, HIDWORD(transform[7].klass) + v34, 0);
    }
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_57;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = (System_String_o *)this->fields.messageLabel;
    v37 = v34 >= 0 ? v34 : v34 + 1;
    if ( !transform )
      goto LABEL_57;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_57;
    v48.fields.x = localPosition.fields.x;
    v48.fields.z = localPosition.fields.z;
    v38 = (float)(v37 >> 1);
    v48.fields.y = localPosition.fields.y + v38;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v48, 0);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform )
      goto LABEL_57;
    v51.fields.r = 0.5;
    v51.fields.a = 1.0;
    if ( isOpen )
      v51.fields.r = 1.0;
    v51.fields.g = v51.fields.r;
    v51.fields.b = v51.fields.r;
    UIWidget__set_color((UIWidget_o *)transform, v51, 0);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform
      || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0
      || (v47 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
          (transform = (System_String_o *)this->fields.titleBase) == 0)
      || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
    {
LABEL_57:
      sub_2213CDC(transform, v17);
    }
    v49.fields.y = v47.fields.y + v38;
    v49.fields.x = v47.fields.x;
    v49.fields.z = v47.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v49, 0);
    newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
    if ( UnityEngine_Object__op_Inequality(newIcon, 0, 0) )
    {
      transform = (System_String_o *)this->fields.newIcon;
      if ( transform )
      {
        ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)transform, isNew, 0);
        return;
      }
      goto LABEL_57;
    }
  }
}


int32_t ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelFontSize(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *messageLabel; // x8

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_2213CDC(this, method);
  return messageLabel->fields.mFontSize;
}


float ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *messageLabel; // x8

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_2213CDC(this, method);
  return (float)messageLabel->fields.mHeight;
}


UnityEngine_Vector3_o ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0

  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0)) == 0 )
  {
    sub_2213CDC(messageLabel, method);
  }
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0);
}