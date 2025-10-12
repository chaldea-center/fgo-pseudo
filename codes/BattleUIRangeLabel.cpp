void BattleUIRangeLabel___ctor(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.adjustmentX = xmmword_C0DC70;
  *(_OWORD *)&this->fields.recoverX = xmmword_C0C590;
  *(_QWORD *)&this->fields.noDamageRecoverX = 0x4040000040A00000LL;
  UIRangeLabel___ctor((UIRangeLabel_o *)this, 0);
}


void BattleUIRangeLabel__AddDepthLabelEachHitIndex(
        BattleUIRangeLabel_o *this,
        int32_t hitIndex,
        const MethodInfo *method)
{
  BattleUIRangeLabel__AddLabelDepth(this, 10 * hitIndex, method);
}


void BattleUIRangeLabel__AddLabelDepth(BattleUIRangeLabel_o *this, int32_t addDepth, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  const MethodInfo *v5; // x1

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(0);
  UIWidget__set_depth(textLabel, textLabel->fields.mDepth + addDepth, 0);
  BattleUIRangeLabel__UpdateResetLineDepth(this, v5);
}


void BattleUIRangeLabel__AdjustResetLine(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *resetLineSprite; // x20
  const MethodInfo *v4; // x1
  UIWidget_o *v5; // x20
  __int64 v6; // x0
  float LabelPrintedWidth; // s0
  int32_t v8; // w1

  if ( (byte_4C3A713 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A713 = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0, 0) )
  {
    v5 = (UIWidget_o *)this->fields.resetLineSprite;
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth(this, v4);
    if ( !v5 )
      sub_1C32E7C(v6);
    if ( LabelPrintedWidth == INFINITY )
      v8 = -2147483628;
    else
      v8 = (int)LabelPrintedWidth + 20;
    UIWidget__set_width(v5, v8, 0);
  }
}


void BattleUIRangeLabel__Awake(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *textLabel; // x0

  textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !textLabel
    || (this->fields.saveDepth = (int32_t)textLabel[7].monitor,
        (textLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(textLabel, 0)) == 0) )
  {
    sub_1C32E7C(textLabel);
  }
  this->fields.saveAdjust = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)textLabel, 0);
}


void BattleUIRangeLabel__CondensedScaleLabel(
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
  textLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(textLabel, 0);
  if ( !textLabel )
    goto LABEL_13;
  textLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)textLabel, 0);
  if ( !textLabel )
    goto LABEL_13;
  textLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(textLabel, 0);
  if ( !textLabel )
    goto LABEL_13;
  textLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)textLabel, 0);
  v8 = (UnityEngine_Transform_o *)textLabel;
  if ( !byte_4C313D6 )
  {
    textLabel = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v8 )
LABEL_13:
    sub_1C32E7C(textLabel);
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( width >= 1 && fixedScale >= 1 )
  {
    v10 = (float)((float)fixedScale / 1000.0) * BattleUIRangeLabel__GetLabelPrintedWidth(this, v9);
    if ( v10 >= (float)width )
    {
      v11.fields.x = (float)width / v10;
      v11.fields.y = 1.0;
      v11.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v8, v11, 0);
    }
  }
}


void BattleUIRangeLabel__DisplayResetLine(BattleUIRangeLabel_o *this, bool isDisplay, const MethodInfo *method)
{
  UnityEngine_Object_o *resetLineSprite; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C3A715 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A715 = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.resetLineSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C32E7C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisplay, 0);
  }
}


float BattleUIRangeLabel__GetLabelPrintedWidth(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  float result; // s0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C32E7C(0);
  LODWORD(result) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0);
  return result;
}


int32_t BattleUIRangeLabel__GetTextLength(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  struct System_String_o *mText; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel || (mText = textLabel->fields.mText) == 0 )
    sub_1C32E7C(this);
  return mText->fields._stringLength;
}


