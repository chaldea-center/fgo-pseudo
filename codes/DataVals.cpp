void __fastcall DataVals___cctor(const MethodInfo *method)
{
  if ( (byte_4BDC0AB & 1) == 0 )
  {
    sub_1C21E38(&DataVals_TypeInfo);
    byte_4BDC0AB = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDC078 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
    byte_4BDC078 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_330CDE4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)&this->fields.targetCardIndex = -1LL;
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
  System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
    v12,
    (const MethodInfo_32AF3B8 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
  this->fields.invalidCauseDict = (struct System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.invalidCauseDict, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.svals, (int64_t)str, v19, v20, v21, v22, v23, v24);
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
    sub_1C22094(Param, v7);
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
  if ( (byte_4BDC080 & 1) == 0 )
  {
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    byte_4BDC080 = 1;
  }
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = type;
  v5 = System_Enum__ToString(&v8, 0LL);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_63115476(v5, v6, 0LL);
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
  System_String_o *StrParam; // x20
  System_Int32_array *result; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int32_t Param; // w0
  int32_t v9; // w19
  uint16_t v10; // w1

  if ( (byte_4BDC092 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC092 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  result = (System_Int32_array *)System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    Param = DataVals__GetParam(this, 55, 0, v7);
    if ( Param < 1 )
      return 0LL;
    v9 = Param;
    result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
    if ( result )
    {
      if ( !result->max_length )
        sub_1C2209C(result, v6);
      result->m_Items[1] = v9;
      return result;
    }
LABEL_14:
    sub_1C22094(result, v6);
  }
  if ( !StrParam )
    goto LABEL_14;
  if ( System_String__Contains_63145648(StrParam, 0x26u, 0LL) )
    v10 = 38;
  else
    v10 = 47;
  return BasicHelper__Convert2IntArray(StrParam, v10, 0LL);
}


int32_t __fastcall DataVals__GetBgmPriority(DataVals_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDC0A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC0A5 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 160, &param, v3) || DataVals__TryGetParam(this, 111, &param, v6) )
    return param;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v9);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, bgmId, 0, 0LL);
}


int32_t __fastcall DataVals__GetCallSvtEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 87, 0, v2);
}


int32_t __fastcall DataVals__GetCardIndex(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t result; // w0
  const MethodInfo *v5; // x3

  result = this->fields.targetCardIndex;
  if ( result == -1 )
  {
    if ( DataVals__isParam(this, 67, v2) )
      return DataVals__GetParam(this, 67, 0, v5);
    else
      return -1;
  }
  return result;
}


int32_t __fastcall DataVals__GetCardIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  if ( DataVals__isParam(this, 68, v2) )
    return DataVals__GetParam(this, 68, 0, v4);
  else
    return -1;
}


int32_t __fastcall DataVals__GetClassIconAuraEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 129, 0, v2);
}


ControlOtherBgmPriorityAtOverStageBgm_array *__fastcall DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x21
  const MethodInfo *v6; // x3
  System_Int32_array *Param; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Int32_array *ParamArray; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo *v27; // x2
  __int64 v29; // x8
  System_Int32_array *v30; // x21
  unsigned __int64 v31; // x26
  int32_t v32; // w23
  int64_t v33; // x22
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x3
  System_Int32_array *ParamArrayAddTypeIndex; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0

  if ( (byte_4BDC0A7 & 1) == 0 )
  {
    sub_1C21E38(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
    byte_4BDC0A7 = 1;
  }
  if ( !DataVals__isParam(this, 165, v2) )
    return 0LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v5 = sub_1C22084(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v5, 0LL);
  Param = (System_Int32_array *)DataVals__GetParam(this, 165, 0, v6);
  if ( !v5 )
    goto LABEL_22;
  *(_DWORD *)(v5 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 166, v9);
  *(_QWORD *)(v5 + 24) = ParamArray;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)ParamArray, v11, v12, v13, v14, v15, v16);
  if ( !v4 )
    goto LABEL_22;
  items = v4->fields._items;
  v24 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v4->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v5,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v5, v17, v18, v19, v20, v21, v22);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 165, v27);
  if ( !Param )
    goto LABEL_22;
  v29 = *(_QWORD *)&Param->max_length;
  v30 = Param;
  if ( (int)v29 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v29 )
        sub_1C2209C(Param, v8);
      v32 = v30->m_Items[v31 + 1];
      v33 = sub_1C22084(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v33, 0LL);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 165, v32, 0, v34);
      if ( !v33 )
        break;
      *(_DWORD *)(v33 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 166, v32, v35);
      *(_QWORD *)(v33 + 24) = ParamArrayAddTypeIndex;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)(v33 + 24),
        (int64_t)ParamArrayAddTypeIndex,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      v49 = v4->fields._items;
      v50 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
      ++v4->fields._version;
      if ( !v49 )
        break;
      v51 = v4->fields._size;
      if ( (unsigned int)v51 >= v49->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v33,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &v49->obj.klass + v51;
        v4->fields._size = v51 + 1;
        v52[4] = (Il2CppClass *)v33;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v52 + 4), v33, v43, v44, v45, v46, v47, v48);
      }
      LODWORD(v29) = v30->max_length;
      if ( (__int64)++v31 >= (int)v29 )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v4,
                                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_1C22094(Param, v8);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v4,
                                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
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
  __int64 v6; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  DataVals_array *result; // x0
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_4BDC07C & 1) == 0 )
  {
    sub_1C21E38(&DataVals___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C21E38(&System_Predicate_DataVals__TypeInfo);
    sub_1C21E38(&Method_DataVals___c__DisplayClass40_0__GetDependDataValsArray_b__0__);
    sub_1C21E38(&DataVals___c__DisplayClass40_0_TypeInfo);
    byte_4BDC07C = 1;
  }
  v6 = sub_1C22084(DataVals___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 16) = funcTypeList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)funcTypeList, v9, v10, v11, v12, v13, v14);
  result = (DataVals_array *)sub_1C21EE0(DataVals___TypeInfo, 0LL);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v17 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DataVals__TypeInfo);
    System_Predicate_object____ctor(
      v17,
      (Il2CppObject *)v6,
      Method_DataVals___c__DisplayClass40_0__GetDependDataValsArray_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v17,
            (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_1C22094(All, v8);
  }
  return result;
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v4; // x0
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v6; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  DataVals___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__42_1; // x20
  Il2CppObject *v18; // x21
  struct DataVals___c_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4BDC07E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_1C21E38(&System_Func_DataVals__int__TypeInfo);
    sub_1C21E38(&System_Func_DataVals__bool__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_DataVals___c__GetDependFuncIdArray_b__42_0__);
    sub_1C21E38(&Method_DataVals___c__GetDependFuncIdArray_b__42_1__);
    sub_1C21E38(&DataVals___c_TypeInfo);
    byte_4BDC07E = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  v4 = DataVals___c_TypeInfo;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v4 = DataVals___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v4->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = DataVals___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__42_0, v6, Method_DataVals___c__GetDependFuncIdArray_b__42_0__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_DataVals__bool__o *)_9__42_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__42_0, (int64_t)_9__42_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v15 = DataVals___c_TypeInfo;
  v16 = v14;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v15 = DataVals___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v15->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = DataVals___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(_9__42_1, v18, Method_DataVals___c__GetDependFuncIdArray_b__42_1__, 0LL);
    v19 = DataVals___c_TypeInfo->static_fields;
    v19->__9__42_1 = (struct System_Func_DataVals__int__o *)_9__42_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->__9__42_1, (int64_t)_9__42_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__42_1,
                                                               (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2);
}


