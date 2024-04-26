void __fastcall DataVals___cctor(const MethodInfo *method)
{
  if ( (byte_4354908 & 1) == 0 )
  {
    sub_B70694(&DataVals_TypeInfo);
    byte_4354908 = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_43548E7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_43548E7 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B70764(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v5,
    (const MethodInfo_2FAEE04 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v5;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  this->fields.funcIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)str,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


bool __fastcall DataVals__CheckAssertStrParam(
        DataVals_o *this,
        int32_t type,
        bool *existParamNum,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  bool result; // w0
  bool isParam; // w8

  *existParamNum = 0;
  if ( DataVals__IsStrParam(this, type, (const MethodInfo *)existParamNum) )
    return 1;
  isParam = DataVals__isParam(this, type, v7);
  result = 0;
  *existParamNum = isParam;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__CheckFunctionTriggerStar(DataVals_o *this, int32_t totalStar, const MethodInfo *method)
{
  int32_t FunctionTriggerStarNum; // w0

  FunctionTriggerStarNum = DataVals__GetFunctionTriggerStarNum(this, *(const MethodInfo **)&totalStar);
  return FunctionTriggerStarNum <= totalStar || FunctionTriggerStarNum < 0;
}


bool __fastcall DataVals__CheckOverCharge(DataVals_o *this, DataVals_o *baseVals, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 Param; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  int32_t v11; // w21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w21
  const MethodInfo *v24; // x3
  bool v25; // zf
  bool v26; // w21
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x4

  Param = DataVals__GetParam(this, 3, 0, v3);
  if ( !baseVals )
    sub_B7076C(Param, v7);
  if ( (_DWORD)Param != DataVals__GetParam(baseVals, 3, 0, v8)
    || (v11 = DataVals__GetParam(this, 4, 0, v9), v11 != DataVals__GetParam(baseVals, 4, 0, v12))
    || (v14 = DataVals__GetParam(this, 0, 0, v13), v14 != DataVals__GetParam(baseVals, 0, 0, v15))
    || (v17 = DataVals__GetParam(this, 7, 0, v16), v17 != DataVals__GetParam(baseVals, 7, 0, v18))
    || (v20 = DataVals__GetParam(this, 6, 0, v19), v20 != DataVals__GetParam(baseVals, 6, 0, v21))
    || (v23 = DataVals__GetParam(this, 2, 0, v22), v25 = v23 == DataVals__GetParam(baseVals, 2, 0, v24), v26 = 0, !v25) )
  {
    v26 = 1;
    DataVals__OnOverChargeState(this, baseVals, 3, 1, v10);
    DataVals__OnOverChargeState(this, baseVals, 4, 2, v27);
    DataVals__OnOverChargeState(this, baseVals, 0, 4, v28);
    DataVals__OnOverChargeState(this, baseVals, 7, 8, v29);
    DataVals__OnOverChargeState(this, baseVals, 6, 16, v30);
    DataVals__OnOverChargeState(this, baseVals, 2, 32, v31);
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__ConcatenateTypeValue(
        DataVals_o *this,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-18h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v10 = value;
  v11 = type;
  if ( (byte_43548EE & 1) == 0 )
  {
    sub_B70694(&DataVals_TYPE_TypeInfo);
    byte_43548EE = 1;
  }
  v4 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11, *(_QWORD *)&value);
  if ( !v4 )
    sub_B7076C(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v11 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_44758168(v7, v8, 0LL);
}


System_Int32_array *__fastcall DataVals__GetAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *ValsList; // x20
  const MethodInfo *v5; // x2
  System_Int32_array *v6; // x1

  ValsList = DataVals__GetValsList(this, 37, v2);
  v6 = DataVals__GetValsList(this, 111, v5);
  return CommonFunction__JoinIndiv(ValsList, v6, 0LL);
}


System_Int32_array *__fastcall DataVals__GetAndCheckIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1
  __int64 v10; // x0

  if ( (byte_43548FB & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548FB = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v9);
  if ( !result->max_length )
  {
    v10 = sub_B70798(result);
    sub_B70738(v10, 0LL);
  }
  result->m_Items[1] = v7;
  return result;
}


int32_t __fastcall DataVals__GetBgmPriority(DataVals_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4354907 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4354907 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 159, &param, v3) || DataVals__TryGetParam(this, 110, &param, v6) )
    return param;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v9);
  return BgmMaster__GetBgmPriority(Master_WarQuestSelectionMaster, bgmId, 0, 0LL);
}


int32_t __fastcall DataVals__GetCallSvtEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 86, 0, v2);
}


int32_t __fastcall DataVals__GetCardIndex(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  if ( DataVals__isParam(this, 66, v2) )
    return DataVals__GetParam(this, 66, 0, v4);
  else
    return -1;
}


int32_t __fastcall DataVals__GetCardIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  if ( DataVals__isParam(this, 67, v2) )
    return DataVals__GetParam(this, 67, 0, v4);
  else
    return -1;
}


int32_t __fastcall DataVals__GetClassIconAuraEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 128, 0, v2);
}


System_Int32_array *__fastcall DataVals__GetCopyTargetBuffTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 125, v2);
}


System_Int32_array *__fastcall DataVals__GetCopyTargetFunctionTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 119, v2);
}


DataVals_array *__fastcall DataVals__GetDependDataValsArray(
        DataVals_o *this,
        System_Collections_Generic_List_FuncList_TYPE__o *funcTypeList,
        bool isCheckNotFound,
        const MethodInfo *method)
{
  __int64 v6; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  DataVals_array *result; // x0
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_43548EA & 1) == 0 )
  {
    sub_B70694(&DataVals___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_B70694(&Method_System_Predicate_DataVals___ctor__);
    sub_B70694(&System_Predicate_DataVals__TypeInfo);
    sub_B70694(&Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__);
    sub_B70694(&DataVals___c__DisplayClass35_0_TypeInfo);
    byte_43548EA = 1;
  }
  v6 = sub_B70764(DataVals___c__DisplayClass35_0_TypeInfo);
  DataVals___c__DisplayClass35_0___ctor((DataVals___c__DisplayClass35_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 16) = funcTypeList;
  sub_B70630(
    (BattleServantConfConponent_o *)(v6 + 16),
    (System_Int32_array **)funcTypeList,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  result = (DataVals_array *)sub_B706AC(DataVals___TypeInfo, 0LL);
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return result;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_DataVals__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_DataVals___ctor__);
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)dependDataValsList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
  if ( !All )
LABEL_8:
    sub_B7076C(All, v8);
  return (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                             (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v4; // x0
  struct DataVals___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__37_0; // x20
  Il2CppObject *v7; // x21
  struct DataVals___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  DataVals___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  struct DataVals___c_StaticFields *v18; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__37_1; // x20
  Il2CppObject *v20; // x21
  struct DataVals___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_43548EC & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_B70694(&Method_System_Func_DataVals__int___ctor__);
    sub_B70694(&Method_System_Func_DataVals__bool___ctor__);
    sub_B70694(&System_Func_DataVals__bool__TypeInfo);
    sub_B70694(&System_Func_DataVals__int__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_DataVals___c__GetDependFuncIdArray_b__37_0__);
    sub_B70694(&Method_DataVals___c__GetDependFuncIdArray_b__37_1__);
    sub_B70694(&DataVals___c_TypeInfo);
    byte_43548EC = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  v4 = DataVals___c_TypeInfo;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v4 = DataVals___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_DataVals__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__37_0,
      v7,
      Method_DataVals___c__GetDependFuncIdArray_b__37_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_DataVals__bool___ctor__);
    v8 = DataVals___c_TypeInfo->static_fields;
    v8->__9__37_0 = (struct System_Func_DataVals__bool__o *)_9__37_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v16 = DataVals___c_TypeInfo;
  v17 = v15;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v16 = DataVals___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v18->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v18 = DataVals___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__37_1,
      v20,
      Method_DataVals___c__GetDependFuncIdArray_b__37_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_DataVals__int___ctor__);
    v21 = DataVals___c_TypeInfo->static_fields;
    v21->__9__37_1 = (struct System_Func_DataVals__int__o *)_9__37_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v21->__9__37_1,
      (System_Int32_array **)_9__37_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__37_1,
                                                               (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v28,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2);
}


