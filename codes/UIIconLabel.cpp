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

  if ( (byte_4C56318 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C56318 = 1;
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
    sub_1C3E7C0(textLabel, method);
  }
}


int32_t UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5631C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5631C = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._22_get_localSize.methodPtr)(
      v5,
      v5->klass->vtable._22_get_localSize.method);
  }
  else
  {
    if ( !byte_4C5059A )
    {
      sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
      byte_4C5059A = 1;
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


UnityEngine_Color_o UIIconLabel__GetPurchaseDecisionColor_41184100(
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
    sub_1C3E7C0(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_41158744(
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
  System_String_o *v10; // x22
  float v11; // s8
  float v12; // s9
  float v13; // s10
  System_String_o *v14; // x20
  System_String_o *v15; // x23
  Il2CppObject *v16; // x0
  char v17; // w27
  int32_t v18; // w23
  System_String_o *NumberFormat_41323192; // x0
  float v20; // s11
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x24
  UnityEngine_Object_o *iconSprite; // x22
  UISprite_o *v25; // x21
  UISprite_o *v26; // x21
  UnityEngine_Object_o *v27; // x21
  UnityEngine_Object_o *transform; // x22
  float v29; // s0
  float v30; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v33; // x8
  int32_t mAlignment; // w8
  float v35; // s0
  float v36; // s10
  int32_t v37; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v37 = data;
  if ( (byte_4C5631A & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_10819/*"QP_UNIT"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5631A = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v37, 0);
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  v11 = 1.0;
  if ( adjustData <= 0 )
    v12 = 1.0;
  else
    v12 = 0.015686;
  if ( adjustData <= 0 )
    v13 = 1.0;
  else
    v13 = 0.92157;
  v14 = v8;
  if ( iconKind == 24 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_41323192 = LocalizationManager__GetNumberFormat_41323192(v14, 0);
    v20 = 1.0;
    if ( v37 <= adjustData || adjustData <= -1 )
      v11 = 1.0;
    else
      v11 = 0.5;
    v14 = NumberFormat_41323192;
    v17 = 0;
    v18 = 5;
    v13 = v11;
    v12 = v11;
  }
  else
  {
    if ( iconKind == 14 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10819/*"QP_UNIT"*/, 0);
      v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v14, 0);
      v14 = System_String__Format(v15, v16, 0);
      v17 = 0;
      v18 = 5;
    }
    else
    {
      v18 = 0;
      v17 = 1;
    }
    v20 = 1.0;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_70;
  UILabel__set_text(textLabel, v14, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_70;
  v40.fields.r = v11;
  v40.fields.g = v13;
  v40.fields.b = v12;
  v40.fields.a = v20;
  UIWidget__set_color((UIWidget_o *)textLabel, v40, 0);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_70;
    UILabel__set_text(textLabel, v10, 0);
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
    if ( (v17 & 1) != 0 )
    {
      if ( this->fields.isCustmAtlas )
        this->fields.isCustmAtlas = 0;
      v25 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v25, 0);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_70;
      UISprite__set_spriteName((UISprite_o *)textLabel, 0, 0);
    }
    else
    {
      this->fields.isCustmAtlas = 1;
      v26 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v26, v18, 0);
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
    v27 = (UnityEngine_Object_o *)textLabel;
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.textLabel,
                                          0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v27, transform, 0) )
    {
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_70;
      LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_70;
      v30 = v29;
      textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
      if ( !textLabel )
        goto LABEL_70;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0);
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      textLabel = (UILabel_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_1/*""*/, 0);
      v33 = this->fields.textLabel;
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_70;
        v30 = v30 - (float)v33->fields.mSpacingX;
      }
      else if ( !v33 )
      {
        goto LABEL_70;
      }
      mAlignment = v33->fields.mAlignment;
      if ( mAlignment == 2 )
      {
        v35 = (float)(v30 * 0.5) + (float)this->fields.blankSize;
      }
      else
      {
        if ( mAlignment != 3 )
        {
          v36 = (float)-this->fields.blankSize;
          goto LABEL_66;
        }
        v35 = v30 + (float)this->fields.blankSize;
      }
      v36 = -v35;
LABEL_66:
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( textLabel )
      {
        textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
        if ( textLabel )
        {
          v39.fields.x = v36;
          v39.fields.y = y;
          v39.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v39, 0);
          return;
        }
      }
