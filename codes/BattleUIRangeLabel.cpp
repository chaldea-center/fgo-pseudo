void __fastcall BattleUIRangeLabel___ctor(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.adjustmentX = xmmword_C07300;
  *(_OWORD *)&this->fields.recoverX = xmmword_C05DD0;
  *(_QWORD *)&this->fields.noDamageRecoverX = 0x4040000040A00000LL;
  UIRangeLabel___ctor((UIRangeLabel_o *)this, 0LL);
}


void __fastcall BattleUIRangeLabel__AddDepthLabelEachHitIndex(
        BattleUIRangeLabel_o *this,
        int32_t hitIndex,
        const MethodInfo *method)
{
  BattleUIRangeLabel__AddLabelDepth(this, 10 * hitIndex, method);
}


void __fastcall BattleUIRangeLabel__AddLabelDepth(
        BattleUIRangeLabel_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  const MethodInfo *v5; // x1

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_1C2E388(0LL, addDepth);
  UIWidget__set_depth(textLabel, textLabel->fields.mDepth + addDepth, 0LL);
  BattleUIRangeLabel__UpdateResetLineDepth(this, v5);
}


void __fastcall BattleUIRangeLabel__AdjustResetLine(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *resetLineSprite; // x20
  const MethodInfo *v4; // x1
  UIWidget_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  float LabelPrintedWidth; // s0
  int32_t v9; // w1

  if ( (byte_4C00119 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00119 = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0LL, 0LL) )
  {
    v5 = (UIWidget_o *)this->fields.resetLineSprite;
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth(this, v4);
    if ( !v5 )
      sub_1C2E388(v6, v7);
    if ( LabelPrintedWidth == INFINITY )
      v9 = -2147483628;
    else
      v9 = (int)LabelPrintedWidth + 20;
    UIWidget__set_width(v5, v9, 0LL);
  }
}


void __fastcall BattleUIRangeLabel__Awake(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *textLabel; // x0

  textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !textLabel
    || (this->fields.saveDepth = (int32_t)textLabel[7].monitor,
        (textLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(textLabel, 0LL)) == 0LL) )
  {
    sub_1C2E388(textLabel, method);
  }
  this->fields.saveAdjust = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__CondensedScaleLabel(
        BattleUIRangeLabel_o *this,
        int32_t width,
        int32_t fixedScale,
        const MethodInfo *method)
{
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_Transform_o *v8; // x22
  const MethodInfo *v9; // x1
  float v10; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_13;
  textLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(textLabel, 0LL);
  if ( !textLabel )
    goto LABEL_13;
  textLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)textLabel, 0LL);
  if ( !textLabel )
    goto LABEL_13;
  textLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(textLabel, 0LL);
  if ( !textLabel )
    goto LABEL_13;
  textLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)textLabel,
                                           0LL);
  v8 = (UnityEngine_Transform_o *)textLabel;
  if ( !byte_4BF7D96 )
  {
    textLabel = (UnityEngine_Component_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&width);
    byte_4BF7D96 = 1;
  }
  if ( !v8 )
LABEL_13:
    sub_1C2E388(textLabel, *(_QWORD *)&width);
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( width >= 1 && fixedScale >= 1 )
  {
    v10 = (float)((float)fixedScale / 1000.0) * BattleUIRangeLabel__GetLabelPrintedWidth(this, v9);
    if ( v10 >= (float)width )
    {
      v11.fields.x = (float)width / v10;
      v11.fields.y = 1.0;
      v11.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v8, v11, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__DisplayResetLine(
        BattleUIRangeLabel_o *this,
        bool isDisplay,
        const MethodInfo *method)
{
  UnityEngine_Object_o *resetLineSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C0011B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isDisplay);
    byte_4C0011B = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.resetLineSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1C2E388(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisplay, 0LL);
  }
}


float __fastcall BattleUIRangeLabel__GetLabelPrintedWidth(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  float result; // s0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C2E388(0LL, method);
  LODWORD(result) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0LL);
  return result;
}


int32_t __fastcall BattleUIRangeLabel__GetTextLength(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  struct System_String_o *mText; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel || (mText = textLabel->fields.mText) == 0LL )
    sub_1C2E388(this, method);
  return mText->fields._stringLength;
}


