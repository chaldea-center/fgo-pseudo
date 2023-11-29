void __fastcall PosCountNormalEnemyParamPosData___ctor(
        PosCountNormalEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  BaseEnemyParamPosData___ctor((BaseEnemyParamPosData_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall PosCountNormalEnemyParamPosData__GetSvtBuffLocalPos(
        PosCountNormalEnemyParamPosData_o *this,
        UnityEngine_Vector3_o defPos,
        const MethodInfo *method)
{
  float v3; // s1

  v3 = -35.0;
  defPos.fields.y = v3;
  return defPos;
}