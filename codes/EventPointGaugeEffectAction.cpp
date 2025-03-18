void __fastcall EventPointGaugeEffectAction___ctor(EventPointGaugeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointGaugeEffectAction__OnPlayGaugeBarAnime(
        EventPointGaugeEffectAction_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_gaugeStartAction; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *gaugeStartAction; // t1

  gaugeStartAction = this->fields.gaugeStartAction;
  p_gaugeStartAction = (PartyOrganizationUtility_o *)&this->fields.gaugeStartAction;
  v9 = gaugeStartAction;
  p_gaugeStartAction->klass = 0LL;
  sub_1C3B708(p_gaugeStartAction, 0LL, v2, v3, v4, v5, v6, v7);
  if ( gaugeStartAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
}


void __fastcall EventPointGaugeEffectAction__Setup(
        EventPointGaugeEffectAction_o *this,
        System_Action_o *gaugeStartAct,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.gaugeStartAction = gaugeStartAct;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.gaugeStartAction,
    (int64_t)gaugeStartAct,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}