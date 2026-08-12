void StepFunc___ctor(StepFunc_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


double StepFunc__Acc2(double v, const MethodInfo *method)
{
  return v * v;
}


double StepFunc__Acc3(double v, const MethodInfo *method)
{
  return v * v * v;
}


double StepFunc__Acc4(double v, const MethodInfo *method)
{
  return v * v * v * v;
}


double StepFunc__Acc5(double v, const MethodInfo *method)
{
  return v * v * v * v * v;
}


double StepFunc__AccDec2(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D072 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D072 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + v, 2.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(1.0 - v + 1.0 - v, 2.0, 0) * -0.5 + 1.0;
  }
}


double StepFunc__AccDec3(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D073 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D073 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + v, 3.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(1.0 - v + 1.0 - v, 3.0, 0) * -0.5 + 1.0;
  }
}


double StepFunc__AccDec4(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D074 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D074 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + v, 4.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(1.0 - v + 1.0 - v, 4.0, 0) * -0.5 + 1.0;
  }
}


double StepFunc__AccDec5(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D075 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D075 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + v, 5.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(1.0 - v + 1.0 - v, 5.0, 0) * -0.5 + 1.0;
  }
}


double StepFunc__AccSig(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596D06C & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D06C = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 0.5 - cos(v * 3.14159265) * 0.5;
}


double StepFunc__AccSin(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596D06A & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D06A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - cos(v * 3.14159265 * 0.5);
}


double StepFunc__Dec2(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596D06E & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D06E = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - System_Math__Pow(1.0 - v, 2.0, 0);
}


double StepFunc__Dec3(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596D06F & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D06F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - System_Math__Pow(1.0 - v, 3.0, 0);
}


double StepFunc__Dec4(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596D070 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D070 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - System_Math__Pow(1.0 - v, 4.0, 0);
}


double StepFunc__Dec5(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596D071 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D071 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - System_Math__Pow(1.0 - v, 5.0, 0);
}


double StepFunc__DecAcc2(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D076 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D076 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 2.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + -0.5 + v + -0.5, 2.0, 0) * 0.5 + 0.5;
  }
}


double StepFunc__DecAcc3(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D077 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D077 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 3.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + -0.5 + v + -0.5, 3.0, 0) * 0.5 + 0.5;
  }
}


double StepFunc__DecAcc4(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D078 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D078 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 4.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + -0.5 + v + -0.5, 4.0, 0) * 0.5 + 0.5;
  }
}


double StepFunc__DecAcc5(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D079 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D079 = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 5.0, 0) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return System_Math__Pow(v + -0.5 + v + -0.5, 5.0, 0) * 0.5 + 0.5;
  }
}


double StepFunc__DecSig(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int v5; // w8

  if ( (byte_596D06D & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D06D = 1;
  }
  v5 = *(&System_Math_TypeInfo->_2.cctor_finished + 1);
  if ( v <= 0.5 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return sin(v * 3.14159265) * 0.5;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
    return sin(v * -3.14159265) * 0.5 + 1.0;
  }
}


double StepFunc__DecSin(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_596D06B & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D06B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return sin(v * 3.14159265 * 0.5);
}


double StepFunc__Linear(double v, const MethodInfo *method)
{
  return v;
}