void __fastcall UIRangeLabel___ctor(UIRangeLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.blankSize = 0xFFFFFFFF00000002LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UIRangeLabel__Clear(UIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_4102066 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_4102066 = 1;
  }
  UIRangeLabel__InitParam(this, method);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_11;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1, 0LL);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.iconSprite;
    if ( v6 )
    {
      UnityEngine_Behaviour__set_enabled(v6, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall UIRangeLabel__InitParam(UIRangeLabel_o *this, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x8

  if ( (this->fields.textWidth & 0x80000000) != 0 )
  {
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      sub_B170D4();
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
  UILabel_o *textLabel; // x0
  UILabel_o *v12; // x0
  float v13; // s0
  UnityEngine_Component_o *v14; // x0
  int32_t textWidth; // s9
  float v16; // s8
  UnityEngine_Transform_o *transform; // x0
  float v18; // s1
  UnityEngine_Object_o *iconSprite; // x24
  bool IsNullOrEmpty; // w0
  UnityEngine_Behaviour_o *v21; // x8
  UISprite_o *v22; // x0
  struct UISprite_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  float y; // s9
  float z; // s10
  bool v28; // w0
  struct UILabel_o *v29; // x8
  int32_t mAlignment; // w8
  float v31; // s8
  UnityEngine_Component_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4102067 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, text);
    byte_4102067 = 1;
  }
  UIRangeLabel__InitParam(this, (const MethodInfo *)text);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_39;
  UILabel__set_text(textLabel, text, 0LL);
  v12 = this->fields.textLabel;
  if ( !v12 )
    goto LABEL_39;
  LODWORD(v13) = *(_QWORD *)&UILabel__get_printedSize(v12, 0LL);
  v14 = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !v14 )
    goto LABEL_39;
  textWidth = this->fields.textWidth;
  v16 = v13;
  transform = UnityEngine_Component__get_transform(v14, 0LL);
  if ( !transform )
    goto LABEL_39;
  v18 = (float)textWidth;
  if ( v16 > (float)textWidth )
    v18 = v16;
  v34.fields.x = (float)this->fields.textWidth / v18;
  v34.fields.y = 1.0;
  v34.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v34, 0LL);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(iconName, 0LL);
    v21 = (UnityEngine_Behaviour_o *)this->fields.iconSprite;
    if ( v21 )
    {
      if ( IsNullOrEmpty )
      {
        UnityEngine_Behaviour__set_enabled(v21, 0, 0LL);
        return;
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.iconSprite, 1, 0LL);
      v22 = this->fields.iconSprite;
      if ( v22 )
      {
        UISprite__set_spriteName(v22, iconName, 0LL);
        if ( isIconPixelPerfect )
        {
          v23 = this->fields.iconSprite;
          if ( !v23 )
            goto LABEL_39;
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
            v23,
            v23->klass->vtable._34_get_minWidth.methodPtr);
        }
        v24 = (UnityEngine_Component_o *)this->fields.iconSprite;
        if ( v24 )
        {
          v25 = UnityEngine_Component__get_transform(v24, 0LL);
          if ( v25 )
          {
            localPosition = UnityEngine_Transform__get_localPosition(v25, 0LL);
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            if ( v16 > (float)this->fields.textWidth && !critical )
              v16 = (float)this->fields.textWidth;
            v28 = System_String__IsNullOrEmpty(text, 0LL);
            v29 = this->fields.textLabel;
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_39;
              v16 = v16 - (float)v29->fields.mSpacingX;
            }
            else if ( !v29 )
            {
              goto LABEL_39;
            }
            mAlignment = v29->fields.mAlignment;
            switch ( mAlignment )
            {
              case 3:
                v31 = -(float)(v16 + (float)this->fields.blankSize);
                break;
              case 2:
                v31 = (float)(v16 * 0.5) + (float)this->fields.blankSize;
                break;
              case 1:
                v31 = v16 + (float)this->fields.blankSize;
                break;
              default:
                v31 = (float)-this->fields.blankSize;
                break;
            }
            v32 = (UnityEngine_Component_o *)this->fields.iconSprite;
            if ( v32 )
            {
              v33 = UnityEngine_Component__get_transform(v32, 0LL);
              if ( v33 )
              {
                v36.fields.x = v31;
                v36.fields.y = y;
                v36.fields.z = z;
                UnityEngine_Transform__set_localPosition(v33, v36, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  UILabel__set_effectColor(textLabel, value, 0LL);
}