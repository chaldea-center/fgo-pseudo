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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  CoinRoomUtility_c *v55; // x0
  int32_t v56; // w22
  float v57; // s9
  System_Collections_Hashtable_o *v58; // x20
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w8
  float v62; // s8
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v69; // x21
  int v70; // [xsp+0h] [xbp-50h] BYREF
  int v71; // [xsp+4h] [xbp-4Ch] BYREF
  int v72; // [xsp+8h] [xbp-48h] BYREF
  float gaugeAnimationDelayTime; // [xsp+Ch] [xbp-44h] BYREF
  float v74; // [xsp+28h] [xbp-28h] BYREF
  float v75; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_42E8D1B & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, beforePoint, afterPoint, method);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&iTween_LoopType_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&float_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_15220/*"UpdateGauge"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_21553/*"onupdatetarget"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_20583/*"loopType"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_6757/*"FinishGauge"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_18340/*"easeType"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v49, v50, v51);
    sub_B5D5C4(&iTween_TypeInfo, v52, v53, v54);
    byte_42E8D1B = 1;
  }
  if ( !this->fields.state )
  {
    v55 = CoinRoomUtility_TypeInfo;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v56 = CoinRoomUtility__MaxPoint((const MethodInfo *)v55);
    v57 = (float)beforePoint / (float)v56;
    v58 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39706016(v58, 0LL);
    v75 = v57;
    v59 = j_il2cpp_value_box_0(float_TypeInfo, &v75);
    if ( !v58 )
      sub_B5D69C(v59, v60);
    if ( afterPoint )
      v61 = afterPoint;
    else
      v61 = v56;
    v62 = (float)v61 / (float)v56;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_19153/*"from"*/,
      v59,
      v58->klass->vtable._24_Clear.methodPtr);
    v74 = v62;
    v63 = j_il2cpp_value_box_0(float_TypeInfo, &v74);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_23019/*"to"*/,
      v63,
      v58->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v64 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_22982/*"time"*/,
      v64,
      v58->klass->vtable._24_Clear.methodPtr);
    v72 = *((_DWORD *)&this->fields.gaugeAnimationDelayTime + 1);
    v65 = j_il2cpp_value_box_0(float_TypeInfo, &v72);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_18173/*"delay"*/,
      v65,
      v58->klass->vtable._24_Clear.methodPtr);
    v71 = 1;
    v66 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v71);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_18340/*"easeType"*/,
      v66,
      v58->klass->vtable._24_Clear.methodPtr);
    v70 = 0;
    v67 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v70);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_20583/*"loopType"*/,
      v67,
      v58->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_21551/*"onupdate"*/,
      StringLiteral_15220/*"UpdateGauge"*/,
      v58->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_21542/*"oncomplete"*/,
      StringLiteral_6757/*"FinishGauge"*/,
      v58->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
      v58,
      StringLiteral_21553/*"onupdatetarget"*/,
      gameObject,
      v58->klass->vtable._24_Clear.methodPtr);
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v69, v58, 0LL);
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
      sub_B5D69C(0LL, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}