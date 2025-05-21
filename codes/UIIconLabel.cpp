void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4B43FE7 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v3);
    byte_4B43FE7 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UISprite__set_spriteName((UISprite_o *)textLabel, 0LL, 0LL);
      return;
    }
LABEL_15:
    sub_1BDBAD4(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BDBAD4(this, method);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o __fastcall UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0
  float x; // s0
  float y; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B43FEB & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B43FEB = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_1BDBAD4(0LL, v4);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._22_get_localSize.method)(
      v5,
      v5->klass->vtable._23_get_drawingDimensions.methodPtr);
  }
  else
  {
    if ( !byte_4B3E80A )
    {
      sub_1BDB878(&UnityEngine_Vector2_TypeInfo, v4);
      byte_4B3E80A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
  }
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Color_o __fastcall UIIconLabel__GetPurchaseDecisionColor(
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


UnityEngine_Color_o __fastcall UIIconLabel__GetPurchaseDecisionColor_40065456(
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


UnityEngine_Vector2Int_o __fastcall UIIconLabel__GetTextLabelSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BDBAD4(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_40036752(
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
    UIIconLabel__Clear(this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__SetAdjustLong(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t data,
        int64_t adjustData,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x22
  float v15; // s8
  float v16; // s9
  float v17; // s10
  System_String_o *v18; // x20
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  char v21; // w27
  int32_t v22; // w23
  System_String_o *NumberFormat_40281376; // x0
  float v24; // s11
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x24
  UnityEngine_Object_o *iconSprite; // x22
  UISprite_o *v29; // x21
  UISprite_o *v30; // x21
  UnityEngine_Object_o *v31; // x21
  UnityEngine_Object_o *transform; // x22
  float v33; // s0
  float v34; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v37; // x8
  int32_t mAlignment; // w8
  float v39; // s0
  float v40; // s10
  int32_t v41; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v41 = data;
  if ( (byte_4B43FE9 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_10813/*"QP_UNIT"*/, v10);
    sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B43FE9 = 1;
  }
  v12 = System_Int32__ToString((int32_t)&v41, 0LL);
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  v15 = 1.0;
  if ( adjustData <= 0 )
    v16 = 1.0;
  else
    v16 = 0.015686;
  if ( adjustData <= 0 )
    v17 = 1.0;
  else
    v17 = 0.92157;
  v18 = v12;
  if ( iconKind == 24 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_40281376 = LocalizationManager__GetNumberFormat_40281376(v18, 0LL);
    v24 = 1.0;
    if ( v41 <= adjustData || adjustData <= -1 )
      v15 = 1.0;
    else
      v15 = 0.5;
    v18 = NumberFormat_40281376;
    v21 = 0;
    v22 = 5;
    v17 = v15;
    v16 = v15;
  }
  else
  {
    if ( iconKind == 14 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10813/*"QP_UNIT"*/, 0LL);
      v20 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v18, 0LL);
      v18 = System_String__Format(v19, v20, 0LL);
      v21 = 0;
      v22 = 5;
    }
    else
    {
      v22 = 0;
      v21 = 1;
    }
    v24 = 1.0;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_70;
  UILabel__set_text(textLabel, v18, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_70;
  v44.fields.r = v15;
  v44.fields.g = v17;
  v44.fields.b = v16;
  v44.fields.a = v24;
  UIWidget__set_color((UIWidget_o *)textLabel, v44, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_70;
    UILabel__set_text(textLabel, v14, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_70;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0LL);
    if ( !textLabel )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, iconKind != 56, 0LL);
    if ( (v21 & 1) != 0 )
    {
      if ( this->fields.isCustmAtlas )
        this->fields.isCustmAtlas = 0;
      v29 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v29, 0LL);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_70;
      UISprite__set_spriteName((UISprite_o *)textLabel, 0LL, 0LL);
    }
    else
    {
      this->fields.isCustmAtlas = 1;
      v30 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v30, v22, 0LL);
    }
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_70;
    textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
    if ( !textLabel )
      goto LABEL_70;
    textLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)textLabel, 0LL);
    if ( !this->fields.textLabel )
      goto LABEL_70;
    v31 = (UnityEngine_Object_o *)textLabel;
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.textLabel,
                                          0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v31, transform, 0LL) )
    {
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_70;
      LODWORD(v33) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0LL);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_70;
      v34 = v33;
      textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
      if ( !textLabel )
        goto LABEL_70;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0LL);
      y = localPosition.fields.y;
      z = localPosition.fields.z;
      textLabel = (UILabel_o *)System_String__op_Equality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v37 = this->fields.textLabel;
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_70;
        v34 = v34 - (float)v37->fields.mSpacingX;
      }
      else if ( !v37 )
      {
        goto LABEL_70;
      }
      mAlignment = v37->fields.mAlignment;
      if ( mAlignment == 2 )
      {
        v39 = (float)(v34 * 0.5) + (float)this->fields.blankSize;
      }
      else
      {
        if ( mAlignment != 3 )
        {
          v40 = (float)-this->fields.blankSize;
          goto LABEL_66;
        }
        v39 = v34 + (float)this->fields.blankSize;
      }
      v40 = -v39;
