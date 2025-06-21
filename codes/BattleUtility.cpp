// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleUtility__Above(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4B1F186 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_First_int___, *(_QWORD *)&value);
    byte_4B1F186 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_303CF54 *)Method_System_Linq_Enumerable_First_int___) <= value;
}


float __fastcall BattleUtility__Abs(float f, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B1F184 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v2);
    byte_4B1F184 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return fabsf(f);
}


int32_t __fastcall BattleUtility__Abs_45439140(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B1F185 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, method);
    byte_4B1F185 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( value >= 0 )
    return value;
  else
    return -value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleUtility__Below(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  if ( (byte_4B1F187 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_First_int___, *(_QWORD *)&value);
    byte_4B1F187 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL)
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_303CF54 *)Method_System_Linq_Enumerable_First_int___) >= value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleUtility__Between(System_Int32_array *condArray, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1

  if ( (byte_4B1F188 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_First_int___, *(_QWORD *)&value);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Last_int___, v5);
    byte_4B1F188 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condArray, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !condArray )
    sub_1BCB254(IsNullOrEmpty, v7);
  return condArray->max_length == 2
      && System_Linq_Enumerable__First_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_303CF54 *)Method_System_Linq_Enumerable_First_int___) <= value
      && System_Linq_Enumerable__Last_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)condArray,
           (const MethodInfo_30414F0 *)Method_System_Linq_Enumerable_Last_int___) >= value;
}


int32_t __fastcall BattleUtility__FloorToInt(float f, const MethodInfo *method)
{
  return BattleUtility__FloorToLong(f, method);
}


int32_t __fastcall BattleUtility__FloorToInt_45438932(double d, const MethodInfo *method)
{
  __int64 v2; // x1
  int32_t v4; // w9

  if ( (byte_4B1F182 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v2);
    byte_4B1F182 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = vcvtmd_s64_f64(d);
  if ( floor(d) == INFINITY )
    return 0x80000000;
  else
    return v4;
}


int64_t __fastcall BattleUtility__FloorToLong(double f, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t v4; // x9

  if ( (byte_4B1F183 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v2);
    byte_4B1F183 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = vcvtmd_s64_f64(f);
  if ( floor(f) == INFINITY )
    return 0x8000000000000000LL;
  else
    return v4;
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
  float v8; // s0

  if ( (byte_4B1F180 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v4);
    byte_4B1F180 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_63972500(0.0, t, 0LL);
  return (float)((float)(b - a) * System_Math__Min_63972828(v8, 1.0, 0LL)) + a;
}


double __fastcall BattleUtility__LerpDouble(double a, double b, float t, const MethodInfo *method)
{
  __int64 v4; // x1
  float v8; // s0

  if ( (byte_4B1F181 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v4);
    byte_4B1F181 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_63972500(0.0, t, 0LL);
  return (b - a) * System_Math__Min_63972828(v8, 1.0, 0LL) + a;
}