int32_t __fastcall DataVals__GetEnemyCountChangeEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 202, 0, v2);
}


float __fastcall DataVals__GetEnemyCountChangeTime(DataVals_o *this, int32_t defaultPerMill, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (float)DataVals__GetParam(this, 201, defaultPerMill, v3) / 1000.0;
}


float __fastcall DataVals__GetEnemyCountWaitTimeAfterMessage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 203, 0, v2) / 1000.0;
}


int32_t __fastcall DataVals__GetFieldPriority(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  int32_t v5; // w1

  if ( DataVals__isParam(this, 163, v2) )
    v5 = 163;
  else
    v5 = 111;
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

  if ( (byte_4BDC0A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BDC0A3 = 1;
  }
  result = DataVals__GetParamArray(this, 81, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 80, 0, v5);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = System_Math__Max_63934620(Param, 1, 0LL);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                100,
                                                                v7,
                                                                (const MethodInfo_2FD9A04 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v8,
             (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountEqual(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 194, -1, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountHigher(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 192, 0, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountLower(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 193, 0, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 191, -1, v2);
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Enum_o v8; // [xsp+8h] [xbp-38h] BYREF
  int v9; // [xsp+18h] [xbp-28h]

  if ( (byte_4BDC09A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    byte_4BDC09A = 1;
  }
  vals = this->fields.vals;
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = 51;
  v4 = (Il2CppObject *)System_Enum__ToString(&v8, 0LL);
  if ( !vals )
    sub_1C22094(v4, v5);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v4,
         (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v6);
  }
  else
  {
    return -1;
  }
}


System_Int32_array_array *__fastcall DataVals__GetInt2DimensionalArray(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *StrParam; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_String_array *v10; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  int max_length; // w8
  unsigned int v13; // w22
  Il2CppClass **v14; // x8
  System_String_o *v15; // x21
  uint16_t v16; // w1
  System_Collections_ICollection_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4BDC0A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC0A9 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return 0LL;
  if ( !StrParam
    || (v10 = System_String__Split(StrParam, 0x7Cu, 0, 0LL),
        v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v11,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__),
        !v10) )
  {
LABEL_23:
    sub_1C22094(IsNullOrEmpty, v8);
  }
  max_length = v10->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= max_length )
        sub_1C2209C(IsNullOrEmpty, v8);
      v14 = &v10->obj.klass + (int)v13;
      v15 = (System_String_o *)v14[4];
      if ( !v15 )
        goto LABEL_23;
      if ( System_String__Contains_63145648((System_String_o *)v14[4], 0x26u, 0LL) )
        v16 = 38;
      else
        v16 = 47;
      v17 = (System_Collections_ICollection_o *)BasicHelper__Convert2IntArray(v15, v16, 0LL);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v17, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v11 )
          goto LABEL_23;
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_int____Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v17,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v17;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v17, v18, v19, v20, v21, v22, v23);
        }
      }
      max_length = v10->max_length;
    }
    while ( (int)++v13 < max_length );
  }
  if ( !v11 )
    goto LABEL_23;
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_int____ToArray__);
}


BattleBuffData_IntervalData_o *__fastcall DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  BattleBuffData_IntervalData_o *v7; // x20

  if ( (byte_4BDC0A4 & 1) == 0 )
  {
    sub_1C21E38(&BattleBuffData_IntervalData_TypeInfo);
    byte_4BDC0A4 = 1;
  }
  if ( !DataVals__isParam(this, 131, v2)
    && !DataVals__isParam(this, 132, v4)
    && !DataVals__isParam(this, 206, v5)
    && !DataVals__isParam(this, 207, v6) )
  {
    return 0LL;
  }
  v7 = (BattleBuffData_IntervalData_o *)sub_1C22084(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_43953048(v7, this, 0LL);
  return v7;
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

  if ( (byte_4BDC08F & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC08F = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v9);
  if ( !result->max_length )
    sub_1C2209C(result, v9);
  result->m_Items[1] = v7;
  return result;
}


int32_t __fastcall DataVals__GetMotionChange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 64, 0, v2);
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
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDC081 & 1) == 0 )
  {
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    byte_4BDC081 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetParam_40114880(this, type, v7, defaultValue, v8);
}


BattleBuffData_SaveArrayData_array *__fastcall DataVals__GetParamAddIndividualityAndCheckArrayData(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *Int2DimensionalArray; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  void *monitor; // x8
  unsigned __int64 v11; // x23
  System_Int32_array *v12; // x22
  BattleBuffData_SaveArrayData_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BDC0AA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
    sub_1C21E38(&BattleBuffData_SaveArrayData_TypeInfo);
    byte_4BDC0AA = 1;
  }
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, type, method);
  if ( BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0LL) )
    return 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
  if ( !Int2DimensionalArray )
LABEL_17:
    sub_1C22094(v8, v9);
  monitor = Int2DimensionalArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)monitor )
        sub_1C2209C(v8, v9);
      v12 = (System_Int32_array *)*((_QWORD *)&Int2DimensionalArray[2].klass + v11);
      v13 = (BattleBuffData_SaveArrayData_o *)sub_1C22084(BattleBuffData_SaveArrayData_TypeInfo);
      BattleBuffData_SaveArrayData___ctor_43964560(v13, v12, 0LL);
      if ( !v7 )
        goto LABEL_17;
      items = v7->fields._items;
      v21 = Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v13,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v13;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(monitor) = Int2DimensionalArray[1].monitor;
    }
    while ( (__int64)++v11 < (int)monitor );
  }
  if ( !v7 )
    goto LABEL_17;
  return (BattleBuffData_SaveArrayData_array *)System_Collections_Generic_List_object___ToArray(
                                                 v7,
                                                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
}


