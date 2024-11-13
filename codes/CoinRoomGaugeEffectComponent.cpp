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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  CoinRoomUtility_c *v39; // x0
  int32_t v40; // w22
  float v41; // s9
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Hashtable_o *v45; // x20
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w8
  float v49; // s8
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x1
  UnityEngine_GameObject_o *v57; // x21
  int v58; // [xsp+8h] [xbp-58h] BYREF
  int v59; // [xsp+Ch] [xbp-54h] BYREF
  float gaugeAnimationDelayTime; // [xsp+10h] [xbp-50h] BYREF
  float gaugeAnimationTime; // [xsp+14h] [xbp-4Ch] BYREF
  float v62; // [xsp+18h] [xbp-48h] BYREF
  float v63; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B19806 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint, *(_QWORD *)&afterPoint);
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v9, v10);
    sub_1BCA7E0(&iTween_LoopType_TypeInfo, v11, v12);
    sub_1BCA7E0(&float_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_15350/*"UpdateGauge"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22523/*"onupdatetarget"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21441/*"loopType"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_6814/*"FinishGauge"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_18948/*"easeType"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v35, v36);
    sub_1BCA7E0(&iTween_TypeInfo, v37, v38);
    byte_4B19806 = 1;
  }
  if ( !this->fields.state )
  {
    v39 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, *(_QWORD *)&beforePoint);
    v40 = CoinRoomUtility__MaxPoint((const MethodInfo *)v39);
    v41 = (float)beforePoint / (float)v40;
    v45 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v42, v43, v44);
    System_Collections_Hashtable___ctor_62980980(v45, 0LL);
    v63 = v41;
    v46 = j_il2cpp_value_box_0(float_TypeInfo, &v63);
    if ( !v45 )
      sub_1BCAA3C(v46, v47);
    if ( afterPoint )
      v48 = afterPoint;
    else
      v48 = v40;
    v49 = (float)v48 / (float)v40;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_19858/*"from"*/,
      v46,
      v45->klass->vtable._24_Clear.methodPtr);
    v62 = v49;
    v50 = j_il2cpp_value_box_0(float_TypeInfo, &v62);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_24219/*"to"*/,
      v50,
      v45->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationTime = this->fields.gaugeAnimationTime;
    v51 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_24178/*"time"*/,
      v51,
      v45->klass->vtable._24_Clear.methodPtr);
    gaugeAnimationDelayTime = this->fields.gaugeAnimationDelayTime;
    v52 = j_il2cpp_value_box_0(float_TypeInfo, &gaugeAnimationDelayTime);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_18739/*"delay"*/,
      v52,
      v45->klass->vtable._24_Clear.methodPtr);
    v59 = 1;
    v53 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v59);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_18948/*"easeType"*/,
      v53,
      v45->klass->vtable._24_Clear.methodPtr);
    v58 = 0;
    v54 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v58);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_21441/*"loopType"*/,
      v54,
      v45->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_22521/*"onupdate"*/,
      StringLiteral_15350/*"UpdateGauge"*/,
      v45->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_22513/*"oncomplete"*/,
      StringLiteral_6814/*"FinishGauge"*/,
      v45->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
      v45,
      StringLiteral_22523/*"onupdatetarget"*/,
      gameObject,
      v45->klass->vtable._24_Clear.methodPtr);
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v56);
    iTween__ValueTo(v57, v45, 0LL);
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
      sub_1BCAA3C(0LL, method);
    UIProgressBar__set_value(gaugeBarSlider, alpha, 0LL);
  }
}