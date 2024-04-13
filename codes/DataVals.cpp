void __fastcall DataVals___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E82A9 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals_TypeInfo, v1, v2, v3);
    byte_42E82A9 = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E8289 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6, v7, v8);
    byte_42E8289 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v9,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  this->fields.funcIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)str,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
    sub_B5D69C(Param, v7);
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
  if ( (byte_42E8290 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, type, value, method);
    byte_42E8290 = 1;
  }
  v4 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11);
  if ( !v4 )
    sub_B5D69C(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v11 = *(_DWORD *)j_il2cpp_object_unbox_0(v6);
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_44577788(v7, v8, 0LL);
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
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v9; // x3
  int32_t Param; // w0
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_42E829D & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E829D = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v9);
  if ( Param < 1 )
    return 0LL;
  v11 = Param;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v13);
  if ( !result->max_length )
  {
    v14 = sub_B5D6C8(result);
    sub_B5D668(v14, 0LL);
  }
  result->m_Items[1] = v11;
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  __int64 v24; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  DataVals_array *result; // x0
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x20

  if ( (byte_42E828C & 1) == 0 )
  {
    sub_B5D5C4(&DataVals___TypeInfo, (_DWORD)funcTypeList, isCheckNotFound, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__FindAll__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Predicate_DataVals___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Predicate_DataVals__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__, v18, v19, v20);
    sub_B5D5C4(&DataVals___c__DisplayClass35_0_TypeInfo, v21, v22, v23);
    byte_42E828C = 1;
  }
  v24 = sub_B5D694(DataVals___c__DisplayClass35_0_TypeInfo);
  DataVals___c__DisplayClass35_0___ctor((DataVals___c__DisplayClass35_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_8;
  *(_QWORD *)(v24 + 16) = funcTypeList;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v24 + 16),
    (System_Int32_array **)funcTypeList,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  result = (DataVals_array *)sub_B5D5DC(DataVals___TypeInfo, 0LL);
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return result;
  v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DataVals__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v35,
    (Il2CppObject *)v24,
    Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_DataVals___ctor__);
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)dependDataValsList,
          (System_Predicate_T__o *)v35,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
  if ( !All )
LABEL_8:
    sub_B5D69C(All, v26);
  return (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v36; // x0
  struct DataVals___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__37_0; // x20
  Il2CppObject *v39; // x21
  struct DataVals___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  DataVals___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x19
  struct DataVals___c_StaticFields *v50; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__37_1; // x20
  Il2CppObject *v52; // x21
  struct DataVals___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0

  if ( (byte_42E828E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataVals__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_DataVals___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_DataVals__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_DataVals__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_DataVals__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Func_DataVals__int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&int___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_DataVals___c__GetDependFuncIdArray_b__37_0__, v26, v27, v28);
    sub_B5D5C4(&Method_DataVals___c__GetDependFuncIdArray_b__37_1__, v29, v30, v31);
    sub_B5D5C4(&DataVals___c_TypeInfo, v32, v33, v34);
    byte_42E828E = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v36 = DataVals___c_TypeInfo;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v36 = DataVals___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DataVals__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__37_0,
      v39,
      Method_DataVals___c__GetDependFuncIdArray_b__37_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_DataVals__bool___ctor__);
    v40 = DataVals___c_TypeInfo->static_fields;
    v40->__9__37_0 = (struct System_Func_DataVals__bool__o *)_9__37_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v48 = DataVals___c_TypeInfo;
  v49 = v47;
  if ( (BYTE3(DataVals___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v48 = DataVals___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v50->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v50 = DataVals___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__37_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__37_1,
      v52,
      Method_DataVals___c__GetDependFuncIdArray_b__37_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_DataVals__int___ctor__);
    v53 = DataVals___c_TypeInfo->static_fields;
    v53->__9__37_1 = (struct System_Func_DataVals__int__o *)_9__37_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__37_1,
      (System_Int32_array **)_9__37_1,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v49,
                                                               (System_Func_TSource__TResult__o *)_9__37_1,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v60,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2);
}


System_Int32_array *__fastcall DataVals__GetFixDamageRates(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Int32_array *result; // x0
  const MethodInfo *v12; // x3
  int32_t Param; // w19
  int32_t v14; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42E82A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Repeat_int___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6, v7);
    sub_B5D5C4(&System_Math_TypeInfo, v8, v9, v10);
    byte_42E82A7 = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v12);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = System_Math__Max_45149472(Param, 1, 0LL);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 100,
                                                                 v14,
                                                                 (const MethodInfo_1CAF8B8 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v15,
             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x22
  System_Xml_XmlQualifiedName_o *v12; // x21
  const MethodInfo *v13; // x3
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E82A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v5, v6, v7);
    byte_42E82A3 = 1;
  }
  vals = this->fields.vals;
  v15 = 51;
  v9 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15);
  if ( !v9
    || (v11 = v9,
        v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                                 v9,
                                                 *(_QWORD *)(*(_QWORD *)v9 + 368LL)),
        v9 = j_il2cpp_object_unbox_0(v11),
        v15 = *(_DWORD *)v9,
        !vals) )
  {
    sub_B5D69C(v9, v10);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
         v12,
         (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v13);
  }
  else
  {
    return -1;
  }
}


