void __fastcall UIRangeLabel___ctor(UIRangeLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.blankSize = 0xFFFFFFFF00000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIRangeLabel__Clear(UIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4B1BB18 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B1BB18 = 1;
  }
  UIRangeLabel__InitParam(this, method);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)textLabel, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(textLabel, v4);
  }
}


void __fastcall UIRangeLabel__InitParam(UIRangeLabel_o *this, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x8

  if ( (this->fields.textWidth & 0x80000000) != 0 )
  {
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      sub_1BCB254(this, method);
    this->fields.textWidth = textLabel->fields.mWidth;
    UIWidget__set_width(textLabel, 1000, 0LL);
  }
}


void __fastcall UIRangeLabel__Set(
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
  float y; // s9
  float z; // s10
  float v23; // s11
  float v24; // s0
  int32_t v25; // s12
  int32_t blankSize; // s13
  float v27; // s11
  float v28; // s12
  float v29; // s0
  struct UILabel_o *v30; // x8
  int32_t mAlignment; // w8
  float v32; // s8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1BB19 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, text);
    byte_4B1BB19 = 1;
  }
  UIRangeLabel__InitParam(this, (const MethodInfo *)text);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  UILabel__set_text(textLabel, text, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  LODWORD(v15) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_50;
  textWidth = this->fields.textWidth;
  v17 = v15;
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
  if ( !textLabel )
    goto LABEL_50;
  v18 = (float)textWidth;
  if ( v17 > (float)textWidth )
    v18 = v17;
  v33.fields.x = (float)this->fields.textWidth / v18;
  v33.fields.y = 1.0;
  v33.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v33, 0LL);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)System_String__IsNullOrEmpty(iconName, 0LL);
    v20 = (UnityEngine_Behaviour_o *)this->fields.iconSprite;
    if ( v20 )
    {
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        UnityEngine_Behaviour__set_enabled(v20, 0, 0LL);
        return;
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.iconSprite, 1, 0LL);
      textLabel = (UILabel_o *)this->fields.iconSprite;
      if ( textLabel )
      {
        UISprite__set_spriteName((UISprite_o *)textLabel, iconName, 0LL);
        if ( isIconPixelPerfect )
        {
          textLabel = (UILabel_o *)this->fields.iconSprite;
          if ( !textLabel )
            goto LABEL_50;
          ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))textLabel->klass->vtable._33_MakePixelPerfect.method)(
            textLabel,
            textLabel->klass->vtable._34_get_minWidth.methodPtr);
        }
        textLabel = (UILabel_o *)this->fields.iconSprite;
        if ( textLabel )
        {
          textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
          if ( textLabel )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0LL);
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            if ( v17 <= (float)this->fields.textWidth || critical )
              v23 = v17;
            else
              v23 = (float)this->fields.textWidth;
            if ( isTextWidthIncludeIcon )
            {
              textLabel = (UILabel_o *)this->fields.iconSprite;
              if ( !textLabel )
                goto LABEL_50;
              ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))textLabel->klass->vtable._22_get_localSize.method)(
                textLabel,
                textLabel->klass->vtable._23_get_drawingDimensions.methodPtr);
              textLabel = this->fields.textLabel;
              if ( !textLabel )
                goto LABEL_50;
              blankSize = this->fields.blankSize;
              v25 = this->fields.textWidth;
              v27 = v24;
              textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
              if ( !textLabel )
                goto LABEL_50;
              v28 = (float)v25 - (float)(v27 + (float)blankSize);
              if ( v17 <= v28 )
                v29 = v28;
              else
                v29 = v17;
              v35.fields.x = v28 / v29;
              v35.fields.y = 1.0;
              v35.fields.z = 1.0;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v35, 0LL);
              v23 = v17;
              if ( v17 > v28 )
              {
                if ( critical )
                  v23 = v17;
                else
                  v23 = v28;
              }
            }
            textLabel = (UILabel_o *)System_String__IsNullOrEmpty(text, 0LL);
            v30 = this->fields.textLabel;
            if ( ((unsigned __int8)textLabel & 1) != 0 )
            {
              if ( !v30 )
                goto LABEL_50;
              v23 = v23 - (float)v30->fields.mSpacingX;
            }
            else if ( !v30 )
            {
              goto LABEL_50;
            }
            mAlignment = v30->fields.mAlignment;
            switch ( mAlignment )
            {
              case 3:
                v32 = -(float)(v23 + (float)this->fields.blankSize);
                break;
              case 2:
                v32 = (float)(v23 * 0.5) + (float)this->fields.blankSize;
                break;
              case 1:
                v32 = v23 + (float)this->fields.blankSize;
                break;
              default:
                v32 = (float)-this->fields.blankSize;
                break;
            }
            textLabel = (UILabel_o *)this->fields.iconSprite;
            if ( textLabel )
            {
              textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
              if ( textLabel )
              {
                v36.fields.x = v32;
                v36.fields.y = y;
                v36.fields.z = z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v36, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1BCB254(textLabel, v13);
  }
}


System_String_o *__fastcall UIRangeLabel__get_Text(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCB254(this, method);
  return textLabel->fields.mText;
}


UnityEngine_Color_o __fastcall UIRangeLabel__get_color(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCB254(this, method);
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


UnityEngine_Color_o __fastcall UIRangeLabel__get_effectColor(UIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCB254(this, method);
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


void __fastcall UIRangeLabel__set_Text(UIRangeLabel_o *this, System_String_o *value, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCB254(0LL, value);
  UILabel__set_text(textLabel, value, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIRangeLabel__set_color(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_1BCB254(0LL, method);
  UIWidget__set_color(textLabel, value, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIRangeLabel__set_effectColor(
        UIRangeLabel_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCB254(0LL, method);
  UILabel__set_effectColor(textLabel, value, 0LL);
}