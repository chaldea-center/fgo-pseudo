void UIIconLabel___cctor(const MethodInfo *method)
{
  if ( (byte_5937C11 & 1) == 0 )
  {
    sub_21FFC50(&UIIconLabel_TypeInfo);
    byte_5937C11 = 1;
  }
  *UIIconLabel_TypeInfo->static_fields = (struct UIIconLabel_StaticFields)xmmword_E93E80;
}


void UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_5937C0A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937C0A = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UISprite__set_spriteName((UISprite_o *)textLabel, 0, 0);
      return;
    }
LABEL_15:
    sub_21FFECC(textLabel, method);
  }
}


int32_t UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_21FFECC(this, method);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0
  float x; // s0
  float y; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5937C0E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937C0E = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_21FFECC(0, v4);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._22_get_localSize.methodPtr)(
      v5,
      v5->klass->vtable._22_get_localSize.method);
  }
  else
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      byte_5931820 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
  }
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Color_o UIIconLabel__GetPurchaseDecisionColor(
        UIIconLabel_o *this,
        int32_t dispData,
        int32_t compareData,
        int32_t iconKind,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s1
  float v7; // s3
  float v9; // s1
  float v10; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = 0.5;
  v6 = 1.0;
  v7 = 1.0;
  if ( iconKind == 28 && compareData < 0 )
    v6 = 0.5;
  if ( compareData < 0 || dispData <= compareData )
    v5 = v6;
  v9 = v5;
  v10 = v5;
  result.fields.a = v7;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v5;
  return result;
}


UnityEngine_Color_o UIIconLabel__GetPurchaseDecisionColor_48065904(
        UIIconLabel_o *this,
        int32_t dispData,
        int64_t compareData,
        int32_t iconKind,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s1
  float v7; // s3
  float v9; // s1
  float v10; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = 0.5;
  v6 = 1.0;
  v7 = 1.0;
  if ( iconKind == 28 && compareData < 0 )
    v6 = 0.5;
  if ( compareData < 0 || dispData <= compareData )
    v5 = v6;
  v9 = v5;
  v10 = v5;
  result.fields.a = v7;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v5;
  return result;
}


UnityEngine_Vector2Int_o UIIconLabel__GetTextLabelSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_21FFECC(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_48040364(
      this,
      info->fields.iconKind,
      info->fields.data,
      info->fields.adjustData,
      info->fields.equipData,
      info->fields.time,
      info->fields.isHide,
      info->fields.isMaxHide,
      info->fields.lv,
      info->fields.actualRarity,
      v3);
  else
    UIIconLabel__Clear(this, 0);
}


