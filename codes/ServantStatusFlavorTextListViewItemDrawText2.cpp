void ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC370B & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C713B0(&StringLiteral_20498/*"img_index_03"*/);
    sub_1C713B0(&StringLiteral_20497/*"img_index_02"*/);
    byte_4CC370B = 1;
  }
  static_fields = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LABEL_HEIGHT_MAX = 0xA800000BB8LL;
  static_fields->TITLE_NAME_LEFT_POS = -88;
  v8 = StringLiteral_20497/*"img_index_02"*/;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20497/*"img_index_02"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_20498/*"img_index_03"*/;
  v10 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v10->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_20498/*"img_index_03"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v10->TITLE_BASE_LONG_SPRITE_NAME, v9, v11, v12, v13, v14, v15, v16);
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
    sub_1C71608(0, method);
  ShiningIconComponent__Set_41298532(newIcon, 0, 0);
}


void ServantStatusFlavorTextListViewItemDrawText2__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *titleName; // x0
  UISprite_o *titleBase; // x19
  UISprite_o *v8; // x21
  float v9; // s0
  UIWidget_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v13; // s8
  float v14; // s8
  UILabel_o *v15; // x19

  if ( (byte_4CC370A & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC370A = 1;
  }
  if ( System_String__IsNullOrEmpty(title, 0) )
  {
    titleName = this->fields.titleName;
    if ( titleName )
    {
      UILabel__set_text(titleName, (System_String_o *)StringLiteral_1/*""*/, 0);
      titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      titleBase = this->fields.titleBase;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( titleBase )
      {
        UISprite__set_spriteName(
          titleBase,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0);
        return;
      }
    }
