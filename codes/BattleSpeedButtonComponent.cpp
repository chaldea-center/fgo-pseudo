void BattleSpeedButtonComponent___ctor(BattleSpeedButtonComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSpeedButtonComponent__OnPress(BattleSpeedButtonComponent_o *this, bool isPressed, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  float v4; // s0

  perf = this->fields.perf;
  if ( isPressed )
  {
    v4 = 2.0;
    if ( !perf )
      goto LABEL_3;
  }
  else
  {
    v4 = 1.0;
    if ( !perf )
LABEL_3:
      sub_21FFECC(perf, isPressed);
  }
  BattlePerformance__setBattleSpeed(perf, v4, 0);
}