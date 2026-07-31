bool BattleUtility__Above(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_593B5BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_First_int___);
    byte_593B5BF = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_384C318 *)Method_System_Linq_Enumerable_First_int___) <= value;
}


float BattleUtility__Abs(float f, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_593B5BD & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593B5BD = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  return fabsf(f);
}


int32_t BattleUtility__Abs_53467564(int32_t value, const MethodInfo *method)
{
  if ( (byte_593B5BE & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593B5BE = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( value >= 0 )
    return value;
  else
    return -value;
}


bool BattleUtility__Below(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_593B5C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_First_int___);
    byte_593B5C0 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_384C318 *)Method_System_Linq_Enumerable_First_int___) >= value;
}


bool BattleUtility__Between(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  if ( (byte_593B5C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_First_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Last_int___);
    byte_593B5C1 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !condArray )
    sub_21FFECC(IsNullOrEmpty, v6);
  return LODWORD(condArray->max_length) == 2
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_384C318 *)Method_System_Linq_Enumerable_First_int___) <= value
      && System_Linq_Enumerable__Last_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_385037C *)Method_System_Linq_Enumerable_Last_int___) >= value;
}


System_Func_int__int__bool__o *BattleUtility__CheckValueSatisfiesCondition(
        System_String_o *condString,
        const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_Func_int__int__bool__o *v3; // x19
  intptr_t *v4; // x8
  bool v6; // w20
  __int64 v7; // x0
  bool v8; // w21
  __int64 v9; // x0

  v2 = condString;
  if ( (byte_593B5C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleUtility_IsEqualOrHigher__);
    sub_21FFC50(&Method_BattleUtility_IsEqualOrLower__);
    sub_21FFC50(&Method_BattleUtility_IsEqual__);
    sub_21FFC50(&Method_BattleUtility_IsHigher__);
    sub_21FFC50(&Method_BattleUtility_IsLower__);
    sub_21FFC50(&Method_BattleUtility_IsNotEqual__);
    sub_21FFC50(&System_Func_int__int__bool__TypeInfo);
    sub_21FFC50(&StringLiteral_1612/*"<>"*/);
    sub_21FFC50(&StringLiteral_1824/*"="*/);
    sub_21FFC50(&StringLiteral_1572/*"<"*/);
    sub_21FFC50(&StringLiteral_1830/*">"*/);
    condString = (System_String_o *)sub_21FFC50(&StringLiteral_362/*"!="*/);
    byte_593B5C2 = 1;
  }
  if ( !v2 )
    sub_21FFECC(condString, method);
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_362/*"!="*/, 0)
    || System_String__Contains(v2, (System_String_o *)StringLiteral_1612/*"<>"*/, 0) )
  {
    v3 = (System_Func_int__int__bool__o *)sub_21FFEBC(System_Func_int__int__bool__TypeInfo);
    v4 = (intptr_t *)&Method_BattleUtility_IsNotEqual__;
  }
  else
  {
    v6 = System_String__Contains(v2, (System_String_o *)StringLiteral_1824/*"="*/, 0);
    if ( System_String__Contains(v2, (System_String_o *)StringLiteral_1830/*">"*/, 0) )
    {
      v7 = sub_21FFEBC(System_Func_int__int__bool__TypeInfo);
      v4 = (intptr_t *)&Method_BattleUtility_IsHigher__;
      v3 = (System_Func_int__int__bool__o *)v7;
      if ( v6 )
        v4 = (intptr_t *)&Method_BattleUtility_IsEqualOrHigher__;
    }
    else
    {
      v8 = System_String__Contains(v2, (System_String_o *)StringLiteral_1572/*"<"*/, 0);
      v9 = sub_21FFEBC(System_Func_int__int__bool__TypeInfo);
      v4 = (intptr_t *)&Method_BattleUtility_IsLower__;
      v3 = (System_Func_int__int__bool__o *)v9;
      if ( v6 )
        v4 = (intptr_t *)&Method_BattleUtility_IsEqualOrLower__;
      if ( !v8 )
        v4 = (intptr_t *)&Method_BattleUtility_IsEqual__;
    }
  }
  System_Func_int__int__bool____ctor(v3, 0, *v4, 0);
  return v3;
}


bool BattleUtility__Equal(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !condArray )
    sub_21FFECC(IsNullOrEmpty, v6);
  if ( !LODWORD(condArray->max_length) )
    sub_21FFED4(IsNullOrEmpty);
  return condArray->m_Items[0] == value;
}


int32_t BattleUtility__FloorToInt(float f, const MethodInfo *method)
{
  return BattleUtility__FloorToLong(f, method);
}


