void __fastcall DataVals___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA434 & 1) == 0 )
  {
    sub_B16FFC(&DataVals_TypeInfo, v1);
    byte_40FA434 = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FA414 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, str);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7);
    byte_40FA414 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           str,
                                                                           method,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v8,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v8;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  this->fields.funcIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)str,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  int32_t Param; // w0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  int32_t v10; // w21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  int32_t v13; // w21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  int32_t v16; // w21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  int32_t v19; // w21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  int32_t v22; // w21
  const MethodInfo *v23; // x3
  bool v24; // zf
  bool v25; // w21
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x4

  Param = DataVals__GetParam(this, 3, 0, v3);
  if ( !baseVals )
    sub_B170D4();
  if ( Param != DataVals__GetParam(baseVals, 3, 0, v7)
    || (v10 = DataVals__GetParam(this, 4, 0, v8), v10 != DataVals__GetParam(baseVals, 4, 0, v11))
    || (v13 = DataVals__GetParam(this, 0, 0, v12), v13 != DataVals__GetParam(baseVals, 0, 0, v14))
    || (v16 = DataVals__GetParam(this, 7, 0, v15), v16 != DataVals__GetParam(baseVals, 7, 0, v17))
    || (v19 = DataVals__GetParam(this, 6, 0, v18), v19 != DataVals__GetParam(baseVals, 6, 0, v20))
    || (v22 = DataVals__GetParam(this, 2, 0, v21), v24 = v22 == DataVals__GetParam(baseVals, 2, 0, v23), v25 = 0, !v24) )
  {
    v25 = 1;
    DataVals__OnOverChargeState(this, baseVals, 3, 1, v9);
    DataVals__OnOverChargeState(this, baseVals, 4, 2, v26);
    DataVals__OnOverChargeState(this, baseVals, 0, 4, v27);
    DataVals__OnOverChargeState(this, baseVals, 7, 8, v28);
    DataVals__OnOverChargeState(this, baseVals, 6, 16, v29);
    DataVals__OnOverChargeState(this, baseVals, 2, 32, v30);
  }
  return v25;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__ConcatenateTypeValue(
        DataVals_o *this,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x19
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  int32_t v9; // [xsp+8h] [xbp-18h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v9 = value;
  v10 = type;
  if ( (byte_40FA41B & 1) == 0 )
  {
    sub_B16FFC(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_40FA41B = 1;
  }
  v4 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v10);
  if ( !v4 )
    sub_B170D4();
  v5 = v4;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v10 = *(_DWORD *)j_il2cpp_object_unbox_0(v5);
  v7 = System_Int32__ToString((int32_t)&v9, 0LL);
  return System_String__Concat_43743732(v6, v7, 0LL);
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
  __int64 v8; // x2
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_40FA428 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FA428 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v8);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v11, v12);
    sub_B170A0();
  }
  result->m_Items[1] = v9;
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


