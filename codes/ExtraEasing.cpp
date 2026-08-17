System_Func_float__float__float__float__o *ExtraEasing__AsymptoticSeriesFloat(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Func_float__float__float__float__o *v9; // x20

  if ( (byte_5974EF0 & 1) == 0 )
  {
    sub_2213A60(&System_Func_float__float__float__float__TypeInfo);
    sub_2213A60(&Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__);
    sub_2213A60(&ExtraEasing___c__DisplayClass1_0_TypeInfo);
    byte_5974EF0 = 1;
  }
  v5 = sub_2213CCC(ExtraEasing___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(float *)(v5 + 16) = asymptoticSpeed;
  *(float *)(v5 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v5 + 16), (float *)(v5 + 20), v8);
  v9 = (System_Func_float__float__float__float__o *)sub_2213CCC(System_Func_float__float__float__float__TypeInfo);
  System_Func_float__float__float__float____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__,
    0);
  return v9;
}


System_Func_Vector3__Vector3__float__Vector3__o *ExtraEasing__AsymptoticSeriesVector3(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Func_Vector3__Vector3__float__Vector3__o *v9; // x20

  if ( (byte_5974EEF & 1) == 0 )
  {
    sub_2213A60(&System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
    sub_2213A60(&Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__);
    sub_2213A60(&ExtraEasing___c__DisplayClass0_0_TypeInfo);
    byte_5974EEF = 1;
  }
  v5 = sub_2213CCC(ExtraEasing___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(float *)(v5 + 16) = asymptoticSpeed;
  *(float *)(v5 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v5 + 16), (float *)(v5 + 20), v8);
  v9 = (System_Func_Vector3__Vector3__float__Vector3__o *)sub_2213CCC(System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
  System_Func_Vector3__Vector3__float__Vector3____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__,
    0);
  return v9;
}


void ExtraEasing__ValidateAsymptoticParams(float *asymptoticSpeed, float *powerRate, const MethodInfo *method)
{
  float v5; // s0

  if ( (byte_5974EF1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&StringLiteral_17640/*"asymptoticSpeed should be defined on 0～1"*/);
    sub_2213A60(&StringLiteral_23928/*"powerRate should be defined on non negative"*/);
    byte_5974EF1 = 1;
  }
  if ( *asymptoticSpeed < 0.0 || *asymptoticSpeed > 1.0 )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, powerRate);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_17640/*"asymptoticSpeed should be defined on 0～1"*/, 0);
    v5 = 1.0;
    if ( *asymptoticSpeed <= 1.0 )
      v5 = *asymptoticSpeed;
    if ( *asymptoticSpeed < 0.0 )
      v5 = 0.0;
    *asymptoticSpeed = v5;
  }
  if ( *powerRate < 0.0 )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, powerRate);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_23928/*"powerRate should be defined on non negative"*/, 0);
    *powerRate = 0.0;
  }
}


void ExtraEasing___c__DisplayClass0_0___ctor(ExtraEasing___c__DisplayClass0_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o ExtraEasing___c__DisplayClass0_0___AsymptoticSeriesVector3_g__EasingFunc_0(
        ExtraEasing___c__DisplayClass0_0_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float t,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s10
  float z; // s8
  float v8; // s11
  float v9; // s12
  float v10; // s13
  float v11; // s0
  float v12; // s2
  float v13; // s3
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = to.fields.y;
  x = to.fields.x;
  z = to.fields.z;
  v8 = from.fields.x - to.fields.x;
  v9 = from.fields.y - to.fields.y;
  v10 = from.fields.z - to.fields.z;
  v11 = powf(1.0 - this->fields.asymptoticSpeed, this->fields.powerRate * t);
  v12 = v9 * v11;
  v13 = v10 * v11;
  v14 = x + (float)(v8 * v11);
  v15 = y + v12;
  v16 = z + v13;
  result.fields.z = v16;
  result.fields.y = v15;
  result.fields.x = v14;
  return result;
}


void ExtraEasing___c__DisplayClass1_0___ctor(ExtraEasing___c__DisplayClass1_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float ExtraEasing___c__DisplayClass1_0___AsymptoticSeriesFloat_g__EasingFunc_0(
        ExtraEasing___c__DisplayClass1_0_o *this,
        float from,
        float to,
        float t,
        const MethodInfo *method)
{
  return (float)((float)(from - to) * powf(1.0 - this->fields.asymptoticSpeed, this->fields.powerRate * t)) + to;
}