void __fastcall BattleUIRangeLabel__OnDisable(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  BattleUIRangeLabel_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *textLabel; // x20
  const MethodInfo *v6; // x1
  float32x2_t v7; // d1
  int32x2_t v8; // d1
  float32x2_t v9; // d0
  int32x2_t v10; // d0
  const MethodInfo *v11; // x2
  float32x2_t v12; // d0
  int32x2_t v13; // d0
  float32x2_t v14; // d1
  int32x2_t v15; // d1
  const MethodInfo *v16; // x2
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C0011D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Nullable_Color__GetValueOrDefault__, method);
    sub_1C2E12C(&Method_System_Nullable_Color__get_HasValue__, v3);
    this = (BattleUIRangeLabel_o *)sub_1C2E12C(&Method_System_Nullable_Color__get_Value__, v4);
    byte_4C0011D = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  method = (const MethodInfo *)(unsigned int)v2->fields.saveDepth;
  if ( textLabel->fields.mDepth != (_DWORD)method )
  {
    UIWidget__set_depth((UIWidget_o *)v2->fields.textLabel, (int32_t)method, 0LL);
    BattleUIRangeLabel__UpdateResetLineDepth(v2, v6);
    textLabel = v2->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
  }
  if ( v2->fields.saveColor.fields.hasValue )
  {
    v7.n64_u64[0] = vsub_f32(
                      *(float32x2_t *)&textLabel->fields.mColor.fields.r,
                      *(float32x2_t *)&v2->fields.saveColor.fields.value.fields.r).n64_u64[0];
    v8.n64_u64[0] = vmul_f32(v7, v7).n64_u64[0];
    v9.n64_u64[0] = vsub_f32(
                      *(float32x2_t *)&textLabel->fields.mColor.fields.b,
                      *(float32x2_t *)&v2->fields.saveColor.fields.value.fields.b).n64_u64[0];
    v10.n64_u64[0] = vmul_f32(v9, v9).n64_u64[0];
    if ( vadd_f32(vdup_lane_s32(v10, 1), vadd_f32(v10, vadd_f32(vdup_lane_s32(v8, 1), v8))).n64_f32[0] >= 1.0e-10 )
    {
      Value = System_Nullable_Color___get_Value(
                &v2->fields.saveColor,
                (const MethodInfo_3784BE8 *)Method_System_Nullable_Color__get_Value__);
      BattleUIRangeLabel__UpdateRgbColor(v2, textLabel, Value, v11);
      textLabel = v2->fields.textLabel;
      if ( !textLabel )
        goto LABEL_15;
    }
  }
  if ( v2->fields.saveEffectColor.fields.hasValue )
  {
    v12.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mEffectColor.fields.r,
                       *(float32x2_t *)&v2->fields.saveEffectColor.fields.value.fields.r).n64_u64[0];
    v13.n64_u64[0] = vmul_f32(v12, v12).n64_u64[0];
    v14.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mEffectColor.fields.b,
                       *(float32x2_t *)&v2->fields.saveEffectColor.fields.value.fields.b).n64_u64[0];
    v15.n64_u64[0] = vmul_f32(v14, v14).n64_u64[0];
    if ( vadd_f32(vdup_lane_s32(v15, 1), vadd_f32(v15, vadd_f32(vdup_lane_s32(v13, 1), v13))).n64_f32[0] >= 1.0e-10 )
    {
      v18 = System_Nullable_Color___get_Value(
              &v2->fields.saveEffectColor,
              (const MethodInfo_3784BE8 *)Method_System_Nullable_Color__get_Value__);
      UILabel__set_effectColor(textLabel, v18, 0LL);
    }
  }
  this = (BattleUIRangeLabel_o *)v2->fields.iconSprite;
  v2->fields.isFirst = 1;
  if ( !this || (this = (BattleUIRangeLabel_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0LL)) == 0LL )
LABEL_15:
    sub_1C2E388(this, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.savePosValue, 0LL);
  BattleUIRangeLabel__DisplayResetLine(v2, 0, v16);
}


void __fastcall BattleUIRangeLabel__ParentHasChanged(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  void *textLabel; // x0
  UnityEngine_Object_o *resetLineSprite; // x20

  if ( (byte_4C00117 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00117 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)textLabel + 616LL))(
    textLabel,
    *(_QWORD *)(*(_QWORD *)textLabel + 624LL));
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0LL, 0LL) )
  {
    textLabel = this->fields.resetLineSprite;
    if ( textLabel )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)textLabel + 616LL))(
        textLabel,
        *(_QWORD *)(*(_QWORD *)textLabel + 624LL));
      return;
    }