void UIIconLabel__SetAdjustLong(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t data,
        int64_t adjustData,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  __int64 v9; // x1
  float v10; // s8
  System_String_o *v11; // x22
  System_String_o *NumberFormat_48211828; // x20
  float v13; // s9
  float v14; // s10
  System_String_o *v15; // x23
  Il2CppObject *v16; // x0
  char v17; // w27
  float v18; // s11
  int32_t v19; // w23
  bool v20; // cc
  UILabel_o *textLabel; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *extentionTextLabel; // x24
  UnityEngine_Object_o *iconSprite; // x22
  __int64 v25; // x1
  UISprite_o *v26; // x21
  UISprite_o *v27; // x21
  UnityEngine_Object_o *v28; // x21
  __int64 v29; // x1
  UnityEngine_Object_o *transform; // x22
  float v31; // s0
  float v32; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v35; // x8
  int32_t mAlignment; // w9
  int32_t blankSize; // w8
  float v38; // s0
  float v39; // s10
  int32_t v40; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v40 = data;
  if ( (byte_5937C0C & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11269/*"QP_UNIT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937C0C = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v40, 0);
  v10 = 1.0;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  NumberFormat_48211828 = v8;
  if ( adjustData <= 0 )
    v13 = 1.0;
  else
    v13 = 0.015686;
  if ( adjustData <= 0 )
    v14 = 1.0;
  else
    v14 = 0.92157;
  if ( iconKind == 24 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v18 = 1.0;
    NumberFormat_48211828 = LocalizationManager__GetNumberFormat_48211828(NumberFormat_48211828, 0);
    v17 = 0;
    v20 = v40 <= adjustData || adjustData <= -1;
    v19 = 5;
    if ( v20 )
      v10 = 1.0;
    else
      v10 = 0.5;
    v14 = v10;
    v13 = v10;
  }
  else if ( iconKind == 14 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11269/*"QP_UNIT"*/, 0);
    v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(NumberFormat_48211828, 0);
    NumberFormat_48211828 = System_String__Format(v15, v16, 0);
    v17 = 0;
    v18 = 1.0;
    v19 = 5;
  }
  else
  {
    v19 = 0;
    v18 = 1.0;
    v17 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_69;
  UILabel__set_text(textLabel, NumberFormat_48211828, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_69;
  v43.fields.r = v10;
  v43.fields.g = v14;
  v43.fields.b = v13;
  v43.fields.a = v18;
  UIWidget__set_color((UIWidget_o *)textLabel, v43, 0);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_69;
    UILabel__set_text(textLabel, v11, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_69;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, iconKind != 56, 0);
    if ( (v17 & 1) != 0 )
    {
      v26 = this->fields.iconSprite;
      if ( this->fields.isCustmAtlas )
        this->fields.isCustmAtlas = 0;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
      AtlasManager__SetCommon(v26, 0);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_69;
      UISprite__set_spriteName((UISprite_o *)textLabel, 0, 0);
    }
    else
    {
      v27 = this->fields.iconSprite;
      this->fields.isCustmAtlas = 1;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
      AtlasManager__SetItem(v27, v19, 0);
    }
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_69;
    textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_69;
    textLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)textLabel, 0);
    if ( !this->fields.textLabel )
      goto LABEL_69;
    v28 = (UnityEngine_Object_o *)textLabel;
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.textLabel,
                                          0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Equality(v28, transform, 0) )
    {
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_69;
      LODWORD(v31) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_69;
      v32 = v31;
      textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
      if ( !textLabel )
        goto LABEL_69;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0);
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      textLabel = (UILabel_o *)System_String__op_Equality(NumberFormat_48211828, (System_String_o *)StringLiteral_1/*""*/, 0);
      v35 = this->fields.textLabel;
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        if ( !v35 )
          goto LABEL_69;
        v32 = v32 - (float)v35->fields.mSpacingX;
      }
      else if ( !v35 )
      {
        goto LABEL_69;
      }
      mAlignment = v35->fields.mAlignment;
      blankSize = this->fields.blankSize;
      if ( mAlignment == 2 )
      {
        v38 = (float)(v32 * 0.5) + (float)blankSize;
      }
      else
      {
        if ( mAlignment != 3 )
        {
          v39 = (float)-blankSize;
          goto LABEL_65;
        }
        v38 = v32 + (float)blankSize;
      }
      v39 = -v38;
LABEL_65:
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( textLabel )
      {
        textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
        if ( textLabel )
        {
          v42.fields.x = v39;
          v42.fields.y = y;
          v42.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v42, 0);
          return;
        }
      }
LABEL_69:
      sub_21FFECC(textLabel, v9);
    }
  }
}


void UIIconLabel__SetAlpha(UIIconLabel_o *this, float alpha, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937C0F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937C0F = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  v9.fields.a = alpha;
  v9.fields.r = textLabel->fields.mColor.fields.r;
  v9.fields.g = textLabel->fields.mColor.fields.g;
  v9.fields.b = textLabel->fields.mColor.fields.b;
  UIWidget__set_color(textLabel, v9, 0);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
  {
    textLabel = (UIWidget_o *)this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    v10.fields.a = alpha;
    v10.fields.r = textLabel->fields.mColor.fields.r;
    v10.fields.g = textLabel->fields.mColor.fields.g;
    v10.fields.b = textLabel->fields.mColor.fields.b;
    UIWidget__set_color(textLabel, v10, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UIWidget_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      v11.fields.r = textLabel->fields.mColor.fields.r;
      v11.fields.g = textLabel->fields.mColor.fields.g;
      v11.fields.a = alpha;
      v11.fields.b = textLabel->fields.mColor.fields.b;
      UIWidget__set_color(textLabel, v11, 0);
      return;
    }
LABEL_15:
    sub_21FFECC(textLabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIIconLabel__SetCombineResTxt(
        UIIconLabel_o *this,
        int32_t data,
        int32_t adjustData,
        bool isLimit,
        const MethodInfo *method)
{
  Il2CppObject *NumberFormat; // x22
  System_String_o *v10; // x0
  __int64 v11; // x1
  bool v12; // zf
  UILabel_o *textLabel; // x19
  System_String_o **v14; // x9
  Il2CppObject *v15; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1

  if ( (byte_5937C0D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3750/*"COMBINE_RES_INFO"*/);
    sub_21FFC50(&StringLiteral_3740/*"COMBINE_LIMIT_INFO"*/);
    byte_5937C0D = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&data);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0);
  v10 = LocalizationManager__GetNumberFormat(adjustData, 0);
  v12 = !isLimit;
  textLabel = this->fields.textLabel;
  if ( v12 )
    v14 = (System_String_o **)&StringLiteral_3750/*"COMBINE_RES_INFO"*/;
  else
    v14 = (System_String_o **)&StringLiteral_3740/*"COMBINE_LIMIT_INFO"*/;
  v15 = (Il2CppObject *)v10;
  v16 = *v14;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v17 = LocalizationManager__Get(v16, 0);
  v18 = System_String__Format_75484576(v17, NumberFormat, v15, 0);
  if ( !textLabel )
    sub_21FFECC(v18, v19);
  UILabel__set_text(textLabel, v18, 0);
}


void UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_48040364(this, 27, 0, 0, 0, 0, 1, 0, 0, 0, v2);
}


void UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_48040364(this, iconKind, price, holdCount, 0, 0, 0, 0, 0, 0, v5);
}


