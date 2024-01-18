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
  sub_B2C2F8(p_endCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v11; // x1
  __int64 v12; // x1
  float v13; // s0
  float v14; // s8
  double v15; // d0
  struct UIProgressBar_array *gaugeBar; // x8
  struct UIProgressBar_array *v17; // x8
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x22
  System_String_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *gaugeAnim; // x22
  UnityEngine_Object_o *Clip; // x22
  __int64 v30; // x0
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  v10 = this;
  if ( (byte_418BA0E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&joinGroupId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)sub_B2C35C(&StringLiteral_16843/*"bit_vs_gauge_flash_"*/, v12);
    byte_418BA0E = 1;
  }
  if ( point1 == point2 )
  {
    v13 = 0.5;
    v14 = 0.5;
  }
  else
  {
    v15 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v14 = v15;
    v13 = 1.0 - v15;
  }
  gaugeBar = v10->fields.gaugeBar;
  if ( !gaugeBar )
    goto LABEL_33;
  if ( !gaugeBar->max_length )
    goto LABEL_34;
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)gaugeBar->m_Items[0];
  if ( !this )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0LL);
  v17 = v10->fields.gaugeBar;
  if ( !v17 )
    goto LABEL_33;
  if ( v17->max_length <= 1 )
  {
LABEL_34:
    v30 = sub_B2C460(this);
    sub_B2C400(v30, 0LL);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v17->m_Items[1];
  if ( !this )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0LL);
  v31 = joinGroupId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v19 = System_String__Concat((Il2CppObject *)StringLiteral_16843/*"bit_vs_gauge_flash_"*/, v18, 0LL);
  gaugeSimpleAnim = (UnityEngine_Object_o *)v10->fields.gaugeSimpleAnim;
  v21 = v19;
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
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)this, v21, 0LL);
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
        UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)this, v21, 0LL);
        goto LABEL_32;
      }
    }
LABEL_33:
    sub_B2C434(this, *(_QWORD *)&joinGroupId);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_33;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)this, v21, 0LL) )
  {
LABEL_29:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_33;
  SimpleAnimation__Play_16486620((SimpleAnimation_o *)this, v21, 0LL);
LABEL_32:
  v10->fields.endCallBack = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v10->fields.endCallBack,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}