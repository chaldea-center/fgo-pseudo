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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BaseEnemyParamPosData__get_NormalTrLocalPos(
        BaseEnemyParamPosData_o *this,
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BaseEnemyParamPosData__get_NormalTrLocalScale(
        BaseEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_one(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}