LABEL_10:
    sub_1C2E388(textLabel, method);
  }
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
  float noDamageRecoverX; // s0
  float noDamageRecoverY; // s1
  UnityEngine_Transform_o *v23; // x21
  UnityEngine_GameObject_o *v24; // x21
  float v25; // s2 OVERLAPPED
  unsigned __int64 v26; // d0 OVERLAPPED
  int v27; // s1
  const MethodInfo *v28; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00118 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, text);
    byte_4C00118 = 1;
  }
  UIRangeLabel__Set((UIRangeLabel_o *)this, text, iconName, isIconPixelPerfect, damageCritical, 0LL);
  if ( this->fields.isFirst )
  {
    iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
    this->fields.isFirst = 0;
    if ( !iconSprite )
      goto LABEL_35;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_35;
    this->fields.savePosValue = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
  }
  iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
  if ( !iconSprite )
    goto LABEL_35;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
  if ( (float)((float)((float)(localPosition.fields.z - this->fields.saveAdjust.fields.z)
                     * (float)(localPosition.fields.z - this->fields.saveAdjust.fields.z))
             + (float)((float)((float)(localPosition.fields.x - this->fields.saveAdjust.fields.x)
                             * (float)(localPosition.fields.x - this->fields.saveAdjust.fields.x))
                     + (float)((float)(localPosition.fields.y - this->fields.saveAdjust.fields.y)
                             * (float)(localPosition.fields.y - this->fields.saveAdjust.fields.y)))) >= 1.0e-10 )
  {
    iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( !iconSprite )
      goto LABEL_35;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_35;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, this->fields.saveAdjust, 0LL);
  }
  if ( adjustment )
  {
    v19 = 0.0;
    v20 = 0.0;
    if ( ispopAdjustment )
    {
      v19 = this->fields.adjustmentX + 0.0;
      v20 = 0.0 - this->fields.adjustmentY;
      if ( adjustment->fields.isNoDamage )
      {
        v20 = v20 + this->fields.noDamageY;
        if ( recovery )
        {
          noDamageRecoverX = this->fields.noDamageRecoverX;
          noDamageRecoverY = this->fields.noDamageRecoverY;
LABEL_18:
          v19 = v19 - noDamageRecoverX;
          v20 = v20 - noDamageRecoverY;
        }
      }
      else
      {
        if ( !adjustment->fields.isCritical )
        {
          if ( !recovery )
            goto LABEL_24;
          noDamageRecoverX = this->fields.recoverX;
          noDamageRecoverY = this->fields.recoverY;
          goto LABEL_18;
        }
        v19 = v19 - this->fields.criticalX;
        v20 = v20 - this->fields.criticalY;
        if ( recovery )
        {
          v19 = v19 - this->fields.recoverX;
          v20 = (float)(v20 - this->fields.recoverY) + this->fields.criticalRecoverY;
        }
      }
    }
LABEL_24:
    iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( iconSprite )
    {
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
      if ( iconSprite )
      {
        v23 = (UnityEngine_Transform_o *)iconSprite;
        v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        v30.fields.x = (float)(v19 + 0.0) + v30.fields.x;
        v30.fields.y = (float)(v20 + 0.0) + v30.fields.y;
        v30.fields.z = v30.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition(v23, v30, 0LL);
        goto LABEL_27;
      }
    }
LABEL_35:
    sub_1C2E388(iconSprite, v17);
  }