int32_t __fastcall DataVals__GetParamAddIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 189, -1, v2);
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

  if ( (byte_4BDC083 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_25543/*"{0}_{1}"*/);
    byte_4BDC083 = 1;
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
  v14 = System_String__Format_63129848((System_String_o *)StringLiteral_25543/*"{0}_{1}"*/, v9, v13, 0LL);
  return DataVals__GetParam_40114880(this, type, v14, defaultValue, v15);
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

  if ( (byte_4BDC09C & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC09C = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v7);
  if ( Param < 1 )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v11);
  if ( !result->max_length )
    sub_1C2209C(result, v11);
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

  if ( (byte_4BDC09D & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC09D = 1;
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
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v13);
  if ( !result->max_length )
    sub_1C2209C(result, v13);
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

  if ( (byte_4BDC08E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC08E = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_1C22094(IsNullOrEmpty, v10);
  return System_String__Split(StrParam, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam_40114880(
        DataVals_o *this,
        int32_t type,
        System_String_o *name,
        int32_t defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8

  if ( (byte_4BDC082 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4BDC082 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_1C22094(vals, *(_QWORD *)&type);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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

  if ( (byte_4BDC090 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC090 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v9);
  if ( !result->max_length )
    sub_1C2209C(result, v9);
  result->m_Items[1] = v7;
  return result;
}


System_Int32_array *__fastcall DataVals__GetShortenMaxCountArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x19
  System_Array_o *v5; // x0
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_4BDC0A8 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D);
    byte_4BDC0A8 = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 184, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0LL) )
  {
    v5 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 3LL);
    v7.fields.value = Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
    ParamArray = (System_Collections_ICollection_o *)v5;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v5, v7, 0LL);
  }
  return (System_Int32_array *)ParamArray;
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddFieldIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 200, v2);
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddOpIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 199, v2);
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddSelfIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 198, v2);
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

  if ( (byte_4BDC085 & 1) == 0 )
  {
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    byte_4BDC085 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetStrParam_40115968(this, v7, defaultValue, v8);
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

  if ( (byte_4BDC087 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_25543/*"{0}_{1}"*/);
    byte_4BDC087 = 1;
  }
  v18 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v18, *(_QWORD *)&index, defaultValue, method);
  v17 = index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  v14 = System_String__Format_63129848((System_String_o *)StringLiteral_25543/*"{0}_{1}"*/, v9, v13, 0LL);
  return DataVals__GetStrParam_40115968(this, v14, defaultValue, v15);
}


System_String_o *__fastcall DataVals__GetStrParam_40115968(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_4BDC086 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4BDC086 = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v9 = this->fields.strVals;
  if ( !v9 )
    sub_1C22094(0LL, v8);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v9,
                              (Il2CppObject *)name,
                              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_Int32_array *__fastcall DataVals__GetTargetBuffIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 187, v2);
}


