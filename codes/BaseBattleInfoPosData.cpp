void __fastcall BaseBattleInfoPosData___ctor(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BaseBattleInfoPosData__Init(
        BaseBattleInfoPosData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = perf;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)perf, (int64_t)method, v3, v4, v5, v6, v7);
}


float __fastcall BaseBattleInfoPosData__get_OverTrLocalPosY(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  float v2; // s1

  ((void (__fastcall *)(BaseBattleInfoPosData_o *, Il2CppMethodPointer))this->klass->vtable._4_get_SkillSkipTrLocalPos.method)(
    this,
    this->klass->vtable._5_get_OverTrLocalPosY.methodPtr);
  return v2 + -173.0;
}


BattlePerformance_o *__fastcall BaseBattleInfoPosData__get_Perf(
        BaseBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


UnityEngine_Vector3_o __fastcall BaseBattleInfoPosData__get_SkillSkipTrLocalPos(
        BaseBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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


void __fastcall BaseBattleInfoPosData__set_Perf(
        BaseBattleInfoPosData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}