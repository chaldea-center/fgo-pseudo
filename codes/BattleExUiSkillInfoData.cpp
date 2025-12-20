void BattleExUiSkillInfoData___ctor(BattleExUiSkillInfoData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0);
}


BaseMotionSkip_o *BattleExUiSkillInfoData__MakeSkillSkip(BattleExUiSkillInfoData_o *this, const MethodInfo *method)
{
  return (BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleExUiSkillInfoData_o *, const MethodInfo *))this->klass->vtable._17_CommonMakeSkillSkip.methodPtr)(
                               this,
                               this->klass->vtable._17_CommonMakeSkillSkip.method);
}