int32_t BattleUtility__FloorToInt_53467356(double d, const MethodInfo *method)
{
  __int64 v2; // x1
  int32_t v4; // w9

  if ( (byte_593B5BB & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593B5BB = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v4 = vcvtmd_s64_f64(d);
  if ( floor(d) == INFINITY )
    return 0x80000000;
  else
    return v4;
}


int64_t BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t v4; // x9

  if ( (byte_593B5BC & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593B5BC = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v4 = vcvtmd_s64_f64(f);
  if ( floor(f) == INFINITY )
    return 0x8000000000000000LL;
  else
    return v4;
}


Il2CppObject *BattleUtility__GetDataFromMessagePackString_object_(
        System_String_o *dataString,
        const MethodInfo_37E495C *method)
{
  ByteCompressor_o *v4; // x21
  ByteCompressor_o *v5; // x0
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&ByteCompressor_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54(method);
  }
  v4 = (ByteCompressor_o *)sub_21FFEBC(ByteCompressor_TypeInfo);
  ByteCompressor___ctor_45306684(v4, dataString, 0);
  if ( !v4 || (v5 = ByteCompressor__AsBase64StrToBytes(v4, 0)) == 0 || (v5 = ByteCompressor__AsGzipToBytes(v5, 0)) == 0 )
    sub_21FFECC(v5, v6);
  return ByteCompressor__UnpackMiniMessagePack_object_(
           v5,
           (const MethodInfo_37E8FDC *)method->rgctx_data->_0_ByteCompressor_UnpackMiniMessagePack_T_);
}


System_String_o *BattleUtility__GetStringFromMessagePackTargetData_object_(
        Il2CppObject *data,
        const MethodInfo_37E49E8 *method)
{
  ByteCompressor_o *v3; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
    sub_2237B54(method);
  v3 = ByteCompressor__ImportMiniMessagePack_object_(data, (const MethodInfo_37E8DEC *)method);
  if ( !v3 || (v3 = ByteCompressor__ToGzip(v3, 0)) == 0 || (v3 = ByteCompressor__ToBase64Str(v3, 0)) == 0 )
    sub_21FFECC(v3, v4);
  return v3->fields._Str_k__BackingField;
}


bool BattleUtility__IsEqual(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue == checkValue;
}


bool BattleUtility__IsEqualOrHigher(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue >= checkValue;
}


bool BattleUtility__IsEqualOrLower(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue <= checkValue;
}


bool BattleUtility__IsHigher(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue > checkValue;
}


bool BattleUtility__IsLower(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue < checkValue;
}


bool BattleUtility__IsNotEqual(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue != checkValue;
}


// local variable allocation has failed, the output may be wrong!
bool BattleUtility__IsSatisfyValueCond(
        int32_t type,
        System_Int32_array *condArray,
        int32_t value,
        const MethodInfo *method)
{
  bool v4; // w8
  bool v6; // w0

  v4 = 0;
  if ( type > 3 )
  {
    switch ( type )
    {
      case 4:
        v6 = BattleUtility__Between(condArray, value, *(const MethodInfo **)&value);
        break;
      case 5:
        return BattleUtility__Equal(condArray, value, *(const MethodInfo **)&value);
      case 6:
        v6 = BattleUtility__Equal(condArray, value, *(const MethodInfo **)&value);
        break;
      default:
        return v4;
    }
    return !v6;
  }
  if ( type == 1 )
    return BattleUtility__Above(condArray, value, *(const MethodInfo **)&value);
  if ( type != 2 )
  {
    if ( type == 3 )
      return BattleUtility__Between(condArray, value, *(const MethodInfo **)&value);
    return v4;
  }
  return BattleUtility__Below(condArray, value, *(const MethodInfo **)&value);
}


float BattleUtility__Lerp(float a, float b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  float v8; // s0

  if ( (byte_593B5B9 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593B5B9 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v8 = System_Math__Max_76940000(0.0, t, 0);
  return (float)((float)(b - a) * System_Math__Min_76940336(v8, 1.0, 0)) + a;
}


double BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  float v8; // s0

  if ( (byte_593B5BA & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593B5BA = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v8 = System_Math__Max_76940000(0.0, t, 0);
  return (b - a) * System_Math__Min_76940336(v8, 1.0, 0) + a;
}


int32_t BattleUtility__ParseConditionValue(System_String_o *condString, const MethodInfo *method)
{
  int v3; // w8
  System_String_o *v4; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593B5C3 & 1) == 0 )
  {
    sub_21FFC50(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_21FFC50(&StringLiteral_16558/*"[^0-9]"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B5C3 = 1;
  }
  v3 = *(&System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished + 1);
  result = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, method);
  v4 = System_Text_RegularExpressions_Regex__Replace(
         condString,
         (System_String_o *)StringLiteral_16558/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  System_Int32__TryParse(v4, &result, 0);
  return result;
}