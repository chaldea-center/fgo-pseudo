void BaseBattleInfoPosData___ctor(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BaseBattleInfoPosData__Init(BaseBattleInfoPosData_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Perf_k__BackingField = perf;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)perf, (int32_t)method, v3);
}


float BaseBattleInfoPosData__get_OverTrLocalPosX(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  return -13.0;
}


float BaseBattleInfoPosData__get_OverTrLocalPosY(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  float v2; // s1

  ((void (__fastcall *)(BaseBattleInfoPosData_o *, const MethodInfo *))this->klass->vtable._4_get_SkillSkipTrLocalPos.methodPtr)(
    this,
    this->klass->vtable._4_get_SkillSkipTrLocalPos.method);
  return v2 + -173.0;
}


BattlePerformance_o *BaseBattleInfoPosData__get_Perf(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


UnityEngine_Vector3_o BaseBattleInfoPosData__get_SkillSkipTrLocalPos(
        BaseBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void BaseBattleInfoPosData__set_Perf(
        BaseBattleInfoPosData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Perf_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}