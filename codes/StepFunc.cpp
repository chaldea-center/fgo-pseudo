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

  if ( (byte_5934F42 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F42 = 1;
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

  if ( (byte_5934F43 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F43 = 1;
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

  if ( (byte_5934F44 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F44 = 1;
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

  if ( (byte_5934F45 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F45 = 1;
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

  if ( (byte_5934F3C & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F3C = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 0.5 - cos(v * 3.14159265) * 0.5;
}


double StepFunc__AccSin(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_5934F3A & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F3A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - cos(v * 3.14159265 * 0.5);
}


double StepFunc__Dec2(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_5934F3E & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F3E = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - System_Math__Pow(1.0 - v, 2.0, 0);
}


double StepFunc__Dec3(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_5934F3F & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F3F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - System_Math__Pow(1.0 - v, 3.0, 0);
}


double StepFunc__Dec4(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_5934F40 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F40 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return 1.0 - System_Math__Pow(1.0 - v, 4.0, 0);
}


double StepFunc__Dec5(double v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_5934F41 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F41 = 1;
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

  if ( (byte_5934F46 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F46 = 1;
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

  if ( (byte_5934F47 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F47 = 1;
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

  if ( (byte_5934F48 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F48 = 1;
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

  if ( (byte_5934F49 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F49 = 1;
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

  if ( (byte_5934F3D & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F3D = 1;
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

  if ( (byte_5934F3B & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5934F3B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  return sin(v * 3.14159265 * 0.5);
}


double StepFunc__Linear(double v, const MethodInfo *method)
{
  return v;
}