System_Int32_array *__fastcall DataVals__GetTargetFunctionIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 186, v2);
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

  if ( (byte_4BDC08C & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC08C = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v9);
  if ( !result->max_length )
    sub_1C2209C(result, v9);
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

  if ( (byte_4BDC091 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC091 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v5);
  if ( Param < 1 )
    return 0LL;
  v7 = Param;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v9);
  if ( !result->max_length )
    sub_1C2209C(result, v9);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__int__o *v23; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  DataVals___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_int__int__o *_9__142_2; // x20
  Il2CppObject *v28; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  int32_t v38; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDC0A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
    sub_1C21E38(&System_Func_int__int__TypeInfo);
    sub_1C21E38(&System_Func_KeyValuePair_string__int___bool__TypeInfo);
    sub_1C21E38(&System_Func_string__int__TypeInfo);
    sub_1C21E38(&System_Func_KeyValuePair_string__int___string__TypeInfo);
    sub_1C21E38(&Method_System_Int32_Parse__);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    sub_1C21E38(&Method_DataVals___c__GetTargetTypeIndexArray_b__142_2__);
    sub_1C21E38(&Method_DataVals___c__DisplayClass142_0__GetTargetTypeIndexArray_b__0__);
    sub_1C21E38(&Method_DataVals___c__DisplayClass142_0__GetTargetTypeIndexArray_b__1__);
    sub_1C21E38(&DataVals___c__DisplayClass142_0_TypeInfo);
    sub_1C21E38(&DataVals___c_TypeInfo);
    sub_1C21E38(&StringLiteral_25540/*"{0}_"*/);
    byte_4BDC0A6 = 1;
  }
  v5 = sub_1C22084(DataVals___c__DisplayClass142_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v38 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v38, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_25540/*"{0}_"*/, v9, 0LL);
  if ( !v5 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v5 + 16) = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)v10, v12, v13, v14, v15, v16, v17);
  vals = this->fields.vals;
  v19 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_string__int___bool__TypeInfo);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass142_0__GetTargetTypeIndexArray_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2FEE600 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v21 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_string__int___string__TypeInfo);
  System_Func_KeyValuePair_object__int___object____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass142_0__GetTargetTypeIndexArray_b__1__,
    0LL);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)v21,
                                                               (const MethodInfo_2FDB05C *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v23 = (System_Func_object__int__o *)sub_1C22084(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v23, 0LL, Method_System_Int32_Parse__, 0LL);
  v24 = System_Linq_Enumerable__Select_object__int_(
          v22,
          (System_Func_TSource__TResult__o *)v23,
          (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_string__int___);
  v25 = DataVals___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v25 = DataVals___c_TypeInfo;
  }
  _9__142_2 = v25->static_fields->__9__142_2;
  if ( !_9__142_2 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = DataVals___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__142_2 = (System_Func_int__int__o *)sub_1C22084(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__142_2, v28, Method_DataVals___c__GetTargetTypeIndexArray_b__142_2__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__142_2 = _9__142_2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__142_2,
      (int64_t)_9__142_2,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v26,
                                                               (System_Func_TSource__TKey__o *)_9__142_2,
                                                               (const MethodInfo_2FD8CC0 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v36,
           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

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
  return DataVals__GetParam(this, 79, 0, v8);
}


System_Int32_array *__fastcall DataVals__GetTriggeredFuncIndexArray(
        DataVals_o *this,
        bool *isAndCheck,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool ParamIntArray; // w8
  System_Int32_array *result; // x0
  System_Int32_array *paramArray; // [xsp+8h] [xbp-18h] BYREF

  paramArray = 0LL;
  *isAndCheck = 0;
  ParamIntArray = DataVals__TryGetParamIntArray(this, 190, &paramArray, v3);
  result = 0LL;
  if ( ParamIntArray )
  {
    *isAndCheck = 1;
    return paramArray;
  }
  return result;
}


System_String_array *__fastcall DataVals__GetValsArray(System_String_o *vals, const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  long double inited; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4BDC079 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_string___);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDC079 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(vals, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_string___;
    v7 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
    if ( !v7 )
    {
      sub_1C73D70(Method_System_Array_Empty_string___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C73D14(inited);
    return **(System_String_array ***)(v9 + 184);
  }
  else
  {
    if ( !vals
      || (IsNullOrEmpty = System_String__Replace_63135104(
                            vals,
                            (System_String_o *)StringLiteral_16086/*"["*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL
      || (IsNullOrEmpty = System_String__Replace_63135104(
                            IsNullOrEmpty,
                            (System_String_o *)StringLiteral_16345/*"]"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
      sub_1C22094(IsNullOrEmpty, v4);
    }
    return System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
  }
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

  if ( (byte_4BDC08D & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC08D = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v7);
  if ( !Param )
    return 0LL;
  v9 = Param;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v11);
  if ( !result->max_length )
    sub_1C2209C(result, v11);
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

  return DataVals__isParam(this, 160, v2) || DataVals__isParam(this, 111, v4);
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
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_String_o *v10; // x0

  if ( (byte_4BDC095 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC095 = 1;
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

  if ( (byte_4BDC096 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC096 = 1;
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

  return DataVals__isParam(this, 167, v2)
      || DataVals__isParam(this, 168, v4)
      || DataVals__isParam(this, 169, v5)
      || DataVals__isParam(this, 170, v6);
}


bool __fastcall DataVals__IsBehaveAsFamilyBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  return !DataVals__isParam(this, 98, v2) || DataVals__GetParam(this, 98, 0, v4) > 0;
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
  if ( (byte_4BDC099 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_bool___);
    byte_4BDC099 = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2F9E7F8 *)Method_BasicHelper_IndexValue_bool___);
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

  return DataVals__GetParam(this, 86, 0, v2) == 1;
}


bool __fastcall DataVals__IsExistSnapShotParamAddIndv(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x24
  const MethodInfo *v5; // x2
  System_Collections_ICollection_o *v6; // x23
  const MethodInfo *v7; // x2
  System_Collections_ICollection_o *v8; // x22
  const MethodInfo *v9; // x2
  System_Collections_ICollection_o *Int2DimensionalArray; // x21
  const MethodInfo *v11; // x2
  System_Collections_ICollection_o *v12; // x20
  const MethodInfo *v13; // x2
  System_Collections_ICollection_o *v14; // x19

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 152, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 153, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 154, v7);
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 198, v9);
  v12 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 199, v11);
  v14 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 200, v13);
  return !BasicHelper__IsNullOrEmpty(ParamArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v6, 0LL)
      || !BasicHelper__IsNullOrEmpty(v8, 0LL)
      || !BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v12, 0LL)
      || !BasicHelper__IsNullOrEmpty(v14, 0LL);
}


bool __fastcall DataVals__IsExtendBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 167, v2);
}


bool __fastcall DataVals__IsExtendBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 169, v2);
}


bool __fastcall DataVals__IsForciblyAddState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 50, v2) || DataVals__isParam(this, 88, v4) || DataVals__isParam(this, 113, v5);
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

  if ( (byte_4BDC093 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
    sub_1C21E38(&Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
    sub_1C21E38(&System_Func_DataVals_InvalidCause__bool__TypeInfo);
    sub_1C21E38(&Method_DataVals___c__DisplayClass80_0__IsHideNoEffect_b__0__);
    sub_1C21E38(&DataVals___c__DisplayClass80_0_TypeInfo);
    byte_4BDC093 = 1;
  }
  resultList = 0LL;
  Param = DataVals__GetParam(this, 12, 0, v3);
  if ( Param != 1 )
  {
    if ( DataVals__TryGetDisplayNoEffectCauseList(this, &resultList, v7) )
    {
      v8 = sub_1C22084(DataVals___c__DisplayClass80_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0LL);
      Value_int__Int32Enum = BasicHelper__GetValue_int__Int32Enum_(
                               (System_Collections_Generic_Dictionary_K__V__o *)this->fields.invalidCauseDict,
                               targetId,
                               0,
                               (const MethodInfo_2F9E070 *)Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
      if ( !v8 )
        sub_1C22094(Value_int__Int32Enum, v10);
      *(_DWORD *)(v8 + 16) = Value_int__Int32Enum;
      v11 = resultList;
      v12 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_DataVals_InvalidCause__bool__TypeInfo);
      System_Func_Int32Enum__bool____ctor(
        v12,
        (Il2CppObject *)v8,
        Method_DataVals___c__DisplayClass80_0__IsHideNoEffect_b__0__,
        0LL);
      LOBYTE(Param) = System_Linq_Enumerable__All_Int32Enum_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                        (System_Func_TSource__bool__o *)v12,
                        (const MethodInfo_2FB9B48 *)Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
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

  return DataVals__GetParam(this, 147, 0, v2) == 1;
}


bool __fastcall DataVals__IsIncludeIgnoreIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 85, 0, v2) == 1;
}


bool __fastcall DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 171, v2);
}


bool __fastcall DataVals__IsLoseBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 36, 0, v2) != 0;
}


bool __fastcall DataVals__IsMatchFriendShipCondition(DataVals_o *this, int32_t friendShip, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 180, 0, v3) <= friendShip;
}


bool __fastcall DataVals__IsOnParty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 92, 0, v2) == 1;
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

  if ( (byte_4BDC089 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    byte_4BDC089 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1C22094(0LL, typeKey);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)typeKey,
           (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall DataVals__IsParamAddBattlePoint(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 182, v2) && DataVals__isParam(this, 183, v4);
}


bool __fastcall DataVals__IsProgressTurnOnBoard(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 141, 0, v2) == 1;
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

  if ( (byte_4BDC0A0 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__int__bool__TypeInfo);
    sub_1C21E38(&Method_DataVals___c__DisplayClass113_0__IsSatisfyAboveBelowCond_b__0__);
    sub_1C21E38(&DataVals___c__DisplayClass113_0_TypeInfo);
    sub_1C21E38(&StringLiteral_1635/*"<="*/);
    byte_4BDC0A0 = 1;
  }
  v9 = sub_1C22084(DataVals___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_DWORD *)(v9 + 16) = compareVal;
  ParamKey = DataVals__MakeParamKey(v10, paramType, index, v12);
  v14 = (System_Func_bool__int__bool__o *)sub_1C22084(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_DataVals___c__DisplayClass113_0__IsSatisfyAboveBelowCond_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, ParamKey, (System_String_o *)StringLiteral_1635/*"<="*/, v14, v15);
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

  if ( (byte_4BDC0A1 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__int__bool__TypeInfo);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    sub_1C21E38(&Method_DataVals___c__DisplayClass114_0__IsSatisfyAboveBelowCondition_b__0__);
    sub_1C21E38(&DataVals___c__DisplayClass114_0_TypeInfo);
    sub_1C21E38(&StringLiteral_1599/*"<"*/);
    byte_4BDC0A1 = 1;
  }
  v7 = sub_1C22084(DataVals___c__DisplayClass114_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = compareVal;
  v14.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v14.monitor = (void *)-1LL;
  v15 = paramType;
  v10 = System_Enum__ToString(&v14, 0LL);
  v11 = (System_Func_bool__int__bool__o *)sub_1C22084(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_DataVals___c__DisplayClass114_0__IsSatisfyAboveBelowCondition_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, v10, (System_String_o *)StringLiteral_1599/*"<"*/, v11, v12);
}


bool __fastcall DataVals__IsSatisfyCommonReleaseId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  CommonReleaseMaster_o *v8; // x19
  int32_t v9; // w1
  char v10; // w8
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDC09B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BDC09B = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 208, &param, v2) )
  {
    v4 = param;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    v7 = param;
    v8 = (CommonReleaseMaster_o *)Master_object;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !v8 )
      sub_1C22094(Master_object, v6);
    if ( v7 >= 0 )
      v9 = v7;
    else
      v9 = -v7;
    v10 = (v4 < 0) ^ CommonReleaseMaster__IsOpen(v8, v9, 0LL, 0, 0LL);
  }
  else
  {
    v10 = 1;
  }
  return v10 & 1;
}


bool __fastcall DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        System_String_o *paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  System_String_o *StrParam_40115968; // x22
  __int64 IsMatch; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x21
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  System_String_o *v46; // x21
  int v47; // w8
  __int64 v48; // x22
  unsigned int v49; // w25
  System_String_o *v50; // x23
  System_String_o *v51; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDC0A2 & 1) == 0 )
  {
    sub_1C21E38(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_784/*"(^"*/);
    sub_1C21E38(&StringLiteral_16326/*"\\d+$|^\\d+"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_486/*"$)"*/);
    byte_4BDC0A2 = 1;
  }
  result = 0;
  StrParam_40115968 = DataVals__GetStrParam_40115968(
                        this,
                        paramType,
                        (System_String_o *)StringLiteral_1/*""*/,
                        (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam_40115968, 0LL) )
    return 1;
  IsMatch = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !IsMatch )
    goto LABEL_25;
  v18 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v19 = StringLiteral_784/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_784/*"(^"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(IsMatch + 32), v19, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v18 + 24) <= 1u
    || (*(_QWORD *)(v18 + 40) = compareKey,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 40), (int64_t)compareKey, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v18 + 24) <= 2u)
    || (v32 = StringLiteral_16326/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v18 + 48) = StringLiteral_16326/*"\\d+$|^\\d+"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 48), v32, v26, v27, v28, v29, v30, v31),
        *(_DWORD *)(v18 + 24) <= 3u)
    || (*(_QWORD *)(v18 + 56) = compareKey,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 56), (int64_t)compareKey, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v18 + 24) <= 4u) )
  {
LABEL_26:
    sub_1C2209C(IsMatch, v11);
  }
  v45 = StringLiteral_486/*"$)"*/;
  *(_QWORD *)(v18 + 64) = StringLiteral_486/*"$)"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 64), v45, v39, v40, v41, v42, v43, v44);
  IsMatch = (__int64)System_String__Concat_63129004((System_String_array *)v18, 0LL);
  if ( !StrParam_40115968
    || (v46 = (System_String_o *)IsMatch,
        (IsMatch = (__int64)System_String__Split(StrParam_40115968, 0x2Fu, 0, 0LL)) == 0) )
  {
LABEL_25:
    sub_1C22094(IsMatch, v11);
  }
  v47 = *(_DWORD *)(IsMatch + 24);
  v48 = IsMatch;
  if ( v47 < 1 )
    return 1;
  v49 = 0;
  while ( 1 )
  {
    if ( v49 >= v47 )
      goto LABEL_26;
    v50 = *(System_String_o **)(v48 + 8LL * (int)v49 + 32);
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v50, v46, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v50 )
      goto LABEL_25;
    v51 = System_String__Replace_63135104(v50, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v51, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v50, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_25;
    IsMatch = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))funcCompare->fields.m_target)(
                funcCompare->fields.original_method_info,
                IsMatch & 1,
                (unsigned int)result,
                *(_QWORD *)&funcCompare->fields.extra_arg);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v47 = *(_DWORD *)(v48 + 24);
    if ( (int)++v49 >= v47 )
      return 1;
  }
}


bool __fastcall DataVals__IsShortenBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 168, v2);
}


bool __fastcall DataVals__IsShortenBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 170, v2);
}


bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x20
  Il2CppObject *v6; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+18h] [xbp-28h]

  if ( (byte_4BDC08A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    byte_4BDC08A = 1;
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
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  }
  else
  {
    return 0;
  }
}


bool __fastcall DataVals__IsWinBattleNotRelatedSurvivalStatus(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 57, 0, v2) != 0;
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

  if ( (byte_4BDC09F & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_25543/*"{0}_{1}"*/);
    byte_4BDC09F = 1;
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
    return System_String__Format_63129848((System_String_o *)StringLiteral_25543/*"{0}_{1}"*/, v8, v12, 0LL);
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
    sub_1C22094(Param, v10);
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
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_o *v35; // x0
  DataVals_o *v36; // x26
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_Fields fields; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  __int64 v49; // x8
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BDC07B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C21E38(&DataVals_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDC07B = 1;
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
  v10 = (System_String_o **)&StringLiteral_16086/*"["*/;
  v11 = (System_String_o **)&StringLiteral_16345/*"]"*/;
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
      v27 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v27,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v28 = (int64_t)v27;
      *p_dependDataValsList = (struct System_Collections_Generic_List_DataVals__o *)v27;
      v10 = v26;
      v11 = v25;
      v9 = v24;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dependDataValsList, v28, v29, v30, v31, v32, v33, v34);
    }
    result = 0;
    if ( !v17
      || (IsNullOrEmpty = System_String__Replace_63135104(
                            (System_String_o *)v17,
                            *v10,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
LABEL_27:
      sub_1C22094(IsNullOrEmpty, v23);
    }
    v35 = System_String__Replace_63135104(IsNullOrEmpty, *v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( System_Int32__TryParse(v35, &result, 0LL) )
    {
      v36 = (DataVals_o *)sub_1C22084(*v9);
      DataVals___ctor(v36, v21, v37);
      IsNullOrEmpty = (System_String_o *)funcMst;
      if ( !funcMst )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst,
                                           result,
                                           (const MethodInfo_325BDC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v36 )
        goto LABEL_27;
      DataVals__SetType_40112564(v36, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v38);
      v36->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v12, v39);
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
          (Il2CppObject *)v36,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v49 + 32) = v36;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v36, v40, v41, v42, v43, v44, v45);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Boolean_array *v16; // x21
  unsigned __int64 v17; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v19; // x2

  if ( (byte_4BDC098 & 1) == 0 )
  {
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__get_Item__);
    byte_4BDC098 = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v7 = (struct System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, size);
        v15 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v15 )