int32_t __fastcall DataVals__GetFieldPriority(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  int32_t v5; // w1

  if ( DataVals__isParam(this, 162, v2) )
    v5 = 162;
  else
    v5 = 110;
  return DataVals__GetParam(this, v5, 0, v4);
}


System_Int32_array *__fastcall DataVals__GetFixDamageRates(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *result; // x0
  const MethodInfo *v5; // x3
  int32_t Param; // w19
  int32_t v7; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4354905 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&System_Math_TypeInfo);
    byte_4354905 = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v5);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = System_Math__Max_45601072(Param, 1, 0LL);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                100,
                                                                v7,
                                                                (const MethodInfo_1CC0270 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v8,
             (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x22
  System_Xml_XmlQualifiedName_o *v8; // x21
  const MethodInfo *v9; // x3
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4354901 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    byte_4354901 = 1;
  }
  vals = this->fields.vals;
  v11 = 51;
  v5 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11, v2);
  if ( !v5
    || (v7 = v5,
        v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                v5,
                                                *(_QWORD *)(*(_QWORD *)v5 + 368LL)),
        v5 = j_il2cpp_object_unbox_0(v7),
        v11 = *(_DWORD *)v5,
        !vals) )
  {
    sub_B7076C(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
         v8,
         (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v9);
  }
  else
  {
    return -1;
  }
}


BattleBuffData_IntervalData_o *__fastcall DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  BattleBuffData_IntervalData_o *v5; // x20

  if ( (byte_4354906 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_IntervalData_TypeInfo);
    byte_4354906 = 1;
  }
  if ( !DataVals__isParam(this, 130, v2) && !DataVals__isParam(this, 131, v4) )
    return 0LL;
  v5 = (BattleBuffData_IntervalData_o *)sub_B70764(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_24124640(v5, this, 0LL);
  return v5;
}


System_Int32_array *__fastcall DataVals__GetLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1
  __int64 v10; // x0

  if ( (byte_43548F8 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548F8 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v9);
  if ( !result->max_length )
  {
    v10 = sub_B70798(result);
    sub_B70738(v10, 0LL);
  }
  result->m_Items[1] = v7;
  return result;
}


int32_t __fastcall DataVals__GetMotionChange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 63, 0, v2);
}


int32_t __fastcall DataVals__GetNPFixedDamageValue(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 145, -1, v2);
}


System_Int32_array *__fastcall DataVals__GetNotSkillCopyTargetFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 126, v2);
}


