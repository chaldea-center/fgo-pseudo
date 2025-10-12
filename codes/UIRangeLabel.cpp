void UIRangeLabel___ctor(UIRangeLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.blankSize = 0xFFFFFFFF00000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIRangeLabel__Clear(UIRangeLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4C36F86 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36F86 = 1;
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
    sub_1C32E7C(textLabel);
  }
}


void UIRangeLabel__InitParam(UIRangeLabel_o *this, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x8

  if ( this->fields.textWidth < 0 )
  {
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      sub_1C32E7C(this);
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
  UILabel_o *textLabel; // x0
  float v14; // s0
  int32_t textWidth; // s9
  float v16; // s8
  float v17; // s1
  UnityEngine_Object_o *iconSprite; // x25
  UnityEngine_Behaviour_o *v19; // x8
  float y; // s9
  float z; // s10
  float v22; // s11
  float v23; // s0
  int32_t v24; // s12
  int32_t blankSize; // s13
  float v26; // s11
  float v27; // s12
  float v28; // s0
  struct UILabel_o *v29; // x8
  int32_t mAlignment; // w8
  float v31; // s8
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36F87 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F87 = 1;
  }
  UIRangeLabel__InitParam(this, (const MethodInfo *)text);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  UILabel__set_text(textLabel, text, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  LODWORD(v14) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  textWidth = this->fields.textWidth;
  v16 = v14;
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
  if ( !textLabel )
    goto LABEL_50;
  v17 = (float)textWidth;
  if ( v16 > (float)textWidth )
    v17 = v16;
  v32.fields.x = (float)this->fields.textWidth / v17;
  v32.fields.y = 1.0;
  v32.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v32, 0);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    textLabel = (UILabel_o *)System_String__IsNullOrEmpty(iconName, 0);
    v19 = (UnityEngine_Behaviour_o *)this->fields.iconSprite;
    if ( v19 )
    {
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        UnityEngine_Behaviour__set_enabled(v19, 0, 0);
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
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            if ( v16 <= (float)this->fields.textWidth || critical )
              v22 = v16;
            else
              v22 = (float)this->fields.textWidth;
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
              v24 = this->fields.textWidth;
              v26 = v23;
              textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
              if ( !textLabel )
                goto LABEL_50;
              v27 = (float)v24 - (float)(v26 + (float)blankSize);
              if ( v16 <= v27 )
                v28 = v27;
              else
                v28 = v16;
              v34.fields.x = v27 / v28;
              v34.fields.y = 1.0;
              v34.fields.z = 1.0;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v34, 0);
              v22 = v16;
              if ( v16 > v27 )
              {
                if ( critical )
                  v22 = v16;
                else
                  v22 = v27;
              }
            }
            textLabel = (UILabel_o *)System_String__IsNullOrEmpty(text, 0);
            v29 = this->fields.textLabel;
            if ( ((unsigned __int8)textLabel & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_50;
              v22 = v22 - (float)v29->fields.mSpacingX;
            }
            else if ( !v29 )
            {
              goto LABEL_50;
            }
            mAlignment = v29->fields.mAlignment;
            switch ( mAlignment )
            {
              case 3:
                v31 = -(float)(v22 + (float)this->fields.blankSize);
                break;
              case 2:
                v31 = (float)(v22 * 0.5) + (float)this->fields.blankSize;
                break;
              case 1:
                v31 = v22 + (float)this->fields.blankSize;
                break;
              default:
                v31 = (float)-this->fields.blankSize;
                break;
            }
            textLabel = (UILabel_o *)this->fields.iconSprite;
            if ( textLabel )
            {
              textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0);
              if ( textLabel )
              {
                v35.fields.x = v31;
                v35.fields.y = y;
                v35.fields.z = z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v35, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C32E7C(textLabel);
  }
}


System_String_o *UIRangeLabel__get_Text(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(this);
  return textLabel->fields.mText;
}


UnityEngine_Color_o UIRangeLabel__get_color(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(this);
  r = textLabel->fields.mColor.fields.r;
  g = textLabel->fields.mColor.fields.g;
  b = textLabel->fields.mColor.fields.b;
  a = textLabel->fields.mColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Color_o UIRangeLabel__get_effectColor(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(this);
  r = textLabel->fields.mEffectColor.fields.r;
  g = textLabel->fields.mEffectColor.fields.g;
  b = textLabel->fields.mEffectColor.fields.b;
  a = textLabel->fields.mEffectColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


void UIRangeLabel__set_Text(UIRangeLabel_o *this, System_String_o *value, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(0);
  UILabel__set_text(textLabel, value, 0);
}


void UIRangeLabel__set_color(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(0);
  UIWidget__set_color(textLabel, value, 0);
}


void UIRangeLabel__set_effectColor(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(0);
  UILabel__set_effectColor(textLabel, value, 0);
}