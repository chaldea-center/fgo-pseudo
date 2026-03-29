void UIRangeLabel___ctor(UIRangeLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.blankSize = 0xFFFFFFFF00000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIRangeLabel__Clear(UIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4D2FFBE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FFBE = 1;
  }
  UIRangeLabel__InitParam(this, method);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)textLabel, 0, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(textLabel, v3);
  }
}


void UIRangeLabel__InitParam(UIRangeLabel_o *this, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x8

  if ( this->fields.textWidth < 0 )
  {
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      sub_1C93D2C(this, method);
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
  int32_t textWidth; // s9
  float v17; // s8
  float v18; // s1
  UnityEngine_Object_o *iconSprite; // x25
  UnityEngine_Behaviour_o *v20; // x8
  float v21; // s11
  float v22; // s0
  int32_t v23; // s12
  int32_t blankSize; // s13
  float v25; // s11
  float v26; // s12
  float v27; // s0
  struct UILabel_o *v28; // x8
  int32_t mAlignment; // w8
  float v30; // s8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2FFBF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FFBF = 1;
  }
  UIRangeLabel__InitParam(this, (const MethodInfo *)text);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  UILabel__set_text(textLabel, text, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  LODWORD(v15) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  textWidth = this->fields.textWidth;
  v17 = v15;
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
  if ( !textLabel )
    goto LABEL_50;
  v18 = (float)textWidth;
  if ( v17 > (float)textWidth )
    v18 = v17;
  v32.fields.x = (float)this->fields.textWidth / v18;
  v32.fields.y = 1.0;
  v32.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v32, 0);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)System_String__IsNullOrEmpty(iconName, 0);
    v20 = (UnityEngine_Behaviour_o *)this->fields.iconSprite;
    if ( v20 )
    {
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        UnityEngine_Behaviour__set_enabled(v20, 0, 0);
        return;
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.iconSprite, 1, 0);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( textLabel )
      {
        UISprite__set_spriteName((UISprite_o *)textLabel, iconName, 0);
        if ( isIconPixelPerfect )
        {
          textLabel = (UILabel_o *)this->fields.iconSprite;
          if ( !textLabel )
            goto LABEL_50;
          ((void (__fastcall *)(UILabel_o *, const MethodInfo *))textLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
            textLabel,
            textLabel->klass->vtable._33_MakePixelPerfect.method);
        }
        textLabel = (UILabel_o *)this->fields.iconSprite;
        if ( textLabel )
        {
          textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
          if ( textLabel )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0);
            if ( v17 <= (float)this->fields.textWidth || critical )
              v21 = v17;
            else
              v21 = (float)this->fields.textWidth;
            if ( isTextWidthIncludeIcon )
            {
              textLabel = (UILabel_o *)this->fields.iconSprite;
              if ( !textLabel )
                goto LABEL_50;
              ((void (__fastcall *)(UILabel_o *, const MethodInfo *))textLabel->klass->vtable._22_get_localSize.methodPtr)(
                textLabel,
                textLabel->klass->vtable._22_get_localSize.method);
              textLabel = this->fields.textLabel;
              if ( !textLabel )
                goto LABEL_50;
              blankSize = this->fields.blankSize;
              v23 = this->fields.textWidth;
              v25 = v22;
              textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
              if ( !textLabel )
                goto LABEL_50;
              v26 = (float)v23 - (float)(v25 + (float)blankSize);
              if ( v17 <= v26 )
                v27 = v26;
              else
                v27 = v17;
              v33.fields.x = v26 / v27;
              v33.fields.y = 1.0;
              v33.fields.z = 1.0;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v33, 0);
              v21 = v17;
              if ( v17 > v26 )
              {
                if ( critical )
                  v21 = v17;
                else
                  v21 = v26;
              }
            }
            textLabel = (UILabel_o *)System_String__IsNullOrEmpty(text, 0);
            v28 = this->fields.textLabel;
            if ( ((unsigned __int8)textLabel & 1) != 0 )
            {
              if ( !v28 )
                goto LABEL_50;
              v21 = v21 - (float)v28->fields.mSpacingX;
            }
            else if ( !v28 )
            {
              goto LABEL_50;
            }
            mAlignment = v28->fields.mAlignment;
            switch ( mAlignment )
            {
              case 3:
                v30 = -(float)(v21 + (float)this->fields.blankSize);
                break;
              case 2:
                v30 = (float)(v21 * 0.5) + (float)this->fields.blankSize;
                break;
              case 1:
                v30 = v21 + (float)this->fields.blankSize;
                break;
              default:
                v30 = (float)-this->fields.blankSize;
                break;
            }
            textLabel = (UILabel_o *)this->fields.iconSprite;
            if ( textLabel )
            {
              textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
              if ( textLabel )
              {
                v34.fields.x = v30;
                v34.fields.y = localPosition.fields.y;
                v34.fields.z = localPosition.fields.z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v34, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C93D2C(textLabel, v13);
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
    sub_1C93D2C(this, method);
  return textLabel->fields.mText;
}


UnityEngine_Color_o UIRangeLabel__get_color(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(0, value);
  UILabel__set_text(textLabel, value, 0);
}


void UIRangeLabel__set_color(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_1C93D2C(0, method);
  UIWidget__set_color(textLabel, value, 0);
}


void UIRangeLabel__set_effectColor(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C93D2C(0, method);
  UILabel__set_effectColor(textLabel, value, 0);
}