LABEL_27:
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)iconSprite, 0LL);
  if ( !iconSprite )
    goto LABEL_35;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( !text )
    goto LABEL_35;
  v24 = (UnityEngine_GameObject_o *)iconSprite;
  iconSprite = (UnityEngine_Component_o *)System_String__Equals_63243900(text, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v24 )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(v24, ((unsigned __int8)iconSprite & 1) == 0, 0LL);
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
  if ( !iconSprite )
    goto LABEL_35;
  v25 = this->fields.savePosValue.fields.z + this->fields.spriteOffset.fields.z;
  v26 = vadd_f32(
          *(float32x2_t *)&this->fields.savePosValue.fields.x,
          *(float32x2_t *)&this->fields.spriteOffset.fields.x).n64_u64[0];
  v27 = HIDWORD(v26);
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)iconSprite,
    *(UnityEngine_Vector3_o *)(&v25 - 2),
    0LL);
  BattleUIRangeLabel__AdjustResetLine(this, v28);
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
  __int128 v8; // q0
  struct UILabel_o *v9; // x8
  __int128 v10; // q0
  UILabel_o *v11; // x23
  float v12; // s3
  float v13; // s0
  float v14; // s1
  float v15; // s2
  const MethodInfo *v16; // x2
  UILabel_o *v17; // x22
  float v18; // s3
  float v19; // s0
  float v20; // s1
  float v21; // s2
  const MethodInfo *v22; // x2
  System_Nullable_Color__o v23; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o mEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C0011C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Nullable_Color___ctor__, buffData);
    sub_1C2E12C(&Method_System_Nullable_Color__get_HasValue__, v5);
    this = (BattleUIRangeLabel_o *)sub_1C2E12C(&Method_System_Nullable_Color__get_Value__, v6);
    byte_4C0011C = 1;
  }
  if ( !v4->fields.saveColor.fields.hasValue )
  {
    textLabel = v4->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
    mColor = textLabel->fields.mColor;
    memset(&v23, 0, sizeof(v23));
    System_Nullable_Color____ctor(&v23, mColor, (const MethodInfo_3784BCC *)Method_System_Nullable_Color___ctor__);
    v8 = *(_OWORD *)&v23.fields.hasValue;
    v4->fields.saveColor.fields.value.fields.a = v23.fields.value.fields.a;
    *(_OWORD *)&v4->fields.saveColor.fields.hasValue = v8;
  }
  if ( !v4->fields.saveEffectColor.fields.hasValue )
  {
    v9 = v4->fields.textLabel;
    if ( !v9 )
      goto LABEL_15;
    mEffectColor = v9->fields.mEffectColor;
    memset(&v23, 0, sizeof(v23));
    System_Nullable_Color____ctor(&v23, mEffectColor, (const MethodInfo_3784BCC *)Method_System_Nullable_Color___ctor__);
    v10 = *(_OWORD *)&v23.fields.hasValue;
    v4->fields.saveEffectColor.fields.value.fields.a = v23.fields.value.fields.a;
    *(_OWORD *)&v4->fields.saveEffectColor.fields.hasValue = v10;
  }
  if ( !buffData )
LABEL_15:
    sub_1C2E388(this, buffData);
  v11 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    v12 = 1.0;
    v13 = 0.5;
    v14 = 0.5;
    v15 = 0.5;
    if ( v11 )
      goto LABEL_12;
    goto LABEL_15;
  }
  *(UnityEngine_Color_o *)&v13 = System_Nullable_Color___get_Value(
                                   &v4->fields.saveEffectColor,
                                   (const MethodInfo_3784BE8 *)Method_System_Nullable_Color__get_Value__);
  if ( !v11 )
    goto LABEL_15;
LABEL_12:
  UILabel__set_effectColor(v11, *(UnityEngine_Color_o *)&v13, 0LL);
  v17 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    v18 = 1.0;
    v19 = 0.5;
    v20 = 0.5;
    v21 = 0.5;
  }
  else
  {
    *(UnityEngine_Color_o *)&v19 = System_Nullable_Color___get_Value(
                                     &v4->fields.saveColor,
                                     (const MethodInfo_3784BE8 *)Method_System_Nullable_Color__get_Value__);
  }
  BattleUIRangeLabel__UpdateRgbColor(v4, v17, *(UnityEngine_Color_o *)&v19, v16);
  if ( buffData->fields.isGrayDisp )
    BattleUIRangeLabel__AddLabelDepth(v4, -2, v22);
}


void __fastcall BattleUIRangeLabel__UpdateResetLineDepth(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *resetLineSprite; // x20
  struct UISprite_o *v4; // x0
  __int64 v5; // x1
  struct UILabel_o *textLabel; // x8

  if ( (byte_4C0011A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C0011A = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(resetLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel || (v4 = this->fields.resetLineSprite) == 0LL )
      sub_1C2E388(v4, v5);
    UIWidget__set_depth((UIWidget_o *)v4, textLabel->fields.mDepth + 5, 0LL);
  }
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
    sub_1C2E388(this, label);
  }
  ((void (__fastcall *)(BattleUIRangeLabel_o *, Il2CppClass *, long double))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    v10);
}