System_Func_float__float__float__float__o *__fastcall ExtraEasing__AsymptoticSeriesFloat(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Func_float__float__float__float__o *v9; // x20

  if ( (byte_4A5F94F & 1) == 0 )
  {
    sub_1B885B0(&System_Func_float__float__float__float__TypeInfo);
    sub_1B885B0(&Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__);
    sub_1B885B0(&ExtraEasing___c__DisplayClass1_0_TypeInfo);
    byte_4A5F94F = 1;
  }
  v5 = sub_1B887FC(ExtraEasing___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(float *)(v5 + 16) = asymptoticSpeed;
  *(float *)(v5 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v5 + 16), (float *)(v5 + 20), v8);
  v9 = (System_Func_float__float__float__float__o *)sub_1B887FC(System_Func_float__float__float__float__TypeInfo);
  System_Func_float__float__float__float____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__,
    0LL);
  return v9;
}


System_Func_Vector3__Vector3__float__Vector3__o *__fastcall ExtraEasing__AsymptoticSeriesVector3(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Func_Vector3__Vector3__float__Vector3__o *v9; // x20

  if ( (byte_4A5F94E & 1) == 0 )
  {
    sub_1B885B0(&System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
    sub_1B885B0(&Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__);
    sub_1B885B0(&ExtraEasing___c__DisplayClass0_0_TypeInfo);
    byte_4A5F94E = 1;
  }
  v5 = sub_1B887FC(ExtraEasing___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(float *)(v5 + 16) = asymptoticSpeed;
  *(float *)(v5 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v5 + 16), (float *)(v5 + 20), v8);
  v9 = (System_Func_Vector3__Vector3__float__Vector3__o *)sub_1B887FC(System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
  System_Func_Vector3__Vector3__float__Vector3____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__,
    0LL);
  return v9;
}


void __fastcall ExtraEasing__ValidateAsymptoticParams(
        float *asymptoticSpeed,
        float *powerRate,
        const MethodInfo *method)
{
  float v5; // s1
  float v6; // s0

  if ( (byte_4A5F950 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&StringLiteral_16945/*"asymptoticSpeed should be defined on 0～1"*/);
    sub_1B885B0(&StringLiteral_22577/*"powerRate should be defined on non negative"*/);
    byte_4A5F950 = 1;
  }
  if ( *asymptoticSpeed < 0.0 || *asymptoticSpeed > 1.0 )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_16945/*"asymptoticSpeed should be defined on 0～1"*/, 0LL);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_22577/*"powerRate should be defined on non negative"*/, 0LL);
    *powerRate = 0.0;
  }
}


void __fastcall ExtraEasing___c__DisplayClass0_0___ctor(
        ExtraEasing___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ExtraEasing___c__DisplayClass0_0___AsymptoticSeriesVector3_g__EasingFunc_0(
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


void __fastcall ExtraEasing___c__DisplayClass1_0___ctor(
        ExtraEasing___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall ExtraEasing___c__DisplayClass1_0___AsymptoticSeriesFloat_g__EasingFunc_0(
        ExtraEasing___c__DisplayClass1_0_o *this,
        float from,
        float to,
        float t,
        const MethodInfo *method)
{
  return (float)((float)(from - to) * powf(1.0 - this->fields.asymptoticSpeed, this->fields.powerRate * t)) + to;
}