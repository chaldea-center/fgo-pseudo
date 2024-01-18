void __fastcall DataVals___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188E2F & 1) == 0 )
  {
    sub_B2C35C(&DataVals_TypeInfo, v1);
    byte_4188E2F = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4188E0F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, str);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    byte_4188E0F = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v6,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v6;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  this->fields.funcIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)str,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
    sub_B2C434(Param, v7);
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
  if ( (byte_4188E16 & 1) == 0 )
  {
    sub_B2C35C(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_4188E16 = 1;
  }
  v4 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v11 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_44305532(v7, v8, 0LL);
}


System_Int32_array *__fastcall DataVals__GetAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *ValsList; // x20
  const MethodInfo *v5; // x2
  System_Int32_array *v6; // x1

  ValsList = DataVals__GetValsList(this, 37, v2);
  v6 = DataVals__GetValsList(this, 112, v5);
  return CommonFunction__JoinIndiv(ValsList, v6, 0LL);
}


System_Int32_array *__fastcall DataVals__GetAndCheckIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_4188E23 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188E23 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v10);
  if ( !result->max_length )
  {
    v11 = sub_B2C460(result);
    sub_B2C400(v11, 0LL);
  }
  result->m_Items[1] = v8;
  return result;
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

  return DataVals__GetParam(this, 129, 0, v2);
}


System_Int32_array *__fastcall DataVals__GetCopyTargetBuffTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 126, v2);
}


System_Int32_array *__fastcall DataVals__GetCopyTargetFunctionTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 120, v2);
}


DataVals_array *__fastcall DataVals__GetDependDataValsArray(
        DataVals_o *this,
        System_Collections_Generic_List_FuncList_TYPE__o *funcTypeList,
        bool isCheckNotFound,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  DataVals_array *result; // x0
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x20

  if ( (byte_4188E12 & 1) == 0 )
  {
    sub_B2C35C(&DataVals___TypeInfo, funcTypeList);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__FindAll__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__ToArray__, v7);
    sub_B2C35C(&Method_System_Predicate_DataVals___ctor__, v8);
    sub_B2C35C(&System_Predicate_DataVals__TypeInfo, v9);
    sub_B2C35C(&Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__, v10);
    sub_B2C35C(&DataVals___c__DisplayClass35_0_TypeInfo, v11);
    byte_4188E12 = 1;
  }
  v12 = sub_B2C42C(DataVals___c__DisplayClass35_0_TypeInfo);
  DataVals___c__DisplayClass35_0___ctor((DataVals___c__DisplayClass35_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 16) = funcTypeList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)funcTypeList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  result = (DataVals_array *)sub_B2C374(DataVals___TypeInfo, 0LL);
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return result;
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DataVals__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_DataVals___ctor__);
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)dependDataValsList,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
  if ( !All )
LABEL_8:
    sub_B2C434(All, v14);
  return (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_DataVals__ToArray__);
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v14; // x0
  struct DataVals___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__37_0; // x20
  Il2CppObject *v17; // x21
  struct DataVals___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  DataVals___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  struct DataVals___c_StaticFields *v28; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__37_1; // x20
  Il2CppObject *v30; // x21
  struct DataVals___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_4188E14 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_B2C35C(&Method_System_Func_DataVals__int___ctor__, v5);
    sub_B2C35C(&Method_System_Func_DataVals__bool___ctor__, v6);
    sub_B2C35C(&System_Func_DataVals__bool__TypeInfo, v7);
    sub_B2C35C(&System_Func_DataVals__int__TypeInfo, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&Method_DataVals___c__GetDependFuncIdArray_b__37_0__, v10);
    sub_B2C35C(&Method_DataVals___c__GetDependFuncIdArray_b__37_1__, v11);
    sub_B2C35C(&DataVals___c_TypeInfo, v12);
    byte_4188E14 = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  v14 = DataVals___c_TypeInfo;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v14 = DataVals___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_DataVals__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__37_0,
      v17,
      Method_DataVals___c__GetDependFuncIdArray_b__37_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_DataVals__bool___ctor__);
    v18 = DataVals___c_TypeInfo->static_fields;
    v18->__9__37_0 = (struct System_Func_DataVals__bool__o *)_9__37_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v18->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v26 = DataVals___c_TypeInfo;
  v27 = v25;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v26 = DataVals___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v28->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v28 = DataVals___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__37_1,
      v30,
      Method_DataVals___c__GetDependFuncIdArray_b__37_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_DataVals__int___ctor__);
    v31 = DataVals___c_TypeInfo->static_fields;
    v31->__9__37_1 = (struct System_Func_DataVals__int__o *)_9__37_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__37_1,
      (System_Int32_array **)_9__37_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v27,
                                                               (System_Func_TSource__TResult__o *)_9__37_1,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v38,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2);
}


