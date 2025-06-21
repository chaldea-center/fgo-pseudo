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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *endCallBack; // t1

  endCallBack = this->fields.endCallBack;
  p_endCallBack = (CGThumbnailListItem_o *)&this->fields.endCallBack;
  v5 = endCallBack;
  p_endCallBack->klass = 0LL;
  sub_1BCAF9C(p_endCallBack, 0, v2, v3);
  if ( endCallBack )
    ActionExtensions__Call(v5, 0LL);
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
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x22
  System_String_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *gaugeAnim; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4B1A7D1 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&joinGroupId);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)sub_1BCAFF8(&StringLiteral_17146/*"bit_vs_gauge_flash_"*/, v12);
    byte_4B1A7D1 = 1;
  }
  v13 = 0.5;
  v14 = 0.5;
  if ( point1 != point2 )
  {
    v15 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v14 = v15;
    v13 = 1.0 - v15;
  }
  gaugeBar = v10->fields.gaugeBar;
  if ( !gaugeBar )
    goto LABEL_29;
  if ( !gaugeBar->max_length )
    goto LABEL_30;
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)gaugeBar->m_Items[0];
  if ( !this )
    goto LABEL_29;
  UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0LL);
  v17 = v10->fields.gaugeBar;
  if ( !v17 )
    goto LABEL_29;
  if ( v17->max_length <= 1 )
LABEL_30:
    sub_1BCB25C(this, *(_QWORD *)&joinGroupId, point1);
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v17->m_Items[1];
  if ( !this )
    goto LABEL_29;
  UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0LL);
  v29 = joinGroupId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v18, v19, v20);
  v22 = System_String__Concat((Il2CppObject *)StringLiteral_17146/*"bit_vs_gauge_flash_"*/, v21, 0LL);
  gaugeSimpleAnim = (UnityEngine_Object_o *)v10->fields.gaugeSimpleAnim;
  v24 = v22;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0LL, 0LL) )
  {
    gaugeAnim = (UnityEngine_Object_o *)v10->fields.gaugeAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(gaugeAnim, 0LL, 0LL) )
      goto LABEL_28;
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
    if ( this )
    {
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)this, v24, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
        goto LABEL_25;
      this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
      if ( this )
      {
        UnityEngine_Animation__Play_69881360((UnityEngine_Animation_o *)this, v24, 0LL);
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1BCB254(this, *(_QWORD *)&joinGroupId);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_29;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)this, v24, 0LL) )
  {
LABEL_25:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_29;
  SimpleAnimation__Play_65395744((SimpleAnimation_o *)this, v24, 0LL);
LABEL_28:
  v10->fields.endCallBack = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10->fields.endCallBack, (int32_t)callback, v25, v26);
}