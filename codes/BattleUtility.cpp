bool BattleUtility__Above(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4D2F6B5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_First_int___);
    byte_4D2F6B5 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_31C2930 *)Method_System_Linq_Enumerable_First_int___) <= value;
}


float BattleUtility__Abs(float f, const MethodInfo *method)
{
  if ( (byte_4D2F6B3 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2F6B3 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t BattleUtility__Abs_47235848(int32_t value, const MethodInfo *method)
{
  if ( (byte_4D2F6B4 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2F6B4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( value >= 0 )
    return value;
  else
    return -value;
}


bool BattleUtility__Below(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4D2F6B6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_First_int___);
    byte_4D2F6B6 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_31C2930 *)Method_System_Linq_Enumerable_First_int___) >= value;
}


bool BattleUtility__Between(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  if ( (byte_4D2F6B7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_First_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Last_int___);
    byte_4D2F6B7 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !condArray )
    sub_1C942F0(IsNullOrEmpty, v6);
  return LODWORD(condArray->max_length) == 2
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_31C2930 *)Method_System_Linq_Enumerable_First_int___) <= value
      && System_Linq_Enumerable__Last_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_31C6ECC *)Method_System_Linq_Enumerable_Last_int___) >= value;
}


System_Func_int__int__bool__o *BattleUtility__CheckValueSatisfiesCondition(
        System_String_o *condString,
        const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x0
  intptr_t *v4; // x8
  System_Func_int__int__bool__o *v5; // x19
  bool v6; // w20
  __int64 v7; // x0
  intptr_t *v8; // x9
  bool v9; // w21

  v2 = condString;
  if ( (byte_4D2F6B8 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleUtility_IsEqualOrHigher__);
    sub_1C94098(&Method_BattleUtility_IsEqualOrLower__);
    sub_1C94098(&Method_BattleUtility_IsEqual__);
    sub_1C94098(&Method_BattleUtility_IsHigher__);
    sub_1C94098(&Method_BattleUtility_IsLower__);
    sub_1C94098(&Method_BattleUtility_IsNotEqual__);
    sub_1C94098(&System_Func_int__int__bool__TypeInfo);
    sub_1C94098(&StringLiteral_1526/*"<>"*/);
    sub_1C94098(&StringLiteral_1737/*"="*/);
    sub_1C94098(&StringLiteral_1490/*"<"*/);
    sub_1C94098(&StringLiteral_1743/*">"*/);
    condString = (System_String_o *)sub_1C94098(&StringLiteral_339/*"!="*/);
    byte_4D2F6B8 = 1;
  }
  if ( !v2 )
    sub_1C942F0(condString, method);
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_339/*"!="*/, 0)
    || System_String__Contains(v2, (System_String_o *)StringLiteral_1526/*"<>"*/, 0) )
  {
    v3 = sub_1C942E4(System_Func_int__int__bool__TypeInfo);
    v4 = (intptr_t *)&Method_BattleUtility_IsNotEqual__;
    v5 = (System_Func_int__int__bool__o *)v3;
  }
  else
  {
    v6 = System_String__Contains(v2, (System_String_o *)StringLiteral_1737/*"="*/, 0);
    if ( System_String__Contains(v2, (System_String_o *)StringLiteral_1743/*">"*/, 0) )
    {
      v7 = sub_1C942E4(System_Func_int__int__bool__TypeInfo);
      v4 = (intptr_t *)&Method_BattleUtility_IsHigher__;
      v8 = (intptr_t *)&Method_BattleUtility_IsEqualOrHigher__;
      v5 = (System_Func_int__int__bool__o *)v7;
    }
    else
    {
      v9 = System_String__Contains(v2, (System_String_o *)StringLiteral_1490/*"<"*/, 0);
      v5 = (System_Func_int__int__bool__o *)sub_1C942E4(System_Func_int__int__bool__TypeInfo);
      if ( !v9 )
      {
        v4 = (intptr_t *)&Method_BattleUtility_IsEqual__;
        goto LABEL_15;
      }
      v4 = (intptr_t *)&Method_BattleUtility_IsLower__;
      v8 = (intptr_t *)&Method_BattleUtility_IsEqualOrLower__;
    }
    if ( v6 )
      v4 = v8;
  }