System_Int32_array *__fastcall DataVals__GetNotSkillCopyTargetIndividualities(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 127, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam(DataVals_o *this, int32_t type, int32_t defaultValue, const MethodInfo *method)
{
  int32_t v4; // w19
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v8; // x22
  System_Xml_XmlQualifiedName_o *v9; // x21
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8
  unsigned int v13; // [xsp+Ch] [xbp-24h] BYREF

  v4 = defaultValue;
  v13 = type;
  if ( (byte_43548EF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    byte_43548EF = 1;
  }
  vals = (struct System_Collections_Generic_Dictionary_string__int__o *)j_il2cpp_value_box_0(
                                                                          DataVals_TYPE_TypeInfo,
                                                                          &v13,
                                                                          *(_QWORD *)&defaultValue);
  if ( !vals )
    goto LABEL_10;
  v8 = vals;
  v9 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_string__int__o *, Il2CppMethodPointer))vals->klass->vtable._3_ToString.method)(
                                          vals,
                                          vals->klass->vtable._4_unknown.methodPtr);
  v13 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
          v9,
          (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return v4;
  vals = this->fields.vals;
  if ( !vals )
LABEL_10:
    sub_B7076C(vals, v7);
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           vals,
           (System_String_o *)v9,
           (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  v4 = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return ((__int64 (__fastcall *)(struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, void *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.method)(
             this->fields._FuncParamValueUpInfo_k__BackingField,
             v13,
             Item,
             FuncParamValueUpInfo_k__BackingField->klass[1]._1.image);
  return v4;
}


System_Int32_array *__fastcall DataVals__GetParamArray(DataVals_o *this, int32_t paramType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *StrParam; // x21
  const MethodInfo *v7; // x3
  int32_t Param; // w0
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x0

  if ( (byte_4354902 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354902 = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v7);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v11);
  if ( !result->max_length )
  {
    v12 = sub_B70798(result);
    sub_B70738(v12, 0LL);
  }
  result->m_Items[1] = v9;
  return result;
}


System_String_array *__fastcall DataVals__GetParamAsStringArray(
        DataVals_o *this,
        int32_t type,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *StrParam; // x20
  System_Char_array *v10; // x0
  System_Char_array *v11; // x1
  __int64 v12; // x0

  if ( (byte_43548F7 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548F7 = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return defaultValue;
  v10 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_10;
  v11 = v10;
  if ( !v10->max_length )
  {
    v12 = sub_B70798(v10);
    sub_B70738(v12, 0LL);
  }
  v10->m_Items[2] = 47;
  if ( !StrParam )
LABEL_10:
    sub_B7076C(v10, v11);
  return System_String__Split(StrParam, v10, 0LL);
}


System_Int32_array *__fastcall DataVals__GetSameBuffLimitTargetIndividuality(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1
  __int64 v10; // x0

  if ( (byte_43548F9 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548F9 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v9);
  if ( !result->max_length )
  {
    v10 = sub_B70798(result);
    sub_B70738(v10, 0LL);
  }
  result->m_Items[1] = v7;
  return result;
}


System_String_o *__fastcall DataVals__GetStrParam(
        DataVals_o *this,
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  struct System_Collections_Generic_Dictionary_string__string__o *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v8; // x22
  System_Type_o *v9; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v4 = defaultValue;
  v12 = type;
  if ( (byte_43548F1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    byte_43548F1 = 1;
  }
  v6 = (struct System_Collections_Generic_Dictionary_string__string__o *)j_il2cpp_value_box_0(
                                                                           DataVals_TYPE_TypeInfo,
                                                                           &v12,
                                                                           defaultValue);
  if ( !v6 )
    goto LABEL_9;
  v8 = v6;
  v9 = (System_Type_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_string__string__o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                          v6,
                          v6->klass->vtable._4_unknown.methodPtr);
  v12 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  strVals = this->fields.strVals;
  if ( strVals
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
         (System_Xml_XmlQualifiedName_o *)v9,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v6 = this->fields.strVals;
    if ( v6 )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6,
                                  v9,
                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_9:
    sub_B7076C(v6, v7);
  }
  return v4;
}


System_Int32_array *__fastcall DataVals__GetTargetList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1
  __int64 v10; // x0

  if ( (byte_43548F5 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548F5 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v9);
  if ( !result->max_length )
  {
    v10 = sub_B70798(result);
    sub_B70738(v10, 0LL);
  }
  result->m_Items[1] = v7;
  return result;
}


System_Int32_array *__fastcall DataVals__GetTargetRarityList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1
  __int64 v10; // x0

  if ( (byte_43548FA & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548FA = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v9);
  if ( !result->max_length )
  {
    v10 = sub_B70798(result);
    sub_B70738(v10, 0LL);
  }
  result->m_Items[1] = v7;
  return result;
}


int32_t __fastcall DataVals__GetTriggeredFieldCountTargetFlag(
        DataVals_o *this,
        bool isActorEnemy,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Param; // w0
  bool v6; // zf
  int32_t result; // w0

  Param = DataVals__GetParam(this, 132, 0, v3);
  if ( Param )
  {
    if ( Param == 1 )
    {
      if ( isActorEnemy )
        return 1;
      else
        return 2;
    }
    else
    {
      v6 = Param == 2;
      result = 0;
      if ( v6 )
        return 3;
    }
  }
  else if ( isActorEnemy )
  {
    return 2;
  }
  else
  {
    return 1;
  }
  return result;
}


int32_t __fastcall DataVals__GetTriggeredFuncIndex(
        DataVals_o *this,
        bool *isSameTargetOnly,
        bool *isAllCond,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  *isSameTargetOnly = 0;
  *isAllCond = 0;
  if ( DataVals__TryGetParam(this, 135, &param, method) )
  {
    *isSameTargetOnly = 1;
    return param;
  }
  if ( DataVals__TryGetParam(this, 136, &param, v7) )
  {
    *isAllCond = 1;
    return param;
  }
  return DataVals__GetParam(this, 78, 0, v8);
}


System_Int32_array *__fastcall DataVals__GetValsList(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *StrParam; // x21
  const MethodInfo *v7; // x3
  int32_t Param; // w0
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x0

  if ( (byte_43548F6 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548F6 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v7);
  if ( !Param )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v11);
  if ( !result->max_length )
  {
    v12 = sub_B70798(result);
    sub_B70738(v12, 0LL);
  }
  result->m_Items[1] = v9;
  return result;
}


int32_t __fastcall DataVals__GetValue(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 3, 0, v2);
}


int32_t __fastcall DataVals__GetValue2(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 4, 0, v2);
}


bool __fastcall DataVals__HasBgmPriorityInVals(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 159, v2) || DataVals__isParam(this, 110, v4);
}


bool __fastcall DataVals__IsActAttackFunction(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 147, 0, v2) > 0;
}


bool __fastcall DataVals__IsActNoDamageBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 123, 0, v2) == 1;
}


bool __fastcall DataVals__IsAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_String_o *v10; // x0

  if ( (byte_43548FC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548FC = 1;
  }
  if ( DataVals__GetParam(this, 37, 0, v2) )
    return 1;
  StrParam = DataVals__GetStrParam(this, 37, (System_String_o *)StringLiteral_1/*""*/, v4);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) || DataVals__GetParam(this, 111, 0, v6) )
  {
    return 1;
  }
  else
  {
    v10 = DataVals__GetStrParam(this, 111, (System_String_o *)StringLiteral_1/*""*/, v7);
    return !System_String__IsNullOrEmpty(v10, 0LL);
  }
}


bool __fastcall DataVals__IsAddLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0

  if ( (byte_43548FD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548FD = 1;
  }
  if ( DataVals__GetParam(this, 38, 0, v2) )
  {
    return 1;
  }
  else
  {
    StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v4);
    return !System_String__IsNullOrEmpty(StrParam, 0LL);
  }
}


bool __fastcall DataVals__IsBehaveAsFamilyBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  return !DataVals__isParam(this, 97, v2) || DataVals__GetParam(this, 97, 0, v4) > 0;
}


bool __fastcall DataVals__IsCancelTransform(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 142, v2);
}


bool __fastcall DataVals__IsChangeTDCommandType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 52, 0, v2) != 0;
}


bool __fastcall DataVals__IsCopyFunctionTargetPTOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 120, 0, v2) == 1;
}


bool __fastcall DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_4354900 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_bool___);
    byte_4354900 = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_1BDEC3C *)Method_BasicHelper_IndexValue_bool___);
}


bool __fastcall DataVals__IsEndBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 35, 0, v2) != 0;
}


bool __fastcall DataVals__IsEqualsTo1(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, type, 0, v3) == 1;
}


bool __fastcall DataVals__IsEvenIfWinDie(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 85, 0, v2) == 1;
}


bool __fastcall DataVals__IsExistSnapShotParamAddIndv(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *ParamArray; // x19
  const MethodInfo *v5; // x2
  System_Int32_array *v6; // x20
  const MethodInfo *v7; // x2
  System_Int32_array *v8; // x0

  ParamArray = DataVals__GetParamArray(this, 151, v2);
  v6 = DataVals__GetParamArray(this, 152, v5);
  v8 = DataVals__GetParamArray(this, 153, v7);
  if ( ParamArray && *(_QWORD *)&ParamArray->max_length || v6 && *(_QWORD *)&v6->max_length )
  {
    LOBYTE(v8) = 1;
  }
  else if ( v8 )
  {
    LOBYTE(v8) = v8->max_length != 0;
  }
  return (char)v8;
}


bool __fastcall DataVals__IsForciblyAddState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 50, v2) || DataVals__isParam(this, 87, v4) || DataVals__isParam(this, 112, v5);
}


bool __fastcall DataVals__IsIgnoreShiftSafeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 146, 0, v2) == 1;
}


bool __fastcall DataVals__IsIncludeIgnoreIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 84, 0, v2) == 1;
}


bool __fastcall DataVals__IsLoseBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 36, 0, v2) != 0;
}


bool __fastcall DataVals__IsOnParty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 91, 0, v2) == 1;
}


bool __fastcall DataVals__IsOpponentOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 33, 0, v2) != 0;
}


bool __fastcall DataVals__IsOverChargeState(DataVals_o *this, int32_t state, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.overChargeState & state) < 0) ^ v3 | ((this->fields.overChargeState & state) == 0));
}


bool __fastcall DataVals__IsProgressTurnOnBoard(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 140, 0, v2) == 1;
}


