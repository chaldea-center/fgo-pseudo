System_Func_float__float__float__float__o *__fastcall ExtraEasing__AsymptoticSeriesFloat(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Func_float__float__float__float__o *v19; // x20

  if ( (byte_4B1A8D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_float__float__float__float__TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__, v8, v9);
    sub_1BCA7E0(&ExtraEasing___c__DisplayClass1_0_TypeInfo, v10, v11);
    byte_4B1A8D8 = 1;
  }
  v12 = sub_1BCAA2C(ExtraEasing___c__DisplayClass1_0_TypeInfo, v3, v4, v5);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(float *)(v12 + 16) = asymptoticSpeed;
  *(float *)(v12 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v12 + 16), (float *)(v12 + 20), v15);
  v19 = (System_Func_float__float__float__float__o *)sub_1BCAA2C(
                                                       System_Func_float__float__float__float__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Func_float__float__float__float____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_g__EasingFunc_0__,
    0LL);
  return v19;
}


System_Func_Vector3__Vector3__float__Vector3__o *__fastcall ExtraEasing__AsymptoticSeriesVector3(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Func_Vector3__Vector3__float__Vector3__o *v19; // x20

  if ( (byte_4B1A8D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_Vector3__Vector3__float__Vector3__TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__, v8, v9);
    sub_1BCA7E0(&ExtraEasing___c__DisplayClass0_0_TypeInfo, v10, v11);
    byte_4B1A8D7 = 1;
  }
  v12 = sub_1BCAA2C(ExtraEasing___c__DisplayClass0_0_TypeInfo, v3, v4, v5);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(float *)(v12 + 16) = asymptoticSpeed;
  *(float *)(v12 + 20) = powerRate;
  ExtraEasing__ValidateAsymptoticParams((float *)(v12 + 16), (float *)(v12 + 20), v15);
  v19 = (System_Func_Vector3__Vector3__float__Vector3__o *)sub_1BCAA2C(
                                                             System_Func_Vector3__Vector3__float__Vector3__TypeInfo,
                                                             v16,
                                                             v17,
                                                             v18);
  System_Func_Vector3__Vector3__float__Vector3____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_g__EasingFunc_0__,
    0LL);
  return v19;
}


void __fastcall ExtraEasing__ValidateAsymptoticParams(
        float *asymptoticSpeed,
        float *powerRate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s1
  float v10; // s0

  if ( (byte_4B1A8D9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, powerRate, method);
    sub_1BCA7E0(&StringLiteral_17116/*"asymptoticSpeed should be defined on 0～1"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22819/*"powerRate should be defined on non negative"*/, v7, v8);
    byte_4B1A8D9 = 1;
  }
  if ( *asymptoticSpeed < 0.0 || *asymptoticSpeed > 1.0 )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, powerRate);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_17116/*"asymptoticSpeed should be defined on 0～1"*/, 0LL);
    v9 = fminf(*asymptoticSpeed, 1.0);
    v10 = 0.0;
    if ( *asymptoticSpeed >= 0.0 )
      v10 = v9;
    *asymptoticSpeed = v10;
  }
  if ( *powerRate < 0.0 )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, powerRate);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_22819/*"powerRate should be defined on non negative"*/, 0LL);
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