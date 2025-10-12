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
  if ( (byte_4C3446A & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3446A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return System_Math__Pow(v + v, 2.0, 0) * 0.5;
  else
    return System_Math__Pow(1.0 - v + 1.0 - v, 2.0, 0) * -0.5 + 1.0;
}


double StepFunc__AccDec3(double v, const MethodInfo *method)
{
  if ( (byte_4C3446B & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3446B = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return System_Math__Pow(v + v, 3.0, 0) * 0.5;
  else
    return System_Math__Pow(1.0 - v + 1.0 - v, 3.0, 0) * -0.5 + 1.0;
}


double StepFunc__AccDec4(double v, const MethodInfo *method)
{
  if ( (byte_4C3446C & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3446C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return System_Math__Pow(v + v, 4.0, 0) * 0.5;
  else
    return System_Math__Pow(1.0 - v + 1.0 - v, 4.0, 0) * -0.5 + 1.0;
}


double StepFunc__AccDec5(double v, const MethodInfo *method)
{
  if ( (byte_4C3446D & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3446D = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return System_Math__Pow(v + v, 5.0, 0) * 0.5;
  else
    return System_Math__Pow(1.0 - v + 1.0 - v, 5.0, 0) * -0.5 + 1.0;
}


double StepFunc__AccSig(double v, const MethodInfo *method)
{
  if ( (byte_4C34464 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34464 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 0.5 - cos(v * 3.14159265) * 0.5;
}


double StepFunc__AccSin(double v, const MethodInfo *method)
{
  if ( (byte_4C34462 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34462 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - cos(v * 3.14159265 * 0.5);
}


double StepFunc__Dec2(double v, const MethodInfo *method)
{
  if ( (byte_4C34466 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34466 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 2.0, 0);
}


double StepFunc__Dec3(double v, const MethodInfo *method)
{
  if ( (byte_4C34467 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34467 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 3.0, 0);
}


double StepFunc__Dec4(double v, const MethodInfo *method)
{
  if ( (byte_4C34468 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34468 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 4.0, 0);
}


double StepFunc__Dec5(double v, const MethodInfo *method)
{
  if ( (byte_4C34469 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34469 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 5.0, 0);
}


double StepFunc__DecAcc2(double v, const MethodInfo *method)
{
  if ( (byte_4C3446E & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3446E = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 2.0, 0) * 0.5;
  else
    return System_Math__Pow(v + -0.5 + v + -0.5, 2.0, 0) * 0.5 + 0.5;
}


double StepFunc__DecAcc3(double v, const MethodInfo *method)
{
  if ( (byte_4C3446F & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3446F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 3.0, 0) * 0.5;
  else
    return System_Math__Pow(v + -0.5 + v + -0.5, 3.0, 0) * 0.5 + 0.5;
}


double StepFunc__DecAcc4(double v, const MethodInfo *method)
{
  if ( (byte_4C34470 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34470 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 4.0, 0) * 0.5;
  else
    return System_Math__Pow(v + -0.5 + v + -0.5, 4.0, 0) * 0.5 + 0.5;
}


double StepFunc__DecAcc5(double v, const MethodInfo *method)
{
  if ( (byte_4C34471 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34471 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v <= 0.5 )
    return 0.5 - System_Math__Pow(0.5 - v + 0.5 - v, 5.0, 0) * 0.5;
  else
    return System_Math__Pow(v + -0.5 + v + -0.5, 5.0, 0) * 0.5 + 0.5;
}


double StepFunc__DecSig(double v, const MethodInfo *method)
{
  double result; // d0

  if ( (byte_4C34465 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34465 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  result = sin(v * 3.14159265) * 0.5;
  if ( v > 0.5 )
    return 1.0 - result;
  return result;
}


double StepFunc__DecSin(double v, const MethodInfo *method)
{
  if ( (byte_4C34463 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C34463 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return sin(v * 3.14159265 * 0.5);
}


double StepFunc__Linear(double v, const MethodInfo *method)
{
  return v;
}