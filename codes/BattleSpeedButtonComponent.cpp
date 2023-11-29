void __fastcall BattleSpeedButtonComponent___ctor(BattleSpeedButtonComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleSpeedButtonComponent__OnPress(
        BattleSpeedButtonComponent_o *this,
        bool isPressed,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  float v4; // s0

  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  if ( isPressed )
    v4 = 2.0;
  else
    v4 = 1.0;
  BattlePerformance__setBattleSpeed(perf, v4, 0LL);
}