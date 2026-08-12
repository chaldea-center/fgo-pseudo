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
  if ( funcType <= 25 )
  {
    if ( (unsigned int)funcType > 0x19 || ((1 << funcType) & 0x2003000) == 0 )
      return FuncList__isDamage(funcType, method);
    return 1;
  }
  if ( (funcType & 0x7FFFFFFE) == 0x32 || funcType == 46 || funcType == 137 )
    return 1;
  return FuncList__isDamage(funcType, method);
}


bool FuncList__IsRelatedNpDecrease(int32_t funcType, const MethodInfo *method)
{
  return funcType == 8 || funcType == 141;
}


bool FuncList__isAddState(int32_t func, const MethodInfo *method)
{
  bool v3; // w8
  bool v5; // w9

  v3 = (func & 0x7FFFFFFE) == 0xA0 || (unsigned int)(func - 169) < 2;
  v5 = func == 1 || func == 16;
  if ( func <= 16 )
    return v5;
  else
    return v3;
}


bool FuncList__isDamage(int32_t funcType, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_Enum_o v6; // [xsp+8h] [xbp-38h] BYREF
  int32_t v7; // [xsp+18h] [xbp-28h]

  if ( (byte_596F67F & 1) == 0 )
  {
    sub_2213A60(&FuncList_TYPE_TypeInfo);
    sub_2213A60(&StringLiteral_5148/*"DAMAGE"*/);
    byte_596F67F = 1;
  }
  v7 = funcType;
  v6.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
  v6.monitor = (void *)-1LL;
  v3 = System_Enum__ToString(&v6, 0);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return System_String__Contains(v3, (System_String_o *)StringLiteral_5148/*"DAMAGE"*/, 0);
}