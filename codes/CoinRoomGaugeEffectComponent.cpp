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
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Hashtable_o *v28; // x20
  __int64 v29; // x0
  int32_t v30; // w8
  float v31; // s8
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x21
  int v39; // [xsp+8h] [xbp-58h] BYREF
  int v40; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v43; // [xsp+18h] [xbp-48h] BYREF
  float v44; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FF8F1 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    sub_1B640C8(&iTween_EaseType_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v8);
    sub_1B640C8(&iTween_LoopType_TypeInfo, v9);
    sub_1B640C8(&float_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_15114/*"UpdateGauge"*/, v11);
    sub_1B640C8(&StringLiteral_22195/*"onupdatetarget"*/, v12);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v13);
    sub_1B640C8(&StringLiteral_21133/*"loopType"*/, v14);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v15);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v16);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v17);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v18);
    sub_1B640C8(&StringLiteral_6666/*"FinishGauge"*/, v19);
    sub_1B640C8(&StringLiteral_18681/*"easeType"*/, v20);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v21);
    sub_1B640C8(&iTween_TypeInfo, v22);
    byte_49FF8F1 = 1;
  }
  if ( !this->fields.state )
  {
    v23 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v24 = CoinRoomUtility__MaxPoint((const MethodInfo *)v23);
    v25 = (float)beforePoint / (float)v24;
    v28 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v26, v27);
    System_Collections_Hashtable___ctor_61954820(v28, 0LL);
    v44 = v25;
    v29 = j_il2cpp_value_box_0(float_TypeInfo, &v44);
    if ( !v28 )
      sub_1B64324(v29);
    if ( afterPoint )
      v30 = afterPoint;
    else
      v30 = v24;
    v31 = (float)v30 / (float)v24;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_19577/*"from"*/,
      v29,
      v28->klass->vtable._24_Clear.methodPtr);
    v43 = v31;
    v32 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_23870/*"to"*/,
      v32,
      v28->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v33 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_23830/*"time"*/,
      v33,
      v28->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_18479/*"delay"*/,
      v34,
      v28->klass->vtable._24_Clear.methodPtr);
    v40 = 1;
    v35 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v40);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_18681/*"easeType"*/,
      v35,
      v28->klass->vtable._24_Clear.methodPtr);
    v39 = 0;
    v36 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v39);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_21133/*"loopType"*/,
      v36,
      v28->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_22193/*"onupdate"*/,
      StringLiteral_15114/*"UpdateGauge"*/,
      v28->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_22185/*"oncomplete"*/,
      StringLiteral_6666/*"FinishGauge"*/,
      v28->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_22195/*"onupdatetarget"*/,
      gameObject,
      v28->klass->vtable._24_Clear.methodPtr);
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v38, v28, 0LL);
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
      sub_1B64324(0LL);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}