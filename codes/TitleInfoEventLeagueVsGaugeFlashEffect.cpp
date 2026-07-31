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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallBack; // t1

  endCallBack = this->fields.endCallBack;
  p_endCallBack = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallBack;
  v9 = endCallBack;
  p_endCallBack->klass = 0;
  sub_21FFBF4(p_endCallBack, 0, v2, v3, v4, v5, v6, v7);
  if ( endCallBack )
    ActionExtensions__Call(v9, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *gaugeSimpleAnim; // x22
  System_String_o *v21; // x21
  __int64 v22; // x2
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Object_o *gaugeAnim; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *Clip; // x22
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_5936F28 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)sub_21FFC50(&StringLiteral_17987/*"bit_vs_gauge_flash_"*/);
    byte_5936F28 = 1;
  }
  v11 = 0.5;
  v12 = 0.5;
  if ( point1 != point2 )
  {
    v13 = (double)point1 / (double)(point2 + point1);
    if ( v13 >= 1.0 )
      v13 = 1.0;
    v12 = v13;
    v11 = 1.0 - v13;
  }
  gaugeBar = v10->fields.gaugeBar;
  if ( !gaugeBar )
    goto LABEL_31;
  if ( !LODWORD(gaugeBar->max_length) )
    goto LABEL_32;
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)gaugeBar->m_Items[0];
  if ( !this )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)this, v11, 0);
  v15 = v10->fields.gaugeBar;
  if ( !v15 )
    goto LABEL_31;
  if ( (v15->max_length & 0xFFFFFFFE) == 0 )
LABEL_32:
    sub_21FFED4(this);
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_31;
  UIProgressBar__set_value((UIProgressBar_o *)this, v12, 0);
  v33 = joinGroupId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v33);
  v17 = System_String__Concat((Il2CppObject *)StringLiteral_17987/*"bit_vs_gauge_flash_"*/, v16, 0);
  gaugeSimpleAnim = (UnityEngine_Object_o *)v10->fields.gaugeSimpleAnim;
  v21 = v17;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( !UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0, 0) )
  {
    gaugeAnim = (UnityEngine_Object_o *)v10->fields.gaugeAnim;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&joinGroupId, v22);
    if ( !UnityEngine_Object__op_Inequality(gaugeAnim, 0, 0) )
      goto LABEL_30;
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
    if ( this )
    {
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)this, v21, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
      if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
        goto LABEL_27;
      this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
      if ( this )
      {
        UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)this, v21, 0);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_21FFECC(this, *(_QWORD *)&joinGroupId);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_31;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)this, v21, 0) )
  {
LABEL_27:
    ActionExtensions__Call(callback, 0);
    return;
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_31;
  SimpleAnimation__Play_78338864((SimpleAnimation_o *)this, v21, 0);
LABEL_30:
  v10->fields.endCallBack = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.endCallBack,
    (int32_t)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}