LABEL_70:
      sub_1C3E7C0(textLabel, v9);
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

  if ( (byte_4C5631D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5631D = 1;
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
    sub_1C3E7C0(textLabel, method);
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
  __int64 v17; // x1

  if ( (byte_4C5631B & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3613/*"COMBINE_RES_INFO"*/);
    sub_1C3E564(&StringLiteral_3603/*"COMBINE_LIMIT_INFO"*/);
    byte_4C5631B = 1;
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
  v16 = System_String__Format_63677760(v15, NumberFormat, v14, 0);
  if ( !textLabel )
    sub_1C3E7C0(v16, v17);
  UILabel__set_text(textLabel, v16, 0);
}


void UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_41158744(this, 27, 0, 0, 0, 0, 1, 0, 0, 0, v2);
}


void UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_41158744(this, iconKind, price, holdCount, 0, 0, 0, 0, 0, 0, v5);
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
    sub_1C3E7C0(0, bitmapFont);
  UILabel__set_bitmapFont(textLabel, bitmapFont, 0);
}


void UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C3E7C0(0, method);
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
    sub_1C3E7C0(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0);
}


void UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  UILabel_o *textLabel; // x19
  System_String_o *v4; // x1

  v2 = this;
  if ( (byte_4C5631E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15843/*"[/s]"*/);
    this = (UIIconLabel_o *)sub_1C3E564(&StringLiteral_16012/*"[s]"*/);
    byte_4C5631E = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_1C3E7C0(this, method);
  v4 = System_String__Concat_63674716(
         (System_String_o *)StringLiteral_16012/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15843/*"[/s]"*/,
         0);
  UILabel__set_text(textLabel, v4, 0);
}


