void PosCountNormalBattleInfoPosData___ctor(PosCountNormalBattleInfoPosData_o *this, const MethodInfo *method)
{
  this->fields.skipPos.fields.z = 0.0;
  *(_QWORD *)&this->fields.skipPos.fields.x = 0x43070000C3FA0000LL;
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o PosCountNormalBattleInfoPosData__get_SkillSkipTrLocalPos(
        PosCountNormalBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.skipPos.fields.x;
  result.fields.y = this->fields.skipPos.fields.y;
  result.fields.z = this->fields.skipPos.fields.z;
  return result;
}