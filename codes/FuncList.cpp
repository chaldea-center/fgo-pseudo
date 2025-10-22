bool FuncList__Check(int32_t type, int32_t val, const MethodInfo *method)
{
  return type == val;
}


bool FuncList__IsNotContainsDefaultTarget(int32_t funcType, const MethodInfo *method)
{
  return funcType == 135;
}


bool FuncList__IsRelatedHpDecrease(int32_t funcType, const MethodInfo *method)
{
  if ( funcType > 25 )
  {
    if ( ((unsigned int)funcType > 0x33 || ((1LL << funcType) & 0xC400000000000LL) == 0) && funcType != 137 )
      return FuncList__isDamage(funcType, method);
    return 1;
  }
  if ( (unsigned int)funcType <= 0x19 && ((1 << funcType) & 0x2003000) != 0 )
    return 1;
  return FuncList__isDamage(funcType, method);
}


int32_t FuncList__getCount(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && SLODWORD(vals->max_length) >= 3 )
    return vals->m_Items[2];
  else
    return 0;
}


int32_t FuncList__getRate(int32_t intype, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && SLODWORD(vals->max_length) >= 1 )
    return vals->m_Items[0];
  else
    return 0;
}


int32_t FuncList__getRate_40471336(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && SLODWORD(vals->max_length) >= 1 )
    return vals->m_Items[0];
  else
    return 0;
}


int32_t FuncList__getTransformIndex(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  bool v3; // zf
  int32_t result; // w0

  v3 = type == 109;
  result = 0;
  if ( v3 && vals )
  {
    if ( SLODWORD(vals->max_length) >= 3 )
      return vals->m_Items[2];
    else
      return 0;
  }
  return result;
}


int32_t FuncList__getTurn(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && SLODWORD(vals->max_length) >= 2 )
    return vals->m_Items[1];
  else
    return 0;
}


int32_t FuncList__getUseRate(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && SLODWORD(vals->max_length) >= 5 )
    return vals->m_Items[4];
  else
    return 0;
}


int32_t FuncList__getValue(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  int max_length; // w8

  if ( type != 16 && type != 1 )
  {
    if ( vals )
    {
      max_length = vals->max_length;
      goto LABEL_8;
    }
    return 0;
  }
  if ( !vals )
    return 0;
  max_length = vals->max_length;
  if ( max_length >= 4 )
    return vals->m_Items[3];
LABEL_8:
  if ( max_length < 2 )
    return 0;
  return vals->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
int32_t FuncList__getValueFronIndex(System_Int32_array *vals, int32_t index, const MethodInfo *method)
{
  int32_t max_length; // w8

  if ( vals )
  {
    max_length = vals->max_length;
    if ( max_length >= index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C3E7C8(vals, *(_QWORD *)&index);
      LODWORD(vals) = vals->m_Items[index];
    }
    else
    {
      LODWORD(vals) = 0;
    }
  }
  return (int)vals;
}


bool FuncList__isAddState(int32_t func, const MethodInfo *method)
{
  if ( func != 1 )
    LOBYTE(func) = func == 16;
  return func;
}


bool FuncList__isDamage(int32_t funcType, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_Enum_o v6; // [xsp+8h] [xbp-38h] BYREF
  int32_t v7; // [xsp+18h] [xbp-28h]

  if ( (byte_4C55C26 & 1) == 0 )
  {
    sub_1C3E564(&FuncList_TYPE_TypeInfo);
    sub_1C3E564(&StringLiteral_4959/*"DAMAGE"*/);
    byte_4C55C26 = 1;
  }
  v6.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
  v6.monitor = (void *)-1LL;
  v7 = funcType;
  v3 = System_Enum__ToString(&v6, 0);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  return System_String__Contains(v3, (System_String_o *)StringLiteral_4959/*"DAMAGE"*/, 0);
}


bool FuncList__isGainHp(int32_t func, const MethodInfo *method)
{
  return func == 6 || func == 17;
}