void __fastcall BaseEnemyParamPosData___ctor(BaseEnemyParamPosData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BaseEnemyParamPosData__GetSvtBuffLocalPos(
        BaseEnemyParamPosData_o *this,
        UnityEngine_Vector3_o defPos,
        const MethodInfo *method)
{
  return defPos;
}


int32_t __fastcall BaseEnemyParamPosData__get_BuffIconMaxLine(BaseEnemyParamPosData_o *this, const MethodInfo *method)
{
  return 2;
}


UnityEngine_Vector3_o __fastcall BaseEnemyParamPosData__get_NormalTrLocalPos(
        BaseEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
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


UnityEngine_Vector3_o __fastcall BaseEnemyParamPosData__get_NormalTrLocalScale(
        BaseEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->oneVector.fields.x;
  y = static_fields->oneVector.fields.y;
  z = static_fields->oneVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}