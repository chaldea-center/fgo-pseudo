void BattlePointGaugeProgressBarTypeComponent___ctor(
        BattlePointGaugeProgressBarTypeComponent_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeComponent___ctor((BattlePointGaugeComponent_o *)this, 0);
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
    sub_1C71608(this, entity);
  }
  UIProgressBar__set_value(barFrontProgressBar, BarProgressValue, 0);
}


void BattlePointGaugeProgressBarTypeComponent__ValidateSerializedField(
        BattlePointGaugeProgressBarTypeComponent_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeComponent__ValidateSerializedField((BattlePointGaugeComponent_o *)this, 0);
}