void BattleUIRangeLabel__OnDisable(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  BattleUIRangeLabel_o *v2; // x19
  struct UILabel_o *textLabel; // x20
  int32_t saveDepth; // w1
  const MethodInfo *v5; // x1
  float32x2_t v6; // d1
  int32x2_t v7; // d1
  float32x2_t v8; // d0
  int32x2_t v9; // d0
  const MethodInfo *v10; // x2
  float32x2_t v11; // d0
  int32x2_t v12; // d0
  float32x2_t v13; // d1
  int32x2_t v14; // d1
  const MethodInfo *v15; // x2
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C3A717 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_Color__get_HasValue__);
    this = (BattleUIRangeLabel_o *)sub_1C32C20(&Method_System_Nullable_Color__get_Value__);
    byte_4C3A717 = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  saveDepth = v2->fields.saveDepth;
  if ( textLabel->fields.mDepth != saveDepth )
  {
    UIWidget__set_depth((UIWidget_o *)v2->fields.textLabel, saveDepth, 0);
    BattleUIRangeLabel__UpdateResetLineDepth(v2, v5);
    textLabel = v2->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
  }
  if ( v2->fields.saveColor.fields.hasValue )
  {
    v6.n64_u64[0] = vsub_f32(
                      *(float32x2_t *)&textLabel->fields.mColor.fields.r,
                      *(float32x2_t *)&v2->fields.saveColor.fields.value.fields.r).n64_u64[0];
    v7.n64_u64[0] = vmul_f32(v6, v6).n64_u64[0];
    v8.n64_u64[0] = vsub_f32(
                      *(float32x2_t *)&textLabel->fields.mColor.fields.b,
                      *(float32x2_t *)&v2->fields.saveColor.fields.value.fields.b).n64_u64[0];
    v9.n64_u64[0] = vmul_f32(v8, v8).n64_u64[0];
    if ( vadd_f32(vdup_lane_s32(v9, 1), vadd_f32(v9, vadd_f32(vdup_lane_s32(v7, 1), v7))).n64_f32[0] >= 1.0e-10 )
    {
      Value = System_Nullable_Color___get_Value(
                &v2->fields.saveColor,
                (const MethodInfo_38BB494 *)Method_System_Nullable_Color__get_Value__);
      BattleUIRangeLabel__UpdateRgbColor(v2, textLabel, Value, v10);
      textLabel = v2->fields.textLabel;
      if ( !textLabel )
        goto LABEL_15;
    }
  }
  if ( v2->fields.saveEffectColor.fields.hasValue )
  {
    v11.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mEffectColor.fields.r,
                       *(float32x2_t *)&v2->fields.saveEffectColor.fields.value.fields.r).n64_u64[0];
    v12.n64_u64[0] = vmul_f32(v11, v11).n64_u64[0];
    v13.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mEffectColor.fields.b,
                       *(float32x2_t *)&v2->fields.saveEffectColor.fields.value.fields.b).n64_u64[0];
    v14.n64_u64[0] = vmul_f32(v13, v13).n64_u64[0];
    if ( vadd_f32(vdup_lane_s32(v14, 1), vadd_f32(v14, vadd_f32(vdup_lane_s32(v12, 1), v12))).n64_f32[0] >= 1.0e-10 )
    {
      v17 = System_Nullable_Color___get_Value(
              &v2->fields.saveEffectColor,
              (const MethodInfo_38BB494 *)Method_System_Nullable_Color__get_Value__);
      UILabel__set_effectColor(textLabel, v17, 0);
    }
  }
  this = (BattleUIRangeLabel_o *)v2->fields.iconSprite;
  v2->fields.isFirst = 1;
  if ( !this || (this = (BattleUIRangeLabel_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0)) == 0 )
LABEL_15:
    sub_1C32E7C(this);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.savePosValue, 0);
  BattleUIRangeLabel__DisplayResetLine(v2, 0, v15);
}


void BattleUIRangeLabel__ParentHasChanged(
        BattleUIRangeLabel_o *this,
        bool isUpdateIconParent,
        const MethodInfo *method)
{
  void *textLabel; // x0
  UnityEngine_Object_o *resetLineSprite; // x21
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4C3A711 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A711 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_16;
  (*(void (__fastcall **)(void *, _QWORD, const MethodInfo *))(*(_QWORD *)textLabel + 616LL))(
    textLabel,
    *(_QWORD *)(*(_QWORD *)textLabel + 624LL),
    method);
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0, 0) )
  {
    textLabel = this->fields.resetLineSprite;
    if ( !textLabel )
      goto LABEL_16;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)textLabel + 616LL))(
      textLabel,
      *(_QWORD *)(*(_QWORD *)textLabel + 624LL));
  }
  if ( isUpdateIconParent )
  {
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
    {
      textLabel = this->fields.iconSprite;
      if ( textLabel )
      {
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)textLabel + 616LL))(
          textLabel,
          *(_QWORD *)(*(_QWORD *)textLabel + 624LL));
        return;
      }