// attributes: thunk
void UIIconLabel__SetPurchaseDecisionLong(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int64_t holdCount,
        const MethodInfo *method)
{
  UIIconLabel__SetAdjustLong(this, iconKind, price, holdCount, method);
}


void UIIconLabel__SetTextLabelBitmapFont(UIIconLabel_o *this, UIFont_o *bitmapFont, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_21FFECC(0, bitmapFont);
  UILabel__set_bitmapFont(textLabel, bitmapFont, 0);
}


void UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))textLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
    textLabel,
    textLabel->klass->vtable._33_MakePixelPerfect.method);
}


void UIIconLabel__SetTextLabelSize(UIIconLabel_o *this, UnityEngine_Vector2Int_o size, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  int32_t m_Y; // x19^4

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel
    || (m_Y = size.fields.m_Y,
        UIWidget__set_width(textLabel, size.fields.m_X, 0),
        (textLabel = (UIWidget_o *)this->fields.textLabel) == 0) )
  {
    sub_21FFECC(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0);
}


void UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  UILabel_o *textLabel; // x19
  System_String_o *v4; // x1

  v2 = this;
  if ( (byte_5937C10 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16426/*"[/s]"*/);
    this = (UIIconLabel_o *)sub_21FFC50(&StringLiteral_16602/*"[s]"*/);
    byte_5937C10 = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_21FFECC(this, method);
  v4 = System_String__Concat_75481624(
         (System_String_o *)StringLiteral_16602/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_16426/*"[/s]"*/,
         0);
  UILabel__set_text(textLabel, v4, 0);
}