System_Int32_array *__fastcall DataVals__GetFixDamageRates(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v7; // x3
  int32_t Param; // w19
  int32_t v9; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4188E2D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_B2C35C(&System_Math_TypeInfo, v5);
    byte_4188E2D = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v7);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_45012344(Param, 1, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 100,
                                                                 v9,
                                                                 (const MethodInfo_1A93C28 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v10,
             (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x22
  System_Xml_XmlQualifiedName_o *v8; // x21
  const MethodInfo *v9; // x3
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188E29 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v3);
    byte_4188E29 = 1;
  }
  vals = this->fields.vals;
  v11 = 51;
  v5 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11);
  if ( !v5
    || (v7 = v5,
        v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                v5,
                                                *(_QWORD *)(*(_QWORD *)v5 + 368LL)),
        v5 = j_il2cpp_object_unbox_0(v7),
        v11 = *(_DWORD *)v5,
        !vals) )
  {
    sub_B2C434(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
         v8,
         (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
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

  if ( (byte_4188E2E & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_IntervalData_TypeInfo, method);
    byte_4188E2E = 1;
  }
  if ( !DataVals__isParam(this, 131, v2) && !DataVals__isParam(this, 132, v4) )
    return 0LL;
  v5 = (BattleBuffData_IntervalData_o *)sub_B2C42C(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_23205104(v5, this, 0LL);
  return v5;
}


System_Int32_array *__fastcall DataVals__GetLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_4188E20 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188E20 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v10);
  if ( !result->max_length )
  {
    v11 = sub_B2C460(result);
    sub_B2C400(v11, 0LL);
  }
  result->m_Items[1] = v8;
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

  return DataVals__GetParam(this, 146, -1, v2);
}


System_Int32_array *__fastcall DataVals__GetNotSkillCopyTargetFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 127, v2);
}


System_Int32_array *__fastcall DataVals__GetNotSkillCopyTargetIndividualities(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 128, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam(DataVals_o *this, int32_t type, int32_t defaultValue, const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v10; // x22
  System_Xml_XmlQualifiedName_o *v11; // x21
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8
  unsigned int v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = type;
  if ( (byte_4188E17 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v7);
    byte_4188E17 = 1;
  }
  vals = (struct System_Collections_Generic_Dictionary_string__int__o *)j_il2cpp_value_box_0(
                                                                          DataVals_TYPE_TypeInfo,
                                                                          &v15);
  if ( !vals )
    goto LABEL_10;
  v10 = vals;
  v11 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_string__int__o *, Il2CppMethodPointer))vals->klass->vtable._3_ToString.method)(
                                           vals,
                                           vals->klass->vtable._4_unknown.methodPtr);
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
          v11,
          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_10:
    sub_B2C434(vals, v9);
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           vals,
           (System_String_o *)v11,
           (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  defaultValue = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return ((__int64 (__fastcall *)(struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, void *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.method)(
             this->fields._FuncParamValueUpInfo_k__BackingField,
             v15,
             Item,
             FuncParamValueUpInfo_k__BackingField->klass[1]._1.image);
  return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetParamArray(DataVals_o *this, int32_t paramType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o *StrParam; // x21
  const MethodInfo *v8; // x3
  int32_t Param; // w0
  int32_t v10; // w19
  System_Int32_array *result; // x0
  __int64 v12; // x1
  __int64 v13; // x0

  if ( (byte_4188E2A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4188E2A = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v8);
  if ( Param < 1 )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v12);
  if ( !result->max_length )
  {
    v13 = sub_B2C460(result);
    sub_B2C400(v13, 0LL);
  }
  result->m_Items[1] = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall DataVals__GetParamAsStringArray(
        DataVals_o *this,
        int32_t type,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *StrParam; // x20
  System_Char_array *v11; // x0
  System_Char_array *v12; // x1
  __int64 v13; // x0

  if ( (byte_4188E1F & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4188E1F = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v8);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return defaultValue;
  v11 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_10;
  v12 = v11;
  if ( !v11->max_length )
  {
    v13 = sub_B2C460(v11);
    sub_B2C400(v13, 0LL);
  }
  v11->m_Items[2] = 47;
  if ( !StrParam )
LABEL_10:
    sub_B2C434(v11, v12);
  return System_String__Split(StrParam, v11, 0LL);
}


System_Int32_array *__fastcall DataVals__GetSameBuffLimitTargetIndividuality(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_4188E21 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188E21 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v10);
  if ( !result->max_length )
  {
    v11 = sub_B2C460(result);
    sub_B2C400(v11, 0LL);
  }
  result->m_Items[1] = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__GetStrParam(
        DataVals_o *this,
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v10; // x22
  System_Type_o *v11; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = type;
  if ( (byte_4188E19 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v7);
    byte_4188E19 = 1;
  }
  v8 = (struct System_Collections_Generic_Dictionary_string__string__o *)j_il2cpp_value_box_0(
                                                                           DataVals_TYPE_TypeInfo,
                                                                           &v14);
  if ( !v8 )
    goto LABEL_9;
  v10 = v8;
  v11 = (System_Type_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_string__string__o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                           v8,
                           v8->klass->vtable._4_unknown.methodPtr);
  v14 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
  strVals = this->fields.strVals;
  if ( strVals
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
         (System_Xml_XmlQualifiedName_o *)v11,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v8 = this->fields.strVals;
    if ( v8 )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                                  v11,
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_9:
    sub_B2C434(v8, v9);
  }
  return defaultValue;
}


System_Int32_array *__fastcall DataVals__GetTargetList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_4188E1D & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188E1D = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v10);
  if ( !result->max_length )
  {
    v11 = sub_B2C460(result);
    sub_B2C400(v11, 0LL);
  }
  result->m_Items[1] = v8;
  return result;
}


System_Int32_array *__fastcall DataVals__GetTargetRarityList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_4188E22 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188E22 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v10);
  if ( !result->max_length )
  {
    v11 = sub_B2C460(result);
    sub_B2C400(v11, 0LL);
  }
  result->m_Items[1] = v8;
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

  Param = DataVals__GetParam(this, 133, 0, v3);
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
  if ( DataVals__TryGetParam(this, 136, &param, method) )
  {
    *isSameTargetOnly = 1;
    return param;
  }
  if ( DataVals__TryGetParam(this, 137, &param, v7) )
  {
    *isAllCond = 1;
    return param;
  }
  return DataVals__GetParam(this, 78, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetValsList(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o *StrParam; // x21
  const MethodInfo *v8; // x3
  int32_t Param; // w0
  int32_t v10; // w19
  System_Int32_array *result; // x0
  __int64 v12; // x1
  __int64 v13; // x0

  if ( (byte_4188E1E & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4188E1E = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v8);
  if ( !Param )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v12);
  if ( !result->max_length )
  {
    v13 = sub_B2C460(result);
    sub_B2C400(v13, 0LL);
  }
  result->m_Items[1] = v10;
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


bool __fastcall DataVals__IsActNoDamageBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 124, 0, v2) == 1;
}


bool __fastcall DataVals__IsAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_String_o *v10; // x0

  if ( (byte_4188E24 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188E24 = 1;
  }
  if ( DataVals__GetParam(this, 37, 0, v2) )
    return 1;
  StrParam = DataVals__GetStrParam(this, 37, (System_String_o *)StringLiteral_1/*""*/, v4);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) || DataVals__GetParam(this, 112, 0, v6) )
  {
    return 1;
  }
  else
  {
    v10 = DataVals__GetStrParam(this, 112, (System_String_o *)StringLiteral_1/*""*/, v7);
    return !System_String__IsNullOrEmpty(v10, 0LL);
  }
}


