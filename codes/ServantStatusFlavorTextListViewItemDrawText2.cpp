void __fastcall ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  int64_t v8; // x1
  int64_t v9; // x1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BD8CE8 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C21E38(&StringLiteral_20691/*"img_index_03"*/);
    sub_1C21E38(&StringLiteral_20690/*"img_index_02"*/);
    byte_4BD8CE8 = 1;
  }
  static_fields = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LABEL_HEIGHT_MAX = 0xA800000BB8LL;
  static_fields->TITLE_NAME_LEFT_POS = -88;
  v8 = StringLiteral_20690/*"img_index_02"*/;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20690/*"img_index_02"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_20691/*"img_index_03"*/;
  v10 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v10->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_20691/*"img_index_03"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->TITLE_BASE_LONG_SPRITE_NAME, v9, v11, v12, v13, v14, v15, v16);
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
    sub_1C22094(0LL, method);
  ShiningIconComponent__Set_39478664(newIcon, 0, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetCondTitle(
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

  if ( (byte_4BD8CE7 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8CE7 = 1;
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
    sub_1C22094(titleName, v5);
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
  if ( v9 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    titleName = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleName, 0LL);
    if ( !titleName )
      goto LABEL_34;
    LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleName, 0LL);
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    titleName = this->fields.titleName;
    if ( !titleName )
      goto LABEL_34;
    v14 = (float)(1.0 - v13)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
    TITLE_NAME_LEFT_POS = v14
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
    v10 = (UIWidget_o *)this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    if ( !v10 )
      goto LABEL_34;
    UIWidget__set_width(
      v10,
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
  v15 = this->fields.titleName;
  if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  if ( !v15 )
    goto LABEL_34;
  UILabel__SetCondensedScale(
    v15,
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
  int v32; // s0
  float v33; // s1
  float v35; // s1
  UnityEngine_Object_o *baseSprite; // x22
  float v37; // s0
  float v38; // s1
  float v39; // s2
  int v40; // w22
  float v41; // s8
  float v42; // s10
  float v43; // s9
  float v44; // s11
  float v45; // s0
  float v46; // s3
  float v47; // s1
  float v48; // s2
  float v49; // s0
  float v50; // s1
  float v51; // s2
  float v52; // s8
  float v53; // s10
  float v54; // s9
  UnityEngine_Object_o *newIcon; // x21
  int32_t v56; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  v56 = profileNum;
  if ( (byte_4BD8CE6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&RubyLabelHelper_TypeInfo);
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C21E38(&StringLiteral_20942/*"img_txt_profile"*/);
    byte_4BD8CE6 = 1;
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
        v19 = this->fields.titleNumSprite;
        v20 = System_Int32__ToString((int32_t)&v56, 0LL);
        transform = System_String__Concat_63115476((System_String_o *)StringLiteral_20942/*"img_txt_profile"*/, v20, 0LL);
        if ( !v19 )
          goto LABEL_57;
        UISprite__set_spriteName(v19, transform, 0LL);
        transform = (System_String_o *)this->fields.titleNumSprite;
        if ( !transform )
          goto LABEL_57;
        ((void (__fastcall *)(System_String_o *, void *))transform->klass[1]._1.typeMetadataHandle)(
          transform,
          transform->klass[1]._1.interopData);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, v18, 0LL);
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
    UIWidget__set_height(messageLabel, v23->static_fields->LABEL_HEIGHT_MAX, 0LL);
    v24 = this->fields.messageLabel;
    rubyPrefab = this->fields.rubyPrefab;
    mainPrefab = this->fields.mainPrefab;
    v27 = (RubyLabelHelper_o *)sub_1C22084(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v27, v24, mainPrefab, rubyPrefab, 0LL);
    if ( !v27 )
      goto LABEL_57;
    RubyLabelHelper__SetText(v27, text, 0LL);
    Size = RubyLabelHelper__get_Size(v27, 0LL);
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
    v31 = y - mHeight;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0LL);
      transform = (System_String_o *)this->fields.baseCollider;
      if ( !transform )
        goto LABEL_57;
      v35 = v33 + (float)v31;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.baseSprite;
      if ( !transform )
        goto LABEL_57;
      UIWidget__set_height((UIWidget_o *)transform, HIDWORD(transform[7].klass) + v31, 0LL);
    }
    transform = (System_String_o *)this->fields.messageLabel;
    if ( !transform )
      goto LABEL_57;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_57;
    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (System_String_o *)this->fields.messageLabel;
    v40 = v31 >= 0 ? v31 : v31 + 1;
    if ( !transform )
      goto LABEL_57;
    v41 = v37;
    v42 = v38;
    v43 = v39;
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_57;
    v44 = (float)(v40 >> 1);
    v57.fields.y = v42 + v44;
    v57.fields.x = v41;
    v57.fields.z = v43;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v57, 0LL);
    transform = (System_String_o *)this->fields.titleBase;
    v45 = 0.5;
    if ( isOpen )
      v45 = 1.0;
    if ( !transform )
      goto LABEL_57;
    v46 = 1.0;
    v47 = v45;
    v48 = v45;
    UIWidget__set_color((UIWidget_o *)transform, *(UnityEngine_Color_o *)&v45, 0LL);
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform
      || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)&v49 = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL),
          (transform = (System_String_o *)this->fields.titleBase) == 0LL)
      || (v52 = v49,
          v53 = v50,
          v54 = v51,
          (transform = (System_String_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)transform,
                                            0LL)) == 0LL) )
    {
LABEL_57:
      sub_1C22094(transform, v17);
    }
    v58.fields.y = v53 + v44;
    v58.fields.x = v52;
    v58.fields.z = v54;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v58, 0LL);
    newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
    {
      transform = (System_String_o *)this->fields.newIcon;
      if ( transform )
      {
        ShiningIconComponent__Set_39478664((ShiningIconComponent_o *)transform, isNew, 0LL);
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
    sub_1C22094(this, method);
  return messageLabel->fields.mFontSize;
}


float __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *messageLabel; // x8

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1C22094(this, method);
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
    sub_1C22094(messageLabel, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}