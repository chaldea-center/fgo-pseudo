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
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w8
  float v33; // s8
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v55; // x21
  int v56; // [xsp+8h] [xbp-58h] BYREF
  int v57; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v60; // [xsp+18h] [xbp-48h] BYREF
  float v61; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B05A1A & 1) == 0 )
  {
    sub_1BC3008(&CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    sub_1BC3008(&iTween_EaseType_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Hashtable_TypeInfo, v8);
    sub_1BC3008(&iTween_LoopType_TypeInfo, v9);
    sub_1BC3008(&float_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_15055/*"UpdateGauge"*/, v11);
    sub_1BC3008(&StringLiteral_22221/*"onupdatetarget"*/, v12);
    sub_1BC3008(&StringLiteral_19506/*"from"*/, v13);
    sub_1BC3008(&StringLiteral_21144/*"loopType"*/, v14);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v15);
    sub_1BC3008(&StringLiteral_22219/*"onupdate"*/, v16);
    sub_1BC3008(&StringLiteral_18383/*"delay"*/, v17);
    sub_1BC3008(&StringLiteral_23872/*"to"*/, v18);
    sub_1BC3008(&StringLiteral_6672/*"FinishGauge"*/, v19);
    sub_1BC3008(&StringLiteral_18577/*"easeType"*/, v20);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v21);
    sub_1BC3008(&iTween_TypeInfo, v22);
    byte_4B05A1A = 1;
  }
  if ( !this->fields.state )
  {
    v23 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v24 = CoinRoomUtility__MaxPoint((const MethodInfo *)v23);
    v25 = (float)beforePoint / (float)v24;
    v26 = (System_Collections_Hashtable_o *)sub_1BC3254(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_63711480(v26, 0LL);
    v61 = v25;
    v30 = j_il2cpp_value_box_0(float_TypeInfo, &v61, v27, v28, v29);
    if ( !v26 )
      sub_1BC3264(v30, v31);
    if ( afterPoint )
      v32 = afterPoint;
    else
      v32 = v24;
    v33 = (float)v32 / (float)v24;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_19506/*"from"*/,
      v30,
      v26->klass->vtable._23_Clear.methodPtr);
    v60 = v33;
    v37 = j_il2cpp_value_box_0(float_TypeInfo, &v60, v34, v35, v36);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_23872/*"to"*/,
      v37,
      v26->klass->vtable._23_Clear.methodPtr);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v41 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime, v38, v39, v40);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_23833/*"time"*/,
      v41,
      v26->klass->vtable._23_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v45 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime, v42, v43, v44);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_18383/*"delay"*/,
      v45,
      v26->klass->vtable._23_Clear.methodPtr);
    v57 = 1;
    v49 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v57, v46, v47, v48);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_18577/*"easeType"*/,
      v49,
      v26->klass->vtable._23_Clear.methodPtr);
    v56 = 0;
    v53 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v56, v50, v51, v52);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_21144/*"loopType"*/,
      v53,
      v26->klass->vtable._23_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_22219/*"onupdate"*/,
      StringLiteral_15055/*"UpdateGauge"*/,
      v26->klass->vtable._23_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_22211/*"oncomplete"*/,
      StringLiteral_6672/*"FinishGauge"*/,
      v26->klass->vtable._23_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v26->klass->vtable._22_Add.method)(
      v26,
      StringLiteral_22221/*"onupdatetarget"*/,
      gameObject,
      v26->klass->vtable._23_Clear.methodPtr);
    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v55, v26, 0LL);
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
      sub_1BC3264(0LL, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}