BattleBuffData_IntervalData_o *__fastcall DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  BattleBuffData_IntervalData_o *v6; // x20

  if ( (byte_42E82A8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_IntervalData_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E82A8 = 1;
  }
  if ( !DataVals__isParam(this, 131, v2) && !DataVals__isParam(this, 132, v5) )
    return 0LL;
  v6 = (BattleBuffData_IntervalData_o *)sub_B5D694(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_23688556(v6, this, 0LL);
  return v6;
}


System_Int32_array *__fastcall DataVals__GetLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v9; // x3
  int32_t Param; // w0
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_42E829A & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E829A = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v9);
  if ( Param < 1 )
    return 0LL;
  v11 = Param;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v13);
  if ( !result->max_length )
  {
    v14 = sub_B5D6C8(result);
    sub_B5D668(v14, 0LL);
  }
  result->m_Items[1] = v11;
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


int32_t __fastcall DataVals__GetParam(DataVals_o *this, int32_t type, int32_t defaultValue, const MethodInfo *method)
{
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v14; // x22
  System_Xml_XmlQualifiedName_o *v15; // x21
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8
  unsigned int v19; // [xsp+Ch] [xbp-24h] BYREF

  v4 = defaultValue;
  v19 = type;
  if ( (byte_42E8291 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, type, defaultValue, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v9, v10, v11);
    byte_42E8291 = 1;
  }
  vals = (struct System_Collections_Generic_Dictionary_string__int__o *)j_il2cpp_value_box_0(
                                                                          DataVals_TYPE_TypeInfo,
                                                                          &v19);
  if ( !vals )
    goto LABEL_10;
  v14 = vals;
  v15 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_string__int__o *, Il2CppMethodPointer))vals->klass->vtable._3_ToString.method)(
                                           vals,
                                           vals->klass->vtable._4_unknown.methodPtr);
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v14);
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
          v15,
          (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return v4;
  vals = this->fields.vals;
  if ( !vals )
LABEL_10:
    sub_B5D69C(vals, v13);
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           vals,
           (System_String_o *)v15,
           (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  v4 = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return ((__int64 (__fastcall *)(struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, void *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.method)(
             this->fields._FuncParamValueUpInfo_k__BackingField,
             v19,
             Item,
             FuncParamValueUpInfo_k__BackingField->klass[1]._1.image);
  return v4;
}


System_Int32_array *__fastcall DataVals__GetParamArray(DataVals_o *this, int32_t paramType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *StrParam; // x21
  const MethodInfo *v10; // x3
  int32_t Param; // w0
  int32_t v12; // w19
  System_Int32_array *result; // x0
  __int64 v14; // x1
  __int64 v15; // x0

  if ( (byte_42E82A4 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, paramType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E82A4 = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v10);
  if ( Param < 1 )
    return 0LL;
  v12 = Param;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v14);
  if ( !result->max_length )
  {
    v15 = sub_B5D6C8(result);
    sub_B5D668(v15, 0LL);
  }
  result->m_Items[1] = v12;
  return result;
}


System_String_array *__fastcall DataVals__GetParamAsStringArray(
        DataVals_o *this,
        int32_t type,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x3
  System_String_o *StrParam; // x20
  System_Char_array *v13; // x0
  System_Char_array *v14; // x1
  __int64 v15; // x0

  if ( (byte_42E8299 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, type, (_DWORD)defaultValue, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42E8299 = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v10);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return defaultValue;
  v13 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v13 )
    goto LABEL_10;
  v14 = v13;
  if ( !v13->max_length )
  {
    v15 = sub_B5D6C8(v13);
    sub_B5D668(v15, 0LL);
  }
  v13->m_Items[2] = 47;
  if ( !StrParam )
LABEL_10:
    sub_B5D69C(v13, v14);
  return System_String__Split(StrParam, v13, 0LL);
}


System_Int32_array *__fastcall DataVals__GetSameBuffLimitTargetIndividuality(
        DataVals_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v9; // x3
  int32_t Param; // w0
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_42E829B & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E829B = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v9);
  if ( Param < 1 )
    return 0LL;
  v11 = Param;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v13);
  if ( !result->max_length )
  {
    v14 = sub_B5D6C8(result);
    sub_B5D668(v14, 0LL);
  }
  result->m_Items[1] = v11;
  return result;
}


System_String_o *__fastcall DataVals__GetStrParam(
        DataVals_o *this,
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v14; // x22
  System_Type_o *v15; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v4 = defaultValue;
  v18 = type;
  if ( (byte_42E8293 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__,
      type,
      (_DWORD)defaultValue,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6, v7, v8);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v9, v10, v11);
    byte_42E8293 = 1;
  }
  v12 = (struct System_Collections_Generic_Dictionary_string__string__o *)j_il2cpp_value_box_0(
                                                                            DataVals_TYPE_TypeInfo,
                                                                            &v18);
  if ( !v12 )
    goto LABEL_9;
  v14 = v12;
  v15 = (System_Type_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_string__string__o *, Il2CppMethodPointer))v12->klass->vtable._3_ToString.method)(
                           v12,
                           v12->klass->vtable._4_unknown.methodPtr);
  v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v14);
  strVals = this->fields.strVals;
  if ( strVals
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
         (System_Xml_XmlQualifiedName_o *)v15,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v12 = this->fields.strVals;
    if ( v12 )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v12,
                                  v15,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_9:
    sub_B5D69C(v12, v13);
  }
  return v4;
}


