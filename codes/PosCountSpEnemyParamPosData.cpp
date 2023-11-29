void __fastcall PosCountSpEnemyParamPosData___ctor(PosCountSpEnemyParamPosData_o *this, const MethodInfo *method)
{
  BaseEnemyParamPosData___ctor((BaseEnemyParamPosData_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall PosCountSpEnemyParamPosData__GetSvtBuffLocalPos(
        PosCountSpEnemyParamPosData_o *this,
        UnityEngine_Vector3_o defPos,
        const MethodInfo *method)
{
  float v3; // s1

  v3 = -33.0;
  defPos.fields.y = v3;
  return defPos;
}


int32_t __fastcall PosCountSpEnemyParamPosData__get_BuffIconMaxLine(
        PosCountSpEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  return 1;
}


UnityEngine_Vector3_o __fastcall PosCountSpEnemyParamPosData__get_NormalTrLocalPos(
        PosCountSpEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = -97.0;
  v3 = -20.0;
  v4 = 0.0;
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


UnityEngine_Vector3_o __fastcall PosCountSpEnemyParamPosData__get_NormalTrLocalScale(
        PosCountSpEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s2
  float v4; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = 0.8;
  v3 = 1.0;
  v4 = 0.8;
  result.fields.z = v3;
  result.fields.y = v4;
  result.fields.x = v2;
  return result;
}