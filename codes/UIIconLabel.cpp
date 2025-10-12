void UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4C36F7F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36F7F = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UISprite__set_spriteName((UISprite_o *)textLabel, 0, 0);
      return;
    }
LABEL_15:
    sub_1C32E7C(textLabel);
  }
}


int32_t UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(this);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  struct UISprite_o *v4; // x0
  float x; // s0
  float y; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C36F83 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F83 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v4 = this->fields.iconSprite;
    if ( !v4 )
      sub_1C32E7C(0);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._22_get_localSize.methodPtr)(
      v4,
      v4->klass->vtable._22_get_localSize.method);
  }
  else
  {
    if ( !byte_4C312CA )
    {
      sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
      byte_4C312CA = 1;
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
  _BOOL4 v5; // w8
  float v6; // s0
  float v7; // s1
  float v8; // s3
  float v9; // s1
  float v10; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = compareData >= 0;
  v6 = 0.5;
  v7 = 1.0;
  if ( !v5 && iconKind == 28 )
    v7 = 0.5;
  if ( !v5 || dispData <= compareData )
    v6 = v7;
  v8 = 1.0;
  v9 = v6;
  v10 = v6;
  result.fields.a = v8;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v6;
  return result;
}


UnityEngine_Color_o UIIconLabel__GetPurchaseDecisionColor_41036184(
        UIIconLabel_o *this,
        int32_t dispData,
        int64_t compareData,
        int32_t iconKind,
        const MethodInfo *method)
{
  _BOOL4 v5; // w9
  float v6; // s0
  float v7; // s1
  float v8; // s3
  float v9; // s1
  float v10; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = compareData >= 0;
  v6 = 0.5;
  v7 = 1.0;
  if ( !v5 && iconKind == 28 )
    v7 = 0.5;
  if ( !v5 || dispData <= compareData )
    v6 = v7;
  v8 = 1.0;
  v9 = v6;
  v10 = v6;
  result.fields.a = v8;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v6;
  return result;
}


UnityEngine_Vector2Int_o UIIconLabel__GetTextLabelSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(this);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_41010828(
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
  System_String_o *v9; // x22
  float v10; // s8
  float v11; // s9
  float v12; // s10
  System_String_o *v13; // x20
  System_String_o *v14; // x23
  Il2CppObject *v15; // x0
  char v16; // w27
  int32_t v17; // w23
  System_String_o *NumberFormat_41175184; // x0
  float v19; // s11
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x24
  UnityEngine_Object_o *iconSprite; // x22
  UISprite_o *v24; // x21
  UISprite_o *v25; // x21
  UnityEngine_Object_o *v26; // x21
  UnityEngine_Object_o *transform; // x22
  float v28; // s0
  float v29; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v32; // x8
  int32_t mAlignment; // w8
  float v34; // s0
  float v35; // s10
  int32_t v36; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v36 = data;
  if ( (byte_4C36F81 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_10816/*"QP_UNIT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36F81 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v36, 0);
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = 1.0;
  if ( adjustData <= 0 )
    v11 = 1.0;
  else
    v11 = 0.015686;
  if ( adjustData <= 0 )
    v12 = 1.0;
  else
    v12 = 0.92157;
  v13 = v8;
  if ( iconKind == 24 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_41175184 = LocalizationManager__GetNumberFormat_41175184(v13, 0);
    v19 = 1.0;
    if ( v36 <= adjustData || adjustData <= -1 )
      v10 = 1.0;
    else
      v10 = 0.5;
    v13 = NumberFormat_41175184;
    v16 = 0;
    v17 = 5;
    v12 = v10;
    v11 = v10;
  }
  else
  {
    if ( iconKind == 14 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10816/*"QP_UNIT"*/, 0);
      v15 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v13, 0);
      v13 = System_String__Format(v14, v15, 0);
      v16 = 0;
      v17 = 5;
    }
    else
    {
      v17 = 0;
      v16 = 1;
    }
    v19 = 1.0;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_70;
  UILabel__set_text(textLabel, v13, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_70;
  v39.fields.r = v10;
  v39.fields.g = v12;
  v39.fields.b = v11;
  v39.fields.a = v19;
  UIWidget__set_color((UIWidget_o *)textLabel, v39, 0);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_70;
    UILabel__set_text(textLabel, v9, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_70;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, iconKind != 56, 0);
    if ( (v16 & 1) != 0 )
    {
      if ( this->fields.isCustmAtlas )
        this->fields.isCustmAtlas = 0;
      v24 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v24, 0);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_70;
      UISprite__set_spriteName((UISprite_o *)textLabel, 0, 0);
    }
    else
    {
      this->fields.isCustmAtlas = 1;
      v25 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v25, v17, 0);
    }
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_70;
    textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_70;
    textLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)textLabel, 0);
    if ( !this->fields.textLabel )
      goto LABEL_70;
    v26 = (UnityEngine_Object_o *)textLabel;
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.textLabel,
                                          0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v26, transform, 0) )
    {
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_70;
      LODWORD(v28) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_70;
      v29 = v28;
      textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
      if ( !textLabel )
        goto LABEL_70;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0);
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      textLabel = (UILabel_o *)System_String__op_Equality(v13, (System_String_o *)StringLiteral_1/*""*/, 0);
      v32 = this->fields.textLabel;
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_70;
        v29 = v29 - (float)v32->fields.mSpacingX;
      }
      else if ( !v32 )
      {
        goto LABEL_70;
      }
      mAlignment = v32->fields.mAlignment;
      if ( mAlignment == 2 )
      {
        v34 = (float)(v29 * 0.5) + (float)this->fields.blankSize;
      }
      else
      {
        if ( mAlignment != 3 )
        {
          v35 = (float)-this->fields.blankSize;
          goto LABEL_66;
        }
        v34 = v29 + (float)this->fields.blankSize;
      }
      v35 = -v34;
