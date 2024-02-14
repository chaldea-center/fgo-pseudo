void __fastcall ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  ServantStatusFlavorTextListViewItemDrawText2_c *v10; // x8
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4219D0A & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19564/*"img_index_03"*/, v8);
    sub_B0D8A4(&StringLiteral_19563/*"img_index_02"*/, v9);
    byte_4219D0A = 1;
  }
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->LABEL_HEIGHT_MAX = 3000;
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH = 168;
  v10 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS = -88;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19563/*"img_index_02"*/;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19563/*"img_index_02"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v12, v2, v3, v4, v5, v6, v7);
  v13 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19564/*"img_index_03"*/;
  v13->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_19564/*"img_index_03"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->TITLE_BASE_LONG_SPRITE_NAME, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2___ctor(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
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


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *rubyPrefab; // x0
  UISprite_o *titleNumSprite; // x19
  UISprite_o *v8; // x21
  float v9; // s0
  struct UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v13; // s8
  float v14; // s8
  struct UnityEngine_GameObject_o *v15; // x19

  if ( (byte_4219D09 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4219D09 = 1;
  }
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
    if ( rubyPrefab )
    {
      UILabel__set_text(rubyPrefab, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      titleNumSprite = this->fields.titleNumSprite;
      rubyPrefab = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( titleNumSprite )
      {
        UISprite__set_spriteName(
          titleNumSprite,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
    }
LABEL_39:
    sub_B0D97C(rubyPrefab);
  }
  v8 = this->fields.titleNumSprite;
  rubyPrefab = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  }
  if ( !v8 )
    goto LABEL_39;
  UISprite__set_spriteName(
    v8,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
    0LL);
  rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
  if ( !rubyPrefab )
    goto LABEL_39;
  UILabel__set_overflowMethod(rubyPrefab, 2, 0LL);
  rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
  if ( !rubyPrefab )
    goto LABEL_39;
  UILabel__set_alignment(rubyPrefab, 2, 0LL);
  rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
  if ( !rubyPrefab )
    goto LABEL_39;
  UILabel__set_text(rubyPrefab, title, 0LL);
  rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
  if ( !rubyPrefab )
    goto LABEL_39;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))rubyPrefab->klass->vtable._33_MakePixelPerfect.method)(
    rubyPrefab,
    rubyPrefab->klass->vtable._34_get_minWidth.methodPtr);
  rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
  if ( !rubyPrefab )
    goto LABEL_39;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))rubyPrefab->klass->vtable._22_get_localSize.method)(
    rubyPrefab,
    rubyPrefab->klass->vtable._23_get_drawingDimensions.methodPtr);
  rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
  if ( !rubyPrefab )
    goto LABEL_39;
  if ( v9 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    rubyPrefab = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)rubyPrefab, 0LL);
    if ( !rubyPrefab )
      goto LABEL_39;
    LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rubyPrefab, 0LL);
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    }
    rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
    if ( !rubyPrefab )
      goto LABEL_39;
    v14 = (float)(1.0 - v13)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rubyPrefab, 0LL);
    TITLE_NAME_LEFT_POS = v14
                        + (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  else
  {
    UILabel__set_overflowMethod(rubyPrefab, 0, 0LL);
    rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
    if ( !rubyPrefab )
      goto LABEL_39;
    UILabel__set_alignment(rubyPrefab, 1, 0LL);
    rubyPrefab = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
    v10 = this->fields.rubyPrefab;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    }
    if ( !v10 )
      goto LABEL_39;
    UIWidget__set_width(
      (UIWidget_o *)v10,
      ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0LL);
    rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
    if ( !rubyPrefab )
      goto LABEL_39;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rubyPrefab, 0LL);
    TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
  rubyPrefab = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  v15 = this->fields.rubyPrefab;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  }
  if ( !v15 )
    goto LABEL_39;
  UILabel__SetCondensedScale(
    (UILabel_o *)v15,
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
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *transform; // x0
  bool v20; // w1
  struct UILabel_o *v21; // x23
  System_String_o *v22; // x0
  UIWidget_o *newIcon; // x23
  int32_t mHeight; // w28
  ServantStatusFlavorTextListViewItemDrawText2_c *v25; // x0
  struct ShiningIconComponent_o *v26; // x24
  UnityEngine_GameObject_o *mainPrefab; // x25
  UnityEngine_GameObject_o *v28; // x26
  __int64 v29; // x1
  __int64 v30; // x2
  RubyLabelHelper_o *v31; // x23
  UnityEngine_Vector2_o Size; // kr00_8
  double y; // d0
  int v34; // w22
  UnityEngine_Object_o *baseSprite; // x23
  int v36; // w24
  int v37; // s0
  float v38; // s1
  float v40; // s1
  UnityEngine_Object_o *titleBase; // x22
  float v42; // s0
  float v43; // s1
  float v44; // s2
  int v45; // w22
  float v46; // s8
  float v47; // s10
  float v48; // s9
  float v49; // s11
  UIWidget_o *titleNumSprite; // x22
  int v51; // s0
  float v55; // s0
  float v56; // s1
  float v57; // s2
  float v58; // s8
  float v59; // s10
  float v60; // s9
  UnityEngine_Object_o *v61; // x21
  int32_t v62; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  v62 = profileNum;
  if ( (byte_4219D08 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    sub_B0D8A4(&RubyLabelHelper_TypeInfo, v15);
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_19790/*"img_txt_profile"*/, v17);
    byte_4219D08 = 1;
  }
  LODWORD(this->fields.baseCollider) = mode;
  if ( !item || !mode || !LOBYTE(this[1].klass) )
    return;
  LOBYTE(this[1].klass) = 0;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_String_o *)UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( profileNum >= 1 && SLODWORD(this->fields.titleName) >= profileNum )
    {
      v21 = this->fields.messageLabel;
      v22 = System_Int32__ToString((int32_t)&v62, 0LL);
      transform = System_String__Concat_43849904((System_String_o *)StringLiteral_19790/*"img_txt_profile"*/, v22, 0LL);
      if ( !v21 )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)v21, transform, 0LL);
      transform = (System_String_o *)this->fields.messageLabel;
      if ( !transform )
        goto LABEL_63;
      ((void (__fastcall *)(System_String_o *, void *))transform->klass[1]._1.typeMetadataHandle)(
        transform,
        transform->klass[1]._1.interopData);
      transform = (System_String_o *)this->fields.messageLabel;
      if ( !transform )
        goto LABEL_63;
      v20 = 1;
    }
    else
    {
      transform = (System_String_o *)this->fields.messageLabel;
      if ( !transform )
        goto LABEL_63;
      v20 = 0;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, v20, 0LL);
  }
  newIcon = (UIWidget_o *)this->fields.newIcon;
  if ( !newIcon )
    goto LABEL_63;
  mHeight = newIcon->fields.mHeight;
  v25 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    v25 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  }
  UIWidget__set_height(newIcon, v25->static_fields->LABEL_HEIGHT_MAX, 0LL);
  v26 = this->fields.newIcon;
  mainPrefab = this->fields.mainPrefab;
  v28 = *(UnityEngine_GameObject_o **)&this->fields.isFirst;
  v31 = (RubyLabelHelper_o *)sub_B0D974(RubyLabelHelper_TypeInfo, v29, v30);
  RubyLabelHelper___ctor(v31, (UILabel_o *)v26, v28, mainPrefab, 0LL);
  if ( !v31 )
    goto LABEL_63;
  RubyLabelHelper__SetText(v31, text, 0LL);
  Size = RubyLabelHelper__get_Size(v31, 0LL);
  transform = (System_String_o *)this->fields.newIcon;
  if ( !transform )
    goto LABEL_63;
  if ( Size.fields.y == INFINITY )
    y = -Size.fields.y;
  else
    y = Size.fields.y;
  v34 = (int)y;
  UIWidget__set_height((UIWidget_o *)transform, (int)y, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = v34 - mHeight;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    transform = (System_String_o *)this->fields.baseSprite;
    if ( !transform )
      goto LABEL_63;
    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0LL);
    transform = (System_String_o *)this->fields.baseSprite;
    if ( !transform )
      goto LABEL_63;
    v40 = v38 + (float)v36;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
  }
  titleBase = (UnityEngine_Object_o *)this->fields.titleBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleBase, 0LL, 0LL) )
  {
    transform = (System_String_o *)this->fields.titleBase;
    if ( !transform )
      goto LABEL_63;
    UIWidget__set_height((UIWidget_o *)transform, *(_DWORD *)&transform[6].fields.m_firstChar + v36, 0LL);
  }
  transform = (System_String_o *)this->fields.newIcon;
  if ( !transform )
    goto LABEL_63;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_63;
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (System_String_o *)this->fields.newIcon;
  v45 = v36 >= 0 ? v36 : v36 + 1;
  if ( !transform )
    goto LABEL_63;
  v46 = v42;
  v47 = v43;
  v48 = v44;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_63;
  v49 = (float)(v45 >> 1);
  v63.fields.y = v47 + v49;
  v63.fields.x = v46;
  v63.fields.z = v48;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v63, 0LL);
  titleNumSprite = (UIWidget_o *)this->fields.titleNumSprite;
  if ( isOpen )
  {
    *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_white(0LL);
    if ( !titleNumSprite )
      goto LABEL_63;
  }
  else
  {
    *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_gray(0LL);
    if ( !titleNumSprite )
      goto LABEL_63;
  }
  UIWidget__set_color(titleNumSprite, *(UnityEngine_Color_o *)&v51, 0LL);
  transform = (System_String_o *)this->fields.titleNumSprite;
  if ( !transform
    || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v55 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (System_String_o *)this->fields.titleNumSprite) == 0LL)
    || (v58 = v55,
        v59 = v56,
        v60 = v57,
        (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
  {
LABEL_63:
    sub_B0D97C(transform);
  }
  v64.fields.y = v59 + v49;
  v64.fields.x = v58;
  v64.fields.z = v60;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v64, 0LL);
  v61 = *(UnityEngine_Object_o **)&this->fields.profileNumMax;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
  {
    transform = *(System_String_o **)&this->fields.profileNumMax;
    if ( !transform )
      goto LABEL_63;
    ShiningIconComponent__Set_32504684((ShiningIconComponent_o *)transform, isNew, 0LL);
  }
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelFontSize(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct ShiningIconComponent_o *newIcon; // x8

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_B0D97C(this);
  return (int32_t)newIcon[13].klass;
}


float __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct ShiningIconComponent_o *newIcon; // x8

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_B0D97C(this);
  return (float)SHIDWORD(newIcon[5].klass);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *newIcon; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  newIcon = (UnityEngine_Component_o *)this->fields.newIcon;
  if ( !newIcon || (newIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(newIcon, 0LL)) == 0LL )
    sub_B0D97C(newIcon);
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)newIcon, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}