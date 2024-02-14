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
  int v39; // [xsp+0h] [xbp-50h] BYREF
  int v40; // [xsp+4h] [xbp-4Ch] BYREF
  int v41; // [xsp+8h] [xbp-48h] BYREF
  float gaugeAnimationDelayTime; // [xsp+Ch] [xbp-44h] BYREF
  float v43; // [xsp+28h] [xbp-28h] BYREF
  float v44; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_421439A & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    sub_B0D8A4(&iTween_EaseType_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v8);
    sub_B0D8A4(&iTween_LoopType_TypeInfo, v9);
    sub_B0D8A4(&float_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_15108/*"UpdateGauge"*/, v11);
    sub_B0D8A4(&StringLiteral_21343/*"onupdatetarget"*/, v12);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v13);
    sub_B0D8A4(&StringLiteral_20387/*"loopType"*/, v14);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v15);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v16);
    sub_B0D8A4(&StringLiteral_18005/*"delay"*/, v17);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v18);
    sub_B0D8A4(&StringLiteral_6694/*"FinishGauge"*/, v19);
    sub_B0D8A4(&StringLiteral_18169/*"easeType"*/, v20);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v21);
    sub_B0D8A4(&iTween_TypeInfo, v22);
    byte_421439A = 1;
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
    v28 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, v26, v27);
    System_Collections_Hashtable___ctor_38437272(v28, 0LL);
    v44 = v25;
    v29 = j_il2cpp_value_box_0(float_TypeInfo, &v44);
    if ( !v28 )
      sub_B0D97C(v29);
    if ( afterPoint )
      v30 = afterPoint;
    else
      v30 = v24;
    v31 = (float)v30 / (float)v24;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_18972/*"from"*/,
      v29,
      v28->klass->vtable._24_Clear.methodPtr);
    v43 = v31;
    v32 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_22790/*"to"*/,
      v32,
      v28->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v33 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_22753/*"time"*/,
      v33,
      v28->klass->vtable._24_Clear.methodPtr);
    v41 = *((_DWORD *)&this->fields.gaugeAnimationDelayTime + 1);
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &v41);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_18005/*"delay"*/,
      v34,
      v28->klass->vtable._24_Clear.methodPtr);
    v40 = 1;
    v35 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v40);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_18169/*"easeType"*/,
      v35,
      v28->klass->vtable._24_Clear.methodPtr);
    v39 = 0;
    v36 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v39);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_20387/*"loopType"*/,
      v36,
      v28->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_21341/*"onupdate"*/,
      StringLiteral_15108/*"UpdateGauge"*/,
      v28->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_21332/*"oncomplete"*/,
      StringLiteral_6694/*"FinishGauge"*/,
      v28->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
      v28,
      StringLiteral_21343/*"onupdatetarget"*/,
      gameObject,
      v28->klass->vtable._24_Clear.methodPtr);
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
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
      sub_B0D97C(0LL);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}