bool __fastcall DataVals__IsSatisfyAboveBelowCondition(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        const MethodInfo *method)
{
  DataVals___c__DisplayClass97_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Func_bool__int__bool__o *v10; // x21
  const MethodInfo *v11; // x4

  if ( (byte_4354903 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool__int__bool___ctor__);
    sub_B70694(&System_Func_bool__int__bool__TypeInfo);
    sub_B70694(&Method_DataVals___c__DisplayClass97_0__IsSatisfyAboveBelowCondition_b__0__);
    sub_B70694(&DataVals___c__DisplayClass97_0_TypeInfo);
    sub_B70694(&StringLiteral_1305/*"<"*/);
    byte_4354903 = 1;
  }
  v7 = (DataVals___c__DisplayClass97_0_o *)sub_B70764(DataVals___c__DisplayClass97_0_TypeInfo);
  DataVals___c__DisplayClass97_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.compareVal = compareVal;
  v10 = (System_Func_bool__int__bool__o *)sub_B70764(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_DataVals___c__DisplayClass97_0__IsSatisfyAboveBelowCondition_b__0__,
    (const MethodInfo_29B535C *)Method_System_Func_bool__int__bool___ctor__);
  return DataVals__IsSatisfyRangeCondition(this, paramType, (System_String_o *)StringLiteral_1305/*"<"*/, v10, v11);
}


bool __fastcall DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        int32_t paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  System_String_o *StrParam; // x21
  __int64 IsMatch; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array *v18; // x22
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_o *v46; // x22
  int v47; // w8
  __int64 v48; // x21
  unsigned int v49; // w25
  System_String_o *v50; // x23
  System_String_o *v51; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4354904 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Func_bool__int__bool__Invoke__);
    sub_B70694(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_644/*"(^"*/);
    sub_B70694(&StringLiteral_16074/*"\\d+$|^\\d+"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_407/*"$)"*/);
    byte_4354904 = 1;
  }
  result = 0;
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return 1;
  IsMatch = sub_B706AC(string___TypeInfo, 5LL);
  if ( !IsMatch )