bool __fastcall DataVals__IsAddLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0

  if ( (byte_4188E25 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188E25 = 1;
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

  return DataVals__isParam(this, 143, v2);
}


bool __fastcall DataVals__IsChangeTDCommandType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 52, 0, v2) != 0;
}


bool __fastcall DataVals__IsCopyFunctionTargetPTOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 121, 0, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_4188E28 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_bool___, *(_QWORD *)&index);
    byte_4188E28 = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_1728860 *)Method_BasicHelper_IndexValue_bool___);
}


bool __fastcall DataVals__IsEndBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 35, 0, v2) != 0;
}


bool __fastcall DataVals__IsEvenIfWinDie(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 85, 0, v2) == 1;
}


bool __fastcall DataVals__IsForciblyAddState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 50, v2) || DataVals__isParam(this, 87, v4) || DataVals__isParam(this, 113, v5);
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

  return DataVals__GetParam(this, 141, 0, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsSatisfyAboveBelowCondition(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataVals___c__DisplayClass96_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Func_bool__int__bool__o *v14; // x21
  const MethodInfo *v15; // x4

  if ( (byte_4188E2B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool__int__bool___ctor__, *(_QWORD *)&paramType);
    sub_B2C35C(&System_Func_bool__int__bool__TypeInfo, v7);
    sub_B2C35C(&Method_DataVals___c__DisplayClass96_0__IsSatisfyAboveBelowCondition_b__0__, v8);
    sub_B2C35C(&DataVals___c__DisplayClass96_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1280/*"<"*/, v10);
    byte_4188E2B = 1;
  }
  v11 = (DataVals___c__DisplayClass96_0_o *)sub_B2C42C(DataVals___c__DisplayClass96_0_TypeInfo);
  DataVals___c__DisplayClass96_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.compareVal = compareVal;
  v14 = (System_Func_bool__int__bool__o *)sub_B2C42C(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_DataVals___c__DisplayClass96_0__IsSatisfyAboveBelowCondition_b__0__,
    (const MethodInfo_271A9E8 *)Method_System_Func_bool__int__bool___ctor__);
  return DataVals__IsSatisfyRangeCondition(this, paramType, (System_String_o *)StringLiteral_1280/*"<"*/, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        int32_t paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *StrParam; // x21
  __int64 IsMatch; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array *v25; // x22
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_o *v53; // x22
  int v54; // w8
  __int64 v55; // x21
  unsigned int v56; // w25
  System_String_o *v57; // x23
  System_String_o *v58; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4188E2C & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, *(_QWORD *)&paramType);
    sub_B2C35C(&Method_System_Func_bool__int__bool__Invoke__, v9);
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, v10);
    sub_B2C35C(&string___TypeInfo, v11);
    sub_B2C35C(&StringLiteral_633/*"(^"*/, v12);
    sub_B2C35C(&StringLiteral_15852/*"\\d+$|^\\d+"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_397/*"$)"*/, v15);
    byte_4188E2C = 1;
  }
  result = 0;
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return 1;
  IsMatch = sub_B2C374(string___TypeInfo, 5LL);
  if ( !IsMatch )
