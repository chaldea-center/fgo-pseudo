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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_endCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallBack; // t1

  endCallBack = this->fields.endCallBack;
  p_endCallBack = (PartyOrganizationUtility_o *)&this->fields.endCallBack;
  v9 = endCallBack;
  p_endCallBack->klass = 0LL;
  sub_1C21DDC(p_endCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x22
  System_String_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Object_o *gaugeAnim; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4BDA805 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)sub_1C21E38(&StringLiteral_17603/*"bit_vs_gauge_flash_"*/);
    byte_4BDA805 = 1;
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
  if ( !gaugeBar->max_length )
    goto LABEL_30;
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)gaugeBar->m_Items[0];
  if ( !this )
    goto LABEL_29;
  UIProgressBar__set_value((UIProgressBar_o *)this, v11, 0LL);
  v15 = v10->fields.gaugeBar;
  if ( !v15 )
    goto LABEL_29;
  if ( v15->max_length <= 1 )
LABEL_30:
    sub_1C2209C(this, *(_QWORD *)&joinGroupId);
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_29;
  UIProgressBar__set_value((UIProgressBar_o *)this, v12, 0LL);
  v31 = joinGroupId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v16, v17, v18);
  v20 = System_String__Concat((Il2CppObject *)StringLiteral_17603/*"bit_vs_gauge_flash_"*/, v19, 0LL);
  gaugeSimpleAnim = (UnityEngine_Object_o *)v10->fields.gaugeSimpleAnim;
  v22 = v20;
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
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)this, v22, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
        goto LABEL_25;
      this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeAnim;
      if ( this )
      {
        UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)this, v22, 0LL);
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1C22094(this, *(_QWORD *)&joinGroupId);
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_29;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)this, v22, 0LL) )
  {
LABEL_25:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)v10->fields.gaugeSimpleAnim;
  if ( !this )
    goto LABEL_29;
  SimpleAnimation__Play_65253852((SimpleAnimation_o *)this, v22, 0LL);
LABEL_28:
  v10->fields.endCallBack = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.endCallBack, (int64_t)callback, v23, v24, v25, v26, v27, v28);
}