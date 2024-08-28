void __fastcall EventPointGaugeEffectAction___ctor(EventPointGaugeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointGaugeEffectAction__OnPlayGaugeBarAnime(
        EventPointGaugeEffectAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_gaugeStartAction; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *gaugeStartAction; // t1

  gaugeStartAction = this->fields.gaugeStartAction;
  p_gaugeStartAction = (ServantStatusBattleListViewItem_o *)&this->fields.gaugeStartAction;
  v5 = gaugeStartAction;
  p_gaugeStartAction->klass = 0LL;
  sub_1B68678(p_gaugeStartAction, 0, v2, v3);
  if ( gaugeStartAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
}


void __fastcall EventPointGaugeEffectAction__Setup(
        EventPointGaugeEffectAction_o *this,
        System_Action_o *gaugeStartAct,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.gaugeStartAction = gaugeStartAct;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.gaugeStartAction,
    (int32_t)gaugeStartAct,
    (int32_t)method,
    v3);
}