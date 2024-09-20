bool __fastcall BattleUtility__Above(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5D98C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_First_int___);
    byte_4A5D98C = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2EA1384 *)Method_System_Linq_Enumerable_First_int___) <= value;
}


float __fastcall BattleUtility__Abs(float f, const MethodInfo *method)
{
  if ( (byte_4A5D98A & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D98A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t __fastcall BattleUtility__Abs_43026304(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5D98B & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D98B = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( value >= 0 )
    return value;
  else
    return -value;
}


bool __fastcall BattleUtility__Below(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5D98D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_First_int___);
    byte_4A5D98D = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2EA1384 *)Method_System_Linq_Enumerable_First_int___) >= value;
}


bool __fastcall BattleUtility__Between(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  if ( (byte_4A5D98E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_First_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Last_int___);
    byte_4A5D98E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !condArray )
    sub_1B8880C(IsNullOrEmpty, v6);
  return condArray->max_length == 2
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2EA1384 *)Method_System_Linq_Enumerable_First_int___) <= value
      && System_Linq_Enumerable__Last_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_2EA553C *)Method_System_Linq_Enumerable_Last_int___) >= value;
}


int32_t __fastcall BattleUtility__FloorToInt(float f, const MethodInfo *method)
{
  return BattleUtility__FloorToLong(f, method);
}


int32_t __fastcall BattleUtility__FloorToInt_43026096(double d, const MethodInfo *method)
{
  int32_t v3; // w9

  if ( (byte_4A5D988 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D988 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = vcvtmd_s64_f64(d);
  if ( floor(d) == INFINITY )
    return 0x80000000;
  else
    return v3;
}


int64_t __fastcall BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  int64_t v3; // x9

  if ( (byte_4A5D989 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D989 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = vcvtmd_s64_f64(f);
  if ( floor(f) == INFINITY )
    return 0x8000000000000000LL;
  else
    return v3;
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
  float v7; // s0

  if ( (byte_4A5D986 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D986 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_62525720(0.0, t, 0LL);
  return (float)((float)(b - a) * System_Math__Min_62526048(v7, 1.0, 0LL)) + a;
}


double __fastcall BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  float v7; // s0

  if ( (byte_4A5D987 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D987 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Max_62525720(0.0, t, 0LL);
  return (b - a) * System_Math__Min_62526048(v7, 1.0, 0LL) + a;
}