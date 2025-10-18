bool BattleUtility__Above(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4C45D2C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_First_int___);
    byte_4C45D2C = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_310E0E0 *)Method_System_Linq_Enumerable_First_int___) <= value;
}


float BattleUtility__Abs(float f, const MethodInfo *method)
{
  if ( (byte_4C45D2A & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C45D2A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t BattleUtility__Abs_46391544(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C45D2B & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C45D2B = 1;
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
  if ( (byte_4C45D2D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_First_int___);
    byte_4C45D2D = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_310E0E0 *)Method_System_Linq_Enumerable_First_int___) >= value;
}


bool BattleUtility__Between(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0

  if ( (byte_4C45D2E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_First_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Last_int___);
    byte_4C45D2E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !condArray )
    sub_1C372B4(IsNullOrEmpty);
  return LODWORD(condArray->max_length) == 2
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_310E0E0 *)Method_System_Linq_Enumerable_First_int___) <= value
      && System_Linq_Enumerable__Last_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_311267C *)Method_System_Linq_Enumerable_Last_int___) >= value;
}


int32_t BattleUtility__FloorToInt(float f, const MethodInfo *method)
{
  return BattleUtility__FloorToLong(f, method);
}


int32_t BattleUtility__FloorToInt_46391336(double d, const MethodInfo *method)
{
  int32_t v3; // w9

  if ( (byte_4C45D28 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C45D28 = 1;
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

  if ( (byte_4C45D29 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C45D29 = 1;
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
        const MethodInfo_30D91E0 *method)
{
  ByteCompressor_o *v4; // x21
  ByteCompressor_o *v5; // x0

  if ( !method->rgctx_data )
  {
    sub_1C37058(&ByteCompressor_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C877C8(method);
  }
  v4 = (ByteCompressor_o *)sub_1C372A4(ByteCompressor_TypeInfo);
  ByteCompressor___ctor_38431680(v4, dataString, 0);
  if ( !v4 || (v5 = ByteCompressor__AsBase64StrToBytes(v4, 0)) == 0 || (v5 = ByteCompressor__AsGzipToBytes(v5, 0)) == 0 )
    sub_1C372B4(v5);
  return ByteCompressor__UnpackMiniMessagePack_object_(
           v5,
           (const MethodInfo_30DA4EC *)method->rgctx_data->_0_ByteCompressor_UnpackMiniMessagePack_T_);
}


System_String_o *BattleUtility__GetStringFromMessagePackTargetData_object_(
        Il2CppObject *data,
        const MethodInfo_30D926C *method)
{
  ByteCompressor_o *v3; // x0

  if ( !method->rgctx_data )
    sub_1C877C8(method);
  v3 = ByteCompressor__ImportMiniMessagePack_object_(data, (const MethodInfo_30DA30C *)method);
  if ( !v3 || (v3 = ByteCompressor__ToGzip(v3, 0)) == 0 || (v3 = ByteCompressor__ToBase64Str(v3, 0)) == 0 )
    sub_1C372B4(v3);
  return v3->fields._Str_k__BackingField;
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

  if ( (byte_4C45D26 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C45D26 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_65085128(0.0, t, 0);
  return (float)((float)(b - a) * System_Math__Min_65085456(v7, 1.0, 0)) + a;
}


double BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  float v7; // s0

  if ( (byte_4C45D27 & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C45D27 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_65085128(0.0, t, 0);
  return (b - a) * System_Math__Min_65085456(v7, 1.0, 0) + a;
}