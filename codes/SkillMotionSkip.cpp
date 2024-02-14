void __fastcall SkillMotionSkip___ctor(SkillMotionSkip_o *this, const MethodInfo *method)
{
  CommonMotionSkip___ctor((CommonMotionSkip_o *)this, 0LL);
}


void __fastcall SkillMotionSkip__MotionStart(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf; // x0

  Perf = CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
  if ( !Perf )
    sub_B0D97C(0LL);
  if ( BattlePerformance__IsNowActionNotSkillSkip(Perf, 0LL) )
    CommonMotionSkip__Release((CommonMotionSkip_o *)this, 0LL);
  else
    CommonMotionSkip__MotionStart((CommonMotionSkip_o *)this, 0LL);
}


void __fastcall SkillMotionSkip__Release(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattleInformationComponent_o *Perf; // x0

  CommonMotionSkip__Release((CommonMotionSkip_o *)this, 0LL);
  Perf = (BattleInformationComponent_o *)CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
  if ( !Perf || (Perf = (BattleInformationComponent_o *)Perf->fields.showPositions) == 0LL )
    sub_B0D97C(Perf);
  BattleInformationComponent__DestroyDisplayingMessage(Perf, 0LL);
}


void __fastcall SkillMotionSkip__ResetSkipTimeScale(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf; // x19
  BattleData_o *fsm; // x0
  float AccelSystemTimeScale; // s0

  if ( (((__int64 (__fastcall *)(SkillMotionSkip_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsSkipping.method)(
          this,
          this->klass->vtable._5_get_ResetTimeScaleDelayTime.methodPtr) & 1) != 0 )
  {
    Perf = CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
    fsm = (BattleData_o *)CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
    if ( !fsm
      || (fsm = (BattleData_o *)fsm->fields.fsm) == 0LL
      || (AccelSystemTimeScale = BattleData__get_AccelSystemTimeScale(fsm, 0LL), !Perf) )
    {
      sub_B0D97C(fsm);
    }
    BattlePerformance__SetTimeScale(Perf, AccelSystemTimeScale, 0LL);
  }
}


float __fastcall SkillMotionSkip__get_ResetTimeScaleDelayTime(SkillMotionSkip_o *this, const MethodInfo *method)
{
  char v2; // w0
  float result; // s0

  v2 = ((__int64 (__fastcall *)(SkillMotionSkip_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsSkipping.method)(
         this,
         this->klass->vtable._5_get_ResetTimeScaleDelayTime.methodPtr);
  result = 0.7;
  if ( (v2 & 1) == 0 )
    return 0.0;
  return result;
}