LABEL_44:
    sub_B7076C(IsMatch, v11);
  v18 = (System_String_array *)IsMatch;
  IsMatch = StringLiteral_644/*"(^"*/;
  if ( StringLiteral_644/*"(^"*/ )
  {
    IsMatch = sub_B70754(StringLiteral_644/*"(^"*/, v18->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
    v19 = (System_Int32_array **)StringLiteral_644/*"(^"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v18->max_length )
    goto LABEL_45;
  v18->m_Items[0] = (System_String_o *)v19;
  sub_B70630((BattleServantConfConponent_o *)v18->m_Items, v19, v12, v13, v14, v15, v16, v17);
  if ( compareKey )
  {
    IsMatch = sub_B70754(compareKey, v18->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_45;
  v18->m_Items[1] = compareKey;
  sub_B70630(
    (BattleServantConfConponent_o *)&v18->m_Items[1],
    (System_Int32_array **)compareKey,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  IsMatch = StringLiteral_16074/*"\\d+$|^\\d+"*/;
  if ( StringLiteral_16074/*"\\d+$|^\\d+"*/ )
  {
    IsMatch = sub_B70754(StringLiteral_16074/*"\\d+$|^\\d+"*/, v18->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
    v32 = (System_Int32_array **)StringLiteral_16074/*"\\d+$|^\\d+"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_45;
  v18->m_Items[2] = (System_String_o *)v32;
  sub_B70630((BattleServantConfConponent_o *)&v18->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  if ( compareKey )
  {
    IsMatch = sub_B70754(compareKey, v18->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
  }
  if ( v18->max_length <= 3 )
    goto LABEL_45;
  v18->m_Items[3] = compareKey;
  sub_B70630(
    (BattleServantConfConponent_o *)&v18->m_Items[3],
    (System_Int32_array **)compareKey,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  IsMatch = StringLiteral_407/*"$)"*/;
  if ( !StringLiteral_407/*"$)"*/ )
  {
    v45 = 0LL;
    goto LABEL_25;
  }
  IsMatch = sub_B70754(StringLiteral_407/*"$)"*/, v18->obj.klass->_1.element_class);
  if ( !IsMatch )
  {
LABEL_46:
    v54 = sub_B7078C(IsMatch);
    sub_B70738(v54, 0LL);
  }
  v45 = (System_Int32_array **)StringLiteral_407/*"$)"*/;
LABEL_25:
  if ( v18->max_length <= 4 )
    goto LABEL_45;
  v18->m_Items[4] = (System_String_o *)v45;
  sub_B70630((BattleServantConfConponent_o *)&v18->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v46 = System_String__Concat_44838292(v18, 0LL);
  IsMatch = sub_B706AC(char___TypeInfo, 1LL);
  if ( !IsMatch )
    goto LABEL_44;
  v11 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
  {
LABEL_45:
    v53 = sub_B70798(IsMatch);
    sub_B70738(v53, 0LL);
  }
  *(_WORD *)(IsMatch + 32) = 47;
  if ( !StrParam )
    goto LABEL_44;
  IsMatch = (__int64)System_String__Split(StrParam, (System_Char_array *)IsMatch, 0LL);
  if ( !IsMatch )
    goto LABEL_44;
  v47 = *(_DWORD *)(IsMatch + 24);
  v48 = IsMatch;
  if ( v47 < 1 )
    return 1;
  v49 = 0;
  while ( 1 )
  {
    if ( v49 >= v47 )
      goto LABEL_45;
    v50 = *(System_String_o **)(v48 + 8LL * (int)v49 + 32);
    if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v50, v46, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v50 )
      goto LABEL_44;
    v51 = System_String__Replace_44765404(v50, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v51, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v50, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_44;
    IsMatch = System_Func_bool__int__bool___Invoke(
                funcCompare,
                IsMatch & 1,
                result,
                (const MethodInfo_29B5370 *)Method_System_Func_bool__int__bool__Invoke__);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v47 = *(_DWORD *)(v48 + 24);
    if ( (int)++v49 >= v47 )
      return 1;
  }
}


bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  System_Xml_XmlQualifiedName_o *v8; // x21
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = type;
  if ( (byte_43548F3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    byte_43548F3 = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v5 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11, method);
    if ( !v5 )
      sub_B7076C(0LL, v6);
    v7 = v5;
    v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                            v5,
                                            *(_QWORD *)(*(_QWORD *)v5 + 368LL));
    v11 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
    return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
             v8,
             (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  }
  else
  {
    return 0;
  }
}


bool __fastcall DataVals__IsWinBattleNotRelatedSurvivalStatus(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 56, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__OnOverChargeState(
        DataVals_o *this,
        DataVals_o *compVals,
        int32_t type,
        int32_t state,
        const MethodInfo *method)
{
  __int64 Param; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  Param = DataVals__GetParam(this, type, 0, *(const MethodInfo **)&state);
  if ( !compVals )
    sub_B7076C(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void __fastcall DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x0
  DataVals_c **v8; // x28
  System_String_o **v9; // x20
  System_String_o **v10; // x22
  int32_t v11; // w23
  int32_t i; // w24
  System_String_o *v13; // x0
  const MethodInfo *v14; // x5
  System_String_o *v15; // x26
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  const MethodInfo *v18; // x5
  System_String_o *v19; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v21; // x1
  DataVals_o *v22; // x24
  System_String_o **v23; // x21
  int32_t v24; // w22
  int32_t *v25; // x23
  System_String_o **v26; // x19
  DataVals_c **v27; // x20
  FunctionMaster_o *v28; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x27
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *v37; // x0
  DataVals_o *v38; // x26
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  DataVals_c *v42; // x0
  int32_t v43; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *p_dependDataValsList; // [xsp+10h] [xbp-60h]
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_43548E9 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B70694(&DataVals_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_B70694(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_43548E9 = 1;
  }
  result = 0;
  dependDataValsList = this->fields.dependDataValsList;
  p_dependDataValsList = (BattleServantConfConponent_o *)&this->fields.dependDataValsList;
  if ( dependDataValsList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)dependDataValsList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_DataVals__Clear__);
  v8 = &DataVals_TypeInfo;
  v9 = (System_String_o **)&StringLiteral_15855/*"["*/;
  v10 = (System_String_o **)&StringLiteral_1/*""*/;
  v11 = 0;
  for ( i = 1; ; ++i )
  {
    v42 = *v8;
    if ( (BYTE3((*v8)->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = *v8;
    }
    if ( i > v42->static_fields->MAX_DEPEND_FUNC )
      break;
    v13 = DataVals__ConcatenateTypeValue((DataVals_o *)v42, 44, i, method);
    v15 = DataVals__cutValue(this, v13, 0x5Bu, 0x5Du, 1, v14);
    v17 = DataVals__ConcatenateTypeValue((DataVals_o *)v15, 45, i, v16);
    v19 = DataVals__cutValue(this, v17, 0x5Bu, 0x5Du, 1, v18);
    if ( System_String__IsNullOrEmpty(v15, 0LL) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v19, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !p_dependDataValsList->klass )
    {
      v43 = i;
      v22 = this;
      v23 = v10;
      v24 = v11;
      v25 = funcIndex;
      v26 = v9;
      v27 = v8;
      v28 = funcMst;
      v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v29,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v30 = (System_Int32_array **)v29;
      p_dependDataValsList->klass = (BattleServantConfConponent_c *)v29;
      funcMst = v28;
      v8 = v27;
      v9 = v26;
      funcIndex = v25;
      v11 = v24;
      v10 = v23;
      this = v22;
      i = v43;
      sub_B70630(p_dependDataValsList, v30, v31, v32, v33, v34, v35, v36);
    }
    result = 0;
    if ( !v15 || (IsNullOrEmpty = System_String__Replace_44765404(v15, *v9, *v10, 0LL)) == 0LL )
LABEL_23:
      sub_B7076C(IsNullOrEmpty, v21);
    v37 = System_String__Replace_44765404(IsNullOrEmpty, (System_String_o *)StringLiteral_16092/*"]"*/, *v10, 0LL);
    if ( System_Int32__TryParse(v37, &result, 0LL) )
    {
      v38 = (DataVals_o *)sub_B70764(*v8);
      DataVals___ctor(v38, v19, v39);
      if ( !funcMst )
        goto LABEL_23;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)funcMst,
                                           result,
                                           (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v38 )
        goto LABEL_23;
      DataVals__SetType_30445316(v38, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v40);
      v38->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v11, v41);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_23;
      ++v11;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_DataVals__Add__);
      ++*funcIndex;
    }
  }
}


void __fastcall DataVals__SetDependOverChargeFlag(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals__o *dependDataList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  __int64 size; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  MethodInfo *v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_DataVals__o *v15; // x22
  struct System_Boolean_array *v16; // x21
  __int64 v17; // x23
  int v18; // w8
  __int64 v19; // x8
  __int64 v20; // x0

  if ( (byte_43548FF & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__get_Item__);
    byte_43548FF = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v7 = sub_B706AC(bool___TypeInfo, size);
        v15 = this->fields.dependDataValsList;
        if ( !v15 )
LABEL_17:
          sub_B7076C(v7, v8);
        v16 = (struct System_Boolean_array *)v7;
        v17 = 0LL;
        while ( 1 )
        {
          v18 = v15->fields._size;
          if ( (int)v17 >= v18 )
            break;
          if ( v18 <= (unsigned int)v17 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v19 = (__int64)v15->fields._items + 8 * v17;
          if ( dependDataList->fields._size <= (unsigned int)v17 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( *(_QWORD *)(v19 + 32) )
          {
            v7 = DataVals__CheckOverCharge(*(DataVals_o **)(v19 + 32), dependDataList->fields._items->m_Items[v17], v9);
            if ( v16 )
            {
              if ( (unsigned int)v17 >= v16->max_length )
              {
                v20 = sub_B70798(v7);
                sub_B70738(v20, 0LL);
              }
              v16->m_Items[v17 + 4] = v7 & 1;
              v15 = this->fields.dependDataValsList;
              ++v17;
              if ( v15 )
                continue;
            }
          }
          goto LABEL_17;
        }
        this->fields._dependOverChargeArray_k__BackingField = v16;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (System_Int32_array **)v16,
          (System_String_array **)v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
    }
  }
}


void __fastcall DataVals__SetOverCharge(DataVals_o *this, bool flg, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = flg;
}


void __fastcall DataVals__SetTempType(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t ft,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_svals; // x21
  System_Int32_array **svals; // x22
  const MethodInfo *v8; // x2
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t funcIndex; // [xsp+Ch] [xbp-24h] BYREF

  funcIndex = 0;
  p_svals = (BattleServantConfConponent_o *)&this->fields.svals;
  svals = (System_Int32_array **)this->fields.svals;
  DataVals__SetDependDataVals(this, funcMst, &funcIndex, method);
  DataVals__SetType(this, ft, v8);
  p_svals->klass = (BattleServantConfConponent_c *)svals;
  sub_B70630(p_svals, svals, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 svals; // x0
  System_String_o **v6; // x21
  Il2CppClass **v7; // x26
  System_String_o *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x20
  DataVals_TYPE_c **v11; // x24
  unsigned __int64 v12; // x27
  BattleServantConfConponent_o *p_strVals; // x25
  __int64 v14; // x28
  DataVals_TYPE_c *v15; // x0
  int32_t v16; // w8
  System_String_o *v17; // x22
  __int64 v18; // x2
  int32_t funcType; // w8
  System_String_o *v20; // x23
  __int64 v21; // x23
  __int64 v22; // x20
  DataVals_o *v23; // x28
  System_String_o **v24; // x19
  Il2CppClass **v25; // x21
  DataVals_TYPE_c **v26; // x26
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v27; // x24
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x23
  __int64 v36; // x0
  __int64 v37; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  v3 = ft;
  if ( (byte_43548E8 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_43548E8 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = (__int64)this->fields.svals;
  this->fields.funcType = v3;
  if ( !svals )
    goto LABEL_73;
  v6 = (System_String_o **)&StringLiteral_1/*""*/;
  svals = (__int64)System_String__Replace_44765404(
                     (System_String_o *)svals,
                     (System_String_o *)StringLiteral_15855/*"["*/,
                     (System_String_o *)StringLiteral_1/*""*/,
                     0LL);
  if ( !svals )
    goto LABEL_73;
  v7 = &char___TypeInfo;
  v8 = System_String__Replace_44765404(
         (System_String_o *)svals,
         (System_String_o *)StringLiteral_16092/*"]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  svals = sub_B706AC(char___TypeInfo, 1LL);
  if ( !svals )
    goto LABEL_73;
  *(_QWORD *)&ft = svals;
  if ( !*(_DWORD *)(svals + 24) )
  {
LABEL_74:
    v36 = sub_B70798(svals);
    sub_B70738(v36, 0LL);
  }
  *(_WORD *)(svals + 32) = 44;
  if ( !v8 || (svals = (__int64)System_String__Split(v8, (System_Char_array *)svals, 0LL)) == 0 )
LABEL_73:
    sub_B7076C(svals, *(_QWORD *)&ft);
  v9 = *(_QWORD *)(svals + 24);
  v10 = svals;
  if ( (int)v9 >= 1 )
  {
    v11 = &DataVals_TYPE_TypeInfo;
    v12 = 0LL;
    p_strVals = (BattleServantConfConponent_o *)&this->fields.strVals;
    v14 = svals + 32;
    v37 = svals;
    do
    {
      if ( v12 >= (unsigned int)v9 )
        goto LABEL_74;
      v17 = *v6;
      svals = System_Int32__TryParse(*(System_String_o **)(v14 + 8 * v12), &result[1], 0LL);
      if ( (svals & 1) == 0 )
      {
        if ( v12 >= *(unsigned int *)(v10 + 24) )
          goto LABEL_74;
        v20 = *(System_String_o **)(v14 + 8 * v12);
        svals = sub_B706AC(*v7, 1LL);
        if ( !svals )
          goto LABEL_73;
        *(_QWORD *)&ft = svals;
        if ( !*(_DWORD *)(svals + 24) )
          goto LABEL_74;
        *(_WORD *)(svals + 32) = 58;
        if ( !v20 )
          goto LABEL_73;
        svals = (__int64)System_String__Split(v20, (System_Char_array *)svals, 0LL);
        if ( !svals )
          goto LABEL_73;
        v21 = svals;
        if ( *(int *)(svals + 24) >= 2 )
        {
          v17 = *(System_String_o **)(svals + 32);
          if ( !System_Int32__TryParse(*(System_String_o **)(svals + 40), &result[1], 0LL) )
          {
            svals = (__int64)p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v22 = v14;
              v23 = this;
              v24 = v6;
              v25 = v7;
              v26 = v11;
              v27 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
                v27,
                (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              p_strVals->klass = (BattleServantConfConponent_c *)v27;
              v28 = (System_Int32_array **)v27;
              v11 = v26;
              v7 = v25;
              v6 = v24;
              this = v23;
              v14 = v22;
              v10 = v37;
              sub_B70630(p_strVals, v28, v29, v30, v31, v32, v33, v34);
              svals = (__int64)p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_73;
            }
            svals = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)svals,
                      (System_Xml_XmlQualifiedName_o *)v17,
                      (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( (svals & 1) == 0 )
            {
              if ( *(_DWORD *)(v21 + 24) <= 1u )
                goto LABEL_74;
              svals = (__int64)p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_73;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)svals,
                (System_Xml_XmlQualifiedName_o *)v17,
                *(System_Xml_Schema_XmlSchemaObject_o **)(v21 + 40),
                (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
            }
          }
        }
        goto LABEL_66;
      }
      funcType = this->fields.funcType;
      if ( funcType <= 47 )
      {
        if ( funcType > 10 )
        {
          if ( ((1LL << funcType) & 0x800008048000LL) != 0 )
            goto LABEL_54;
          if ( funcType == 16LL )
          {
LABEL_49:
            switch ( (int)v12 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                v15 = *v11;
                result[0] = 1;
                goto LABEL_64;
              case 2:
                v15 = *v11;
                v16 = 2;
                goto LABEL_63;
              case 3:
                goto LABEL_61;
              case 4:
                v15 = *v11;
                v16 = 5;
                goto LABEL_63;
              case 5:
                goto LABEL_51;
              default:
                goto LABEL_66;
            }
          }
LABEL_56:
          if ( (_DWORD)v12 == 2 )
          {
LABEL_62:
            v15 = *v11;
            v16 = 6;
            goto LABEL_63;
          }
          goto LABEL_57;
        }
        if ( funcType == 1 )
          goto LABEL_49;
        if ( funcType != 2 && (unsigned int)(funcType - 9) > 1 )
          goto LABEL_56;
      }
      else if ( funcType <= 62 )
      {
        if ( funcType != 52 )
        {
          if ( funcType == 55 )
            goto LABEL_54;
          if ( funcType != 62 )
            goto LABEL_56;
        }
      }
      else
      {
        if ( funcType <= 129 )
        {
          if ( funcType == 109 )
          {
            switch ( (int)v12 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v15 = *v11;
                v16 = 76;
                goto LABEL_63;
              default:
                goto LABEL_66;
            }
          }
          if ( funcType == 121 )
          {
LABEL_54:
            switch ( (int)v12 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v15 = *v11;
                v16 = 7;
                goto LABEL_63;
              default:
                goto LABEL_66;
            }
          }
          goto LABEL_56;
        }
        if ( funcType != 133 && funcType != 131 )
        {
          if ( funcType == 130 )
            goto LABEL_49;
          goto LABEL_56;
        }
      }
      if ( (_DWORD)v12 == 2 )
      {
LABEL_51:
        v15 = *v11;
        v16 = 4;
LABEL_63:
        result[0] = v16;
        goto LABEL_64;
      }
LABEL_57:
      if ( (_DWORD)v12 == 1 )
      {
LABEL_61:
        v15 = *v11;
        v16 = 3;
        goto LABEL_63;
      }
      if ( (_DWORD)v12 )
        goto LABEL_66;
LABEL_59:
      v15 = *v11;
      result[0] = 0;
LABEL_64:
      svals = j_il2cpp_value_box_0(v15, result, v18);
      if ( !svals )
        goto LABEL_73;
      v35 = svals;
      v17 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                 svals,
                                 *(_QWORD *)(*(_QWORD *)svals + 368LL));
      result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v35);
LABEL_66:
      svals = System_String__op_Inequality(v17, *v6, 0LL);
      if ( (svals & 1) != 0 )
      {
        svals = (__int64)this->fields.vals;
        if ( !svals )
          goto LABEL_73;
        svals = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                  (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)svals,
                  (System_Xml_XmlQualifiedName_o *)v17,
                  (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( (svals & 1) == 0 )
        {
          svals = (__int64)this->fields.vals;
          if ( !svals )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)svals,
            (UIPanel_o *)v17,
            result[1],
            (const MethodInfo_2FAF9B8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v9) = *(_DWORD *)(v10 + 24);
      ++v12;
    }
    while ( (__int64)v12 < (int)v9 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_30445316(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( !funcEnt )
    sub_B7076C(this, 0LL);
  v6 = (BattleServantConfConponent_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.call_closeComp = (struct BattleWindowComponent_EndCall_o *)funcEnt;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 40);
  sub_B70630(v6, (System_Int32_array **)funcEnt, v7, v8, v9, v10, v11, v12);
  HIDWORD(v6[-1].fields.classBoardSkillObj) = funcEnt->fields.targetType;
  *(_DWORD *)&v6[-1].fields.isOpenAfter = funcIndex;
}


bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  UIPanel_o *v10; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = type;
  if ( (byte_43548F4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    byte_43548F4 = 1;
  }
  vals = this->fields.vals;
  v7 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v12, param);
  if ( !v7
    || (v9 = v7,
        v10 = (UIPanel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 360LL))(
                             v7,
                             *(_QWORD *)(*(_QWORD *)v7 + 368LL)),
        v7 = j_il2cpp_object_unbox_0(v9),
        v12 = *(_DWORD *)v7,
        !vals) )
  {
    sub_B7076C(v7, v8);
  }
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           v10,
           param,
           (const MethodInfo_2FB176C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_43548F0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_43548F0 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_B7076C(0LL, name);
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           (UIPanel_o *)name,
           value,
           (const MethodInfo_2FB176C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v5; // x21

  if ( (byte_43548FE & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_DataVals_OverChargeState___);
    sub_B70694(&Method_DataVals_IsOverChargeState__);
    sub_B70694(&Method_System_Func_DataVals_OverChargeState__bool___ctor__);
    sub_B70694(&System_Func_DataVals_OverChargeState__bool__TypeInfo);
    byte_43548FE = 1;
  }
  v5 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B70764(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_DataVals_IsOverChargeState__,
    (const MethodInfo_29A80E0 *)Method_System_Func_DataVals_OverChargeState__bool___ctor__);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                                 (ListViewSort_FilterCategoryKind_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v5,
                                                 (const MethodInfo_1BDC940 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
}


bool __fastcall DataVals__checkActSet(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 16, 0, v2) != 0;
}


System_String_o *__fastcall DataVals__cutValue(
        DataVals_o *this,
        System_String_o *key,
        uint16_t startWord,
        uint16_t endWord,
        bool isDelKeyValue,
        const MethodInfo *method)
{
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v17; // w0
  int32_t v18; // w22
  int32_t v19; // w24
  int32_t v20; // w0
  int32_t v21; // w23
  System_String_o *v22; // x21
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int16 v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43548EB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_712/*","*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43548EB = 1;
  }
  v31 = 58;
  v11 = System_Char__ToString((uint16_t)&v31, 0LL);
  v12 = System_String__Concat_44760452((System_String_o *)StringLiteral_712/*","*/, key, v11, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v14 = svals;
  if ( !svals )
    goto LABEL_16;
  v17 = System_String__IndexOf_44830516(v14, v12, 0LL);
  if ( v17 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v18 = v17;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_16;
  v12 = (System_String_o *)System_String__IndexOf_44830264(v12, startWord, v18, 0LL);
  if ( !*p_svals )
    goto LABEL_16;
  v19 = (int)v12;
  v20 = System_String__IndexOf_44830264(*p_svals, endWord, v18, 0LL);
  if ( v19 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v21 = v20;
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_16;
  v22 = System_String__Substring_44821904(v12, v19, 1 - v19 + v21, 0LL);
  if ( isDelKeyValue )
  {
    v12 = *p_svals;
    if ( *p_svals )
    {
      v12 = System_String__Substring_44821904(v12, v18, 1 - v18 + v21, 0LL);
      if ( *p_svals )
      {
        v23 = (System_Int32_array **)System_String__Replace_44765404(
                                       *p_svals,
                                       v12,
                                       (System_String_o *)StringLiteral_1/*""*/,
                                       0LL);
        *p_svals = (System_String_o *)v23;
        sub_B70630((BattleServantConfConponent_o *)p_svals, v23, v24, v25, v26, v27, v28, v29);
        return v22;
      }
    }
LABEL_16:
    sub_B7076C(v12, v13);
  }
  return v22;
}


int32_t __fastcall DataVals__getActSet(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 16, 0, v2);
}


int32_t __fastcall DataVals__getActSetWeight(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 17, 0, v2);
}


System_Collections_Generic_List_DataVals__o *__fastcall DataVals__get_DependDataValsList(
        DataVals_o *this,
        const MethodInfo *method)
{
  return this->fields.dependDataValsList;
}


FuncParamValueUpInfoBase_o *__fastcall DataVals__get_FuncParamValueUpInfo(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._FuncParamValueUpInfo_k__BackingField;
}


System_Boolean_array *__fastcall DataVals__get_dependOverChargeArray(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._dependOverChargeArray_k__BackingField;
}


bool __fastcall DataVals__get_isOverCharge(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._isOverCharge_k__BackingField;
}


bool __fastcall DataVals__isCheckDead(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  bool v5; // zf

  if ( DataVals__isParam(this, 19, v2) )
    v5 = DataVals__GetParam(this, 19, 0, v4) == 0;
  else
    v5 = !this->fields.defCheckDead;
  return !v5;
}


bool __fastcall DataVals__isCheckDuplicate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 41, 0, v2) > 0;
}


bool __fastcall DataVals__isCheckEnemyFieldSpace(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 77, 0, v2) == 1;
}


bool __fastcall DataVals__isEffectSummon(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 29, 0, v2) != 0;
}


bool __fastcall DataVals__isForcedEffectSpeedOne(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 75, 0, v2) != 0;
}


bool __fastcall DataVals__isHideMiss(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 10, 0, v2) == 1;
}


bool __fastcall DataVals__isHideNoEffect(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 12, 0, v2) == 1;
}


bool __fastcall DataVals__isLossHpChangeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 61, 0, v2) > 0;
}


