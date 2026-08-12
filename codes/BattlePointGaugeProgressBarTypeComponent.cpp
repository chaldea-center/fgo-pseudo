void BattlePointGaugeProgressBarTypeComponent___ctor(
        BattlePointGaugeProgressBarTypeComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974163 & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_5974163 = 1;
  }
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, method);
  this->fields.lastStepUpEffectIdInTween = -1;
  *(_QWORD *)&this->fields.currentMaxValueCache = 0x8000000080000000LL;
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
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
    sub_2213CDC(this, entity);
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
    sub_2213CDC(0, method);
  BattlePointGaugeSetting__ValidateSerializedField(setting, method);
}