LABEL_66:
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( textLabel )
      {
        textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
        if ( textLabel )
        {
          v38.fields.x = v35;
          v38.fields.y = y;
          v38.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v38, 0);
          return;
        }
      }
LABEL_70:
      sub_1C32E7C(textLabel);
    }
  }
}


void UIIconLabel__SetAlpha(UIIconLabel_o *this, float alpha, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C36F84 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F84 = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  v8.fields.r = textLabel->fields.mColor.fields.r;
  v8.fields.g = textLabel->fields.mColor.fields.g;
  v8.fields.b = textLabel->fields.mColor.fields.b;
  v8.fields.a = alpha;
  UIWidget__set_color(textLabel, v8, 0);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
  {
    textLabel = (UIWidget_o *)this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    v9.fields.r = textLabel->fields.mColor.fields.r;
    v9.fields.g = textLabel->fields.mColor.fields.g;
    v9.fields.b = textLabel->fields.mColor.fields.b;
    v9.fields.a = alpha;
    UIWidget__set_color(textLabel, v9, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UIWidget_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      v10.fields.r = textLabel->fields.mColor.fields.r;
      v10.fields.g = textLabel->fields.mColor.fields.g;
      v10.fields.b = textLabel->fields.mColor.fields.b;
      v10.fields.a = alpha;
      UIWidget__set_color(textLabel, v10, 0);
      return;
    }
LABEL_15:
    sub_1C32E7C(textLabel);
  }
}