LABEL_13:
          sub_1C22094(v7, v8);
        v16 = v7;
        v17 = 0LL;
        while ( (__int64)v17 < v15->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v15,
                   v17,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v7 = (struct System_Boolean_array *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)dependDataList,
                                                v17,
                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v7 = (struct System_Boolean_array *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v7, v19);
            if ( v16 )
            {
              if ( v17 >= v16->max_length )
                sub_1C2209C(v7, v8);
              v16->m_Items[v17 + 4] = (unsigned __int8)v7 & 1;
              v15 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              ++v17;
              if ( v15 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = v16;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (int64_t)v16,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *__fastcall DataVals__SetInvalidCauseByAnyBuff(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *invalidCauseDict; // x0

  if ( (byte_4BDC077 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
    byte_4BDC077 = 1;
  }
  invalidCauseDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.invalidCauseDict;
  if ( !invalidCauseDict )
    sub_1C22094(0LL, *(_QWORD *)&targetId);
  System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
    invalidCauseDict,
    targetId,
    1,
    (const MethodInfo_32AFD68 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
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
  PartyOrganizationUtility_o *p_svals; // x21
  struct System_String_o *svals; // x22
  const MethodInfo *v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int32_t funcIndex; // [xsp+Ch] [xbp-24h] BYREF

  funcIndex = 0;
  p_svals = (PartyOrganizationUtility_o *)&this->fields.svals;
  svals = this->fields.svals;
  DataVals__SetDependDataVals(this, funcMst, &funcIndex, method);
  DataVals__SetType(this, ft, v8);
  p_svals->klass = (PartyOrganizationUtility_c *)svals;
  sub_1C21DDC(p_svals, (int64_t)svals, v9, v10, v11, v12, v13, v14);
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
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Enum_c *v24; // x8
  int v25; // w8
  _DWORD *v26; // [xsp+0h] [xbp-90h]
  PartyOrganizationUtility_o *p_strVals; // [xsp+8h] [xbp-88h]
  System_Enum_o v28; // [xsp+10h] [xbp-80h] BYREF
  int v29; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BDC07A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDC07A = 1;
  }
  result = 0;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals
    || (svals = System_String__Replace_63135104(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16086/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_63135104(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16345/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_80:
    sub_1C22094(svals, *(_QWORD *)&ft);
  }
  v6 = *((_QWORD *)svals + 3);
  v7 = svals;
  if ( (int)v6 >= 1 )
  {
    v8 = &DataVals_TYPE_TypeInfo;
    v9 = 0LL;
    v10 = (char *)svals + 32;
    v26 = svals;
    p_strVals = (PartyOrganizationUtility_o *)&this->fields.strVals;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v6 )
LABEL_81:
        sub_1C2209C(svals, *(_QWORD *)&ft);
      v11 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v10[8 * v9], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v9 >= (unsigned int)v7[6] )
          goto LABEL_81;
        svals = *(void **)&v10[8 * v9];
        if ( !svals )
          goto LABEL_80;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_80;
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
              v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v16,
                (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              v17 = (int64_t)v16;
              p_strVals->klass = (PartyOrganizationUtility_c *)v16;
              v8 = v15;
              this = v14;
              v7 = v26;
              sub_1C21DDC(p_strVals, v17, v18, v19, v20, v21, v22, v23);
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_80;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              v11,
                              (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( *((_DWORD *)v13 + 6) <= 1u )
                goto LABEL_81;
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_80;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                v11,
                *((Il2CppObject **)v13 + 5),
                (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
            }
          }
        }
        goto LABEL_65;
      }
      funcType = this->fields.funcType;
      if ( funcType <= 47 )
      {
        if ( funcType <= 10 )
        {
          if ( funcType != 1 )
          {
            if ( funcType != 2 && (unsigned int)(funcType - 9) > 1 )
              goto LABEL_46;
LABEL_51:
            if ( (_DWORD)v9 == 2 )
            {
LABEL_57:
              v28.klass = (System_Enum_c *)*v8;
              v28.monitor = (void *)-1LL;
              v25 = 4;
              goto LABEL_63;
            }
            goto LABEL_52;
          }
          goto LABEL_42;
        }
        if ( ((1LL << funcType) & 0x800008048000LL) == 0 )
        {
          if ( funcType != 16LL )
            goto LABEL_46;
LABEL_42:
          switch ( (int)v9 )
          {
            case 0:
              goto LABEL_56;
            case 1:
              v28.klass = (System_Enum_c *)*v8;
              v28.monitor = (void *)-1LL;
              v29 = 1;
              goto LABEL_64;
            case 2:
              v28.klass = (System_Enum_c *)*v8;
              v28.monitor = (void *)-1LL;
              v25 = 2;
              goto LABEL_63;
            case 3:
              goto LABEL_60;
            case 4:
              v28.klass = (System_Enum_c *)*v8;
              v28.monitor = (void *)-1LL;
              v25 = 5;
              goto LABEL_63;
            case 5:
              goto LABEL_57;
            default:
              goto LABEL_65;
          }
          goto LABEL_65;
        }
        goto LABEL_55;
      }
      if ( funcType <= 62 )
        break;
      if ( funcType > 121 )
      {
        if ( funcType <= 141 )
        {
          if ( funcType != 130 )
          {
            if ( funcType != 131 && funcType != 133 )
              goto LABEL_46;
            goto LABEL_51;
          }
          goto LABEL_42;
        }
        if ( funcType == 142 )
        {
          if ( (_DWORD)v9 == 2 )
          {
            v28.klass = (System_Enum_c *)*v8;
            v28.monitor = (void *)-1LL;
            v25 = 174;
          }
          else
          {
            if ( (_DWORD)v9 != 1 )
              goto LABEL_53;
            v28.klass = (System_Enum_c *)*v8;
            v28.monitor = (void *)-1LL;
            v25 = 173;
          }
LABEL_63:
          v29 = v25;
          goto LABEL_64;
        }
        if ( funcType != 143 )
        {
          if ( funcType == 146 )
            goto LABEL_51;
          goto LABEL_46;
        }
        goto LABEL_55;
      }
      if ( funcType != 109 )
      {
        if ( funcType != 121 )
          goto LABEL_46;
LABEL_55:
        switch ( (int)v9 )
        {
          case 0:
            goto LABEL_56;
          case 1:
            goto LABEL_60;
          case 2:
            goto LABEL_62;
          case 3:
            v28.klass = (System_Enum_c *)*v8;
            v28.monitor = (void *)-1LL;
            v25 = 7;
            goto LABEL_63;
          default:
            goto LABEL_65;
        }
        goto LABEL_65;
      }
      switch ( (int)v9 )
      {
        case 0:
          goto LABEL_56;
        case 1:
          goto LABEL_60;
        case 2:
          goto LABEL_62;
        case 3:
          v28.klass = (System_Enum_c *)*v8;
          v28.monitor = (void *)-1LL;
          v25 = 77;
          goto LABEL_63;
        default:
          break;
      }
LABEL_65:
      svals = (void *)System_String__op_Inequality((System_String_o *)v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)svals & 1) != 0 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_80;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          v11,
                          (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_80;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v11,
            result,
            (const MethodInfo_330D798 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v6) = v7[6];
      if ( (__int64)++v9 >= (int)v6 )
        return;
    }
    if ( funcType == 52 )
      goto LABEL_51;
    if ( funcType != 55 )
    {
      if ( funcType == 62 )
        goto LABEL_51;
LABEL_46:
      if ( (_DWORD)v9 == 2 )
      {
LABEL_62:
        v28.klass = (System_Enum_c *)*v8;
        v28.monitor = (void *)-1LL;
        v25 = 6;
        goto LABEL_63;
      }
LABEL_52:
      if ( (_DWORD)v9 == 1 )
      {
LABEL_60:
        v24 = (System_Enum_c *)*v8;
        v29 = 3;
      }
      else
      {
LABEL_53:
        if ( (_DWORD)v9 )
          goto LABEL_65;
LABEL_56:
        v24 = (System_Enum_c *)*v8;
        v29 = 0;
      }
      v28.klass = v24;
      v28.monitor = (void *)-1LL;
LABEL_64:
      v11 = (Il2CppObject *)System_Enum__ToString(&v28, 0LL);
      goto LABEL_65;
    }
    goto LABEL_55;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_40112564(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int32_t targetType; // w8

  if ( !funcEnt )
    sub_1C22094(this, 0LL);
  v6 = (PartyOrganizationUtility_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)funcEnt;
  v6 = (PartyOrganizationUtility_o *)((char *)v6 + 40);
  sub_1C21DDC(v6, (int64_t)funcEnt, v7, v8, v9, v10, v11, v12);
  targetType = funcEnt->fields.targetType;
  *(_DWORD *)(&v6[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = funcIndex;
  HIDWORD(v6[-1].fields._TransitionDestinationFromDetail_k__BackingField) = targetType;
}


bool __fastcall DataVals__TryGetDisplayNoEffectCauseList(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals_InvalidCause__o **resultList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x4
  bool ParamStrArray; // w0
  bool v12; // w8
  System_Collections_Generic_List_T__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_DataVals_InvalidCause__o *v20; // x0
  __int64 v21; // x1
  System_String_array *v22; // x21
  __int64 v23; // x8
  unsigned __int64 i; // x22
  System_String_o *v25; // x20
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int32_t item; // [xsp+Ch] [xbp-54h] BYREF
  System_String_array *result; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BDC094 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Enum_TryParse_DataVals_InvalidCause___);
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    byte_4BDC094 = 1;
  }
  result = 0LL;
  item = 0;
  *resultList = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)resultList, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  ParamStrArray = DataVals__TryGetParamStrArray(this, &result, 172, 0x7FFFFFFF, v10);
  v12 = 0;
  if ( ParamStrArray )
  {
    v13 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v13,
      (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    *resultList = (System_Collections_Generic_List_DataVals_InvalidCause__o *)v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)resultList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    v22 = result;
    if ( !result )
LABEL_20:
      sub_1C22094(v20, v21);
    v23 = *(_QWORD *)&result->max_length;
    if ( (int)v23 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v23; ++i )
      {
        if ( i >= (unsigned int)v23 )
          sub_1C2209C(v20, v21);
        v25 = v22->m_Items[i];
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        v20 = (System_Collections_Generic_List_DataVals_InvalidCause__o *)System_Enum__TryParse_Int32Enum__50031148(
                                                                            v25,
                                                                            0,
                                                                            &item,
                                                                            (const MethodInfo_2FB6A2C *)Method_System_Enum_TryParse_DataVals_InvalidCause___);
        if ( ((unsigned __int8)v20 & 1) != 0 )
        {
          v20 = *resultList;
          if ( !*resultList )
            goto LABEL_20;
          v21 = (unsigned int)item;
          items = (struct System_Object_array *)v20->fields._items;
          v27 = Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)v20,
              v21,
              *(const MethodInfo_36348BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v20->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v21;
          }
        }
        LODWORD(v23) = v22->max_length;
      }
    }
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0LL);
  }
  return v12;
}