// local variable allocation has failed, the output may be wrong!
DataVals_array *__fastcall DataVals__GetDependDataValsArray(
        DataVals_o *this,
        System_Collections_Generic_List_FuncList_TYPE__o *funcTypeList,
        bool isCheckNotFound,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x2
  DataVals_array *result; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x20
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40FA417 & 1) == 0 )
  {
    sub_B16FFC(&DataVals___TypeInfo, funcTypeList);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__FindAll__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v8);
    sub_B16FFC(&Method_System_Predicate_DataVals___ctor__, v9);
    sub_B16FFC(&System_Predicate_DataVals__TypeInfo, v10);
    sub_B16FFC(&Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__, v11);
    sub_B16FFC(&DataVals___c__DisplayClass35_0_TypeInfo, v12);
    byte_40FA417 = 1;
  }
  v13 = sub_B170CC(DataVals___c__DisplayClass35_0_TypeInfo, funcTypeList, isCheckNotFound, method, v4);
  DataVals___c__DisplayClass35_0___ctor((DataVals___c__DisplayClass35_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = funcTypeList;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)funcTypeList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  result = (DataVals_array *)sub_B17014(DataVals___TypeInfo, 0LL, v20);
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return result;
  v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_DataVals__TypeInfo,
                                                                   v22,
                                                                   v23,
                                                                   v24,
                                                                   v25);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_DataVals___ctor__);
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)dependDataValsList,
          (System_Predicate_T__o *)v27,
          (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
  if ( !All )
LABEL_8:
    sub_B170D4();
  return (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v17; // x0
  struct DataVals___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__37_0; // x20
  Il2CppObject *v20; // x21
  struct DataVals___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  DataVals___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  struct DataVals___c_StaticFields *v35; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__37_1; // x20
  Il2CppObject *v37; // x21
  struct DataVals___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0

  if ( (byte_40FA419 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_DataVals___, v7);
    sub_B16FFC(&Method_System_Func_DataVals__int___ctor__, v8);
    sub_B16FFC(&Method_System_Func_DataVals__bool___ctor__, v9);
    sub_B16FFC(&System_Func_DataVals__bool__TypeInfo, v10);
    sub_B16FFC(&System_Func_DataVals__int__TypeInfo, v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&Method_DataVals___c__GetDependFuncIdArray_b__37_0__, v13);
    sub_B16FFC(&Method_DataVals___c__GetDependFuncIdArray_b__37_1__, v14);
    sub_B16FFC(&DataVals___c_TypeInfo, v15);
    byte_40FA419 = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  v17 = DataVals___c_TypeInfo;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v17 = DataVals___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_DataVals__bool__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__37_0,
      v20,
      Method_DataVals___c__GetDependFuncIdArray_b__37_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_DataVals__bool___ctor__);
    v21 = DataVals___c_TypeInfo->static_fields;
    v21->__9__37_0 = (struct System_Func_DataVals__bool__o *)_9__37_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v21->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v33 = DataVals___c_TypeInfo;
  v34 = v28;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v33 = DataVals___c_TypeInfo;
  }
  v35 = v33->static_fields;
  _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v35->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v35 = DataVals___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_DataVals__int__TypeInfo,
                                                                                 v29,
                                                                                 v30,
                                                                                 v31,
                                                                                 v32);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__37_1,
      v37,
      Method_DataVals___c__GetDependFuncIdArray_b__37_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_DataVals__int___ctor__);
    v38 = DataVals___c_TypeInfo->static_fields;
    v38->__9__37_1 = (struct System_Func_DataVals__int__o *)_9__37_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v38->__9__37_1,
      (System_Int32_array **)_9__37_1,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)_9__37_1,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v45,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_40FA432 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_B16FFC(&System_Math_TypeInfo, v5);
    byte_40FA432 = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v7);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_44463768(Param, 1, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 100,
                                                                 v9,
                                                                 (const MethodInfo_19BDCB0 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v10,
             (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v5; // x0
  __int64 v6; // x22
  System_Xml_XmlQualifiedName_o *v7; // x21
  const MethodInfo *v8; // x3
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA42E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v3);
    byte_40FA42E = 1;
  }
  vals = this->fields.vals;
  v10 = 51;
  v5 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v10);
  if ( !v5
    || (v6 = v5,
        v7 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                                v5,
                                                *(_QWORD *)(*(_QWORD *)v5 + 368LL)),
        v10 = *(_DWORD *)j_il2cpp_object_unbox_0(v6),
        !vals) )
  {
    sub_B170D4();
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
         v7,
         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v8);
  }
  else
  {
    return -1;
  }
}


BattleBuffData_IntervalData_o *__fastcall DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  BattleBuffData_IntervalData_o *v8; // x20

  if ( (byte_40FA433 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_IntervalData_TypeInfo, method);
    byte_40FA433 = 1;
  }
  if ( !DataVals__isParam(this, 131, v2) && !DataVals__isParam(this, 132, v5) )
    return 0LL;
  v8 = (BattleBuffData_IntervalData_o *)sub_B170CC(BattleBuffData_IntervalData_TypeInfo, v4, v5, v6, v7);
  BattleBuffData_IntervalData___ctor_22058112(v8, this, 0LL);
  return v8;
}


System_Int32_array *__fastcall DataVals__GetLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  __int64 v8; // x2
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_40FA425 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FA425 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v8);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v11, v12);
    sub_B170A0();
  }
  result->m_Items[1] = v9;
  return result;
}


int32_t __fastcall DataVals__GetMotionChange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 63, 0, v2);
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
  __int64 v8; // x0
  __int64 v9; // x22
  System_Xml_XmlQualifiedName_o *v10; // x21
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  System_Collections_Generic_Dictionary_string__int__o *v12; // x0
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8
  unsigned int v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = type;
  if ( (byte_40FA41C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v7);
    byte_40FA41C = 1;
  }
  v8 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v16);
  if ( !v8 )
    goto LABEL_10;
  v9 = v8;
  v10 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                                           v8,
                                           *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v9);
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
          v10,
          (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  v12 = this->fields.vals;
  if ( !v12 )
LABEL_10:
    sub_B170D4();
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           v12,
           (System_String_o *)v10,
           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  defaultValue = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return ((__int64 (__fastcall *)(struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, void *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.method)(
             this->fields._FuncParamValueUpInfo_k__BackingField,
             v16,
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
  __int64 v10; // x2
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_40FA42F & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FA42F = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v8);
  if ( Param < 1 )
    return 0LL;
  v11 = Param;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v10);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v13, v14);
    sub_B170A0();
  }
  result->m_Items[1] = v11;
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
  __int64 v10; // x2
  System_Char_array *v12; // x0
  __int64 v13; // x2

  if ( (byte_40FA424 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FA424 = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1, v8);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return defaultValue;
  v12 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v10);
  if ( !v12 )
    goto LABEL_10;
  if ( !v12->max_length )
  {
    sub_B17100(v12, v12, v13);
    sub_B170A0();
  }
  v12->m_Items[2] = 47;
  if ( !StrParam )