LABEL_34:
    sub_1C71608(titleName, v5);
  }
  titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v8 = this->fields.titleBase;
  if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  if ( !v8 )
    goto LABEL_34;
  UISprite__set_spriteName(
    v8,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
    0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  UILabel__set_overflowMethod(titleName, 2, 0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  UILabel__set_alignment(titleName, 2, 0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  UILabel__set_text(titleName, title, 0);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))titleName->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleName,
    titleName->klass->vtable._33_MakePixelPerfect.method);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))titleName->klass->vtable._22_get_localSize.methodPtr)(
    titleName,
    titleName->klass->vtable._22_get_localSize.method);
  titleName = this->fields.titleName;
  if ( !titleName )
    goto LABEL_34;
  if ( v9 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    titleName = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleName, 0);
    if ( !titleName )
      goto LABEL_34;
    LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleName, 0);
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    v14 = (float)(1.0 - v13)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0);
    TITLE_NAME_LEFT_POS = v14
                        + (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  else
  {
    UILabel__set_overflowMethod(titleName, 0, 0);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    UILabel__set_alignment(titleName, 1, 0);
    titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    v10 = (UIWidget_o *)this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    if ( !v10 )
      goto LABEL_34;
    UIWidget__set_width(
      v10,
      ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0);
    TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0);
  titleName = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v15 = this->fields.titleName;
  if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  if ( !v15 )
    goto LABEL_34;
  UILabel__SetCondensedScale(
    v15,
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
  bool v18; // w1
  UISprite_o *v19; // x23
  System_String_o *v20; // x0
  UIWidget_o *messageLabel; // x23
  int32_t mHeight; // w28
  ServantStatusFlavorTextListViewItemDrawText2_c *v23; // x0
  UILabel_o *v24; // x24
  UnityEngine_GameObject_o *mainPrefab; // x25
  UnityEngine_GameObject_o *rubyPrefab; // x26
  RubyLabelHelper_o *v27; // x23
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w22
  UnityEngine_Object_o *baseCollider; // x23
  int v31; // w24
  float v32; // s1
  UnityEngine_Object_o *baseSprite; // x22
  int v34; // w22
  float x; // s8
  float v36; // s10
  float z; // s9
  float v38; // s11
  float v39; // s0 OVERLAPPED
  float v40; // s3
  float v41; // s1
  float v42; // s2
  float v43; // s8
  float v44; // s10
  float v45; // s9
  UnityEngine_Object_o *newIcon; // x21
  int32_t v47; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  v47 = profileNum;
  if ( (byte_4CC3709 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&RubyLabelHelper_TypeInfo);
    sub_1C713B0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C713B0(&StringLiteral_20778/*"img_txt_profile"*/);
    byte_4CC3709 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode && this->fields.isFirst )
  {
    this->fields.isFirst = 0;
    titleNumSprite = (UnityEngine_Object_o *)this->fields.titleNumSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (System_String_o *)UnityEngine_Object__op_Inequality(titleNumSprite, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( profileNum >= 1 && this->fields.profileNumMax >= profileNum )
      {
        v19 = this->fields.titleNumSprite;
        v20 = System_Int32__ToString((int32_t)&v47, 0);
        transform = System_String__Concat_64031724((System_String_o *)StringLiteral_20778/*"img_txt_profile"*/, v20, 0);
        if ( !v19 )
          goto LABEL_57;
        UISprite__set_spriteName(v19, transform, 0);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        ((void (__fastcall *)(System_String_o *, void *))transform->klass[1]._1.generic_class)(
          transform,
          transform->klass[1]._1.typeMetadataHandle);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v18 = 1;
      }
      else
      {
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        v18 = 0;
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, v18, 0);
    }
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_57;
    mHeight = messageLabel->fields.mHeight;
    v23 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      v23 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    }
    UIWidget__set_height(messageLabel, v23->static_fields->LABEL_HEIGHT_MAX, 0);
    v24 = this->fields.messageLabel;
    rubyPrefab = this->fields.rubyPrefab;
    mainPrefab = this->fields.mainPrefab;
    v27 = (RubyLabelHelper_o *)sub_1C715FC(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v27, v24, mainPrefab, rubyPrefab, 0);
    if ( !v27 )
      goto LABEL_57;
    RubyLabelHelper__SetText(v27, text, 0);
    Size = RubyLabelHelper__get_Size(v27, 0);
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    if ( Size.fields.y == INFINITY )
      y = 0x80000000;
    else
      y = (int)Size.fields.y;
    UIWidget__set_height((UIWidget_o *)transform, y, 0);
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = y - mHeight;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v48 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0);
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v32 = v48.fields.y + (float)v31;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, v48, 0);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      transform = (System_String_o *)this->fields.baseSprite;
      if ( !transform )
        goto LABEL_57;
      UIWidget__set_height((UIWidget_o *)transform, HIDWORD(transform[7].klass) + v31, 0);
    }
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_57;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = (System_String_o *)this->fields.messageLabel;
    v34 = v31 >= 0 ? v31 : v31 + 1;
    if ( !transform )
      goto LABEL_57;
    x = localPosition.fields.x;
    v36 = localPosition.fields.y;
    z = localPosition.fields.z;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_57;
    v38 = (float)(v34 >> 1);
    v50.fields.y = v36 + v38;
    v50.fields.x = x;
    v50.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v50, 0);
    transform = (System_String_o *)this->fields.titleBase;
    v39 = 0.5;
    if ( isOpen )
      v39 = 1.0;
    if ( !transform )
      goto LABEL_57;
    v40 = 1.0;
    v41 = v39;
    v42 = v39;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)&v39, 0);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform
      || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0
      || (v51 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
          (transform = (System_String_o *)this->fields.titleBase) == 0)
      || (v43 = v51.fields.x,
          v44 = v51.fields.y,
          v45 = v51.fields.z,
          (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0) )
    {
LABEL_57:
      sub_1C71608(transform, v17);
    }
    v52.fields.y = v44 + v38;
    v52.fields.x = v43;
    v52.fields.z = v45;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v52, 0);
    newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(newIcon, 0, 0) )
    {
      transform = (System_String_o *)this->fields.newIcon;
      if ( transform )
      {
        ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)transform, isNew, 0);
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
    sub_1C71608(this, method);
  return messageLabel->fields.mFontSize;
}


float ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *messageLabel; // x8

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1C71608(this, method);
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
    sub_1C71608(messageLabel, method);
  }
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0);
}