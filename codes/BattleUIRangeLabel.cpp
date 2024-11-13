void __fastcall BattleUIRangeLabel___ctor(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.adjustmentX = xmmword_BD3960;
  *(_OWORD *)&this->fields.recoverX = xmmword_BD23C0;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUIRangeLabel__AddLabelDepth(
        BattleUIRangeLabel_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  const MethodInfo *v5; // x1

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    sub_1BCAA3C(0LL, *(_QWORD *)&addDepth);
  UIWidget__set_depth(textLabel, textLabel->fields.mDepth + addDepth, 0LL);
  BattleUIRangeLabel__UpdateResetLineDepth(this, v5);
}


void __fastcall BattleUIRangeLabel__AdjustResetLine(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *resetLineSprite; // x20
  const MethodInfo *v5; // x1
  UIWidget_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  float LabelPrintedWidth; // s0
  int32_t v10; // w1

  if ( (byte_4B18A80 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18A80 = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0LL, 0LL) )
  {
    v6 = (UIWidget_o *)this->fields.resetLineSprite;
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth(this, v5);
    if ( !v6 )
      sub_1BCAA3C(v7, v8);
    if ( LabelPrintedWidth == INFINITY )
      v10 = -2147483628;
    else
      v10 = (int)LabelPrintedWidth + 20;
    UIWidget__set_width(v6, v10, 0LL);
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
    sub_1BCAA3C(textLabel, method);
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
  __int64 v8; // x2
  UnityEngine_Transform_o *v9; // x22
  const MethodInfo *v10; // x1
  float v11; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

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
  v9 = (UnityEngine_Transform_o *)textLabel;
  if ( !byte_4B109C6 )
  {
    textLabel = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&width, v8);
    byte_4B109C6 = 1;
  }
  if ( !v9 )
LABEL_13:
    sub_1BCAA3C(textLabel, *(_QWORD *)&width);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( width >= 1 && fixedScale >= 1 )
  {
    v11 = (float)((float)fixedScale / 1000.0) * BattleUIRangeLabel__GetLabelPrintedWidth(this, v10);
    if ( v11 >= (float)width )
    {
      v12.fields.x = (float)width / v11;
      v12.fields.y = 1.0;
      v12.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v9, v12, 0LL);
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

  if ( (byte_4B18A82 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisplay, method);
    byte_4B18A82 = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisplay);
  if ( UnityEngine_Object__op_Inequality(resetLineSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.resetLineSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
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
    sub_1BCAA3C(0LL, method);
  LODWORD(result) = *(_QWORD *)&UILabel__get_printedSize(textLabel, 0LL);
  return result;
}


int32_t __fastcall BattleUIRangeLabel__GetTextLength(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8
  struct System_String_o *mText; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel || (mText = textLabel->fields.mText) == 0LL )
    sub_1BCAA3C(this, method);
  return mText->fields._stringLength;
}


void __fastcall BattleUIRangeLabel__OnDisable(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleUIRangeLabel_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UILabel_o *textLabel; // x20
  const MethodInfo *v9; // x1
  float32x2_t v10; // d1
  int32x2_t v11; // d1
  float32x2_t v12; // d0
  int32x2_t v13; // d0
  const MethodInfo *v14; // x2
  float32x2_t v15; // d0
  int32x2_t v16; // d0
  float32x2_t v17; // d1
  int32x2_t v18; // d1
  const MethodInfo *v19; // x2
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B18A84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_Color__GetValueOrDefault__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v4, v5);
    this = (BattleUIRangeLabel_o *)sub_1BCA7E0(&Method_System_Nullable_Color__get_Value__, v6, v7);
    byte_4B18A84 = 1;
  }
  textLabel = v3->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  method = (const MethodInfo *)(unsigned int)v3->fields.saveDepth;
  if ( textLabel->fields.mDepth != (_DWORD)method )
  {
    UIWidget__set_depth((UIWidget_o *)v3->fields.textLabel, (int32_t)method, 0LL);
    BattleUIRangeLabel__UpdateResetLineDepth(v3, v9);
    textLabel = v3->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
  }
  if ( v3->fields.saveColor.fields.hasValue )
  {
    v10.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mColor.fields.r,
                       *(float32x2_t *)&v3->fields.saveColor.fields.value.fields.r).n64_u64[0];
    v11.n64_u64[0] = vmul_f32(v10, v10).n64_u64[0];
    v12.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mColor.fields.b,
                       *(float32x2_t *)&v3->fields.saveColor.fields.value.fields.b).n64_u64[0];
    v13.n64_u64[0] = vmul_f32(v12, v12).n64_u64[0];
    if ( vadd_f32(vdup_lane_s32(v13, 1), vadd_f32(v13, vadd_f32(vdup_lane_s32(v11, 1), v11))).n64_f32[0] >= 1.0e-10 )
    {
      Value = System_Nullable_Color___get_Value(
                &v3->fields.saveColor,
                (const MethodInfo_36BBBFC *)Method_System_Nullable_Color__get_Value__);
      BattleUIRangeLabel__UpdateRgbColor(v3, textLabel, Value, v14);
      textLabel = v3->fields.textLabel;
      if ( !textLabel )
        goto LABEL_15;
    }
  }
  if ( v3->fields.saveEffectColor.fields.hasValue )
  {
    v15.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mEffectColor.fields.r,
                       *(float32x2_t *)&v3->fields.saveEffectColor.fields.value.fields.r).n64_u64[0];
    v16.n64_u64[0] = vmul_f32(v15, v15).n64_u64[0];
    v17.n64_u64[0] = vsub_f32(
                       *(float32x2_t *)&textLabel->fields.mEffectColor.fields.b,
                       *(float32x2_t *)&v3->fields.saveEffectColor.fields.value.fields.b).n64_u64[0];
    v18.n64_u64[0] = vmul_f32(v17, v17).n64_u64[0];
    if ( vadd_f32(vdup_lane_s32(v18, 1), vadd_f32(v18, vadd_f32(vdup_lane_s32(v16, 1), v16))).n64_f32[0] >= 1.0e-10 )
    {
      v21 = System_Nullable_Color___get_Value(
              &v3->fields.saveEffectColor,
              (const MethodInfo_36BBBFC *)Method_System_Nullable_Color__get_Value__);
      UILabel__set_effectColor(textLabel, v21, 0LL);
    }
  }
  this = (BattleUIRangeLabel_o *)v3->fields.iconSprite;
  v3->fields.isFirst = 1;
  if ( !this || (this = (BattleUIRangeLabel_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0LL)) == 0LL )
