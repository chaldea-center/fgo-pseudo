void __fastcall SkillMotionSkip___ctor(SkillMotionSkip_o *this, const MethodInfo *method)
{
  CommonMotionSkip___ctor((CommonMotionSkip_o *)this, 0LL);
}


void __fastcall SkillMotionSkip__MotionStart(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf; // x0

  Perf = CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
  if ( !Perf )
    sub_B170D4();
  if ( BattlePerformance__IsNowActionNotSkillSkip(Perf, 0LL) )
    CommonMotionSkip__Release((CommonMotionSkip_o *)this, 0LL);
  else
    CommonMotionSkip__MotionStart((CommonMotionSkip_o *)this, 0LL);
}


void __fastcall SkillMotionSkip__Release(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf; // x0
  BattleInformationComponent_o *infoComp; // x0

  CommonMotionSkip__Release((CommonMotionSkip_o *)this, 0LL);
  Perf = CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
  if ( !Perf || (infoComp = Perf->fields.infoComp) == 0LL )
    sub_B170D4();
  BattleInformationComponent__DestroyDisplayingMessage(infoComp, 0LL);
}


void __fastcall SkillMotionSkip__ResetSkipTimeScale(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf; // x19
  BattlePerformance_o *v4; // x0
  BattleData_o *data; // x0
  float AccelSystemTimeScale; // s0

  if ( (((__int64 (__fastcall *)(SkillMotionSkip_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsSkipping.method)(
          this,
          this->klass->vtable._5_get_ResetTimeScaleDelayTime.methodPtr) & 1) != 0 )
  {
    Perf = CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
    v4 = CommonMotionSkip__get_Perf((CommonMotionSkip_o *)this, 0LL);
    if ( !v4
      || (data = v4->fields.data) == 0LL
      || (AccelSystemTimeScale = BattleData__get_AccelSystemTimeScale(data, 0LL), !Perf) )
    {
      sub_B170D4();
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