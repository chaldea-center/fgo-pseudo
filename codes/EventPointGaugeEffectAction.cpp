void EventPointGaugeEffectAction___ctor(EventPointGaugeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPointGaugeEffectAction__OnPlayGaugeBarAnime(EventPointGaugeEffectAction_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_gaugeStartAction; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *gaugeStartAction; // t1

  gaugeStartAction = this->fields.gaugeStartAction;
  p_gaugeStartAction = (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeStartAction;
  v9 = gaugeStartAction;
  p_gaugeStartAction->klass = 0;
  sub_2213A04(p_gaugeStartAction, 0, v2, v3, v4, v5, v6, v7);
  if ( gaugeStartAction )
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
}


void EventPointGaugeEffectAction__Setup(
        EventPointGaugeEffectAction_o *this,
        System_Action_o *gaugeStartAct,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.gaugeStartAction = gaugeStartAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeStartAction,
    (int32_t)gaugeStartAct,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}