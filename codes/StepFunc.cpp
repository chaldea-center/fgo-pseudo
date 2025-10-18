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
  if ( (byte_4C3FA54 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA54 = 1;
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
  if ( (byte_4C3FA55 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA55 = 1;
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
  if ( (byte_4C3FA56 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA56 = 1;
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
  if ( (byte_4C3FA57 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA57 = 1;
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
  if ( (byte_4C3FA4E & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA4E = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 0.5 - cos(v * 3.14159265) * 0.5;
}


double StepFunc__AccSin(double v, const MethodInfo *method)
{
  if ( (byte_4C3FA4C & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA4C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - cos(v * 3.14159265 * 0.5);
}


double StepFunc__Dec2(double v, const MethodInfo *method)
{
  if ( (byte_4C3FA50 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA50 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 2.0, 0);
}


double StepFunc__Dec3(double v, const MethodInfo *method)
{
  if ( (byte_4C3FA51 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA51 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 3.0, 0);
}


double StepFunc__Dec4(double v, const MethodInfo *method)
{
  if ( (byte_4C3FA52 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA52 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 4.0, 0);
}


double StepFunc__Dec5(double v, const MethodInfo *method)
{
  if ( (byte_4C3FA53 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA53 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return 1.0 - System_Math__Pow(1.0 - v, 5.0, 0);
}


double StepFunc__DecAcc2(double v, const MethodInfo *method)
{
  if ( (byte_4C3FA58 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA58 = 1;
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
  if ( (byte_4C3FA59 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA59 = 1;
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
  if ( (byte_4C3FA5A & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA5A = 1;
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
  if ( (byte_4C3FA5B & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA5B = 1;
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

  if ( (byte_4C3FA4F & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA4F = 1;
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
  if ( (byte_4C3FA4D & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3FA4D = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return sin(v * 3.14159265 * 0.5);
}


double StepFunc__Linear(double v, const MethodInfo *method)
{
  return v;
}