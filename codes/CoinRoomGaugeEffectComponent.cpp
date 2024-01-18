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


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomGaugeEffectComponent__StartAnimation(
        CoinRoomGaugeEffectComponent_o *this,
        int32_t beforePoint,
        int32_t afterPoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  CoinRoomUtility_c *v23; // x0
  int32_t v24; // w22
  float v25; // s9
  System_Collections_Hashtable_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w8
  float v30; // s8
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x21
  int v38; // [xsp+0h] [xbp-50h] BYREF
  int v39; // [xsp+4h] [xbp-4Ch] BYREF
  int v40; // [xsp+8h] [xbp-48h] BYREF
  float gaugeAnimationDelayTime; // [xsp+Ch] [xbp-44h] BYREF
  float v42; // [xsp+28h] [xbp-28h] BYREF
  float v43; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4188876 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v8);
    sub_B2C35C(&iTween_LoopType_TypeInfo, v9);
    sub_B2C35C(&float_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_15062/*"UpdateGauge"*/, v11);
    sub_B2C35C(&StringLiteral_21274/*"onupdatetarget"*/, v12);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v13);
    sub_B2C35C(&StringLiteral_20324/*"loopType"*/, v14);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v15);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v16);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v17);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v18);
    sub_B2C35C(&StringLiteral_6677/*"FinishGauge"*/, v19);
    sub_B2C35C(&StringLiteral_18113/*"easeType"*/, v20);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v21);
    sub_B2C35C(&iTween_TypeInfo, v22);
    byte_4188876 = 1;
  }
  if ( !this->fields.state )
  {
    v23 = CoinRoomUtility_TypeInfo;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v24 = CoinRoomUtility__MaxPoint((const MethodInfo *)v23);
    v25 = (float)beforePoint / (float)v24;
    v26 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_38345656(v26, 0LL);
    v43 = v25;
    v27 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
    if ( !v26 )
      sub_B2C434(v27, v28);
    if ( afterPoint )
      v29 = afterPoint;
    else
      v29 = v24;
    v30 = (float)v29 / (float)v24;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_18914/*"from"*/,
      v27,
      v26->klass->vtable._24_Clear.methodPtr);
    v42 = v30;
    v31 = j_il2cpp_value_box_0(float_TypeInfo, &v42);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_22714/*"to"*/,
      v31,
      v26->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v32 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_22677/*"time"*/,
      v32,
      v26->klass->vtable._24_Clear.methodPtr);
    v40 = *((_DWORD *)&this->fields.gaugeAnimationDelayTime + 1);
    v33 = j_il2cpp_value_box_0(float_TypeInfo, &v40);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_17949/*"delay"*/,
      v33,
      v26->klass->vtable._24_Clear.methodPtr);
    v39 = 1;
    v34 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v39);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_18113/*"easeType"*/,
      v34,
      v26->klass->vtable._24_Clear.methodPtr);
    v38 = 0;
    v35 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v38);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_20324/*"loopType"*/,
      v35,
      v26->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_21272/*"onupdate"*/,
      StringLiteral_15062/*"UpdateGauge"*/,
      v26->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_21263/*"oncomplete"*/,
      StringLiteral_6677/*"FinishGauge"*/,
      v26->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
      v26,
      StringLiteral_21274/*"onupdatetarget"*/,
      gameObject,
      v26->klass->vtable._24_Clear.methodPtr);
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v37, v26, 0LL);
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
      sub_B2C434(0LL, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}