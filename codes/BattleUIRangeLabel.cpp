void __fastcall BattleUIRangeLabel___ctor(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.adjustmentX = xmmword_31B33A0;
  *(_OWORD *)&this->fields.recoverX = xmmword_31B33B0;
  *(_QWORD *)&this->fields.noDamageRecoverX = 0x4040000040A00000LL;
  UIRangeLabel___ctor((UIRangeLabel_o *)this, 0LL);
}


void __fastcall BattleUIRangeLabel__AddLabelDepth(
        BattleUIRangeLabel_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_B2C434(0LL, addDepth);
  UIWidget__set_depth(textLabel, textLabel->fields.mDepth + addDepth, 0LL);
}


void __fastcall BattleUIRangeLabel__Awake(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *textLabel; // x0

  textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !textLabel
    || (this->fields.saveDepth = (int32_t)textLabel[7].klass,
        (textLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(textLabel, 0LL)) == 0LL) )
  {
    sub_B2C434(textLabel, method);
  }
  this->fields.saveAdjust = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0LL);
}


float __fastcall BattleUIRangeLabel__GetLabelPrintedWidth(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  float result; // s0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B2C434(0LL, method);
  LODWORD(result) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0LL);
  return result;
}


int32_t __fastcall BattleUIRangeLabel__GetTextLength(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  struct System_String_o *mText; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel || (mText = textLabel->fields.mText) == 0LL )
    sub_B2C434(this, method);
  return mText->fields.m_stringLength;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__OnDisable(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIWidget_o *textLabel; // x0
  UILabel_o *v6; // x20
  const MethodInfo *v7; // x2
  struct UILabel_o *v8; // x8
  UILabel_o *v9; // x20
  int v10; // s0
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A5D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_Color__GetValueOrDefault__, method);
    sub_B2C35C(&Method_System_Nullable_Color__get_HasValue__, v3);
    sub_B2C35C(&Method_System_Nullable_Color__get_Value__, v4);
    byte_418A5D8 = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_19;
  method = (const MethodInfo *)(unsigned int)this->fields.saveDepth;
  if ( textLabel->fields.mDepth != (_DWORD)method )
  {
    UIWidget__set_depth(textLabel, (int32_t)method, 0LL);
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_19;
  }
  if ( this->fields.saveColor.fields.has_value )
  {
    textLabel = (UIWidget_o *)UnityEngine_Color__op_Inequality(
                                textLabel->fields.mColor,
                                this->fields.saveColor.fields.value,
                                0LL);
    if ( ((unsigned __int8)textLabel & 1) != 0 && this->fields.saveColor.fields.has_value )
    {
      v6 = this->fields.textLabel;
      Value = System_Nullable_Color___get_Value(
                &this->fields.saveColor,
                (const MethodInfo_214F36C *)Method_System_Nullable_Color__get_Value__);
      BattleUIRangeLabel__UpdateRgbColor(this, v6, Value, v7);
    }
  }
  v8 = this->fields.textLabel;
  if ( !v8 )
    goto LABEL_19;
  if ( this->fields.saveEffectColor.fields.has_value
    && UnityEngine_Color__op_Inequality(v8->fields.mEffectColor, this->fields.saveEffectColor.fields.value, 0LL)
    && this->fields.saveEffectColor.fields.has_value )
  {
    v9 = this->fields.textLabel;
    *(UnityEngine_Color_o *)&v10 = System_Nullable_Color___get_Value(
                                     &this->fields.saveEffectColor,
                                     (const MethodInfo_214F36C *)Method_System_Nullable_Color__get_Value__);
    if ( !v9 )
      goto LABEL_19;
    UILabel__set_effectColor(v9, *(UnityEngine_Color_o *)&v10, 0LL);
  }
  textLabel = (UIWidget_o *)this->fields.iconSprite;
  this->fields.isFirst = 1;
  if ( !textLabel || (textLabel = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)textLabel, 0LL)) == 0LL )
LABEL_19:
    sub_B2C434(textLabel, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, this->fields.savePosValue, 0LL);
}