void UIIconLabel__Set_48040364(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t data,
        int32_t adjustData,
        int32_t equipData,
        int64_t time,
        bool isHide,
        bool isMaxHide,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  System_String_o *v18; // x0
  __int64 v19; // x1
  int v20; // w29
  float v21; // s8
  float v22; // s9
  System_String_o *v23; // x21
  float v24; // s10
  System_String_o *v25; // x25
  float v26; // s11
  int v27; // w20
  char v28; // w22
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *PriceInfo; // x0
  int32_t v32; // w20
  System_String_o *v33; // x0
  System_String_o **v34; // x8
  __int64 v35; // x8
  System_String_o *v36; // x22
  System_String_o *v37; // x0
  __int64 *v38; // x8
  __int64 *v39; // x8
  __int64 *v40; // x8
  System_String_o *v41; // x0
  int32_t v42; // w8
  int32_t v43; // w9
  float v44; // s0
  float v45; // s1
  __int64 *v46; // x8
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  int32_t v52; // w22
  __int64 *v53; // x8
  System_String_o *v54; // x0
  System_String_o *NumberFormat_48211828; // x0
  bool v56; // cc
  System_String_o *v57; // x0
  System_String_o **v58; // x8
  System_String_o *v59; // x0
  System_String_o *v60; // x22
  Il2CppObject *v61; // x0
  System_String_o *v62; // x22
  Il2CppObject *v63; // x0
  BalanceConfig_c *v64; // x0
  __int64 v66; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v68; // w8
  int32_t *p_rarity; // x0
  System_String_o *v70; // x0
  System_String_o *v71; // x22
  Il2CppObject *v72; // x0
  System_String_o *v73; // x23
  System_String_o *v74; // x0
  int32_t v75; // w22
  System_String_o *v76; // x22
  Il2CppObject *v77; // x0
  __int64 v78; // x20
  System_String_o *v79; // x23
  System_String_o *v80; // x0
  System_String_o *v81; // x22
  Il2CppObject *v82; // x0
  int32_t v83; // w23
  int32_t v84; // w24
  int32_t v85; // w22
  int32_t RarityIcon; // w24
  System_String_o *v87; // x22
  Il2CppObject *v88; // x0
  System_String_o *v89; // x23
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  System_String_o *v92; // x23
  System_String_o *v93; // x0
  UIIconLabel_c *v94; // x8
  float *p_r; // x8
  __int64 v96; // x1
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v98; // x21
  __int64 v99; // x1
  UISprite_o *v100; // x20
  System_String_o *v101; // x20
  struct UISprite_o *v102; // x20
  UISprite_o *v103; // x0
  UISprite_o *v104; // x20
  char v105; // w8
  UnityEngine_Object_o *v106; // x20
  __int64 v107; // x1
  UnityEngine_Object_o *transform; // x21
  float v109; // s0
  float v110; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w9
  int32_t blankSize; // w8
  float v116; // s0
  float v117; // s10
  System_String_o *v118; // x0
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int32_t v120; // [xsp+8h] [xbp-98h]
  int32_t v121; // [xsp+Ch] [xbp-94h] BYREF
  int v122; // [xsp+10h] [xbp-90h] BYREF
  int32_t v123; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t rarity; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  rarity = data;
  v123 = equipData;
  if ( (byte_5937C0B & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&UIIconLabel_TypeInfo);
    sub_21FFC50(&StringLiteral_21367/*"img_list_atk"*/);
    sub_21FFC50(&StringLiteral_5832/*"EVENT_ITEM_UNIT"*/);
    sub_21FFC50(&StringLiteral_11269/*"QP_UNIT"*/);
    sub_21FFC50(&StringLiteral_861/*"+"*/);
    sub_21FFC50(&StringLiteral_21381/*"img_list_not_clear_cond"*/);
    sub_21FFC50(&StringLiteral_9685/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/);
    sub_21FFC50(&StringLiteral_12858/*"STONE_FRAGMENTS_UNIT"*/);
    sub_21FFC50(&StringLiteral_6794/*"FRIENDSHIP_UNIT"*/);
    sub_21FFC50(&StringLiteral_6737/*"FOLLOWER_SELECT_TYPE_POINT"*/);
    sub_21FFC50(&StringLiteral_21582/*"img_txt_bondslevel"*/);
    sub_21FFC50(&StringLiteral_21374/*"img_list_cost"*/);
    sub_21FFC50(&StringLiteral_21382/*"img_list_not_release_costume"*/);
    sub_21FFC50(&StringLiteral_21377/*"img_list_limit_cnt"*/);
    sub_21FFC50(&StringLiteral_21148/*"icon_nplv"*/);
    sub_21FFC50(&StringLiteral_1837/*"?"*/);
    sub_21FFC50(&StringLiteral_21379/*"img_list_lv"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_8886/*"MANA_UNIT"*/);
    sub_21FFC50(&StringLiteral_422/*"#,0"*/);
    sub_21FFC50(&StringLiteral_21629/*"img_txt_grandcombine"*/);
    sub_21FFC50(&StringLiteral_21376/*"img_list_hp"*/);
    sub_21FFC50(&StringLiteral_21375/*"img_list_costume_num"*/);
    sub_21FFC50(&StringLiteral_681/*"("*/);
    sub_21FFC50(&StringLiteral_2034/*"ANONYMOUS_UNIT"*/);
    sub_21FFC50(&StringLiteral_21620/*"img_txt_fp"*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    sub_21FFC50(&StringLiteral_12895/*"STONE_UNIT"*/);
    sub_21FFC50(&StringLiteral_1842/*"??/??"*/);
    sub_21FFC50(&StringLiteral_701/*"(+"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_6789/*"FREE_NAME"*/);
    sub_21FFC50(&StringLiteral_1841/*"??"*/);
    sub_21FFC50(&StringLiteral_21383/*"img_list_release_num"*/);
    sub_21FFC50(&StringLiteral_21414/*"img_nplv"*/);
    sub_21FFC50(&StringLiteral_11417/*"RARE_PRI_UNIT"*/);
    sub_21FFC50(&StringLiteral_21378/*"img_list_limitcount"*/);
    sub_21FFC50(&StringLiteral_1843/*"???"*/);
    sub_21FFC50(&StringLiteral_21380/*"img_list_no"*/);
    byte_5937C0B = 1;
  }
  v122 = equipData + data;
  v18 = System_Int32__ToString((int32_t)&v122, 0);
  v20 = exceedCount;
  v21 = 1.0;
  v22 = 1.0;
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  if ( exceedCount <= 0 )
    v24 = 1.0;
  else
    v24 = 0.92157;
  v25 = v18;
  v120 = iconKind;
  if ( exceedCount <= 0 )
    v26 = 1.0;
  else
    v26 = 0.015686;
  spriteName = 0;
  v27 = 0;
  v28 = 0;
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( iconKind )
  {
    case 0:
      goto LABEL_219;
    case 2:
      if ( rarity < 1 )
        goto LABEL_159;
      spriteName = (System_String_o *)StringLiteral_21379/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        if ( isHide )
          v29 = (System_String_o *)StringLiteral_1841/*"??"*/;
        else
          v29 = v18;
        goto LABEL_219;
      }
      if ( isHide )
      {
        v27 = 0;
        v28 = 0;
        v58 = (System_String_o **)&StringLiteral_1842/*"??/??"*/;
        v24 = 1.0;
        v26 = 1.0;
LABEL_181:
        v29 = *v58;
        goto LABEL_202;
      }
      v21 = 1.0;
      v29 = System_Int32__ToString((int32_t)&rarity, 0);
      if ( !isMaxHide )
      {
        v118 = System_Int32__ToString((int32_t)&exceedCount, 0);
        v29 = System_String__Concat_75481624(v29, (System_String_o *)StringLiteral_1123/*"/"*/, v118, 0);
      }
      v27 = 0;
      v28 = 0;
LABEL_197:
      v24 = 1.0;
      v26 = 1.0;
      iconKind = 0;
      goto LABEL_198;
    case 3:
      v53 = &StringLiteral_21376/*"img_list_hp"*/;
      goto LABEL_136;
    case 5:
      v53 = &StringLiteral_21367/*"img_list_atk"*/;
LABEL_136:
      spriteName = (System_String_o *)*v53;
      v122 = v123 + rarity;
      v70 = System_Int32__ToString_76925352((int32_t)&v122, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      if ( isHide )
        v29 = (System_String_o *)StringLiteral_1843/*"???"*/;
      else
        v29 = v70;
      goto LABEL_219;
    case 7:
      spriteName = (System_String_o *)StringLiteral_21374/*"img_list_cost"*/;
      if ( v123 < 1 )
      {
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        goto LABEL_218;
      }
      v73 = System_Int32__ToString((int32_t)&rarity, 0);
      v74 = System_Int32__ToString((int32_t)&v123, 0);
      v29 = System_String__Concat_75481624(v73, (System_String_o *)StringLiteral_861/*"+"*/, v74, 0);
LABEL_201:
      v27 = 0;
      v28 = 0;
LABEL_202:
      iconKind = 0;
      goto LABEL_219;
    case 8:
    case 57:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      v29 = v18;
      v35 = StringLiteral_21380/*"img_list_no"*/;
      goto LABEL_77;
    case 9:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      v35 = StringLiteral_21378/*"img_list_limitcount"*/;
      if ( rarity >= 1 )
        v29 = v18;
      else
        v29 = (System_String_o *)StringLiteral_1/*""*/;
      if ( rarity < 1 )
        v35 = 0;
      goto LABEL_77;
    case 10:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v40 = &StringLiteral_6789/*"FREE_NAME"*/;
      goto LABEL_90;
    case 11:
    case 27:
      if ( isHide )
      {
        v29 = (System_String_o *)StringLiteral_1837/*"?"*/;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
        NumberFormat_48211828 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
        v20 = exceedCount;
        v29 = NumberFormat_48211828;
      }
      v22 = 1.0;
      v44 = 0.5;
      v27 = 0;
      iconKind = 0;
      spriteName = 0;
      v56 = rarity <= v20 || v20 <= -1;
      goto LABEL_104;
    case 12:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v46 = &StringLiteral_12895/*"STONE_UNIT"*/;
      goto LABEL_142;
    case 13:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_8886/*"MANA_UNIT"*/, 0);
      v61 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v29 = System_String__Format(v60, v61, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 7;
      goto LABEL_189;
    case 14:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11269/*"QP_UNIT"*/, 0);
      v51 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v29 = System_String__Format(v50, v51, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 5;
      goto LABEL_189;
    case 15:
      v75 = rarity;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      PriceInfo = LocalizationManager__GetPriceInfo(v75, 0);
      goto LABEL_185;
    case 16:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_6794/*"FRIENDSHIP_UNIT"*/, 0);
      v77 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v25, 0);
      PriceInfo = System_String__Format(v76, v77, 0);
      goto LABEL_185;
    case 17:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      PriceInfo = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      goto LABEL_185;
    case 18:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_5832/*"EVENT_ITEM_UNIT"*/, 0);
      v82 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v29 = System_String__Format(v81, v82, 0);
      v27 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_189;
    case 19:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v46 = &StringLiteral_12858/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_142:
      v71 = LocalizationManager__Get((System_String_o *)*v46, 0);
      v72 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v29 = System_String__Format(v71, v72, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 6;
      goto LABEL_189;
    case 20:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_2034/*"ANONYMOUS_UNIT"*/, 0);
      v63 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v29 = System_String__Format(v62, v63, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 17;
      goto LABEL_189;
    case 21:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_11417/*"RARE_PRI_UNIT"*/, 0);
      v88 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v29 = System_String__Format(v87, v88, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 18;
      goto LABEL_189;
    case 22:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v49 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v43 = exceedCount;
      v42 = rarity;
      v22 = 1.0;
      v44 = 0.5;
      v29 = v49;
      v27 = 0;
      spriteName = 0;
      iconKind = 6;
      goto LABEL_101;
    case 23:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v59 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v43 = exceedCount;
      v42 = rarity;
      v22 = 1.0;
      v44 = 0.5;
      v29 = v59;
      v27 = 0;
      spriteName = 0;
      iconKind = 7;
      goto LABEL_101;
    case 24:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v54 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v43 = exceedCount;
      v42 = rarity;
      v22 = 1.0;
      v44 = 0.5;
      v29 = v54;
      v27 = 0;
      spriteName = 0;
      iconKind = 5;
      goto LABEL_101;
    case 25:
    case 26:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v29 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      goto LABEL_119;
    case 28:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v22 = 1.0;
      v29 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 16;
      if ( rarity <= exceedCount )
        v45 = 1.0;
      else
        v45 = 0.5;
      if ( exceedCount < 0 )
        v21 = 0.5;
      else
        v21 = v45;
      goto LABEL_107;
    case 29:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v41 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v43 = exceedCount;
      v42 = rarity;
      v22 = 1.0;
      v44 = 0.5;
      v29 = v41;
      v27 = 0;
      spriteName = 0;
      iconKind = 17;
      goto LABEL_101;
    case 30:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v57 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v43 = exceedCount;
      v42 = rarity;
      v22 = 1.0;
      v44 = 0.5;
      v29 = v57;
      v27 = 0;
      spriteName = 0;
      iconKind = 18;
LABEL_101:
      v56 = v42 <= v43 || v43 <= -1;
LABEL_104:
      if ( v56 )
        v21 = v22;
      else
        v21 = v44;
LABEL_107:
      v28 = 1;
      goto LABEL_125;
    case 31:
      v64 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
        v64 = BalanceConfig_TypeInfo;
      }
      iconKind = v64->static_fields->LvExceedDewDropItemId;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v29 = LocalizationManager__GetNumberFormat_48211828(v25, 0);
      v27 = 0;
      v28 = 0;