LABEL_15:
  System_Func_int__int__bool____ctor(v5, 0, *v4, 0);
  return v5;
}


int32_t BattleUtility__FloorToInt(float f, const MethodInfo *method)
{
  return BattleUtility__FloorToLong(f, method);
}


int32_t BattleUtility__FloorToInt_47235640(double d, const MethodInfo *method)
{
  int32_t v3; // w9

  if ( (byte_4D2F6B1 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2F6B1 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = vcvtmd_s64_f64(d);
  if ( floor(d) == INFINITY )
    return 0x80000000;
  else
    return v3;
}


int64_t BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  int64_t v3; // x9

  if ( (byte_4D2F6B2 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2F6B2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = vcvtmd_s64_f64(f);
  if ( floor(f) == INFINITY )
    return 0x8000000000000000LL;
  else
    return v3;
}


Il2CppObject *BattleUtility__GetDataFromMessagePackString_object_(
        System_String_o *dataString,
        const MethodInfo_318D5B4 *method)
{
  ByteCompressor_o *v4; // x21
  ByteCompressor_o *v5; // x0
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_1C94098(&ByteCompressor_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C6A188(method);
  }
  v4 = (ByteCompressor_o *)sub_1C942E4(ByteCompressor_TypeInfo);
  ByteCompressor___ctor_39159600(v4, dataString, 0);
  if ( !v4 || (v5 = ByteCompressor__AsBase64StrToBytes(v4, 0)) == 0 || (v5 = ByteCompressor__AsGzipToBytes(v5, 0)) == 0 )
    sub_1C942F0(v5, v6);
  return ByteCompressor__UnpackMiniMessagePack_object_(
           v5,
           (const MethodInfo_318E8C0 *)method->rgctx_data->_0_ByteCompressor_UnpackMiniMessagePack_T_);
}


System_String_o *BattleUtility__GetStringFromMessagePackTargetData_object_(
        Il2CppObject *data,
        const MethodInfo_318D640 *method)
{
  ByteCompressor_o *v3; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
    sub_1C6A188(method);
  v3 = ByteCompressor__ImportMiniMessagePack_object_(data, (const MethodInfo_318E6E0 *)method);
  if ( !v3 || (v3 = ByteCompressor__ToGzip(v3, 0)) == 0 || (v3 = ByteCompressor__ToBase64Str(v3, 0)) == 0 )
    sub_1C942F0(v3, v4);
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
  bool result; // w0
  bool v5; // w8

  switch ( type )
  {
    case 1:
      result = BattleUtility__Above(condArray, value, *(const MethodInfo **)&value);
      break;
    case 2:
      result = BattleUtility__Below(condArray, value, *(const MethodInfo **)&value);
      break;
    case 3:
      result = BattleUtility__Between(condArray, value, *(const MethodInfo **)&value);
      break;
    case 4:
      v5 = !BattleUtility__Between(condArray, value, *(const MethodInfo **)&value);
      goto LABEL_7;
    default:
      v5 = 0;
LABEL_7:
      result = v5;
      break;
  }
  return result;
}


float BattleUtility__Lerp(float a, float b, float t, const MethodInfo *method)
{
  float v7; // s0

  if ( (byte_4D2F6AF & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2F6AF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_65939604(0.0, t, 0);
  return (float)((float)(b - a) * System_Math__Min_65939932(v7, 1.0, 0)) + a;
}


double BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  float v7; // s0

  if ( (byte_4D2F6B0 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2F6B0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_65939604(0.0, t, 0);
  return (b - a) * System_Math__Min_65939932(v7, 1.0, 0) + a;
}


int32_t BattleUtility__ParseConditionValue(System_String_o *condString, const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2F6B9 & 1) == 0 )
  {
    sub_1C94098(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C94098(&StringLiteral_16013/*"[^0-9]"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F6B9 = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v3 = System_Text_RegularExpressions_Regex__Replace(
         condString,
         (System_String_o *)StringLiteral_16013/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  System_Int32__TryParse(v3, &result, 0);
  return result;
}