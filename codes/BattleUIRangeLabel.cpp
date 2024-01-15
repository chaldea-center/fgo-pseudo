void __fastcall BattleUIRangeLabel___ctor(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.adjustmentX = xmmword_3147940;
  *(_OWORD *)&this->fields.recoverX = xmmword_3147950;
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
    sub_B170D4();
  UIWidget__set_depth(textLabel, textLabel->fields.mDepth + addDepth, 0LL);
}


void __fastcall BattleUIRangeLabel__Awake(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0
  UnityEngine_Transform_o *transform; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel
    || (this->fields.saveDepth = textLabel->fields.mDepth,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)textLabel, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  this->fields.saveAdjust = UnityEngine_Transform__get_localPosition(transform, 0LL);
}


float __fastcall BattleUIRangeLabel__GetLabelPrintedWidth(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  float result; // s0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B170D4();
  LODWORD(result) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0LL);
  return result;
}


int32_t __fastcall BattleUIRangeLabel__GetTextLength(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  struct System_String_o *mText; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel || (mText = textLabel->fields.mText) == 0LL )
    sub_B170D4();
  return mText->fields.m_stringLength;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__OnDisable(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIWidget_o *textLabel; // x0
  int32_t saveDepth; // w1
  UILabel_o *v7; // x20
  const MethodInfo *v8; // x2
  struct UILabel_o *v9; // x8
  UILabel_o *v10; // x20
  int v11; // s0
  UIRect_o *iconSprite; // x0
  UnityEngine_Transform_o *cachedTransform; // x0
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCD8F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_Color__GetValueOrDefault__, method);
    sub_B16FFC(&Method_System_Nullable_Color__get_HasValue__, v3);
    sub_B16FFC(&Method_System_Nullable_Color__get_Value__, v4);
    byte_40FCD8F = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_19;
  saveDepth = this->fields.saveDepth;
  if ( textLabel->fields.mDepth != saveDepth )
  {
    UIWidget__set_depth(textLabel, saveDepth, 0LL);
    textLabel = (UIWidget_o *)this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_19;
  }
  if ( this->fields.saveColor.fields.has_value
    && UnityEngine_Color__op_Inequality(textLabel->fields.mColor, this->fields.saveColor.fields.value, 0LL)
    && this->fields.saveColor.fields.has_value )
  {
    v7 = this->fields.textLabel;
    Value = System_Nullable_Color___get_Value(
              &this->fields.saveColor,
              (const MethodInfo_2965ECC *)Method_System_Nullable_Color__get_Value__);
    BattleUIRangeLabel__UpdateRgbColor(this, v7, Value, v8);
  }
  v9 = this->fields.textLabel;
  if ( !v9 )
    goto LABEL_19;
  if ( this->fields.saveEffectColor.fields.has_value
    && UnityEngine_Color__op_Inequality(v9->fields.mEffectColor, this->fields.saveEffectColor.fields.value, 0LL)
    && this->fields.saveEffectColor.fields.has_value )
  {
    v10 = this->fields.textLabel;
    *(UnityEngine_Color_o *)&v11 = System_Nullable_Color___get_Value(
                                     &this->fields.saveEffectColor,
                                     (const MethodInfo_2965ECC *)Method_System_Nullable_Color__get_Value__);
    if ( !v10 )
      goto LABEL_19;
    UILabel__set_effectColor(v10, *(UnityEngine_Color_o *)&v11, 0LL);
  }
  iconSprite = (UIRect_o *)this->fields.iconSprite;
  this->fields.isFirst = 1;
  if ( !iconSprite || (cachedTransform = UIRect__get_cachedTransform(iconSprite, 0LL)) == 0LL )
LABEL_19:
    sub_B170D4();
  UnityEngine_Transform__set_localPosition(cachedTransform, this->fields.savePosValue, 0LL);
}