LABEL_66:
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( textLabel )
      {
        textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
        if ( textLabel )
        {
          v43.fields.x = v40;
          v43.fields.y = y;
          v43.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v43, 0LL);
          return;
        }
      }
LABEL_70:
      sub_1BDBAD4(textLabel, v13);
    }
  }
}


void __fastcall UIIconLabel__SetAlpha(UIIconLabel_o *this, float alpha, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B43FEC & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B43FEC = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  v8.fields.r = textLabel->fields.mColor.fields.r;
  v8.fields.g = textLabel->fields.mColor.fields.g;
  v8.fields.b = textLabel->fields.mColor.fields.b;
  v8.fields.a = alpha;
  UIWidget__set_color(textLabel, v8, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = (UIWidget_o *)this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    v9.fields.r = textLabel->fields.mColor.fields.r;
    v9.fields.g = textLabel->fields.mColor.fields.g;
    v9.fields.b = textLabel->fields.mColor.fields.b;
    v9.fields.a = alpha;
    UIWidget__set_color(textLabel, v9, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UIWidget_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      v10.fields.r = textLabel->fields.mColor.fields.r;
      v10.fields.g = textLabel->fields.mColor.fields.g;
      v10.fields.b = textLabel->fields.mColor.fields.b;
      v10.fields.a = alpha;
      UIWidget__set_color(textLabel, v10, 0LL);
      return;
    }
LABEL_15:
    sub_1BDBAD4(textLabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__SetCombineResTxt(
        UIIconLabel_o *this,
        int32_t data,
        int32_t adjustData,
        bool isLimit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *NumberFormat; // x22
  System_String_o *v12; // x0
  System_String_o **v13; // x9
  System_String_o *v14; // x21
  UILabel_o *textLabel; // x19
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1

  if ( (byte_4B43FEA & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, *(_QWORD *)&data);
    sub_1BDB878(&StringLiteral_3645/*"COMBINE_RES_INFO"*/, v9);
    sub_1BDB878(&StringLiteral_3635/*"COMBINE_LIMIT_INFO"*/, v10);
    byte_4B43FEA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v12 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  if ( isLimit )
    v13 = (System_String_o **)&StringLiteral_3635/*"COMBINE_LIMIT_INFO"*/;
  else
    v13 = (System_String_o **)&StringLiteral_3645/*"COMBINE_RES_INFO"*/;
  v14 = *v13;
  textLabel = this->fields.textLabel;
  v16 = (Il2CppObject *)v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(v14, 0LL);
  v18 = System_String__Format_62613552(v17, NumberFormat, v16, 0LL);
  if ( !textLabel )
    sub_1BDBAD4(v18, v19);
  UILabel__set_text(textLabel, v18, 0LL);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_40036752(this, 27, 0, 0, 0, 0LL, 1, 0, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_40036752(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, 0, v5);
}


// attributes: thunk
void __fastcall UIIconLabel__SetPurchaseDecisionLong(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int64_t holdCount,
        const MethodInfo *method)
{
  UIIconLabel__SetAdjustLong(this, iconKind, price, holdCount, method);
}


void __fastcall UIIconLabel__SetTextLabelBitmapFont(
        UIIconLabel_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BDBAD4(0LL, bitmapFont);
  UILabel__set_bitmapFont(textLabel, bitmapFont, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BDBAD4(0LL, method);
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))textLabel->klass->vtable._33_MakePixelPerfect.method)(
    textLabel,
    textLabel->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall UIIconLabel__SetTextLabelSize(
        UIIconLabel_o *this,
        UnityEngine_Vector2Int_o size,
        const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  int32_t m_Y; // x19^4

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel
    || (m_Y = size.fields.m_Y,
        UIWidget__set_width(textLabel, size.fields.m_X, 0LL),
        (textLabel = (UIWidget_o *)this->fields.textLabel) == 0LL) )
  {
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BDBAD4)(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  __int64 v3; // x1
  UILabel_o *textLabel; // x19
  System_String_o *v5; // x1

  v2 = this;
  if ( (byte_4B43FED & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15811/*"[/s]"*/, method);
    this = (UIIconLabel_o *)sub_1BDB878(&StringLiteral_15980/*"[s]"*/, v3);
    byte_4B43FED = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_1BDBAD4(this, method);
  v5 = System_String__Concat_62610508(
         (System_String_o *)StringLiteral_15980/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15811/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v5, 0LL);
}


void __fastcall UIIconLabel__Set_40033008(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_40036752(
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
    UIIconLabel__Clear(this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_40036752(
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
  int LvExceedDewDropItemId; // w24
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  System_String_o *v64; // x0
  __int64 v65; // x1
  int v66; // w29
  System_String_o *v67; // x21
  float v68; // s8
  System_String_o *v69; // x25
  float v70; // s10
  float v71; // s11
  float v72; // s9
  int v73; // w20
  char v74; // w22
  System_String_o *v75; // x23
  System_String_o *v76; // x0
  System_String_o *PriceInfo; // x0
  int32_t v78; // w20
  System_String_o *v79; // x0
  System_String_o **v80; // x8
  __int64 v81; // x8
  System_String_o *v82; // x22
  System_String_o *v83; // x0
  __int64 *v84; // x8
  System_String_o *v85; // x0
  System_String_o *v86; // x23
  System_String_o *v87; // x0
  __int64 *v88; // x8
  __int64 *v89; // x8
  System_String_o *v90; // x22
  Il2CppObject *v91; // x0
  System_String_o *v92; // x22
  Il2CppObject *v93; // x0
  int32_t v94; // w22
  System_String_o *v95; // x22
  Il2CppObject *v96; // x0
  System_String_o *v97; // x22
  Il2CppObject *v98; // x0
  System_String_o *v99; // x22
  Il2CppObject *v100; // x0
  System_String_o *v101; // x22
  Il2CppObject *v102; // x0
  System_String_o *v103; // x22
  Il2CppObject *v104; // x0
  System_String_o *v105; // x0
  bool v106; // cc
  System_String_o *v107; // x0
  bool v108; // cc
  System_String_o *v109; // x0
  bool v110; // cc
  float v111; // s1
  bool v112; // cc
  System_String_o *v113; // x0
  bool v114; // cc
  System_String_o *v115; // x0
  bool v116; // cc
  BalanceConfig_c *v117; // x0
  bool v118; // cc
  __int64 v119; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v121; // w1
  System_String_o *v122; // x23
  System_String_o *v123; // x0
  int32_t v124; // w22
  int32_t v125; // w22
  int32_t RarityIcon; // w25
  __int64 *v127; // x8
  System_String_o *v128; // x0
  System_String_o *v129; // x0
  System_String_o *v130; // x0
  __int64 *v131; // x8
  System_String_o *v132; // x23
  System_String_o *v133; // x0
  System_String_o *v134; // x23
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  Il2CppObject *v138; // x0
  System_String_o *NumberFormat_40281376; // x0
  bool v140; // cc
  System_String_o *v141; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v143; // x21
  UISprite_o *v144; // x20
  System_String_o *v145; // x20
  struct UISprite_o *v146; // x20
  UISprite_o *v147; // x0
  UISprite_o *v148; // x20
  UnityEngine_Object_o *v149; // x20
  UnityEngine_Object_o *transform; // x21
  float v151; // s0
  float v152; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v157; // s0
  float v158; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int v160; // [xsp+8h] [xbp-98h]
  int32_t v161; // [xsp+Ch] [xbp-94h] BYREF
  int v162; // [xsp+10h] [xbp-90h] BYREF
  int32_t v163; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v168; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v163 = equipData;
  LvExceedDewDropItemId = iconKind;
  if ( (byte_4B43FE8 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_1BDB878(&BalanceConfig_TypeInfo, v18);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantExceedMaster___, v19);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v20);
    sub_1BDB878(&DataManager_TypeInfo, v21);
    sub_1BDB878(&int_TypeInfo, v22);
    sub_1BDB878(&LocalizationManager_TypeInfo, v23);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v24);
    sub_1BDB878(&Rarity_TypeInfo, v25);
    sub_1BDB878(&StringLiteral_20437/*"img_list_atk"*/, v26);
    sub_1BDB878(&StringLiteral_5655/*"EVENT_ITEM_UNIT"*/, v27);
    sub_1BDB878(&StringLiteral_10813/*"QP_UNIT"*/, v28);
    sub_1BDB878(&StringLiteral_812/*"+"*/, v29);
    sub_1BDB878(&StringLiteral_20451/*"img_list_not_clear_cond"*/, v30);
    sub_1BDB878(&StringLiteral_9308/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v31);
    sub_1BDB878(&StringLiteral_12329/*"STONE_FRAGMENTS_UNIT"*/, v32);
    sub_1BDB878(&StringLiteral_6533/*"FRIENDSHIP_UNIT"*/, v33);
    sub_1BDB878(&StringLiteral_6476/*"FOLLOWER_SELECT_TYPE_POINT"*/, v34);
    sub_1BDB878(&StringLiteral_20637/*"img_txt_bondslevel"*/, v35);
    sub_1BDB878(&StringLiteral_20444/*"img_list_cost"*/, v36);
    sub_1BDB878(&StringLiteral_20452/*"img_list_not_release_costume"*/, v37);
    sub_1BDB878(&StringLiteral_20447/*"img_list_limit_cnt"*/, v38);
    sub_1BDB878(&StringLiteral_20231/*"icon_nplv"*/, v39);
    sub_1BDB878(&StringLiteral_1779/*"?"*/, v40);
    sub_1BDB878(&StringLiteral_20449/*"img_list_lv"*/, v41);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v42);
    sub_1BDB878(&StringLiteral_8528/*"MANA_UNIT"*/, v43);
    sub_1BDB878(&StringLiteral_397/*"#,0"*/, v44);
    sub_1BDB878(&StringLiteral_20680/*"img_txt_grandcombine"*/, v45);
    sub_1BDB878(&StringLiteral_20446/*"img_list_hp"*/, v46);
    sub_1BDB878(&StringLiteral_20445/*"img_list_costume_num"*/, v47);
    sub_1BDB878(&StringLiteral_655/*"("*/, v48);
    sub_1BDB878(&StringLiteral_1973/*"ANONYMOUS_UNIT"*/, v49);
    sub_1BDB878(&StringLiteral_20672/*"img_txt_fp"*/, v50);
    sub_1BDB878(&StringLiteral_767/*")"*/, v51);
    sub_1BDB878(&StringLiteral_12363/*"STONE_UNIT"*/, v52);
    sub_1BDB878(&StringLiteral_1784/*"??/??"*/, v53);
    sub_1BDB878(&StringLiteral_675/*"(+"*/, v54);
    sub_1BDB878(&StringLiteral_1/*""*/, v55);
    sub_1BDB878(&StringLiteral_6528/*"FREE_NAME"*/, v56);
    sub_1BDB878(&StringLiteral_1783/*"??"*/, v57);
    sub_1BDB878(&StringLiteral_20453/*"img_list_release_num"*/, v58);
    sub_1BDB878(&StringLiteral_20478/*"img_nplv"*/, v59);
    sub_1BDB878(&StringLiteral_10956/*"RARE_PRI_UNIT"*/, v60);
    sub_1BDB878(&StringLiteral_20448/*"img_list_limitcount"*/, v61);
    sub_1BDB878(&StringLiteral_1785/*"???"*/, v62);
    sub_1BDB878(&StringLiteral_20450/*"img_list_no"*/, v63);
    byte_4B43FE8 = 1;
  }
  v162 = equipData + data;
  v64 = System_Int32__ToString((int32_t)&v162, 0LL);
  v66 = exceedCount;
  v67 = (System_String_o *)StringLiteral_1/*""*/;
  v68 = 1.0;
  v69 = v64;
  if ( exceedCount <= 0 )
    v70 = 1.0;
  else
    v70 = 0.92157;
  if ( exceedCount <= 0 )
    v71 = 1.0;
  else
    v71 = 0.015686;
  v72 = 1.0;
  v160 = LvExceedDewDropItemId;
  spriteName = 0LL;
  v73 = 0;
  v74 = 0;
  v75 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( LvExceedDewDropItemId )
  {
    case 0:
      goto LABEL_246;
    case 2:
      if ( price < 1 )
        goto LABEL_166;
      spriteName = (System_String_o *)StringLiteral_20449/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v73 = 0;
        v74 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v75 = (System_String_o *)StringLiteral_1783/*"??"*/;
        else
          v75 = v64;
        goto LABEL_246;
      }
      if ( isHide )
      {
        v73 = 0;
        v74 = 0;
        LvExceedDewDropItemId = 0;
        v75 = (System_String_o *)StringLiteral_1784/*"??/??"*/;
        goto LABEL_203;
      }
      v75 = System_Int32__ToString((int32_t)&price, 0LL);
      v68 = 1.0;
      if ( !isMaxHide )
      {
        v141 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
        v75 = System_String__Concat_62610508(v75, (System_String_o *)StringLiteral_1061/*"/"*/, v141, 0LL);
      }
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
    case 3:
      v84 = &StringLiteral_20446/*"img_list_hp"*/;
      goto LABEL_39;
    case 5:
      v84 = &StringLiteral_20437/*"img_list_atk"*/;
LABEL_39:
      spriteName = (System_String_o *)*v84;
      v162 = v163 + price;
      v85 = System_Int32__ToString_64087256((int32_t)&v162, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v75 = (System_String_o *)StringLiteral_1785/*"???"*/;
      else
        v75 = v85;
      goto LABEL_246;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20444/*"img_list_cost"*/;
      if ( v163 < 1 )
      {
        v73 = 0;
        v74 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_245;
      }
      v86 = System_Int32__ToString((int32_t)&price, 0LL);
      v87 = System_Int32__ToString((int32_t)&v163, 0LL);
      v75 = System_String__Concat_62610508(v86, (System_String_o *)StringLiteral_812/*"+"*/, v87, 0LL);
LABEL_229:
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_246;
    case 8:
    case 57:
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      v81 = StringLiteral_20450/*"img_list_no"*/;
      v75 = v64;
      goto LABEL_50;
    case 9:
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      if ( price >= 1 )
        v75 = v64;
      else
        v75 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v81 = StringLiteral_20448/*"img_list_limitcount"*/;
      else
        v81 = 0LL;
LABEL_50:
      spriteName = (System_String_o *)v81;
      goto LABEL_246;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v88 = &StringLiteral_6528/*"FREE_NAME"*/;
      goto LABEL_213;
    case 11:
    case 27:
      if ( isHide )
      {
        v75 = (System_String_o *)StringLiteral_1779/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat_40281376 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
        v66 = exceedCount;
        v75 = NumberFormat_40281376;
      }
      v72 = 1.0;
      v140 = price <= v66 || v66 <= -1;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      if ( v140 )
        v68 = 1.0;
      else
        v68 = 0.5;
      spriteName = 0LL;
      goto LABEL_225;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v89 = &StringLiteral_12363/*"STONE_UNIT"*/;
      goto LABEL_78;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_8528/*"MANA_UNIT"*/, 0LL);
      v91 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v75 = System_String__Format(v90, v91, 0LL);
      v73 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 7;
      goto LABEL_85;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_10813/*"QP_UNIT"*/, 0LL);
      v93 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v75 = System_String__Format(v92, v93, 0LL);
      v73 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 5;
      goto LABEL_85;
    case 15:
      v94 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetPriceInfo(v94, 0LL);
      goto LABEL_214;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v95 = LocalizationManager__Get((System_String_o *)StringLiteral_6533/*"FRIENDSHIP_UNIT"*/, 0LL);
      v96 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      PriceInfo = System_String__Format(v95, v96, 0LL);
      goto LABEL_214;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      goto LABEL_214;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_ITEM_UNIT"*/, 0LL);
      v98 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v75 = System_String__Format(v97, v98, 0LL);
      v73 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_85;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v89 = &StringLiteral_12329/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_78:
      v99 = LocalizationManager__Get((System_String_o *)*v89, 0LL);
      v100 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v75 = System_String__Format(v99, v100, 0LL);
      v73 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 6;
      goto LABEL_85;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_1973/*"ANONYMOUS_UNIT"*/, 0LL);
      v102 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v75 = System_String__Format(v101, v102, 0LL);
      v73 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 17;
      goto LABEL_85;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v103 = LocalizationManager__Get((System_String_o *)StringLiteral_10956/*"RARE_PRI_UNIT"*/, 0LL);
      v104 = (Il2CppObject *)LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v75 = System_String__Format(v103, v104, 0LL);
      v73 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 18;
LABEL_85:
      v74 = 1;
      goto LABEL_246;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v105 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v72 = 1.0;
      v106 = price <= exceedCount || exceedCount <= -1;
      v75 = v105;
      v73 = 0;
      spriteName = 0LL;
      if ( v106 )
        v68 = 1.0;
      else
        v68 = 0.5;
      LvExceedDewDropItemId = 6;
      goto LABEL_225;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v107 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v72 = 1.0;
      v108 = price <= exceedCount || exceedCount <= -1;
      v75 = v107;
      v73 = 0;
      spriteName = 0LL;
      if ( v108 )
        v68 = 1.0;
      else
        v68 = 0.5;
      LvExceedDewDropItemId = 7;
      goto LABEL_225;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v109 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v72 = 1.0;
      v110 = price <= exceedCount || exceedCount <= -1;
      v75 = v109;
      v73 = 0;
      spriteName = 0LL;
      if ( v110 )
        v68 = 1.0;
      else
        v68 = 0.5;
      LvExceedDewDropItemId = 5;
      goto LABEL_225;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_148;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v72 = 1.0;
      v75 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      if ( exceedCount < 0 )
        v111 = 0.5;
      else
        v111 = 1.0;
      v112 = price <= exceedCount || exceedCount <= -1;
      v73 = 0;
      spriteName = 0LL;
      if ( v112 )
        v68 = v111;
      else
        v68 = 0.5;
      LvExceedDewDropItemId = 16;
      goto LABEL_225;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v113 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v72 = 1.0;
      v114 = price <= exceedCount || exceedCount <= -1;
      v75 = v113;
      v73 = 0;
      spriteName = 0LL;
      if ( v114 )
        v68 = 1.0;
      else
        v68 = 0.5;
      LvExceedDewDropItemId = 17;
      goto LABEL_225;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v115 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v72 = 1.0;
      v116 = price <= exceedCount || exceedCount <= -1;
      v75 = v115;
      v73 = 0;
      spriteName = 0LL;
      if ( v116 )
        v68 = 1.0;
      else
        v68 = 0.5;
      LvExceedDewDropItemId = 18;
LABEL_225:
      v74 = 1;
      goto LABEL_226;
    case 31:
      v117 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v117 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v117->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = LocalizationManager__GetNumberFormat_40281376(v69, 0LL);
      v73 = 0;
      v74 = 0;
LABEL_148:
      v72 = 1.0;
      v118 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0LL;
      if ( v118 )
        v68 = 1.0;
      else
        v68 = 0.5;
LABEL_226:
      v70 = v68;
      v71 = v68;
      goto LABEL_246;
    case 32:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_166;
      v119 = StringLiteral_20637/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20637/*"img_txt_bondslevel"*/ )
        goto LABEL_164;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      v121 = 40;
      goto LABEL_162;
    case 33:
      if ( price < 1 )
        goto LABEL_166;
      v119 = StringLiteral_20478/*"img_nplv"*/;
      if ( !StringLiteral_20478/*"img_nplv"*/ )
        goto LABEL_164;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      v121 = 55;
LABEL_162:
      UIWidget__set_width(iconSprite, v121, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      UIWidget__set_height(iconSprite, 18, 0LL);
      v66 = exceedCount;
LABEL_164:
      spriteName = (System_String_o *)v119;
      if ( v66 < 1 )
      {
        v73 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_244;
      }
      v122 = System_Int32__ToString((int32_t)&price, 0LL);
      v123 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v75 = System_String__Concat_62610508(v122, (System_String_o *)StringLiteral_1061/*"/"*/, v123, 0LL);
      v73 = 0;
      LvExceedDewDropItemId = 0;
      v74 = 1;
LABEL_203:
      v68 = 1.0;
LABEL_204:
      v70 = 1.0;
      goto LABEL_205;
    case 34:
      if ( price < 1 )
      {
        v73 = 0;
        v74 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        v68 = 1.0;
        v70 = 1.0;
        v71 = 1.0;
        v72 = 1.0;
        goto LABEL_167;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v71 = 0.31373;
          v70 = 0.94118;
          v68 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_243;
          v71 = 0.058824;
          v70 = 0.45098;
          v68 = 1.0;
        }
      }
      else
      {
        v68 = 1.0;
        v70 = 1.0;
        v71 = 1.0;
      }
      v72 = 1.0;
LABEL_243:
      v73 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = (System_String_o *)StringLiteral_20231/*"icon_nplv"*/;
LABEL_244:
      v74 = 1;
LABEL_245:
      v75 = v69;
      goto LABEL_246;
    case 35:
      v124 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon(v124, 0LL);
      goto LABEL_184;
    case 36:
      v125 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon_39464760(v125, v66, lv, actualRarity, 0LL);
      if ( exceedCount < 1 )
        goto LABEL_184;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_299;
      RarityIcon = ServantExceedMaster__GetRarityIcon(
                     (ServantExceedMaster_o *)iconSprite,
                     actualRarity,
                     exceedCount,
                     0,
                     0,
                     0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_299;
      if ( ServantLvDetailMaster__GetRarityIcon(
             (ServantLvDetailMaster_o *)iconSprite,
             actualRarity,
             lv,
             RarityIcon,
             0,
             0LL) > 2 )
        v73 = 1;
      else
LABEL_184:
        v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      v75 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_246;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v76 = System_Int32__ToString_64087256((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_62572260((System_String_o *)StringLiteral_812/*"+"*/, v76, 0LL);
LABEL_214:
        v75 = PriceInfo;
        v73 = 0;
        v74 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        goto LABEL_246;
      }
      if ( (price & 0x80000000) != 0 )
      {
        PriceInfo = System_Int32__ToString_64087256((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
        goto LABEL_214;
      }
LABEL_166:
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
LABEL_167:
      v75 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_246:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_299;
      UILabel__set_text((UILabel_o *)iconSprite, v75, 0LL);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_299;
      v168.fields.r = v68;
      v168.fields.g = v70;
      v168.fields.b = v71;
      v168.fields.a = v72;
      UIWidget__set_color(iconSprite, v168, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_253;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_299;
      UILabel__set_text((UILabel_o *)iconSprite, v67, 0LL);
LABEL_253:
      v143 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v143, 0LL, 0LL) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_299;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v160 != 56, 0LL);
      if ( LvExceedDewDropItemId < 1 )
      {
        if ( v73 )
        {
          v146 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v147 = v146;
          v145 = spriteName;
          AtlasManager__SetEventSprite(v147, spriteName, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v148 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v148, 0LL);
          v145 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v145, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v144 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v144, LvExceedDewDropItemId, 0LL);
        v145 = spriteName;
      }
      if ( !(v74 & 1 | (v145 == 0LL)) )
      {
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))iconSprite->klass->vtable._33_MakePixelPerfect.method)(
          iconSprite,
          iconSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_299;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_299;
      iconSprite = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)iconSprite, 0LL);
      if ( !this->fields.textLabel )
        goto LABEL_299;
      v149 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v149, transform, 0LL) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_299;
        LODWORD(v151) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0LL);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_299;
        v152 = v151;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
        if ( !iconSprite )
          goto LABEL_299;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v75, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_299;
          v152 = v152 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_299;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v157 = (float)(v152 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v158 = (float)-this->fields.blankSize;
            goto LABEL_295;
          }
          v157 = v152 + (float)this->fields.blankSize;
        }
        v158 = -v157;
LABEL_295:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v167.fields.x = v158;
            v167.fields.y = y;
            v167.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v167, 0LL);
            return;
          }
        }