LABEL_10:
    sub_B170D4();
  return System_String__Split(StrParam, v12, 0LL);
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
  __int64 v8; // x2
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_40FA426 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FA426 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v8);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v11, v12);
    sub_B170A0();
  }
  result->m_Items[1] = v9;
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
  __int64 v8; // x0
  __int64 v9; // x22
  System_Type_o *v10; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = type;
  if ( (byte_40FA41E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v7);
    byte_40FA41E = 1;
  }
  v8 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v14);
  if ( !v8 )
    goto LABEL_9;
  v9 = v8;
  v10 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                           v8,
                           *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v14 = *(_DWORD *)j_il2cpp_object_unbox_0(v9);
  strVals = this->fields.strVals;
  if ( strVals
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
         (System_Xml_XmlQualifiedName_o *)v10,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v12 = this->fields.strVals;
    if ( v12 )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v12,
                                  v10,
                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_9:
    sub_B170D4();
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
  __int64 v8; // x2
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_40FA422 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FA422 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v8);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v11, v12);
    sub_B170A0();
  }
  result->m_Items[1] = v9;
  return result;
}


System_Int32_array *__fastcall DataVals__GetTargetRarityList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  __int64 v8; // x2
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_40FA427 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FA427 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v8);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v11, v12);
    sub_B170A0();
  }
  result->m_Items[1] = v9;
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
  __int64 v10; // x2
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_40FA423 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FA423 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v8);
  if ( !Param )
    return 0LL;
  v11 = Param;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v10);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v13, v14);
    sub_B170A0();
  }
  result->m_Items[1] = v11;
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

  if ( (byte_40FA429 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FA429 = 1;
  }
  if ( DataVals__GetParam(this, 37, 0, v2) )
    return 1;
  StrParam = DataVals__GetStrParam(this, 37, (System_String_o *)StringLiteral_1, v4);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) || DataVals__GetParam(this, 112, 0, v6) )
  {
    return 1;
  }
  else
  {
    v10 = DataVals__GetStrParam(this, 112, (System_String_o *)StringLiteral_1, v7);
    return !System_String__IsNullOrEmpty(v10, 0LL);
  }
}