bool __fastcall DataVals__isMultipleGainStar(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 73, 0, v2) > 0;
}


bool __fastcall DataVals__isParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x20
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = type;
  if ( (byte_43548F2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    byte_43548F2 = 1;
  }
  vals = this->fields.vals;
  v5 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v10, method);
  if ( !v5
    || (v7 = v5,
        v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                v5,
                                                *(_QWORD *)(*(_QWORD *)v5 + 368LL)),
        v5 = j_il2cpp_object_unbox_0(v7),
        v10 = *(_DWORD *)v5,
        !vals) )
  {
    sub_B7076C(v5, v6);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           v8,
           (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall DataVals__isParamAddIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *ParamArray; // x19
  const MethodInfo *v5; // x2
  System_Int32_array *v6; // x20
  const MethodInfo *v7; // x2
  System_Int32_array *v8; // x0

  ParamArray = DataVals__GetParamArray(this, 69, v2);
  v6 = DataVals__GetParamArray(this, 70, v5);
  v8 = DataVals__GetParamArray(this, 71, v7);
  if ( ParamArray && *(_QWORD *)&ParamArray->max_length || v6 && *(_QWORD *)&v6->max_length )
  {
    LOBYTE(v8) = 1;
  }
  else if ( v8 )
  {
    LOBYTE(v8) = v8->max_length != 0;
  }
  return (char)v8;
}


bool __fastcall DataVals__isRatioHpRange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  return DataVals__GetParam(this, 31, 0, v2) || DataVals__GetParam(this, 30, 0, v4) != 0;
}