bool __fastcall DataVals__TryGetFuncCheckTargetIndividualityCount(
        DataVals_o *this,
        int32_t *countHigher,
        int32_t *countLower,
        int32_t *countEqual,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t Param; // w0

  *countHigher = DataVals__GetParam(this, 192, 0, (const MethodInfo *)countEqual);
  *countLower = DataVals__GetParam(this, 193, 0, v9);
  Param = DataVals__GetParam(this, 194, -1, v10);
  *countEqual = Param;
  return *countHigher > 0 || Param >= 0 || *countLower > 0;
}


bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDC08B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    byte_4BDC08B = 1;
  }
  vals = this->fields.vals;
  v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = type;
  v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
  if ( !vals )
    sub_1C22094(v8, v9);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v8,
           param,
           (const MethodInfo_330EF54 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4BDC084 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_4BDC084 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1C22094(0LL, name);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_330EF54 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamIntArray(
        DataVals_o *this,
        int32_t type,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v5 = DataVals__GetParamArray(this, type, (const MethodInfo *)paramArray);
  *paramArray = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)paramArray, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*paramArray, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__TryGetParamStrArray(
        DataVals_o *this,
        System_String_array **result,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DataVals_o *v12; // x0
  const MethodInfo *v13; // x3
  System_String_o *ParamKey; // x0
  const MethodInfo *v15; // x3
  System_String_o *StrParam_40115968; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  System_String_array *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BDC09E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC09E = 1;
  }
  *result = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)result,
    0LL,
    *(int64_t *)&paramType,
    index,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  ParamKey = DataVals__MakeParamKey(v12, paramType, index, v13);
  StrParam_40115968 = DataVals__GetStrParam_40115968(this, ParamKey, (System_String_o *)StringLiteral_1/*""*/, v15);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam_40115968, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !StrParam_40115968 )
      sub_1C22094(IsNullOrEmpty, v18);
    v19 = System_String__Split(StrParam_40115968, 0x2Fu, 0, 0LL);
    *result = v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)result, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0LL);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21

  if ( (byte_4BDC097 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_DataVals_OverChargeState___);
    sub_1C21E38(&Method_DataVals_IsOverChargeState__);
    sub_1C21E38(&System_Func_DataVals_OverChargeState__bool__TypeInfo);
    byte_4BDC097 = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v5, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0LL);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__49916984(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v5,
                                                 (const MethodInfo_2F9AC38 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int16 v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDC07D & 1) == 0 )
  {
    sub_1C21E38(&char_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC07D = 1;
  }
  v31 = 58;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v11 = System_Char__ToString((uint16_t)&v31, 0LL);
  v12 = System_String__Concat_63126736((System_String_o *)StringLiteral_866/*","*/, key, v11, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v14 = svals;
  if ( !svals )
    goto LABEL_18;
  v17 = System_String__IndexOf_63147052(v14, v12, 0LL);
  if ( v17 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v18 = v17;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v12 = (System_String_o *)System_String__IndexOf_63145700(v12, startWord, v18, 0LL);
  if ( !*p_svals )
    goto LABEL_18;
  v19 = (int)v12;
  v20 = System_String__IndexOf_63145700(*p_svals, endWord, v18, 0LL);
  if ( v19 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v21 = v20;
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v22 = System_String__Substring_63134480(v12, v19, v21 - v19 + 1, 0LL);
  if ( isDelKeyValue )
  {
    v12 = *p_svals;
    if ( *p_svals )
    {
      v12 = System_String__Substring_63134480(v12, v18, v21 - v18 + 1, 0LL);
      if ( *p_svals )
      {
        v23 = System_String__Replace_63135104(*p_svals, v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        *p_svals = v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)p_svals, (int64_t)v23, v24, v25, v26, v27, v28, v29);
        return v22;
      }
    }
LABEL_18:
    sub_1C22094(v12, v13);
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

  return DataVals__GetParam(this, 78, 0, v2) == 1;
}


bool __fastcall DataVals__isEffectSummon(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 29, 0, v2) != 0;
}


bool __fastcall DataVals__isForcedEffectSpeedOne(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 76, 0, v2) != 0;
}


bool __fastcall DataVals__isHideMiss(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 10, 0, v2) == 1;
}