LABEL_119:
      v22 = 1.0;
      spriteName = 0;
      if ( rarity <= exceedCount || exceedCount <= -1 )
        v21 = 1.0;
      else
        v21 = 0.5;
LABEL_125:
      v24 = v21;
      v26 = v21;
      goto LABEL_219;
    case 32:
      if ( rarity < 0 )
        goto LABEL_159;
      v78 = StringLiteral_21582/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_21582/*"img_txt_bondslevel"*/ )
        goto LABEL_156;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_width(iconSprite, 40, 0);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_height(iconSprite, 18, 0);
      v20 = exceedCount;
LABEL_156:
      spriteName = (System_String_o *)v78;
      if ( v20 < 1 )
        goto LABEL_203;
      p_rarity = &rarity;
      goto LABEL_158;
    case 33:
      if ( rarity < 1 )
        goto LABEL_159;
      v66 = StringLiteral_21414/*"img_nplv"*/;
      if ( !StringLiteral_21414/*"img_nplv"*/ )
        goto LABEL_131;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_width(iconSprite, 55, 0);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_height(iconSprite, 18, 0);
      v20 = exceedCount;
LABEL_131:
      spriteName = (System_String_o *)v66;
      if ( v20 < 1 )
      {
LABEL_203:
        v27 = 0;
        iconKind = 0;
        goto LABEL_217;
      }
      v68 = lv;
      p_rarity = &v122;
      if ( lv <= 0 )
        v68 = rarity;
      v122 = v68;