bool __fastcall DataVals__isSameBuffLimit(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 40, 0, v2) > 0;
}


bool __fastcall DataVals__isShowCommand(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 28, 0, v2) != 0;
}


bool __fastcall DataVals__isShowQuestNoEffect(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 18, 0, v2) != 0;
}


bool __fastcall DataVals__isShowState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 14, 0, v2) != 0;
}


bool __fastcall DataVals__isUnaffected(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 13, 0, v2) == 1;
}


void __fastcall DataVals__loadActSet(DataVals_o *this, const MethodInfo *method)
{
  __int64 svals; // x0
  System_String_o *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x20
  unsigned __int64 v7; // x26
  __int64 v8; // x27
  System_Xml_XmlQualifiedName_o *v9; // x21
  System_String_o *v10; // x22
  __int64 v11; // x2
  __int64 v12; // x22
  System_String_o *v13; // x23
  __int64 v14; // x2
  __int64 v15; // x22
  System_String_o *v16; // x23
  __int64 v17; // x0
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43548ED & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&DataVals_TYPE_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_43548ED = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = (__int64)this->fields.svals;
  if ( !svals )
    goto LABEL_30;
  svals = (__int64)System_String__Replace_44765404(
                     (System_String_o *)svals,
                     (System_String_o *)StringLiteral_15855/*"["*/,
                     (System_String_o *)StringLiteral_1/*""*/,
                     0LL);
  if ( !svals )
    goto LABEL_30;
  v4 = System_String__Replace_44765404(
         (System_String_o *)svals,
         (System_String_o *)StringLiteral_16092/*"]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  svals = sub_B706AC(char___TypeInfo, 1LL);
  if ( !svals )
    goto LABEL_30;
  method = (const MethodInfo *)svals;
  if ( !*(_DWORD *)(svals + 24) )
    goto LABEL_31;
  *(_WORD *)(svals + 32) = 44;
  if ( !v4 || (svals = (__int64)System_String__Split(v4, (System_Char_array *)svals, 0LL)) == 0 )
LABEL_30:
    sub_B7076C(svals, method);
  v5 = *(_QWORD *)(svals + 24);
  v6 = svals;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = svals + 32;
    while ( v7 < (unsigned int)v5 )
    {
      v9 = (System_Xml_XmlQualifiedName_o *)StringLiteral_1/*""*/;
      svals = System_Int32__TryParse(*(System_String_o **)(v8 + 8 * v7), &result[1], 0LL);
      if ( (svals & 1) == 0 )
      {
        if ( v7 >= *(unsigned int *)(v6 + 24) )
          break;
        v10 = *(System_String_o **)(v8 + 8 * v7);
        svals = sub_B706AC(char___TypeInfo, 1LL);
        if ( !svals )
          goto LABEL_30;
        method = (const MethodInfo *)svals;
        if ( !*(_DWORD *)(svals + 24) )
          break;
        *(_WORD *)(svals + 32) = 58;
        if ( !v10 )
          goto LABEL_30;
        svals = (__int64)System_String__Split(v10, (System_Char_array *)svals, 0LL);
        if ( !svals )
          goto LABEL_30;
        if ( *(int *)(svals + 24) >= 2 )
        {
          v9 = *(System_Xml_XmlQualifiedName_o **)(svals + 32);
          System_Int32__TryParse(*(System_String_o **)(svals + 40), &result[1], 0LL);
        }
      }
      svals = (__int64)this->fields.vals;
      if ( !svals )
        goto LABEL_30;
      svals = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)svals,
                v9,
                (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( (svals & 1) == 0 )
      {
        result[0] = 16;
        svals = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result, v11);
        if ( !svals )
          goto LABEL_30;
        v12 = svals;
        v13 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                   svals,
                                   *(_QWORD *)(*(_QWORD *)svals + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
        if ( System_String__op_Equality(v13, (System_String_o *)v9, 0LL) )
          goto LABEL_26;
        result[0] = 17;
        svals = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result, v14);
        if ( !svals )
          goto LABEL_30;
        v15 = svals;
        v16 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                   svals,
                                   *(_QWORD *)(*(_QWORD *)svals + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v15);
        svals = System_String__op_Equality(v16, (System_String_o *)v9, 0LL);
        if ( (svals & 1) != 0 )
        {
LABEL_26:
          svals = (__int64)this->fields.vals;
          if ( !svals )
            goto LABEL_30;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)svals,
            (UIPanel_o *)v9,
            result[1],
            (const MethodInfo_2FAF9B8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v5) = *(_DWORD *)(v6 + 24);
      if ( (__int64)++v7 >= (int)v5 )
        return;
    }
LABEL_31:
    v17 = sub_B70798(svals);
    sub_B70738(v17, 0LL);
  }
}


