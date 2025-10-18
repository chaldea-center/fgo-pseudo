void TitleInfoEventLeagueVsGaugeFlashEffect___ctor(
        TitleInfoEventLeagueVsGaugeFlashEffect_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


double TitleInfoEventLeagueVsGaugeFlashEffect__ConvertPointToRate(
        TitleInfoEventLeagueVsGaugeFlashEffect_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void TitleInfoEventLeagueVsGaugeFlashEffect__endAnim(
        TitleInfoEventLeagueVsGaugeFlashEffect_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *endCallBack; // t1

  endCallBack = this->fields.endCallBack;
  p_endCallBack = (CGThumbnailListItem_o *)&this->fields.endCallBack;
  v5 = endCallBack;
  p_endCallBack->klass = 0;
  sub_1C36FFC(p_endCallBack, 0, v2, v3);
  if ( endCallBack )
    ActionExtensions__Call(v5, 0);
}


void TitleInfoEventLeagueVsGaugeFlashEffect__setup(
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x22
  System_String_o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *gaugeAnim; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4C40F25 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)sub_1C37058(&StringLiteral_17286/*"bit_vs_gauge_flash_"*/);
    byte_4C40F25 = 1;
  }
  v11 = 0.5;
  v12 = 0.5;
  if ( point1 != point2 )
  {
    v13 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v12 = v13;
    v11 = 1.0 - v13;
  }
  gaugeBar = v10->fields.gaugeBar;
  if ( !gaugeBar )
    goto LABEL_29;
  if ( !LODWORD(gaugeBar->max_length) )
    goto LABEL_30;
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)gaugeBar->m_Items[0];
  if ( !this )
    goto LABEL_29;
  UIProgressBar__set_value((UIProgressBar_o *)this, v11, 0);
  v15 = v10->fields.gaugeBar;
  if ( !v15 )
    goto LABEL_29;
  if ( LODWORD(v15->max_length) <= 1 )
LABEL_30:
    sub_1C372BC(this);
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_29;
  UIProgressBar__set_value((UIProgressBar_o *)this, v12, 0);
  v30 = joinGroupId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v16, v17, v18, v19, v20, v21);
  v23 = System_String__Concat((Il2CppObject *)StringLiteral_17286/*"bit_vs_gauge_flash_"*/, v22, 0);
  gaugeSimpleAnim = (UnityEngine_Object_o *)v10->fields.gaugeSimpleAnim;
  v25 = v23;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0, 0) )
  {
    gaugeAnim = (UnityEngine_Object_o *)v10->fields.gaugeAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(gaugeAnim, 0, 0) )
      goto LABEL_28;
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
    if ( this )
    {
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)this, v25, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
        goto LABEL_25;
      this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
      if ( this )
      {
        UnityEngine_Animation__Play_71012036((UnityEngine_Animation_o *)this, v25, 0);
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1C372B4(this);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_29;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)this, v25, 0) )
  {
LABEL_25:
    ActionExtensions__Call(callback, 0);
    return;
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_29;
  SimpleAnimation__Play_66507412((SimpleAnimation_o *)this, v25, 0);
LABEL_28:
  v10->fields.endCallBack = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.endCallBack, (int32_t)callback, v26, v27);
}