LABEL_44:
    sub_B2C434(IsMatch, v18);
  v25 = (System_String_array *)IsMatch;
  IsMatch = StringLiteral_633/*"(^"*/;
  if ( StringLiteral_633/*"(^"*/ )
  {
    IsMatch = sub_B2C41C(StringLiteral_633/*"(^"*/, v25->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
    v26 = (System_Int32_array **)StringLiteral_633/*"(^"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_45;
  v25->m_Items[0] = (System_String_o *)v26;
  sub_B2C2F8((BattleServantConfConponent_o *)v25->m_Items, v26, v19, v20, v21, v22, v23, v24);
  if ( compareKey )
  {
    IsMatch = sub_B2C41C(compareKey, v25->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_45;
  v25->m_Items[1] = compareKey;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v25->m_Items[1],
    (System_Int32_array **)compareKey,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  IsMatch = StringLiteral_15852/*"\\d+$|^\\d+"*/;
  if ( StringLiteral_15852/*"\\d+$|^\\d+"*/ )
  {
    IsMatch = sub_B2C41C(StringLiteral_15852/*"\\d+$|^\\d+"*/, v25->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
    v39 = (System_Int32_array **)StringLiteral_15852/*"\\d+$|^\\d+"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_45;
  v25->m_Items[2] = (System_String_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  if ( compareKey )
  {
    IsMatch = sub_B2C41C(compareKey, v25->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_45;
  v25->m_Items[3] = compareKey;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v25->m_Items[3],
    (System_Int32_array **)compareKey,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  IsMatch = StringLiteral_397/*"$)"*/;
  if ( !StringLiteral_397/*"$)"*/ )
  {
    v52 = 0LL;
    goto LABEL_25;
  }
  IsMatch = sub_B2C41C(StringLiteral_397/*"$)"*/, v25->obj.klass->_1.element_class);
  if ( !IsMatch )
  {
LABEL_46:
    v61 = sub_B2C454(IsMatch);
    sub_B2C400(v61, 0LL);
  }
  v52 = (System_Int32_array **)StringLiteral_397/*"$)"*/;
LABEL_25:
  if ( v25->max_length <= 4 )
    goto LABEL_45;
  v25->m_Items[4] = (System_String_o *)v52;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
  v53 = System_String__Concat_44385656(v25, 0LL);
  IsMatch = sub_B2C374(char___TypeInfo, 1LL);
  if ( !IsMatch )
    goto LABEL_44;
  v18 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
  {
LABEL_45:
    v60 = sub_B2C460(IsMatch);
    sub_B2C400(v60, 0LL);
  }
  *(_WORD *)(IsMatch + 32) = 47;
  if ( !StrParam )
    goto LABEL_44;
  IsMatch = (__int64)System_String__Split(StrParam, (System_Char_array *)IsMatch, 0LL);
  if ( !IsMatch )
    goto LABEL_44;
  v54 = *(_DWORD *)(IsMatch + 24);
  v55 = IsMatch;
  if ( v54 < 1 )
    return 1;
  v56 = 0;
  while ( 1 )
  {
    if ( v56 >= v54 )
      goto LABEL_45;
    v57 = *(System_String_o **)(v55 + 8LL * (int)v56 + 32);
    if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v57, v53, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v57 )
      goto LABEL_44;
    v58 = System_String__Replace_44312768(v57, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v58, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v57, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_44;
    IsMatch = System_Func_bool__int__bool___Invoke(
                funcCompare,
                IsMatch & 1,
                result,
                (const MethodInfo_271A9FC *)Method_System_Func_bool__int__bool__Invoke__);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v54 = *(_DWORD *)(v55 + 24);
    if ( (int)++v56 >= v54 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  System_Xml_XmlQualifiedName_o *v9; // x21
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = type;
  if ( (byte_4188E1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v4);
    byte_4188E1B = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v6 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v12);
    if ( !v6 )
      sub_B2C434(0LL, v7);
    v8 = v6;
    v9 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                                            v6,
                                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
    v12 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
    return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
             v9,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
    sub_B2C434(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void __fastcall DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  FunctionMaster_o *v5; // x27
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x0
  DataVals_c **v16; // x28
  System_String_o **v17; // x20
  System_String_o **v18; // x22
  int32_t v19; // w23
  int32_t i; // w24
  System_String_o *v21; // x0
  const MethodInfo *v22; // x5
  System_String_o *v23; // x26
  const MethodInfo *v24; // x3
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5
  System_String_o *v27; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v29; // x1
  DataVals_o *v30; // x24
  System_String_o **v31; // x21
  int32_t v32; // w22
  int32_t *v33; // x23
  System_String_o **v34; // x19
  DataVals_c **v35; // x20
  FunctionMaster_o *v36; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x27
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *v45; // x0
  DataVals_o *v46; // x26
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  DataVals_c *v50; // x0
  int32_t v51; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *p_dependDataValsList; // [xsp+10h] [xbp-60h]
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = funcMst;
  if ( (byte_4188E11 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, funcMst);
    sub_B2C35C(&DataVals_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_DataVals__TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v14);
    byte_4188E11 = 1;
  }
  result = 0;
  dependDataValsList = this->fields.dependDataValsList;
  p_dependDataValsList = (BattleServantConfConponent_o *)&this->fields.dependDataValsList;
  if ( dependDataValsList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)dependDataValsList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_DataVals__Clear__);
  v16 = &DataVals_TypeInfo;
  v17 = (System_String_o **)&StringLiteral_15634/*"["*/;
  v18 = (System_String_o **)&StringLiteral_1/*""*/;
  v19 = 0;
  for ( i = 1; ; ++i )
  {
    v50 = *v16;
    if ( (BYTE3((*v16)->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = *v16;
    }
    if ( i > v50->static_fields->MAX_DEPEND_FUNC )
      break;
    v21 = DataVals__ConcatenateTypeValue((DataVals_o *)v50, 44, i, method);
    v23 = DataVals__cutValue(this, v21, 0x5Bu, 0x5Du, 1, v22);
    v25 = DataVals__ConcatenateTypeValue((DataVals_o *)v23, 45, i, v24);
    v27 = DataVals__cutValue(this, v25, 0x5Bu, 0x5Du, 1, v26);
    if ( System_String__IsNullOrEmpty(v23, 0LL) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v27, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !p_dependDataValsList->klass )
    {
      v51 = i;
      v30 = this;
      v31 = v18;
      v32 = v19;
      v33 = funcIndex;
      v34 = v17;
      v35 = v16;
      v36 = v5;
      v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v37,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v38 = (System_Int32_array **)v37;
      p_dependDataValsList->klass = (BattleServantConfConponent_c *)v37;
      v5 = v36;
      v16 = v35;
      v17 = v34;
      funcIndex = v33;
      v19 = v32;
      v18 = v31;
      this = v30;
      i = v51;
      sub_B2C2F8(p_dependDataValsList, v38, v39, v40, v41, v42, v43, v44);
    }
    result = 0;
    if ( !v23 || (IsNullOrEmpty = System_String__Replace_44312768(v23, *v17, *v18, 0LL)) == 0LL )
LABEL_23:
      sub_B2C434(IsNullOrEmpty, v29);
    v45 = System_String__Replace_44312768(IsNullOrEmpty, (System_String_o *)StringLiteral_15870/*"]"*/, *v18, 0LL);
    if ( System_Int32__TryParse(v45, &result, 0LL) )
    {
      v46 = (DataVals_o *)sub_B2C42C(*v16);
      DataVals___ctor(v46, v27, v47);
      if ( !v5 )
        goto LABEL_23;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)v5,
                                           result,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v46 )
        goto LABEL_23;
      DataVals__SetType_27254588(v46, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v48);
      v46->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v19, v49);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_23;
      ++v19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DataVals__Add__);
      ++*funcIndex;
    }
  }
}


void __fastcall DataVals__SetDependOverChargeFlag(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals__o *dependDataList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  __int64 size; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  MethodInfo *v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_DataVals__o *v17; // x22
  struct System_Boolean_array *v18; // x21
  __int64 v19; // x23
  int v20; // w8
  __int64 v21; // x8
  __int64 v22; // x0

  if ( (byte_4188E27 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, dependDataList);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__get_Item__, v6);
    byte_4188E27 = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v9 = sub_B2C374(bool___TypeInfo, size);
        v17 = this->fields.dependDataValsList;
        if ( !v17 )
LABEL_17:
          sub_B2C434(v9, v10);
        v18 = (struct System_Boolean_array *)v9;
        v19 = 0LL;
        while ( 1 )
        {
          v20 = v17->fields._size;
          if ( (int)v19 >= v20 )
            break;
          if ( v20 <= (unsigned int)v19 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v21 = (__int64)v17->fields._items + 8 * v19;
          if ( dependDataList->fields._size <= (unsigned int)v19 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( *(_QWORD *)(v21 + 32) )
          {
            v9 = DataVals__CheckOverCharge(*(DataVals_o **)(v21 + 32), dependDataList->fields._items->m_Items[v19], v11);
            if ( v18 )
            {
              if ( (unsigned int)v19 >= v18->max_length )
              {
                v22 = sub_B2C460(v9);
                sub_B2C400(v22, 0LL);
              }
              v18->m_Items[v19 + 4] = v9 & 1;
              v17 = this->fields.dependDataValsList;
              ++v19;
              if ( v17 )
                continue;
            }
          }
          goto LABEL_17;
        }
        this->fields._dependOverChargeArray_k__BackingField = v18;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (System_Int32_array **)v18,
          (System_String_array **)v11,
          v12,
          v13,
          v14,
          v15,
          v16);
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
  sub_B2C2F8(p_svals, svals, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 svals; // x0
  System_String_o **v16; // x21
  Il2CppClass **v17; // x26
  System_String_o *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x20
  DataVals_TYPE_c **v21; // x24
  unsigned __int64 v22; // x27
  BattleServantConfConponent_o *p_strVals; // x25
  __int64 v24; // x28
  DataVals_TYPE_c *v25; // x0
  int32_t v26; // w8
  System_String_o *v27; // x22
  int32_t funcType; // w8
  System_String_o *v29; // x23
  __int64 v30; // x23
  __int64 v31; // x20
  DataVals_o *v32; // x28
  System_String_o **v33; // x19
  Il2CppClass **v34; // x21
  DataVals_TYPE_c **v35; // x26
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v36; // x24
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x23
  __int64 v45; // x0
  __int64 v46; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  v3 = ft;
  if ( (byte_4188E10 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, *(_QWORD *)&ft);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v10);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v14);
    byte_4188E10 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = (__int64)this->fields.svals;
  this->fields.funcType = v3;
  if ( !svals )
    goto LABEL_73;
  v16 = (System_String_o **)&StringLiteral_1/*""*/;
  svals = (__int64)System_String__Replace_44312768(
                     (System_String_o *)svals,
                     (System_String_o *)StringLiteral_15634/*"["*/,
                     (System_String_o *)StringLiteral_1/*""*/,
                     0LL);
  if ( !svals )
    goto LABEL_73;
  v17 = &char___TypeInfo;
  v18 = System_String__Replace_44312768(
          (System_String_o *)svals,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  svals = sub_B2C374(char___TypeInfo, 1LL);
  if ( !svals )
    goto LABEL_73;
  *(_QWORD *)&ft = svals;
  if ( !*(_DWORD *)(svals + 24) )
  {
LABEL_74:
    v45 = sub_B2C460(svals);
    sub_B2C400(v45, 0LL);
  }
  *(_WORD *)(svals + 32) = 44;
  if ( !v18 || (svals = (__int64)System_String__Split(v18, (System_Char_array *)svals, 0LL)) == 0 )
LABEL_73:
    sub_B2C434(svals, *(_QWORD *)&ft);
  v19 = *(_QWORD *)(svals + 24);
  v20 = svals;
  if ( (int)v19 >= 1 )
  {
    v21 = &DataVals_TYPE_TypeInfo;
    v22 = 0LL;
    p_strVals = (BattleServantConfConponent_o *)&this->fields.strVals;
    v24 = svals + 32;
    v46 = svals;
    do
    {
      if ( v22 >= (unsigned int)v19 )
        goto LABEL_74;
      v27 = *v16;
      svals = System_Int32__TryParse(*(System_String_o **)(v24 + 8 * v22), &result[1], 0LL);
      if ( (svals & 1) == 0 )
      {
        if ( v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_74;
        v29 = *(System_String_o **)(v24 + 8 * v22);
        svals = sub_B2C374(*v17, 1LL);
        if ( !svals )
          goto LABEL_73;
        *(_QWORD *)&ft = svals;
        if ( !*(_DWORD *)(svals + 24) )
          goto LABEL_74;
        *(_WORD *)(svals + 32) = 58;
        if ( !v29 )
          goto LABEL_73;
        svals = (__int64)System_String__Split(v29, (System_Char_array *)svals, 0LL);
        if ( !svals )
          goto LABEL_73;
        v30 = svals;
        if ( *(int *)(svals + 24) >= 2 )
        {
          v27 = *(System_String_o **)(svals + 32);
          if ( !System_Int32__TryParse(*(System_String_o **)(svals + 40), &result[1], 0LL) )
          {
            svals = (__int64)p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v31 = v24;
              v32 = this;
              v33 = v16;
              v34 = v17;
              v35 = v21;
              v36 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
                v36,
                (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              p_strVals->klass = (BattleServantConfConponent_c *)v36;
              v37 = (System_Int32_array **)v36;
              v21 = v35;
              v17 = v34;
              v16 = v33;
              this = v32;
              v24 = v31;
              v20 = v46;
              sub_B2C2F8(p_strVals, v37, v38, v39, v40, v41, v42, v43);
              svals = (__int64)p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_73;
            }
            svals = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)svals,
                      (System_Xml_XmlQualifiedName_o *)v27,
                      (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( (svals & 1) == 0 )
            {
              if ( *(_DWORD *)(v30 + 24) <= 1u )
                goto LABEL_74;
              svals = (__int64)p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_73;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)svals,
                (System_Xml_XmlQualifiedName_o *)v27,
                *(System_Xml_Schema_XmlSchemaObject_o **)(v30 + 40),
                (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
            switch ( (int)v22 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                v25 = *v21;
                result[0] = 1;
                goto LABEL_64;
              case 2:
                v25 = *v21;
                v26 = 2;
                goto LABEL_63;
              case 3:
                goto LABEL_61;
              case 4:
                v25 = *v21;
                v26 = 5;
                goto LABEL_63;
              case 5:
                goto LABEL_51;
              default:
                goto LABEL_66;
            }
          }
LABEL_56:
          if ( (_DWORD)v22 == 2 )
          {
LABEL_62:
            v25 = *v21;
            v26 = 6;
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
            switch ( (int)v22 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v25 = *v21;
                v26 = 76;
                goto LABEL_63;
              default:
                goto LABEL_66;
            }
          }
          if ( funcType == 121 )
          {
LABEL_54:
            switch ( (int)v22 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v25 = *v21;
                v26 = 7;
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
      if ( (_DWORD)v22 == 2 )
      {
LABEL_51:
        v25 = *v21;
        v26 = 4;
LABEL_63:
        result[0] = v26;
        goto LABEL_64;
      }
LABEL_57:
      if ( (_DWORD)v22 == 1 )
      {
LABEL_61:
        v25 = *v21;
        v26 = 3;
        goto LABEL_63;
      }
      if ( (_DWORD)v22 )
        goto LABEL_66;
LABEL_59:
      v25 = *v21;
      result[0] = 0;
LABEL_64:
      svals = j_il2cpp_value_box_0(v25, result);
      if ( !svals )
        goto LABEL_73;
      v44 = svals;
      v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                 svals,
                                 *(_QWORD *)(*(_QWORD *)svals + 368LL));
      result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v44);
LABEL_66:
      svals = System_String__op_Inequality(v27, *v16, 0LL);
      if ( (svals & 1) != 0 )
      {
        svals = (__int64)this->fields.vals;
        if ( !svals )
          goto LABEL_73;
        svals = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                  (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)svals,
                  (System_Xml_XmlQualifiedName_o *)v27,
                  (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( (svals & 1) == 0 )
        {
          svals = (__int64)this->fields.vals;
          if ( !svals )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)svals,
            (UIPanel_o *)v27,
            result[1],
            (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v19) = *(_DWORD *)(v20 + 24);
      ++v22;
    }
    while ( (__int64)v22 < (int)v19 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_27254588(
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
    sub_B2C434(this, 0LL);
  v6 = (BattleServantConfConponent_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.call_closeComp = (struct BattleWindowComponent_EndCall_o *)funcEnt;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 40);
  sub_B2C2F8(v6, (System_Int32_array **)funcEnt, v7, v8, v9, v10, v11, v12);
  HIDWORD(v6[-1].fields.classBoardSkillObj) = funcEnt->fields.targetType;
  *(_DWORD *)&v6[-1].fields.isOpenAfter = funcIndex;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x22
  UIPanel_o *v11; // x21
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = type;
  if ( (byte_4188E1C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, *(_QWORD *)&type);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v6);
    byte_4188E1C = 1;
  }
  vals = this->fields.vals;
  v8 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v13);
  if ( !v8
    || (v10 = v8,
        v11 = (UIPanel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL)),
        v8 = j_il2cpp_object_unbox_0(v10),
        v13 = *(_DWORD *)v8,
        !vals) )
  {
    sub_B2C434(v8, v9);
  }
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           v11,
           param,
           (const MethodInfo_2DAC018 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4188E18 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, name);
    byte_4188E18 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_B2C434(0LL, name);
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           (UIPanel_o *)name,
           value,
           (const MethodInfo_2DAC018 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v8; // x21

  if ( (byte_4188E26 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_DataVals_OverChargeState___, targetStateArray);
    sub_B2C35C(&Method_DataVals_IsOverChargeState__, v5);
    sub_B2C35C(&Method_System_Func_DataVals_OverChargeState__bool___ctor__, v6);
    sub_B2C35C(&System_Func_DataVals_OverChargeState__bool__TypeInfo, v7);
    byte_4188E26 = 1;
  }
  v8 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B2C42C(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_DataVals_IsOverChargeState__,
    (const MethodInfo_270E404 *)Method_System_Func_DataVals_OverChargeState__bool___ctor__);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                                 (ListViewSort_FilterCategoryKind_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v8,
                                                 (const MethodInfo_1726564 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
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
  __int64 v11; // x1
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v18; // w0
  int32_t v19; // w22
  int32_t v20; // w24
  int32_t v21; // w0
  int32_t v22; // w23
  System_String_o *v23; // x21
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int16 v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4188E13 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_699/*","*/, key);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4188E13 = 1;
  }
  v32 = 58;
  v12 = System_Char__ToString((uint16_t)&v32, 0LL);
  v13 = System_String__Concat_44307816((System_String_o *)StringLiteral_699/*","*/, key, v12, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v15 = svals;
  if ( !svals )
    goto LABEL_16;
  v18 = System_String__IndexOf_44377880(v15, v13, 0LL);
  if ( v18 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v19 = v18;
  v13 = *p_svals;
  if ( !*p_svals )
    goto LABEL_16;
  v13 = (System_String_o *)System_String__IndexOf_44377628(v13, startWord, v19, 0LL);
  if ( !*p_svals )
    goto LABEL_16;
  v20 = (int)v13;
  v21 = System_String__IndexOf_44377628(*p_svals, endWord, v19, 0LL);
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v22 = v21;
  if ( v21 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v13 = *p_svals;
  if ( !*p_svals )
    goto LABEL_16;
  v23 = System_String__Substring_44369268(v13, v20, 1 - v20 + v22, 0LL);
  if ( isDelKeyValue )
  {
    v13 = *p_svals;
    if ( *p_svals )
    {
      v13 = System_String__Substring_44369268(v13, v19, 1 - v19 + v22, 0LL);
      if ( *p_svals )
      {
        v24 = (System_Int32_array **)System_String__Replace_44312768(
                                       *p_svals,
                                       v13,
                                       (System_String_o *)StringLiteral_1/*""*/,
                                       0LL);
        *p_svals = (System_String_o *)v24;
        sub_B2C2F8((BattleServantConfConponent_o *)p_svals, v24, v25, v26, v27, v28, v29, v30);
        return v23;
      }
    }
LABEL_16:
    sub_B2C434(v13, v14);
  }
  return v23;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__isParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  System_Xml_XmlQualifiedName_o *v9; // x20
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = type;
  if ( (byte_4188E1A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v4);
    byte_4188E1A = 1;
  }
  vals = this->fields.vals;
  v6 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11);
  if ( !v6
    || (v8 = v6,
        v9 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                                                v6,
                                                *(_QWORD *)(*(_QWORD *)v6 + 368LL)),
        v6 = j_il2cpp_object_unbox_0(v8),
        v11 = *(_DWORD *)v6,
        !vals) )
  {
    sub_B2C434(v6, v7);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           v9,
           (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 svals; // x0
  System_String_o *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x20
  unsigned __int64 v13; // x26
  __int64 v14; // x27
  System_Xml_XmlQualifiedName_o *v15; // x21
  System_String_o *v16; // x22
  __int64 v17; // x22
  System_String_o *v18; // x23
  __int64 v19; // x22
  System_String_o *v20; // x23
  __int64 v21; // x0
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4188E15 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_B2C35C(&DataVals_TYPE_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v8);
    byte_4188E15 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = (__int64)this->fields.svals;
  if ( !svals )
    goto LABEL_30;
  svals = (__int64)System_String__Replace_44312768(
                     (System_String_o *)svals,
                     (System_String_o *)StringLiteral_15634/*"["*/,
                     (System_String_o *)StringLiteral_1/*""*/,
                     0LL);
  if ( !svals )
    goto LABEL_30;
  v10 = System_String__Replace_44312768(
          (System_String_o *)svals,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  svals = sub_B2C374(char___TypeInfo, 1LL);
  if ( !svals )
    goto LABEL_30;
  method = (const MethodInfo *)svals;
  if ( !*(_DWORD *)(svals + 24) )
    goto LABEL_31;
  *(_WORD *)(svals + 32) = 44;
  if ( !v10 || (svals = (__int64)System_String__Split(v10, (System_Char_array *)svals, 0LL)) == 0 )
LABEL_30:
    sub_B2C434(svals, method);
  v11 = *(_QWORD *)(svals + 24);
  v12 = svals;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    v14 = svals + 32;
    while ( v13 < (unsigned int)v11 )
    {
      v15 = (System_Xml_XmlQualifiedName_o *)StringLiteral_1/*""*/;
      svals = System_Int32__TryParse(*(System_String_o **)(v14 + 8 * v13), &result[1], 0LL);
      if ( (svals & 1) == 0 )
      {
        if ( v13 >= *(unsigned int *)(v12 + 24) )
          break;
        v16 = *(System_String_o **)(v14 + 8 * v13);
        svals = sub_B2C374(char___TypeInfo, 1LL);
        if ( !svals )
          goto LABEL_30;
        method = (const MethodInfo *)svals;
        if ( !*(_DWORD *)(svals + 24) )
          break;
        *(_WORD *)(svals + 32) = 58;
        if ( !v16 )
          goto LABEL_30;
        svals = (__int64)System_String__Split(v16, (System_Char_array *)svals, 0LL);
        if ( !svals )
          goto LABEL_30;
        if ( *(int *)(svals + 24) >= 2 )
        {
          v15 = *(System_Xml_XmlQualifiedName_o **)(svals + 32);
          System_Int32__TryParse(*(System_String_o **)(svals + 40), &result[1], 0LL);
        }
      }
      svals = (__int64)this->fields.vals;
      if ( !svals )
        goto LABEL_30;
      svals = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)svals,
                v15,
                (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( (svals & 1) == 0 )
      {
        result[0] = 16;
        svals = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result);
        if ( !svals )
          goto LABEL_30;
        v17 = svals;
        v18 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                   svals,
                                   *(_QWORD *)(*(_QWORD *)svals + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v17);
        if ( System_String__op_Equality(v18, (System_String_o *)v15, 0LL) )
          goto LABEL_26;
        result[0] = 17;
        svals = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result);
        if ( !svals )
          goto LABEL_30;
        v19 = svals;
        v20 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                   svals,
                                   *(_QWORD *)(*(_QWORD *)svals + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v19);
        svals = System_String__op_Equality(v20, (System_String_o *)v15, 0LL);
        if ( (svals & 1) != 0 )
        {
LABEL_26:
          svals = (__int64)this->fields.vals;
          if ( !svals )
            goto LABEL_30;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)svals,
            (UIPanel_o *)v15,
            result[1],
            (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v11) = *(_DWORD *)(v12 + 24);
      if ( (__int64)++v13 >= (int)v11 )
        return;
    }
LABEL_31:
    v21 = sub_B2C460(svals);
    sub_B2C400(v21, 0LL);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41864C3 & 1) == 0 )
  {
    sub_B2C35C(&DataVals___c_TypeInfo, v1);
    byte_41864C3 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(DataVals___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataVals___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__37_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_B2C434(this, x);
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
  if ( (byte_41864C4 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass35_0_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_FuncList_TYPE__Contains__,
                                                 x);
    byte_41864C4 = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass35_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           x->fields.funcType,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void __fastcall DataVals___c__DisplayClass96_0___ctor(DataVals___c__DisplayClass96_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass96_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass96_0_o *this,
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