void __fastcall DataVals__set_FuncParamValueUpInfo(
        DataVals_o *this,
        FuncParamValueUpInfoBase_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._FuncParamValueUpInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataVals__set_dependOverChargeArray(
        DataVals_o *this,
        System_Boolean_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._dependOverChargeArray_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._dependOverChargeArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataVals__set_isOverCharge(DataVals_o *this, bool value, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = value;
}


void __fastcall DataVals___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FB19 & 1) == 0 )
  {
    sub_B70694(&DataVals___c_TypeInfo);
    byte_434FB19 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(DataVals___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataVals___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall DataVals___c___ctor(DataVals___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c___GetDependFuncIdArray_b__37_0(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__37_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_B7076C(this, x);
  return funcEnt->fields.id;
}


void __fastcall DataVals___c__DisplayClass35_0___ctor(DataVals___c__DisplayClass35_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass35_0___GetDependDataValsArray_b__0(
        DataVals___c__DisplayClass35_0_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  DataVals___c__DisplayClass35_0_o *v4; // x20

  v4 = this;
  if ( (byte_434FB1A & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass35_0_o *)sub_B70694(&Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
    byte_434FB1A = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass35_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_B7076C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           x->fields.funcType,
           (const MethodInfo_30B9604 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void __fastcall DataVals___c__DisplayClass97_0___ctor(DataVals___c__DisplayClass97_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass97_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass97_0_o *this,
        bool isBelow,
        int32_t cond,
        const MethodInfo *method)
{
  int32_t compareVal; // w8
  bool v5; // cc
  bool v6; // w8
  bool v7; // w9

  compareVal = this->fields.compareVal;
  v5 = compareVal <= cond;
  v6 = compareVal >= cond;
  v7 = v5;
  if ( isBelow )
    return v7;
  else
    return v6;
}