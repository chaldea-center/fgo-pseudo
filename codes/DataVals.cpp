void __fastcall DataVals___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E23B2 & 1) == 0 )
  {
    sub_1B00CCC(&DataVals_TypeInfo, v1);
    byte_48E23B2 = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__int__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_48E238A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, str);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    byte_48E238A = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v6,
    (const MethodInfo_308427C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v6;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
  this->fields.funcIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.svals, (int32_t)str, v9, v10);
}


bool __fastcall DataVals__CheckAssertStrParam(
        DataVals_o *this,
        int32_t type,
        bool *existParamNum,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  bool IsStrParam; // w22

  *existParamNum = 0;
  IsStrParam = DataVals__IsStrParam(this, type, (const MethodInfo *)existParamNum);
  if ( !IsStrParam )
    *existParamNum = DataVals__isParam(this, type, v7);
  return IsStrParam;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__CheckFunctionTriggerStar(DataVals_o *this, int32_t totalStar, const MethodInfo *method)
{
  int32_t FunctionTriggerStarNum; // w0

  FunctionTriggerStarNum = DataVals__GetFunctionTriggerStarNum(this, *(const MethodInfo **)&totalStar);
  return FunctionTriggerStarNum < 0 || FunctionTriggerStarNum <= totalStar;
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
    sub_1B00F28(Param, v7);
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
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+0h] [xbp-40h] BYREF
  int32_t v9; // [xsp+10h] [xbp-30h]
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = value;
  if ( (byte_48E2391 & 1) == 0 )
  {
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_48E2391 = 1;
  }
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = type;
  v5 = System_Enum__ToString(&v8, 0LL);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_60325748(v5, v6, 0LL);
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
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1

  if ( (byte_48E23A2 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v4);
    byte_48E23A2 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v10);
  if ( !result->max_length )
    sub_1B00F30(result, v10);
  result->m_Items[1] = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetBgmPriority(DataVals_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48E23AF & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&bgmId);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    byte_48E23AF = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 159, &param, v3) || DataVals__TryGetParam(this, 110, &param, v7) )
    return param;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B00F28(0LL, v10);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, bgmId, 0, 0LL);
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