void UIIconLabel__SetCombineResTxt(
        UIIconLabel_o *this,
        int32_t data,
        int32_t adjustData,
        bool isLimit,
        const MethodInfo *method)
{
  Il2CppObject *NumberFormat; // x22
  System_String_o *v10; // x0
  System_String_o **v11; // x9
  System_String_o *v12; // x21
  UILabel_o *textLabel; // x19
  Il2CppObject *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x0

  if ( (byte_4C36F82 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3613/*"COMBINE_RES_INFO"*/);
    sub_1C32C20(&StringLiteral_3603/*"COMBINE_LIMIT_INFO"*/);
    byte_4C36F82 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0);
  v10 = LocalizationManager__GetNumberFormat(adjustData, 0);
  if ( isLimit )
    v11 = (System_String_o **)&StringLiteral_3603/*"COMBINE_LIMIT_INFO"*/;
  else
    v11 = (System_String_o **)&StringLiteral_3613/*"COMBINE_RES_INFO"*/;
  v12 = *v11;
  textLabel = this->fields.textLabel;
  v14 = (Il2CppObject *)v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(v12, 0);
  v16 = System_String__Format_63559836(v15, NumberFormat, v14, 0);
  if ( !textLabel )
    sub_1C32E7C(v16);
  UILabel__set_text(textLabel, v16, 0);
}


void UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_41010828(this, 27, 0, 0, 0, 0, 1, 0, 0, 0, v2);
}


void UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_41010828(this, iconKind, price, holdCount, 0, 0, 0, 0, 0, 0, v5);
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
    sub_1C32E7C(0);
  UILabel__set_bitmapFont(textLabel, bitmapFont, 0);
}


void UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(0);
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
    sub_1C32E7C(textLabel);
  }
  UIWidget__set_height(textLabel, m_Y, 0);
}


void UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  UILabel_o *textLabel; // x19
  System_String_o *v4; // x1

  v2 = this;
  if ( (byte_4C36F85 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15831/*"[/s]"*/);
    this = (UIIconLabel_o *)sub_1C32C20(&StringLiteral_16000/*"[s]"*/);
    byte_4C36F85 = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(this);
  v4 = System_String__Concat_63556792(
         (System_String_o *)StringLiteral_16000/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15831/*"[/s]"*/,
         0);
  UILabel__set_text(textLabel, v4, 0);
}


