void __fastcall PosCountNormalBattleInfoPosData___ctor(
        PosCountNormalBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  this->fields.skipPos.fields.z = 0.0;
  *(_QWORD *)&this->fields.skipPos.fields.x = 0x43070000C3FA0000LL;
  BaseBattleInfoPosData___ctor((BaseBattleInfoPosData_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall PosCountNormalBattleInfoPosData__get_SkillSkipTrLocalPos(
        PosCountNormalBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.skipPos.fields.x;
  y = this->fields.skipPos.fields.y;
  z = this->fields.skipPos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}