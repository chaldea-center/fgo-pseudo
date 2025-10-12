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
  int32_t v18; // w8
  float v19; // s8
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  __int64 v26; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  __int64 v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  __int64 v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  __int64 v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v56; // x21
  int v57; // [xsp+8h] [xbp-58h] BYREF
  int v58; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v61; // [xsp+18h] [xbp-48h] BYREF
  float v62; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C3B746 & 1) == 0 )
  {
    sub_1C32C20(&CoinRoomUtility_TypeInfo);
    sub_1C32C20(&iTween_EaseType_TypeInfo);
    sub_1C32C20(&System_Collections_Hashtable_TypeInfo);
    sub_1C32C20(&iTween_LoopType_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_15186/*"UpdateGauge"*/);
    sub_1C32C20(&StringLiteral_22437/*"onupdatetarget"*/);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_21352/*"loopType"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_18551/*"delay"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_6728/*"FinishGauge"*/);
    sub_1C32C20(&StringLiteral_18750/*"easeType"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3B746 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v8 = CoinRoomUtility__MaxPoint((const MethodInfo *)v7);
    v9 = (float)beforePoint / (float)v8;
    v10 = (System_Collections_Hashtable_o *)sub_1C32E6C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_64882772(v10, 0);
    v62 = v9;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v62, v11, v12, v13, v14, v15, v16);
    if ( !v10 )
      sub_1C32E7C(v17);
    if ( afterPoint )
      v18 = afterPoint;
    else
      v18 = v8;
    v19 = (float)v18 / (float)v8;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_19689/*"from"*/,
      v17,
      v10->klass->vtable._22_Add.method);
    v61 = v19;
    v26 = j_il2cpp_value_box_0(float_TypeInfo, &v61, v20, v21, v22, v23, v24, v25);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24106/*"to"*/,
      v26,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v33 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime, v27, v28, v29, v30, v31, v32);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24067/*"time"*/,
      v33,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v40 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime, v34, v35, v36, v37, v38, v39);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18551/*"delay"*/,
      v40,
      v10->klass->vtable._22_Add.method);
    v58 = 1;
    v47 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v58, v41, v42, v43, v44, v45, v46);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18750/*"easeType"*/,
      v47,
      v10->klass->vtable._22_Add.method);
    v57 = 0;
    v54 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v57, v48, v49, v50, v51, v52, v53);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_21352/*"loopType"*/,
      v54,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22435/*"onupdate"*/,
      StringLiteral_15186/*"UpdateGauge"*/,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22427/*"oncomplete"*/,
      StringLiteral_6728/*"FinishGauge"*/,
      v10->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22437/*"onupdatetarget"*/,
      gameObject,
      v10->klass->vtable._22_Add.method);
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v56, v10, 0);
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
      sub_1C32E7C(0);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0);
  }
}