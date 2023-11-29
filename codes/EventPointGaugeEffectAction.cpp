void __fastcall EventPointGaugeEffectAction___ctor(EventPointGaugeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointGaugeEffectAction__OnPlayGaugeBarAnime(
        EventPointGaugeEffectAction_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_gaugeStartAction; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *gaugeStartAction; // t1

  gaugeStartAction = this->fields.gaugeStartAction;
  p_gaugeStartAction = (BattleServantConfConponent_o *)&this->fields.gaugeStartAction;
  v9 = gaugeStartAction;
  p_gaugeStartAction->klass = 0LL;
  sub_B16F98(p_gaugeStartAction, 0LL, v2, v3, v4, v5, v6, v7);
  if ( gaugeStartAction )
    System_Action__Invoke(v9, 0LL);
}


void __fastcall EventPointGaugeEffectAction__Setup(
        EventPointGaugeEffectAction_o *this,
        System_Action_o *gaugeStartAct,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.gaugeStartAction = gaugeStartAct;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gaugeStartAction,
    (System_Int32_array **)gaugeStartAct,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}