void UIIconLabel__Set_41158744(
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
  System_String_o *v21; // x21
  float v22; // s8
  System_String_o *v23; // x25
  float v24; // s10
  float v25; // s11
  float v26; // s9
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
  System_String_o *v39; // x0
  System_String_o *v40; // x23
  System_String_o *v41; // x0
  __int64 *v42; // x8
  __int64 *v43; // x8
  System_String_o *v44; // x22
  Il2CppObject *v45; // x0
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  int32_t v48; // w22
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  System_String_o *v51; // x22
  Il2CppObject *v52; // x0
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  System_String_o *v57; // x22
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  bool v60; // cc
  System_String_o *v61; // x0
  bool v62; // cc
  System_String_o *v63; // x0
  bool v64; // cc
  float v65; // s1
  bool v66; // cc
  System_String_o *v67; // x0
  bool v68; // cc
  System_String_o *v69; // x0
  bool v70; // cc
  BalanceConfig_c *v71; // x0
  bool v72; // cc
  __int64 v73; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v75; // w1
  System_String_o *v76; // x23
  System_String_o *v77; // x0
  int32_t v78; // w22
  int32_t v79; // w22
  int32_t RarityIcon; // w25
  __int64 *v81; // x8
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  __int64 *v85; // x8
  System_String_o *v86; // x23
  System_String_o *v87; // x0
  System_String_o *v88; // x23
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  __int64 v92; // x5
  __int64 v93; // x6
  __int64 v94; // x7
  Il2CppObject *v95; // x0
  System_String_o *NumberFormat_41323192; // x0
  bool v97; // cc
  System_String_o *v98; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v100; // x21
  UISprite_o *v101; // x20
  System_String_o *v102; // x20
  struct UISprite_o *v103; // x20
  UISprite_o *v104; // x0
  UISprite_o *v105; // x20
  UnityEngine_Object_o *v106; // x20
  UnityEngine_Object_o *transform; // x21
  float v108; // s0
  float v109; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v114; // s0
  float v115; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int32_t v117; // [xsp+8h] [xbp-98h]
  int32_t v118; // [xsp+Ch] [xbp-94h] BYREF
  int v119; // [xsp+10h] [xbp-90h] BYREF
  int32_t v120; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v120 = equipData;
  if ( (byte_4C56319 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Rarity_TypeInfo);
    sub_1C3E564(&StringLiteral_20444/*"img_list_atk"*/);
    sub_1C3E564(&StringLiteral_5631/*"EVENT_ITEM_UNIT"*/);
    sub_1C3E564(&StringLiteral_10819/*"QP_UNIT"*/);
    sub_1C3E564(&StringLiteral_803/*"+"*/);
    sub_1C3E564(&StringLiteral_20458/*"img_list_not_clear_cond"*/);
    sub_1C3E564(&StringLiteral_9312/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/);
    sub_1C3E564(&StringLiteral_12368/*"STONE_FRAGMENTS_UNIT"*/);
    sub_1C3E564(&StringLiteral_6521/*"FRIENDSHIP_UNIT"*/);
    sub_1C3E564(&StringLiteral_6464/*"FOLLOWER_SELECT_TYPE_POINT"*/);
    sub_1C3E564(&StringLiteral_20647/*"img_txt_bondslevel"*/);
    sub_1C3E564(&StringLiteral_20451/*"img_list_cost"*/);
    sub_1C3E564(&StringLiteral_20459/*"img_list_not_release_costume"*/);
    sub_1C3E564(&StringLiteral_20454/*"img_list_limit_cnt"*/);
    sub_1C3E564(&StringLiteral_20231/*"icon_nplv"*/);
    sub_1C3E564(&StringLiteral_1755/*"?"*/);
    sub_1C3E564(&StringLiteral_20456/*"img_list_lv"*/);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    sub_1C3E564(&StringLiteral_8537/*"MANA_UNIT"*/);
    sub_1C3E564(&StringLiteral_397/*"#,0"*/);
    sub_1C3E564(&StringLiteral_20691/*"img_txt_grandcombine"*/);
    sub_1C3E564(&StringLiteral_20453/*"img_list_hp"*/);
    sub_1C3E564(&StringLiteral_20452/*"img_list_costume_num"*/);
    sub_1C3E564(&StringLiteral_654/*"("*/);
    sub_1C3E564(&StringLiteral_1951/*"ANONYMOUS_UNIT"*/);
    sub_1C3E564(&StringLiteral_20682/*"img_txt_fp"*/);
    sub_1C3E564(&StringLiteral_759/*")"*/);
    sub_1C3E564(&StringLiteral_12405/*"STONE_UNIT"*/);
    sub_1C3E564(&StringLiteral_1760/*"??/??"*/);
    sub_1C3E564(&StringLiteral_674/*"(+"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_6516/*"FREE_NAME"*/);
    sub_1C3E564(&StringLiteral_1759/*"??"*/);
    sub_1C3E564(&StringLiteral_20460/*"img_list_release_num"*/);
    sub_1C3E564(&StringLiteral_20485/*"img_nplv"*/);
    sub_1C3E564(&StringLiteral_10962/*"RARE_PRI_UNIT"*/);
    sub_1C3E564(&StringLiteral_20455/*"img_list_limitcount"*/);
    sub_1C3E564(&StringLiteral_1761/*"???"*/);
    sub_1C3E564(&StringLiteral_20457/*"img_list_no"*/);
    byte_4C56319 = 1;
  }
  v119 = equipData + data;
  v18 = System_Int32__ToString((int32_t)&v119, 0);
  v20 = exceedCount;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  v22 = 1.0;
  v23 = v18;
  if ( exceedCount <= 0 )
    v24 = 1.0;
  else
    v24 = 0.92157;
  if ( exceedCount <= 0 )
    v25 = 1.0;
  else
    v25 = 0.015686;
  v26 = 1.0;
  v117 = iconKind;
  spriteName = 0;
  v27 = 0;
  v28 = 0;
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( iconKind )
  {
    case 0:
      goto LABEL_246;
    case 2:
      if ( price < 1 )
        goto LABEL_166;
      spriteName = (System_String_o *)StringLiteral_20456/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        if ( isHide )
          v29 = (System_String_o *)StringLiteral_1759/*"??"*/;
        else
          v29 = v18;
        goto LABEL_246;
      }
      if ( isHide )
      {
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        v29 = (System_String_o *)StringLiteral_1760/*"??/??"*/;
        goto LABEL_203;
      }
      v29 = System_Int32__ToString((int32_t)&price, 0);
      v22 = 1.0;
      if ( !isMaxHide )
      {
        v98 = System_Int32__ToString((int32_t)&exceedCount, 0);
        v29 = System_String__Concat_63674716(v29, (System_String_o *)StringLiteral_1048/*"/"*/, v98, 0);
      }
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      goto LABEL_204;
    case 3:
      v38 = &StringLiteral_20453/*"img_list_hp"*/;
      goto LABEL_39;
    case 5:
      v38 = &StringLiteral_20444/*"img_list_atk"*/;
LABEL_39:
      spriteName = (System_String_o *)*v38;
      v119 = v120 + price;
      v39 = System_Int32__ToString_65146576((int32_t)&v119, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      if ( isHide )
        v29 = (System_String_o *)StringLiteral_1761/*"???"*/;
      else
        v29 = v39;
      goto LABEL_246;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20451/*"img_list_cost"*/;
      if ( v120 < 1 )
      {
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        goto LABEL_245;
      }
      v40 = System_Int32__ToString((int32_t)&price, 0);
      v41 = System_Int32__ToString((int32_t)&v120, 0);
      v29 = System_String__Concat_63674716(v40, (System_String_o *)StringLiteral_803/*"+"*/, v41, 0);
LABEL_229:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      goto LABEL_246;
    case 8:
    case 57:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      v35 = StringLiteral_20457/*"img_list_no"*/;
      v29 = v18;
      goto LABEL_50;
    case 9:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      if ( price >= 1 )
        v29 = v18;
      else
        v29 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v35 = StringLiteral_20455/*"img_list_limitcount"*/;
      else
        v35 = 0;
LABEL_50:
      spriteName = (System_String_o *)v35;
      goto LABEL_246;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = &StringLiteral_6516/*"FREE_NAME"*/;
      goto LABEL_213;
    case 11:
    case 27:
      if ( isHide )
      {
        v29 = (System_String_o *)StringLiteral_1755/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat_41323192 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
        v20 = exceedCount;
        v29 = NumberFormat_41323192;
      }
      v26 = 1.0;
      v97 = price <= v20 || v20 <= -1;
      v27 = 0;
      iconKind = 0;
      if ( v97 )
        v22 = 1.0;
      else
        v22 = 0.5;
      spriteName = 0;
      goto LABEL_225;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = &StringLiteral_12405/*"STONE_UNIT"*/;
      goto LABEL_78;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8537/*"MANA_UNIT"*/, 0);
      v45 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v29 = System_String__Format(v44, v45, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 7;
      goto LABEL_85;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_10819/*"QP_UNIT"*/, 0);
      v47 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v29 = System_String__Format(v46, v47, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 5;
      goto LABEL_85;
    case 15:
      v48 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetPriceInfo(v48, 0);
      goto LABEL_214;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_6521/*"FRIENDSHIP_UNIT"*/, 0);
      v50 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v23, 0);
      PriceInfo = System_String__Format(v49, v50, 0);
      goto LABEL_214;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      goto LABEL_214;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5631/*"EVENT_ITEM_UNIT"*/, 0);
      v52 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v29 = System_String__Format(v51, v52, 0);
      v27 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_85;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = &StringLiteral_12368/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_78:
      v53 = LocalizationManager__Get((System_String_o *)*v43, 0);
      v54 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v29 = System_String__Format(v53, v54, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 6;
      goto LABEL_85;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_1951/*"ANONYMOUS_UNIT"*/, 0);
      v56 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v29 = System_String__Format(v55, v56, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 17;
      goto LABEL_85;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_10962/*"RARE_PRI_UNIT"*/, 0);
      v58 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v29 = System_String__Format(v57, v58, 0);
      v27 = 0;
      spriteName = 0;
      iconKind = 18;
