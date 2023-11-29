void __fastcall BattleMotionSkipManager___ctor(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BaseMotionSkip_o *v7; // x21

  if ( (byte_40F6AE8 & 1) == 0 )
  {
    sub_B16FFC(&BaseMotionSkip_TypeInfo, perf);
    byte_40F6AE8 = 1;
  }
  v7 = (BaseMotionSkip_o *)sub_B170CC(BaseMotionSkip_TypeInfo, perf, method, v3, v4);
  BaseMotionSkip___ctor(v7, 0LL);
  this->fields.defaultMotionSkip = v7;
  sub_B16F98(&this->fields, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_B16F98(&this->fields._Perf_k__BackingField, perf);
}


void __fastcall BattleMotionSkipManager__ReleaseMotionSkip(BattleMotionSkipManager_o *this, const MethodInfo *method)
{
  struct BaseMotionSkip_o *mainMotionSkip; // x0
  struct BaseMotionSkip_o **p_mainMotionSkip; // x19

  p_mainMotionSkip = &this->fields.mainMotionSkip;
  mainMotionSkip = this->fields.mainMotionSkip;
  if ( !mainMotionSkip )
  {
    mainMotionSkip = this->fields.defaultMotionSkip;
    if ( !mainMotionSkip )
      sub_B170D4();
  }
  ((void (__fastcall *)(struct BaseMotionSkip_o *, Il2CppMethodPointer))mainMotionSkip->klass->vtable._7_Release.method)(
    mainMotionSkip,
    mainMotionSkip->klass->vtable._8_ResetSkipTimeScale.methodPtr);
  *p_mainMotionSkip = 0LL;
  sub_B16F98(p_mainMotionSkip, 0LL);
}


void __fastcall BattleMotionSkipManager__SetMotionSkip(
        BattleMotionSkipManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  struct BaseMotionSkip_o *v5; // x0
  struct BaseMotionSkip_o *mainMotionSkip; // x0

  BattleMotionSkipManager__ReleaseMotionSkip(this, (const MethodInfo *)skillInfo);
  if ( !skillInfo
    || (v5 = (struct BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._14_MakeSkillSkip.method)(
                                          skillInfo,
                                          skillInfo->klass->vtable._15_CommonMakeSkillSkip.methodPtr),
        this->fields.mainMotionSkip = v5,
        sub_B16F98(&this->fields.mainMotionSkip, v5),
        (mainMotionSkip = this->fields.mainMotionSkip) == 0LL)
    && (mainMotionSkip = this->fields.defaultMotionSkip) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BaseMotionSkip_o *, BattleMotionSkipManager_o *, Il2CppMethodPointer))mainMotionSkip->klass->vtable._6_Init.method)(
    mainMotionSkip,
    this,
    mainMotionSkip->klass->vtable._7_Release.methodPtr);
}


BaseMotionSkip_o *__fastcall BattleMotionSkipManager__get_Current(
        BattleMotionSkipManager_o *this,
        const MethodInfo *method)
{
  BaseMotionSkip_o *result; // x0

  result = this->fields.mainMotionSkip;
  if ( !result )
    return this->fields.defaultMotionSkip;
  return result;
}


BattlePerformance_o *__fastcall BattleMotionSkipManager__get_Perf(
        BattleMotionSkipManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall BattleMotionSkipManager__set_Current(
        BattleMotionSkipManager_o *this,
        BaseMotionSkip_o *value,
        const MethodInfo *method)
{
  this->fields.mainMotionSkip = value;
  sub_B16F98(&this->fields.mainMotionSkip, value);
}


void __fastcall BattleMotionSkipManager__set_Perf(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  this->fields._Perf_k__BackingField = value;
  sub_B16F98(&this->fields._Perf_k__BackingField, value);
}