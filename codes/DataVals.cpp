void __fastcall DataVals___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FBF9C & 1) == 0 )
  {
    sub_1B640C8(&DataVals_TypeInfo, v1);
    byte_49FBF9C = 1;
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

  if ( (byte_49FBF70 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, str);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    byte_49FBF70 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 str,
                                                                 method);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v6,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
  this->fields.funcIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svals, (int32_t)str, v9, v10);
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
    sub_1B64324(Param);
  if ( (_DWORD)Param != DataVals__GetParam(baseVals, 3, 0, v7)
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
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+0h] [xbp-40h] BYREF
  int32_t v9; // [xsp+10h] [xbp-30h]
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = value;
  if ( (byte_49FBF77 & 1) == 0 )
  {
    sub_1B640C8(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_49FBF77 = 1;
  }
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = type;
  v5 = System_Enum__ToString(&v8, 0LL);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_61375396(v5, v6, 0LL);
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

  if ( (byte_49FBF89 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBF89 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v10);
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
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FBF98 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&bgmId);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    byte_49FBF98 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 159, &param, v3) || DataVals__TryGetParam(this, 110, &param, v7) )
    return param;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  const MethodInfo *v14; // x3
  System_Int32_array *Param; // x0
  const MethodInfo *v16; // x2
  System_Int32_array *ParamArray; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo *v26; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x8
  System_Int32_array *v31; // x21
  unsigned __int64 v32; // x26
  int32_t v33; // w23
  __int64 v34; // x22
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x3
  System_Int32_array *ParamArrayAddTypeIndex; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0

  if ( (byte_49FBF9A & 1) == 0 )
  {
    sub_1B640C8(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo, v7);
    byte_49FBF9A = 1;
  }
  if ( !DataVals__isParam(this, 164, v2) )
    return 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v13 = sub_1B64314(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo, v11, v12);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v13, 0LL);
  Param = (System_Int32_array *)DataVals__GetParam(this, 164, 0, v14);
  if ( !v13 )
    goto LABEL_22;
  *(_DWORD *)(v13 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 165, v16);
  *(_QWORD *)(v13 + 24) = ParamArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)ParamArray, v18, v19);
  if ( !v10 )
    goto LABEL_22;
  items = v10->fields._items;
  v23 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), v13, v20, v21);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 164, v26);
  if ( !Param )
    goto LABEL_22;
  v30 = *(_QWORD *)&Param->max_length;
  v31 = Param;
  if ( (int)v30 >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v30 )
        sub_1B6432C(Param, v28);
      v33 = v31->m_Items[v32 + 1];
      v34 = sub_1B64314(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo, v28, v29);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v34, 0LL);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 164, v33, 0, v35);
      if ( !v34 )
        break;
      *(_DWORD *)(v34 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 165, v33, v36);
      *(_QWORD *)(v34 + 24) = ParamArrayAddTypeIndex;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 24), (int32_t)ParamArrayAddTypeIndex, v38, v39);
      v42 = v10->fields._items;
      v43 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
      ++v10->fields._version;
      if ( !v42 )
        break;
      v44 = v10->fields._size;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)v34,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v42->obj.klass + v44;
        v10->fields._size = v44 + 1;
        v45[4] = (Il2CppClass *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), v34, v40, v41);
      }
      LODWORD(v30) = v31->max_length;
      if ( (__int64)++v32 >= (int)v30 )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v10,
                                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_1B64324(Param);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v10,
                                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
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