void __fastcall BattleUIRangeLabel__ParentHasChanged(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B2C434(0LL, method);
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))textLabel->klass->vtable._19_ParentHasChanged.method)(
    textLabel,
    textLabel->klass->vtable._20_OnStart.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__SetAdjustLabelOffset(
        BattleUIRangeLabel_o *this,
        System_String_o *text,
        System_String_o *iconName,
        bool isIconPixelPerfect,
        BattleServantData_Adjustment_o *adjustment,
        bool recovery,
        bool ispopAdjustment,
        bool damageCritical,
        const MethodInfo *method)
{
  __int64 v17; // x1
  UnityEngine_Component_o *iconSprite; // x0
  float v19; // s9
  float v20; // s10
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x21
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A5D6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, text);
    byte_418A5D6 = 1;
  }
  UIRangeLabel__Set((UIRangeLabel_o *)this, text, iconName, isIconPixelPerfect, damageCritical, 0LL);
  if ( this->fields.isFirst )
  {
    iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
    this->fields.isFirst = 0;
    if ( !iconSprite )
      goto LABEL_34;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_34;
    this->fields.savePosValue = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
  }
  iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !iconSprite )
    goto LABEL_34;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
  if ( !iconSprite )
    goto LABEL_34;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
  if ( UnityEngine_Vector3__op_Inequality(localPosition, this->fields.saveAdjust, 0LL) )
  {
    iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( !iconSprite )
      goto LABEL_34;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_34;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, this->fields.saveAdjust, 0LL);
  }
  if ( adjustment )
  {
    v19 = 0.0;
    v20 = 0.0;
    if ( ispopAdjustment )
    {
      v20 = this->fields.adjustmentX + 0.0;
      v19 = 0.0 - this->fields.adjustmentY;
      if ( adjustment->fields.isNoDamage )
      {
        v19 = v19 + this->fields.noDamageY;
        if ( recovery )
        {
          v20 = v20 - this->fields.noDamageRecoverX;
          v19 = v19 - this->fields.noDamageRecoverY;
        }
      }
      else
      {
        if ( adjustment->fields.isCritical )
        {
          v20 = v20 - this->fields.criticalX;
          v19 = v19 - this->fields.criticalY;
        }
        if ( recovery )
        {
          v20 = v20 - this->fields.recoverX;
          v19 = v19 - this->fields.recoverY;
          if ( adjustment->fields.isCritical )
            v19 = v19 + this->fields.criticalRecoverY;
        }
      }
    }
    iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( iconSprite )
    {
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
      if ( iconSprite )
      {
        v21 = (UnityEngine_Transform_o *)iconSprite;
        v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        v27.fields.x = (float)(v20 + 0.0) + v27.fields.x;
        v27.fields.y = (float)(v19 + 0.0) + v27.fields.y;
        v27.fields.z = v27.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition(v21, v27, 0LL);
        goto LABEL_26;
      }
    }
LABEL_34:
    sub_B2C434(iconSprite, v17);
  }