LABEL_16:
      sub_1C32E7C(textLabel);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleUIRangeLabel__SetAdjustLabelOffset(
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
  float v18; // s9
  float v19; // s10
  float noDamageRecoverX; // s0
  float noDamageRecoverY; // s1
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_GameObject_o *v23; // x21
  float v24; // s2 OVERLAPPED
  unsigned __int64 v25; // d0 OVERLAPPED
  int v26; // s1
  const MethodInfo *v27; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3A712 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A712 = 1;
  }
  UIRangeLabel__Set((UIRangeLabel_o *)this, text, iconName, isIconPixelPerfect, damageCritical, 0, 0);
  if ( this->fields.isFirst )
  {
    iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
    this->fields.isFirst = 0;
    if ( !iconSprite )
      goto LABEL_35;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
    if ( !iconSprite )
      goto LABEL_35;
    this->fields.savePosValue = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
  }
  iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
  if ( !iconSprite )
    goto LABEL_35;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
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
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
    if ( !iconSprite )
      goto LABEL_35;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, this->fields.saveAdjust, 0);
  }
  if ( adjustment )
  {
    v18 = 0.0;
    v19 = 0.0;
    if ( ispopAdjustment )
    {
      v18 = this->fields.adjustmentX + 0.0;
      v19 = 0.0 - this->fields.adjustmentY;
      if ( adjustment->fields.isNoDamage )
      {
        v19 = v19 + this->fields.noDamageY;
        if ( recovery )
        {
          noDamageRecoverX = this->fields.noDamageRecoverX;
          noDamageRecoverY = this->fields.noDamageRecoverY;
LABEL_18:
          v18 = v18 - noDamageRecoverX;
          v19 = v19 - noDamageRecoverY;
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
        v18 = v18 - this->fields.criticalX;
        v19 = v19 - this->fields.criticalY;
        if ( recovery )
        {
          v18 = v18 - this->fields.recoverX;
          v19 = (float)(v19 - this->fields.recoverY) + this->fields.criticalRecoverY;
        }
      }
    }
LABEL_24:
    iconSprite = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( iconSprite )
    {
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
      if ( iconSprite )
      {
        v22 = (UnityEngine_Transform_o *)iconSprite;
        v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
        v29.fields.x = (float)(v18 + 0.0) + v29.fields.x;
        v29.fields.y = (float)(v19 + 0.0) + v29.fields.y;
        v29.fields.z = v29.fields.z + 0.0;
        UnityEngine_Transform__set_localPosition(v22, v29, 0);
        goto LABEL_27;
      }
    }
LABEL_35:
    sub_1C32E7C(iconSprite);
  }
LABEL_27:
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)iconSprite, 0);
  if ( !iconSprite )
    goto LABEL_35;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconSprite, 0);
  if ( !text )
    goto LABEL_35;
  v23 = (UnityEngine_GameObject_o *)iconSprite;
  iconSprite = (UnityEngine_Component_o *)System_String__Equals_63553848(text, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !v23 )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(v23, ((unsigned __int8)iconSprite & 1) == 0, 0);
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_35;
  iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
  if ( !iconSprite )
    goto LABEL_35;
  v24 = this->fields.savePosValue.fields.z + this->fields.spriteOffset.fields.z;
  v25 = vadd_f32(
          *(float32x2_t *)&this->fields.savePosValue.fields.x,
          *(float32x2_t *)&this->fields.spriteOffset.fields.x).n64_u64[0];
  v26 = HIDWORD(v25);
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)iconSprite,
    *(UnityEngine_Vector3_o *)(&v24 - 2),
    0);
  BattleUIRangeLabel__AdjustResetLine(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void BattleUIRangeLabel__SetPopupParam(
        BattleUIRangeLabel_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleUIRangeLabel_o *v4; // x19
  struct UILabel_o *textLabel; // x8
  __int128 v6; // q0
  struct UILabel_o *v7; // x8
  __int128 v8; // q0
  UILabel_o *v9; // x23
  float v10; // s3
  float v11; // s0 OVERLAPPED
  float v12; // s1
  float v13; // s2
  const MethodInfo *v14; // x2
  UILabel_o *v15; // x22
  float v16; // s3
  float v17; // s0 OVERLAPPED
  float v18; // s1
  float v19; // s2
  const MethodInfo *v20; // x2
  System_Nullable_Color__o v21; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o mEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C3A716 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_Color___ctor__);
    sub_1C32C20(&Method_System_Nullable_Color__get_HasValue__);
    this = (BattleUIRangeLabel_o *)sub_1C32C20(&Method_System_Nullable_Color__get_Value__);
    byte_4C3A716 = 1;
  }
  if ( !v4->fields.saveColor.fields.hasValue )
  {
    textLabel = v4->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
    mColor = textLabel->fields.mColor;
    memset(&v21, 0, sizeof(v21));
    System_Nullable_Color____ctor(&v21, mColor, (const MethodInfo_38BB478 *)Method_System_Nullable_Color___ctor__);
    v6 = *(_OWORD *)&v21.fields.hasValue;
    v4->fields.saveColor.fields.value.fields.a = v21.fields.value.fields.a;
    *(_OWORD *)&v4->fields.saveColor.fields.hasValue = v6;
  }
  if ( !v4->fields.saveEffectColor.fields.hasValue )
  {
    v7 = v4->fields.textLabel;
    if ( !v7 )
      goto LABEL_15;
    mEffectColor = v7->fields.mEffectColor;
    memset(&v21, 0, sizeof(v21));
    System_Nullable_Color____ctor(&v21, mEffectColor, (const MethodInfo_38BB478 *)Method_System_Nullable_Color___ctor__);
    v8 = *(_OWORD *)&v21.fields.hasValue;
    v4->fields.saveEffectColor.fields.value.fields.a = v21.fields.value.fields.a;
    *(_OWORD *)&v4->fields.saveEffectColor.fields.hasValue = v8;
  }
  if ( !buffData )
