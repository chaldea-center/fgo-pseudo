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
  int32_t v23; // w22
  float v24; // s9
  System_Collections_Hashtable_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w8
  float v32; // s8
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x0
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v54; // x21
  int v55; // [xsp+8h] [xbp-58h] BYREF
  int v56; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v59; // [xsp+18h] [xbp-48h] BYREF
  float v60; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C00EF8 & 1) == 0 )
  {
    sub_1C2E12C(&CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    sub_1C2E12C(&iTween_EaseType_TypeInfo, v7);
    sub_1C2E12C(&System_Collections_Hashtable_TypeInfo, v8);
    sub_1C2E12C(&iTween_LoopType_TypeInfo, v9);
    sub_1C2E12C(&float_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_15461/*"UpdateGauge"*/, v11);
    sub_1C2E12C(&StringLiteral_22702/*"onupdatetarget"*/, v12);
    sub_1C2E12C(&StringLiteral_20005/*"from"*/, v13);
    sub_1C2E12C(&StringLiteral_21604/*"loopType"*/, v14);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v15);
    sub_1C2E12C(&StringLiteral_22700/*"onupdate"*/, v16);
    sub_1C2E12C(&StringLiteral_18875/*"delay"*/, v17);
    sub_1C2E12C(&StringLiteral_24425/*"to"*/, v18);
    sub_1C2E12C(&StringLiteral_6855/*"FinishGauge"*/, v19);
    sub_1C2E12C(&StringLiteral_19087/*"easeType"*/, v20);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v21);
    sub_1C2E12C(&iTween_TypeInfo, v22);
    byte_4C00EF8 = 1;
  }
  if ( !this->fields.state )
  {
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v23 = CoinRoomUtility__MaxPoint(0LL);
    v24 = (float)beforePoint / (float)v23;
    v25 = (System_Collections_Hashtable_o *)sub_1C2E378(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_63815344(v25, 0LL);
    v60 = v24;
    v29 = j_il2cpp_value_box_0(float_TypeInfo, &v60, v26, v27, v28);
    if ( !v25 )
      sub_1C2E388(v29, v30);
    if ( afterPoint )
      v31 = afterPoint;
    else
      v31 = v23;
    v32 = (float)v31 / (float)v23;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_20005/*"from"*/,
      v29,
      v25->klass->vtable._24_Clear.methodPtr);
    v59 = v32;
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &v59, v33, v34, v35);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_24425/*"to"*/,
      v36,
      v25->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v40 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime, v37, v38, v39);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_24383/*"time"*/,
      v40,
      v25->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v44 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime, v41, v42, v43);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_18875/*"delay"*/,
      v44,
      v25->klass->vtable._24_Clear.methodPtr);
    v56 = 1;
    v48 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v56, v45, v46, v47);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_19087/*"easeType"*/,
      v48,
      v25->klass->vtable._24_Clear.methodPtr);
    v55 = 0;
    v52 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v55, v49, v50, v51);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_21604/*"loopType"*/,
      v52,
      v25->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_22700/*"onupdate"*/,
      StringLiteral_15461/*"UpdateGauge"*/,
      v25->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_22692/*"oncomplete"*/,
      StringLiteral_6855/*"FinishGauge"*/,
      v25->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_22702/*"onupdatetarget"*/,
      gameObject,
      v25->klass->vtable._24_Clear.methodPtr);
    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v54, v25, 0LL);
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
      sub_1C2E388(0LL, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}