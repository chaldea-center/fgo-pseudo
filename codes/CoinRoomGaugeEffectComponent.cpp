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
  int v22; // [xsp+0h] [xbp-50h] BYREF
  int v23; // [xsp+4h] [xbp-4Ch] BYREF
  int v24; // [xsp+8h] [xbp-48h] BYREF
  float gaugeAnimationDelayTime; // [xsp+Ch] [xbp-44h] BYREF
  float v26; // [xsp+28h] [xbp-28h] BYREF
  float v27; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_42B0E75 & 1) == 0 )
  {
    sub_B52984(&CoinRoomUtility_TypeInfo);
    sub_B52984(&iTween_EaseType_TypeInfo);
    sub_B52984(&System_Collections_Hashtable_TypeInfo);
    sub_B52984(&iTween_LoopType_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_15161/*"UpdateGauge"*/);
    sub_B52984(&StringLiteral_21444/*"onupdatetarget"*/);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_20478/*"loopType"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_18079/*"delay"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    sub_B52984(&StringLiteral_6721/*"FinishGauge"*/);
    sub_B52984(&StringLiteral_18246/*"easeType"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B0E75 = 1;
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
    v10 = (System_Collections_Hashtable_o *)sub_B52A54(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39351252(v10, 0LL);
    v27 = v9;
    v11 = j_il2cpp_value_box_0(float_TypeInfo, &v27);
    if ( !v10 )
      sub_B52A5C(v11, v12);
    if ( afterPoint )
      v13 = afterPoint;
    else
      v13 = v8;
    v14 = (float)v13 / (float)v8;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_19056/*"from"*/,
      v11,
      v10->klass->vtable._24_Clear.methodPtr);
    v26 = v14;
    v15 = j_il2cpp_value_box_0(float_TypeInfo, &v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_22904/*"to"*/,
      v15,
      v10->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v16 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_22867/*"time"*/,
      v16,
      v10->klass->vtable._24_Clear.methodPtr);
    v24 = *((_DWORD *)&this->fields.gaugeAnimationDelayTime + 1);
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v24);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_18079/*"delay"*/,
      v17,
      v10->klass->vtable._24_Clear.methodPtr);
    v23 = 1;
    v18 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v23);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_18246/*"easeType"*/,
      v18,
      v10->klass->vtable._24_Clear.methodPtr);
    v22 = 0;
    v19 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v22);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_20478/*"loopType"*/,
      v19,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21442/*"onupdate"*/,
      StringLiteral_15161/*"UpdateGauge"*/,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21433/*"oncomplete"*/,
      StringLiteral_6721/*"FinishGauge"*/,
      v10->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21444/*"onupdatetarget"*/,
      gameObject,
      v10->klass->vtable._24_Clear.methodPtr);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v21, v10, 0LL);
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
      sub_B52A5C(0LL, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}