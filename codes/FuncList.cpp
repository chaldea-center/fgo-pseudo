bool __fastcall FuncList__Check(int32_t type, int32_t val, const MethodInfo *method)
{
  return type == val;
}


bool __fastcall FuncList__IsNotContainsDefaultTarget(int32_t funcType, const MethodInfo *method)
{
  return funcType == 135;
}


bool __fastcall FuncList__IsRelatedHpDecrease(int32_t funcType, const MethodInfo *method)
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


int32_t __fastcall FuncList__getCount(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && (int)vals->max_length >= 3 )
    return vals->m_Items[3];
  else
    return 0;
}


int32_t __fastcall FuncList__getRate(int32_t intype, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && (int)vals->max_length >= 1 )
    return vals->m_Items[1];
  else
    return 0;
}


int32_t __fastcall FuncList__getRate_38399596(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && (int)vals->max_length >= 1 )
    return vals->m_Items[1];
  else
    return 0;
}


int32_t __fastcall FuncList__getTransformIndex(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  bool v3; // zf
  int32_t result; // w0

  v3 = type == 109;
  result = 0;
  if ( v3 && vals )
  {
    if ( (int)vals->max_length >= 3 )
      return vals->m_Items[3];
    else
      return 0;
  }
  return result;
}


int32_t __fastcall FuncList__getTurn(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && (int)vals->max_length >= 2 )
    return vals->m_Items[2];
  else
    return 0;
}


int32_t __fastcall FuncList__getUseRate(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  if ( vals && (int)vals->max_length >= 5 )
    return vals->m_Items[5];
  else
    return 0;
}


int32_t __fastcall FuncList__getValue(int32_t type, System_Int32_array *vals, const MethodInfo *method)
{
  signed int max_length; // w8

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
    return vals->m_Items[4];
LABEL_8:
  if ( max_length < 2 )
    return 0;
  return vals->m_Items[2];
}


int32_t __fastcall FuncList__getValueFronIndex(System_Int32_array *vals, int32_t index, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // w8

  if ( vals )
  {
    max_length = vals->max_length;
    if ( (int)max_length >= index )
    {
      if ( max_length <= index )
        sub_1BCAA44(vals, index);
      LODWORD(vals) = vals->m_Items[index + 1];
    }
    else
    {
      LODWORD(vals) = 0;
    }
  }
  return (int)vals;
}


bool __fastcall FuncList__isAddState(int32_t func, const MethodInfo *method)
{
  if ( func != 1 )
    LOBYTE(func) = func == 16;
  return func;
}


bool __fastcall FuncList__isDamage(int32_t funcType, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_Enum_o v9; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+18h] [xbp-28h]

  if ( (byte_4B151AA & 1) == 0 )
  {
    sub_1BCA7E0(&FuncList_TYPE_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5066/*"DAMAGE"*/, v4, v5);
    byte_4B151AA = 1;
  }
  v9.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = funcType;
  v6 = System_Enum__ToString(&v9, 0LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  return System_String__Contains(v6, (System_String_o *)StringLiteral_5066/*"DAMAGE"*/, 0LL);
}


bool __fastcall FuncList__isGainHp(int32_t func, const MethodInfo *method)
{
  return func == 6 || func == 17;
}