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
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w22
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *baseCollider; // x23
  int v34; // w24
  __int64 v35; // x2
  float v36; // s1
  UnityEngine_Object_o *baseSprite; // x22
  int v38; // w22
  float x; // s8
  float v40; // s10
  float z; // s9
  float v42; // s11
  float v43; // s0 OVERLAPPED
  float v44; // s3
  float v45; // s1
  float v46; // s2
  float v47; // s8
  float v48; // s10
  float v49; // s9
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Object_o *newIcon; // x21
  int32_t v53; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  v53 = profileNum;
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
        v21 = System_Int32__ToString((int32_t)&v53, 0);
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
      v54 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0);
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v36 = v54.fields.y + (float)v34;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, v54, 0);
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
    v38 = v34 >= 0 ? v34 : v34 + 1;
    if ( !transform )
      goto LABEL_57;
    x = localPosition.fields.x;
    v40 = localPosition.fields.y;
    z = localPosition.fields.z;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_57;
    v56.fields.x = x;
    v56.fields.z = z;
    v42 = (float)(v38 >> 1);
    v56.fields.y = v40 + v42;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v56, 0);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform )
      goto LABEL_57;
    v43 = 0.5;
    v44 = 1.0;
    if ( isOpen )
      v43 = 1.0;
    v45 = v43;
    v46 = v43;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)&v43, 0);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform
      || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0
      || (v57 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
          (transform = (System_String_o *)this->fields.titleBase) == 0)
      || (v47 = v57.fields.x,
          v48 = v57.fields.y,
          v49 = v57.fields.z,
          (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0) )
    {
LABEL_57:
      sub_2213CDC(transform, v17);
    }
    v58.fields.y = v48 + v42;
    v58.fields.x = v47;
    v58.fields.z = v49;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v58, 0);
    newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50, v51);
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