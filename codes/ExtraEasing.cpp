System_Func_float__float__float__float__o *__fastcall ExtraEasing__AsymptoticSeriesFloat(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ExtraEasing___c__DisplayClass1_0_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  float v17; // s0
  System_Func_float__float__float__float__o *v18; // x20

  if ( (byte_40FAD0B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_float__float__float__float___ctor__, v3);
    sub_B16FFC(&System_Func_float__float__float__float__TypeInfo, v9);
    sub_B16FFC(&Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_b__0__, v10);
    sub_B16FFC(&ExtraEasing___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FAD0B = 1;
  }
  v12 = (ExtraEasing___c__DisplayClass1_0_o *)sub_B170CC(ExtraEasing___c__DisplayClass1_0_TypeInfo, v3, v4, v5, v6);
  ExtraEasing___c__DisplayClass1_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.asymptoticSpeed = asymptoticSpeed;
  v12->fields.powerRate = powerRate;
  if ( asymptoticSpeed < 0.0 || asymptoticSpeed > 1.0 )
  {
    v17 = UnityEngine_Mathf__Clamp01(asymptoticSpeed, 0LL);
    powerRate = v12->fields.powerRate;
    v12->fields.asymptoticSpeed = v17;
  }
  if ( powerRate < 0.0 )
    v12->fields.powerRate = 0.0;
  v18 = (System_Func_float__float__float__float__o *)sub_B170CC(
                                                       System_Func_float__float__float__float__TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Func_float__float__float__float____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_b__0__,
    (const MethodInfo_2B77ED4 *)Method_System_Func_float__float__float__float___ctor__);
  return v18;
}


System_Func_Vector3__Vector3__float__Vector3__o *__fastcall ExtraEasing__AsymptoticSeriesVector3(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ExtraEasing___c__DisplayClass0_0_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  float v17; // s0
  System_Func_Vector3__Vector3__float__Vector3__o *v18; // x20

  if ( (byte_40FAD0A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_Vector3__Vector3__float__Vector3___ctor__, v3);
    sub_B16FFC(&System_Func_Vector3__Vector3__float__Vector3__TypeInfo, v9);
    sub_B16FFC(&Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_b__0__, v10);
    sub_B16FFC(&ExtraEasing___c__DisplayClass0_0_TypeInfo, v11);
    byte_40FAD0A = 1;
  }
  v12 = (ExtraEasing___c__DisplayClass0_0_o *)sub_B170CC(ExtraEasing___c__DisplayClass0_0_TypeInfo, v3, v4, v5, v6);
  ExtraEasing___c__DisplayClass0_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.asymptoticSpeed = asymptoticSpeed;
  v12->fields.powerRate = powerRate;
  if ( asymptoticSpeed < 0.0 || asymptoticSpeed > 1.0 )
  {
    v17 = UnityEngine_Mathf__Clamp01(asymptoticSpeed, 0LL);
    powerRate = v12->fields.powerRate;
    v12->fields.asymptoticSpeed = v17;
  }
  if ( powerRate < 0.0 )
    v12->fields.powerRate = 0.0;
  v18 = (System_Func_Vector3__Vector3__float__Vector3__o *)sub_B170CC(
                                                             System_Func_Vector3__Vector3__float__Vector3__TypeInfo,
                                                             v13,
                                                             v14,
                                                             v15,
                                                             v16);
  System_Func_Vector3__Vector3__float__Vector3____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_b__0__,
    (const MethodInfo_2B78234 *)Method_System_Func_Vector3__Vector3__float__Vector3___ctor__);
  return v18;
}


void __fastcall ExtraEasing__ValidateAsymptoticParams(
        float *asymptoticSpeed,
        float *powerRate,
        const MethodInfo *method)
{
  float v3; // s0

  v3 = *asymptoticSpeed;
  if ( *asymptoticSpeed < 0.0 || v3 > 1.0 )
    *asymptoticSpeed = UnityEngine_Mathf__Clamp01(v3, 0LL);
  if ( *powerRate < 0.0 )
    *powerRate = 0.0;
}


void __fastcall ExtraEasing___c__DisplayClass0_0___ctor(
        ExtraEasing___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ExtraEasing___c__DisplayClass0_0___AsymptoticSeriesVector3_b__0(
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


float __fastcall ExtraEasing___c__DisplayClass1_0___AsymptoticSeriesFloat_b__0(
        ExtraEasing___c__DisplayClass1_0_o *this,
        float from,
        float to,
        float t,
        const MethodInfo *method)
{
  return (float)((float)(from - to) * powf(1.0 - this->fields.asymptoticSpeed, this->fields.powerRate * t)) + to;
}