float __fastcall BattleUtility__Abs(float f, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3

  if ( (byte_42E7DD4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, v2, v3, v4);
    byte_42E7DD4 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t __fastcall BattleUtility__Abs_23939196(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7DD5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7DD5 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( value >= 0 )
    return value;
  else
    return -value;
}


int32_t __fastcall BattleUtility__FloorToInt(float f, const MethodInfo *method)
{
  return BattleUtility__FloorToLong(f, method);
}


int32_t __fastcall BattleUtility__FloorToInt_23938964(double d, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  double v6; // d1

  if ( (byte_42E7DD2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, v2, v3, v4);
    byte_42E7DD2 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = floor(d);
  if ( v6 == INFINITY )
    return (int)-v6;
  else
    return (int)v6;
}


int64_t __fastcall BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  double v6; // d1

  if ( (byte_42E7DD3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, v2, v3, v4);
    byte_42E7DD3 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = floor(f);
  if ( v6 == INFINITY )
    return (__int64)-v6;
  else
    return (__int64)v6;
}


float __fastcall BattleUtility__Lerp(float a, float b, float t, const MethodInfo *method)
{
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  float v10; // s0

  if ( (byte_42E7DD0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, v4, v5, v6);
    byte_42E7DD0 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = System_Math__Max_45149520(0.0, t, 0LL);
  return (float)((float)(b - a) * System_Math__Min_45149968(v10, 1.0, 0LL)) + a;
}


double __fastcall BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  float v10; // s0

  if ( (byte_42E7DD1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, v4, v5, v6);
    byte_42E7DD1 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = System_Math__Max_45149520(0.0, t, 0LL);
  return (b - a) * System_Math__Min_45149968(v10, 1.0, 0LL) + a;
}