LABEL_26:
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_34;
  iconSprite = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)iconSprite, 0LL);
  if ( !iconSprite )
    goto LABEL_34;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_34;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( !text )
    goto LABEL_34;
  v22 = (UnityEngine_GameObject_o *)iconSprite;
  iconSprite = (UnityEngine_Component_o *)System_String__Equals_44292872(text, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v22 )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(v22, ((unsigned __int8)iconSprite & 1) == 0, 0LL);
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_34;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
  if ( !iconSprite )
    goto LABEL_34;
  v23 = vadd_f32(
          *(float32x2_t *)&this->fields.savePosValue.fields.x,
          *(float32x2_t *)&this->fields.spriteOffset.fields.x).n64_u64[0];
  v24 = this->fields.savePosValue.fields.z + this->fields.spriteOffset.fields.z;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, *(UnityEngine_Vector3_o *)&v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__SetPopupParam(
        BattleUIRangeLabel_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleUIRangeLabel_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UILabel_o *textLabel; // x8
  struct UnityEngine_Color_o value; // q0
  struct UILabel_o *v9; // x8
  struct UnityEngine_Color_o v10; // q0
  UILabel_o *v11; // x22
  int v12; // s0
  UILabel_o *v16; // x22
  const MethodInfo *v17; // x2
  int v18; // s0
  const MethodInfo *v22; // x2
  System_Nullable_Color__o v23; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o mEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_418A5D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_Color___ctor__, buffData);
    sub_B2C35C(&Method_System_Nullable_Color__get_HasValue__, v5);
    this = (BattleUIRangeLabel_o *)sub_B2C35C(&Method_System_Nullable_Color__get_Value__, v6);
    byte_418A5D7 = 1;
  }
  if ( !v4->fields.saveColor.fields.has_value )
  {
    textLabel = v4->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
    mColor = textLabel->fields.mColor;
    memset(&v23, 0, sizeof(v23));
    System_Nullable_Color____ctor(&v23, mColor, (const MethodInfo_214F350 *)Method_System_Nullable_Color___ctor__);
    value = v23.fields.value;
    *(_DWORD *)&v4->fields.saveColor.fields.has_value = *(_DWORD *)&v23.fields.has_value;
    v4->fields.saveColor.fields.value = value;
  }
  if ( !v4->fields.saveEffectColor.fields.has_value )
  {
    v9 = v4->fields.textLabel;
    if ( !v9 )
      goto LABEL_15;
    mEffectColor = v9->fields.mEffectColor;
    memset(&v23, 0, sizeof(v23));
    System_Nullable_Color____ctor(&v23, mEffectColor, (const MethodInfo_214F350 *)Method_System_Nullable_Color___ctor__);
    v10 = v23.fields.value;
    *(_DWORD *)&v4->fields.saveEffectColor.fields.has_value = *(_DWORD *)&v23.fields.has_value;
    v4->fields.saveEffectColor.fields.value = v10;
  }
  if ( !buffData )
LABEL_15:
    sub_B2C434(this, buffData);
  v11 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
    if ( v11 )
      goto LABEL_12;
    goto LABEL_15;
  }
  *(UnityEngine_Color_o *)&v12 = System_Nullable_Color___get_Value(
                                   &v4->fields.saveEffectColor,
                                   (const MethodInfo_214F36C *)Method_System_Nullable_Color__get_Value__);
  if ( !v11 )
    goto LABEL_15;
LABEL_12:
  UILabel__set_effectColor(v11, *(UnityEngine_Color_o *)&v12, 0LL);
  v16 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v18 = System_Nullable_Color___get_Value(
                                     &v4->fields.saveColor,
                                     (const MethodInfo_214F36C *)Method_System_Nullable_Color__get_Value__);
  BattleUIRangeLabel__UpdateRgbColor(v4, v16, *(UnityEngine_Color_o *)&v18, v17);
  if ( buffData->fields.isGrayDisp )
    BattleUIRangeLabel__AddLabelDepth(v4, -2, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__UpdateRgbColor(
        BattleUIRangeLabel_o *this,
        UILabel_o *label,
        UnityEngine_Color_o overwriteColor,
        const MethodInfo *method)
{
  BattleUIRangeLabel_o *v4; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s12
  long double v9; // q0
  long double v10; // q11
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !label )
    goto LABEL_5;
  v4 = this;
  a = overwriteColor.fields.a;
  b = overwriteColor.fields.b;
  g = overwriteColor.fields.g;
  r = overwriteColor.fields.r;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, const MethodInfo *))label->klass->vtable._7_get_alpha.method)(
    label,
    label->klass->vtable._8_set_alpha.methodPtr,
    method);
  this = (BattleUIRangeLabel_o *)v4->fields.textLabel;
  if ( !this
    || (v10 = v9,
        v11.fields.r = r,
        v11.fields.g = g,
        v11.fields.b = b,
        v11.fields.a = a,
        UIWidget__set_color((UIWidget_o *)this, v11, 0LL),
        (this = (BattleUIRangeLabel_o *)v4->fields.textLabel) == 0LL) )
  {
LABEL_5:
    sub_B2C434(this, label);
  }
  ((void (__fastcall *)(BattleUIRangeLabel_o *, Il2CppClass *, long double))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    v10);
}