ControlOtherBgmPriorityAtOverStageBgm_array *__fastcall DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x21
  const MethodInfo *v10; // x3
  System_Int32_array *Param; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Int32_array *ParamArray; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x2
  __int64 v25; // x8
  System_Int32_array *v26; // x21
  unsigned __int64 v27; // x26
  int32_t v28; // w23
  __int64 v29; // x22
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x3
  System_Int32_array *ParamArrayAddTypeIndex; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0

  if ( (byte_48E23B1 & 1) == 0 )
  {
    sub_1B00CCC(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo, v7);
    byte_48E23B1 = 1;
  }
  if ( !DataVals__isParam(this, 164, v2) )
    return 0LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v9 = sub_1B00F18(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v9, 0LL);
  Param = (System_Int32_array *)DataVals__GetParam(this, 164, 0, v10);
  if ( !v9 )
    goto LABEL_22;
  *(_DWORD *)(v9 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 165, v13);
  *(_QWORD *)(v9 + 24) = ParamArray;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)ParamArray, v15, v16);
  if ( !v8 )
    goto LABEL_22;
  items = v8->fields._items;
  v20 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 4), v9, v17, v18);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 164, v23);
  if ( !Param )
    goto LABEL_22;
  v25 = *(_QWORD *)&Param->max_length;
  v26 = Param;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
        sub_1B00F30(Param, v12);
      v28 = v26->m_Items[v27 + 1];
      v29 = sub_1B00F18(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v29, 0LL);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 164, v28, 0, v30);
      if ( !v29 )
        break;
      *(_DWORD *)(v29 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 165, v28, v31);
      *(_QWORD *)(v29 + 24) = ParamArrayAddTypeIndex;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)ParamArrayAddTypeIndex, v33, v34);
      v37 = v8->fields._items;
      v38 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
      ++v8->fields._version;
      if ( !v37 )
        break;
      v39 = v8->fields._size;
      if ( (unsigned int)v39 >= v37->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v29,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &v37->obj.klass + v39;
        v8->fields._size = v39 + 1;
        v40[4] = (Il2CppClass *)v29;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 4), v29, v35, v36);
      }
      LODWORD(v25) = v26->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v8,
                                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_1B00F28(Param, v12);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v8,
                                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  DataVals_array *result; // x0
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_48E238D & 1) == 0 )
  {
    sub_1B00CCC(&DataVals___TypeInfo, funcTypeList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__FindAll__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v7);
    sub_1B00CCC(&System_Predicate_DataVals__TypeInfo, v8);
    sub_1B00CCC(&Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__, v9);
    sub_1B00CCC(&DataVals___c__DisplayClass35_0_TypeInfo, v10);
    byte_48E238D = 1;
  }
  v11 = sub_1B00F18(DataVals___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = funcTypeList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)funcTypeList, v14, v15);
  result = (DataVals_array *)sub_1B00D74(DataVals___TypeInfo, 0LL);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v18 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_DataVals__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v11,
      Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v18,
            (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_1B00F28(All, v13);
  }
  return result;
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
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v12; // x0
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v14; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  DataVals___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__int__o *_9__37_1; // x20
  Il2CppObject *v22; // x21
  struct DataVals___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_48E238F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_1B00CCC(&System_Func_DataVals__int__TypeInfo, v5);
    sub_1B00CCC(&System_Func_DataVals__bool__TypeInfo, v6);
    sub_1B00CCC(&int___TypeInfo, v7);
    sub_1B00CCC(&Method_DataVals___c__GetDependFuncIdArray_b__37_0__, v8);
    sub_1B00CCC(&Method_DataVals___c__GetDependFuncIdArray_b__37_1__, v9);
    sub_1B00CCC(&DataVals___c_TypeInfo, v10);
    byte_48E238F = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  v12 = DataVals___c_TypeInfo;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v12 = DataVals___c_TypeInfo;
  }
  _9__37_0 = (System_Func_object__bool__o *)v12->static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = DataVals___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__37_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__37_0, v14, Method_DataVals___c__GetDependFuncIdArray_b__37_0__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = (struct System_Func_DataVals__bool__o *)_9__37_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v19 = DataVals___c_TypeInfo;
  v20 = v18;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v19 = DataVals___c_TypeInfo;
  }
  _9__37_1 = (System_Func_object__int__o *)v19->static_fields->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = DataVals___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__37_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(_9__37_1, v22, Method_DataVals___c__GetDependFuncIdArray_b__37_1__, 0LL);
    v23 = DataVals___c_TypeInfo->static_fields;
    v23->__9__37_1 = (struct System_Func_DataVals__int__o *)_9__37_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v23->__9__37_1, (int32_t)_9__37_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__37_1,
                                                               (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v7; // x3
  int32_t Param; // w19
  int32_t v9; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_48E23AD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1B00CCC(&System_Math_TypeInfo, v5);
    byte_48E23AD = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v7);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_61144256(Param, 1, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 100,
                                                                 v9,
                                                                 (const MethodInfo_2D8A7C8 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v10,
             (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_Enum_o v9; // [xsp+8h] [xbp-38h] BYREF
  int v10; // [xsp+18h] [xbp-28h]

  if ( (byte_48E23A8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v3);
    byte_48E23A8 = 1;
  }
  vals = this->fields.vals;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = 51;
  v5 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
  if ( !vals )
    sub_1B00F28(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v5,
         (const MethodInfo_3084E24 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v7);
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

  if ( (byte_48E23AE & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_IntervalData_TypeInfo, method);
    byte_48E23AE = 1;
  }
  if ( !DataVals__isParam(this, 130, v2) && !DataVals__isParam(this, 131, v4) )
    return 0LL;
  v5 = (BattleBuffData_IntervalData_o *)sub_1B00F18(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_41307748(v5, this, 0LL);
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

  if ( (byte_48E239F & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v4);
    byte_48E239F = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v10);
  if ( !result->max_length )
    sub_1B00F30(result, v10);
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
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_48E2392 & 1) == 0 )
  {
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_48E2392 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetParam_37635140(this, type, v7, defaultValue, v8);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x23
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x4
  int32_t v19; // [xsp+8h] [xbp-48h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48E2394 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_24731/*"{0}_{1}"*/, v10);
    byte_48E2394 = 1;
  }
  v20 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(
                          DataVals_TYPE_TypeInfo,
                          &v20,
                          *(_QWORD *)&index,
                          *(_QWORD *)&defaultValue,
                          method);
  v19 = index;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
  v16 = System_String__Format_60340120((System_String_o *)StringLiteral_24731/*"{0}_{1}"*/, v11, v15, 0LL);
  return DataVals__GetParam_37635140(this, type, v16, defaultValue, v17);
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

  if ( (byte_48E23A9 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1B00CCC(&StringLiteral_1/*""*/, v6);
    byte_48E23A9 = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v8);
  if ( Param < 1 )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v12);
  if ( !result->max_length )
    sub_1B00F30(result, v12);
  result->m_Items[1] = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetParamArrayAddTypeIndex(
        DataVals_o *this,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  System_String_o *StrParamAddTypeIndex; // x22
  const MethodInfo *v10; // x4
  int32_t ParamAddTypeIndex; // w0
  int32_t v12; // w19
  System_Int32_array *result; // x0
  __int64 v14; // x1

  if ( (byte_48E23AA & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1B00CCC(&StringLiteral_1/*""*/, v8);
    byte_48E23AA = 1;
  }
  StrParamAddTypeIndex = DataVals__GetStrParamAddTypeIndex(
                           this,
                           paramType,
                           index,
                           (System_String_o *)StringLiteral_1/*""*/,
                           v4);
  if ( !System_String__IsNullOrEmpty(StrParamAddTypeIndex, 0LL) )
    return BasicHelper__Convert2IntArray(StrParamAddTypeIndex, 0x2Fu, 0LL);
  ParamAddTypeIndex = DataVals__GetParamAddTypeIndex(this, paramType, index, 0, v10);
  if ( ParamAddTypeIndex < 1 )
    return 0LL;
  v12 = ParamAddTypeIndex;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v14);
  if ( !result->max_length )
    sub_1B00F30(result, v14);
  result->m_Items[1] = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall DataVals__GetParamAsStringArray(
        DataVals_o *this,
        int32_t type,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *StrParam; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1

  if ( (byte_48E239E & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, *(_QWORD *)&type);
    byte_48E239E = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_1B00F28(IsNullOrEmpty, v10);
  return System_String__Split(StrParam, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam_37635140(
        DataVals_o *this,
        int32_t type,
        System_String_o *name,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8

  if ( (byte_48E2393 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    byte_48E2393 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_3084E24 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_1B00F28(vals, *(_QWORD *)&type);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_3084BB0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  defaultValue = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return ((__int64 (__fastcall *)(struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, void *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.method)(
             FuncParamValueUpInfo_k__BackingField,
             (unsigned int)type,
             Item,
             FuncParamValueUpInfo_k__BackingField->klass[1]._1.image);
  return defaultValue;
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

  if ( (byte_48E23A0 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v4);
    byte_48E23A0 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v10);
  if ( !result->max_length )
    sub_1B00F30(result, v10);
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
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_48E2396 & 1) == 0 )
  {
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_48E2396 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetStrParam_37636104(this, v7, defaultValue, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__GetStrParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  int32_t v19; // [xsp+8h] [xbp-48h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48E2398 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_24731/*"{0}_{1}"*/, v10);
    byte_48E2398 = 1;
  }
  v20 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v20, *(_QWORD *)&index, defaultValue, method);
  v19 = index;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
  v16 = System_String__Format_60340120((System_String_o *)StringLiteral_24731/*"{0}_{1}"*/, v11, v15, 0LL);
  return DataVals__GetStrParam_37636104(this, v16, defaultValue, v17);
}


System_String_o *__fastcall DataVals__GetStrParam_37636104(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v10; // x0

  if ( (byte_48E2397 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, name);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v7);
    byte_48E2397 = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v10 = this->fields.strVals;
  if ( !v10 )
    sub_1B00F28(0LL, v9);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v10,
                              (Il2CppObject *)name,
                              (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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

  if ( (byte_48E239C & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v4);
    byte_48E239C = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v10);
  if ( !result->max_length )
    sub_1B00F30(result, v10);
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

  if ( (byte_48E23A1 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v4);
    byte_48E23A1 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v10);
  if ( !result->max_length )
    sub_1B00F30(result, v10);
  result->m_Items[1] = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetTargetTypeIndexArray(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_T__TResult__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__int__o *v35; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v36; // x0
  DataVals___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_int__int__o *_9__131_2; // x20
  Il2CppObject *v40; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int32_t v46; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_48E23B0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_OrderBy_int__int___, *(_QWORD *)&type);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____, v8);
    sub_1B00CCC(&System_Func_int__int__TypeInfo, v9);
    sub_1B00CCC(&System_Func_KeyValuePair_string__int___bool__TypeInfo, v10);
    sub_1B00CCC(&System_Func_string__int__TypeInfo, v11);
    sub_1B00CCC(&System_Func_KeyValuePair_string__int___string__TypeInfo, v12);
    sub_1B00CCC(&Method_System_Int32_Parse__, v13);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v14);
    sub_1B00CCC(&Method_DataVals___c__GetTargetTypeIndexArray_b__131_2__, v15);
    sub_1B00CCC(&Method_DataVals___c__DisplayClass131_0__GetTargetTypeIndexArray_b__0__, v16);
    sub_1B00CCC(&Method_DataVals___c__DisplayClass131_0__GetTargetTypeIndexArray_b__1__, v17);
    sub_1B00CCC(&DataVals___c__DisplayClass131_0_TypeInfo, v18);
    sub_1B00CCC(&DataVals___c_TypeInfo, v19);
    sub_1B00CCC(&StringLiteral_24729/*"{0}_"*/, v20);
    byte_48E23B0 = 1;
  }
  v21 = sub_1B00F18(DataVals___c__DisplayClass131_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  v46 = type;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v46, v22, v23, v24);
  v26 = System_String__Format((System_String_o *)StringLiteral_24729/*"{0}_"*/, v25, 0LL);
  if ( !v21 )
    sub_1B00F28(v26, v27);
  *(_QWORD *)(v21 + 16) = v26;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)v26, v28, v29);
  vals = this->fields.vals;
  v31 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_KeyValuePair_string__int___bool__TypeInfo);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass131_0__GetTargetTypeIndexArray_b__0__,
    0LL);
  v32 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2D9BF5C *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v33 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_KeyValuePair_string__int___string__TypeInfo);
  System_Func_KeyValuePair_object__int___object____ctor(
    v33,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass131_0__GetTargetTypeIndexArray_b__1__,
    0LL);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_2D8BE20 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v35 = (System_Func_object__int__o *)sub_1B00F18(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v35, 0LL, Method_System_Int32_Parse__, 0LL);
  v36 = System_Linq_Enumerable__Select_object__int_(
          v34,
          (System_Func_TSource__TResult__o *)v35,
          (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_string__int___);
  v37 = DataVals___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v37 = DataVals___c_TypeInfo;
  }
  _9__131_2 = v37->static_fields->__9__131_2;
  if ( !_9__131_2 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = DataVals___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__131_2 = (System_Func_int__int__o *)sub_1B00F18(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__131_2, v40, Method_DataVals___c__GetTargetTypeIndexArray_b__131_2__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__131_2 = _9__131_2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__131_2, (int32_t)_9__131_2, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v38,
                                                               (System_Func_TSource__TKey__o *)_9__131_2,
                                                               (const MethodInfo_2D89AF0 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v44,
           (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

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

  if ( (byte_48E239D & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&type);
    sub_1B00CCC(&StringLiteral_1/*""*/, v6);
    byte_48E239D = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v8);
  if ( !Param )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v12);
  if ( !result->max_length )
    sub_1B00F30(result, v12);
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

  if ( (byte_48E23A3 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E23A3 = 1;
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

  if ( (byte_48E23A4 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E23A4 = 1;
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


bool __fastcall DataVals__IsAdjustmentBuffTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  return DataVals__isParam(this, 166, v2)
      || DataVals__isParam(this, 167, v4)
      || DataVals__isParam(this, 168, v5)
      || DataVals__isParam(this, 169, v6);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_48E23A7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_IndexValue_bool___, *(_QWORD *)&index);
    byte_48E23A7 = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2D51904 *)Method_BasicHelper_IndexValue_bool___);
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


bool __fastcall DataVals__IsExtendBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 166, v2);
}


bool __fastcall DataVals__IsExtendBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 168, v2);
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


bool __fastcall DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 170, v2);
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
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_bool__int__bool__o *v13; // x21
  const MethodInfo *v14; // x4

  if ( (byte_48E23AB & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_bool__int__bool__TypeInfo, *(_QWORD *)&paramType);
    sub_1B00CCC(&Method_DataVals___c__DisplayClass102_0__IsSatisfyAboveBelowCondition_b__0__, v7);
    sub_1B00CCC(&DataVals___c__DisplayClass102_0_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_1593/*"<"*/, v9);
    byte_48E23AB = 1;
  }
  v10 = sub_1B00F18(DataVals___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B00F28(v11, v12);
  *(_DWORD *)(v10 + 16) = compareVal;
  v13 = (System_Func_bool__int__bool__o *)sub_1B00F18(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_DataVals___c__DisplayClass102_0__IsSatisfyAboveBelowCondition_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, paramType, (System_String_o *)StringLiteral_1593/*"<"*/, v13, v14);
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
  System_String_o *StrParam; // x22
  __int64 IsMatch; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x21
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  System_String_o *v31; // x21
  int v32; // w8
  __int64 v33; // x22
  unsigned int v34; // w25
  System_String_o *v35; // x23
  System_String_o *v36; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48E23AC & 1) == 0 )
  {
    sub_1B00CCC(&System_Text_RegularExpressions_Regex_TypeInfo, *(_QWORD *)&paramType);
    sub_1B00CCC(&string___TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_783/*"(^"*/, v10);
    sub_1B00CCC(&StringLiteral_15819/*"\\d+$|^\\d+"*/, v11);
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    sub_1B00CCC(&StringLiteral_486/*"$)"*/, v13);
    byte_48E23AC = 1;
  }
  result = 0;
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam, 0LL) )
    return 1;
  IsMatch = sub_1B00D74(string___TypeInfo, 5LL);
  if ( !IsMatch )
    goto LABEL_25;
  v19 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v20 = StringLiteral_783/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_783/*"(^"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(IsMatch + 32), v20, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u
    || (*(_QWORD *)(v19 + 40) = compareKey,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 40), (int32_t)compareKey, v21, v22),
        *(_DWORD *)(v19 + 24) <= 2u)
    || (v25 = StringLiteral_15819/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v19 + 48) = StringLiteral_15819/*"\\d+$|^\\d+"*/,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 48), v25, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (*(_QWORD *)(v19 + 56) = compareKey,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 56), (int32_t)compareKey, v26, v27),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_26:
    sub_1B00F30(IsMatch, v16);
  }
  v30 = StringLiteral_486/*"$)"*/;
  *(_QWORD *)(v19 + 64) = StringLiteral_486/*"$)"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 64), v30, v28, v29);
  IsMatch = (__int64)System_String__Concat_60339276((System_String_array *)v19, 0LL);
  if ( !StrParam
    || (v31 = (System_String_o *)IsMatch, (IsMatch = (__int64)System_String__Split(StrParam, 0x2Fu, 0, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B00F28(IsMatch, v16);
  }
  v32 = *(_DWORD *)(IsMatch + 24);
  v33 = IsMatch;
  if ( v32 < 1 )
    return 1;
  v34 = 0;
  while ( 1 )
  {
    if ( v34 >= v32 )
      goto LABEL_26;
    v35 = *(System_String_o **)(v33 + 8LL * (int)v34 + 32);
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v35, v31, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v35 )
      goto LABEL_25;
    v36 = System_String__Replace_60345368(v35, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v36, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v35, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_25;
    IsMatch = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))funcCompare->fields.m_target)(
                funcCompare->fields.original_method_info,
                IsMatch & 1,
                (unsigned int)result,
                *(_QWORD *)&funcCompare->fields.extra_arg);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v32 = *(_DWORD *)(v33 + 24);
    if ( (int)++v34 >= v32 )
      return 1;
  }
}


bool __fastcall DataVals__IsShortenBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 167, v2);
}


bool __fastcall DataVals__IsShortenBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 169, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x20
  Il2CppObject *v7; // x0
  System_Enum_o v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h]

  if ( (byte_48E239A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v5);
    byte_48E239A = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v11 = type;
    v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v10.monitor = (void *)-1LL;
    v7 = (Il2CppObject *)System_Enum__ToString(&v10, 0LL);
    return System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)strVals,
             v7,
             (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
    sub_1B00F28(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void __fastcall DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  struct System_Collections_Generic_List_DataVals__o **p_dependDataValsList; // x22
  int32_t size; // w2
  int v16; // w9
  DataVals_c **v17; // x28
  System_String_o **v18; // x27
  System_String_o **v19; // x20
  int32_t v20; // w23
  int32_t i; // w24
  DataVals_c *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x5
  DataVals_o *v25; // x26
  const MethodInfo *v26; // x3
  System_String_o *v27; // x0
  const MethodInfo *v28; // x5
  System_String_o *v29; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v31; // x1
  DataVals_c **v32; // x29
  System_String_o **v33; // x28
  System_String_o **v34; // x20
  System_Collections_Generic_List_object__o *v35; // x27
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x0
  DataVals_o *v40; // x26
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_Fields fields; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  __int64 v49; // x8
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E238C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, funcMst);
    sub_1B00CCC(&DataVals_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__Clear__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_DataVals__TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_15581/*"["*/, v10);
    sub_1B00CCC(&StringLiteral_1/*""*/, v11);
    sub_1B00CCC(&StringLiteral_15837/*"]"*/, v12);
    byte_48E238C = 1;
  }
  result = 0;
  p_dependDataValsList = &this->fields.dependDataValsList;
  dependDataValsList = this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    size = dependDataValsList->fields._size;
    v16 = dependDataValsList->fields._version + 1;
    dependDataValsList->fields._size = 0;
    dependDataValsList->fields._version = v16;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dependDataValsList->fields._items, 0, size, 0LL);
  }
  v17 = &DataVals_TypeInfo;
  v18 = (System_String_o **)&StringLiteral_15581/*"["*/;
  v19 = (System_String_o **)&StringLiteral_15837/*"]"*/;
  v20 = 0;
  for ( i = 1; ; ++i )
  {
    v22 = *v17;
    if ( !(*v17)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = *v17;
    }
    if ( i > v22->static_fields->MAX_DEPEND_FUNC )
      break;
    v23 = DataVals__ConcatenateTypeValue((DataVals_o *)v22, 44, i, method);
    v25 = (DataVals_o *)DataVals__cutValue(this, v23, 0x5Bu, 0x5Du, 1, v24);
    v27 = DataVals__ConcatenateTypeValue(v25, 45, i, v26);
    v29 = DataVals__cutValue(this, v27, 0x5Bu, 0x5Du, 1, v28);
    if ( System_String__IsNullOrEmpty((System_String_o *)v25, 0LL) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v29, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !*p_dependDataValsList )
    {
      v32 = v17;
      v33 = v19;
      v34 = v18;
      v35 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v36 = (int)v35;
      *p_dependDataValsList = (struct System_Collections_Generic_List_DataVals__o *)v35;
      v18 = v34;
      v19 = v33;
      v17 = v32;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.dependDataValsList, v36, v37, v38);
    }
    result = 0;
    if ( !v25
      || (IsNullOrEmpty = System_String__Replace_60345368(
                            (System_String_o *)v25,
                            *v18,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
LABEL_27:
      sub_1B00F28(IsNullOrEmpty, v31);
    }
    v39 = System_String__Replace_60345368(IsNullOrEmpty, *v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( System_Int32__TryParse(v39, &result, 0LL) )
    {
      v40 = (DataVals_o *)sub_1B00F18(*v17);
      DataVals___ctor(v40, v29, v41);
      IsNullOrEmpty = (System_String_o *)funcMst;
      if ( !funcMst )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst,
                                           result,
                                           (const MethodInfo_2FE6A4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v40 )
        goto LABEL_27;
      DataVals__SetType_37632828(v40, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v42);
      v40->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v20, v43);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      fields = IsNullOrEmpty->fields;
      v47 = Method_System_Collections_Generic_List_DataVals__Add__;
      ++HIDWORD(IsNullOrEmpty[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_27;
      klass_low = SLODWORD(IsNullOrEmpty[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (Il2CppObject *)v40,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v49 + 32) = v40;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)v40, v44, v45);
      }
      ++v20;
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
  struct System_Boolean_array *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *v13; // x8
  struct System_Boolean_array *v14; // x21
  unsigned __int64 v15; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v17; // x2

  if ( (byte_48E23A6 & 1) == 0 )
  {
    sub_1B00CCC(&bool___TypeInfo, dependDataList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__get_Item__, v6);
    byte_48E23A6 = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v9 = (struct System_Boolean_array *)sub_1B00D74(bool___TypeInfo, size);
        v13 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v13 )
LABEL_13:
          sub_1B00F28(v9, v10);
        v14 = v9;
        v15 = 0LL;
        while ( (__int64)v15 < v13->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v13,
                   v15,
                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v9 = (struct System_Boolean_array *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)dependDataList,
                                                v15,
                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v9 = (struct System_Boolean_array *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v9, v17);
            if ( v14 )
            {
              if ( v15 >= v14->max_length )
                sub_1B00F30(v9, v10);
              v14->m_Items[v15 + 4] = (unsigned __int8)v9 & 1;
              v13 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              ++v15;
              if ( v13 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = v14;
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (int32_t)v14,
          v11,
          v12);
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
  ServantStatusBattleListViewItem_o *p_svals; // x21
  struct System_String_o *svals; // x22
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t funcIndex; // [xsp+Ch] [xbp-24h] BYREF

  funcIndex = 0;
  p_svals = (ServantStatusBattleListViewItem_o *)&this->fields.svals;
  svals = this->fields.svals;
  DataVals__SetDependDataVals(this, funcMst, &funcIndex, method);
  DataVals__SetType(this, ft, v8);
  p_svals->klass = (ServantStatusBattleListViewItem_c *)svals;
  sub_1B00C70(p_svals, (int32_t)svals, v9, v10);
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
  void *svals; // x0
  __int64 v15; // x8
  _DWORD *v16; // x29
  DataVals_TYPE_c **v17; // x24
  unsigned __int64 v18; // x26
  char *v19; // x20
  Il2CppObject *v20; // x22
  int32_t funcType; // w8
  void *v22; // x23
  DataVals_o *v23; // x29
  DataVals_TYPE_c **v24; // x27
  System_Collections_Generic_Dictionary_object__object__o *v25; // x24
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int v29; // w8
  System_Enum_c *v30; // x8
  _DWORD *v31; // [xsp+0h] [xbp-90h]
  ServantStatusBattleListViewItem_o *p_strVals; // [xsp+8h] [xbp-88h]
  System_Enum_o v33; // [xsp+10h] [xbp-80h] BYREF
  int v34; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_48E238B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, *(_QWORD *)&ft);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v9);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_15581/*"["*/, v11);
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    sub_1B00CCC(&StringLiteral_15837/*"]"*/, v13);
    byte_48E238B = 1;
  }
  result = 0;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals
    || (svals = System_String__Replace_60345368(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15581/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_60345368(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15837/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_70:
    sub_1B00F28(svals, *(_QWORD *)&ft);
  }
  v15 = *((_QWORD *)svals + 3);
  v16 = svals;
  if ( (int)v15 >= 1 )
  {
    v17 = &DataVals_TYPE_TypeInfo;
    v18 = 0LL;
    v19 = (char *)svals + 32;
    v31 = svals;
    p_strVals = (ServantStatusBattleListViewItem_o *)&this->fields.strVals;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v15 )
LABEL_71:
        sub_1B00F30(svals, *(_QWORD *)&ft);
      v20 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v19[8 * v18], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v18 >= (unsigned int)v16[6] )
          goto LABEL_71;
        svals = *(void **)&v19[8 * v18];
        if ( !svals )
          goto LABEL_70;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_70;
        v22 = svals;
        if ( *((int *)svals + 6) >= 2 )
        {
          v20 = (Il2CppObject *)*((_QWORD *)svals + 4);
          if ( !System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL) )
          {
            svals = p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v23 = this;
              v24 = v17;
              v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v25,
                (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              v26 = (int)v25;
              p_strVals->klass = (ServantStatusBattleListViewItem_c *)v25;
              v17 = v24;
              this = v23;
              v16 = v31;
              sub_1B00C70(p_strVals, v26, v27, v28);
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_70;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              v20,
                              (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( *((_DWORD *)v22 + 6) <= 1u )
                goto LABEL_71;
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_70;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                v20,
                *((Il2CppObject **)v22 + 5),
                (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
            }
          }
        }
        goto LABEL_59;
      }
      funcType = this->fields.funcType;
      if ( funcType <= 47 )
      {
        if ( funcType <= 10 )
        {
          if ( funcType != 1 )
          {
            if ( funcType == 2 || (unsigned int)(funcType - 9) <= 1 )
              goto LABEL_40;
LABEL_49:
            if ( (_DWORD)v18 != 2 )
              goto LABEL_50;
LABEL_56:
            v33.klass = (System_Enum_c *)*v17;
            v33.monitor = (void *)-1LL;
            v29 = 6;
LABEL_57:
            v34 = v29;
LABEL_58:
            v20 = (Il2CppObject *)System_Enum__ToString(&v33, 0LL);
            goto LABEL_59;
          }
          goto LABEL_42;
        }
        if ( ((1LL << funcType) & 0x800008048000LL) == 0 )
        {
          if ( funcType != 16LL )
            goto LABEL_49;
LABEL_42:
          switch ( (int)v18 )
          {
            case 0:
              goto LABEL_52;
            case 1:
              v33.klass = (System_Enum_c *)*v17;
              v33.monitor = (void *)-1LL;
              v34 = 1;
              goto LABEL_58;
            case 2:
              v33.klass = (System_Enum_c *)*v17;
              v33.monitor = (void *)-1LL;
              v29 = 2;
              goto LABEL_57;
            case 3:
              goto LABEL_54;
            case 4:
              v33.klass = (System_Enum_c *)*v17;
              v33.monitor = (void *)-1LL;
              v29 = 5;
              goto LABEL_57;
            case 5:
              goto LABEL_44;
            default:
              goto LABEL_59;
          }
          goto LABEL_59;
        }
        goto LABEL_47;
      }
      if ( funcType <= 62 )
        break;
      if ( funcType > 129 )
      {
        if ( funcType == 133 || funcType == 131 )
          goto LABEL_40;
        if ( funcType != 130 )
          goto LABEL_49;
        goto LABEL_42;
      }
      if ( funcType != 109 )
      {
        if ( funcType != 121 )
          goto LABEL_49;
LABEL_47:
        switch ( (int)v18 )
        {
          case 0:
            goto LABEL_52;
          case 1:
            goto LABEL_54;
          case 2:
            goto LABEL_56;
          case 3:
            v33.klass = (System_Enum_c *)*v17;
            v33.monitor = (void *)-1LL;
            v29 = 7;
            goto LABEL_57;
          default:
            goto LABEL_59;
        }
        goto LABEL_59;
      }
      switch ( (int)v18 )
      {
        case 0:
          goto LABEL_52;
        case 1:
          goto LABEL_54;
        case 2:
          goto LABEL_56;
        case 3:
          v33.klass = (System_Enum_c *)*v17;
          v33.monitor = (void *)-1LL;
          v29 = 76;
          goto LABEL_57;
        default:
          break;
      }
LABEL_59:
      svals = (void *)System_String__op_Inequality((System_String_o *)v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)svals & 1) != 0 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_70;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          v20,
                          (const MethodInfo_3084E24 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_70;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v20,
            result,
            (const MethodInfo_3084C30 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v15) = v16[6];
      if ( (__int64)++v18 >= (int)v15 )
        return;
    }
    if ( funcType == 52 )
      goto LABEL_40;
    if ( funcType != 55 )
    {
      if ( funcType != 62 )
        goto LABEL_49;
LABEL_40:
      if ( (_DWORD)v18 == 2 )
      {
LABEL_44:
        v33.klass = (System_Enum_c *)*v17;
        v33.monitor = (void *)-1LL;
        v29 = 4;
        goto LABEL_57;
      }
LABEL_50:
      if ( (_DWORD)v18 == 1 )
      {
LABEL_54:
        v30 = (System_Enum_c *)*v17;
        v34 = 3;
      }
      else
      {
        if ( (_DWORD)v18 )
          goto LABEL_59;
LABEL_52:
        v30 = (System_Enum_c *)*v17;
        v34 = 0;
      }
      v33.klass = v30;
      v33.monitor = (void *)-1LL;
      goto LABEL_58;
    }
    goto LABEL_47;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_37632828(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( !funcEnt )
    sub_1B00F28(this, 0LL);
  v6 = (ServantStatusBattleListViewItem_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.sortValue0B = (int64_t)funcEnt;
  v6 = (ServantStatusBattleListViewItem_o *)((char *)v6 + 40);
  sub_1B00C70(v6, (int32_t)funcEnt, v7, v8);
  HIDWORD(v6[-1].fields.name) = funcEnt->fields.targetType;
  *(_DWORD *)&v6[-1].fields.isMine = funcIndex;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_Enum_o v12; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+18h] [xbp-38h]

  if ( (byte_48E239B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, *(_QWORD *)&type);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v7);
    byte_48E239B = 1;
  }
  vals = this->fields.vals;
  v12.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v12.monitor = (void *)-1LL;
  v13 = type;
  v9 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
  if ( !vals )
    sub_1B00F28(v9, v10);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v9,
           param,
           (const MethodInfo_30863EC *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_48E2395 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, name);
    byte_48E2395 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B00F28(0LL, name);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_30863EC *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_T__TResult__o *v7; // x21

  if ( (byte_48E23A5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_DataVals_OverChargeState___, targetStateArray);
    sub_1B00CCC(&Method_DataVals_IsOverChargeState__, v5);
    sub_1B00CCC(&System_Func_DataVals_OverChargeState__bool__TypeInfo, v6);
    byte_48E23A5 = 1;
  }
  v7 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v7, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0LL);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__47507016(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v7,
                                                 (const MethodInfo_2D4E648 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
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
  __int64 v12; // x1
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v19; // w0
  int32_t v20; // w23
  int32_t v21; // w22
  int32_t v22; // w0
  int32_t v23; // w24
  System_String_o *v24; // x21
  System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int16 v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48E238E & 1) == 0 )
  {
    sub_1B00CCC(&char_TypeInfo, key);
    sub_1B00CCC(&StringLiteral_865/*","*/, v11);
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48E238E = 1;
  }
  v29 = 58;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v13 = System_Char__ToString((uint16_t)&v29, 0LL);
  v14 = System_String__Concat_60337008((System_String_o *)StringLiteral_865/*","*/, key, v13, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v16 = svals;
  if ( !svals )
    goto LABEL_18;
  v19 = System_String__IndexOf_60357184(v16, v14, 0LL);
  if ( v19 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v20 = v19;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v14 = (System_String_o *)System_String__IndexOf_60355832(v14, startWord, v20, 0LL);
  if ( !*p_svals )
    goto LABEL_18;
  v21 = (int)v14;
  v22 = System_String__IndexOf_60355832(*p_svals, endWord, v20, 0LL);
  if ( v21 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v23 = v22;
  if ( v22 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v24 = System_String__Substring_60344744(v14, v21, v23 - v21 + 1, 0LL);
  if ( isDelKeyValue )
  {
    v14 = *p_svals;
    if ( *p_svals )
    {
      v14 = System_String__Substring_60344744(v14, v20, v23 - v20 + 1, 0LL);
      if ( *p_svals )
      {
        v25 = System_String__Replace_60345368(*p_svals, v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        *p_svals = v25;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)p_svals, (int32_t)v25, v26, v27);
        return v24;
      }
    }
LABEL_18:
    sub_1B00F28(v14, v15);
  }
  return v24;
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
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_48E2399 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v5);
    byte_48E2399 = 1;
  }
  vals = this->fields.vals;
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = (Il2CppObject *)System_Enum__ToString(&v10, 0LL);
  if ( !vals )
    sub_1B00F28(v7, v8);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v7,
           (const MethodInfo_3084E24 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
  void *svals; // x0
  __int64 v9; // x8
  _DWORD *v10; // x20
  unsigned __int64 v11; // x23
  char *v12; // x27
  Il2CppObject *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_Enum_o v16; // [xsp+0h] [xbp-80h] BYREF
  int v17; // [xsp+10h] [xbp-70h]
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E2390 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v3);
    sub_1B00CCC(&DataVals_TYPE_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_15581/*"["*/, v5);
    sub_1B00CCC(&StringLiteral_1/*""*/, v6);
    sub_1B00CCC(&StringLiteral_15837/*"]"*/, v7);
    byte_48E2390 = 1;
  }
  result = 0;
  svals = this->fields.svals;
  if ( !svals
    || (svals = System_String__Replace_60345368(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15581/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_60345368(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15837/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1B00F28(svals, method);
  }
  v9 = *((_QWORD *)svals + 3);
  v10 = svals;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    v12 = (char *)svals + 32;
    do
    {
      if ( v11 >= (unsigned int)v9 )
LABEL_25:
        sub_1B00F30(svals, method);
      v13 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v12[8 * v11], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v11 >= (unsigned int)v10[6] )
          goto LABEL_25;
        svals = *(void **)&v12[8 * v11];
        if ( !svals )
          goto LABEL_24;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_24;
        if ( *((int *)svals + 6) >= 2 )
        {
          v13 = (Il2CppObject *)*((_QWORD *)svals + 4);
          System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL);
        }
      }
      svals = this->fields.vals;
      if ( !svals )
        goto LABEL_24;
      svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_object__int__o *)svals,
                        v13,
                        (const MethodInfo_3084E24 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        v17 = 16;
        v16.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
        v16.monitor = (void *)-1LL;
        v14 = System_Enum__ToString(&v16, 0LL);
        if ( System_String__op_Equality(v14, (System_String_o *)v13, 0LL)
          || (v16.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo,
              v16.monitor = (void *)-1LL,
              v17 = 17,
              v15 = System_Enum__ToString(&v16, 0LL),
              svals = (void *)System_String__op_Equality(v15, (System_String_o *)v13, 0LL),
              ((unsigned __int8)svals & 1) != 0) )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v13,
            result,
            (const MethodInfo_3084C30 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v9) = v10[6];
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
}