LABEL_85:
      v28 = 1;
      goto LABEL_246;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v59 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v26 = 1.0;
      v60 = price <= exceedCount || exceedCount <= -1;
      v29 = v59;
      v27 = 0;
      spriteName = 0;
      if ( v60 )
        v22 = 1.0;
      else
        v22 = 0.5;
      iconKind = 6;
      goto LABEL_225;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v61 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v26 = 1.0;
      v62 = price <= exceedCount || exceedCount <= -1;
      v29 = v61;
      v27 = 0;
      spriteName = 0;
      if ( v62 )
        v22 = 1.0;
      else
        v22 = 0.5;
      iconKind = 7;
      goto LABEL_225;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v63 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v26 = 1.0;
      v64 = price <= exceedCount || exceedCount <= -1;
      v29 = v63;
      v27 = 0;
      spriteName = 0;
      if ( v64 )
        v22 = 1.0;
      else
        v22 = 0.5;
      iconKind = 5;
      goto LABEL_225;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      goto LABEL_148;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = 1.0;
      v29 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      if ( exceedCount < 0 )
        v65 = 0.5;
      else
        v65 = 1.0;
      v66 = price <= exceedCount || exceedCount <= -1;
      v27 = 0;
      spriteName = 0;
      if ( v66 )
        v22 = v65;
      else
        v22 = 0.5;
      iconKind = 16;
      goto LABEL_225;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v67 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v26 = 1.0;
      v68 = price <= exceedCount || exceedCount <= -1;
      v29 = v67;
      v27 = 0;
      spriteName = 0;
      if ( v68 )
        v22 = 1.0;
      else
        v22 = 0.5;
      iconKind = 17;
      goto LABEL_225;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v26 = 1.0;
      v70 = price <= exceedCount || exceedCount <= -1;
      v29 = v69;
      v27 = 0;
      spriteName = 0;
      if ( v70 )
        v22 = 1.0;
      else
        v22 = 0.5;
      iconKind = 18;