bool __fastcall DataVals__isLossHpChangeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 62, 0, v2) > 0;
}


bool __fastcall DataVals__isParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDC088 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    byte_4BDC088 = 1;
  }
  vals = this->fields.vals;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = type;
  v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
  if ( !vals )
    sub_1C22094(v6, v7);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v6,
           (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall DataVals__isParamAddIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x24
  const MethodInfo *v5; // x2
  System_Collections_ICollection_o *v6; // x23
  const MethodInfo *v7; // x2
  System_Collections_ICollection_o *v8; // x22
  const MethodInfo *v9; // x2
  System_Collections_ICollection_o *Int2DimensionalArray; // x21
  const MethodInfo *v11; // x2
  System_Collections_ICollection_o *v12; // x20
  const MethodInfo *v13; // x2
  System_Collections_ICollection_o *v14; // x19

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 70, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 71, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 72, v7);
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 195, v9);
  v12 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 196, v11);
  v14 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 197, v13);
  return !BasicHelper__IsNullOrEmpty(ParamArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v6, 0LL)
      || !BasicHelper__IsNullOrEmpty(v8, 0LL)
      || !BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v12, 0LL)
      || !BasicHelper__IsNullOrEmpty(v14, 0LL);
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

  if ( (byte_4BDC07F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&DataVals_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDC07F = 1;
  }
  result = 0;
  svals = this->fields.svals;
  if ( !svals
    || (svals = System_String__Replace_63135104(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16086/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_63135104(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16345/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1C22094(svals, method);
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
        sub_1C2209C(svals, method);
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
                        (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
            (const MethodInfo_330D798 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._FuncParamValueUpInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._dependOverChargeArray_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._dependOverChargeArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC0AC & 1) == 0 )
  {
    sub_1C21E38(&DataVals___c_TypeInfo);
    byte_4BDC0AC = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(DataVals___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)DataVals___c_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
}


void __fastcall DataVals___c___ctor(DataVals___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c___GetDependFuncIdArray_b__42_0(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__42_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_1C22094(this, x);
  return funcEnt->fields.id;
}


int32_t __fastcall DataVals___c___GetTargetTypeIndexArray_b__142_2(
        DataVals___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall DataVals___c__DisplayClass113_0___ctor(
        DataVals___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass113_0___IsSatisfyAboveBelowCond_b__0(
        DataVals___c__DisplayClass113_0_o *this,
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


void __fastcall DataVals___c__DisplayClass114_0___ctor(
        DataVals___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass114_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass114_0_o *this,
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


void __fastcall DataVals___c__DisplayClass142_0___ctor(
        DataVals___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass142_0___GetTargetTypeIndexArray_b__0(
        DataVals___c__DisplayClass142_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass142_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_4BDC0AD & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass142_0_o *)sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    byte_4BDC0AD = 1;
  }
  if ( !key )
    sub_1C22094(this, x.fields.key);
  return System_String__StartsWith(key, v4->fields.key, 0LL);
}


System_String_o *__fastcall DataVals___c__DisplayClass142_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass142_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass142_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_4BDC0AE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    this = (DataVals___c__DisplayClass142_0_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC0AE = 1;
  }
  if ( !key )
    sub_1C22094(this, x.fields.key);
  return System_String__Replace_63135104(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall DataVals___c__DisplayClass40_0___ctor(DataVals___c__DisplayClass40_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass40_0___GetDependDataValsArray_b__0(
        DataVals___c__DisplayClass40_0_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  DataVals___c__DisplayClass40_0_o *v4; // x20

  v4 = this;
  if ( (byte_4BDC0AF & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass40_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
    byte_4BDC0AF = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass40_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_1C22094(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_3634C34 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void __fastcall DataVals___c__DisplayClass80_0___ctor(DataVals___c__DisplayClass80_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass80_0___IsHideNoEffect_b__0(
        DataVals___c__DisplayClass80_0_o *this,
        int32_t cause,
        const MethodInfo *method)
{
  return this->fields.invalidCause != cause;
}