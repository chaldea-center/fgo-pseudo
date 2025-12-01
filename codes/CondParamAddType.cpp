void CondParamAddType___ctor(CondParamAddType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t CondParamAddType__GetAddValue(
        DataVals_o *dataVals,
        int32_t kind,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  DataVals_o *v6; // x19
  System_Int32_array *ParamArray; // x0
  const MethodInfo *v8; // x3
  int64_t Num; // x0
  int64_t v10; // x19
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  v6 = dataVals;
  if ( (byte_4CC61B2 & 1) == 0 )
  {
    dataVals = (DataVals_o *)sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC61B2 = 1;
  }
  param = 0;
  if ( classStatisticsInfos )
  {
    if ( !v6 )
      sub_1C71608(dataVals, *(_QWORD *)&kind);
    ParamArray = DataVals__GetParamArray(v6, 223, 0);
    Num = CondParamAddType__GetNum(kind, classStatisticsInfos, ParamArray, v8);
    if ( Num < 1 )
    {
      LODWORD(classStatisticsInfos) = 0;
    }
    else
    {
      classStatisticsInfos = (ClassStatisticsInfo_array *)(Num * DataVals__GetParam(v6, 221, 0, 0));
      if ( DataVals__TryGetParam(v6, 222, &param, 0) )
      {
        v10 = param;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        LODWORD(classStatisticsInfos) = System_Math__Min_65553884((int64_t)classStatisticsInfos, v10, 0);
      }
    }
  }
  return (int)classStatisticsInfos;
}


// local variable allocation has failed, the output may be wrong!
int64_t CondParamAddType__GetNum(
        int32_t type,
        ClassStatisticsInfo_array *classStatisticsInfos,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  int32_t v6; // w21
  int64_t v7; // x22
  unsigned __int64 v8; // x26
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ClassStatisticsInfo_o *v16; // x1
  __int64 v17; // x24
  System_Predicate_int__o *v18; // x25

  v6 = type;
  if ( (byte_4CC61B4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Exists_int___);
    sub_1C713B0(&System_Predicate_int__TypeInfo);
    sub_1C713B0(&Method_CondParamAddType___c__DisplayClass2_0__GetNum_b__0__);
    *(_QWORD *)&type = sub_1C713B0(&CondParamAddType___c__DisplayClass2_0_TypeInfo);
    byte_4CC61B4 = 1;
  }
  if ( !classStatisticsInfos )
    goto LABEL_17;
  if ( SLODWORD(classStatisticsInfos->max_length) >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_1C715FC(CondParamAddType___c__DisplayClass2_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      if ( v8 >= LODWORD(classStatisticsInfos->max_length) )
        sub_1C71610(*(_QWORD *)&type);
      if ( !v9 )
        break;
      v16 = classStatisticsInfos->m_Items[v8];
      *(_QWORD *)(v9 + 16) = v16;
      v17 = v9 + 16;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      if ( !*(_QWORD *)(v9 + 16) )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 20LL) == v6 )
      {
        v18 = (System_Predicate_int__o *)sub_1C715FC(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(
          v18,
          (Il2CppObject *)v9,
          Method_CondParamAddType___c__DisplayClass2_0__GetNum_b__0__,
          0);
        *(_QWORD *)&type = System_Array__Exists_int_(
                             targetIds,
                             (System_Predicate_T__o *)v18,
                             (const MethodInfo_3250718 *)Method_System_Array_Exists_int___);
        if ( (type & 1) != 0 )
        {
          if ( !*(_QWORD *)v17 )
            break;
          v7 += *(_QWORD *)(*(_QWORD *)v17 + 24LL);
        }
      }
      if ( (__int64)++v8 >= SLODWORD(classStatisticsInfos->max_length) )
        return v7;
    }
LABEL_17:
    sub_1C71608(*(_QWORD *)&type, classStatisticsInfos);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondParamAddType__GetRangeRateValue(
        DataVals_o *dataVals,
        int32_t kind,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  DataVals_o *v6; // x19
  bool v7; // w8
  int32_t result; // w0
  System_Int32_array *ParamArray; // x0
  const MethodInfo *v10; // x3
  int64_t Num; // x0
  int64_t v12; // x20
  int64_t v13; // x21
  int64_t v14; // x0
  __int64 v15; // x20
  int32_t v16; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  v6 = dataVals;
  if ( (byte_4CC61B3 & 1) == 0 )
  {
    dataVals = (DataVals_o *)sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC61B3 = 1;
  }
  param = 0;
  if ( !classStatisticsInfos )
    return 0;
  if ( !v6 )
    sub_1C71608(dataVals, *(_QWORD *)&kind);
  v7 = DataVals__TryGetParam(v6, 225, &param, 0);
  result = 0;
  if ( v7 && param >= 1 )
  {
    ParamArray = DataVals__GetParamArray(v6, 227, 0);
    Num = CondParamAddType__GetNum(kind, classStatisticsInfos, ParamArray, v10);
    v12 = param;
    v13 = Num;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = System_Math__Min_65553884(v13, v12, 0);
    if ( v14 >= 1 )
    {
      v15 = v14;
      v16 = DataVals__GetParam(v6, 226, 0, 0);
      return BattleUtility__FloorToInt_46729020((double)v15 / (double)param * (double)v16, 0);
    }
    return 0;
  }
  return result;
}


void CondParamAddType___c__DisplayClass2_0___ctor(
        CondParamAddType___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondParamAddType___c__DisplayClass2_0___GetNum_b__0(
        CondParamAddType___c__DisplayClass2_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct ClassStatisticsInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C71608(this, id);
  return info->fields.classId == id;
}