void __fastcall BattleUIRangeLabel__ParentHasChanged(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B170D4();
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
  UnityEngine_Component_o *iconSprite; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  float v23; // s9
  float v24; // s10
  UnityEngine_Component_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Transform_o *v27; // x21
  UIRect_o *v28; // x0
  UnityEngine_Transform_o *cachedTransform; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x21
  bool v33; // w0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_Transform_o *v35; // x0
  unsigned __int64 v36; // d0 OVERLAPPED
  float v37; // s2
  int v38; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCD8D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, text);
    byte_40FCD8D = 1;
  }
  UIRangeLabel__Set((UIRangeLabel_o *)this, text, iconName, isIconPixelPerfect, damageCritical, 0LL);
  if ( this->fields.isFirst )
  {
    iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
    this->fields.isFirst = 0;
    if ( !iconSprite )
      goto LABEL_34;
    transform = UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !transform )
      goto LABEL_34;
    this->fields.savePosValue = UnityEngine_Transform__get_localPosition(transform, 0LL);
  }
  textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_34;
  v20 = UnityEngine_Component__get_transform(textLabel, 0LL);
  if ( !v20 )
    goto LABEL_34;
  localPosition = UnityEngine_Transform__get_localPosition(v20, 0LL);
  if ( UnityEngine_Vector3__op_Inequality(localPosition, this->fields.saveAdjust, 0LL) )
  {
    v21 = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( !v21 )
      goto LABEL_34;
    v22 = UnityEngine_Component__get_transform(v21, 0LL);
    if ( !v22 )
      goto LABEL_34;
    UnityEngine_Transform__set_localPosition(v22, this->fields.saveAdjust, 0LL);
  }
  if ( adjustment )
  {
    v23 = 0.0;
    v24 = 0.0;
    if ( ispopAdjustment )
    {
      v24 = this->fields.adjustmentX + 0.0;
      v23 = 0.0 - this->fields.adjustmentY;
      if ( adjustment->fields.isNoDamage )
      {
        v23 = v23 + this->fields.noDamageY;
        if ( recovery )
        {
          v24 = v24 - this->fields.noDamageRecoverX;
          v23 = v23 - this->fields.noDamageRecoverY;
        }
      }
      else
      {
        if ( adjustment->fields.isCritical )
        {
          v24 = v24 - this->fields.criticalX;
          v23 = v23 - this->fields.criticalY;
        }
        if ( recovery )
        {
          v24 = v24 - this->fields.recoverX;
          v23 = v23 - this->fields.recoverY;
          if ( adjustment->fields.isCritical )
            v23 = v23 + this->fields.criticalRecoverY;
        }
      }
    }
    v25 = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( v25 )
    {
      v26 = UnityEngine_Component__get_transform(v25, 0LL);
      if ( v26 )
      {
        v27 = v26;
        v40 = UnityEngine_Transform__get_localPosition(v26, 0LL);
        v40.fields.x = (float)(v24 + 0.0) + v40.fields.x;
        v40.fields.y = (float)(v23 + 0.0) + v40.fields.y;
        v40.fields.z = v40.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition(v27, v40, 0LL);
        goto LABEL_26;
      }
    }
LABEL_34:
    sub_B170D4();
  }