LABEL_225:
      v28 = 1;
      goto LABEL_226;
    case 31:
      v71 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v71 = BalanceConfig_TypeInfo;
      }
      iconKind = v71->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager__GetNumberFormat_41323192(v23, 0);
      v27 = 0;
      v28 = 0;
LABEL_148:
      v26 = 1.0;
      v72 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0;
      if ( v72 )
        v22 = 1.0;
      else
        v22 = 0.5;
LABEL_226:
      v24 = v22;
      v25 = v22;
      goto LABEL_246;
    case 32:
      if ( price < 0 )
        goto LABEL_166;
      v73 = StringLiteral_20647/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20647/*"img_txt_bondslevel"*/ )
        goto LABEL_164;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      v75 = 40;
      goto LABEL_162;
    case 33:
      if ( price < 1 )
        goto LABEL_166;
      v73 = StringLiteral_20485/*"img_nplv"*/;
      if ( !StringLiteral_20485/*"img_nplv"*/ )
        goto LABEL_164;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      v75 = 55;
LABEL_162:
      UIWidget__set_width(iconSprite, v75, 0);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      UIWidget__set_height(iconSprite, 18, 0);
      v20 = exceedCount;
LABEL_164:
      spriteName = (System_String_o *)v73;
      if ( v20 < 1 )
      {
        v27 = 0;
        iconKind = 0;
        goto LABEL_244;
      }
      v76 = System_Int32__ToString((int32_t)&price, 0);
      v77 = System_Int32__ToString((int32_t)&exceedCount, 0);
      v29 = System_String__Concat_63674716(v76, (System_String_o *)StringLiteral_1048/*"/"*/, v77, 0);
      v27 = 0;
      iconKind = 0;
      v28 = 1;
LABEL_203:
      v22 = 1.0;
