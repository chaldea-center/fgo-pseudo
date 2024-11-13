// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleUtility__Above(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4B18A8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_int___, *(_QWORD *)&value, method);
    byte_4B18A8C = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2F328EC *)Method_System_Linq_Enumerable_First_int___) <= value;
}


float __fastcall BattleUtility__Abs(float f, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (byte_4B18A8A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v2, v3);
    byte_4B18A8A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  return fabsf(f);
}


int32_t __fastcall BattleUtility__Abs_43794764(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18A8B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B18A8B = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( value >= 0 )
    return value;
  else
    return -value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleUtility__Below(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4B18A8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_int___, *(_QWORD *)&value, method);
    byte_4B18A8D = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2F328EC *)Method_System_Linq_Enumerable_First_int___) >= value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleUtility__Between(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1

  if ( (byte_4B18A8E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_int___, *(_QWORD *)&value, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Last_int___, v5, v6);
    byte_4B18A8E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !condArray )
    sub_1BCAA3C(IsNullOrEmpty, v8);
  return condArray->max_length == 2
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2F328EC *)Method_System_Linq_Enumerable_First_int___) <= value
      && System_Linq_Enumerable__Last_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2F36AA4 *)Method_System_Linq_Enumerable_Last_int___) >= value;
}


int32_t __fastcall BattleUtility__FloorToInt(float f, const MethodInfo *method)
{
  return BattleUtility__FloorToLong(f, method);
}


int32_t __fastcall BattleUtility__FloorToInt_43794556(double d, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int32_t v5; // w9

  if ( (byte_4B18A88 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v2, v3);
    byte_4B18A88 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v5 = vcvtmd_s64_f64(d);
  if ( floor(d) == INFINITY )
    return 0x80000000;
  else
    return v5;
}


int64_t __fastcall BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  int64_t v5; // x9

  if ( (byte_4B18A89 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v2, v3);
    byte_4B18A89 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
  v5 = vcvtmd_s64_f64(f);
  if ( floor(f) == INFINITY )
    return 0x8000000000000000LL;
  else
    return v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleUtility__IsSatisfyValueCond(
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


float __fastcall BattleUtility__Lerp(float a, float b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  float v9; // s0

  if ( (byte_4B18A86 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B18A86 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v9 = System_Math__Max_63220236(0.0, t, 0LL);
  return (float)((float)(b - a) * System_Math__Min_63220564(v9, 1.0, 0LL)) + a;
}


double __fastcall BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  float v9; // s0

  if ( (byte_4B18A87 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B18A87 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v9 = System_Math__Max_63220236(0.0, t, 0LL);
  return (b - a) * System_Math__Min_63220564(v9, 1.0, 0LL) + a;
}