void UIIconLabel__Set_41010828(
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
  int v19; // w29
  System_String_o *v20; // x21
  float v21; // s8
  System_String_o *v22; // x25
  float v23; // s10
  float v24; // s11
  float v25; // s9
  int v26; // w20
  char v27; // w22
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *PriceInfo; // x0
  int32_t v31; // w20
  System_String_o *v32; // x0
  System_String_o **v33; // x8
  __int64 v34; // x8
  System_String_o *v35; // x22
  System_String_o *v36; // x0
  __int64 *v37; // x8
  System_String_o *v38; // x0
  System_String_o *v39; // x23
  System_String_o *v40; // x0
  __int64 *v41; // x8
  __int64 *v42; // x8
  System_String_o *v43; // x22
  Il2CppObject *v44; // x0
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  int32_t v47; // w22
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  System_String_o *v54; // x22
  Il2CppObject *v55; // x0
  System_String_o *v56; // x22
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  bool v59; // cc
  System_String_o *v60; // x0
  bool v61; // cc
  System_String_o *v62; // x0
  bool v63; // cc
  float v64; // s1
  bool v65; // cc
  System_String_o *v66; // x0
  bool v67; // cc
  System_String_o *v68; // x0
  bool v69; // cc
  BalanceConfig_c *v70; // x0
  bool v71; // cc
  __int64 v72; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v74; // w1
  System_String_o *v75; // x23
  System_String_o *v76; // x0
  int32_t v77; // w22
  int32_t v78; // w22
  int32_t RarityIcon; // w25
  __int64 *v80; // x8
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  __int64 *v84; // x8
  System_String_o *v85; // x23
  System_String_o *v86; // x0
  System_String_o *v87; // x23
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  __int64 v91; // x5
  __int64 v92; // x6
  __int64 v93; // x7
  Il2CppObject *v94; // x0
  System_String_o *NumberFormat_41175184; // x0
  bool v96; // cc
  System_String_o *v97; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v99; // x21
  UISprite_o *v100; // x20
  System_String_o *v101; // x20
  struct UISprite_o *v102; // x20
  UISprite_o *v103; // x0
  UISprite_o *v104; // x20
  UnityEngine_Object_o *v105; // x20
  UnityEngine_Object_o *transform; // x21
  float v107; // s0
  float v108; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v113; // s0
  float v114; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int32_t v116; // [xsp+8h] [xbp-98h]
  int32_t v117; // [xsp+Ch] [xbp-94h] BYREF
  int v118; // [xsp+10h] [xbp-90h] BYREF
  int32_t v119; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v124; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v119 = equipData;
  if ( (byte_4C36F80 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Rarity_TypeInfo);
    sub_1C32C20(&StringLiteral_20423/*"img_list_atk"*/);
    sub_1C32C20(&StringLiteral_5630/*"EVENT_ITEM_UNIT"*/);
    sub_1C32C20(&StringLiteral_10816/*"QP_UNIT"*/);
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    sub_1C32C20(&StringLiteral_20437/*"img_list_not_clear_cond"*/);
    sub_1C32C20(&StringLiteral_9311/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/);
    sub_1C32C20(&StringLiteral_12362/*"STONE_FRAGMENTS_UNIT"*/);
    sub_1C32C20(&StringLiteral_6520/*"FRIENDSHIP_UNIT"*/);
    sub_1C32C20(&StringLiteral_6463/*"FOLLOWER_SELECT_TYPE_POINT"*/);
    sub_1C32C20(&StringLiteral_20626/*"img_txt_bondslevel"*/);
    sub_1C32C20(&StringLiteral_20430/*"img_list_cost"*/);
    sub_1C32C20(&StringLiteral_20438/*"img_list_not_release_costume"*/);
    sub_1C32C20(&StringLiteral_20433/*"img_list_limit_cnt"*/);
    sub_1C32C20(&StringLiteral_20210/*"icon_nplv"*/);
    sub_1C32C20(&StringLiteral_1756/*"?"*/);
    sub_1C32C20(&StringLiteral_20435/*"img_list_lv"*/);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    sub_1C32C20(&StringLiteral_8536/*"MANA_UNIT"*/);
    sub_1C32C20(&StringLiteral_397/*"#,0"*/);
    sub_1C32C20(&StringLiteral_20670/*"img_txt_grandcombine"*/);
    sub_1C32C20(&StringLiteral_20432/*"img_list_hp"*/);
    sub_1C32C20(&StringLiteral_20431/*"img_list_costume_num"*/);
    sub_1C32C20(&StringLiteral_654/*"("*/);
    sub_1C32C20(&StringLiteral_1951/*"ANONYMOUS_UNIT"*/);
    sub_1C32C20(&StringLiteral_20661/*"img_txt_fp"*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    sub_1C32C20(&StringLiteral_12396/*"STONE_UNIT"*/);
    sub_1C32C20(&StringLiteral_1761/*"??/??"*/);
    sub_1C32C20(&StringLiteral_674/*"(+"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_6515/*"FREE_NAME"*/);
    sub_1C32C20(&StringLiteral_1760/*"??"*/);
    sub_1C32C20(&StringLiteral_20439/*"img_list_release_num"*/);
    sub_1C32C20(&StringLiteral_20464/*"img_nplv"*/);
    sub_1C32C20(&StringLiteral_10959/*"RARE_PRI_UNIT"*/);
    sub_1C32C20(&StringLiteral_20434/*"img_list_limitcount"*/);
    sub_1C32C20(&StringLiteral_1762/*"???"*/);
    sub_1C32C20(&StringLiteral_20436/*"img_list_no"*/);
    byte_4C36F80 = 1;
  }
  v118 = equipData + data;
  v18 = System_Int32__ToString((int32_t)&v118, 0);
  v19 = exceedCount;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  v21 = 1.0;
  v22 = v18;
  if ( exceedCount <= 0 )
    v23 = 1.0;
  else
    v23 = 0.92157;
  if ( exceedCount <= 0 )
    v24 = 1.0;
  else
    v24 = 0.015686;
  v25 = 1.0;
  v116 = iconKind;
  spriteName = 0;
  v26 = 0;
  v27 = 0;
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( iconKind )
  {
    case 0:
      goto LABEL_246;
    case 2:
      if ( price < 1 )
        goto LABEL_166;
      spriteName = (System_String_o *)StringLiteral_20435/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        if ( isHide )
          v28 = (System_String_o *)StringLiteral_1760/*"??"*/;
        else
          v28 = v18;
        goto LABEL_246;
      }
      if ( isHide )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        v28 = (System_String_o *)StringLiteral_1761/*"??/??"*/;
        goto LABEL_203;
      }
      v28 = System_Int32__ToString((int32_t)&price, 0);
      v21 = 1.0;
      if ( !isMaxHide )
      {
        v97 = System_Int32__ToString((int32_t)&exceedCount, 0);
        v28 = System_String__Concat_63556792(v28, (System_String_o *)StringLiteral_1048/*"/"*/, v97, 0);
      }
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_204;
    case 3:
      v37 = &StringLiteral_20432/*"img_list_hp"*/;
      goto LABEL_39;
    case 5:
      v37 = &StringLiteral_20423/*"img_list_atk"*/;