System_Int32_array *__fastcall DataVals__GetTargetList(DataVals_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v9; // x3
  int32_t Param; // w0
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_42E8297 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E8297 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v9);
  if ( Param < 1 )
    return 0LL;
  v11 = Param;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v13);
  if ( !result->max_length )
  {
    v14 = sub_B5D6C8(result);
    sub_B5D668(v14, 0LL);
  }
  result->m_Items[1] = v11;
  return result;
}


System_Int32_array *__fastcall DataVals__GetTargetRarityList(DataVals_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v9; // x3
  int32_t Param; // w0
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_42E829C & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E829C = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v9);
  if ( Param < 1 )
    return 0LL;
  v11 = Param;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v13);
  if ( !result->max_length )
  {
    v14 = sub_B5D6C8(result);
    sub_B5D668(v14, 0LL);
  }
  result->m_Items[1] = v11;
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


System_Int32_array *__fastcall DataVals__GetValsList(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *StrParam; // x21
  const MethodInfo *v10; // x3
  int32_t Param; // w0
  int32_t v12; // w19
  System_Int32_array *result; // x0
  __int64 v14; // x1
  __int64 v15; // x0

  if ( (byte_42E8298 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E8298 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v10);
  if ( !Param )
    return 0LL;
  v12 = Param;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v14);
  if ( !result->max_length )
  {
    v15 = sub_B5D6C8(result);
    sub_B5D668(v15, 0LL);
  }
  result->m_Items[1] = v12;
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


bool __fastcall DataVals__IsActAttackFunction(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 148, 0, v2) > 0;
}


bool __fastcall DataVals__IsActNoDamageBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 124, 0, v2) == 1;
}


bool __fastcall DataVals__IsAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x3
  System_String_o *StrParam; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  System_String_o *v11; // x0

  if ( (byte_42E829E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E829E = 1;
  }
  if ( DataVals__GetParam(this, 37, 0, v3) )
    return 1;
  StrParam = DataVals__GetStrParam(this, 37, (System_String_o *)StringLiteral_1/*""*/, v5);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) || DataVals__GetParam(this, 112, 0, v7) )
  {
    return 1;
  }
  else
  {
    v11 = DataVals__GetStrParam(this, 112, (System_String_o *)StringLiteral_1/*""*/, v8);
    return !System_String__IsNullOrEmpty(v11, 0LL);
  }
}


bool __fastcall DataVals__IsAddLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x3
  System_String_o *StrParam; // x0

  if ( (byte_42E829F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E829F = 1;
  }
  if ( DataVals__GetParam(this, 38, 0, v3) )
  {
    return 1;
  }
  else
  {
    StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v5);
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


bool __fastcall DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E82A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_bool___, index, (_DWORD)method, v3);
    byte_42E82A2 = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_1AD8EE8 *)Method_BasicHelper_IndexValue_bool___);
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


bool __fastcall DataVals__IsIgnoreShiftSafeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 147, 0, v2) == 1;
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


bool __fastcall DataVals__IsSatisfyAboveBelowCondition(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataVals___c__DisplayClass96_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_Func_bool__int__bool__o *v22; // x21
  const MethodInfo *v23; // x4

  if ( (byte_42E82A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool__int__bool___ctor__, paramType, compareVal, method);
    sub_B5D5C4(&System_Func_bool__int__bool__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataVals___c__DisplayClass96_0__IsSatisfyAboveBelowCondition_b__0__, v10, v11, v12);
    sub_B5D5C4(&DataVals___c__DisplayClass96_0_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1300/*"<"*/, v16, v17, v18);
    byte_42E82A5 = 1;
  }
  v19 = (DataVals___c__DisplayClass96_0_o *)sub_B5D694(DataVals___c__DisplayClass96_0_TypeInfo);
  DataVals___c__DisplayClass96_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.compareVal = compareVal;
  v22 = (System_Func_bool__int__bool__o *)sub_B5D694(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v22,
    (Il2CppObject *)v19,
    Method_DataVals___c__DisplayClass96_0__IsSatisfyAboveBelowCondition_b__0__,
    (const MethodInfo_2C37AB4 *)Method_System_Func_bool__int__bool___ctor__);
  return DataVals__IsSatisfyRangeCondition(this, paramType, (System_String_o *)StringLiteral_1300/*"<"*/, v22, v23);
}


bool __fastcall DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        int32_t paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_String_o *StrParam; // x21
  __int64 IsMatch; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array *v39; // x22
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_o *v67; // x22
  int v68; // w8
  __int64 v69; // x21
  unsigned int v70; // w25
  System_String_o *v71; // x23
  System_String_o *v72; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E82A6 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, paramType, (_DWORD)compareKey, funcCompare);
    sub_B5D5C4(&Method_System_Func_bool__int__bool__Invoke__, v9, v10, v11);
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&string___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_640/*"(^"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16043/*"\\d+$|^\\d+"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_403/*"$)"*/, v27, v28, v29);
    byte_42E82A6 = 1;
  }
  result = 0;
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return 1;
  IsMatch = sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !IsMatch )
