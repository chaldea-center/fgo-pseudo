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
  sub_B16F98(p_endCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  UIProgressBar_o *v17; // x0
  struct UIProgressBar_array *v18; // x8
  UIProgressBar_o *v19; // x0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x22
  System_String_o *v23; // x21
  SimpleAnimation_o *v24; // x0
  SimpleAnimation_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *gaugeAnim; // x22
  UnityEngine_Animation_o *v33; // x0
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Animation_o *v35; // x0
  int32_t v36; // [xsp+Ch] [xbp-34h] BYREF

  v10 = this;
  if ( (byte_40FDFD4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&joinGroupId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    this = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)sub_B16FFC(&StringLiteral_16777/*"bit_vs_gauge_flash_"*/, v12);
    byte_40FDFD4 = 1;
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
  v17 = gaugeBar->m_Items[0];
  if ( !v17 )
    goto LABEL_33;
  UIProgressBar__set_value(v17, v13, 0LL);
  v18 = v10->fields.gaugeBar;
  if ( !v18 )
    goto LABEL_33;
  if ( v18->max_length <= 1 )
  {
LABEL_34:
    sub_B17100(this, *(_QWORD *)&joinGroupId, point1);
    sub_B170A0();
  }
  v19 = v18->m_Items[1];
  if ( !v19 )
    goto LABEL_33;
  UIProgressBar__set_value(v19, v14, 0LL);
  v36 = joinGroupId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v21 = System_String__Concat((Il2CppObject *)StringLiteral_16777/*"bit_vs_gauge_flash_"*/, v20, 0LL);
  gaugeSimpleAnim = (UnityEngine_Object_o *)v10->fields.gaugeSimpleAnim;
  v23 = v21;
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
    v33 = v10->fields.gaugeAnim;
    if ( v33 )
    {
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(v33, v23, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
        goto LABEL_29;
      v35 = v10->fields.gaugeAnim;
      if ( v35 )
      {
        UnityEngine_Animation__Play_49744236(v35, v23, 0LL);
        goto LABEL_32;
      }
    }
LABEL_33:
    sub_B170D4();
  }
  v24 = v10->fields.gaugeSimpleAnim;
  if ( !v24 )
    goto LABEL_33;
  if ( !SimpleAnimation__get_Item(v24, v23, 0LL) )
  {
LABEL_29:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  v25 = v10->fields.gaugeSimpleAnim;
  if ( !v25 )
    goto LABEL_33;
  SimpleAnimation__Play_16380456(v25, v23, 0LL);
LABEL_32:
  v10->fields.endCallBack = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v10->fields.endCallBack,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}