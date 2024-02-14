void __fastcall BaseBattleInfoPosData___ctor(BaseBattleInfoPosData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BaseBattleInfoPosData__Init(
        BaseBattleInfoPosData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  this->fields._Perf_k__BackingField = perf;
  sub_B0D840(&this->fields, perf);
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BaseBattleInfoPosData__get_SkillSkipTrLocalPos(
        BaseBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_zero(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


void __fastcall BaseBattleInfoPosData__set_Perf(
        BaseBattleInfoPosData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  this->fields._Perf_k__BackingField = value;
  sub_B0D840(&this->fields, value);
}