LABEL_158:
      v79 = System_Int32__ToString((int32_t)p_rarity, 0);
      v80 = System_Int32__ToString((int32_t)&exceedCount, 0);
      v29 = System_String__Concat_75481624(v79, (System_String_o *)StringLiteral_1123/*"/"*/, v80, 0);
      v27 = 0;
      iconKind = 0;
      v21 = 1.0;
      v24 = 1.0;
      v26 = 1.0;
      v22 = 1.0;
LABEL_189:
      v28 = 1;
      goto LABEL_219;
    case 34:
      if ( rarity < 1 )
      {
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        spriteName = 0;
        v24 = 1.0;
        v26 = 1.0;
        goto LABEL_160;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 99) > 0xFFFFFF9D )
        {
          v26 = 0.31373;
          v24 = 0.94118;
          v21 = 0.98824;
        }
        else if ( exceedCount == 99 )
        {
          v26 = 0.058824;
          v24 = 0.45098;
        }
      }
      else
      {
        v24 = 1.0;
        v26 = 1.0;
      }
      if ( lv >= 1 )
      {
        v25 = System_Int32__ToString((int32_t)&lv, 0);
        v94 = UIIconLabel_TypeInfo;
        if ( !*(&UIIconLabel_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIIconLabel_TypeInfo, v19);
          v94 = UIIconLabel_TypeInfo;
        }
        p_r = &v94->static_fields->TempOverwriteTdLvColor.fields.r;
        v21 = *p_r;
        v24 = p_r[1];
        v26 = p_r[2];
        v22 = p_r[3];
      }
      v27 = 0;
      iconKind = 0;
      spriteName = (System_String_o *)StringLiteral_21148/*"icon_nplv"*/;
