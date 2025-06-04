void __fastcall CondParamAddType___ctor(CondParamAddType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondParamAddType__GetAddValue(
        DataVals_o *dataVals,
        int32_t kind,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  DataVals_o *v6; // x19
  int32_t v7; // w0
  const MethodInfo *v8; // x3
  int64_t Num; // x0
  int64_t v10; // x19
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  v6 = dataVals;
  if ( (byte_4B00E4A & 1) == 0 )
  {
    dataVals = (DataVals_o *)sub_1BC3008(&System_Math_TypeInfo, *(_QWORD *)&kind);
    byte_4B00E4A = 1;
  }
  param = 0;
  if ( classStatisticsInfos )
  {
    if ( !v6 )
      sub_1BC3264(dataVals, *(_QWORD *)&kind);
    v7 = DataVals__GetParam(v6, 223, 0, 0LL);
    Num = CondParamAddType__GetNum(kind, classStatisticsInfos, v7, v8);
    if ( Num < 1 )
    {
      LODWORD(classStatisticsInfos) = 0;
    }
    else
    {
      classStatisticsInfos = (ClassStatisticsInfo_array *)(Num * DataVals__GetParam(v6, 221, 0, 0LL));
      if ( DataVals__TryGetParam(v6, 222, &param, 0LL) )
      {
        v10 = param;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        LODWORD(classStatisticsInfos) = System_Math__Min_63871024((int64_t)classStatisticsInfos, v10, 0LL);
      }
    }
  }
  return (int)classStatisticsInfos;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CondParamAddType__GetNum(
        int32_t type,
        ClassStatisticsInfo_array *classStatisticsInfos,
        int32_t targetId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  int v5; // w9
  ClassStatisticsInfo_o *v6; // x10

  if ( !classStatisticsInfos )
LABEL_11:
    sub_1BC3264(type, classStatisticsInfos);
  max_length = classStatisticsInfos->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BC326C(*(_QWORD *)&type, classStatisticsInfos, *(_QWORD *)&targetId);
    v6 = classStatisticsInfos->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.type == type && v6->fields.classId == targetId )
      return v6->fields.typeVal;
    if ( max_length == ++v5 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondParamAddType__GetRangeRateValue(
        DataVals_o *dataVals,
        int32_t kind,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  DataVals_o *v6; // x19
  bool v7; // w8
  int32_t result; // w0
  int32_t v9; // w0
  const MethodInfo *v10; // x3
  int64_t Num; // x0
  int64_t v12; // x20
  int64_t v13; // x21
  int64_t v14; // x0
  __int64 v15; // x20
  int32_t v16; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  v6 = dataVals;
  if ( (byte_4B00E4B & 1) == 0 )
  {
    dataVals = (DataVals_o *)sub_1BC3008(&System_Math_TypeInfo, *(_QWORD *)&kind);
    byte_4B00E4B = 1;
  }
  param = 0;
  if ( !classStatisticsInfos )
    return 0;
  if ( !v6 )
    sub_1BC3264(dataVals, *(_QWORD *)&kind);
  v7 = DataVals__TryGetParam(v6, 225, &param, 0LL);
  result = 0;
  if ( v7 && param >= 1 )
  {
    v9 = DataVals__GetParam(v6, 227, 0, 0LL);
    Num = CondParamAddType__GetNum(kind, classStatisticsInfos, v9, v10);
    v12 = param;
    v13 = Num;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = System_Math__Min_63871024(v13, v12, 0LL);
    if ( v14 >= 1 )
    {
      v15 = v14;
      v16 = DataVals__GetParam(v6, 226, 0, 0LL);
      return BattleUtility__FloorToInt_45256544((double)v15 / (double)param * (double)v16, 0LL);
    }
    return 0;
  }
  return result;
}