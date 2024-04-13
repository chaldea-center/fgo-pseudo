void __fastcall ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ServantStatusFlavorTextListViewItemDrawText2_c *v14; // x8
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  System_Int32_array **v16; // x1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42ED300 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19749/*"img_index_03"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19748/*"img_index_02"*/, v11, v12, v13);
    byte_42ED300 = 1;
  }
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->LABEL_HEIGHT_MAX = 3000;
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH = 168;
  v14 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS = -88;
  static_fields = v14->static_fields;
  v16 = (System_Int32_array **)StringLiteral_19748/*"img_index_02"*/;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19748/*"img_index_02"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v16, v2, v3, v4, v5, v6, v7);
  v17 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19749/*"img_index_03"*/;
  v17->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_19749/*"img_index_03"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v17->TITLE_BASE_LONG_SPRITE_NAME, v18, v19, v20, v21, v22, v23, v24);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  UILabel_o *rubyPrefab; // x0
  UISprite_o *titleNumSprite; // x19
  UISprite_o *v12; // x21
  float v13; // s0
  struct UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v17; // s8
  float v18; // s8
  struct UnityEngine_GameObject_o *v19; // x19

  if ( (byte_42ED2FF & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, (_DWORD)title, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42ED2FF = 1;
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
    sub_B5D69C(rubyPrefab, v9);
  }
  v12 = this->fields.titleNumSprite;
  rubyPrefab = (UILabel_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  }
  if ( !v12 )
    goto LABEL_39;
  UISprite__set_spriteName(
    v12,
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
  if ( v13 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    rubyPrefab = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)rubyPrefab, 0LL);
    if ( !rubyPrefab )
      goto LABEL_39;
    LODWORD(v17) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rubyPrefab, 0LL);
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    }
    rubyPrefab = (UILabel_o *)this->fields.rubyPrefab;
    if ( !rubyPrefab )
      goto LABEL_39;
    v18 = (float)(1.0 - v17)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rubyPrefab, 0LL);
    TITLE_NAME_LEFT_POS = v18
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
    v14 = this->fields.rubyPrefab;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    }
    if ( !v14 )
      goto LABEL_39;
    UIWidget__set_width(
      (UIWidget_o *)v14,
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
  v19 = this->fields.rubyPrefab;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_39;
  UILabel__SetCondensedScale(
    (UILabel_o *)v19,
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
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *transform; // x0
  __int64 v26; // x1
  bool v27; // w1
  struct UILabel_o *v28; // x23
  System_String_o *v29; // x0
  UIWidget_o *newIcon; // x23
  int32_t mHeight; // w28
  ServantStatusFlavorTextListViewItemDrawText2_c *v32; // x0
  struct ShiningIconComponent_o *v33; // x24
  UnityEngine_GameObject_o *mainPrefab; // x25
  UnityEngine_GameObject_o *v35; // x26
  RubyLabelHelper_o *v36; // x23
  UnityEngine_Vector2_o Size; // kr00_8
  double y; // d0
  int v39; // w22
  UnityEngine_Object_o *baseSprite; // x23
  int v41; // w24
  int v42; // s0
  float v43; // s1
  float v45; // s1
  UnityEngine_Object_o *titleBase; // x22
  float v47; // s0
  float v48; // s1
  float v49; // s2
  int v50; // w22
  float v51; // s8
  float v52; // s10
  float v53; // s9
  float v54; // s11
  UIWidget_o *titleNumSprite; // x22
  int v56; // s0
  float v60; // s0
  float v61; // s1
  float v62; // s2
  float v63; // s8
  float v64; // s10
  float v65; // s9
  UnityEngine_Object_o *v66; // x21
  int32_t v67; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  v67 = profileNum;
  if ( (byte_42ED2FE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, isOpen, isNew);
    sub_B5D5C4(&RubyLabelHelper_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_19977/*"img_txt_profile"*/, v21, v22, v23);
    byte_42ED2FE = 1;
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
      v28 = this->fields.messageLabel;
      v29 = System_Int32__ToString((int32_t)&v67, 0LL);
      transform = System_String__Concat_44577788((System_String_o *)StringLiteral_19977/*"img_txt_profile"*/, v29, 0LL);
      if ( !v28 )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)v28, transform, 0LL);
      transform = (System_String_o *)this->fields.messageLabel;
      if ( !transform )
        goto LABEL_63;
      ((void (__fastcall *)(System_String_o *, void *))transform->klass[1]._1.typeMetadataHandle)(
        transform,
        transform->klass[1]._1.interopData);
      transform = (System_String_o *)this->fields.messageLabel;
      if ( !transform )
        goto LABEL_63;
      v27 = 1;
    }
    else
    {
      transform = (System_String_o *)this->fields.messageLabel;
      if ( !transform )
        goto LABEL_63;
      v27 = 0;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, v27, 0LL);
  }
  newIcon = (UIWidget_o *)this->fields.newIcon;
  if ( !newIcon )
    goto LABEL_63;
  mHeight = newIcon->fields.mHeight;
  v32 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    v32 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  }
  UIWidget__set_height(newIcon, v32->static_fields->LABEL_HEIGHT_MAX, 0LL);
  v33 = this->fields.newIcon;
  mainPrefab = this->fields.mainPrefab;
  v35 = *(UnityEngine_GameObject_o **)&this->fields.isFirst;
  v36 = (RubyLabelHelper_o *)sub_B5D694(RubyLabelHelper_TypeInfo);
  RubyLabelHelper___ctor(v36, (UILabel_o *)v33, v35, mainPrefab, 0LL);
  if ( !v36 )
    goto LABEL_63;
  RubyLabelHelper__SetText(v36, text, 0LL);
  Size = RubyLabelHelper__get_Size(v36, 0LL);
  transform = (System_String_o *)this->fields.newIcon;
  if ( !transform )
    goto LABEL_63;
  if ( Size.fields.y == INFINITY )
    y = -Size.fields.y;
  else
    y = Size.fields.y;
  v39 = (int)y;
  UIWidget__set_height((UIWidget_o *)transform, (int)y, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v41 = v39 - mHeight;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    transform = (System_String_o *)this->fields.baseSprite;
    if ( !transform )
      goto LABEL_63;
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transform, 0LL);
    transform = (System_String_o *)this->fields.baseSprite;
    if ( !transform )
      goto LABEL_63;
    v45 = v43 + (float)v41;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
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
    UIWidget__set_height((UIWidget_o *)transform, *(_DWORD *)&transform[6].fields.m_firstChar + v41, 0LL);
  }
  transform = (System_String_o *)this->fields.newIcon;
  if ( !transform )
    goto LABEL_63;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_63;
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (System_String_o *)this->fields.newIcon;
  v50 = v41 >= 0 ? v41 : v41 + 1;
  if ( !transform )
    goto LABEL_63;
  v51 = v47;
  v52 = v48;
  v53 = v49;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_63;
  v54 = (float)(v50 >> 1);
  v68.fields.y = v52 + v54;
  v68.fields.x = v51;
  v68.fields.z = v53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v68, 0LL);
  titleNumSprite = (UIWidget_o *)this->fields.titleNumSprite;
  if ( isOpen )
  {
    *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_white(0LL);
    if ( !titleNumSprite )
      goto LABEL_63;
  }
  else
  {
    *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_gray(0LL);
    if ( !titleNumSprite )
      goto LABEL_63;
  }
  UIWidget__set_color(titleNumSprite, *(UnityEngine_Color_o *)&v56, 0LL);
  transform = (System_String_o *)this->fields.titleNumSprite;
  if ( !transform
    || (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v60 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (System_String_o *)this->fields.titleNumSprite) == 0LL)
    || (v63 = v60,
        v64 = v61,
        v65 = v62,
        (transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL) )
  {
LABEL_63:
    sub_B5D69C(transform, v26);
  }
  v69.fields.y = v64 + v54;
  v69.fields.x = v63;
  v69.fields.z = v65;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v69, 0LL);
  v66 = *(UnityEngine_Object_o **)&this->fields.profileNumMax;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
  {
    transform = *(System_String_o **)&this->fields.profileNumMax;
    if ( !transform )
      goto LABEL_63;
    ShiningIconComponent__Set_33897340((ShiningIconComponent_o *)transform, isNew, 0LL);
  }
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelFontSize(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct ShiningIconComponent_o *newIcon; // x8

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_B5D69C(this, method);
  return (int32_t)newIcon[13].klass;
}


float __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct ShiningIconComponent_o *newIcon; // x8

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_B5D69C(this, method);
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
    sub_B5D69C(newIcon, method);
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)newIcon, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}