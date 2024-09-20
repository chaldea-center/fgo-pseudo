void __fastcall DataVals___cctor(const MethodInfo *method)
{
  if ( (byte_4A5ACDD & 1) == 0 )
  {
    sub_1B885B0(&DataVals_TypeInfo);
    byte_4A5ACDD = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5ACAE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
    byte_4A5ACAE = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  *(_QWORD *)&this->fields.targetCardIndex = -1LL;
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
  System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
    v8,
    (const MethodInfo_31672C4 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
  this->fields.invalidCauseDict = (struct System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.invalidCauseDict, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svals, (int32_t)str, v11, v12);
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
    sub_1B8880C(Param, v7);
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
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+0h] [xbp-40h] BYREF
  int32_t v9; // [xsp+10h] [xbp-30h]
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = value;
  if ( (byte_4A5ACB5 & 1) == 0 )
  {
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    byte_4A5ACB5 = 1;
  }
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = type;
  v5 = System_Enum__ToString(&v8, 0LL);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_61707032(v5, v6, 0LL);
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

  if ( (byte_4A5ACC7 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACC7 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v9);
  if ( !result->max_length )
    sub_1B88814(result, v9);
  result->m_Items[1] = v7;
  return result;
}


int32_t __fastcall DataVals__GetBgmPriority(DataVals_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5ACD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5ACD9 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 159, &param, v3) || DataVals__TryGetParam(this, 110, &param, v6) )
    return param;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v9);
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
  int32_t result; // w0
  const MethodInfo *v5; // x3

  result = this->fields.targetCardIndex;
  if ( result == -1 )
  {
    if ( DataVals__isParam(this, 66, v2) )
      return DataVals__GetParam(this, 66, 0, v5);
    else
      return -1;
  }
  return result;
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
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x21
  const MethodInfo *v6; // x3
  System_Int32_array *Param; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Int32_array *ParamArray; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x2
  __int64 v21; // x8
  System_Int32_array *v22; // x21
  unsigned __int64 v23; // x26
  int32_t v24; // w23
  __int64 v25; // x22
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x3
  System_Int32_array *ParamArrayAddTypeIndex; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4A5ACDB & 1) == 0 )
  {
    sub_1B885B0(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
    byte_4A5ACDB = 1;
  }
  if ( !DataVals__isParam(this, 164, v2) )
    return 0LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v5 = sub_1B887FC(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v5, 0LL);
  Param = (System_Int32_array *)DataVals__GetParam(this, 164, 0, v6);
  if ( !v5 )
    goto LABEL_22;
  *(_DWORD *)(v5 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 165, v9);
  *(_QWORD *)(v5 + 24) = ParamArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)ParamArray, v11, v12);
  if ( !v4 )
    goto LABEL_22;
  items = v4->fields._items;
  v16 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v4->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v5,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v5, v13, v14);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 164, v19);
  if ( !Param )
    goto LABEL_22;
  v21 = *(_QWORD *)&Param->max_length;
  v22 = Param;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
        sub_1B88814(Param, v8);
      v24 = v22->m_Items[v23 + 1];
      v25 = sub_1B887FC(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v25, 0LL);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 164, v24, 0, v26);
      if ( !v25 )
        break;
      *(_DWORD *)(v25 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 165, v24, v27);
      *(_QWORD *)(v25 + 24) = ParamArrayAddTypeIndex;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)ParamArrayAddTypeIndex, v29, v30);
      v33 = v4->fields._items;
      v34 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
      ++v4->fields._version;
      if ( !v33 )
        break;
      v35 = v4->fields._size;
      if ( (unsigned int)v35 >= v33->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v25,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &v33->obj.klass + v35;
        v4->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), v25, v31, v32);
      }
      LODWORD(v21) = v22->max_length;
      if ( (__int64)++v23 >= (int)v21 )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v4,
                                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_1B8880C(Param, v8);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v4,
                                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  DataVals_array *result; // x0
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4A5ACB1 & 1) == 0 )
  {
    sub_1B885B0(&DataVals___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1B885B0(&System_Predicate_DataVals__TypeInfo);
    sub_1B885B0(&Method_DataVals___c__DisplayClass39_0__GetDependDataValsArray_b__0__);
    sub_1B885B0(&DataVals___c__DisplayClass39_0_TypeInfo);
    byte_4A5ACB1 = 1;
  }
  v6 = sub_1B887FC(DataVals___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 16) = funcTypeList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)funcTypeList, v9, v10);
  result = (DataVals_array *)sub_1B88658(DataVals___TypeInfo, 0LL);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DataVals__TypeInfo);
    System_Predicate_object____ctor(
      v13,
      (Il2CppObject *)v6,
      Method_DataVals___c__DisplayClass39_0__GetDependDataValsArray_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v13,
            (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_1B8880C(All, v8);
  }
  return result;
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v4; // x0
  System_Func_object__bool__o *_9__41_0; // x20
  Il2CppObject *v6; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  DataVals___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__41_1; // x20
  Il2CppObject *v14; // x21
  struct DataVals___c_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4A5ACB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_1B885B0(&System_Func_DataVals__int__TypeInfo);
    sub_1B885B0(&System_Func_DataVals__bool__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_DataVals___c__GetDependFuncIdArray_b__41_0__);
    sub_1B885B0(&Method_DataVals___c__GetDependFuncIdArray_b__41_1__);
    sub_1B885B0(&DataVals___c_TypeInfo);
    byte_4A5ACB3 = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  v4 = DataVals___c_TypeInfo;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v4 = DataVals___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v4->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = DataVals___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v6, Method_DataVals___c__GetDependFuncIdArray_b__41_0__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_DataVals__bool__o *)_9__41_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_DataVals___);
  v11 = DataVals___c_TypeInfo;
  v12 = v10;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v11 = DataVals___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__int__o *)v11->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = DataVals___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__41_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(_9__41_1, v14, Method_DataVals___c__GetDependFuncIdArray_b__41_1__, 0LL);
    v15 = DataVals___c_TypeInfo->static_fields;
    v15->__9__41_1 = (struct System_Func_DataVals__int__o *)_9__41_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->__9__41_1, (int32_t)_9__41_1, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__41_1,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4A5ACD7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5ACD7 = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v5);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = System_Math__Max_62525680(Param, 1, 0LL);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                100,
                                                                v7,
                                                                (const MethodInfo_2EAA8E8 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v8,
             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Enum_o v8; // [xsp+8h] [xbp-38h] BYREF
  int v9; // [xsp+18h] [xbp-28h]

  if ( (byte_4A5ACCF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    byte_4A5ACCF = 1;
  }
  vals = this->fields.vals;
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = 51;
  v4 = (Il2CppObject *)System_Enum__ToString(&v8, 0LL);
  if ( !vals )
    sub_1B8880C(v4, v5);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v4,
         (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v6);
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

  if ( (byte_4A5ACD8 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_IntervalData_TypeInfo);
    byte_4A5ACD8 = 1;
  }
  if ( !DataVals__isParam(this, 130, v2) && !DataVals__isParam(this, 131, v4) )
    return 0LL;
  v5 = (BattleBuffData_IntervalData_o *)sub_1B887FC(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_42620720(v5, this, 0LL);
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

  if ( (byte_4A5ACC4 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACC4 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v9);
  if ( !result->max_length )
    sub_1B88814(result, v9);
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


int32_t __fastcall DataVals__GetParam(DataVals_o *this, int32_t type, int32_t defaultValue, const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4A5ACB6 & 1) == 0 )
  {
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    byte_4A5ACB6 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetParam_38858232(this, type, v7, defaultValue, v8);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        int32_t defaultValue,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x4
  int32_t v17; // [xsp+8h] [xbp-48h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ACB8 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    sub_1B885B0(&StringLiteral_25098/*"{0}_{1}"*/);
    byte_4A5ACB8 = 1;
  }
  v18 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(
                         DataVals_TYPE_TypeInfo,
                         &v18,
                         *(_QWORD *)&index,
                         *(_QWORD *)&defaultValue,
                         method);
  v17 = index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  v14 = System_String__Format_61721404((System_String_o *)StringLiteral_25098/*"{0}_{1}"*/, v9, v13, 0LL);
  return DataVals__GetParam_38858232(this, type, v14, defaultValue, v15);
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

  if ( (byte_4A5ACD0 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACD0 = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v7);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v11);
  if ( !result->max_length )
    sub_1B88814(result, v11);
  result->m_Items[1] = v9;
  return result;
}


System_Int32_array *__fastcall DataVals__GetParamArrayAddTypeIndex(
        DataVals_o *this,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_String_o *StrParamAddTypeIndex; // x22
  const MethodInfo *v9; // x4
  int32_t ParamAddTypeIndex; // w0
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1

  if ( (byte_4A5ACD1 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACD1 = 1;
  }
  StrParamAddTypeIndex = DataVals__GetStrParamAddTypeIndex(
                           this,
                           paramType,
                           index,
                           (System_String_o *)StringLiteral_1/*""*/,
                           v4);
  if ( !System_String__IsNullOrEmpty(StrParamAddTypeIndex, 0LL) )
    return BasicHelper__Convert2IntArray(StrParamAddTypeIndex, 0x2Fu, 0LL);
  ParamAddTypeIndex = DataVals__GetParamAddTypeIndex(this, paramType, index, 0, v9);
  if ( ParamAddTypeIndex < 1 )
    return 0LL;
  v11 = ParamAddTypeIndex;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v13);
  if ( !result->max_length )
    sub_1B88814(result, v13);
  result->m_Items[1] = v11;
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1

  if ( (byte_4A5ACC3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACC3 = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_1B8880C(IsNullOrEmpty, v10);
  return System_String__Split(StrParam, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam_38858232(
        DataVals_o *this,
        int32_t type,
        System_String_o *name,
        int32_t defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8

  if ( (byte_4A5ACB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4A5ACB7 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_1B8880C(vals, *(_QWORD *)&type);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1

  if ( (byte_4A5ACC5 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACC5 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v9);
  if ( !result->max_length )
    sub_1B88814(result, v9);
  result->m_Items[1] = v7;
  return result;
}


System_Int32_array *__fastcall DataVals__GetShortenMaxCountArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x19
  System_Array_o *v5; // x0
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_4A5ACDC & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D);
    byte_4A5ACDC = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 183, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0LL) )
  {
    v5 = (System_Array_o *)sub_1B88658(int___TypeInfo, 3LL);
    v7.fields.value = Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
    ParamArray = (System_Collections_ICollection_o *)v5;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v5, v7, 0LL);
  }
  return (System_Int32_array *)ParamArray;
}


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

  if ( (byte_4A5ACBA & 1) == 0 )
  {
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    byte_4A5ACBA = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetStrParam_38859196(this, v7, defaultValue, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__GetStrParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  int32_t v17; // [xsp+8h] [xbp-48h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ACBC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    sub_1B885B0(&StringLiteral_25098/*"{0}_{1}"*/);
    byte_4A5ACBC = 1;
  }
  v18 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v18, *(_QWORD *)&index, defaultValue, method);
  v17 = index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  v14 = System_String__Format_61721404((System_String_o *)StringLiteral_25098/*"{0}_{1}"*/, v9, v13, 0LL);
  return DataVals__GetStrParam_38859196(this, v14, defaultValue, v15);
}


System_String_o *__fastcall DataVals__GetStrParam_38859196(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_4A5ACBB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4A5ACBB = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v9 = this->fields.strVals;
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v9,
                              (Il2CppObject *)name,
                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_Int32_array *__fastcall DataVals__GetTargetBuffIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 186, v2);
}


System_Int32_array *__fastcall DataVals__GetTargetFunctionIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 185, v2);
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

  if ( (byte_4A5ACC1 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACC1 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v9);
  if ( !result->max_length )
    sub_1B88814(result, v9);
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

  if ( (byte_4A5ACC6 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACC6 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v9);
  if ( !result->max_length )
    sub_1B88814(result, v9);
  result->m_Items[1] = v7;
  return result;
}


System_Int32_array *__fastcall DataVals__GetTargetTypeIndexArray(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_T__TResult__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__int__o *v19; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  DataVals___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_int__int__o *_9__140_2; // x20
  Il2CppObject *v24; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v30; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5ACDA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_Func_KeyValuePair_string__int___bool__TypeInfo);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&System_Func_KeyValuePair_string__int___string__TypeInfo);
    sub_1B885B0(&Method_System_Int32_Parse__);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    sub_1B885B0(&Method_DataVals___c__GetTargetTypeIndexArray_b__140_2__);
    sub_1B885B0(&Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__0__);
    sub_1B885B0(&Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__1__);
    sub_1B885B0(&DataVals___c__DisplayClass140_0_TypeInfo);
    sub_1B885B0(&DataVals___c_TypeInfo);
    sub_1B885B0(&StringLiteral_25096/*"{0}_"*/);
    byte_4A5ACDA = 1;
  }
  v5 = sub_1B887FC(DataVals___c__DisplayClass140_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v30 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v30, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_25096/*"{0}_"*/, v9, 0LL);
  if ( !v5 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v5 + 16) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v10, v12, v13);
  vals = this->fields.vals;
  v15 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_string__int___bool__TypeInfo);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2EBCF84 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v17 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_string__int___string__TypeInfo);
  System_Func_KeyValuePair_object__int___object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__1__,
    0LL);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)v17,
                                                               (const MethodInfo_2EABF40 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v19 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v19, 0LL, Method_System_Int32_Parse__, 0LL);
  v20 = System_Linq_Enumerable__Select_object__int_(
          v18,
          (System_Func_TSource__TResult__o *)v19,
          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
  v21 = DataVals___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v21 = DataVals___c_TypeInfo;
  }
  _9__140_2 = v21->static_fields->__9__140_2;
  if ( !_9__140_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = DataVals___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__140_2 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__140_2, v24, Method_DataVals___c__GetTargetTypeIndexArray_b__140_2__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__140_2 = _9__140_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__140_2, (int32_t)_9__140_2, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)_9__140_2,
                                                               (const MethodInfo_2EA9C10 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v28,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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


System_Int32_array *__fastcall DataVals__GetValsList(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *StrParam; // x21
  const MethodInfo *v7; // x3
  int32_t Param; // w0
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1

  if ( (byte_4A5ACC2 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACC2 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v7);
  if ( !Param )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v11);
  if ( !result->max_length )
    sub_1B88814(result, v11);
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

  if ( (byte_4A5ACCA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACCA = 1;
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

  if ( (byte_4A5ACCB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACCB = 1;
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


bool __fastcall DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_4A5ACCE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_bool___);
    byte_4A5ACCE = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2E6E580 *)Method_BasicHelper_IndexValue_bool___);
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


bool __fastcall DataVals__IsHideNoEffect(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Param; // w0
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  __int64 Value_int__Int32Enum; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_DataVals_InvalidCause__o *v11; // x19
  System_Func_T__TResult__o *v12; // x20
  System_Collections_Generic_List_DataVals_InvalidCause__o *resultList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5ACC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
    sub_1B885B0(&System_Func_DataVals_InvalidCause__bool__TypeInfo);
    sub_1B885B0(&Method_DataVals___c__DisplayClass78_0__IsHideNoEffect_b__0__);
    sub_1B885B0(&DataVals___c__DisplayClass78_0_TypeInfo);
    byte_4A5ACC8 = 1;
  }
  resultList = 0LL;
  Param = DataVals__GetParam(this, 12, 0, v3);
  if ( Param != 1 )
  {
    if ( DataVals__TryGetDisplayNoEffectCauseList(this, &resultList, v7) )
    {
      v8 = sub_1B887FC(DataVals___c__DisplayClass78_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0LL);
      Value_int__Int32Enum = BasicHelper__GetValue_int__Int32Enum_(
                               (System_Collections_Generic_Dictionary_K__V__o *)this->fields.invalidCauseDict,
                               targetId,
                               0,
                               (const MethodInfo_2E6DF38 *)Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
      if ( !v8 )
        sub_1B8880C(Value_int__Int32Enum, v10);
      *(_DWORD *)(v8 + 16) = Value_int__Int32Enum;
      v11 = resultList;
      v12 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_DataVals_InvalidCause__bool__TypeInfo);
      System_Func_Int32Enum__bool____ctor(
        v12,
        (Il2CppObject *)v8,
        Method_DataVals___c__DisplayClass78_0__IsHideNoEffect_b__0__,
        0LL);
      LOBYTE(Param) = System_Linq_Enumerable__All_Int32Enum_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                        (System_Func_TSource__bool__o *)v12,
                        (const MethodInfo_2E8BB80 *)Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
    }
    else
    {
      LOBYTE(Param) = 0;
    }
  }
  return Param & 1;
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


bool __fastcall DataVals__IsMatchFriendShipCondition(DataVals_o *this, int32_t friendShip, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 179, 0, v3) <= friendShip;
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


bool __fastcall DataVals__IsParam(DataVals_o *this, System_String_o *typeKey, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4A5ACBE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    byte_4A5ACBE = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B8880C(0LL, typeKey);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)typeKey,
           (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall DataVals__IsParamAddBattlePoint(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 181, v2) && DataVals__isParam(this, 182, v4);
}


bool __fastcall DataVals__IsProgressTurnOnBoard(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 140, 0, v2) == 1;
}


bool __fastcall DataVals__IsSatisfyAboveBelowCond(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x23
  DataVals_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_String_o *ParamKey; // x20
  System_Func_bool__int__bool__o *v14; // x21
  const MethodInfo *v15; // x4

  if ( (byte_4A5ACD4 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__int__bool__TypeInfo);
    sub_1B885B0(&Method_DataVals___c__DisplayClass110_0__IsSatisfyAboveBelowCond_b__0__);
    sub_1B885B0(&DataVals___c__DisplayClass110_0_TypeInfo);
    sub_1B885B0(&StringLiteral_1633/*"<="*/);
    byte_4A5ACD4 = 1;
  }
  v9 = sub_1B887FC(DataVals___c__DisplayClass110_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_DWORD *)(v9 + 16) = compareVal;
  ParamKey = DataVals__MakeParamKey(v10, paramType, index, v12);
  v14 = (System_Func_bool__int__bool__o *)sub_1B887FC(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_DataVals___c__DisplayClass110_0__IsSatisfyAboveBelowCond_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, ParamKey, (System_String_o *)StringLiteral_1633/*"<="*/, v14, v15);
}


bool __fastcall DataVals__IsSatisfyAboveBelowCondition(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_Func_bool__int__bool__o *v11; // x21
  const MethodInfo *v12; // x4
  System_Enum_o v14; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+18h] [xbp-48h]

  if ( (byte_4A5ACD5 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__int__bool__TypeInfo);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    sub_1B885B0(&Method_DataVals___c__DisplayClass111_0__IsSatisfyAboveBelowCondition_b__0__);
    sub_1B885B0(&DataVals___c__DisplayClass111_0_TypeInfo);
    sub_1B885B0(&StringLiteral_1597/*"<"*/);
    byte_4A5ACD5 = 1;
  }
  v7 = sub_1B887FC(DataVals___c__DisplayClass111_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = compareVal;
  v14.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v14.monitor = (void *)-1LL;
  v15 = paramType;
  v10 = System_Enum__ToString(&v14, 0LL);
  v11 = (System_Func_bool__int__bool__o *)sub_1B887FC(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_DataVals___c__DisplayClass111_0__IsSatisfyAboveBelowCondition_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, v10, (System_String_o *)StringLiteral_1597/*"<"*/, v11, v12);
}


bool __fastcall DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        System_String_o *paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  System_String_o *StrParam_38859196; // x22
  __int64 IsMatch; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x21
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  System_String_o *v26; // x21
  int v27; // w8
  __int64 v28; // x22
  unsigned int v29; // w25
  System_String_o *v30; // x23
  System_String_o *v31; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ACD6 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_786/*"(^"*/);
    sub_1B885B0(&StringLiteral_16051/*"\\d+$|^\\d+"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_489/*"$)"*/);
    byte_4A5ACD6 = 1;
  }
  result = 0;
  StrParam_38859196 = DataVals__GetStrParam_38859196(
                        this,
                        paramType,
                        (System_String_o *)StringLiteral_1/*""*/,
                        (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam_38859196, 0LL) )
    return 1;
  IsMatch = sub_1B88658(string___TypeInfo, 5LL);
  if ( !IsMatch )
    goto LABEL_25;
  v14 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v15 = StringLiteral_786/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_786/*"(^"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(IsMatch + 32), v15, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u
    || (*(_QWORD *)(v14 + 40) = compareKey,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 40), (int32_t)compareKey, v16, v17),
        *(_DWORD *)(v14 + 24) <= 2u)
    || (v20 = StringLiteral_16051/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v14 + 48) = StringLiteral_16051/*"\\d+$|^\\d+"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 48), v20, v18, v19),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (*(_QWORD *)(v14 + 56) = compareKey,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 56), (int32_t)compareKey, v21, v22),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_26:
    sub_1B88814(IsMatch, v11);
  }
  v25 = StringLiteral_489/*"$)"*/;
  *(_QWORD *)(v14 + 64) = StringLiteral_489/*"$)"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 64), v25, v23, v24);
  IsMatch = (__int64)System_String__Concat_61720560((System_String_array *)v14, 0LL);
  if ( !StrParam_38859196
    || (v26 = (System_String_o *)IsMatch,
        (IsMatch = (__int64)System_String__Split(StrParam_38859196, 0x2Fu, 0, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B8880C(IsMatch, v11);
  }
  v27 = *(_DWORD *)(IsMatch + 24);
  v28 = IsMatch;
  if ( v27 < 1 )
    return 1;
  v29 = 0;
  while ( 1 )
  {
    if ( v29 >= v27 )
      goto LABEL_26;
    v30 = *(System_String_o **)(v28 + 8LL * (int)v29 + 32);
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v30, v26, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v30 )
      goto LABEL_25;
    v31 = System_String__Replace_61726660(v30, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v31, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v30, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_25;
    IsMatch = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))funcCompare->fields.m_target)(
                funcCompare->fields.original_method_info,
                IsMatch & 1,
                (unsigned int)result,
                *(_QWORD *)&funcCompare->fields.extra_arg);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v27 = *(_DWORD *)(v28 + 24);
    if ( (int)++v29 >= v27 )
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


bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x20
  Il2CppObject *v6; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+18h] [xbp-28h]

  if ( (byte_4A5ACBF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    byte_4A5ACBF = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v10 = type;
    v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v9.monitor = (void *)-1LL;
    v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
    return System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)strVals,
             v6,
             (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
System_String_o *__fastcall DataVals__MakeParamKey(
        DataVals_o *this,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_Enum_o v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h]
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4A5ACD3 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    sub_1B885B0(&StringLiteral_25098/*"{0}_{1}"*/);
    byte_4A5ACD3 = 1;
  }
  if ( index == 0x7FFFFFFF )
  {
    v13.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v13.monitor = (void *)-1LL;
    v14 = paramType;
    return System_Enum__ToString(&v13, 0LL);
  }
  else
  {
    LODWORD(v13.klass) = paramType;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v13, *(_QWORD *)&index, method, v4);
    v15 = index;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
    return System_String__Format_61721404((System_String_o *)StringLiteral_25098/*"{0}_{1}"*/, v8, v12, 0LL);
  }
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
    sub_1B8880C(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void __fastcall DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  struct System_Collections_Generic_List_DataVals__o **p_dependDataValsList; // x22
  int32_t size; // w2
  int v8; // w9
  DataVals_c **v9; // x28
  System_String_o **v10; // x27
  System_String_o **v11; // x20
  int32_t v12; // w23
  int32_t i; // w24
  DataVals_c *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x5
  DataVals_o *v17; // x26
  const MethodInfo *v18; // x3
  System_String_o *v19; // x0
  const MethodInfo *v20; // x5
  System_String_o *v21; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v23; // x1
  DataVals_c **v24; // x29
  System_String_o **v25; // x28
  System_String_o **v26; // x20
  System_Collections_Generic_List_object__o *v27; // x27
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x0
  DataVals_o *v32; // x26
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_Fields fields; // x8
  _QWORD *v39; // x9
  __int64 klass_low; // x10
  __int64 v41; // x8
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5ACB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5ACB0 = 1;
  }
  result = 0;
  p_dependDataValsList = &this->fields.dependDataValsList;
  dependDataValsList = this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    size = dependDataValsList->fields._size;
    v8 = dependDataValsList->fields._version + 1;
    dependDataValsList->fields._size = 0;
    dependDataValsList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dependDataValsList->fields._items, 0, size, 0LL);
  }
  v9 = &DataVals_TypeInfo;
  v10 = (System_String_o **)&StringLiteral_15812/*"["*/;
  v11 = (System_String_o **)&StringLiteral_16069/*"]"*/;
  v12 = 0;
  for ( i = 1; ; ++i )
  {
    v14 = *v9;
    if ( !(*v9)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = *v9;
    }
    if ( i > v14->static_fields->MAX_DEPEND_FUNC )
      break;
    v15 = DataVals__ConcatenateTypeValue((DataVals_o *)v14, 44, i, method);
    v17 = (DataVals_o *)DataVals__cutValue(this, v15, 0x5Bu, 0x5Du, 1, v16);
    v19 = DataVals__ConcatenateTypeValue(v17, 45, i, v18);
    v21 = DataVals__cutValue(this, v19, 0x5Bu, 0x5Du, 1, v20);
    if ( System_String__IsNullOrEmpty((System_String_o *)v17, 0LL) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v21, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !*p_dependDataValsList )
    {
      v24 = v9;
      v25 = v11;
      v26 = v10;
      v27 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v27,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v28 = (int)v27;
      *p_dependDataValsList = (struct System_Collections_Generic_List_DataVals__o *)v27;
      v10 = v26;
      v11 = v25;
      v9 = v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dependDataValsList, v28, v29, v30);
    }
    result = 0;
    if ( !v17
      || (IsNullOrEmpty = System_String__Replace_61726660(
                            (System_String_o *)v17,
                            *v10,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
LABEL_27:
      sub_1B8880C(IsNullOrEmpty, v23);
    }
    v31 = System_String__Replace_61726660(IsNullOrEmpty, *v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( System_Int32__TryParse(v31, &result, 0LL) )
    {
      v32 = (DataVals_o *)sub_1B887FC(*v9);
      DataVals___ctor(v32, v21, v33);
      IsNullOrEmpty = (System_String_o *)funcMst;
      if ( !funcMst )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst,
                                           result,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v32 )
        goto LABEL_27;
      DataVals__SetType_38855916(v32, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v34);
      v32->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v12, v35);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      fields = IsNullOrEmpty->fields;
      v39 = Method_System_Collections_Generic_List_DataVals__Add__;
      ++HIDWORD(IsNullOrEmpty[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_27;
      klass_low = SLODWORD(IsNullOrEmpty[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (Il2CppObject *)v32,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v41 + 32) = v32;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v32, v36, v37);
      }
      ++v12;
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
  struct System_Boolean_array *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x8
  struct System_Boolean_array *v12; // x21
  unsigned __int64 v13; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v15; // x2

  if ( (byte_4A5ACCD & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__get_Item__);
    byte_4A5ACCD = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v7 = (struct System_Boolean_array *)sub_1B88658(bool___TypeInfo, size);
        v11 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v11 )
LABEL_13:
          sub_1B8880C(v7, v8);
        v12 = v7;
        v13 = 0LL;
        while ( (__int64)v13 < v11->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v11,
                   v13,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v7 = (struct System_Boolean_array *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)dependDataList,
                                                v13,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v7 = (struct System_Boolean_array *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v7, v15);
            if ( v12 )
            {
              if ( v13 >= v12->max_length )
                sub_1B88814(v7, v8);
              v12->m_Items[v13 + 4] = (unsigned __int8)v7 & 1;
              v11 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              ++v13;
              if ( v11 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = v12;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (int32_t)v12,
          v9,
          v10);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *__fastcall DataVals__SetInvalidCauseByAnyBuff(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *invalidCauseDict; // x0

  if ( (byte_4A5ACAD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
    byte_4A5ACAD = 1;
  }
  invalidCauseDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.invalidCauseDict;
  if ( !invalidCauseDict )
    sub_1B8880C(0LL, *(_QWORD *)&targetId);
  System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
    invalidCauseDict,
    targetId,
    1,
    (const MethodInfo_3167C74 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
  return this;
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
  sub_1B88554(p_svals, (int32_t)svals, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
  void *svals; // x0
  __int64 v6; // x8
  _DWORD *v7; // x29
  DataVals_TYPE_c **v8; // x24
  unsigned __int64 v9; // x26
  char *v10; // x20
  Il2CppObject *v11; // x22
  int32_t funcType; // w8
  void *v13; // x23
  DataVals_o *v14; // x29
  DataVals_TYPE_c **v15; // x27
  System_Collections_Generic_Dictionary_object__object__o *v16; // x24
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int v20; // w8
  System_Enum_c *v21; // x8
  _DWORD *v22; // [xsp+0h] [xbp-90h]
  ServantStatusBattleListViewItem_o *p_strVals; // [xsp+8h] [xbp-88h]
  System_Enum_o v24; // [xsp+10h] [xbp-80h] BYREF
  int v25; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5ACAF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5ACAF = 1;
  }
  result = 0;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals
    || (svals = System_String__Replace_61726660(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15812/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_61726660(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16069/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_82:
    sub_1B8880C(svals, *(_QWORD *)&ft);
  }
  v6 = *((_QWORD *)svals + 3);
  v7 = svals;
  if ( (int)v6 >= 1 )
  {
    v8 = &DataVals_TYPE_TypeInfo;
    v9 = 0LL;
    v10 = (char *)svals + 32;
    v22 = svals;
    p_strVals = (ServantStatusBattleListViewItem_o *)&this->fields.strVals;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v6 )
LABEL_83:
        sub_1B88814(svals, *(_QWORD *)&ft);
      v11 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v10[8 * v9], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v9 >= (unsigned int)v7[6] )
          goto LABEL_83;
        svals = *(void **)&v10[8 * v9];
        if ( !svals )
          goto LABEL_82;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_82;
        v13 = svals;
        if ( *((int *)svals + 6) >= 2 )
        {
          v11 = (Il2CppObject *)*((_QWORD *)svals + 4);
          if ( !System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL) )
          {
            svals = p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v14 = this;
              v15 = v8;
              v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v16,
                (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              v17 = (int)v16;
              p_strVals->klass = (ServantStatusBattleListViewItem_c *)v16;
              v8 = v15;
              this = v14;
              v7 = v22;
              sub_1B88554(p_strVals, v17, v18, v19);
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_82;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              v11,
                              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( *((_DWORD *)v13 + 6) <= 1u )
                goto LABEL_83;
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_82;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                v11,
                *((Il2CppObject **)v13 + 5),
                (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
            }
          }
        }
        goto LABEL_68;
      }
      funcType = this->fields.funcType;
      if ( funcType <= 52 )
        break;
      if ( funcType > 109 )
      {
        if ( funcType > 133 )
        {
          if ( funcType == 142 )
          {
            if ( (_DWORD)v9 == 2 )
            {
              v24.klass = (System_Enum_c *)*v8;
              v24.monitor = (void *)-1LL;
              v20 = 173;
            }
            else
            {
              if ( (_DWORD)v9 != 1 )
              {
LABEL_61:
                if ( (_DWORD)v9 )
                  goto LABEL_68;
LABEL_62:
                v21 = (System_Enum_c *)*v8;
                v25 = 0;
                goto LABEL_64;
              }
              v24.klass = (System_Enum_c *)*v8;
              v24.monitor = (void *)-1LL;
              v20 = 172;
            }
            goto LABEL_66;
          }
          if ( funcType != 143 )
            goto LABEL_59;
          goto LABEL_57;
        }
        if ( funcType > 130 )
        {
          if ( funcType == 131 || funcType == 133 )
            goto LABEL_53;
LABEL_59:
          if ( (_DWORD)v9 != 2 )
          {
LABEL_60:
            if ( (_DWORD)v9 != 1 )
              goto LABEL_61;
LABEL_63:
            v21 = (System_Enum_c *)*v8;
            v25 = 3;
LABEL_64:
            v24.klass = v21;
            v24.monitor = (void *)-1LL;
LABEL_67:
            v11 = (Il2CppObject *)System_Enum__ToString(&v24, 0LL);
            goto LABEL_68;
          }
LABEL_65:
          v24.klass = (System_Enum_c *)*v8;
          v24.monitor = (void *)-1LL;
          v20 = 6;
LABEL_66:
          v25 = v20;
          goto LABEL_67;
        }
        if ( funcType == 121 )
          goto LABEL_57;
        if ( funcType != 130 )
          goto LABEL_59;
LABEL_49:
        switch ( (int)v9 )
        {
          case 0:
            goto LABEL_62;
          case 1:
            v24.klass = (System_Enum_c *)*v8;
            v24.monitor = (void *)-1LL;
            v20 = 1;
            goto LABEL_66;
          case 2:
            v24.klass = (System_Enum_c *)*v8;
            v24.monitor = (void *)-1LL;
            v20 = 2;
            goto LABEL_66;
          case 3:
            goto LABEL_63;
          case 4:
            v24.klass = (System_Enum_c *)*v8;
            v24.monitor = (void *)-1LL;
            v20 = 5;
            goto LABEL_66;
          case 5:
            goto LABEL_54;
          default:
            goto LABEL_68;
        }
        goto LABEL_68;
      }
      if ( funcType == 55 )
        goto LABEL_57;
      if ( funcType == 62 )
        goto LABEL_53;
      if ( funcType != 109 )
        goto LABEL_59;
      switch ( (int)v9 )
      {
        case 0:
          goto LABEL_62;
        case 1:
          goto LABEL_63;
        case 2:
          goto LABEL_65;
        case 3:
          v24.klass = (System_Enum_c *)*v8;
          v24.monitor = (void *)-1LL;
          v20 = 76;
          goto LABEL_66;
        default:
          break;
      }
LABEL_68:
      svals = (void *)System_String__op_Inequality((System_String_o *)v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)svals & 1) != 0 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_82;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          v11,
                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_82;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v11,
            result,
            (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v6) = v7[6];
      if ( (__int64)++v9 >= (int)v6 )
        return;
    }
    if ( funcType <= 10 )
    {
      if ( funcType != 1 )
      {
        if ( funcType != 2 && (unsigned int)(funcType - 9) > 1 )
          goto LABEL_59;
LABEL_53:
        if ( (_DWORD)v9 != 2 )
          goto LABEL_60;
LABEL_54:
        v24.klass = (System_Enum_c *)*v8;
        v24.monitor = (void *)-1LL;
        v20 = 4;
        goto LABEL_66;
      }
    }
    else
    {
      if ( funcType > 27 )
      {
        if ( funcType != 47 )
        {
          if ( funcType == 52 )
            goto LABEL_53;
          goto LABEL_59;
        }
        goto LABEL_57;
      }
      if ( funcType > 17 )
      {
        if ( funcType != 18 && funcType != 27 )
          goto LABEL_59;
LABEL_57:
        switch ( (int)v9 )
        {
          case 0:
            goto LABEL_62;
          case 1:
            goto LABEL_63;
          case 2:
            goto LABEL_65;
          case 3:
            v24.klass = (System_Enum_c *)*v8;
            v24.monitor = (void *)-1LL;
            v20 = 7;
            goto LABEL_66;
          default:
            goto LABEL_68;
        }
        goto LABEL_68;
      }
      if ( funcType == 15 )
        goto LABEL_57;
      if ( funcType != 16 )
        goto LABEL_59;
    }
    goto LABEL_49;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_38855916(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t targetType; // w8

  if ( !funcEnt )
    sub_1B8880C(this, 0LL);
  v6 = (ServantStatusBattleListViewItem_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.sortValue0B = (int64_t)funcEnt;
  v6 = (ServantStatusBattleListViewItem_o *)((char *)v6 + 40);
  sub_1B88554(v6, (int32_t)funcEnt, v7, v8);
  targetType = funcEnt->fields.targetType;
  *((_DWORD *)&v6[-1].fields.isMine + 1) = funcIndex;
  HIDWORD(v6[-1].fields.name) = targetType;
}


bool __fastcall DataVals__TryGetDisplayNoEffectCauseList(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals_InvalidCause__o **resultList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x4
  bool ParamStrArray; // w0
  bool v8; // w8
  System_Collections_Generic_List_T__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_DataVals_InvalidCause__o *v12; // x0
  __int64 v13; // x1
  System_String_array *v14; // x21
  __int64 v15; // x8
  unsigned __int64 i; // x22
  System_String_o *v17; // x20
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int32_t item; // [xsp+Ch] [xbp-54h] BYREF
  System_String_array *result; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5ACC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Enum_TryParse_DataVals_InvalidCause___);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    byte_4A5ACC9 = 1;
  }
  result = 0LL;
  item = 0;
  *resultList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)resultList, 0, (int32_t)method, v3);
  ParamStrArray = DataVals__TryGetParamStrArray(this, &result, 171, 0x7FFFFFFF, v6);
  v8 = 0;
  if ( ParamStrArray )
  {
    v9 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v9,
      (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    *resultList = (System_Collections_Generic_List_DataVals_InvalidCause__o *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)resultList, (int32_t)v9, v10, v11);
    v14 = result;
    if ( !result )
LABEL_20:
      sub_1B8880C(v12, v13);
    v15 = *(_QWORD *)&result->max_length;
    if ( (int)v15 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v15; ++i )
      {
        if ( i >= (unsigned int)v15 )
          sub_1B88814(v12, v13);
        v17 = v14->m_Items[i];
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        v12 = (System_Collections_Generic_List_DataVals_InvalidCause__o *)System_Enum__TryParse_Int32Enum__48794212(
                                                                            v17,
                                                                            0,
                                                                            &item,
                                                                            (const MethodInfo_2E88A64 *)Method_System_Enum_TryParse_DataVals_InvalidCause___);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          v12 = *resultList;
          if ( !*resultList )
            goto LABEL_20;
          v13 = (unsigned int)item;
          items = (struct System_Object_array *)v12->fields._items;
          v19 = Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)v12,
              v13,
              *(const MethodInfo_34E303C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v13;
          }
        }
        LODWORD(v15) = v14->max_length;
      }
    }
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0LL);
  }
  return v8;
}


bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4A5ACC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    byte_4A5ACC0 = 1;
  }
  vals = this->fields.vals;
  v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = type;
  v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
  if ( !vals )
    sub_1B8880C(v8, v9);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v8,
           param,
           (const MethodInfo_31BFA9C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4A5ACB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_4A5ACB9 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B8880C(0LL, name);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_31BFA9C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamStrArray(
        DataVals_o *this,
        System_String_array **result,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  DataVals_o *v9; // x0
  const MethodInfo *v10; // x3
  System_String_o *ParamKey; // x0
  const MethodInfo *v12; // x3
  System_String_o *StrParam_38859196; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_String_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5ACD2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACD2 = 1;
  }
  *result = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)result, 0, paramType, index);
  ParamKey = DataVals__MakeParamKey(v9, paramType, index, v10);
  StrParam_38859196 = DataVals__GetStrParam_38859196(this, ParamKey, (System_String_o *)StringLiteral_1/*""*/, v12);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam_38859196, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !StrParam_38859196 )
      sub_1B8880C(IsNullOrEmpty, v15);
    v16 = System_String__Split(StrParam_38859196, 0x2Fu, 0, 0LL);
    *result = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)result, (int32_t)v16, v17, v18);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0LL);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21

  if ( (byte_4A5ACCC & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_DataVals_OverChargeState___);
    sub_1B885B0(&Method_DataVals_IsOverChargeState__);
    sub_1B885B0(&System_Func_DataVals_OverChargeState__bool__TypeInfo);
    byte_4A5ACCC = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v5, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0LL);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__48671640(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v5,
                                                 (const MethodInfo_2E6AB98 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
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
  int32_t v18; // w23
  int32_t v19; // w22
  int32_t v20; // w0
  int32_t v21; // w24
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int16 v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ACB2 & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACB2 = 1;
  }
  v27 = 58;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v11 = System_Char__ToString((uint16_t)&v27, 0LL);
  v12 = System_String__Concat_61718292((System_String_o *)StringLiteral_868/*","*/, key, v11, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v14 = svals;
  if ( !svals )
    goto LABEL_18;
  v17 = System_String__IndexOf_61738608(v14, v12, 0LL);
  if ( v17 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v18 = v17;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v12 = (System_String_o *)System_String__IndexOf_61737256(v12, startWord, v18, 0LL);
  if ( !*p_svals )
    goto LABEL_18;
  v19 = (int)v12;
  v20 = System_String__IndexOf_61737256(*p_svals, endWord, v18, 0LL);
  if ( v19 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v21 = v20;
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v22 = System_String__Substring_61726036(v12, v19, v21 - v19 + 1, 0LL);
  if ( isDelKeyValue )
  {
    v12 = *p_svals;
    if ( *p_svals )
    {
      v12 = System_String__Substring_61726036(v12, v18, v21 - v18 + 1, 0LL);
      if ( *p_svals )
      {
        v23 = System_String__Replace_61726660(*p_svals, v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        *p_svals = v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_svals, (int32_t)v23, v24, v25);
        return v22;
      }
    }
LABEL_18:
    sub_1B8880C(v12, v13);
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
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+18h] [xbp-38h]

  if ( (byte_4A5ACBD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    byte_4A5ACBD = 1;
  }
  vals = this->fields.vals;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = type;
  v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
  if ( !vals )
    sub_1B8880C(v6, v7);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v6,
           (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
  void *svals; // x0
  __int64 v4; // x8
  _DWORD *v5; // x20
  unsigned __int64 v6; // x23
  char *v7; // x27
  Il2CppObject *v8; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_Enum_o v11; // [xsp+0h] [xbp-80h] BYREF
  int v12; // [xsp+10h] [xbp-70h]
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5ACB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&DataVals_TYPE_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5ACB4 = 1;
  }
  result = 0;
  svals = this->fields.svals;
  if ( !svals
    || (svals = System_String__Replace_61726660(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15812/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_61726660(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16069/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1B8880C(svals, method);
  }
  v4 = *((_QWORD *)svals + 3);
  v5 = svals;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    v7 = (char *)svals + 32;
    do
    {
      if ( v6 >= (unsigned int)v4 )
LABEL_25:
        sub_1B88814(svals, method);
      v8 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v7[8 * v6], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v6 >= (unsigned int)v5[6] )
          goto LABEL_25;
        svals = *(void **)&v7[8 * v6];
        if ( !svals )
          goto LABEL_24;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_24;
        if ( *((int *)svals + 6) >= 2 )
        {
          v8 = (Il2CppObject *)*((_QWORD *)svals + 4);
          System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL);
        }
      }
      svals = this->fields.vals;
      if ( !svals )
        goto LABEL_24;
      svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_object__int__o *)svals,
                        v8,
                        (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        v12 = 16;
        v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
        v11.monitor = (void *)-1LL;
        v9 = System_Enum__ToString(&v11, 0LL);
        if ( System_String__op_Equality(v9, (System_String_o *)v8, 0LL)
          || (v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo,
              v11.monitor = (void *)-1LL,
              v12 = 17,
              v10 = System_Enum__ToString(&v11, 0LL),
              svals = (void *)System_String__op_Equality(v10, (System_String_o *)v8, 0LL),
              ((unsigned __int8)svals & 1) != 0) )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v8,
            result,
            (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v4) = v5[6];
      ++v6;
    }
    while ( (__int64)v6 < (int)v4 );
  }
}


void __fastcall DataVals__set_FuncParamValueUpInfo(
        DataVals_o *this,
        FuncParamValueUpInfoBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_1B88554(
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
  sub_1B88554(
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ACDE & 1) == 0 )
  {
    sub_1B885B0(&DataVals___c_TypeInfo);
    byte_4A5ACDE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(DataVals___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DataVals___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall DataVals___c___ctor(DataVals___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c___GetDependFuncIdArray_b__41_0(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__41_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_1B8880C(this, x);
  return funcEnt->fields.id;
}


int32_t __fastcall DataVals___c___GetTargetTypeIndexArray_b__140_2(
        DataVals___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall DataVals___c__DisplayClass110_0___ctor(
        DataVals___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass110_0___IsSatisfyAboveBelowCond_b__0(
        DataVals___c__DisplayClass110_0_o *this,
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


void __fastcall DataVals___c__DisplayClass111_0___ctor(
        DataVals___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass111_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass111_0_o *this,
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


void __fastcall DataVals___c__DisplayClass140_0___ctor(
        DataVals___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass140_0___GetTargetTypeIndexArray_b__0(
        DataVals___c__DisplayClass140_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass140_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_4A5ACDF & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass140_0_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    byte_4A5ACDF = 1;
  }
  if ( !key )
    sub_1B8880C(this, x.fields.key);
  return System_String__StartsWith(key, v4->fields.key, 0LL);
}


System_String_o *__fastcall DataVals___c__DisplayClass140_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass140_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass140_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_4A5ACE0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    this = (DataVals___c__DisplayClass140_0_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACE0 = 1;
  }
  if ( !key )
    sub_1B8880C(this, x.fields.key);
  return System_String__Replace_61726660(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall DataVals___c__DisplayClass39_0___ctor(DataVals___c__DisplayClass39_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass39_0___GetDependDataValsArray_b__0(
        DataVals___c__DisplayClass39_0_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  DataVals___c__DisplayClass39_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A5ACE1 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass39_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
    byte_4A5ACE1 = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass39_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_1B8880C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void __fastcall DataVals___c__DisplayClass78_0___ctor(DataVals___c__DisplayClass78_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass78_0___IsHideNoEffect_b__0(
        DataVals___c__DisplayClass78_0_o *this,
        int32_t cause,
        const MethodInfo *method)
{
  return this->fields.invalidCause != cause;
}