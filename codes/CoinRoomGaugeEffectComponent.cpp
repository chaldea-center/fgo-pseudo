void __fastcall CoinRoomGaugeEffectComponent___ctor(CoinRoomGaugeEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CoinRoomGaugeEffectComponent__FinishGauge(
        CoinRoomGaugeEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void __fastcall CoinRoomGaugeEffectComponent__StartAnimation(
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
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w8
  float v15; // s8
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x2
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x21
  int v28; // [xsp+0h] [xbp-50h] BYREF
  int v29; // [xsp+4h] [xbp-4Ch] BYREF
  int v30; // [xsp+8h] [xbp-48h] BYREF
  float gaugeAnimationDelayTime; // [xsp+Ch] [xbp-44h] BYREF
  float v32; // [xsp+28h] [xbp-28h] BYREF
  float v33; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4352058 & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&iTween_EaseType_TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&iTween_LoopType_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_15249/*"UpdateGauge"*/);
    sub_B70694(&StringLiteral_21616/*"onupdatetarget"*/);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_20643/*"loopType"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_18220/*"delay"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    sub_B70694(&StringLiteral_6770/*"FinishGauge"*/);
    sub_B70694(&StringLiteral_18387/*"easeType"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_4352058 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = CoinRoomUtility_TypeInfo;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v8 = CoinRoomUtility__MaxPoint((const MethodInfo *)v7);
    v9 = (float)beforePoint / (float)v8;
    v10 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39248100(v10, 0LL);
    v33 = v9;
    v12 = j_il2cpp_value_box_0(float_TypeInfo, &v33, v11);
    if ( !v10 )
      sub_B7076C(v12, v13);
    if ( afterPoint )
      v14 = afterPoint;
    else
      v14 = v8;
    v15 = (float)v14 / (float)v8;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_19208/*"from"*/,
      v12,
      v10->klass->vtable._24_Clear.methodPtr);
    v32 = v15;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v32, v16);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_23091/*"to"*/,
      v17,
      v10->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v19 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime, v18);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_23053/*"time"*/,
      v19,
      v10->klass->vtable._24_Clear.methodPtr);
    v30 = *((_DWORD *)&this->fields.gaugeAnimationDelayTime + 1);
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v20);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_18220/*"delay"*/,
      v21,
      v10->klass->vtable._24_Clear.methodPtr);
    v29 = 1;
    v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v29, v22);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_18387/*"easeType"*/,
      v23,
      v10->klass->vtable._24_Clear.methodPtr);
    v28 = 0;
    v25 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v28, v24);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_20643/*"loopType"*/,
      v25,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21614/*"onupdate"*/,
      StringLiteral_15249/*"UpdateGauge"*/,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21605/*"oncomplete"*/,
      StringLiteral_6770/*"FinishGauge"*/,
      v10->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21616/*"onupdatetarget"*/,
      gameObject,
      v10->klass->vtable._24_Clear.methodPtr);
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v27, v10, 0LL);
    this->fields.state = 1;
  }
}


void __fastcall CoinRoomGaugeEffectComponent__UpdateGauge(
        CoinRoomGaugeEffectComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UIProgressBar_o *gaugeBarSlider; // x0

  if ( this->fields.state == 1 )
  {
    gaugeBarSlider = (UIProgressBar_o *)this->fields.gaugeBarSlider;
    if ( !gaugeBarSlider )
      sub_B7076C(0LL, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}