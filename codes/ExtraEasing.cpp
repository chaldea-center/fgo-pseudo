System_Func_float__float__float__float__o *ExtraEasing__AsymptoticSeriesFloat(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  const MethodInfo *v7; // x2
  System_Func_float__float__float__float__o *v8; // x20

  if ( (byte_4C3BF37 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_float__float__float__float__TypeInfo);
    sub_1C32C20(&Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__);
    sub_1C32C20(&ExtraEasing___c__DisplayClass1_0_TypeInfo);
    byte_4C3BF37 = 1;
  }
  v5 = sub_1C32E6C(ExtraEasing___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(float *)(v5 + 16) = asymptoticSpeed;
  *(float *)(v5 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v5 + 16), (float *)(v5 + 20), v7);
  v8 = (System_Func_float__float__float__float__o *)sub_1C32E6C(System_Func_float__float__float__float__TypeInfo);
  System_Func_float__float__float__float____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__,
    0);
  return v8;
}


System_Func_Vector3__Vector3__float__Vector3__o *ExtraEasing__AsymptoticSeriesVector3(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  const MethodInfo *v7; // x2
  System_Func_Vector3__Vector3__float__Vector3__o *v8; // x20

  if ( (byte_4C3BF36 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
    sub_1C32C20(&Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__);
    sub_1C32C20(&ExtraEasing___c__DisplayClass0_0_TypeInfo);
    byte_4C3BF36 = 1;
  }
  v5 = sub_1C32E6C(ExtraEasing___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(float *)(v5 + 16) = asymptoticSpeed;
  *(float *)(v5 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v5 + 16), (float *)(v5 + 20), v7);
  v8 = (System_Func_Vector3__Vector3__float__Vector3__o *)sub_1C32E6C(System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
  System_Func_Vector3__Vector3__float__Vector3____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__,
    0);
  return v8;
}


void ExtraEasing__ValidateAsymptoticParams(float *asymptoticSpeed, float *powerRate, const MethodInfo *method)
{
  float v5; // s1
  float v6; // s0

  if ( (byte_4C3BF38 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&StringLiteral_16922/*"asymptoticSpeed should be defined on 0～1"*/);
    sub_1C32C20(&StringLiteral_22745/*"powerRate should be defined on non negative"*/);
    byte_4C3BF38 = 1;
  }
  if ( *asymptoticSpeed < 0.0 || *asymptoticSpeed > 1.0 )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_16922/*"asymptoticSpeed should be defined on 0～1"*/, 0);
    v5 = fminf(*asymptoticSpeed, 1.0);
    v6 = 0.0;
    if ( *asymptoticSpeed >= 0.0 )
      v6 = v5;
    *asymptoticSpeed = v6;
  }
  if ( *powerRate < 0.0 )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_22745/*"powerRate should be defined on non negative"*/, 0);
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
  float v5; // s11
  float v6; // s12
  float v7; // s13
  float z; // s8
  float y; // s9
  float x; // s10
  float v11; // s0
  float v12; // s2
  float v13; // s3
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5 = from.fields.x - to.fields.x;
  v6 = from.fields.y - to.fields.y;
  v7 = from.fields.z - to.fields.z;
  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  v11 = powf(1.0 - this->fields.asymptoticSpeed, this->fields.powerRate * t);
  v12 = v6 * v11;
  v13 = v7 * v11;
  v14 = x + (float)(v5 * v11);
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