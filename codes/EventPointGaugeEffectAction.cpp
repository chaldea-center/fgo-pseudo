void EventPointGaugeEffectAction___ctor(EventPointGaugeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPointGaugeEffectAction__OnPlayGaugeBarAnime(EventPointGaugeEffectAction_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_gaugeStartAction; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *gaugeStartAction; // t1

  gaugeStartAction = this->fields.gaugeStartAction;
  p_gaugeStartAction = &this->fields.gaugeStartAction;
  v3 = gaugeStartAction;
  *p_gaugeStartAction = 0;
  sub_1C7BA8C(p_gaugeStartAction, 0);
  if ( gaugeStartAction )
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
}


void EventPointGaugeEffectAction__Setup(
        EventPointGaugeEffectAction_o *this,
        System_Action_o *gaugeStartAct,
        const MethodInfo *method)
{
  this->fields.gaugeStartAction = gaugeStartAct;
  sub_1C7BA8C(&this->fields.gaugeStartAction, gaugeStartAct);
}