bool __fastcall DataVals__IsAddLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0

  if ( (byte_40FA42A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FA42A = 1;
  }
  if ( DataVals__GetParam(this, 38, 0, v2) )
  {
    return 1;
  }
  else
  {
    StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1, v4);
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
  if ( (byte_40FA42D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_bool___, *(_QWORD *)&index);
    byte_40FA42D = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_18B80F8 *)Method_BasicHelper_IndexValue_bool___);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataVals___c__DisplayClass96_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Func_bool__int__bool__o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_40FA430 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool__int__bool___ctor__, *(_QWORD *)&paramType);
    sub_B16FFC(&System_Func_bool__int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_DataVals___c__DisplayClass96_0__IsSatisfyAboveBelowCondition_b__0__, v9);
    sub_B16FFC(&DataVals___c__DisplayClass96_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1278, v11);
    byte_40FA430 = 1;
  }
  v12 = (DataVals___c__DisplayClass96_0_o *)sub_B170CC(
                                              DataVals___c__DisplayClass96_0_TypeInfo,
                                              *(_QWORD *)&paramType,
                                              *(_QWORD *)&compareVal,
                                              method,
                                              v4);
  DataVals___c__DisplayClass96_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.compareVal = compareVal;
  v17 = (System_Func_bool__int__bool__o *)sub_B170CC(System_Func_bool__int__bool__TypeInfo, v13, v14, v15, v16);
  System_Func_bool__int__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_DataVals___c__DisplayClass96_0__IsSatisfyAboveBelowCondition_b__0__,
    (const MethodInfo_2B73924 *)Method_System_Func_bool__int__bool___ctor__);
  return DataVals__IsSatisfyRangeCondition(this, paramType, (System_String_o *)StringLiteral_1278, v17, v18);
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
  __int64 v17; // x2
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array *v25; // x22
  __int64 v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x22
  __int64 v49; // x2
  int v50; // w8
  __int64 v51; // x21
  unsigned int v52; // w25
  System_String_o *v53; // x23
  System_String_o *v54; // x0
  bool v55; // w0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FA431 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&paramType);
    sub_B16FFC(&Method_System_Func_bool__int__bool__Invoke__, v9);
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    sub_B16FFC(&StringLiteral_632, v12);
    sub_B16FFC(&StringLiteral_15789, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    sub_B16FFC(&StringLiteral_396, v15);
    byte_40FA431 = 1;
  }
  result = 0;
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1, (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return 1;
  v18 = sub_B17014(string___TypeInfo, 5LL, v17);
  if ( !v18 )
LABEL_44:
    sub_B170D4();
  v25 = (System_String_array *)v18;
  v26 = StringLiteral_632;
  if ( StringLiteral_632 )
  {
    v26 = sub_B170BC(StringLiteral_632, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_46;
    v27 = (System_Int32_array **)StringLiteral_632;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_45;
  v25->m_Items[0] = (System_String_o *)v27;
  sub_B16F98((BattleServantConfConponent_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  if ( compareKey )
  {
    v26 = sub_B170BC(compareKey, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_46;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_45;
  v25->m_Items[1] = compareKey;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v25->m_Items[1],
    (System_Int32_array **)compareKey,
    v19,
    v28,
    v29,
    v30,
    v31,
    v32);
  v26 = StringLiteral_15789;
  if ( StringLiteral_15789 )
  {
    v26 = sub_B170BC(StringLiteral_15789, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_46;
    v27 = (System_Int32_array **)StringLiteral_15789;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_45;
  v25->m_Items[2] = (System_String_o *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[2], v27, v19, v33, v34, v35, v36, v37);
  if ( compareKey )
  {
    v26 = sub_B170BC(compareKey, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_46;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_45;
  v25->m_Items[3] = compareKey;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v25->m_Items[3],
    (System_Int32_array **)compareKey,
    v19,
    v38,
    v39,
    v40,
    v41,
    v42);
  v26 = StringLiteral_396;
  if ( !StringLiteral_396 )
  {
    v27 = 0LL;
    goto LABEL_25;
  }
  v26 = sub_B170BC(StringLiteral_396, v25->obj.klass->_1.element_class);
  if ( !v26 )
  {
LABEL_46:
    sub_B170F4(v26);
    sub_B170A0();
  }
  v27 = (System_Int32_array **)StringLiteral_396;
LABEL_25:
  if ( v25->max_length <= 4 )
    goto LABEL_45;
  v25->m_Items[4] = (System_String_o *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[4], v27, v19, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_43823856(v25, 0LL);
  v26 = sub_B17014(char___TypeInfo, 1LL, v49);
  if ( !v26 )
    goto LABEL_44;
  v27 = (System_Int32_array **)v26;
  if ( !*(_DWORD *)(v26 + 24) )
  {
LABEL_45:
    sub_B17100(v26, v27, v19);
    sub_B170A0();
  }
  *(_WORD *)(v26 + 32) = 47;
  if ( !StrParam )
    goto LABEL_44;
  v26 = (__int64)System_String__Split(StrParam, (System_Char_array *)v26, 0LL);
  if ( !v26 )
    goto LABEL_44;
  v50 = *(_DWORD *)(v26 + 24);
  v51 = v26;
  if ( v50 < 1 )
    return 1;
  v52 = 0;
  while ( 1 )
  {
    if ( v52 >= v50 )
      goto LABEL_45;
    v53 = *(System_String_o **)(v51 + 8LL * (int)v52 + 32);
    if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    if ( !System_Text_RegularExpressions_Regex__IsMatch(v53, v48, 0LL) )
      return 0;
    if ( !v53 )
      goto LABEL_44;
    v54 = System_String__Replace_43750968(v53, compareKey, (System_String_o *)StringLiteral_1, 0LL);
    if ( !System_Int32__TryParse(v54, &result, 0LL) )
      return 0;
    v55 = System_String__StartsWith(v53, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_44;
    v26 = System_Func_bool__int__bool___Invoke(
            funcCompare,
            v55,
            result,
            (const MethodInfo_2B73938 *)Method_System_Func_bool__int__bool__Invoke__);
    if ( (v26 & 1) == 0 )
      return 0;
    v50 = *(_DWORD *)(v51 + 24);
    if ( (int)++v52 >= v50 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x19
  __int64 v6; // x0
  __int64 v7; // x20
  System_Xml_XmlQualifiedName_o *v8; // x21
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = type;
  if ( (byte_40FA420 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v4);
    byte_40FA420 = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v6 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11);
    if ( !v6 )
      sub_B170D4();
    v7 = v6;
    v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                                            v6,
                                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
    v11 = *(_DWORD *)j_il2cpp_object_unbox_0(v7);
    return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
             v8,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
  int32_t Param; // w0
  const MethodInfo *v10; // x3

  Param = DataVals__GetParam(this, type, 0, *(const MethodInfo **)&state);
  if ( !compVals )
    sub_B170D4();
  if ( Param != DataVals__GetParam(compVals, type, 0, v10) )
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  DataVals_o *v32; // x24
  System_String_o **v33; // x21
  int32_t v34; // w22
  int32_t *v35; // x23
  System_String_o **v36; // x19
  DataVals_c **v37; // x20
  FunctionMaster_o *v38; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x27
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x4
  DataVals_o *v52; // x26
  const MethodInfo *v53; // x2
  FunctionEntity_o *Entity; // x0
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x2
  struct System_Collections_Generic_List_DataVals__o *v57; // x0
  DataVals_c *v58; // x0
  int32_t v59; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *p_dependDataValsList; // [xsp+10h] [xbp-60h]
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = funcMst;
  if ( (byte_40FA416 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, funcMst);
    sub_B16FFC(&DataVals_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_DataVals__TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15571, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_15807, v14);
    byte_40FA416 = 1;
  }
  result = 0;
  dependDataValsList = this->fields.dependDataValsList;
  p_dependDataValsList = (BattleServantConfConponent_o *)&this->fields.dependDataValsList;
  if ( dependDataValsList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)dependDataValsList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_DataVals__Clear__);
  v16 = &DataVals_TypeInfo;
  v17 = (System_String_o **)&StringLiteral_15571;
  v18 = (System_String_o **)&StringLiteral_1;
  v19 = 0;
  for ( i = 1; ; ++i )
  {
    v58 = *v16;
    if ( (BYTE3((*v16)->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = *v16;
    }
    if ( i > v58->static_fields->MAX_DEPEND_FUNC )
      break;
    v21 = DataVals__ConcatenateTypeValue((DataVals_o *)v58, 44, i, method);
    v23 = DataVals__cutValue(this, v21, 0x5Bu, 0x5Du, 1, v22);
    v25 = DataVals__ConcatenateTypeValue((DataVals_o *)v23, 45, i, v24);
    v27 = DataVals__cutValue(this, v25, 0x5Bu, 0x5Du, 1, v26);
    if ( System_String__IsNullOrEmpty(v23, 0LL) || System_String__IsNullOrEmpty(v27, 0LL) )
      break;
    if ( !p_dependDataValsList->klass )
    {
      v59 = i;
      v32 = this;
      v33 = v18;
      v34 = v19;
      v35 = funcIndex;
      v36 = v17;
      v37 = v16;
      v38 = v5;
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_DataVals__TypeInfo, v28, v29, v30, v31);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v39,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v40 = (System_Int32_array **)v39;
      p_dependDataValsList->klass = (BattleServantConfConponent_c *)v39;
      v5 = v38;
      v16 = v37;
      v17 = v36;
      funcIndex = v35;
      v19 = v34;
      v18 = v33;
      this = v32;
      i = v59;
      sub_B16F98(p_dependDataValsList, v40, v41, v42, v43, v44, v45, v46);
    }
    result = 0;
    if ( !v23 || (v47 = System_String__Replace_43750968(v23, *v17, *v18, 0LL)) == 0LL )
LABEL_23:
      sub_B170D4();
    v48 = System_String__Replace_43750968(v47, (System_String_o *)StringLiteral_15807, *v18, 0LL);
    if ( System_Int32__TryParse(v48, &result, 0LL) )
    {
      v52 = (DataVals_o *)sub_B170CC(*v16, v49, v50, method, v51);
      DataVals___ctor(v52, v27, v53);
      if ( !v5 )
        goto LABEL_23;
      Entity = (FunctionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)v5,
                                     result,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v52 )
        goto LABEL_23;
      DataVals__SetType_25712276(v52, Entity, *funcIndex, v55);
      v52->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v19, v56);
      v57 = this->fields.dependDataValsList;
      if ( !v57 )
        goto LABEL_23;
      ++v19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DataVals__Add__);
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
  MethodInfo *v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_DataVals__o *v16; // x22
  struct System_Boolean_array *v17; // x21
  __int64 v18; // x23
  int v19; // w8
  __int64 v20; // x8
  _BOOL8 v21; // x0
  __int64 v22; // x1

  if ( (byte_40FA42C & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, dependDataList);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__get_Item__, v6);
    byte_40FA42C = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v9 = sub_B17014(bool___TypeInfo, size, method);
        v16 = this->fields.dependDataValsList;
        if ( !v16 )
LABEL_17:
          sub_B170D4();
        v17 = (struct System_Boolean_array *)v9;
        v18 = 0LL;
        while ( 1 )
        {
          v19 = v16->fields._size;
          if ( (int)v18 >= v19 )
            break;
          if ( v19 <= (unsigned int)v18 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v20 = (__int64)v16->fields._items + 8 * v18;
          if ( dependDataList->fields._size <= (unsigned int)v18 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( *(_QWORD *)(v20 + 32) )
          {
            v21 = DataVals__CheckOverCharge(
                    *(DataVals_o **)(v20 + 32),
                    dependDataList->fields._items->m_Items[v18],
                    v10);
            if ( v17 )
            {
              if ( (unsigned int)v18 >= v17->max_length )
              {
                sub_B17100(v21, v22, v10);
                sub_B170A0();
              }
              v17->m_Items[v18 + 4] = v21;
              v16 = this->fields.dependDataValsList;
              ++v18;
              if ( v16 )
                continue;
            }
          }
          goto LABEL_17;
        }
        this->fields._dependOverChargeArray_k__BackingField = v17;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (System_Int32_array **)v17,
          (System_String_array **)v10,
          v11,
          v12,
          v13,
          v14,
          v15);
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
  sub_B16F98(p_svals, svals, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
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
  System_String_o *svals; // x0
  System_String_o **v16; // x21
  System_String_o *v17; // x0
  Il2CppClass **v18; // x26
  System_String_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x2
  System_String_array *v23; // x1
  __int64 v24; // x8
  System_String_array *v25; // x20
  DataVals_TYPE_c **v26; // x24
  unsigned __int64 v27; // x27
  BattleServantConfConponent_o *p_strVals; // x25
  System_String_o **v29; // x28
  DataVals_TYPE_c *v30; // x0
  int32_t v31; // w8
  System_String_o *v32; // x22
  int32_t funcType; // w8
  System_String_o *v34; // x23
  System_String_array *v35; // x0
  System_String_array *v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *klass; // x0
  System_String_o **v42; // x20
  DataVals_o *v43; // x28
  System_String_o **v44; // x19
  Il2CppClass **v45; // x21
  DataVals_TYPE_c **v46; // x26
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v47; // x24
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0
  __int64 v56; // x23
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v58; // x0
  System_String_array *v59; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA415 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&ft);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v10);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15571, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_15807, v14);
    byte_40FA415 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals )
    goto LABEL_73;
  v16 = (System_String_o **)&StringLiteral_1;
  v17 = System_String__Replace_43750968(
          svals,
          (System_String_o *)StringLiteral_15571,
          (System_String_o *)StringLiteral_1,
          0LL);
  if ( !v17 )
    goto LABEL_73;
  v18 = &char___TypeInfo;
  v19 = System_String__Replace_43750968(
          v17,
          (System_String_o *)StringLiteral_15807,
          (System_String_o *)StringLiteral_1,
          0LL);
  v21 = sub_B17014(char___TypeInfo, 1LL, v20);
  if ( !v21 )
    goto LABEL_73;
  v23 = (System_String_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
  {
LABEL_74:
    sub_B17100(v21, v23, v22);
    sub_B170A0();
  }
  *(_WORD *)(v21 + 32) = 44;
  if ( !v19 || (v21 = (__int64)System_String__Split(v19, (System_Char_array *)v21, 0LL)) == 0 )
LABEL_73:
    sub_B170D4();
  v24 = *(_QWORD *)(v21 + 24);
  v25 = (System_String_array *)v21;
  if ( (int)v24 >= 1 )
  {
    v26 = &DataVals_TYPE_TypeInfo;
    v27 = 0LL;
    p_strVals = (BattleServantConfConponent_o *)&this->fields.strVals;
    v29 = (System_String_o **)(v21 + 32);
    v59 = (System_String_array *)v21;
    do
    {
      if ( v27 >= (unsigned int)v24 )
        goto LABEL_74;
      v32 = *v16;
      v21 = System_Int32__TryParse(v29[v27], &result[1], 0LL);
      if ( (v21 & 1) == 0 )
      {
        if ( v27 >= v25->max_length )
          goto LABEL_74;
        v34 = v29[v27];
        v21 = sub_B17014(*v18, 1LL, v22);
        if ( !v21 )
          goto LABEL_73;
        v23 = (System_String_array *)v21;
        if ( !*(_DWORD *)(v21 + 24) )
          goto LABEL_74;
        *(_WORD *)(v21 + 32) = 58;
        if ( !v34 )
          goto LABEL_73;
        v35 = System_String__Split(v34, (System_Char_array *)v21, 0LL);
        if ( !v35 )
          goto LABEL_73;
        v36 = v35;
        if ( (int)v35->max_length >= 2 )
        {
          v32 = v35->m_Items[0];
          if ( !System_Int32__TryParse(v35->m_Items[1], &result[1], 0LL) )
          {
            klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v42 = v29;
              v43 = this;
              v44 = v16;
              v45 = v18;
              v46 = v26;
              v47 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                                    v37,
                                                                                                    v38,
                                                                                                    v39,
                                                                                                    v40);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
                v47,
                (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              p_strVals->klass = (BattleServantConfConponent_c *)v47;
              v48 = (System_Int32_array **)v47;
              v26 = v46;
              v18 = v45;
              v16 = v44;
              this = v43;
              v29 = v42;
              v25 = v59;
              sub_B16F98(p_strVals, v48, v49, v50, v51, v52, v53, v54);
              klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_73;
            }
            v21 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                    klass,
                    (System_Xml_XmlQualifiedName_o *)v32,
                    (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( (v21 & 1) == 0 )
            {
              if ( v36->max_length <= 1 )
                goto LABEL_74;
              if ( !p_strVals->klass )
                goto LABEL_73;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_strVals->klass,
                (System_Xml_XmlQualifiedName_o *)v32,
                (System_Xml_Schema_XmlSchemaObject_o *)v36->m_Items[1],
                (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
            switch ( (int)v27 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                v30 = *v26;
                result[0] = 1;
                goto LABEL_64;
              case 2:
                v30 = *v26;
                v31 = 2;
                goto LABEL_63;
              case 3:
                goto LABEL_61;
              case 4:
                v30 = *v26;
                v31 = 5;
                goto LABEL_63;
              case 5:
                goto LABEL_51;
              default:
                goto LABEL_66;
            }
          }
LABEL_56:
          if ( (_DWORD)v27 == 2 )
          {
LABEL_62:
            v30 = *v26;
            v31 = 6;
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
            switch ( (int)v27 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v30 = *v26;
                v31 = 76;
                goto LABEL_63;
              default:
                goto LABEL_66;
            }
          }
          if ( funcType == 121 )
          {
LABEL_54:
            switch ( (int)v27 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v30 = *v26;
                v31 = 7;
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
      if ( (_DWORD)v27 == 2 )
      {
LABEL_51:
        v30 = *v26;
        v31 = 4;
LABEL_63:
        result[0] = v31;
        goto LABEL_64;
      }
LABEL_57:
      if ( (_DWORD)v27 == 1 )
      {
LABEL_61:
        v30 = *v26;
        v31 = 3;
        goto LABEL_63;
      }
      if ( (_DWORD)v27 )
        goto LABEL_66;
LABEL_59:
      v30 = *v26;
      result[0] = 0;
LABEL_64:
      v55 = j_il2cpp_value_box_0(v30, result);
      if ( !v55 )
        goto LABEL_73;
      v56 = v55;
      v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 360LL))(
                                 v55,
                                 *(_QWORD *)(*(_QWORD *)v55 + 368LL));
      result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v56);
LABEL_66:
      v21 = System_String__op_Inequality(v32, *v16, 0LL);
      if ( (v21 & 1) != 0 )
      {
        vals = this->fields.vals;
        if ( !vals )
          goto LABEL_73;
        v21 = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
                (System_Xml_XmlQualifiedName_o *)v32,
                (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( (v21 & 1) == 0 )
        {
          v58 = this->fields.vals;
          if ( !v58 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)v58,
            (UIPanel_o *)v32,
            result[1],
            (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v24) = v25->max_length;
      ++v27;
    }
    while ( (__int64)v27 < (int)v24 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_25712276(
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
    sub_B170D4();
  v6 = (BattleServantConfConponent_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.call_closeComp = (struct BattleWindowComponent_EndCall_o *)funcEnt;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 40);
  sub_B16F98(v6, (System_Int32_array **)funcEnt, v7, v8, v9, v10, v11, v12);
  HIDWORD(v6[-1].fields.classBoardSkillObj) = funcEnt->fields.targetType;
  *(_DWORD *)&v6[-1].fields.isOpenAfter = funcIndex;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v8; // x0
  __int64 v9; // x22
  UIPanel_o *v10; // x21
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = type;
  if ( (byte_40FA421 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, *(_QWORD *)&type);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v6);
    byte_40FA421 = 1;
  }
  vals = this->fields.vals;
  v8 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v12);
  if ( !v8
    || (v9 = v8,
        v10 = (UIPanel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL)),
        v12 = *(_DWORD *)j_il2cpp_object_unbox_0(v9),
        !vals) )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           v10,
           param,
           (const MethodInfo_2D9DF70 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_40FA41D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, name);
    byte_40FA41D = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           (UIPanel_o *)name,
           value,
           (const MethodInfo_2D9DF70 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v10; // x21

  if ( (byte_40FA42B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_DataVals_OverChargeState___, targetStateArray);
    sub_B16FFC(&Method_DataVals_IsOverChargeState__, v7);
    sub_B16FFC(&Method_System_Func_DataVals_OverChargeState__bool___ctor__, v8);
    sub_B16FFC(&System_Func_DataVals_OverChargeState__bool__TypeInfo, v9);
    byte_40FA42B = 1;
  }
  v10 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B170CC(
                                                                                   System_Func_DataVals_OverChargeState__bool__TypeInfo,
                                                                                   targetStateArray,
                                                                                   method,
                                                                                   v3,
                                                                                   v4);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_DataVals_IsOverChargeState__,
    (const MethodInfo_2B67340 *)Method_System_Func_DataVals_OverChargeState__bool___ctor__);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                                 (ListViewSort_FilterCategoryKind_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v10,
                                                 (const MethodInfo_18B5E80 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
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
  System_String_o *v14; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v17; // w0
  int32_t v18; // w22
  int32_t v19; // w0
  int32_t v20; // w24
  int32_t v21; // w0
  int32_t v22; // w23
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int16 v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA418 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_698, key);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40FA418 = 1;
  }
  v33 = 58;
  v12 = System_Char__ToString((uint16_t)&v33, 0LL);
  v13 = System_String__Concat_43746016((System_String_o *)StringLiteral_698, key, v12, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v14 = svals;
  if ( !svals )
    goto LABEL_16;
  v17 = System_String__IndexOf_43816080(v14, v13, 0LL);
  if ( v17 == -1 )
    return (System_String_o *)StringLiteral_1;
  v18 = v17;
  if ( !*p_svals )
    goto LABEL_16;
  v19 = System_String__IndexOf_43815828(*p_svals, startWord, v17, 0LL);
  if ( !*p_svals )
    goto LABEL_16;
  v20 = v19;
  v21 = System_String__IndexOf_43815828(*p_svals, endWord, v18, 0LL);
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1;
  v22 = v21;
  if ( v21 == -1 )
    return (System_String_o *)StringLiteral_1;
  if ( !*p_svals )
    goto LABEL_16;
  v23 = System_String__Substring_43807468(*p_svals, v20, 1 - v20 + v21, 0LL);
  if ( isDelKeyValue )
  {
    if ( *p_svals )
    {
      v24 = System_String__Substring_43807468(*p_svals, v18, 1 - v18 + v22, 0LL);
      if ( *p_svals )
      {
        v25 = (System_Int32_array **)System_String__Replace_43750968(
                                       *p_svals,
                                       v24,
                                       (System_String_o *)StringLiteral_1,
                                       0LL);
        *p_svals = (System_String_o *)v25;
        sub_B16F98((BattleServantConfConponent_o *)p_svals, v25, v26, v27, v28, v29, v30, v31);
        return v23;
      }
    }
LABEL_16:
    sub_B170D4();
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
  __int64 v7; // x21
  System_Xml_XmlQualifiedName_o *v8; // x20
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = type;
  if ( (byte_40FA41F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v4);
    byte_40FA41F = 1;
  }
  vals = this->fields.vals;
  v6 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v10);
  if ( !v6
    || (v7 = v6,
        v8 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                                                v6,
                                                *(_QWORD *)(*(_QWORD *)v6 + 368LL)),
        v10 = *(_DWORD *)j_il2cpp_object_unbox_0(v7),
        !vals) )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           v8,
           (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
  System_String_o *svals; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x2
  System_String_array *v15; // x1
  __int64 v16; // x8
  System_String_array *v17; // x20
  unsigned __int64 v18; // x26
  System_String_o **v19; // x27
  System_Xml_XmlQualifiedName_o *v20; // x21
  System_String_o *v21; // x22
  System_String_array *v22; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  __int64 v24; // x0
  __int64 v25; // x22
  System_String_o *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x22
  System_String_o *v29; // x23
  struct System_Collections_Generic_Dictionary_string__int__o *v30; // x0
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA41A & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_B16FFC(&DataVals_TYPE_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15571, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    sub_B16FFC(&StringLiteral_15807, v8);
    byte_40FA41A = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    goto LABEL_30;
  v10 = System_String__Replace_43750968(
          svals,
          (System_String_o *)StringLiteral_15571,
          (System_String_o *)StringLiteral_1,
          0LL);
  if ( !v10 )
    goto LABEL_30;
  v11 = System_String__Replace_43750968(
          v10,
          (System_String_o *)StringLiteral_15807,
          (System_String_o *)StringLiteral_1,
          0LL);
  v13 = sub_B17014(char___TypeInfo, 1LL, v12);
  if ( !v13 )
    goto LABEL_30;
  v15 = (System_String_array *)v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_31;
  *(_WORD *)(v13 + 32) = 44;
  if ( !v11 || (v13 = (__int64)System_String__Split(v11, (System_Char_array *)v13, 0LL)) == 0 )
LABEL_30:
    sub_B170D4();
  v16 = *(_QWORD *)(v13 + 24);
  v17 = (System_String_array *)v13;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    v19 = (System_String_o **)(v13 + 32);
    while ( v18 < (unsigned int)v16 )
    {
      v20 = (System_Xml_XmlQualifiedName_o *)StringLiteral_1;
      v13 = System_Int32__TryParse(v19[v18], &result[1], 0LL);
      if ( (v13 & 1) == 0 )
      {
        if ( v18 >= v17->max_length )
          break;
        v21 = v19[v18];
        v13 = sub_B17014(char___TypeInfo, 1LL, v14);
        if ( !v13 )
          goto LABEL_30;
        v15 = (System_String_array *)v13;
        if ( !*(_DWORD *)(v13 + 24) )
          break;
        *(_WORD *)(v13 + 32) = 58;
        if ( !v21 )
          goto LABEL_30;
        v22 = System_String__Split(v21, (System_Char_array *)v13, 0LL);
        if ( !v22 )
          goto LABEL_30;
        if ( (int)v22->max_length >= 2 )
        {
          v20 = (System_Xml_XmlQualifiedName_o *)v22->m_Items[0];
          System_Int32__TryParse(v22->m_Items[1], &result[1], 0LL);
        }
      }
      vals = this->fields.vals;
      if ( !vals )
        goto LABEL_30;
      v13 = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
              v20,
              (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( (v13 & 1) == 0 )
      {
        result[0] = 16;
        v24 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result);
        if ( !v24 )
          goto LABEL_30;
        v25 = v24;
        v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 360LL))(
                                   v24,
                                   *(_QWORD *)(*(_QWORD *)v24 + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v25);
        if ( System_String__op_Equality(v26, (System_String_o *)v20, 0LL) )
          goto LABEL_26;
        result[0] = 17;
        v27 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result);
        if ( !v27 )
          goto LABEL_30;
        v28 = v27;
        v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 360LL))(
                                   v27,
                                   *(_QWORD *)(*(_QWORD *)v27 + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
        v13 = System_String__op_Equality(v29, (System_String_o *)v20, 0LL);
        if ( (v13 & 1) != 0 )
        {
LABEL_26:
          v30 = this->fields.vals;
          if ( !v30 )
            goto LABEL_30;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)v30,
            (UIPanel_o *)v20,
            result[1],
            (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v16) = v17->max_length;
      if ( (__int64)++v18 >= (int)v16 )
        return;
    }
LABEL_31:
    sub_B17100(v13, v15, v14);
    sub_B170A0();
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
  sub_B16F98(
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
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B32 & 1) == 0 )
  {
    sub_B16FFC(&DataVals___c_TypeInfo, v1);
    byte_40F8B32 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DataVals___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataVals___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__37_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_B170D4();
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
  struct System_Collections_Generic_List_FuncList_TYPE__o *funcTypeList; // x0

  if ( (byte_40F8B33 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_FuncList_TYPE__Contains__, x);
    byte_40F8B33 = 1;
  }
  if ( !x || (funcTypeList = this->fields.funcTypeList) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)funcTypeList,
           x->fields.funcType,
           (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
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