void __fastcall DataVals__set_FuncParamValueUpInfo(
        DataVals_o *this,
        FuncParamValueUpInfoBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._FuncParamValueUpInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DataVals__set_dependOverChargeArray(
        DataVals_o *this,
        System_Boolean_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._dependOverChargeArray_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DataVals__set_isOverCharge(DataVals_o *this, bool value, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = value;
}


void __fastcall DataVals___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E23B3 & 1) == 0 )
  {
    sub_1B00CCC(&DataVals___c_TypeInfo, v1);
    byte_48E23B3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(DataVals___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)DataVals___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__37_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_1B00F28(this, x);
  return funcEnt->fields.id;
}


int32_t __fastcall DataVals___c___GetTargetTypeIndexArray_b__131_2(
        DataVals___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall DataVals___c__DisplayClass102_0___ctor(
        DataVals___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass102_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass102_0_o *this,
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


void __fastcall DataVals___c__DisplayClass131_0___ctor(
        DataVals___c__DisplayClass131_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass131_0___GetTargetTypeIndexArray_b__0(
        DataVals___c__DisplayClass131_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass131_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_48E23B4 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass131_0_o *)sub_1B00CCC(
                                                  &Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__,
                                                  x.fields.key);
    byte_48E23B4 = 1;
  }
  if ( !key )
    sub_1B00F28(this, x.fields.key);
  return System_String__StartsWith(key, v4->fields.key, 0LL);
}


System_String_o *__fastcall DataVals___c__DisplayClass131_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass131_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass131_0_o *v4; // x20
  __int64 v5; // x1

  key = x.fields.key;
  v4 = this;
  if ( (byte_48E23B5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, x.fields.key);
    this = (DataVals___c__DisplayClass131_0_o *)sub_1B00CCC(&StringLiteral_1/*""*/, v5);
    byte_48E23B5 = 1;
  }
  if ( !key )
    sub_1B00F28(this, x.fields.key);
  return System_String__Replace_60345368(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  if ( (byte_48E23B6 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass35_0_o *)sub_1B00CCC(
                                                 &Method_System_Collections_Generic_List_FuncList_TYPE__Contains__,
                                                 x);
    byte_48E23B6 = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass35_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_1B00F28(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_33A7550 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}