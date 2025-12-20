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
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w8
  float v14; // s8
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x21
  int v22; // [xsp+8h] [xbp-58h] BYREF
  int v23; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v26; // [xsp+18h] [xbp-48h] BYREF
  float v27; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4D30655 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&iTween_EaseType_TypeInfo);
    sub_1C94098(&System_Collections_Hashtable_TypeInfo);
    sub_1C94098(&iTween_LoopType_TypeInfo);
    sub_1C94098(&float_TypeInfo);
    sub_1C94098(&StringLiteral_15244/*"UpdateGauge"*/);
    sub_1C94098(&StringLiteral_22651/*"onupdatetarget"*/);
    sub_1C94098(&StringLiteral_19853/*"from"*/);
    sub_1C94098(&StringLiteral_21558/*"loopType"*/);
    sub_1C94098(&StringLiteral_24310/*"time"*/);
    sub_1C94098(&StringLiteral_22649/*"onupdate"*/);
    sub_1C94098(&StringLiteral_18660/*"delay"*/);
    sub_1C94098(&StringLiteral_24349/*"to"*/);
    sub_1C94098(&StringLiteral_6736/*"FinishGauge"*/);
    sub_1C94098(&StringLiteral_18868/*"easeType"*/);
    sub_1C94098(&StringLiteral_22641/*"oncomplete"*/);
    sub_1C94098(&iTween_TypeInfo);
    byte_4D30655 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v8 = CoinRoomUtility__MaxPoint((const MethodInfo *)v7);
    v9 = (float)beforePoint / (float)v8;
    v10 = (System_Collections_Hashtable_o *)sub_1C942E4(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_65780360(v10, 0);
    v27 = v9;
    v11 = j_il2cpp_value_box_0(float_TypeInfo, &v27);
    if ( !v10 )
      sub_1C942F0(v11, v12);
    if ( afterPoint )
      v13 = afterPoint;
    else
      v13 = v8;
    v14 = (float)v13 / (float)v8;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_19853/*"from"*/,
      v11,
      v10->klass->vtable._22_Add.method);
    v26 = v14;
    v15 = j_il2cpp_value_box_0(float_TypeInfo, &v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24349/*"to"*/,
      v15,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v16 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24310/*"time"*/,
      v16,
      v10->klass->vtable._22_Add.method);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18660/*"delay"*/,
      v17,
      v10->klass->vtable._22_Add.method);
    v23 = 1;
    v18 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v23);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18868/*"easeType"*/,
      v18,
      v10->klass->vtable._22_Add.method);
    v22 = 0;
    v19 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v22);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_21558/*"loopType"*/,
      v19,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22649/*"onupdate"*/,
      StringLiteral_15244/*"UpdateGauge"*/,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22641/*"oncomplete"*/,
      StringLiteral_6736/*"FinishGauge"*/,
      v10->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22651/*"onupdatetarget"*/,
      gameObject,
      v10->klass->vtable._22_Add.method);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v21, v10, 0);
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
      sub_1C942F0(0, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0);
  }
}