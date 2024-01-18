bool __fastcall Ai__Check(int32_t actNum, int32_t num, const MethodInfo *method)
{
  return actNum == num;
}


bool __fastcall Ai__CheckPriority(int32_t actNum, int32_t num, int32_t priority, const MethodInfo *method)
{
  int v4; // w8

  if ( priority >= 1 )
  {
    if ( actNum < 0 )
      v4 = -1;
    else
      v4 = 1;
    actNum = 100 * actNum + v4 * priority;
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
  if ( (byte_4185A51 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, method);
    byte_4185A51 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( intype >= 0 )
    return intype;
  else
    return -intype;
}


bool __fastcall Ai__getReversal(int32_t intype, const MethodInfo *method)
{
  return (unsigned int)intype >> 31;
}