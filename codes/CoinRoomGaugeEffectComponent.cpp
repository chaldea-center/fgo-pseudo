void CoinRoomGaugeEffectComponent___ctor(CoinRoomGaugeEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CoinRoomGaugeEffectComponent__FinishGauge(CoinRoomGaugeEffectComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomGaugeEffectComponent__StartAnimation(
        CoinRoomGaugeEffectComponent_o *this,
        int32_t beforePoint,
        int32_t afterPoint,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v7; // x0
  int32_t v8; // w0
  float v9; // s8
  int32_t v10; // w22
  float v11; // s9
  System_Collections_Hashtable_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w8
  float v16; // s8
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x21
  int v25; // [xsp+8h] [xbp-58h] BYREF
  int v26; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v29; // [xsp+18h] [xbp-48h] BYREF
  float v30; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_593C5FF & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomUtility_TypeInfo);
    sub_21FFC50(&iTween_EaseType_TypeInfo);
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&iTween_LoopType_TypeInfo);
    sub_21FFC50(&StringLiteral_15765/*"UpdateGauge"*/);
    sub_21FFC50(&StringLiteral_23528/*"onupdatetarget"*/);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_22391/*"loopType"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_7001/*"FinishGauge"*/);
    sub_21FFC50(&StringLiteral_19566/*"easeType"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593C5FF = 1;
  }
  if ( !this->fields.state )
  {
    v7 = CoinRoomUtility_TypeInfo;
    if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    v8 = CoinRoomUtility__MaxPoint((const MethodInfo *)v7);
    v9 = (float)v8;
    v10 = v8;
    v11 = (float)beforePoint / (float)v8;
    v12 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_76632148(v12, 0);
    v30 = v11;
    v13 = j_il2cpp_value_box_0(qword_594C0A0, &v30);
    if ( !v12 )
      sub_21FFECC(v13, v14);
    if ( afterPoint )
      v15 = afterPoint;
    else
      v15 = v10;
    v16 = (float)v15 / v9;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_20581/*"from"*/,
      v13,
      v12->klass->vtable._22_Add.method);
    v29 = v16;
    v17 = j_il2cpp_value_box_0(qword_594C0A0, &v29);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_25358/*"to"*/,
      v17,
      v12->klass->vtable._22_Add.method);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v18 = j_il2cpp_value_box_0(qword_594C0A0, &gaugeAnimationTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_25318/*"time"*/,
      v18,
      v12->klass->vtable._22_Add.method);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v19 = j_il2cpp_value_box_0(qword_594C0A0, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_19348/*"delay"*/,
      v19,
      v12->klass->vtable._22_Add.method);
    v26 = 1;
    v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_19566/*"easeType"*/,
      v20,
      v12->klass->vtable._22_Add.method);
    v25 = 0;
    v21 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v25);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_22391/*"loopType"*/,
      v21,
      v12->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_23526/*"onupdate"*/,
      StringLiteral_15765/*"UpdateGauge"*/,
      v12->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_23518/*"oncomplete"*/,
      StringLiteral_7001/*"FinishGauge"*/,
      v12->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v12->klass->vtable._22_Add.methodPtr)(
      v12,
      StringLiteral_23528/*"onupdatetarget"*/,
      gameObject,
      v12->klass->vtable._22_Add.method);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v23);
    iTween__ValueTo(v24, v12, 0);
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
      sub_21FFECC(0, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0);
  }
}