LABEL_204:
      v24 = 1.0;
      goto LABEL_205;
    case 34:
      if ( price < 1 )
      {
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        spriteName = 0;
        v22 = 1.0;
        v24 = 1.0;
        v25 = 1.0;
        v26 = 1.0;
        goto LABEL_167;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v25 = 0.31373;
          v24 = 0.94118;
          v22 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_243;
          v25 = 0.058824;
          v24 = 0.45098;
          v22 = 1.0;
        }
      }
      else
      {
        v22 = 1.0;
        v24 = 1.0;
        v25 = 1.0;
      }
      v26 = 1.0;
LABEL_243:
      v27 = 0;
      iconKind = 0;
      spriteName = (System_String_o *)StringLiteral_20231/*"icon_nplv"*/;
LABEL_244:
      v28 = 1;
LABEL_245:
      v29 = v23;
      goto LABEL_246;
    case 35:
      v78 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon(v78, 0);
      goto LABEL_184;
    case 36:
      v79 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon_40489440(v79, v20, lv, actualRarity, 0);
      if ( exceedCount < 1 )
        goto LABEL_184;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_299;
      RarityIcon = ServantExceedMaster__GetRarityIcon(
                     (ServantExceedMaster_o *)iconSprite,
                     actualRarity,
                     exceedCount,
                     0,
                     0,
                     0);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_299;
      if ( ServantLvDetailMaster__GetRarityIcon(
             (ServantLvDetailMaster_o *)iconSprite,
             actualRarity,
             lv,
             RarityIcon,
             0,
             0) > 2 )
        v27 = 1;
      else
LABEL_184:
        v27 = 0;
      v28 = 0;
      iconKind = 0;
      v29 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_246;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v30 = System_Int32__ToString_65146576((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        PriceInfo = System_String__Concat_63636468((System_String_o *)StringLiteral_803/*"+"*/, v30, 0);
LABEL_214:
        v29 = PriceInfo;
        v27 = 0;
        v28 = 0;
        iconKind = 0;
        spriteName = 0;
        goto LABEL_246;
      }
      if ( price < 0 )
      {
        PriceInfo = System_Int32__ToString_65146576((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        goto LABEL_214;
      }
LABEL_166:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      spriteName = 0;
LABEL_167:
      v29 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_246:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_299;
      UILabel__set_text((UILabel_o *)iconSprite, v29, 0);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_299;
      v125.fields.r = v22;
      v125.fields.g = v24;
      v125.fields.b = v25;
      v125.fields.a = v26;
      UIWidget__set_color(iconSprite, v125, 0);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0, 0) )
        goto LABEL_253;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_299;
      UILabel__set_text((UILabel_o *)iconSprite, v21, 0);
LABEL_253:
      v100 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v100, 0, 0) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
      if ( !iconSprite )
        goto LABEL_299;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v117 != 56, 0);
      if ( iconKind < 1 )
      {
        if ( v27 )
        {
          v103 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v104 = v103;
          v102 = spriteName;
          AtlasManager__SetEventSprite(v104, spriteName, 0);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v105 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v105, 0);
          v102 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v102, 0);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v101 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v101, iconKind, 0);
        v102 = spriteName;
      }
      if ( !(v28 & 1 | (v102 == 0)) )
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
      v106 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v106, transform, 0) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_299;
        LODWORD(v108) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        v109 = v108;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
        if ( !iconSprite )
          goto LABEL_299;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v29, (System_String_o *)StringLiteral_1/*""*/, 0);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_299;
          v109 = v109 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_299;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v114 = (float)(v109 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v115 = (float)-this->fields.blankSize;
            goto LABEL_295;
          }
          v114 = v109 + (float)this->fields.blankSize;
        }
        v115 = -v114;
LABEL_295:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0);
          if ( iconSprite )
          {
            v124.fields.x = v115;
            v124.fields.y = y;
            v124.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v124, 0);
            return;
          }
        }
