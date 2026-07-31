bool Ai__Check(int32_t actNum, int32_t num, const MethodInfo *method)
{
  return actNum == num;
}


bool Ai__CheckPriority(int32_t actNum, int32_t num, int32_t priority, const MethodInfo *method)
{
  int32_t v4; // w9
  int32_t v5; // w8

  if ( actNum >= 0 )
    v4 = priority;
  else
    v4 = -priority;
  v5 = v4 + 100 * actNum;
  if ( priority < 1 )
    v5 = actNum;
  return v5 == num;
}


int32_t Ai__getCond(int32_t intype, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5937405 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5937405 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  if ( intype >= 0 )
    return intype;
  else
    return -intype;
}


bool Ai__getReversal(int32_t intype, const MethodInfo *method)
{
  return (unsigned int)intype >> 31;
}