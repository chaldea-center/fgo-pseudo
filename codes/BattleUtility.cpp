float __fastcall BattleUtility__Abs(float f, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A00CD9 & 1) == 0 )
  {
    sub_1B64870(&System_Math_TypeInfo, v2);
    byte_4A00CD9 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t __fastcall BattleUtility__Abs_42677916(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00CDA & 1) == 0 )
  {
    sub_1B64870(&System_Math_TypeInfo, method);
    byte_4A00CDA = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
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


int32_t __fastcall BattleUtility__FloorToInt_42677708(double d, const MethodInfo *method)
{
  __int64 v2; // x1
  int32_t v4; // w9

  if ( (byte_4A00CD7 & 1) == 0 )
  {
    sub_1B64870(&System_Math_TypeInfo, v2);
    byte_4A00CD7 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = vcvtmd_s64_f64(d);
  if ( floor(d) == INFINITY )
    return 0x80000000;
  else
    return v4;
}


int64_t __fastcall BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t v4; // x9

  if ( (byte_4A00CD8 & 1) == 0 )
  {
    sub_1B64870(&System_Math_TypeInfo, v2);
    byte_4A00CD8 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = vcvtmd_s64_f64(f);
  if ( floor(f) == INFINITY )
    return 0x8000000000000000LL;
  else
    return v4;
}


float __fastcall BattleUtility__Lerp(float a, float b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  float v8; // s0

  if ( (byte_4A00CD5 & 1) == 0 )
  {
    sub_1B64870(&System_Math_TypeInfo, v4);
    byte_4A00CD5 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_62202256(0.0, t, 0LL);
  return (float)((float)(b - a) * System_Math__Min_62202584(v8, 1.0, 0LL)) + a;
}


double __fastcall BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  float v8; // s0

  if ( (byte_4A00CD6 & 1) == 0 )
  {
    sub_1B64870(&System_Math_TypeInfo, v4);
    byte_4A00CD6 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_62202256(0.0, t, 0LL);
  return (b - a) * System_Math__Min_62202584(v8, 1.0, 0LL) + a;
}