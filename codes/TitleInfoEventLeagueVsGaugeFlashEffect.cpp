void __fastcall TitleInfoEventLeagueVsGaugeFlashEffect___ctor(
        TitleInfoEventLeagueVsGaugeFlashEffect_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


double __fastcall TitleInfoEventLeagueVsGaugeFlashEffect__ConvertPointToRate(
        TitleInfoEventLeagueVsGaugeFlashEffect_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void __fastcall TitleInfoEventLeagueVsGaugeFlashEffect__endAnim(
        TitleInfoEventLeagueVsGaugeFlashEffect_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallBack; // t1

  endCallBack = this->fields.endCallBack;
  p_endCallBack = (BattleServantConfConponent_o *)&this->fields.endCallBack;
  v9 = endCallBack;
  p_endCallBack->klass = 0LL;
  sub_B52920(p_endCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( endCallBack )
    ActionExtensions__Call(v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsGaugeFlashEffect__setup(
        TitleInfoEventLeagueVsGaugeFlashEffect_o *this,
        int32_t joinGroupId,
        int64_t point1,
        int64_t point2,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsGaugeFlashEffect_o *v10; // x20
  float v11; // s0
  float v12; // s8
  double v13; // d0
  struct UIProgressBar_array *gaugeBar; // x8
  struct UIProgressBar_array *v15; // x8
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x22
  System_String_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *gaugeAnim; // x22
  UnityEngine_Object_o *Clip; // x22
  __int64 v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  v10 = this;
  if ( (byte_42B442D & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)sub_B52984(&StringLiteral_16959/*"bit_vs_gauge_flash_"*/);
    byte_42B442D = 1;
  }
  if ( point1 == point2 )
  {
    v11 = 0.5;
    v12 = 0.5;
  }
  else
  {
    v13 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v12 = v13;
    v11 = 1.0 - v13;
  }
  gaugeBar = v10->fields.gaugeBar;
  if ( !gaugeBar )
    goto LABEL_33;
  if ( !gaugeBar->max_length )
    goto LABEL_34;
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)gaugeBar->m_Items[0];
  if ( !this )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)this, v11, 0LL);
  v15 = v10->fields.gaugeBar;
  if ( !v15 )
    goto LABEL_33;
  if ( v15->max_length <= 1 )
  {
LABEL_34:
    v28 = sub_B52A88(this);
    sub_B52A28(v28, 0LL);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)this, v12, 0LL);
  v29 = joinGroupId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v17 = System_String__Concat((Il2CppObject *)StringLiteral_16959/*"bit_vs_gauge_flash_"*/, v16, 0LL);
  gaugeSimpleAnim = (UnityEngine_Object_o *)v10->fields.gaugeSimpleAnim;
  v19 = v17;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0LL, 0LL) )
  {
    gaugeAnim = (UnityEngine_Object_o *)v10->fields.gaugeAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(gaugeAnim, 0LL, 0LL) )
      goto LABEL_32;
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
    if ( this )
    {
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)this, v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
        goto LABEL_29;
      this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
      if ( this )
      {
        UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)this, v19, 0LL);
        goto LABEL_32;
      }
    }
LABEL_33:
    sub_B52A5C(this, *(_QWORD *)&joinGroupId);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_33;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)this, v19, 0LL) )
  {
LABEL_29:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_33;
  SimpleAnimation__Play_16625408((SimpleAnimation_o *)this, v19, 0LL);
LABEL_32:
  v10->fields.endCallBack = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->fields.endCallBack,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}