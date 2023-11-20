void __fastcall BattleMasterSkillInfoData___ctor(BattleMasterSkillInfoData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0LL);
}


BaseMotionSkip_o *__fastcall BattleMasterSkillInfoData__MakeSkillSkip(
        BattleMasterSkillInfoData_o *this,
        const MethodInfo *method)
{
  return (BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleMasterSkillInfoData_o *, void *))this->klass->vtable._15_CommonMakeSkillSkip.method)(
                               this,
                               this->klass[1]._1.image);
}