LABEL_15:
    sub_1C32E7C(this);
  v9 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    v10 = 1.0;
    v11 = 0.5;
    v12 = 0.5;
    v13 = 0.5;
    if ( v9 )
      goto LABEL_12;
    goto LABEL_15;
  }
  *(UnityEngine_Color_o *)&v11 = System_Nullable_Color___get_Value(
                                   &v4->fields.saveEffectColor,
                                   (const MethodInfo_38BB494 *)Method_System_Nullable_Color__get_Value__);
  if ( !v9 )
    goto LABEL_15;
LABEL_12:
  UILabel__set_effectColor(v9, *(UnityEngine_Color_o *)&v11, 0);
  v15 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    v16 = 1.0;
    v17 = 0.5;
    v18 = 0.5;
    v19 = 0.5;
  }
  else
  {
    *(UnityEngine_Color_o *)&v17 = System_Nullable_Color___get_Value(
                                     &v4->fields.saveColor,
                                     (const MethodInfo_38BB494 *)Method_System_Nullable_Color__get_Value__);
  }
  BattleUIRangeLabel__UpdateRgbColor(v4, v15, *(UnityEngine_Color_o *)&v17, v14);
  if ( buffData->fields.isGrayDisp )
    BattleUIRangeLabel__AddLabelDepth(v4, -2, v20);
}


void BattleUIRangeLabel__UpdateResetLineDepth(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *resetLineSprite; // x20
  struct UISprite_o *v4; // x0
  struct UILabel_o *textLabel; // x8

  if ( (byte_4C3A714 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A714 = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(resetLineSprite, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel || (v4 = this->fields.resetLineSprite) == 0 )
      sub_1C32E7C(v4);
    UIWidget__set_depth((UIWidget_o *)v4, textLabel->fields.mDepth + 5, 0);
  }
}


void BattleUIRangeLabel__UpdateRgbColor(
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
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *, const MethodInfo *))label->klass->vtable._7_get_alpha.methodPtr)(
    label,
    label->klass->vtable._7_get_alpha.method,
    method);
  this = (BattleUIRangeLabel_o *)v4->fields.textLabel;
  if ( !this
    || (v10 = v9,
        v11.fields.r = r,
        v11.fields.g = g,
        v11.fields.b = b,
        v11.fields.a = a,
        UIWidget__set_color((UIWidget_o *)this, v11, 0),
        (this = (BattleUIRangeLabel_o *)v4->fields.textLabel) == 0) )
  {
LABEL_5:
    sub_1C32E7C(this);
  }
  ((void (__fastcall *)(BattleUIRangeLabel_o *, Il2CppClass *, long double))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    v10);
}