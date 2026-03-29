void BaseEnemyParamPosData___ctor(BaseEnemyParamPosData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o BaseEnemyParamPosData__GetSvtBuffLocalPos(
        BaseEnemyParamPosData_o *this,
        UnityEngine_Vector3_o defPos,
        const MethodInfo *method)
{
  return defPos;
}


int32_t BaseEnemyParamPosData__get_BuffIconMaxLine(BaseEnemyParamPosData_o *this, const MethodInfo *method)
{
  return 2;
}


UnityEngine_Vector3_o BaseEnemyParamPosData__get_ExBattleUiTrPos(
        BaseEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
  return result;
}


UnityEngine_Vector3_o BaseEnemyParamPosData__get_NormalTrLocalPos(
        BaseEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
  return result;
}


UnityEngine_Vector3_o BaseEnemyParamPosData__get_NormalTrLocalScale(
        BaseEnemyParamPosData_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->oneVector.fields.x;
  result.fields.y = static_fields->oneVector.fields.y;
  result.fields.z = static_fields->oneVector.fields.z;
  return result;
}