LABEL_299:
        sub_1BDBAD4(iconSprite, v65);
      }
      return;
    case 41:
    case 42:
    case 43:
      v78 = price;
      v79 = System_Int32__ToString_64087256((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v80 = (System_String_o **)&StringLiteral_655/*"("*/;
      if ( v78 >= 0 )
        v80 = (System_String_o **)&StringLiteral_675/*"(+"*/;
      v75 = System_String__Concat_62610508(*v80, v79, (System_String_o *)StringLiteral_767/*")"*/, 0LL);
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      if ( price <= exceedCount )
      {
        v68 = 1.0;
        if ( price >= exceedCount )
          v70 = 1.0;
        else
          v70 = 0.0;
        spriteName = 0LL;
        v71 = v70;
      }
      else
      {
        spriteName = 0LL;
        v70 = 1.0;
        v68 = 0.0;
LABEL_205:
        v71 = 1.0;
      }
      v72 = 1.0;
      goto LABEL_246;
    case 44:
    case 45:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_166;
      if ( exceedCount < 1 )
        goto LABEL_30;
      v82 = System_Int32__ToString_64087256((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v83 = System_Int32__ToString_64087256((int32_t)&exceedCount, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v75 = System_String__Concat_62610508(v82, (System_String_o *)StringLiteral_1061/*"/"*/, v83, 0LL);
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_203;
    case 46:
      v127 = &StringLiteral_20446/*"img_list_hp"*/;
      goto LABEL_188;
    case 47:
      v127 = &StringLiteral_20437/*"img_list_atk"*/;
LABEL_188:
      spriteName = (System_String_o *)*v127;
      v75 = System_Int32__ToString_64087256((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      if ( (v163 & 0x80000000) != 0 )
      {
        v129 = System_Int32__ToString((int32_t)&v163, 0LL);
      }
      else
      {
        v128 = System_Int32__ToString_64087256((int32_t)&v163, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
        v129 = System_String__Concat_62572260((System_String_o *)StringLiteral_812/*"+"*/, v128, 0LL);
      }
      v67 = v129;
      goto LABEL_229;
    case 48:
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      if ( price <= 0 )
        v75 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v75 = v64;
      goto LABEL_246;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetDate(time, 0LL);
      goto LABEL_214;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20445/*"img_list_costume_num"*/;
      v130 = System_Int32__ToString((int32_t)&price, 0LL);
      goto LABEL_202;
    case 51:
      v131 = &StringLiteral_20453/*"img_list_release_num"*/;
      goto LABEL_201;
    case 52:
      v131 = &StringLiteral_20452/*"img_list_not_release_costume"*/;
      goto LABEL_201;
    case 53:
      v131 = &StringLiteral_20451/*"img_list_not_clear_cond"*/;
      goto LABEL_201;
    case 54:
      v131 = &StringLiteral_20447/*"img_list_limit_cnt"*/;
LABEL_201:
      spriteName = (System_String_o *)*v131;
      v132 = System_Int32__ToString((int32_t)&price, 0LL);
      v133 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v130 = System_String__Concat_62610508(v132, (System_String_o *)StringLiteral_1061/*"/"*/, v133, 0LL);
      goto LABEL_202;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20672/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v134 = LocalizationManager__Get((System_String_o *)StringLiteral_6476/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v161 = price;
      v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v161, v135, v136, v137);
      v130 = System_String__Format(v134, v138, 0LL);
LABEL_202:
      v75 = v130;
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_203;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v88 = &StringLiteral_9308/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_213:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v88, 0LL);
      goto LABEL_214;
    case 58:
    case 59:
      v75 = System_Int32__ToString_64087256((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v74 = 0;
      LvExceedDewDropItemId = 0;
      v73 = 1;
      spriteName = (System_String_o *)StringLiteral_20680/*"img_txt_grandcombine"*/;
      goto LABEL_203;
    default:
LABEL_30:
      v73 = 0;
      v74 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_245;
  }
}