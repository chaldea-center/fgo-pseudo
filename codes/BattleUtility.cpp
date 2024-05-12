float __fastcall BattleUtility__Abs(float f, const MethodInfo *method)
{
  if ( (byte_438A8C3 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438A8C3 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t __fastcall BattleUtility__Abs_24290204(int32_t value, const MethodInfo *method)
{
  if ( (byte_438A8C4 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438A8C4 = 1;
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


int32_t __fastcall BattleUtility__FloorToInt_24289972(double d, const MethodInfo *method)
{
  double v3; // d1

  if ( (byte_438A8C1 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438A8C1 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = floor(d);
  if ( v3 == INFINITY )
    return (int)-v3;
  else
    return (int)v3;
}


int64_t __fastcall BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  double v3; // d1

  if ( (byte_438A8C2 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438A8C2 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = floor(f);
  if ( v3 == INFINITY )
    return (__int64)-v3;
  else
    return (__int64)v3;
}


float __fastcall BattleUtility__Lerp(float a, float b, float t, const MethodInfo *method)
{
  float v7; // s0

  if ( (byte_438A8BF & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438A8BF = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_45851188(0.0, t, 0LL);
  return (float)((float)(b - a) * System_Math__Min_45851636(v7, 1.0, 0LL)) + a;
}


double __fastcall BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  float v7; // s0

  if ( (byte_438A8C0 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438A8C0 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_45851188(0.0, t, 0LL);
  return (b - a) * System_Math__Min_45851636(v7, 1.0, 0LL) + a;
}