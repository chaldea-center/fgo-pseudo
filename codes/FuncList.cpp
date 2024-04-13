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


int32_t __fastcall FuncList__getRate_30344188(int32_t type, System_Int32_array *vals, const MethodInfo *method)
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
    if ( (int)vals->max_length < 3 )
      return 0;
    else
      return vals->m_Items[3];
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

  if ( type == 16 || type == 1 )
  {
    if ( !vals )
      return 0;
    max_length = vals->max_length;
    if ( max_length >= 4 )
      return vals->m_Items[4];
  }
  else
  {
    if ( !vals )
      return 0;
    max_length = vals->max_length;
  }
  if ( max_length >= 2 )
    return vals->m_Items[2];
  return 0;
}


int32_t __fastcall FuncList__getValueFronIndex(System_Int32_array *vals, int32_t index, const MethodInfo *method)
{
  int32_t max_length; // w8
  __int64 v4; // x0

  if ( vals )
  {
    max_length = vals->max_length;
    if ( max_length >= index )
    {
      if ( max_length <= (unsigned int)index )
      {
        v4 = sub_B5D6C8(vals);
        sub_B5D668(v4, 0LL);
      }
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_o *v11; // x19
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB532 & 1) == 0 )
  {
    sub_B5D5C4(&FuncList_TYPE_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_4625/*"DAMAGE"*/, v5, v6, v7);
    byte_42EB532 = 1;
  }
  v13 = funcType;
  v8 = j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, &v13);
  if ( !v8
    || (v10 = v8,
        v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                                   v8,
                                   *(_QWORD *)(*(_QWORD *)v8 + 368LL)),
        v8 = j_il2cpp_object_unbox_0(v10),
        v13 = *(_DWORD *)v8,
        !v11) )
  {
    sub_B5D69C(v8, v9);
  }
  return System_String__Contains(v11, (System_String_o *)StringLiteral_4625/*"DAMAGE"*/, 0LL);
}


bool __fastcall FuncList__isGainHp(int32_t func, const MethodInfo *method)
{
  return func == 6 || func == 17;
}