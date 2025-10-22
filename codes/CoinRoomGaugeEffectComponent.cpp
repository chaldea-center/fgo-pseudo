void CoinRoomGaugeEffectComponent___ctor(CoinRoomGaugeEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CoinRoomGaugeEffectComponent__FinishGauge(CoinRoomGaugeEffectComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void CoinRoomGaugeEffectComponent__StartAnimation(
        CoinRoomGaugeEffectComponent_o *this,
        int32_t beforePoint,
        int32_t afterPoint,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v7; // x0
  int32_t v8; // w22
  float v9; // s9
  System_Collections_Hashtable_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w8
  float v20; // s8
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  __int64 v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  __int64 v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  __int64 v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  __int64 v55; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x21
  int v58; // [xsp+8h] [xbp-58h] BYREF
  int v59; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v62; // [xsp+18h] [xbp-48h] BYREF
  float v63; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C5AB50 & 1) == 0 )
  {
    sub_1C3E564(&CoinRoomUtility_TypeInfo);
    sub_1C3E564(&iTween_EaseType_TypeInfo);
    sub_1C3E564(&System_Collections_Hashtable_TypeInfo);
    sub_1C3E564(&iTween_LoopType_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_15198/*"UpdateGauge"*/);
    sub_1C3E564(&StringLiteral_22458/*"onupdatetarget"*/);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_21373/*"loopType"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_18572/*"delay"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_6729/*"FinishGauge"*/);
    sub_1C3E564(&StringLiteral_18771/*"easeType"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5AB50 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v8 = CoinRoomUtility__MaxPoint((const MethodInfo *)v7);
    v9 = (float)beforePoint / (float)v8;
    v10 = (System_Collections_Hashtable_o *)sub_1C3E7B0(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_65000696(v10, 0);
    v63 = v9;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v63, v11, v12, v13, v14, v15, v16);
    if ( !v10 )
      sub_1C3E7C0(v17, v18);
    if ( afterPoint )
      v19 = afterPoint;
    else
      v19 = v8;
    v20 = (float)v19 / (float)v8;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_19710/*"from"*/,
      v17,
      v10->klass->vtable._22_Add.method);
    v62 = v20;
    v27 = j_il2cpp_value_box_0(float_TypeInfo, &v62, v21, v22, v23, v24, v25, v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24130/*"to"*/,
      v27,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime, v28, v29, v30, v31, v32, v33);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24091/*"time"*/,
      v34,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v41 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime, v35, v36, v37, v38, v39, v40);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18572/*"delay"*/,
      v41,
      v10->klass->vtable._22_Add.method);
    v59 = 1;
    v48 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v59, v42, v43, v44, v45, v46, v47);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18771/*"easeType"*/,
      v48,
      v10->klass->vtable._22_Add.method);
    v58 = 0;
    v55 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v58, v49, v50, v51, v52, v53, v54);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_21373/*"loopType"*/,
      v55,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22456/*"onupdate"*/,
      StringLiteral_15198/*"UpdateGauge"*/,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22448/*"oncomplete"*/,
      StringLiteral_6729/*"FinishGauge"*/,
      v10->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22458/*"onupdatetarget"*/,
      gameObject,
      v10->klass->vtable._22_Add.method);
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v57, v10, 0);
    this->fields.state = 1;
  }
}


void CoinRoomGaugeEffectComponent__UpdateGauge(
        CoinRoomGaugeEffectComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UIProgressBar_o *gaugeBarSlider; // x0

  if ( this->fields.state == 1 )
  {
    gaugeBarSlider = (UIProgressBar_o *)this->fields.gaugeBarSlider;
    if ( !gaugeBarSlider )
      sub_1C3E7C0(0, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0);
  }
}