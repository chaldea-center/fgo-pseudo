void UIRangeLabel___ctor(UIRangeLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.blankSize = 0xFFFFFFFF00000002LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void UIRangeLabel__Clear(UIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *textLabel; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_596FD75 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FD75 = 1;
  }
  UIRangeLabel__InitParam(this, method);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)textLabel, 0, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(textLabel, v3);
  }
}


void UIRangeLabel__InitParam(UIRangeLabel_o *this, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0

  if ( this->fields.textWidth < 0 )
  {
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      sub_2213CDC(0, method);
    this->fields.textWidth = textLabel->fields.mWidth;
    UIWidget__set_width(textLabel, 1000, 0);
  }
}


void UIRangeLabel__Set(
        UIRangeLabel_o *this,
        System_String_o *text,
        System_String_o *iconName,
        bool isIconPixelPerfect,
        bool critical,
        bool isTextWidthIncludeIcon,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *textLabel; // x0
  float v15; // s0
  int32_t textWidth; // w25
  float v17; // s8
  float v18; // s0
  __int64 v19; // x1
  UnityEngine_Object_o *iconSprite; // x25
  bool IsNullOrEmpty; // w8
  float v22; // s11
  float v23; // s0
  int32_t v24; // s12
  int32_t blankSize; // s13
  float v26; // s11
  float v28; // s12
  float v29; // s0
  struct UILabel_o *v30; // x8
  int32_t mAlignment; // w9
  int32_t v32; // w8
  float v33; // s8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FD76 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD76 = 1;
  }
  UIRangeLabel__InitParam(this, (const MethodInfo *)text);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_51;
  UILabel__set_text(textLabel, text, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_51;
  LODWORD(v15) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_51;
  textWidth = this->fields.textWidth;
  v17 = v15;
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
  if ( !textLabel )
    goto LABEL_51;
  v18 = (float)textWidth;
  v35.fields.z = 1.0;
  if ( v17 > (float)textWidth )
    v18 = v17;
  v35.fields.x = (float)this->fields.textWidth / v18;
  v35.fields.y = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v35, 0);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(iconName, 0);
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( IsNullOrEmpty )
    {
      if ( textLabel )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)textLabel, 0, 0);
        return;
      }
      goto LABEL_51;
    }
    if ( !textLabel )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)textLabel, 1, 0);
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_51;
    UISprite__set_spriteName((UISprite_o *)textLabel, iconName, 0);
    if ( isIconPixelPerfect )
    {
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_51;
      ((void (__fastcall *)(UILabel_o *, const MethodInfo *))textLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
        textLabel,
        textLabel->klass->vtable._33_MakePixelPerfect.method);
    }
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel )
      goto LABEL_51;
    textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_51;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0);
    if ( v17 <= (float)this->fields.textWidth || critical )
      v22 = v17;
    else
      v22 = (float)this->fields.textWidth;
    if ( isTextWidthIncludeIcon )
    {
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( !textLabel )
        goto LABEL_51;
      ((void (__fastcall *)(UILabel_o *, const MethodInfo *))textLabel->klass->vtable._22_get_localSize.methodPtr)(
        textLabel,
        textLabel->klass->vtable._22_get_localSize.method);
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_51;
      blankSize = this->fields.blankSize;
      v24 = this->fields.textWidth;
      v26 = v23;
      textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
      if ( !textLabel )
        goto LABEL_51;
      v36.fields.z = 1.0;
      v28 = (float)v24 - (float)(v26 + (float)blankSize);
      v36.fields.y = 1.0;
      if ( v17 <= v28 )
        v29 = v28;
      else
        v29 = v17;
      v36.fields.x = v28 / v29;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v36, 0);
      v22 = v17;
      if ( v17 > v28 )
      {
        if ( critical )
          v22 = v17;
        else
          v22 = v28;
      }
    }
    textLabel = (UILabel_o *)System_String__IsNullOrEmpty(text, 0);
    v30 = this->fields.textLabel;
    if ( ((unsigned __int8)textLabel & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_51;
      v22 = v22 - (float)v30->fields.mSpacingX;
    }
    else if ( !v30 )
    {
      goto LABEL_51;
    }
    mAlignment = v30->fields.mAlignment;
    v32 = this->fields.blankSize;
    if ( mAlignment == 3 )
    {
      v33 = -(float)(v22 + (float)v32);
    }
    else if ( mAlignment == 2 )
    {
      v33 = (float)(v22 * 0.5) + (float)v32;
    }
    else
    {
      v33 = mAlignment == 1 ? v22 + (float)v32 : (float)-v32;
    }
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( !textLabel
      || (textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0)) == 0 )
    {
LABEL_51:
      sub_2213CDC(textLabel, v13);
    }
    v37.fields.x = v33;
    v37.fields.y = localPosition.fields.y;
    v37.fields.z = localPosition.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v37, 0);
  }
}


UILabel_o *UIRangeLabel__get_Label(UIRangeLabel_o *this, const MethodInfo *method)
{
  return this->fields.textLabel;
}


System_String_o *UIRangeLabel__get_Text(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_2213CDC(this, method);
  return textLabel->fields.mText;
}


UnityEngine_Color_o UIRangeLabel__get_color(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_2213CDC(this, method);
  result.fields.r = textLabel->fields.mColor.fields.r;
  result.fields.g = textLabel->fields.mColor.fields.g;
  result.fields.b = textLabel->fields.mColor.fields.b;
  result.fields.a = textLabel->fields.mColor.fields.a;
  return result;
}


UnityEngine_Color_o UIRangeLabel__get_effectColor(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_2213CDC(this, method);
  result.fields.r = textLabel->fields.mEffectColor.fields.r;
  result.fields.g = textLabel->fields.mEffectColor.fields.g;
  result.fields.b = textLabel->fields.mEffectColor.fields.b;
  result.fields.a = textLabel->fields.mEffectColor.fields.a;
  return result;
}


void UIRangeLabel__set_Text(UIRangeLabel_o *this, System_String_o *value, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_2213CDC(0, value);
  UILabel__set_text(textLabel, value, 0);
}


void UIRangeLabel__set_color(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_2213CDC(0, method);
  UIWidget__set_color(textLabel, value, 0);
}


void UIRangeLabel__set_effectColor(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_2213CDC(0, method);
  UILabel__set_effectColor(textLabel, value, 0);
}