LABEL_39:
      spriteName = (System_String_o *)*v37;
      v118 = v119 + price;
      v38 = System_Int32__ToString_65028652((int32_t)&v118, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      if ( isHide )
        v28 = (System_String_o *)StringLiteral_1762/*"???"*/;
      else
        v28 = v38;
      goto LABEL_246;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20430/*"img_list_cost"*/;
      if ( v119 < 1 )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        goto LABEL_245;
      }
      v39 = System_Int32__ToString((int32_t)&price, 0);
      v40 = System_Int32__ToString((int32_t)&v119, 0);
      v28 = System_String__Concat_63556792(v39, (System_String_o *)StringLiteral_803/*"+"*/, v40, 0);
LABEL_229:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_246;
    case 8:
    case 57:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      v34 = StringLiteral_20436/*"img_list_no"*/;
      v28 = v18;
      goto LABEL_50;
    case 9:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      if ( price >= 1 )
        v28 = v18;
      else
        v28 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v34 = StringLiteral_20434/*"img_list_limitcount"*/;
      else
        v34 = 0;
LABEL_50:
      spriteName = (System_String_o *)v34;
      goto LABEL_246;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = &StringLiteral_6515/*"FREE_NAME"*/;
      goto LABEL_213;
    case 11:
    case 27:
      if ( isHide )
      {
        v28 = (System_String_o *)StringLiteral_1756/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat_41175184 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
        v19 = exceedCount;
        v28 = NumberFormat_41175184;
      }
      v25 = 1.0;
      v96 = price <= v19 || v19 <= -1;
      v26 = 0;
      iconKind = 0;
      if ( v96 )
        v21 = 1.0;
      else
        v21 = 0.5;
      spriteName = 0;
      goto LABEL_225;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = &StringLiteral_12396/*"STONE_UNIT"*/;
      goto LABEL_78;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8536/*"MANA_UNIT"*/, 0);
      v44 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v28 = System_String__Format(v43, v44, 0);
      v26 = 0;
      spriteName = 0;
      iconKind = 7;
      goto LABEL_85;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_10816/*"QP_UNIT"*/, 0);
      v46 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v28 = System_String__Format(v45, v46, 0);
      v26 = 0;
      spriteName = 0;
      iconKind = 5;
      goto LABEL_85;
    case 15:
      v47 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetPriceInfo(v47, 0);
      goto LABEL_214;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6520/*"FRIENDSHIP_UNIT"*/, 0);
      v49 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      PriceInfo = System_String__Format(v48, v49, 0);
      goto LABEL_214;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      goto LABEL_214;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5630/*"EVENT_ITEM_UNIT"*/, 0);
      v51 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v28 = System_String__Format(v50, v51, 0);
      v26 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_85;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = &StringLiteral_12362/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_78:
      v52 = LocalizationManager__Get((System_String_o *)*v42, 0);
      v53 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v28 = System_String__Format(v52, v53, 0);
      v26 = 0;
      spriteName = 0;
      iconKind = 6;
      goto LABEL_85;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_1951/*"ANONYMOUS_UNIT"*/, 0);
      v55 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v28 = System_String__Format(v54, v55, 0);
      v26 = 0;
      spriteName = 0;
      iconKind = 17;
      goto LABEL_85;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10959/*"RARE_PRI_UNIT"*/, 0);
      v57 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v28 = System_String__Format(v56, v57, 0);
      v26 = 0;
      spriteName = 0;
      iconKind = 18;