LABEL_217:
      v28 = 1;
LABEL_218:
      v29 = v25;
      goto LABEL_219;
    case 35:
      v52 = rarity;
      if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19);
      spriteName = Rarity__getIcon(v52, 0);
      goto LABEL_179;
    case 36:
      v83 = actualRarity;
      v84 = rarity;
      v85 = lv;
      if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19);
      spriteName = Rarity__getIcon_47373532(v84, v20, v85, v83, 0);
      if ( exceedCount < 1 )
        goto LABEL_179;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, v83, exceedCount, 0, 0, 0);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, v83, lv, RarityIcon, 0, 0) > 2 )
        v27 = 1;
      else
LABEL_179:
        v27 = 0;
      v28 = 0;
      v58 = (System_String_o **)&StringLiteral_1/*""*/;
      goto LABEL_181;
    case 38:
    case 39:
    case 40:
      if ( rarity >= 1 )
      {
        v30 = System_Int32__ToString_76925352((int32_t)&rarity, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
        PriceInfo = System_String__Concat_75438412((System_String_o *)StringLiteral_861/*"+"*/, v30, 0);
LABEL_185:
        v29 = PriceInfo;
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        spriteName = 0;
        goto LABEL_219;
      }
      if ( rarity < 0 )
      {
        PriceInfo = System_Int32__ToString_76925352((int32_t)&rarity, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
        goto LABEL_185;
      }
LABEL_159:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      spriteName = 0;
LABEL_160:
      v29 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_219:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      UILabel__set_text((UILabel_o *)iconSprite, v29, 0);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      v128.fields.r = v21;
      v128.fields.g = v24;
      v128.fields.b = v26;
      v128.fields.a = v22;
      UIWidget__set_color(iconSprite, v128, 0);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
        goto LABEL_226;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_278;
      UILabel__set_text((UILabel_o *)iconSprite, v23, 0);
LABEL_226:
      v98 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( !UnityEngine_Object__op_Inequality(v98, 0, 0) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
      if ( !iconSprite )
        goto LABEL_278;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v120 != 56, 0);
      if ( iconKind < 1 )
      {
        if ( v27 )
        {
          v102 = this->fields.iconSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v99);
          v103 = v102;
          v101 = spriteName;
          AtlasManager__SetEventSprite(v103, spriteName, 0);
        }
        else
        {
          v104 = this->fields.iconSprite;
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v99);
          AtlasManager__SetCommon(v104, 0);
          v101 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v101, 0);
      }
      else
      {
        v100 = this->fields.iconSprite;
        this->fields.isCustmAtlas = 1;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v99);
        AtlasManager__SetItem(v100, iconKind, 0);
        v101 = spriteName;
      }
      if ( v101 )
        v105 = v28;
      else
        v105 = 1;
      if ( (v105 & 1) == 0 )
      {
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))iconSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          iconSprite,
          iconSprite->klass->vtable._33_MakePixelPerfect.method);
      }
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
      if ( !iconSprite )
        goto LABEL_278;
      iconSprite = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)iconSprite, 0);
      if ( !this->fields.textLabel )
        goto LABEL_278;
      v106 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v107);
      if ( UnityEngine_Object__op_Equality(v106, transform, 0) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_278;
        LODWORD(v109) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        v110 = v109;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
        if ( !iconSprite )
          goto LABEL_278;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v29, (System_String_o *)StringLiteral_1/*""*/, 0);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_278;
          v110 = v110 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_278;
        }
        mAlignment = textLabel->fields.mAlignment;
        blankSize = this->fields.blankSize;
        if ( mAlignment == 2 )
        {
          v116 = (float)(v110 * 0.5) + (float)blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v117 = (float)-blankSize;
            goto LABEL_271;
          }
          v116 = v110 + (float)blankSize;
        }
        v117 = -v116;
LABEL_271:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
          if ( iconSprite )
          {
            v127.fields.x = v117;
            v127.fields.y = y;
            v127.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v127, 0);
            return;
          }
        }
