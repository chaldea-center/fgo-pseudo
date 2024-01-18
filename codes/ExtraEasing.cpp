System_Func_float__float__float__float__o *__fastcall ExtraEasing__AsymptoticSeriesFloat(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ExtraEasing___c__DisplayClass1_0_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  float v12; // s0
  System_Func_float__float__float__float__o *v13; // x20

  if ( (byte_4187793 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_float__float__float__float___ctor__, v3);
    sub_B2C35C(&System_Func_float__float__float__float__TypeInfo, v6);
    sub_B2C35C(&Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_b__0__, v7);
    sub_B2C35C(&ExtraEasing___c__DisplayClass1_0_TypeInfo, v8);
    byte_4187793 = 1;
  }
  v9 = (ExtraEasing___c__DisplayClass1_0_o *)sub_B2C42C(ExtraEasing___c__DisplayClass1_0_TypeInfo);
  ExtraEasing___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.asymptoticSpeed = asymptoticSpeed;
  v9->fields.powerRate = powerRate;
  if ( asymptoticSpeed < 0.0 || asymptoticSpeed > 1.0 )
  {
    v12 = UnityEngine_Mathf__Clamp01(asymptoticSpeed, 0LL);
    powerRate = v9->fields.powerRate;
    v9->fields.asymptoticSpeed = v12;
  }
  if ( powerRate < 0.0 )
    v9->fields.powerRate = 0.0;
  v13 = (System_Func_float__float__float__float__o *)sub_B2C42C(System_Func_float__float__float__float__TypeInfo);
  System_Func_float__float__float__float____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_b__0__,
    (const MethodInfo_271EF98 *)Method_System_Func_float__float__float__float___ctor__);
  return v13;
}


System_Func_Vector3__Vector3__float__Vector3__o *__fastcall ExtraEasing__AsymptoticSeriesVector3(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ExtraEasing___c__DisplayClass0_0_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  float v12; // s0
  System_Func_Vector3__Vector3__float__Vector3__o *v13; // x20

  if ( (byte_4187792 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_Vector3__Vector3__float__Vector3___ctor__, v3);
    sub_B2C35C(&System_Func_Vector3__Vector3__float__Vector3__TypeInfo, v6);
    sub_B2C35C(&Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_b__0__, v7);
    sub_B2C35C(&ExtraEasing___c__DisplayClass0_0_TypeInfo, v8);
    byte_4187792 = 1;
  }
  v9 = (ExtraEasing___c__DisplayClass0_0_o *)sub_B2C42C(ExtraEasing___c__DisplayClass0_0_TypeInfo);
  ExtraEasing___c__DisplayClass0_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.asymptoticSpeed = asymptoticSpeed;
  v9->fields.powerRate = powerRate;
  if ( asymptoticSpeed < 0.0 || asymptoticSpeed > 1.0 )
  {
    v12 = UnityEngine_Mathf__Clamp01(asymptoticSpeed, 0LL);
    powerRate = v9->fields.powerRate;
    v9->fields.asymptoticSpeed = v12;
  }
  if ( powerRate < 0.0 )
    v9->fields.powerRate = 0.0;
  v13 = (System_Func_Vector3__Vector3__float__Vector3__o *)sub_B2C42C(System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
  System_Func_Vector3__Vector3__float__Vector3____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_b__0__,
    (const MethodInfo_271F2F8 *)Method_System_Func_Vector3__Vector3__float__Vector3___ctor__);
  return v13;
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