LABEL_15:
    sub_1BCAA3C(this, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.savePosValue, 0LL);
  BattleUIRangeLabel__DisplayResetLine(v3, 0, v19);
}


void __fastcall BattleUIRangeLabel__ParentHasChanged(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *textLabel; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *resetLineSprite; // x20

  if ( (byte_4B18A7E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18A7E = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_10;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)textLabel + 616LL))(
    textLabel,
    *(_QWORD *)(*(_QWORD *)textLabel + 624LL));
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(textLabel, method);
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

  if ( (byte_4B18A7F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, text, iconName);
    byte_4B18A7F = 1;
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
    sub_1BCAA3C(iconSprite, v17);
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
  iconSprite = (UnityEngine_Component_o *)System_String__Equals_62409536(text, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct UILabel_o *textLabel; // x8
  __int128 v10; // q0
  struct UILabel_o *v11; // x8
  __int128 v12; // q0
  UILabel_o *v13; // x23
  float v14; // s3
  float v15; // s0
  float v16; // s1
  float v17; // s2
  const MethodInfo *v18; // x2
  UILabel_o *v19; // x22
  float v20; // s3
  float v21; // s0
  float v22; // s1
  float v23; // s2
  const MethodInfo *v24; // x2
  System_Nullable_Color__o v25; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o mEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B18A83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_Color___ctor__, buffData, method);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v5, v6);
    this = (BattleUIRangeLabel_o *)sub_1BCA7E0(&Method_System_Nullable_Color__get_Value__, v7, v8);
    byte_4B18A83 = 1;
  }
  if ( !v4->fields.saveColor.fields.hasValue )
  {
    textLabel = v4->fields.textLabel;
    if ( !textLabel )
      goto LABEL_15;
    mColor = textLabel->fields.mColor;
    memset(&v25, 0, sizeof(v25));
    System_Nullable_Color____ctor(&v25, mColor, (const MethodInfo_36BBBE0 *)Method_System_Nullable_Color___ctor__);
    v10 = *(_OWORD *)&v25.fields.hasValue;
    v4->fields.saveColor.fields.value.fields.a = v25.fields.value.fields.a;
    *(_OWORD *)&v4->fields.saveColor.fields.hasValue = v10;
  }
  if ( !v4->fields.saveEffectColor.fields.hasValue )
  {
    v11 = v4->fields.textLabel;
    if ( !v11 )
      goto LABEL_15;
    mEffectColor = v11->fields.mEffectColor;
    memset(&v25, 0, sizeof(v25));
    System_Nullable_Color____ctor(&v25, mEffectColor, (const MethodInfo_36BBBE0 *)Method_System_Nullable_Color___ctor__);
    v12 = *(_OWORD *)&v25.fields.hasValue;
    v4->fields.saveEffectColor.fields.value.fields.a = v25.fields.value.fields.a;
    *(_OWORD *)&v4->fields.saveEffectColor.fields.hasValue = v12;
  }
  if ( !buffData )
