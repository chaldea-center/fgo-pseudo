void __fastcall SkillMotionSkip___ctor(SkillMotionSkip_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SkillMotionSkip__MotionStart(SkillMotionSkip_o *this, const MethodInfo *method)
{
  struct BattleMotionSkipManager_o *manager; // x8
  CommonMotionSkip_o *v3; // x19
  const MethodInfo *v4; // x1

  manager = this->fields.manager;
  if ( !manager
    || (v3 = (CommonMotionSkip_o *)this, (this = (SkillMotionSkip_o *)manager->fields._Perf_k__BackingField) == 0LL) )
  {
    sub_1B00F28(this, method);
  }
  if ( BattlePerformance__IsNowActionNotSkillSkip((BattlePerformance_o *)this, 0LL) )
    CommonMotionSkip__Release(v3, v4);
  else
    CommonMotionSkip__MotionStart(v3, v4);
}


void __fastcall SkillMotionSkip__Release(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattleInformationComponent_o *infoComp; // x0
  __int64 v4; // x1
  struct BattleMotionSkipManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  CommonMotionSkip__Release((CommonMotionSkip_o *)this, method);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (infoComp = Perf_k__BackingField->fields.infoComp) == 0LL )
  {
    sub_1B00F28(infoComp, v4);
  }
  BattleInformationComponent__DestroyDisplayingMessage(infoComp, 0LL);
}


void __fastcall SkillMotionSkip__ResetSkipTimeScale(SkillMotionSkip_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v4; // x1
  struct BattleMotionSkipManager_o *manager; // x8
  BattlePerformance_o *Perf_k__BackingField; // x19
  float AccelSystemTimeScale; // s0

  data = (BattleData_o *)((__int64 (__fastcall *)(SkillMotionSkip_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsSkipping.method)(
                           this,
                           this->klass->vtable._5_get_ResetTimeScaleDelayTime.methodPtr);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    manager = this->fields.manager;
    if ( !manager
      || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
      || (data = Perf_k__BackingField->fields.data) == 0LL )
    {
      sub_1B00F28(data, v4);
    }
    AccelSystemTimeScale = BattleData__get_AccelSystemTimeScale(data, 0LL);
    BattlePerformance__SetTimeScale(Perf_k__BackingField, AccelSystemTimeScale, 0LL);
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