LABEL_299:
        sub_1C3E7C0(iconSprite, v19);
      }
      return;
    case 41:
    case 42:
    case 43:
      v32 = price;
      v33 = System_Int32__ToString_65146576((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v34 = (System_String_o **)&StringLiteral_654/*"("*/;
      if ( v32 >= 0 )
        v34 = (System_String_o **)&StringLiteral_674/*"(+"*/;
      v29 = System_String__Concat_63674716(*v34, v33, (System_String_o *)StringLiteral_759/*")"*/, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      if ( price <= exceedCount )
      {
        v22 = 1.0;
        if ( price >= exceedCount )
          v24 = 1.0;
        else
          v24 = 0.0;
        spriteName = 0;
        v25 = v24;
      }
      else
      {
        spriteName = 0;
        v24 = 1.0;
        v22 = 0.0;
LABEL_205:
        v25 = 1.0;
      }
      v26 = 1.0;
      goto LABEL_246;
    case 44:
    case 45:
      if ( price < 0 )
        goto LABEL_166;
      if ( exceedCount < 1 )
        goto LABEL_30;
      v36 = System_Int32__ToString_65146576((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v37 = System_Int32__ToString_65146576((int32_t)&exceedCount, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v29 = System_String__Concat_63674716(v36, (System_String_o *)StringLiteral_1048/*"/"*/, v37, 0);
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_203;
    case 46:
      v81 = &StringLiteral_20453/*"img_list_hp"*/;
      goto LABEL_188;
    case 47:
      v81 = &StringLiteral_20444/*"img_list_atk"*/;
LABEL_188:
      spriteName = (System_String_o *)*v81;
      v29 = System_Int32__ToString_65146576((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      if ( v120 < 0 )
      {
        v83 = System_Int32__ToString((int32_t)&v120, 0);
      }
      else
      {
        v82 = System_Int32__ToString_65146576((int32_t)&v120, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        v83 = System_String__Concat_63636468((System_String_o *)StringLiteral_803/*"+"*/, v82, 0);
      }
      v21 = v83;
      goto LABEL_229;
    case 48:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      spriteName = 0;
      if ( price <= 0 )
        v29 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v29 = v18;
      goto LABEL_246;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetDate(time, 0);
      goto LABEL_214;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20452/*"img_list_costume_num"*/;
      v84 = System_Int32__ToString((int32_t)&price, 0);
      goto LABEL_202;
    case 51:
      v85 = &StringLiteral_20460/*"img_list_release_num"*/;
      goto LABEL_201;
    case 52:
      v85 = &StringLiteral_20459/*"img_list_not_release_costume"*/;
      goto LABEL_201;
    case 53:
      v85 = &StringLiteral_20458/*"img_list_not_clear_cond"*/;
      goto LABEL_201;
    case 54:
      v85 = &StringLiteral_20454/*"img_list_limit_cnt"*/;
LABEL_201:
      spriteName = (System_String_o *)*v85;
      v86 = System_Int32__ToString((int32_t)&price, 0);
      v87 = System_Int32__ToString((int32_t)&exceedCount, 0);
      v84 = System_String__Concat_63674716(v86, (System_String_o *)StringLiteral_1048/*"/"*/, v87, 0);
      goto LABEL_202;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20682/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_6464/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0);
      v118 = price;
      v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118, v89, v90, v91, v92, v93, v94);
      v84 = System_String__Format(v88, v95, 0);
LABEL_202:
      v29 = v84;
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      goto LABEL_203;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = &StringLiteral_9312/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_213:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v42, 0);
      goto LABEL_214;
    case 58:
    case 59:
      v29 = System_Int32__ToString_65146576((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      v28 = 0;
      iconKind = 0;
      v27 = 1;
      spriteName = (System_String_o *)StringLiteral_20691/*"img_txt_grandcombine"*/;
      goto LABEL_203;
    default:
LABEL_30:
      v27 = 0;
      v28 = 0;
      iconKind = 0;
      spriteName = 0;
      goto LABEL_245;
  }
}


void UIIconLabel__Set_41182768(UIIconLabel_o *this, IconLabelInfo_o *info, bool isHide, const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_41158744(
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