LABEL_15:
    sub_1BCAA3C(this, buffData);
  v13 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    v14 = 1.0;
    v15 = 0.5;
    v16 = 0.5;
    v17 = 0.5;
    if ( v13 )
      goto LABEL_12;
    goto LABEL_15;
  }
  *(UnityEngine_Color_o *)&v15 = System_Nullable_Color___get_Value(
                                   &v4->fields.saveEffectColor,
                                   (const MethodInfo_36BBBFC *)Method_System_Nullable_Color__get_Value__);
  if ( !v13 )
    goto LABEL_15;
LABEL_12:
  UILabel__set_effectColor(v13, *(UnityEngine_Color_o *)&v15, 0LL);
  v19 = v4->fields.textLabel;
  if ( buffData->fields.isGrayDisp )
  {
    v20 = 1.0;
    v21 = 0.5;
    v22 = 0.5;
    v23 = 0.5;
  }
  else
  {
    *(UnityEngine_Color_o *)&v21 = System_Nullable_Color___get_Value(
                                     &v4->fields.saveColor,
                                     (const MethodInfo_36BBBFC *)Method_System_Nullable_Color__get_Value__);
  }
  BattleUIRangeLabel__UpdateRgbColor(v4, v19, *(UnityEngine_Color_o *)&v21, v18);
  if ( buffData->fields.isGrayDisp )
    BattleUIRangeLabel__AddLabelDepth(v4, -2, v24);
}


void __fastcall BattleUIRangeLabel__UpdateResetLineDepth(BattleUIRangeLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *resetLineSprite; // x20
  struct UISprite_o *v5; // x0
  __int64 v6; // x1
  struct UILabel_o *textLabel; // x8

  if ( (byte_4B18A81 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18A81 = 1;
  }
  resetLineSprite = (UnityEngine_Object_o *)this->fields.resetLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(resetLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel || (v5 = this->fields.resetLineSprite) == 0LL )
      sub_1BCAA3C(v5, v6);
    UIWidget__set_depth((UIWidget_o *)v5, textLabel->fields.mDepth + 5, 0LL);
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
    sub_1BCAA3C(this, label);
  }
  ((void (__fastcall *)(BattleUIRangeLabel_o *, Il2CppClass *, long double))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    v10);
}