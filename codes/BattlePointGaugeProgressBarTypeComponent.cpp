void BattlePointGaugeProgressBarTypeComponent___ctor(
        BattlePointGaugeProgressBarTypeComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.lastStepUpEffectIdInTween = -1;
  this->fields.lastUpPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePointGaugeProgressBarTypeComponent__UpdateProgressGauge(
        BattlePointGaugeProgressBarTypeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  UIProgressBar_o *barFrontProgressBar; // x19
  float BarProgressValue; // s0

  if ( !entity
    || !this->fields.setting
    || (barFrontProgressBar = this->fields.barFrontProgressBar,
        BarProgressValue = BattlePointGaugeSetting__GetBarProgressValue(
                             this->fields.setting,
                             entity->fields.phase,
                             method),
        !barFrontProgressBar) )
  {
    sub_1C93D2C(this, entity);
  }
  UIProgressBar__set_value(barFrontProgressBar, BarProgressValue, 0);
}


void BattlePointGaugeProgressBarTypeComponent__ValidateSerializedField(
        BattlePointGaugeProgressBarTypeComponent_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0

  setting = this->fields.setting;
  if ( !setting )
    sub_1C93D2C(0, method);
  BattlePointGaugeSetting__ValidateSerializedField(setting, method);
}