LABEL_85:
      v27 = 1;
      goto LABEL_246;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v25 = 1.0;
      v59 = price <= exceedCount || exceedCount <= -1;
      v28 = v58;
      v26 = 0;
      spriteName = 0;
      if ( v59 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 6;
      goto LABEL_225;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v25 = 1.0;
      v61 = price <= exceedCount || exceedCount <= -1;
      v28 = v60;
      v26 = 0;
      spriteName = 0;
      if ( v61 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 7;
      goto LABEL_225;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v25 = 1.0;
      v63 = price <= exceedCount || exceedCount <= -1;
      v28 = v62;
      v26 = 0;
      spriteName = 0;
      if ( v63 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 5;
      goto LABEL_225;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_148;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = 1.0;
      v28 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      if ( exceedCount < 0 )
        v64 = 0.5;
      else
        v64 = 1.0;
      v65 = price <= exceedCount || exceedCount <= -1;
      v26 = 0;
      spriteName = 0;
      if ( v65 )
        v21 = v64;
      else
        v21 = 0.5;
      iconKind = 16;
      goto LABEL_225;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v25 = 1.0;
      v67 = price <= exceedCount || exceedCount <= -1;
      v28 = v66;
      v26 = 0;
      spriteName = 0;
      if ( v67 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 17;
      goto LABEL_225;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v68 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v25 = 1.0;
      v69 = price <= exceedCount || exceedCount <= -1;
      v28 = v68;
      v26 = 0;
      spriteName = 0;
      if ( v69 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 18;
LABEL_225:
      v27 = 1;
      goto LABEL_226;
    case 31:
      v70 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v70 = BalanceConfig_TypeInfo;
      }
      iconKind = v70->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager__GetNumberFormat_41175184(v22, 0);
      v26 = 0;
      v27 = 0;
LABEL_148:
      v25 = 1.0;
      v71 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0;
      if ( v71 )
        v21 = 1.0;
      else
        v21 = 0.5;
LABEL_226:
      v23 = v21;
      v24 = v21;
      goto LABEL_246;
    case 32:
      if ( price < 0 )
        goto LABEL_166;
      v72 = StringLiteral_20626/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20626/*"img_txt_bondslevel"*/ )
        goto LABEL_164;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      v74 = 40;
      goto LABEL_162;
    case 33:
      if ( price < 1 )
        goto LABEL_166;
      v72 = StringLiteral_20464/*"img_nplv"*/;
      if ( !StringLiteral_20464/*"img_nplv"*/ )
        goto LABEL_164;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      v74 = 55;
LABEL_162:
      UIWidget__set_width(iconSprite, v74, 0);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      UIWidget__set_height(iconSprite, 18, 0);
      v19 = exceedCount;
LABEL_164:
      spriteName = (System_String_o *)v72;
      if ( v19 < 1 )
      {
        v26 = 0;
        iconKind = 0;
        goto LABEL_244;
      }
      v75 = System_Int32__ToString((int32_t)&price, 0);
      v76 = System_Int32__ToString((int32_t)&exceedCount, 0);
      v28 = System_String__Concat_63556792(v75, (System_String_o *)StringLiteral_1048/*"/"*/, v76, 0);
      v26 = 0;
      iconKind = 0;
      v27 = 1;
LABEL_203:
      v21 = 1.0;
LABEL_204:
      v23 = 1.0;
      goto LABEL_205;
    case 34:
      if ( price < 1 )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        spriteName = 0;
        v21 = 1.0;
        v23 = 1.0;
        v24 = 1.0;
        v25 = 1.0;
        goto LABEL_167;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v24 = 0.31373;
          v23 = 0.94118;
          v21 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_243;
          v24 = 0.058824;
          v23 = 0.45098;
          v21 = 1.0;
        }
      }
      else
      {
        v21 = 1.0;
        v23 = 1.0;
        v24 = 1.0;
      }
      v25 = 1.0;
LABEL_243:
      v26 = 0;
      iconKind = 0;
      spriteName = (System_String_o *)StringLiteral_20210/*"icon_nplv"*/;
LABEL_244:
      v27 = 1;
LABEL_245:
      v28 = v22;
      goto LABEL_246;
    case 35:
      v77 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon(v77, 0);
      goto LABEL_184;
    case 36:
      v78 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon_40343796(v78, v19, lv, actualRarity, 0);
      if ( exceedCount < 1 )
        goto LABEL_184;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_299;
      RarityIcon = ServantExceedMaster__GetRarityIcon(
                     (ServantExceedMaster_o *)iconSprite,
                     actualRarity,
                     exceedCount,
                     0,
                     0,
                     0);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_299;
      if ( ServantLvDetailMaster__GetRarityIcon(
             (ServantLvDetailMaster_o *)iconSprite,
             actualRarity,
             lv,
             RarityIcon,
             0,
             0) > 2 )
        v26 = 1;
      else
LABEL_184:
        v26 = 0;
      v27 = 0;
      iconKind = 0;
      v28 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_246;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v29 = System_Int32__ToString_65028652((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        PriceInfo = System_String__Concat_63518544((System_String_o *)StringLiteral_803/*"+"*/, v29, 0);
LABEL_214:
        v28 = PriceInfo;
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        spriteName = 0;
        goto LABEL_246;
      }
      if ( price < 0 )
      {
        PriceInfo = System_Int32__ToString_65028652((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        goto LABEL_214;
      }
LABEL_166:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0;
LABEL_167:
      v28 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_246:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_299;
      UILabel__set_text((UILabel_o *)iconSprite, v28, 0);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_299;
      v124.fields.r = v21;
      v124.fields.g = v23;
      v124.fields.b = v24;
      v124.fields.a = v25;
      UIWidget__set_color(iconSprite, v124, 0);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
        goto LABEL_253;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_299;
      UILabel__set_text((UILabel_o *)iconSprite, v20, 0);
LABEL_253:
      v99 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v99, 0, 0) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
      if ( !iconSprite )
        goto LABEL_299;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v116 != 56, 0);
      if ( iconKind < 1 )
      {
        if ( v26 )
        {
          v102 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v103 = v102;
          v101 = spriteName;
          AtlasManager__SetEventSprite(v103, spriteName, 0);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v104 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v104, 0);
          v101 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v101, 0);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v100 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v100, iconKind, 0);
        v101 = spriteName;
      }
      if ( !(v27 & 1 | (v101 == 0)) )
      {
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))iconSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          iconSprite,
          iconSprite->klass->vtable._33_MakePixelPerfect.method);
      }
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
      if ( !iconSprite )
        goto LABEL_299;
      iconSprite = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)iconSprite, 0);
      if ( !this->fields.textLabel )
        goto LABEL_299;
      v105 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v105, transform, 0) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_299;
        LODWORD(v107) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        v108 = v107;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
        if ( !iconSprite )
          goto LABEL_299;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v28, (System_String_o *)StringLiteral_1/*""*/, 0);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_299;
          v108 = v108 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_299;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v113 = (float)(v108 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v114 = (float)-this->fields.blankSize;
            goto LABEL_295;
          }
          v113 = v108 + (float)this->fields.blankSize;
        }
        v114 = -v113;
