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


int32_t __fastcall FuncList__getRate_30067168(int32_t type, System_Int32_array *vals, const MethodInfo *method)
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
        v4 = sub_B52A88(vals);
        sub_B52A28(v4, 0LL);
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
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  System_String_o *v6; // x19
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B2BC8 & 1) == 0 )
  {
    sub_B52984(&FuncList_TYPE_TypeInfo);
    sub_B52984(&StringLiteral_4592/*"DAMAGE"*/);
    byte_42B2BC8 = 1;
  }
  v8 = funcType;
  v3 = j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, &v8);
  if ( !v3
    || (v5 = v3,
        v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(
                                  v3,
                                  *(_QWORD *)(*(_QWORD *)v3 + 368LL)),
        v3 = j_il2cpp_object_unbox_0(v5),
        v8 = *(_DWORD *)v3,
        !v6) )
  {
    sub_B52A5C(v3, v4);
  }
  return System_String__Contains(v6, (System_String_o *)StringLiteral_4592/*"DAMAGE"*/, 0LL);
}


bool __fastcall FuncList__isGainHp(int32_t func, const MethodInfo *method)
{
  return func == 6 || func == 17;
}