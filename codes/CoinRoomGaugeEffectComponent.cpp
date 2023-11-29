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
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Hashtable_o *v30; // x20
  __int64 v31; // x0
  int32_t v32; // w8
  float v33; // s8
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x21
  int v41; // [xsp+0h] [xbp-50h] BYREF
  int v42; // [xsp+4h] [xbp-4Ch] BYREF
  int v43; // [xsp+8h] [xbp-48h] BYREF
  float gaugeAnimationDelayTime; // [xsp+Ch] [xbp-44h] BYREF
  float v45; // [xsp+28h] [xbp-28h] BYREF
  float v46; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_40F9A59 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v8);
    sub_B16FFC(&iTween_LoopType_TypeInfo, v9);
    sub_B16FFC(&float_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_15002, v11);
    sub_B16FFC(&StringLiteral_21184, v12);
    sub_B16FFC(&StringLiteral_18842, v13);
    sub_B16FFC(&StringLiteral_20241, v14);
    sub_B16FFC(&StringLiteral_22584, v15);
    sub_B16FFC(&StringLiteral_21182, v16);
    sub_B16FFC(&StringLiteral_17881, v17);
    sub_B16FFC(&StringLiteral_22621, v18);
    sub_B16FFC(&StringLiteral_6653, v19);
    sub_B16FFC(&StringLiteral_18045, v20);
    sub_B16FFC(&StringLiteral_21173, v21);
    sub_B16FFC(&iTween_TypeInfo, v22);
    byte_40F9A59 = 1;
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
    v30 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v26, v27, v28, v29);
    System_Collections_Hashtable___ctor_38240048(v30, 0LL);
    v46 = v25;
    v31 = j_il2cpp_value_box_0(float_TypeInfo, &v46);
    if ( !v30 )
      sub_B170D4();
    if ( afterPoint )
      v32 = afterPoint;
    else
      v32 = v24;
    v33 = (float)v32 / (float)v24;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_18842,
      v31,
      v30->klass->vtable._24_Clear.methodPtr);
    v45 = v33;
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &v45);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_22621,
      v34,
      v30->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v35 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_22584,
      v35,
      v30->klass->vtable._24_Clear.methodPtr);
    v43 = *((_DWORD *)&this->fields.gaugeAnimationDelayTime + 1);
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_17881,
      v36,
      v30->klass->vtable._24_Clear.methodPtr);
    v42 = 1;
    v37 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v42);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_18045,
      v37,
      v30->klass->vtable._24_Clear.methodPtr);
    v41 = 0;
    v38 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v41);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_20241,
      v38,
      v30->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_21182,
      StringLiteral_15002,
      v30->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_21173,
      StringLiteral_6653,
      v30->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
      v30,
      StringLiteral_21184,
      gameObject,
      v30->klass->vtable._24_Clear.methodPtr);
    v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ValueTo(v40, v30, 0LL);
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
      sub_B170D4();
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}