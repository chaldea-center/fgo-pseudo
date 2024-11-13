bool __fastcall Ai__Check(int32_t actNum, int32_t num, const MethodInfo *method)
{
  return actNum == num;
}


bool __fastcall Ai__CheckPriority(int32_t actNum, int32_t num, int32_t priority, const MethodInfo *method)
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


int32_t __fastcall Ai__getChangeThinking(System_Int32_array *avals, const MethodInfo *method)
{
  if ( avals )
  {
    if ( (int)avals->max_length < 1 )
      LODWORD(avals) = 0;
    else
      LODWORD(avals) = avals->m_Items[1];
  }
  return (int)avals;
}


int32_t __fastcall Ai__getCond(int32_t intype, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B150AF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B150AF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( intype >= 0 )
    return intype;
  else
    return -intype;
}


bool __fastcall Ai__getReversal(int32_t intype, const MethodInfo *method)
{
  return (unsigned int)intype >> 31;
}