// local variable allocation has failed, the output may be wrong!
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
  int32_t v13; // w2
  int32_t v14; // w3
  DataVals_array *result; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v19; // x20

  if ( (byte_49FBF73 & 1) == 0 )
  {
    sub_1B640C8(&DataVals___TypeInfo, funcTypeList);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__FindAll__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__ToArray__, v7);
    sub_1B640C8(&System_Predicate_DataVals__TypeInfo, v8);
    sub_1B640C8(&Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__, v9);
    sub_1B640C8(&DataVals___c__DisplayClass35_0_TypeInfo, v10);
    byte_49FBF73 = 1;
  }
  v11 = sub_1B64314(DataVals___c__DisplayClass35_0_TypeInfo, funcTypeList, isCheckNotFound);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = funcTypeList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)funcTypeList, v13, v14);
  result = (DataVals_array *)sub_1B64170(DataVals___TypeInfo, 0LL);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v19 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DataVals__TypeInfo, v16, v17);
    System_Predicate_object____ctor(
      v19,
      (Il2CppObject *)v11,
      Method_DataVals___c__DisplayClass35_0__GetDependDataValsArray_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v19,
            (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_1B64324(All);
  }
  return result;
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v13; // x0
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v15; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  DataVals___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__37_1; // x20
  Il2CppObject *v25; // x21
  struct DataVals___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_49FBF75 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_DataVals___, v5);
    sub_1B640C8(&System_Func_DataVals__int__TypeInfo, v6);
    sub_1B640C8(&System_Func_DataVals__bool__TypeInfo, v7);
    sub_1B640C8(&int___TypeInfo, v8);
    sub_1B640C8(&Method_DataVals___c__GetDependFuncIdArray_b__37_0__, v9);
    sub_1B640C8(&Method_DataVals___c__GetDependFuncIdArray_b__37_1__, v10);
    sub_1B640C8(&DataVals___c_TypeInfo, v11);
    byte_49FBF75 = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  v13 = DataVals___c_TypeInfo;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v13 = DataVals___c_TypeInfo;
  }
  _9__37_0 = (System_Func_object__bool__o *)v13->static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = DataVals___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__37_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_DataVals__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(_9__37_0, v15, Method_DataVals___c__GetDependFuncIdArray_b__37_0__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = (struct System_Func_DataVals__bool__o *)_9__37_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_DataVals___);
  v22 = DataVals___c_TypeInfo;
  v23 = v19;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v22 = DataVals___c_TypeInfo;
  }
  _9__37_1 = (System_Func_object__int__o *)v22->static_fields->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = DataVals___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__37_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_DataVals__int__TypeInfo, v20, v21);
    System_Func_object__int____ctor(_9__37_1, v25, Method_DataVals___c__GetDependFuncIdArray_b__37_1__, 0LL);
    v26 = DataVals___c_TypeInfo->static_fields;
    v26->__9__37_1 = (struct System_Func_DataVals__int__o *)_9__37_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->__9__37_1, (int32_t)_9__37_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__37_1,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v29,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_49FBF96 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1B640C8(&System_Math_TypeInfo, v5);
    byte_49FBF96 = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v7);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_62194036(Param, 1, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 100,
                                                                 v9,
                                                                 (const MethodInfo_2E63B7C *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v10,
             (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v5; // x0
  const MethodInfo *v6; // x3
  System_Enum_o v8; // [xsp+8h] [xbp-38h] BYREF
  int v9; // [xsp+18h] [xbp-28h]

  if ( (byte_49FBF8F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v3);
    byte_49FBF8F = 1;
  }
  vals = this->fields.vals;
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = 51;
  v5 = (Il2CppObject *)System_Enum__ToString(&v8, 0LL);
  if ( !vals )
    sub_1B64324(v5);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v5,
         (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
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
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleBuffData_IntervalData_o *v6; // x20

  if ( (byte_49FBF97 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_IntervalData_TypeInfo, method);
    byte_49FBF97 = 1;
  }
  if ( !DataVals__isParam(this, 130, v2) && !DataVals__isParam(this, 131, v5) )
    return 0LL;
  v6 = (BattleBuffData_IntervalData_o *)sub_1B64314(BattleBuffData_IntervalData_TypeInfo, v4, v5);
  BattleBuffData_IntervalData___ctor_42144780(v6, this, 0LL);
  return v6;
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

  if ( (byte_49FBF86 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBF86 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v10);
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

  if ( (byte_49FBF78 & 1) == 0 )
  {
    sub_1B640C8(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_49FBF78 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetParam_38542648(this, type, v7, defaultValue, v8);
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x4
  int32_t v16; // [xsp+8h] [xbp-48h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FBF7A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v10);
    byte_49FBF7A = 1;
  }
  v17 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v17);
  v16 = index;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13 = System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, v11, v12, 0LL);
  return DataVals__GetParam_38542648(this, type, v13, defaultValue, v14);
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

  if ( (byte_49FBF90 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FBF90 = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v8);
  if ( Param < 1 )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v12);
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

  if ( (byte_49FBF91 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FBF91 = 1;
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
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v14);
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

  if ( (byte_49FBF85 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, *(_QWORD *)&type);
    byte_49FBF85 = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_1B64324(IsNullOrEmpty);
  return System_String__Split(StrParam, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam_38542648(
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

  if ( (byte_49FBF79 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    byte_49FBF79 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_1B64324(vals);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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

  if ( (byte_49FBF87 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBF87 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v10);
  result->m_Items[1] = v8;
  return result;
}


System_Int32_array *__fastcall DataVals__GetShortenMaxCountArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_ICollection_o *ParamArray; // x19
  System_Array_o *v6; // x0
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_49FBF9B & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D,
      v4);
    byte_49FBF9B = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 182, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0LL) )
  {
    v6 = (System_Array_o *)sub_1B64170(int___TypeInfo, 3LL);
    v8.fields.value = Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
    ParamArray = (System_Collections_ICollection_o *)v6;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v6, v8, 0LL);
  }
  return (System_Int32_array *)ParamArray;
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

  if ( (byte_49FBF7C & 1) == 0 )
  {
    sub_1B640C8(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_49FBF7C = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetStrParam_38543612(this, v7, defaultValue, v8);
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  int32_t v16; // [xsp+8h] [xbp-48h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FBF7E & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v10);
    byte_49FBF7E = 1;
  }
  v17 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v17);
  v16 = index;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13 = System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, v11, v12, 0LL);
  return DataVals__GetStrParam_38543612(this, v13, defaultValue, v14);
}


System_String_o *__fastcall DataVals__GetStrParam_38543612(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_49FBF7D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, name);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v7);
    byte_49FBF7D = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v9 = this->fields.strVals;
  if ( !v9 )
    sub_1B64324(0LL);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v9,
                              (Il2CppObject *)name,
                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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

  if ( (byte_49FBF83 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBF83 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v10);
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

  if ( (byte_49FBF88 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBF88 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v10);
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
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_T__TResult__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_T__TResult__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  System_Func_object__int__o *v37; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  DataVals___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  System_Func_int__int__o *_9__134_2; // x20
  Il2CppObject *v44; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  int32_t v50; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FBF99 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_int__int___, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____, v8);
    sub_1B640C8(&System_Func_int__int__TypeInfo, v9);
    sub_1B640C8(&System_Func_KeyValuePair_string__int___bool__TypeInfo, v10);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v11);
    sub_1B640C8(&System_Func_KeyValuePair_string__int___string__TypeInfo, v12);
    sub_1B640C8(&Method_System_Int32_Parse__, v13);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v14);
    sub_1B640C8(&Method_DataVals___c__GetTargetTypeIndexArray_b__134_2__, v15);
    sub_1B640C8(&Method_DataVals___c__DisplayClass134_0__GetTargetTypeIndexArray_b__0__, v16);
    sub_1B640C8(&Method_DataVals___c__DisplayClass134_0__GetTargetTypeIndexArray_b__1__, v17);
    sub_1B640C8(&DataVals___c__DisplayClass134_0_TypeInfo, v18);
    sub_1B640C8(&DataVals___c_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_24995/*"{0}_"*/, v20);
    byte_49FBF99 = 1;
  }
  v21 = sub_1B64314(DataVals___c__DisplayClass134_0_TypeInfo, *(_QWORD *)&type, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  v50 = type;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v50);
  v23 = System_String__Format((System_String_o *)StringLiteral_24995/*"{0}_"*/, v22, 0LL);
  if ( !v21 )
    sub_1B64324(v23);
  *(_QWORD *)(v21 + 16) = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)v23, v24, v25);
  vals = this->fields.vals;
  v29 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_KeyValuePair_string__int___bool__TypeInfo, v27, v28);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v29,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass134_0__GetTargetTypeIndexArray_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_2E75FA4 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v33 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_KeyValuePair_string__int___string__TypeInfo, v31, v32);
  System_Func_KeyValuePair_object__int___object____ctor(
    v33,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass134_0__GetTargetTypeIndexArray_b__1__,
    0LL);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v30,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_2E651D4 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v37 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v35, v36);
  System_Func_object__int____ctor(v37, 0LL, Method_System_Int32_Parse__, 0LL);
  v38 = System_Linq_Enumerable__Select_object__int_(
          v34,
          (System_Func_TSource__TResult__o *)v37,
          (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
  v41 = DataVals___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v41 = DataVals___c_TypeInfo;
  }
  _9__134_2 = v41->static_fields->__9__134_2;
  if ( !_9__134_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = DataVals___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__134_2 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v39, v40);
    System_Func_int__int____ctor(_9__134_2, v44, Method_DataVals___c__GetTargetTypeIndexArray_b__134_2__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__134_2 = _9__134_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__134_2, (int32_t)_9__134_2, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__134_2,
                                                               (const MethodInfo_2E62EA4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v48,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_49FBF84 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FBF84 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v8);
  if ( !Param )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64324(0LL);
  if ( !result->max_length )
    sub_1B6432C(result, v12);
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

  if ( (byte_49FBF8A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FBF8A = 1;
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

  if ( (byte_49FBF8B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FBF8B = 1;
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
  if ( (byte_49FBF8E & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_bool___, *(_QWORD *)&index);
    byte_49FBF8E = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2E2809C *)Method_BasicHelper_IndexValue_bool___);
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


bool __fastcall DataVals__IsMatchFriendShipCondition(DataVals_o *this, int32_t friendShip, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 178, 0, v3) <= friendShip;
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

  if ( (byte_49FBF80 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, typeKey);
    byte_49FBF80 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B64324(0LL);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)typeKey,
           (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall DataVals__IsParamAddBattlePoint(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 180, v2) && DataVals__isParam(this, 181, v4);
}


bool __fastcall DataVals__IsProgressTurnOnBoard(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 140, 0, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsSatisfyAboveBelowCond(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  DataVals_o *v13; // x0
  const MethodInfo *v14; // x3
  System_String_o *ParamKey; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_bool__int__bool__o *v18; // x21
  const MethodInfo *v19; // x4

  if ( (byte_49FBF93 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__int__bool__TypeInfo, *(_QWORD *)&paramType);
    sub_1B640C8(&Method_DataVals___c__DisplayClass104_0__IsSatisfyAboveBelowCond_b__0__, v9);
    sub_1B640C8(&DataVals___c__DisplayClass104_0_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1635/*"<="*/, v11);
    byte_49FBF93 = 1;
  }
  v12 = sub_1B64314(DataVals___c__DisplayClass104_0_TypeInfo, *(_QWORD *)&paramType, *(_QWORD *)&compareVal);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  *(_DWORD *)(v12 + 16) = compareVal;
  ParamKey = DataVals__MakeParamKey(v13, paramType, index, v14);
  v18 = (System_Func_bool__int__bool__o *)sub_1B64314(System_Func_bool__int__bool__TypeInfo, v16, v17);
  System_Func_bool__int__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_DataVals___c__DisplayClass104_0__IsSatisfyAboveBelowCond_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, ParamKey, (System_String_o *)StringLiteral_1635/*"<="*/, v18, v19);
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
  __int64 v11; // x22
  __int64 v12; // x0
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_bool__int__bool__o *v16; // x21
  const MethodInfo *v17; // x4
  System_Enum_o v19; // [xsp+8h] [xbp-58h] BYREF
  int32_t v20; // [xsp+18h] [xbp-48h]

  if ( (byte_49FBF94 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__int__bool__TypeInfo, *(_QWORD *)&paramType);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v7);
    sub_1B640C8(&Method_DataVals___c__DisplayClass105_0__IsSatisfyAboveBelowCondition_b__0__, v8);
    sub_1B640C8(&DataVals___c__DisplayClass105_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_1599/*"<"*/, v10);
    byte_49FBF94 = 1;
  }
  v11 = sub_1B64314(DataVals___c__DisplayClass105_0_TypeInfo, *(_QWORD *)&paramType, *(_QWORD *)&compareVal);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_DWORD *)(v11 + 16) = compareVal;
  v19.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v19.monitor = (void *)-1LL;
  v20 = paramType;
  v13 = System_Enum__ToString(&v19, 0LL);
  v16 = (System_Func_bool__int__bool__o *)sub_1B64314(System_Func_bool__int__bool__TypeInfo, v14, v15);
  System_Func_bool__int__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_DataVals___c__DisplayClass105_0__IsSatisfyAboveBelowCondition_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, v13, (System_String_o *)StringLiteral_1599/*"<"*/, v16, v17);
}


bool __fastcall DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        System_String_o *paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *StrParam_38543612; // x22
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

  if ( (byte_49FBF95 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, paramType);
    sub_1B640C8(&string___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_787/*"(^"*/, v10);
    sub_1B640C8(&StringLiteral_15982/*"\\d+$|^\\d+"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    sub_1B640C8(&StringLiteral_490/*"$)"*/, v13);
    byte_49FBF95 = 1;
  }
  result = 0;
  StrParam_38543612 = DataVals__GetStrParam_38543612(
                        this,
                        paramType,
                        (System_String_o *)StringLiteral_1/*""*/,
                        (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam_38543612, 0LL) )
    return 1;
  IsMatch = sub_1B64170(string___TypeInfo, 5LL);
  if ( !IsMatch )
    goto LABEL_25;
  v19 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v20 = StringLiteral_787/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_787/*"(^"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(IsMatch + 32), v20, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u
    || (*(_QWORD *)(v19 + 40) = compareKey,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 40), (int32_t)compareKey, v21, v22),
        *(_DWORD *)(v19 + 24) <= 2u)
    || (v25 = StringLiteral_15982/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v19 + 48) = StringLiteral_15982/*"\\d+$|^\\d+"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 48), v25, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (*(_QWORD *)(v19 + 56) = compareKey,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 56), (int32_t)compareKey, v26, v27),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_26:
    sub_1B6432C(IsMatch, v16);
  }
  v30 = StringLiteral_490/*"$)"*/;
  *(_QWORD *)(v19 + 64) = StringLiteral_490/*"$)"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 64), v30, v28, v29);
  IsMatch = (__int64)System_String__Concat_61388924((System_String_array *)v19, 0LL);
  if ( !StrParam_38543612
    || (v31 = (System_String_o *)IsMatch,
        (IsMatch = (__int64)System_String__Split(StrParam_38543612, 0x2Fu, 0, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B64324(IsMatch);
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
    v36 = System_String__Replace_61395016(v35, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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

  if ( (byte_49FBF81 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v5);
    byte_49FBF81 = 1;
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
             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+18h] [xbp-38h]
  int32_t v13; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_49FBF92 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&paramType);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v7);
    byte_49FBF92 = 1;
  }
  if ( index == 0x7FFFFFFF )
  {
    v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v11.monitor = (void *)-1LL;
    v12 = paramType;
    return System_Enum__ToString(&v11, 0LL);
  }
  else
  {
    LODWORD(v11.klass) = paramType;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v11);
    v13 = index;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, v9, v10, 0LL);
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
  const MethodInfo *v10; // x3

  Param = DataVals__GetParam(this, type, 0, *(const MethodInfo **)&state);
  if ( !compVals )
    sub_1B64324(Param);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v10) )
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
  __int64 v32; // x2
  DataVals_c **v33; // x29
  System_String_o **v34; // x28
  System_String_o **v35; // x20
  System_Collections_Generic_List_object__o *v36; // x27
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  DataVals_o *v43; // x26
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_Fields fields; // x8
  _QWORD *v50; // x9
  __int64 klass_low; // x10
  __int64 v52; // x8
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FBF72 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, funcMst);
    sub_1B640C8(&DataVals_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_DataVals__TypeInfo, v9);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v12);
    byte_49FBF72 = 1;
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
  v18 = (System_String_o **)&StringLiteral_15744/*"["*/;
  v19 = (System_String_o **)&StringLiteral_16000/*"]"*/;
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
      v33 = v17;
      v34 = v19;
      v35 = v18;
      v36 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_DataVals__TypeInfo,
                                                           v31,
                                                           v32);
      System_Collections_Generic_List_object____ctor(
        v36,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v37 = (int)v36;
      *p_dependDataValsList = (struct System_Collections_Generic_List_DataVals__o *)v36;
      v18 = v35;
      v19 = v34;
      v17 = v33;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dependDataValsList, v37, v38, v39);
    }
    result = 0;
    if ( !v25
      || (IsNullOrEmpty = System_String__Replace_61395016(
                            (System_String_o *)v25,
                            *v18,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
LABEL_27:
      sub_1B64324(IsNullOrEmpty);
    }
    v40 = System_String__Replace_61395016(IsNullOrEmpty, *v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( System_Int32__TryParse(v40, &result, 0LL) )
    {
      v43 = (DataVals_o *)sub_1B64314(*v17, v41, v42);
      DataVals___ctor(v43, v29, v44);
      IsNullOrEmpty = (System_String_o *)funcMst;
      if ( !funcMst )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst,
                                           result,
                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v43 )
        goto LABEL_27;
      DataVals__SetType_38540336(v43, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v45);
      v43->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v20, v46);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      fields = IsNullOrEmpty->fields;
      v50 = Method_System_Collections_Generic_List_DataVals__Add__;
      ++HIDWORD(IsNullOrEmpty[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_27;
      klass_low = SLODWORD(IsNullOrEmpty[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (Il2CppObject *)v43,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v52 + 32) = v43;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)v43, v47, v48);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x8
  struct System_Boolean_array *v13; // x21
  unsigned __int64 v14; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v16; // x2
  __int64 v17; // x1

  if ( (byte_49FBF8D & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, dependDataList);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__get_Item__, v6);
    byte_49FBF8D = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v9 = (struct System_Boolean_array *)sub_1B64170(bool___TypeInfo, size);
        v12 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v12 )
LABEL_13:
          sub_1B64324(v9);
        v13 = v9;
        v14 = 0LL;
        while ( (__int64)v14 < v12->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v12,
                   v14,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v9 = (struct System_Boolean_array *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)dependDataList,
                                                v14,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v9 = (struct System_Boolean_array *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v9, v16);
            if ( v13 )
            {
              if ( v14 >= v13->max_length )
                sub_1B6432C(v9, v17);
              v13->m_Items[v14 + 4] = (unsigned __int8)v9 & 1;
              v12 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              ++v14;
              if ( v12 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = v13;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (int32_t)v13,
          v10,
          v11);
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
  sub_1B6406C(p_svals, (int32_t)svals, v9, v10);
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
  __int64 v15; // x1
  __int64 v16; // x8
  _DWORD *v17; // x29
  DataVals_TYPE_c **v18; // x24
  unsigned __int64 v19; // x26
  char *v20; // x20
  Il2CppObject *v21; // x22
  int32_t funcType; // w8
  void *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  DataVals_o *v26; // x29
  DataVals_TYPE_c **v27; // x27
  System_Collections_Generic_Dictionary_object__object__o *v28; // x24
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int v32; // w8
  System_Enum_c *v33; // x8
  _DWORD *v34; // [xsp+0h] [xbp-90h]
  ServantStatusBattleListViewItem_o *p_strVals; // [xsp+8h] [xbp-88h]
  System_Enum_o v36; // [xsp+10h] [xbp-80h] BYREF
  int v37; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FBF71 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, *(_QWORD *)&ft);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v9);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v13);
    byte_49FBF71 = 1;
  }
  result = 0;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals
    || (svals = System_String__Replace_61395016(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15744/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_61395016(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16000/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_82:
    sub_1B64324(svals);
  }
  v16 = *((_QWORD *)svals + 3);
  v17 = svals;
  if ( (int)v16 >= 1 )
  {
    v18 = &DataVals_TYPE_TypeInfo;
    v19 = 0LL;
    v20 = (char *)svals + 32;
    v34 = svals;
    p_strVals = (ServantStatusBattleListViewItem_o *)&this->fields.strVals;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v16 )
LABEL_83:
        sub_1B6432C(svals, v15);
      v21 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v20[8 * v19], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v19 >= (unsigned int)v17[6] )
          goto LABEL_83;
        svals = *(void **)&v20[8 * v19];
        if ( !svals )
          goto LABEL_82;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_82;
        v23 = svals;
        if ( *((int *)svals + 6) >= 2 )
        {
          v21 = (Il2CppObject *)*((_QWORD *)svals + 4);
          if ( !System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL) )
          {
            svals = p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v26 = this;
              v27 = v18;
              v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                                 System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                 v24,
                                                                                 v25);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v28,
                (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              v29 = (int)v28;
              p_strVals->klass = (ServantStatusBattleListViewItem_c *)v28;
              v18 = v27;
              this = v26;
              v17 = v34;
              sub_1B6406C(p_strVals, v29, v30, v31);
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_82;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              v21,
                              (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( *((_DWORD *)v23 + 6) <= 1u )
                goto LABEL_83;
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_82;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                v21,
                *((Il2CppObject **)v23 + 5),
                (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
            if ( (_DWORD)v19 == 2 )
            {
              v36.klass = (System_Enum_c *)*v18;
              v36.monitor = (void *)-1LL;
              v32 = 172;
            }
            else
            {
              if ( (_DWORD)v19 != 1 )
              {
LABEL_61:
                if ( (_DWORD)v19 )
                  goto LABEL_68;
LABEL_62:
                v33 = (System_Enum_c *)*v18;
                v37 = 0;
                goto LABEL_64;
              }
              v36.klass = (System_Enum_c *)*v18;
              v36.monitor = (void *)-1LL;
              v32 = 171;
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
          if ( (_DWORD)v19 != 2 )
          {
LABEL_60:
            if ( (_DWORD)v19 != 1 )
              goto LABEL_61;
LABEL_63:
            v33 = (System_Enum_c *)*v18;
            v37 = 3;
LABEL_64:
            v36.klass = v33;
            v36.monitor = (void *)-1LL;
LABEL_67:
            v21 = (Il2CppObject *)System_Enum__ToString(&v36, 0LL);
            goto LABEL_68;
          }
LABEL_65:
          v36.klass = (System_Enum_c *)*v18;
          v36.monitor = (void *)-1LL;
          v32 = 6;
LABEL_66:
          v37 = v32;
          goto LABEL_67;
        }
        if ( funcType == 121 )
          goto LABEL_57;
        if ( funcType != 130 )
          goto LABEL_59;
LABEL_49:
        switch ( (int)v19 )
        {
          case 0:
            goto LABEL_62;
          case 1:
            v36.klass = (System_Enum_c *)*v18;
            v36.monitor = (void *)-1LL;
            v32 = 1;
            goto LABEL_66;
          case 2:
            v36.klass = (System_Enum_c *)*v18;
            v36.monitor = (void *)-1LL;
            v32 = 2;
            goto LABEL_66;
          case 3:
            goto LABEL_63;
          case 4:
            v36.klass = (System_Enum_c *)*v18;
            v36.monitor = (void *)-1LL;
            v32 = 5;
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
      switch ( (int)v19 )
      {
        case 0:
          goto LABEL_62;
        case 1:
          goto LABEL_63;
        case 2:
          goto LABEL_65;
        case 3:
          v36.klass = (System_Enum_c *)*v18;
          v36.monitor = (void *)-1LL;
          v32 = 76;
          goto LABEL_66;
        default:
          break;
      }
LABEL_68:
      svals = (void *)System_String__op_Inequality((System_String_o *)v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)svals & 1) != 0 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_82;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          v21,
                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_82;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v21,
            result,
            (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v16) = v17[6];
      if ( (__int64)++v19 >= (int)v16 )
        return;
    }
    if ( funcType <= 10 )
    {
      if ( funcType != 1 )
      {
        if ( funcType != 2 && (unsigned int)(funcType - 9) > 1 )
          goto LABEL_59;
LABEL_53:
        if ( (_DWORD)v19 != 2 )
          goto LABEL_60;
LABEL_54:
        v36.klass = (System_Enum_c *)*v18;
        v36.monitor = (void *)-1LL;
        v32 = 4;
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
        switch ( (int)v19 )
        {
          case 0:
            goto LABEL_62;
          case 1:
            goto LABEL_63;
          case 2:
            goto LABEL_65;
          case 3:
            v36.klass = (System_Enum_c *)*v18;
            v36.monitor = (void *)-1LL;
            v32 = 7;
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
void __fastcall DataVals__SetType_38540336(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( !funcEnt )
    sub_1B64324(this);
  v6 = (ServantStatusBattleListViewItem_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.sortValue0B = (int64_t)funcEnt;
  v6 = (ServantStatusBattleListViewItem_o *)((char *)v6 + 40);
  sub_1B6406C(v6, (int32_t)funcEnt, v7, v8);
  HIDWORD(v6[-1].fields.name) = funcEnt->fields.targetType;
  *(_DWORD *)&v6[-1].fields.isMine = funcIndex;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x21
  Il2CppObject *v9; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+18h] [xbp-38h]

  if ( (byte_49FBF82 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, *(_QWORD *)&type);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v7);
    byte_49FBF82 = 1;
  }
  vals = this->fields.vals;
  v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = type;
  v9 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
  if ( !vals )
    sub_1B64324(v9);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v9,
           param,
           (const MethodInfo_3171E6C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_49FBF7B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, name);
    byte_49FBF7B = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B64324(0LL);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_3171E6C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_T__TResult__o *v7; // x21

  if ( (byte_49FBF8C & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_DataVals_OverChargeState___, targetStateArray);
    sub_1B640C8(&Method_DataVals_IsOverChargeState__, v5);
    sub_1B640C8(&System_Func_DataVals_OverChargeState__bool__TypeInfo, v6);
    byte_49FBF8C = 1;
  }
  v7 = (System_Func_T__TResult__o *)sub_1B64314(
                                      System_Func_DataVals_OverChargeState__bool__TypeInfo,
                                      targetStateArray,
                                      method);
  System_Func_Int32Enum__bool____ctor(v7, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0LL);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__48383800(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v7,
                                                 (const MethodInfo_2E24738 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
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
  System_String_o *v15; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v18; // w0
  int32_t v19; // w23
  int32_t v20; // w22
  int32_t v21; // w0
  int32_t v22; // w24
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int16 v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FBF74 & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, key);
    sub_1B640C8(&StringLiteral_869/*","*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FBF74 = 1;
  }
  v28 = 58;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v13 = System_Char__ToString((uint16_t)&v28, 0LL);
  v14 = System_String__Concat_61386656((System_String_o *)StringLiteral_869/*","*/, key, v13, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v15 = svals;
  if ( !svals )
    goto LABEL_18;
  v18 = System_String__IndexOf_61406964(v15, v14, 0LL);
  if ( v18 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v19 = v18;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v14 = (System_String_o *)System_String__IndexOf_61405612(v14, startWord, v19, 0LL);
  if ( !*p_svals )
    goto LABEL_18;
  v20 = (int)v14;
  v21 = System_String__IndexOf_61405612(*p_svals, endWord, v19, 0LL);
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v22 = v21;
  if ( v21 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v23 = System_String__Substring_61394392(v14, v20, v22 - v20 + 1, 0LL);
  if ( isDelKeyValue )
  {
    v14 = *p_svals;
    if ( *p_svals )
    {
      v14 = System_String__Substring_61394392(v14, v19, v22 - v19 + 1, 0LL);
      if ( *p_svals )
      {
        v24 = System_String__Replace_61395016(*p_svals, v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        *p_svals = v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_svals, (int32_t)v24, v25, v26);
        return v23;
      }
    }
LABEL_18:
    sub_1B64324(v14);
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
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+18h] [xbp-38h]

  if ( (byte_49FBF7F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v5);
    byte_49FBF7F = 1;
  }
  vals = this->fields.vals;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = type;
  v7 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
  if ( !vals )
    sub_1B64324(v7);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v7,
           (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
  __int64 v9; // x1
  __int64 v10; // x8
  _DWORD *v11; // x20
  unsigned __int64 v12; // x23
  char *v13; // x27
  Il2CppObject *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_Enum_o v17; // [xsp+0h] [xbp-80h] BYREF
  int v18; // [xsp+10h] [xbp-70h]
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FBF76 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v3);
    sub_1B640C8(&DataVals_TYPE_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v7);
    byte_49FBF76 = 1;
  }
  result = 0;
  svals = this->fields.svals;
  if ( !svals
    || (svals = System_String__Replace_61395016(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15744/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_61395016(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16000/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1B64324(svals);
  }
  v10 = *((_QWORD *)svals + 3);
  v11 = svals;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    v13 = (char *)svals + 32;
    do
    {
      if ( v12 >= (unsigned int)v10 )
LABEL_25:
        sub_1B6432C(svals, v9);
      v14 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v13[8 * v12], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v12 >= (unsigned int)v11[6] )
          goto LABEL_25;
        svals = *(void **)&v13[8 * v12];
        if ( !svals )
          goto LABEL_24;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_24;
        if ( *((int *)svals + 6) >= 2 )
        {
          v14 = (Il2CppObject *)*((_QWORD *)svals + 4);
          System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL);
        }
      }
      svals = this->fields.vals;
      if ( !svals )
        goto LABEL_24;
      svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_object__int__o *)svals,
                        v14,
                        (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        v18 = 16;
        v17.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
        v17.monitor = (void *)-1LL;
        v15 = System_Enum__ToString(&v17, 0LL);
        if ( System_String__op_Equality(v15, (System_String_o *)v14, 0LL)
          || (v17.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo,
              v17.monitor = (void *)-1LL,
              v18 = 17,
              v16 = System_Enum__ToString(&v17, 0LL),
              svals = (void *)System_String__op_Equality(v16, (System_String_o *)v14, 0LL),
              ((unsigned __int8)svals & 1) != 0) )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v14,
            result,
            (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v10) = v11[6];
      ++v12;
    }
    while ( (__int64)v12 < (int)v10 );
  }
}


void __fastcall DataVals__set_FuncParamValueUpInfo(
        DataVals_o *this,
        FuncParamValueUpInfoBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_1B6406C(
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
  sub_1B6406C(
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBF9D & 1) == 0 )
  {
    sub_1B640C8(&DataVals___c_TypeInfo, v1);
    byte_49FBF9D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DataVals___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DataVals___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__37_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_1B64324(this);
  return funcEnt->fields.id;
}


int32_t __fastcall DataVals___c___GetTargetTypeIndexArray_b__134_2(
        DataVals___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall DataVals___c__DisplayClass104_0___ctor(
        DataVals___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass104_0___IsSatisfyAboveBelowCond_b__0(
        DataVals___c__DisplayClass104_0_o *this,
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


void __fastcall DataVals___c__DisplayClass105_0___ctor(
        DataVals___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass105_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass105_0_o *this,
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


void __fastcall DataVals___c__DisplayClass134_0___ctor(
        DataVals___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass134_0___GetTargetTypeIndexArray_b__0(
        DataVals___c__DisplayClass134_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass134_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_49FBF9E & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass134_0_o *)sub_1B640C8(
                                                  &Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__,
                                                  x.fields.key);
    byte_49FBF9E = 1;
  }
  if ( !key )
    sub_1B64324(this);
  return System_String__StartsWith(key, v4->fields.key, 0LL);
}


System_String_o *__fastcall DataVals___c__DisplayClass134_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass134_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass134_0_o *v4; // x20
  __int64 v5; // x1

  key = x.fields.key;
  v4 = this;
  if ( (byte_49FBF9F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, x.fields.key);
    this = (DataVals___c__DisplayClass134_0_o *)sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FBF9F = 1;
  }
  if ( !key )
    sub_1B64324(this);
  return System_String__Replace_61395016(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  if ( (byte_49FBFA0 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass35_0_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_List_FuncList_TYPE__Contains__,
                                                 x);
    byte_49FBFA0 = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass35_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_3492B20 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}