void BattleMasterSkillInfoData___ctor(BattleMasterSkillInfoData_o *this, const MethodInfo *method)
{
  this->fields.itemImageId = -1;
  *(_QWORD *)&this->fields.cutInId = -1;
  *(_QWORD *)&this->fields.commonReleaseCondId = -1;
  this->fields._SelectAddIndex_k__BackingField = -1;
  this->fields.canExecSkill = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BaseMotionSkip_o *BattleMasterSkillInfoData__MakeSkillSkip(BattleMasterSkillInfoData_o *this, const MethodInfo *method)
{
  return (BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleMasterSkillInfoData_o *, const MethodInfo *))this->klass->vtable._17_CommonMakeSkillSkip.methodPtr)(
                               this,
                               this->klass->vtable._17_CommonMakeSkillSkip.method);
}