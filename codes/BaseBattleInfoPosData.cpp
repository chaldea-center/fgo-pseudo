void BaseBattleInfoPosData___ctor(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BaseBattleInfoPosData__Init(BaseBattleInfoPosData_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Perf_k__BackingField = perf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)perf,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Perf_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}