LABEL_295:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
          if ( iconSprite )
          {
            v123.fields.x = v114;
            v123.fields.y = y;
            v123.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v123, 0);
            return;
          }
        }
LABEL_299:
        sub_1C32E7C(iconSprite);
      }
      return;
    case 41:
    case 42:
    case 43:
      v31 = price;
      v32 = System_Int32__ToString_65028652((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v33 = (System_String_o **)&StringLiteral_654/*"("*/;
      if ( v31 >= 0 )
        v33 = (System_String_o **)&StringLiteral_674/*"(+"*/;
      v28 = System_String__Concat_63556792(*v33, v32, (System_String_o *)StringLiteral_759/*")"*/, 0);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      if ( price <= exceedCount )
      {
        v21 = 1.0;
        if ( price >= exceedCount )
          v23 = 1.0;
        else
          v23 = 0.0;
        spriteName = 0;
        v24 = v23;
      }
      else
      {
        spriteName = 0;
        v23 = 1.0;
        v21 = 0.0;
LABEL_205:
        v24 = 1.0;
      }
      v25 = 1.0;
      goto LABEL_246;
    case 44:
    case 45:
      if ( price < 0 )
        goto LABEL_166;
      if ( exceedCount < 1 )
        goto LABEL_30;
      v35 = System_Int32__ToString_65028652((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v36 = System_Int32__ToString_65028652((int32_t)&exceedCount, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v28 = System_String__Concat_63556792(v35, (System_String_o *)StringLiteral_1048/*"/"*/, v36, 0);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_203;
    case 46:
      v80 = &StringLiteral_20432/*"img_list_hp"*/;
      goto LABEL_188;
    case 47:
      v80 = &StringLiteral_20423/*"img_list_atk"*/;
LABEL_188:
      spriteName = (System_String_o *)*v80;
      v28 = System_Int32__ToString_65028652((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      if ( v119 < 0 )
      {
        v82 = System_Int32__ToString((int32_t)&v119, 0);
      }
      else
      {
        v81 = System_Int32__ToString_65028652((int32_t)&v119, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        v82 = System_String__Concat_63518544((System_String_o *)StringLiteral_803/*"+"*/, v81, 0);
      }
      v20 = v82;
      goto LABEL_229;
    case 48:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0;
      if ( price <= 0 )
        v28 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v28 = v18;
      goto LABEL_246;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetDate(time, 0);
      goto LABEL_214;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20431/*"img_list_costume_num"*/;
      v83 = System_Int32__ToString((int32_t)&price, 0);
      goto LABEL_202;
    case 51:
      v84 = &StringLiteral_20439/*"img_list_release_num"*/;
      goto LABEL_201;
    case 52:
      v84 = &StringLiteral_20438/*"img_list_not_release_costume"*/;
      goto LABEL_201;
    case 53:
      v84 = &StringLiteral_20437/*"img_list_not_clear_cond"*/;
      goto LABEL_201;
    case 54:
      v84 = &StringLiteral_20433/*"img_list_limit_cnt"*/;
LABEL_201:
      spriteName = (System_String_o *)*v84;
      v85 = System_Int32__ToString((int32_t)&price, 0);
      v86 = System_Int32__ToString((int32_t)&exceedCount, 0);
      v83 = System_String__Concat_63556792(v85, (System_String_o *)StringLiteral_1048/*"/"*/, v86, 0);
      goto LABEL_202;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20661/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_6463/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0);
      v117 = price;
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v88, v89, v90, v91, v92, v93);
      v83 = System_String__Format(v87, v94, 0);
LABEL_202:
      v28 = v83;
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_203;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = &StringLiteral_9311/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_213:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v41, 0);
      goto LABEL_214;
    case 58:
    case 59:
      v28 = System_Int32__ToString_65028652((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v27 = 0;
      iconKind = 0;
      v26 = 1;
      spriteName = (System_String_o *)StringLiteral_20670/*"img_txt_grandcombine"*/;
      goto LABEL_203;
    default:
LABEL_30:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_245;
  }
}


void UIIconLabel__Set_41034852(UIIconLabel_o *this, IconLabelInfo_o *info, bool isHide, const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_41010828(
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