LABEL_26:
  v28 = (UIRect_o *)this->fields.iconSprite;
  if ( !v28 )
    goto LABEL_34;
  cachedTransform = UIRect__get_cachedTransform(v28, 0LL);
  if ( !cachedTransform )
    goto LABEL_34;
  UnityEngine_Transform__get_localPosition(cachedTransform, 0LL);
  v30 = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !v30 )
    goto LABEL_34;
  gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
  if ( !text )
    goto LABEL_34;
  v32 = gameObject;
  v33 = System_String__Equals_43731072(text, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v32 )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(v32, !v33, 0LL);
  v34 = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !v34 )
    goto LABEL_34;
  v35 = UnityEngine_Component__get_transform(v34, 0LL);
  if ( !v35 )
    goto LABEL_34;
  v36 = vadd_f32(
          *(float32x2_t *)&this->fields.savePosValue.fields.x,
          *(float32x2_t *)&this->fields.spriteOffset.fields.x).n64_u64[0];
  v37 = this->fields.savePosValue.fields.z + this->fields.spriteOffset.fields.z;
  v38 = HIDWORD(v36);
  UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__SetPopupParam(
        BattleUIRangeLabel_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
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

  if ( (byte_40FCD8E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_Color___ctor__, buffData);
    sub_B16FFC(&Method_System_Nullable_Color__get_HasValue__, v5);
    sub_B16FFC(&Method_System_Nullable_Color__get_Value__, v6);
    byte_40FCD8E = 1;
  }
  if ( !this->fields.saveColor.fields.has_value )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
    mColor = textLabel->fields.mColor;
    memset(&v23, 0, sizeof(v23));
    System_Nullable_Color____ctor(&v23, mColor, (const MethodInfo_2965EB0 *)Method_System_Nullable_Color___ctor__);
    value = v23.fields.value;
    *(_DWORD *)&this->fields.saveColor.fields.has_value = *(_DWORD *)&v23.fields.has_value;
    this->fields.saveColor.fields.value = value;
  }
  if ( !this->fields.saveEffectColor.fields.has_value )
  {
    v9 = this->fields.textLabel;
    if ( !v9 )
      goto LABEL_15;
    mEffectColor = v9->fields.mEffectColor;
    memset(&v23, 0, sizeof(v23));
    System_Nullable_Color____ctor(&v23, mEffectColor, (const MethodInfo_2965EB0 *)Method_System_Nullable_Color___ctor__);
    v10 = v23.fields.value;
    *(_DWORD *)&this->fields.saveEffectColor.fields.has_value = *(_DWORD *)&v23.fields.has_value;
    this->fields.saveEffectColor.fields.value = v10;
  }
  if ( !buffData )
LABEL_15:
    sub_B170D4();
  v11 = this->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
    if ( v11 )
      goto LABEL_12;
    goto LABEL_15;
  }
  *(UnityEngine_Color_o *)&v12 = System_Nullable_Color___get_Value(
                                   &this->fields.saveEffectColor,
                                   (const MethodInfo_2965ECC *)Method_System_Nullable_Color__get_Value__);
  if ( !v11 )
    goto LABEL_15;
LABEL_12:
  UILabel__set_effectColor(v11, *(UnityEngine_Color_o *)&v12, 0LL);
  v16 = this->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v18 = System_Nullable_Color___get_Value(
                                     &this->fields.saveColor,
                                     (const MethodInfo_2965ECC *)Method_System_Nullable_Color__get_Value__);
  BattleUIRangeLabel__UpdateRgbColor(this, v16, *(UnityEngine_Color_o *)&v18, v17);
  if ( buffData->fields.isGrayDisp )
    BattleUIRangeLabel__AddLabelDepth(this, -2, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__UpdateRgbColor(
        BattleUIRangeLabel_o *this,
        UILabel_o *label,
        UnityEngine_Color_o overwriteColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s12
  long double v9; // q0
  UIWidget_o *textLabel; // x0
  long double v11; // q11
  struct UILabel_o *v12; // x0
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !label )
    goto LABEL_5;
  a = overwriteColor.fields.a;
  b = overwriteColor.fields.b;
  g = overwriteColor.fields.g;
  r = overwriteColor.fields.r;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, const MethodInfo *))label->klass->vtable._7_get_alpha.method)(
    label,
    label->klass->vtable._8_set_alpha.methodPtr,
    method);
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel
    || (v11 = v9,
        v13.fields.r = r,
        v13.fields.g = g,
        v13.fields.b = b,
        v13.fields.a = a,
        UIWidget__set_color(textLabel, v13, 0LL),
        (v12 = this->fields.textLabel) == 0LL) )
  {
LABEL_5:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, long double))v12->klass->vtable._8_set_alpha.method)(
    v12,
    v12->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v11);
}