LABEL_44:
    sub_B5D69C(IsMatch, v32);
  v39 = (System_String_array *)IsMatch;
  IsMatch = StringLiteral_640/*"(^"*/;
  if ( StringLiteral_640/*"(^"*/ )
  {
    IsMatch = sub_B5D684(StringLiteral_640/*"(^"*/, v39->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
    v40 = (System_Int32_array **)StringLiteral_640/*"(^"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !v39->max_length )
    goto LABEL_45;
  v39->m_Items[0] = (System_String_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)v39->m_Items, v40, v33, v34, v35, v36, v37, v38);
  if ( compareKey )
  {
    IsMatch = sub_B5D684(compareKey, v39->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_45;
  v39->m_Items[1] = compareKey;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v39->m_Items[1],
    (System_Int32_array **)compareKey,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  IsMatch = StringLiteral_16043/*"\\d+$|^\\d+"*/;
  if ( StringLiteral_16043/*"\\d+$|^\\d+"*/ )
  {
    IsMatch = sub_B5D684(StringLiteral_16043/*"\\d+$|^\\d+"*/, v39->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
    v53 = (System_Int32_array **)StringLiteral_16043/*"\\d+$|^\\d+"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_45;
  v39->m_Items[2] = (System_String_o *)v53;
  sub_B5D560((BattleServantConfConponent_o *)&v39->m_Items[2], v53, v47, v48, v49, v50, v51, v52);
  if ( compareKey )
  {
    IsMatch = sub_B5D684(compareKey, v39->obj.klass->_1.element_class);
    if ( !IsMatch )
      goto LABEL_46;
  }
  if ( v39->max_length <= 3 )
    goto LABEL_45;
  v39->m_Items[3] = compareKey;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v39->m_Items[3],
    (System_Int32_array **)compareKey,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  IsMatch = StringLiteral_403/*"$)"*/;
  if ( !StringLiteral_403/*"$)"*/ )
  {
    v66 = 0LL;
    goto LABEL_25;
  }
  IsMatch = sub_B5D684(StringLiteral_403/*"$)"*/, v39->obj.klass->_1.element_class);
  if ( !IsMatch )
  {
LABEL_46:
    v75 = sub_B5D6BC(IsMatch);
    sub_B5D668(v75, 0LL);
  }
  v66 = (System_Int32_array **)StringLiteral_403/*"$)"*/;
LABEL_25:
  if ( v39->max_length <= 4 )
    goto LABEL_45;
  v39->m_Items[4] = (System_String_o *)v66;
  sub_B5D560((BattleServantConfConponent_o *)&v39->m_Items[4], v66, v60, v61, v62, v63, v64, v65);
  v67 = System_String__Concat_44657912(v39, 0LL);
  IsMatch = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !IsMatch )
    goto LABEL_44;
  v32 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
  {
LABEL_45:
    v74 = sub_B5D6C8(IsMatch);
    sub_B5D668(v74, 0LL);
  }
  *(_WORD *)(IsMatch + 32) = 47;
  if ( !StrParam )
    goto LABEL_44;
  IsMatch = (__int64)System_String__Split(StrParam, (System_Char_array *)IsMatch, 0LL);
  if ( !IsMatch )
    goto LABEL_44;
  v68 = *(_DWORD *)(IsMatch + 24);
  v69 = IsMatch;
  if ( v68 < 1 )
    return 1;
  v70 = 0;
  while ( 1 )
  {
    if ( v70 >= v68 )
      goto LABEL_45;
    v71 = *(System_String_o **)(v69 + 8LL * (int)v70 + 32);
    if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v71, v67, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v71 )
      goto LABEL_44;
    v72 = System_String__Replace_44585024(v71, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v72, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v71, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_44;
    IsMatch = System_Func_bool__int__bool___Invoke(
                funcCompare,
                IsMatch & 1,
                result,
                (const MethodInfo_2C37AC8 *)Method_System_Func_bool__int__bool__Invoke__);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v68 = *(_DWORD *)(v69 + 24);
    if ( (int)++v70 >= v68 )
      return 1;
  }
}


bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x20
  System_Xml_XmlQualifiedName_o *v12; // x21
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  v15 = type;
  if ( (byte_42E8295 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, type, (_DWORD)method, v3);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v5, v6, v7);
    byte_42E8295 = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v9 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15);
    if ( !v9 )
      sub_B5D69C(0LL, v10);
    v11 = v9;
    v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                             v9,
                                             *(_QWORD *)(*(_QWORD *)v9 + 368LL));
    v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
    return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)strVals,
             v12,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
    sub_B5D69C(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void __fastcall DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  int32_t *v4; // x19
  FunctionMaster_o *v5; // x27
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x0
  DataVals_c **v32; // x28
  System_String_o **v33; // x20
  System_String_o **v34; // x22
  int32_t v35; // w23
  int32_t i; // w24
  System_String_o *v37; // x0
  const MethodInfo *v38; // x5
  System_String_o *v39; // x26
  const MethodInfo *v40; // x3
  System_String_o *v41; // x0
  const MethodInfo *v42; // x5
  System_String_o *v43; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v45; // x1
  DataVals_o *v46; // x24
  System_String_o **v47; // x21
  int32_t v48; // w22
  int32_t *v49; // x23
  System_String_o **v50; // x19
  DataVals_c **v51; // x20
  FunctionMaster_o *v52; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x27
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_o *v61; // x0
  DataVals_o *v62; // x26
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x2
  DataVals_c *v66; // x0
  int32_t v67; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *p_dependDataValsList; // [xsp+10h] [xbp-60h]
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF

  v4 = funcIndex;
  v5 = funcMst;
  if ( (byte_42E828B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__,
      (_DWORD)funcMst,
      (_DWORD)funcIndex,
      method);
    sub_B5D5C4(&DataVals_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__Clear__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_DataVals__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v28, v29, v30);
    byte_42E828B = 1;
  }
  result = 0;
  dependDataValsList = this->fields.dependDataValsList;
  p_dependDataValsList = (BattleServantConfConponent_o *)&this->fields.dependDataValsList;
  if ( dependDataValsList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)dependDataValsList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_DataVals__Clear__);
  v32 = &DataVals_TypeInfo;
  v33 = (System_String_o **)&StringLiteral_15824/*"["*/;
  v34 = (System_String_o **)&StringLiteral_1/*""*/;
  v35 = 0;
  for ( i = 1; ; ++i )
  {
    v66 = *v32;
    if ( (BYTE3((*v32)->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = *v32;
    }
    if ( i > v66->static_fields->MAX_DEPEND_FUNC )
      break;
    v37 = DataVals__ConcatenateTypeValue((DataVals_o *)v66, 44, i, method);
    v39 = DataVals__cutValue(this, v37, 0x5Bu, 0x5Du, 1, v38);
    v41 = DataVals__ConcatenateTypeValue((DataVals_o *)v39, 45, i, v40);
    v43 = DataVals__cutValue(this, v41, 0x5Bu, 0x5Du, 1, v42);
    if ( System_String__IsNullOrEmpty(v39, 0LL) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v43, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !p_dependDataValsList->klass )
    {
      v67 = i;
      v46 = this;
      v47 = v34;
      v48 = v35;
      v49 = v4;
      v50 = v33;
      v51 = v32;
      v52 = v5;
      v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v53,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v54 = (System_Int32_array **)v53;
      p_dependDataValsList->klass = (BattleServantConfConponent_c *)v53;
      v5 = v52;
      v32 = v51;
      v33 = v50;
      v4 = v49;
      v35 = v48;
      v34 = v47;
      this = v46;
      i = v67;
      sub_B5D560(p_dependDataValsList, v54, v55, v56, v57, v58, v59, v60);
    }
    result = 0;
    if ( !v39 || (IsNullOrEmpty = System_String__Replace_44585024(v39, *v33, *v34, 0LL)) == 0LL )
LABEL_23:
      sub_B5D69C(IsNullOrEmpty, v45);
    v61 = System_String__Replace_44585024(IsNullOrEmpty, (System_String_o *)StringLiteral_16061/*"]"*/, *v34, 0LL);
    if ( System_Int32__TryParse(v61, &result, 0LL) )
    {
      v62 = (DataVals_o *)sub_B5D694(*v32);
      DataVals___ctor(v62, v43, v63);
      if ( !v5 )
        goto LABEL_23;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)v5,
                                           result,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v62 )
        goto LABEL_23;
      DataVals__SetType_24517908(v62, (FunctionEntity_o *)IsNullOrEmpty, *v4, v64);
      v62->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v35, v65);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_23;
      ++v35;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DataVals__Add__);
      ++*v4;
    }
  }
}