LABEL_278:
        sub_21FFECC(iconSprite, v19);
      }
      return;
    case 41:
    case 42:
    case 43:
      v32 = rarity;
      v33 = System_Int32__ToString_76925352((int32_t)&rarity, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
      v34 = (System_String_o **)&StringLiteral_681/*"("*/;
      if ( v32 >= 0 )
        v34 = (System_String_o **)&StringLiteral_701/*"(+"*/;
      v29 = System_String__Concat_75481624(*v34, v33, (System_String_o *)StringLiteral_789/*")"*/, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      if ( rarity <= exceedCount )
      {
        v21 = 1.0;
        spriteName = 0;
        v22 = 1.0;
        if ( rarity >= exceedCount )
          v24 = 1.0;
        else
          v24 = 0.0;
        v26 = v24;
      }
      else
      {
        v21 = 0.0;
LABEL_25:
        v24 = 1.0;
        v26 = 1.0;
        spriteName = 0;
LABEL_198:
        v22 = 1.0;
      }
      goto LABEL_219;
    case 44:
    case 45:
      if ( rarity < 0 )
        goto LABEL_159;
      if ( exceedCount < 1 )
        goto LABEL_31;
      v36 = System_Int32__ToString_76925352((int32_t)&rarity, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
      v37 = System_Int32__ToString_76925352((int32_t)&exceedCount, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
      v29 = System_String__Concat_75481624(v36, (System_String_o *)StringLiteral_1123/*"/"*/, v37, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      v21 = 1.0;
      goto LABEL_25;
    case 46:
      v38 = &StringLiteral_21376/*"img_list_hp"*/;
      goto LABEL_60;
    case 47:
      v38 = &StringLiteral_21367/*"img_list_atk"*/;
LABEL_60:
      spriteName = (System_String_o *)*v38;
      v29 = System_Int32__ToString_76925352((int32_t)&rarity, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
      if ( v123 < 0 )
      {
        v48 = System_Int32__ToString((int32_t)&v123, 0);
      }
      else
      {
        v47 = System_Int32__ToString_76925352((int32_t)&v123, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
        v48 = System_String__Concat_75438412((System_String_o *)StringLiteral_861/*"+"*/, v47, 0);
      }
      v23 = v48;
      goto LABEL_201;
    case 48:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      spriteName = 0;
      if ( rarity <= 0 )
        v29 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v29 = v18;
      goto LABEL_219;
    case 49:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      PriceInfo = LocalizationManager__GetDate(time, 0);
      goto LABEL_185;
    case 50:
      spriteName = (System_String_o *)StringLiteral_21375/*"img_list_costume_num"*/;
      v91 = System_Int32__ToString((int32_t)&rarity, 0);
      goto LABEL_196;
    case 51:
      v39 = &StringLiteral_21383/*"img_list_release_num"*/;
      goto LABEL_195;
    case 52:
      v39 = &StringLiteral_21382/*"img_list_not_release_costume"*/;
      goto LABEL_195;
    case 53:
      v39 = &StringLiteral_21381/*"img_list_not_clear_cond"*/;
      goto LABEL_195;
    case 54:
      v39 = &StringLiteral_21377/*"img_list_limit_cnt"*/;
LABEL_195:
      spriteName = (System_String_o *)*v39;
      v92 = System_Int32__ToString((int32_t)&rarity, 0);
      v93 = System_Int32__ToString((int32_t)&exceedCount, 0);
      v91 = System_String__Concat_75481624(v92, (System_String_o *)StringLiteral_1123/*"/"*/, v93, 0);
      goto LABEL_196;
    case 55:
      spriteName = (System_String_o *)StringLiteral_21620/*"img_txt_fp"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_6737/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0);
      v121 = rarity;
      v90 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v121);
      v91 = System_String__Format(v89, v90, 0);
LABEL_196:
      v29 = v91;
      v27 = 0;
      v28 = 0;
      v21 = 1.0;
      goto LABEL_197;
    case 56:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v40 = &StringLiteral_9685/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_90:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v40, 0);
      goto LABEL_185;
    case 58:
    case 59:
      v21 = 1.0;
      v24 = 1.0;
      v26 = 1.0;
      v22 = 1.0;
      v29 = System_Int32__ToString_76925352((int32_t)&rarity, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
      v28 = 0;
      iconKind = 0;
      v35 = StringLiteral_21629/*"img_txt_grandcombine"*/;
      v27 = 1;
LABEL_77:
      spriteName = (System_String_o *)v35;
      goto LABEL_219;
    default:
LABEL_31:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_218;
  }
}


void UIIconLabel__Set_48064564(UIIconLabel_o *this, IconLabelInfo_o *info, bool isHide, const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_48040364(
      this,
      info->fields.iconKind,
      info->fields.data,
      info->fields.adjustData,
      info->fields.equipData,
      info->fields.time,
      isHide,
      info->fields.isMaxHide,
      info->fields.lv,
      info->fields.actualRarity,
      v4);
  else
    UIIconLabel__Clear(this, 0);
}