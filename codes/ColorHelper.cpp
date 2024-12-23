// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ColorHelper__GetClamped(UnityEngine_Color_o colorToClamp, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float Clamped_g__Clamp_0_0; // s11
  const MethodInfo *v6; // x0
  float v7; // s10
  const MethodInfo *v8; // x0
  float v9; // s9
  const MethodInfo *v10; // x0
  float v11; // s0
  float v12; // s2
  float v13; // s3
  float v14; // s0
  float v15; // s1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = colorToClamp.fields.a;
  b = colorToClamp.fields.b;
  g = colorToClamp.fields.g;
  Clamped_g__Clamp_0_0 = ColorHelper___GetClamped_g__Clamp_0_0(colorToClamp.fields.r, method);
  v7 = ColorHelper___GetClamped_g__Clamp_0_0(g, v6);
  v9 = ColorHelper___GetClamped_g__Clamp_0_0(b, v8);
  v11 = ColorHelper___GetClamped_g__Clamp_0_0(a, v10);
  v12 = v9;
  v13 = v11;
  v14 = Clamped_g__Clamp_0_0;
  v15 = v7;
  result.fields.a = v13;
  result.fields.b = v12;
  result.fields.g = v15;
  result.fields.r = v14;
  return result;
}


float __fastcall ColorHelper___GetClamped_g__Clamp_0_0(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  float result; // s0

  if ( (byte_4B683C1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, v2);
    byte_4B683C1 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4B6857C )
  {
    sub_1BE4ACC(&Method_System_Math_ThrowMinMaxException_float___, v2);
    sub_1BE4ACC(&System_Math_TypeInfo, v4);
    byte_4B6857C = 1;
  }
  result = 0.0;
  if ( value >= 0.0 )
  {
    result = 1.0;
    if ( value <= 1.0 )
      return value;
  }
  return result;
}