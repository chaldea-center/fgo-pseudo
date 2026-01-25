bool Ai__Check(int32_t actNum, int32_t num, const MethodInfo *method)
{
  return actNum == num;
}


bool Ai__CheckPriority(int32_t actNum, int32_t num, int32_t priority, const MethodInfo *method)
{
  int32_t v4; // w8

  if ( priority >= 1 )
  {
    if ( actNum >= 0 )
      v4 = priority;
    else
      v4 = -priority;
    actNum = v4 + 100 * actNum;
  }
  return actNum == num;
}


int32_t Ai__getCond(int32_t intype, const MethodInfo *method)
{
  if ( (byte_4CED44D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CED44D = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( intype >= 0 )
    return intype;
  else
    return -intype;
}


bool Ai__getReversal(int32_t intype, const MethodInfo *method)
{
  return (unsigned int)intype >> 31;
}