void __fastcall UIRangeLabel___ctor(UIRangeLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.blankSize = 0xFFFFFFFF00000002LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UIRangeLabel__Clear(UIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_418FCE3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418FCE3 = 1;
  }
  UIRangeLabel__InitParam(this, method);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_11;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)textLabel, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(textLabel, v4);
  }
}


void __fastcall UIRangeLabel__InitParam(UIRangeLabel_o *this, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x8

  if ( (this->fields.textWidth & 0x80000000) != 0 )
  {
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      sub_B2C434(this, method);
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
        const MethodInfo *method)
{
  __int64 v11; // x1
  UILabel_o *textLabel; // x0
  float v13; // s0
  int32_t textWidth; // s9
  float v15; // s8
  float v16; // s1
  UnityEngine_Object_o *iconSprite; // x24
  UnityEngine_Behaviour_o *v18; // x8
  float y; // s9
  float z; // s10
  struct UILabel_o *v21; // x8
  int32_t mAlignment; // w8
  float v23; // s8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418FCE4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, text);
    byte_418FCE4 = 1;
  }
  UIRangeLabel__InitParam(this, (const MethodInfo *)text);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_39;
  UILabel__set_text(textLabel, text, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_39;
  LODWORD(v13) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_39;
  textWidth = this->fields.textWidth;
  v15 = v13;
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
  if ( !textLabel )
    goto LABEL_39;
  v16 = (float)textWidth;
  if ( v15 > (float)textWidth )
    v16 = v15;
  v24.fields.x = (float)this->fields.textWidth / v16;
  v24.fields.y = 1.0;
  v24.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)textLabel, v24, 0LL);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)System_String__IsNullOrEmpty(iconName, 0LL);
    v18 = (UnityEngine_Behaviour_o *)this->fields.iconSprite;
    if ( v18 )
    {
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        UnityEngine_Behaviour__set_enabled(v18, 0, 0LL);
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
            goto LABEL_39;
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
            if ( v15 > (float)this->fields.textWidth && !critical )
              v15 = (float)this->fields.textWidth;
            textLabel = (UILabel_o *)System_String__IsNullOrEmpty(text, 0LL);
            v21 = this->fields.textLabel;
            if ( ((unsigned __int8)textLabel & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_39;
              v15 = v15 - (float)v21->fields.mSpacingX;
            }
            else if ( !v21 )
            {
              goto LABEL_39;
            }
            mAlignment = v21->fields.mAlignment;
            switch ( mAlignment )
            {
              case 3:
                v23 = -(float)(v15 + (float)this->fields.blankSize);
                break;
              case 2:
                v23 = (float)(v15 * 0.5) + (float)this->fields.blankSize;
                break;
              case 1:
                v23 = v15 + (float)this->fields.blankSize;
                break;
              default:
                v23 = (float)-this->fields.blankSize;
                break;
            }
            textLabel = (UILabel_o *)this->fields.iconSprite;
            if ( textLabel )
            {
              textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL);
              if ( textLabel )
              {
                v26.fields.x = v23;
                v26.fields.y = y;
                v26.fields.z = z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v26, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_B2C434(textLabel, v11);
  }
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall UIRangeLabel__set_color(UIRangeLabel_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
  UILabel__set_effectColor(textLabel, value, 0LL);
}