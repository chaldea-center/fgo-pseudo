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
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w8
  float v17; // s8
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v39; // x21
  int v40; // [xsp+8h] [xbp-58h] BYREF
  int v41; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v44; // [xsp+18h] [xbp-48h] BYREF
  float v45; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C2AF26 & 1) == 0 )
  {
    sub_1C2D490(&CoinRoomUtility_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&iTween_LoopType_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_15185/*"UpdateGauge"*/);
    sub_1C2D490(&StringLiteral_22420/*"onupdatetarget"*/);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_21339/*"loopType"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_6723/*"FinishGauge"*/);
    sub_1C2D490(&StringLiteral_18741/*"easeType"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AF26 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v8 = CoinRoomUtility__MaxPoint((const MethodInfo *)v7);
    v9 = (float)beforePoint / (float)v8;
    v10 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_64822836(v10, 0);
    v45 = v9;
    v14 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v11, v12, v13);
    if ( !v10 )
      sub_1C2D6EC(v14, v15);
    if ( afterPoint )
      v16 = afterPoint;
    else
      v16 = v8;
    v17 = (float)v16 / (float)v8;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_19677/*"from"*/,
      v14,
      v10->klass->vtable._22_Add.method);
    v44 = v17;
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &v44, v18, v19, v20);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24088/*"to"*/,
      v21,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v25 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime, v22, v23, v24);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24049/*"time"*/,
      v25,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v29 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime, v26, v27, v28);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18545/*"delay"*/,
      v29,
      v10->klass->vtable._22_Add.method);
    v41 = 1;
    v33 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v41, v30, v31, v32);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18741/*"easeType"*/,
      v33,
      v10->klass->vtable._22_Add.method);
    v40 = 0;
    v37 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v40, v34, v35, v36);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_21339/*"loopType"*/,
      v37,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22418/*"onupdate"*/,
      StringLiteral_15185/*"UpdateGauge"*/,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22410/*"oncomplete"*/,
      StringLiteral_6723/*"FinishGauge"*/,
      v10->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22420/*"onupdatetarget"*/,
      gameObject,
      v10->klass->vtable._22_Add.method);
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v39, v10, 0);
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
      sub_1C2D6EC(0, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0);
  }
}