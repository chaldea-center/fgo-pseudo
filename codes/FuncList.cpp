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


bool FuncList__IsRelatedNpDecrease(int32_t funcType, const MethodInfo *method)
{
  return funcType == 8 || funcType == 141;
}


bool FuncList__isAddState(int32_t func, const MethodInfo *method)
{
  return func == 1 || func == 16 || (func & 0xFFFFFFFE) == 160;
}


bool FuncList__isDamage(int32_t funcType, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_Enum_o v6; // [xsp+8h] [xbp-38h] BYREF
  int32_t v7; // [xsp+18h] [xbp-28h]

  if ( (byte_4D2F8B5 & 1) == 0 )
  {
    sub_1C93AD4(&FuncList_TYPE_TypeInfo);
    sub_1C93AD4(&StringLiteral_4979/*"DAMAGE"*/);
    byte_4D2F8B5 = 1;
  }
  v6.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
  v6.monitor = (void *)-1LL;
  v7 = funcType;
  v3 = System_Enum__ToString(&v6, 0);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  return System_String__Contains(v3, (System_String_o *)StringLiteral_4979/*"DAMAGE"*/, 0);
}