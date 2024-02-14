float __fastcall BattleUtility__Abs(float f, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4214017 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, v2);
    byte_4214017 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t __fastcall BattleUtility__Abs_23825740(int32_t value, const MethodInfo *method)
{
  if ( (byte_4214018 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, method);
    byte_4214018 = 1;
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


int32_t __fastcall BattleUtility__FloorToInt_23825508(double d, const MethodInfo *method)
{
  __int64 v2; // x1
  double v4; // d1

  if ( (byte_4214015 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, v2);
    byte_4214015 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = floor(d);
  if ( v4 == INFINITY )
    return (int)-v4;
  else
    return (int)v4;
}


int64_t __fastcall BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  __int64 v2; // x1
  double v4; // d1

  if ( (byte_4214016 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, v2);
    byte_4214016 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = floor(f);
  if ( v4 == INFINITY )
    return (__int64)-v4;
  else
    return (__int64)v4;
}


float __fastcall BattleUtility__Lerp(float a, float b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  float v8; // s0

  if ( (byte_4214013 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, v4);
    byte_4214013 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_44559576(0.0, t, 0LL);
  return (float)((float)(b - a) * System_Math__Min_44560024(v8, 1.0, 0LL)) + a;
}


double __fastcall BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  float v8; // s0

  if ( (byte_4214014 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, v4);
    byte_4214014 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_44559576(0.0, t, 0LL);
  return (b - a) * System_Math__Min_44560024(v8, 1.0, 0LL) + a;
}