void __fastcall DataVals__SetDependOverChargeFlag(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals__o *dependDataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  __int64 size; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  MethodInfo *v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_List_DataVals__o *v22; // x22
  struct System_Boolean_array *v23; // x21
  __int64 v24; // x23
  int v25; // w8
  __int64 v26; // x8
  __int64 v27; // x0

  if ( (byte_42E82A1 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)dependDataList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__get_Item__, v9, v10, v11);
    byte_42E82A1 = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v14 = sub_B5D5DC(bool___TypeInfo, size);
        v22 = this->fields.dependDataValsList;
        if ( !v22 )
LABEL_17:
          sub_B5D69C(v14, v15);
        v23 = (struct System_Boolean_array *)v14;
        v24 = 0LL;
        while ( 1 )
        {
          v25 = v22->fields._size;
          if ( (int)v24 >= v25 )
            break;
          if ( v25 <= (unsigned int)v24 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v26 = (__int64)v22->fields._items + 8 * v24;
          if ( dependDataList->fields._size <= (unsigned int)v24 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( *(_QWORD *)(v26 + 32) )
          {
            v14 = DataVals__CheckOverCharge(
                    *(DataVals_o **)(v26 + 32),
                    dependDataList->fields._items->m_Items[v24],
                    v16);
            if ( v23 )
            {
              if ( (unsigned int)v24 >= v23->max_length )
              {
                v27 = sub_B5D6C8(v14);
                sub_B5D668(v27, 0LL);
              }
              v23->m_Items[v24 + 4] = v14 & 1;
              v22 = this->fields.dependDataValsList;
              ++v24;
              if ( v22 )
                continue;
            }
          }
          goto LABEL_17;
        }
        this->fields._dependOverChargeArray_k__BackingField = v23;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (System_Int32_array **)v23,
          (System_String_array **)v16,
          v17,
          v18,
          v19,
          v20,
          v21);
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
  sub_B5D560(p_svals, svals, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 svals; // x0
  System_String_o **v37; // x21
  Il2CppClass **v38; // x26
  System_String_o *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x20
  DataVals_TYPE_c **v42; // x24
  unsigned __int64 v43; // x27
  BattleServantConfConponent_o *p_strVals; // x25
  __int64 v45; // x28
  DataVals_TYPE_c *v46; // x0
  int32_t v47; // w8
  System_String_o *v48; // x22
  int32_t funcType; // w8
  System_String_o *v50; // x23
  __int64 v51; // x23
  __int64 v52; // x20
  DataVals_o *v53; // x28
  System_String_o **v54; // x19
  Il2CppClass **v55; // x21
  DataVals_TYPE_c **v56; // x26
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v57; // x24
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x23
  __int64 v66; // x0
  __int64 v67; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  v4 = ft;
  if ( (byte_42E828A & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, ft, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v33, v34, v35);
    byte_42E828A = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = (__int64)this->fields.svals;
  this->fields.funcType = v4;
  if ( !svals )
    goto LABEL_73;
  v37 = (System_String_o **)&StringLiteral_1/*""*/;
  svals = (__int64)System_String__Replace_44585024(
                     (System_String_o *)svals,
                     (System_String_o *)StringLiteral_15824/*"["*/,
                     (System_String_o *)StringLiteral_1/*""*/,
                     0LL);
  if ( !svals )
    goto LABEL_73;
  v38 = &char___TypeInfo;
  v39 = System_String__Replace_44585024(
          (System_String_o *)svals,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  svals = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !svals )
    goto LABEL_73;
  *(_QWORD *)&ft = svals;
  if ( !*(_DWORD *)(svals + 24) )
  {
LABEL_74:
    v66 = sub_B5D6C8(svals);
    sub_B5D668(v66, 0LL);
  }
  *(_WORD *)(svals + 32) = 44;
  if ( !v39 || (svals = (__int64)System_String__Split(v39, (System_Char_array *)svals, 0LL)) == 0 )
LABEL_73:
    sub_B5D69C(svals, *(_QWORD *)&ft);
  v40 = *(_QWORD *)(svals + 24);
  v41 = svals;
  if ( (int)v40 >= 1 )
  {
    v42 = &DataVals_TYPE_TypeInfo;
    v43 = 0LL;
    p_strVals = (BattleServantConfConponent_o *)&this->fields.strVals;
    v45 = svals + 32;
    v67 = svals;
    do
    {
      if ( v43 >= (unsigned int)v40 )
        goto LABEL_74;
      v48 = *v37;
      svals = System_Int32__TryParse(*(System_String_o **)(v45 + 8 * v43), &result[1], 0LL);
      if ( (svals & 1) == 0 )
      {
        if ( v43 >= *(unsigned int *)(v41 + 24) )
          goto LABEL_74;
        v50 = *(System_String_o **)(v45 + 8 * v43);
        svals = sub_B5D5DC(*v38, 1LL);
        if ( !svals )
          goto LABEL_73;
        *(_QWORD *)&ft = svals;
        if ( !*(_DWORD *)(svals + 24) )
          goto LABEL_74;
        *(_WORD *)(svals + 32) = 58;
        if ( !v50 )
          goto LABEL_73;
        svals = (__int64)System_String__Split(v50, (System_Char_array *)svals, 0LL);
        if ( !svals )
          goto LABEL_73;
        v51 = svals;
        if ( *(int *)(svals + 24) >= 2 )
        {
          v48 = *(System_String_o **)(svals + 32);
          if ( !System_Int32__TryParse(*(System_String_o **)(svals + 40), &result[1], 0LL) )
          {
            svals = (__int64)p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v52 = v45;
              v53 = this;
              v54 = v37;
              v55 = v38;
              v56 = v42;
              v57 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
                v57,
                (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              p_strVals->klass = (BattleServantConfConponent_c *)v57;
              v58 = (System_Int32_array **)v57;
              v42 = v56;
              v38 = v55;
              v37 = v54;
              this = v53;
              v45 = v52;
              v41 = v67;
              sub_B5D560(p_strVals, v58, v59, v60, v61, v62, v63, v64);
              svals = (__int64)p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_73;
            }
            svals = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)svals,
                      (System_Xml_XmlQualifiedName_o *)v48,
                      (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( (svals & 1) == 0 )
            {
              if ( *(_DWORD *)(v51 + 24) <= 1u )
                goto LABEL_74;
              svals = (__int64)p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_73;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)svals,
                (System_Xml_XmlQualifiedName_o *)v48,
                *(System_Xml_Schema_XmlSchemaObject_o **)(v51 + 40),
                (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
            switch ( (int)v43 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                v46 = *v42;
                result[0] = 1;
                goto LABEL_64;
              case 2:
                v46 = *v42;
                v47 = 2;
                goto LABEL_63;
              case 3:
                goto LABEL_61;
              case 4:
                v46 = *v42;
                v47 = 5;
                goto LABEL_63;
              case 5:
                goto LABEL_51;
              default:
                goto LABEL_66;
            }
          }
LABEL_56:
          if ( (_DWORD)v43 == 2 )
          {
LABEL_62:
            v46 = *v42;
            v47 = 6;
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
            switch ( (int)v43 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v46 = *v42;
                v47 = 76;
                goto LABEL_63;
              default:
                goto LABEL_66;
            }
          }
          if ( funcType == 121 )
          {
LABEL_54:
            switch ( (int)v43 )
            {
              case 0:
                goto LABEL_59;
              case 1:
                goto LABEL_61;
              case 2:
                goto LABEL_62;
              case 3:
                v46 = *v42;
                v47 = 7;
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
      if ( (_DWORD)v43 == 2 )
      {
LABEL_51:
        v46 = *v42;
        v47 = 4;
LABEL_63:
        result[0] = v47;
        goto LABEL_64;
      }
LABEL_57:
      if ( (_DWORD)v43 == 1 )
      {
LABEL_61:
        v46 = *v42;
        v47 = 3;
        goto LABEL_63;
      }
      if ( (_DWORD)v43 )
        goto LABEL_66;
LABEL_59:
      v46 = *v42;
      result[0] = 0;
LABEL_64:
      svals = j_il2cpp_value_box_0(v46, result);
      if ( !svals )
        goto LABEL_73;
      v65 = svals;
      v48 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                 svals,
                                 *(_QWORD *)(*(_QWORD *)svals + 368LL));
      result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v65);
LABEL_66:
      svals = System_String__op_Inequality(v48, *v37, 0LL);
      if ( (svals & 1) != 0 )
      {
        svals = (__int64)this->fields.vals;
        if ( !svals )
          goto LABEL_73;
        svals = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                  (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)svals,
                  (System_Xml_XmlQualifiedName_o *)v48,
                  (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( (svals & 1) == 0 )
        {
          svals = (__int64)this->fields.vals;
          if ( !svals )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)svals,
            (UIPanel_o *)v48,
            result[1],
            (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v40) = *(_DWORD *)(v41 + 24);
      ++v43;
    }
    while ( (__int64)v43 < (int)v40 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_24517908(
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
    sub_B5D69C(this, 0LL);
  v6 = (BattleServantConfConponent_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.call_closeComp = (struct BattleWindowComponent_EndCall_o *)funcEnt;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 40);
  sub_B5D560(v6, (System_Int32_array **)funcEnt, v7, v8, v9, v10, v11, v12);
  HIDWORD(v6[-1].fields.classBoardSkillObj) = funcEnt->fields.targetType;
  *(_DWORD *)&v6[-1].fields.isOpenAfter = funcIndex;
}


bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x22
  UIPanel_o *v13; // x21
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = type;
  if ( (byte_42E8296 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, type, (_DWORD)param, method);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v6, v7, v8);
    byte_42E8296 = 1;
  }
  vals = this->fields.vals;
  v10 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15);
  if ( !v10
    || (v12 = v10,
        v13 = (UIPanel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 360LL))(
                             v10,
                             *(_QWORD *)(*(_QWORD *)v10 + 368LL)),
        v10 = j_il2cpp_object_unbox_0(v12),
        v15 = *(_DWORD *)v10,
        !vals) )
  {
    sub_B5D69C(v10, v11);
  }
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           v13,
           param,
           (const MethodInfo_2F1D1F8 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_42E8292 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__,
      (_DWORD)name,
      (_DWORD)value,
      method);
    byte_42E8292 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_B5D69C(0LL, name);
  return System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
           (System_Collections_Generic_Dictionary_UIPanel__int__o *)vals,
           (UIPanel_o *)name,
           value,
           (const MethodInfo_2F1D1F8 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v15; // x21

  if ( (byte_42E82A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_DataVals_OverChargeState___, (_DWORD)targetStateArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataVals_IsOverChargeState__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_DataVals_OverChargeState__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_DataVals_OverChargeState__bool__TypeInfo, v12, v13, v14);
    byte_42E82A0 = 1;
  }
  v15 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B5D694(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_DataVals_IsOverChargeState__,
    (const MethodInfo_2C2A838 *)Method_System_Func_DataVals_OverChargeState__bool___ctor__);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
                                                 (ListViewSort_FilterCategoryKind_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v15,
                                                 (const MethodInfo_1AD6BEC *)Method_BasicHelper_Any_DataVals_OverChargeState___);
}


bool __fastcall DataVals__checkActSet(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 16, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__cutValue(
        DataVals_o *this,
        System_String_o *key,
        uint16_t startWord,
        uint16_t endWord,
        bool isDelKeyValue,
        const MethodInfo *method)
{
  int v11; // w1
  __int16 v12; // w2
  __int64 v13; // x3
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v20; // w0
  int32_t v21; // w22
  int32_t v22; // w24
  int32_t v23; // w0
  int32_t v24; // w23
  System_String_o *v25; // x21
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int16 v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E828D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_707/*","*/, (_DWORD)key, startWord, endWord);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E828D = 1;
  }
  v34 = 58;
  v14 = System_Char__ToString((uint16_t)&v34, 0LL);
  v15 = System_String__Concat_44580072((System_String_o *)StringLiteral_707/*","*/, key, v14, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v17 = svals;
  if ( !svals )
    goto LABEL_16;
  v20 = System_String__IndexOf_44650136(v17, v15, 0LL);
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v21 = v20;
  v15 = *p_svals;
  if ( !*p_svals )
    goto LABEL_16;
  v15 = (System_String_o *)System_String__IndexOf_44649884(v15, startWord, v21, 0LL);
  if ( !*p_svals )
    goto LABEL_16;
  v22 = (int)v15;
  v23 = System_String__IndexOf_44649884(*p_svals, endWord, v21, 0LL);
  if ( v22 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v24 = v23;
  if ( v23 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = *p_svals;
  if ( !*p_svals )
    goto LABEL_16;
  v25 = System_String__Substring_44641524(v15, v22, 1 - v22 + v24, 0LL);
  if ( isDelKeyValue )
  {
    v15 = *p_svals;
    if ( *p_svals )
    {
      v15 = System_String__Substring_44641524(v15, v21, 1 - v21 + v24, 0LL);
      if ( *p_svals )
      {
        v26 = (System_Int32_array **)System_String__Replace_44585024(
                                       *p_svals,
                                       v15,
                                       (System_String_o *)StringLiteral_1/*""*/,
                                       0LL);
        *p_svals = (System_String_o *)v26;
        sub_B5D560((BattleServantConfConponent_o *)p_svals, v26, v27, v28, v29, v30, v31, v32);
        return v25;
      }
    }
LABEL_16:
    sub_B5D69C(v15, v16);
  }
  return v25;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  System_Xml_XmlQualifiedName_o *v12; // x20
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = type;
  if ( (byte_42E8294 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, type, (_DWORD)method, v3);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v5, v6, v7);
    byte_42E8294 = 1;
  }
  vals = this->fields.vals;
  v9 = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v14);
  if ( !v9
    || (v11 = v9,
        v12 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                                 v9,
                                                 *(_QWORD *)(*(_QWORD *)v9 + 368LL)),
        v9 = j_il2cpp_object_unbox_0(v11),
        v14 = *(_DWORD *)v9,
        !vals) )
  {
    sub_B5D69C(v9, v10);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           v12,
           (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 svals; // x0
  System_String_o *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x20
  unsigned __int64 v27; // x26
  __int64 v28; // x27
  System_Xml_XmlQualifiedName_o *v29; // x21
  System_String_o *v30; // x22
  __int64 v31; // x22
  System_String_o *v32; // x23
  __int64 v33; // x22
  System_String_o *v34; // x23
  __int64 v35; // x0
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E828F & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&DataVals_TYPE_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v20, v21, v22);
    byte_42E828F = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = (__int64)this->fields.svals;
  if ( !svals )
    goto LABEL_30;
  svals = (__int64)System_String__Replace_44585024(
                     (System_String_o *)svals,
                     (System_String_o *)StringLiteral_15824/*"["*/,
                     (System_String_o *)StringLiteral_1/*""*/,
                     0LL);
  if ( !svals )
    goto LABEL_30;
  v24 = System_String__Replace_44585024(
          (System_String_o *)svals,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  svals = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !svals )
    goto LABEL_30;
  method = (const MethodInfo *)svals;
  if ( !*(_DWORD *)(svals + 24) )
    goto LABEL_31;
  *(_WORD *)(svals + 32) = 44;
  if ( !v24 || (svals = (__int64)System_String__Split(v24, (System_Char_array *)svals, 0LL)) == 0 )
LABEL_30:
    sub_B5D69C(svals, method);
  v25 = *(_QWORD *)(svals + 24);
  v26 = svals;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    v28 = svals + 32;
    while ( v27 < (unsigned int)v25 )
    {
      v29 = (System_Xml_XmlQualifiedName_o *)StringLiteral_1/*""*/;
      svals = System_Int32__TryParse(*(System_String_o **)(v28 + 8 * v27), &result[1], 0LL);
      if ( (svals & 1) == 0 )
      {
        if ( v27 >= *(unsigned int *)(v26 + 24) )
          break;
        v30 = *(System_String_o **)(v28 + 8 * v27);
        svals = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !svals )
          goto LABEL_30;
        method = (const MethodInfo *)svals;
        if ( !*(_DWORD *)(svals + 24) )
          break;
        *(_WORD *)(svals + 32) = 58;
        if ( !v30 )
          goto LABEL_30;
        svals = (__int64)System_String__Split(v30, (System_Char_array *)svals, 0LL);
        if ( !svals )
          goto LABEL_30;
        if ( *(int *)(svals + 24) >= 2 )
        {
          v29 = *(System_Xml_XmlQualifiedName_o **)(svals + 32);
          System_Int32__TryParse(*(System_String_o **)(svals + 40), &result[1], 0LL);
        }
      }
      svals = (__int64)this->fields.vals;
      if ( !svals )
        goto LABEL_30;
      svals = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)svals,
                v29,
                (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( (svals & 1) == 0 )
      {
        result[0] = 16;
        svals = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result);
        if ( !svals )
          goto LABEL_30;
        v31 = svals;
        v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                   svals,
                                   *(_QWORD *)(*(_QWORD *)svals + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v31);
        if ( System_String__op_Equality(v32, (System_String_o *)v29, 0LL) )
          goto LABEL_26;
        result[0] = 17;
        svals = j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, result);
        if ( !svals )
          goto LABEL_30;
        v33 = svals;
        v34 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)svals + 360LL))(
                                   svals,
                                   *(_QWORD *)(*(_QWORD *)svals + 368LL));
        result[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v33);
        svals = System_String__op_Equality(v34, (System_String_o *)v29, 0LL);
        if ( (svals & 1) != 0 )
        {
LABEL_26:
          svals = (__int64)this->fields.vals;
          if ( !svals )
            goto LABEL_30;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)svals,
            (UIPanel_o *)v29,
            result[1],
            (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v25) = *(_DWORD *)(v26 + 24);
      if ( (__int64)++v27 >= (int)v25 )
        return;
    }
LABEL_31:
    v35 = sub_B5D6C8(svals);
    sub_B5D668(v35, 0LL);
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D67 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals___c_TypeInfo, v1, v2, v3);
    byte_42E6D67 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DataVals___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataVals___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__37_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_B5D69C(this, x);
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
  __int64 v3; // x3
  DataVals___c__DisplayClass35_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E6D68 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass35_0_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_FuncList_TYPE__Contains__,
                                                 (_DWORD)x,
                                                 (_DWORD)method,
                                                 v3);
    byte_42E6D68 = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass35_0_o *)v5->fields.funcTypeList) == 0LL )
    sub_B5D69C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           x->fields.funcType,
           (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
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