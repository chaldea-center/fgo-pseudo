System_Func_float__float__float__float__o *__fastcall ExtraEasing__AsymptoticSeriesFloat(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  int v3; // w1
  int v4; // w2
  __int64 v5; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ExtraEasing___c__DisplayClass1_0_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  float v20; // s0
  System_Func_float__float__float__float__o *v21; // x20

  if ( (byte_42E7A23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_float__float__float__float___ctor__, v3, v4, v5);
    sub_B5D5C4(&System_Func_float__float__float__float__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_b__0__, v11, v12, v13);
    sub_B5D5C4(&ExtraEasing___c__DisplayClass1_0_TypeInfo, v14, v15, v16);
    byte_42E7A23 = 1;
  }
  v17 = (ExtraEasing___c__DisplayClass1_0_o *)sub_B5D694(ExtraEasing___c__DisplayClass1_0_TypeInfo);
  ExtraEasing___c__DisplayClass1_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v17->fields.asymptoticSpeed = asymptoticSpeed;
  v17->fields.powerRate = powerRate;
  if ( asymptoticSpeed < 0.0 || asymptoticSpeed > 1.0 )
  {
    v20 = UnityEngine_Mathf__Clamp01(asymptoticSpeed, 0LL);
    powerRate = v17->fields.powerRate;
    v17->fields.asymptoticSpeed = v20;
  }
  if ( powerRate < 0.0 )
    v17->fields.powerRate = 0.0;
  v21 = (System_Func_float__float__float__float__o *)sub_B5D694(System_Func_float__float__float__float__TypeInfo);
  System_Func_float__float__float__float____ctor(
    v21,
    (Il2CppObject *)v17,
    Method_ExtraEasing___c__DisplayClass1_0__AsymptoticSeriesFloat_b__0__,
    (const MethodInfo_2C3C384 *)Method_System_Func_float__float__float__float___ctor__);
  return v21;
}


System_Func_Vector3__Vector3__float__Vector3__o *__fastcall ExtraEasing__AsymptoticSeriesVector3(
        float asymptoticSpeed,
        float powerRate,
        const MethodInfo *method)
{
  int v3; // w1
  int v4; // w2
  __int64 v5; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ExtraEasing___c__DisplayClass0_0_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  float v20; // s0
  System_Func_Vector3__Vector3__float__Vector3__o *v21; // x20

  if ( (byte_42E7A22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_Vector3__Vector3__float__Vector3___ctor__, v3, v4, v5);
    sub_B5D5C4(&System_Func_Vector3__Vector3__float__Vector3__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_b__0__, v11, v12, v13);
    sub_B5D5C4(&ExtraEasing___c__DisplayClass0_0_TypeInfo, v14, v15, v16);
    byte_42E7A22 = 1;
  }
  v17 = (ExtraEasing___c__DisplayClass0_0_o *)sub_B5D694(ExtraEasing___c__DisplayClass0_0_TypeInfo);
  ExtraEasing___c__DisplayClass0_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v17->fields.asymptoticSpeed = asymptoticSpeed;
  v17->fields.powerRate = powerRate;
  if ( asymptoticSpeed < 0.0 || asymptoticSpeed > 1.0 )
  {
    v20 = UnityEngine_Mathf__Clamp01(asymptoticSpeed, 0LL);
    powerRate = v17->fields.powerRate;
    v17->fields.asymptoticSpeed = v20;
  }
  if ( powerRate < 0.0 )
    v17->fields.powerRate = 0.0;
  v21 = (System_Func_Vector3__Vector3__float__Vector3__o *)sub_B5D694(System_Func_Vector3__Vector3__float__Vector3__TypeInfo);
  System_Func_Vector3__Vector3__float__Vector3____ctor(
    v21,
    (Il2CppObject *)v17,
    Method_ExtraEasing___c__DisplayClass0_0__AsymptoticSeriesVector3_b__0__,
    (const MethodInfo_2C3C6E4 *)Method_System_Func_Vector3__Vector3__float__Vector3___ctor__);
  return v21;
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