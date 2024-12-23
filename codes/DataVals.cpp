void __fastcall DataVals___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6671A & 1) == 0 )
  {
    sub_1BE4ACC(&DataVals_TypeInfo, v1);
    byte_4B6671A = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__int__o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B666E9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, str);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo, v7);
    byte_4B666E9 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v8,
    (const MethodInfo_32A6B28 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v8;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)&this->fields.targetCardIndex = -1LL;
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
  System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
    v15,
    (const MethodInfo_324A034 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
  this->fields.invalidCauseDict = (struct System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__o *)v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.invalidCauseDict, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.svals, (int64_t)str, v22, v23, v24, v25, v26, v27);
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
    sub_1BE4D28(Param, v7);
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
  if ( (byte_4B666F0 & 1) == 0 )
  {
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_4B666F0 = 1;
  }
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = type;
  v5 = System_Enum__ToString(&v8, 0LL);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_62698808(v5, v6, 0LL);
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

  if ( (byte_4B66702 & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B66702 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 55, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v10);
  if ( !result->max_length )
    sub_1BE4D30(result, v10);
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

  if ( (byte_4B66714 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&bgmId);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    byte_4B66714 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 159, &param, v3) || DataVals__TryGetParam(this, 110, &param, v7) )
    return param;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v10);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x21
  const MethodInfo *v10; // x3
  System_Int32_array *Param; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Int32_array *ParamArray; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  const MethodInfo *v31; // x2
  __int64 v33; // x8
  System_Int32_array *v34; // x21
  unsigned __int64 v35; // x26
  int32_t v36; // w23
  int64_t v37; // x22
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x3
  System_Int32_array *ParamArrayAddTypeIndex; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0

  if ( (byte_4B66716 & 1) == 0 )
  {
    sub_1BE4ACC(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo, v7);
    byte_4B66716 = 1;
  }
  if ( !DataVals__isParam(this, 164, v2) )
    return 0LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v9 = sub_1BE4D18(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v9, 0LL);
  Param = (System_Int32_array *)DataVals__GetParam(this, 164, 0, v10);
  if ( !v9 )
    goto LABEL_22;
  *(_DWORD *)(v9 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 165, v13);
  *(_QWORD *)(v9 + 24) = ParamArray;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)ParamArray, v15, v16, v17, v18, v19, v20);
  if ( !v8 )
    goto LABEL_22;
  items = v8->fields._items;
  v28 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v9;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 4), v9, v21, v22, v23, v24, v25, v26);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 164, v31);
  if ( !Param )
    goto LABEL_22;
  v33 = *(_QWORD *)&Param->max_length;
  v34 = Param;
  if ( (int)v33 >= 1 )
  {
    v35 = 0LL;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v33 )
        sub_1BE4D30(Param, v12);
      v36 = v34->m_Items[v35 + 1];
      v37 = sub_1BE4D18(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v37, 0LL);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 164, v36, 0, v38);
      if ( !v37 )
        break;
      *(_DWORD *)(v37 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 165, v36, v39);
      *(_QWORD *)(v37 + 24) = ParamArrayAddTypeIndex;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)(v37 + 24),
        (int64_t)ParamArrayAddTypeIndex,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      v53 = v8->fields._items;
      v54 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
      ++v8->fields._version;
      if ( !v53 )
        break;
      v55 = v8->fields._size;
      if ( (unsigned int)v55 >= v53->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v37,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &v53->obj.klass + v55;
        v8->fields._size = v55 + 1;
        v56[4] = (Il2CppClass *)v37;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v56 + 4), v37, v47, v48, v49, v50, v51, v52);
      }
      LODWORD(v33) = v34->max_length;
      if ( (__int64)++v35 >= (int)v33 )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v8,
                                                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_1BE4D28(Param, v12);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v8,
                                                          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  DataVals_array *result; // x0
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v22; // x20

  if ( (byte_4B666EC & 1) == 0 )
  {
    sub_1BE4ACC(&DataVals___TypeInfo, funcTypeList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals__FindAll__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v7);
    sub_1BE4ACC(&System_Predicate_DataVals__TypeInfo, v8);
    sub_1BE4ACC(&Method_DataVals___c__DisplayClass39_0__GetDependDataValsArray_b__0__, v9);
    sub_1BE4ACC(&DataVals___c__DisplayClass39_0_TypeInfo, v10);
    byte_4B666EC = 1;
  }
  v11 = sub_1BE4D18(DataVals___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = funcTypeList;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)funcTypeList, v14, v15, v16, v17, v18, v19);
  result = (DataVals_array *)sub_1BE4B74(DataVals___TypeInfo, 0LL);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v22 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_DataVals__TypeInfo);
    System_Predicate_object____ctor(
      v22,
      (Il2CppObject *)v11,
      Method_DataVals___c__DisplayClass39_0__GetDependDataValsArray_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v22,
            (const MethodInfo_35EC934 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_1BE4D28(All, v13);
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
  System_Func_object__bool__o *_9__41_0; // x20
  Il2CppObject *v14; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  DataVals___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__41_1; // x20
  Il2CppObject *v26; // x21
  struct DataVals___c_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4B666EE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_1BE4ACC(&System_Func_DataVals__int__TypeInfo, v5);
    sub_1BE4ACC(&System_Func_DataVals__bool__TypeInfo, v6);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_DataVals___c__GetDependFuncIdArray_b__41_0__, v8);
    sub_1BE4ACC(&Method_DataVals___c__GetDependFuncIdArray_b__41_1__, v9);
    sub_1BE4ACC(&DataVals___c_TypeInfo, v10);
    byte_4B666EE = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  v12 = DataVals___c_TypeInfo;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v12 = DataVals___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v12->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = DataVals___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v14, Method_DataVals___c__GetDependFuncIdArray_b__41_0__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_DataVals__bool__o *)_9__41_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
      (int64_t)_9__41_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v23 = DataVals___c_TypeInfo;
  v24 = v22;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v23 = DataVals___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__int__o *)v23->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = DataVals___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__41_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(_9__41_1, v26, Method_DataVals___c__GetDependFuncIdArray_b__41_1__, 0LL);
    v27 = DataVals___c_TypeInfo->static_fields;
    v27->__9__41_1 = (struct System_Func_DataVals__int__o *)_9__41_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v27->__9__41_1, (int64_t)_9__41_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__41_1,
                                                               (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2);
}


int32_t __fastcall DataVals__GetEnemyCountChangeEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 201, 0, v2);
}


float __fastcall DataVals__GetEnemyCountChangeTime(DataVals_o *this, int32_t defaultPerMill, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (float)DataVals__GetParam(this, 200, defaultPerMill, v3) / 1000.0;
}


float __fastcall DataVals__GetEnemyCountWaitTimeAfterMessage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 202, 0, v2) / 1000.0;
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

  if ( (byte_4B66712 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1BE4ACC(&System_Math_TypeInfo, v5);
    byte_4B66712 = 1;
  }
  result = DataVals__GetParamArray(this, 80, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 79, 0, v7);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_63517952(Param, 1, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 100,
                                                                 v9,
                                                                 (const MethodInfo_2F82CF4 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v10,
             (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountEqual(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 193, -1, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountHigher(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 191, 0, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountLower(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 192, 0, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 190, -1, v2);
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

  if ( (byte_4B6670A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v3);
    byte_4B6670A = 1;
  }
  vals = this->fields.vals;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = 51;
  v5 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
  if ( !vals )
    sub_1BE4D28(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v5,
         (const MethodInfo_32A76D0 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v7);
  }
  else
  {
    return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array_array *__fastcall DataVals__GetInt2DimensionalArray(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *StrParam; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  System_String_array *v14; // x19
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  System_Collections_ICollection_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B66718 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int____Add__, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int____ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int_____ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_int____TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B66718 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return 0LL;
  if ( !StrParam )
    goto LABEL_19;
  v14 = System_String__Split(StrParam, 0x7Cu, 0, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !v14 )
    goto LABEL_19;
  v16 = *(_QWORD *)&v14->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1BE4D30(IsNullOrEmpty, v12);
      v18 = (System_Collections_ICollection_o *)BasicHelper__Convert2IntArray(v14->m_Items[v17], 0x2Fu, 0LL);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v18, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v15 )
          goto LABEL_19;
        items = v15->fields._items;
        v26 = Method_System_Collections_Generic_List_int____Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v18,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v18;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v18, v19, v20, v21, v22, v23, v24);
        }
      }
      LODWORD(v16) = v14->max_length;
    }
    while ( (__int64)++v17 < (int)v16 );
  }
  if ( !v15 )
LABEL_19:
    sub_1BE4D28(IsNullOrEmpty, v12);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_int____ToArray__);
}


BattleBuffData_IntervalData_o *__fastcall DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  BattleBuffData_IntervalData_o *v7; // x20

  if ( (byte_4B66713 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleBuffData_IntervalData_TypeInfo, method);
    byte_4B66713 = 1;
  }
  if ( !DataVals__isParam(this, 130, v2)
    && !DataVals__isParam(this, 131, v4)
    && !DataVals__isParam(this, 205, v5)
    && !DataVals__isParam(this, 206, v6) )
  {
    return 0LL;
  }
  v7 = (BattleBuffData_IntervalData_o *)sub_1BE4D18(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_43633944(v7, this, 0LL);
  return v7;
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

  if ( (byte_4B666FF & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B666FF = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v10);
  if ( !result->max_length )
    sub_1BE4D30(result, v10);
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

  if ( (byte_4B666F1 & 1) == 0 )
  {
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_4B666F1 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetParam_39771816(this, type, v7, defaultValue, v8);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_SaveArrayData_array *__fastcall DataVals__GetParamAddIndividualityAndCheckArrayData(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ICollection_o *Int2DimensionalArray; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  void *monitor; // x8
  unsigned __int64 v15; // x23
  System_Int32_array *v16; // x22
  BattleBuffData_SaveArrayData_o *v17; // x21
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

  if ( (byte_4B66719 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo, v7);
    sub_1BE4ACC(&BattleBuffData_SaveArrayData_TypeInfo, v8);
    byte_4B66719 = 1;
  }
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, type, method);
  if ( BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0LL) )
    return 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
  if ( !Int2DimensionalArray )
LABEL_17:
    sub_1BE4D28(v12, v13);
  monitor = Int2DimensionalArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)monitor )
        sub_1BE4D30(v12, v13);
      v16 = (System_Int32_array *)*((_QWORD *)&Int2DimensionalArray[2].klass + v15);
      v17 = (BattleBuffData_SaveArrayData_o *)sub_1BE4D18(BattleBuffData_SaveArrayData_TypeInfo);
      BattleBuffData_SaveArrayData___ctor_43645456(v17, v16, 0LL);
      if ( !v11 )
        goto LABEL_17;
      items = v11->fields._items;
      v25 = Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v17,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v17;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v17, v18, v19, v20, v21, v22, v23);
      }
      LODWORD(monitor) = Int2DimensionalArray[1].monitor;
    }
    while ( (__int64)++v15 < (int)monitor );
  }
  if ( !v11 )
    goto LABEL_17;
  return (BattleBuffData_SaveArrayData_array *)System_Collections_Generic_List_object___ToArray(
                                                 v11,
                                                 (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
}


int32_t __fastcall DataVals__GetParamAddIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 188, -1, v2);
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

  if ( (byte_4B666F3 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_25443/*"{0}_{1}"*/, v10);
    byte_4B666F3 = 1;
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
  v16 = System_String__Format_62713180((System_String_o *)StringLiteral_25443/*"{0}_{1}"*/, v11, v15, 0LL);
  return DataVals__GetParam_39771816(this, type, v16, defaultValue, v17);
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

  if ( (byte_4B6670B & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v6);
    byte_4B6670B = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v8);
  if ( Param < 1 )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v12);
  if ( !result->max_length )
    sub_1BE4D30(result, v12);
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

  if ( (byte_4B6670C & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v8);
    byte_4B6670C = 1;
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
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v14);
  if ( !result->max_length )
    sub_1BE4D30(result, v14);
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

  if ( (byte_4B666FE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, *(_QWORD *)&type);
    byte_4B666FE = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_1BE4D28(IsNullOrEmpty, v10);
  return System_String__Split(StrParam, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam_39771816(
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

  if ( (byte_4B666F2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    byte_4B666F2 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_32A76D0 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_1BE4D28(vals, *(_QWORD *)&type);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_32A745C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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

  if ( (byte_4B66700 & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B66700 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v10);
  if ( !result->max_length )
    sub_1BE4D30(result, v10);
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

  if ( (byte_4B66717 & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D,
      v4);
    byte_4B66717 = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 183, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0LL) )
  {
    v6 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 3LL);
    v8.fields.value = Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
    ParamArray = (System_Collections_ICollection_o *)v6;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v6, v8, 0LL);
  }
  return (System_Int32_array *)ParamArray;
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddFieldIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 199, v2);
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddOpIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 198, v2);
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddSelfIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 197, v2);
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

  if ( (byte_4B666F5 & 1) == 0 )
  {
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_4B666F5 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetStrParam_39772904(this, v7, defaultValue, v8);
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

  if ( (byte_4B666F7 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_25443/*"{0}_{1}"*/, v10);
    byte_4B666F7 = 1;
  }
  v20 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v20, *(_QWORD *)&index, defaultValue, method);
  v19 = index;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
  v16 = System_String__Format_62713180((System_String_o *)StringLiteral_25443/*"{0}_{1}"*/, v11, v15, 0LL);
  return DataVals__GetStrParam_39772904(this, v16, defaultValue, v17);
}


System_String_o *__fastcall DataVals__GetStrParam_39772904(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v10; // x0

  if ( (byte_4B666F6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, name);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v7);
    byte_4B666F6 = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v10 = this->fields.strVals;
  if ( !v10 )
    sub_1BE4D28(0LL, v9);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v10,
                              (Il2CppObject *)name,
                              (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1

  if ( (byte_4B666FC & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B666FC = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v10);
  if ( !result->max_length )
    sub_1BE4D30(result, v10);
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

  if ( (byte_4B66701 & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B66701 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v10);
  if ( !result->max_length )
    sub_1BE4D30(result, v10);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_T__TResult__o *v37; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__int__o *v39; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  DataVals___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  System_Func_int__int__o *_9__140_2; // x20
  Il2CppObject *v44; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  int32_t v54; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B66715 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_int__int___, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____, v8);
    sub_1BE4ACC(&System_Func_int__int__TypeInfo, v9);
    sub_1BE4ACC(&System_Func_KeyValuePair_string__int___bool__TypeInfo, v10);
    sub_1BE4ACC(&System_Func_string__int__TypeInfo, v11);
    sub_1BE4ACC(&System_Func_KeyValuePair_string__int___string__TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Int32_Parse__, v13);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v14);
    sub_1BE4ACC(&Method_DataVals___c__GetTargetTypeIndexArray_b__140_2__, v15);
    sub_1BE4ACC(&Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__0__, v16);
    sub_1BE4ACC(&Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__1__, v17);
    sub_1BE4ACC(&DataVals___c__DisplayClass140_0_TypeInfo, v18);
    sub_1BE4ACC(&DataVals___c_TypeInfo, v19);
    sub_1BE4ACC(&StringLiteral_25440/*"{0}_"*/, v20);
    byte_4B66715 = 1;
  }
  v21 = sub_1BE4D18(DataVals___c__DisplayClass140_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  v54 = type;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v54, v22, v23, v24);
  v26 = System_String__Format((System_String_o *)StringLiteral_25440/*"{0}_"*/, v25, 0LL);
  if ( !v21 )
    sub_1BE4D28(v26, v27);
  *(_QWORD *)(v21 + 16) = v26;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)v26, v28, v29, v30, v31, v32, v33);
  vals = this->fields.vals;
  v35 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_KeyValuePair_string__int___bool__TypeInfo);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v35,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__0__,
    0LL);
  v36 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_2F97868 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v37 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_KeyValuePair_string__int___string__TypeInfo);
  System_Func_KeyValuePair_object__int___object____ctor(
    v37,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass140_0__GetTargetTypeIndexArray_b__1__,
    0LL);
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v36,
                                                               (System_Func_TSource__TResult__o *)v37,
                                                               (const MethodInfo_2F8434C *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v39 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v39, 0LL, Method_System_Int32_Parse__, 0LL);
  v40 = System_Linq_Enumerable__Select_object__int_(
          v38,
          (System_Func_TSource__TResult__o *)v39,
          (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_string__int___);
  v41 = DataVals___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v41 = DataVals___c_TypeInfo;
  }
  _9__140_2 = v41->static_fields->__9__140_2;
  if ( !_9__140_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = DataVals___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__140_2 = (System_Func_int__int__o *)sub_1BE4D18(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__140_2, v44, Method_DataVals___c__GetTargetTypeIndexArray_b__140_2__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__140_2 = _9__140_2;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__140_2,
      (int64_t)_9__140_2,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__140_2,
                                                               (const MethodInfo_2F81FB0 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v52,
           (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  ParamIntArray = DataVals__TryGetParamIntArray(this, 189, &paramArray, v3);
  result = 0LL;
  if ( ParamIntArray )
  {
    *isAndCheck = 1;
    return paramArray;
  }
  return result;
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

  if ( (byte_4B666FD & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v6);
    byte_4B666FD = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v8);
  if ( !Param )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BE4D28(0LL, v12);
  if ( !result->max_length )
    sub_1BE4D30(result, v12);
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

  if ( (byte_4B66705 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B66705 = 1;
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

  if ( (byte_4B66706 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B66706 = 1;
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
  if ( (byte_4B66709 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_bool___, *(_QWORD *)&index);
    byte_4B66709 = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2F47B04 *)Method_BasicHelper_IndexValue_bool___);
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

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 151, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 152, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 153, v7);
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 197, v9);
  v12 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 198, v11);
  v14 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 199, v13);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsHideNoEffect(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t Param; // w0
  const MethodInfo *v11; // x2
  __int64 v12; // x21
  __int64 Value_int__Int32Enum; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_DataVals_InvalidCause__o *v15; // x19
  System_Func_T__TResult__o *v16; // x20
  System_Collections_Generic_List_DataVals_InvalidCause__o *resultList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B66703 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_int__DataVals_InvalidCause___, *(_QWORD *)&targetId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_All_DataVals_InvalidCause___, v6);
    sub_1BE4ACC(&System_Func_DataVals_InvalidCause__bool__TypeInfo, v7);
    sub_1BE4ACC(&Method_DataVals___c__DisplayClass79_0__IsHideNoEffect_b__0__, v8);
    sub_1BE4ACC(&DataVals___c__DisplayClass79_0_TypeInfo, v9);
    byte_4B66703 = 1;
  }
  resultList = 0LL;
  Param = DataVals__GetParam(this, 12, 0, v3);
  if ( Param != 1 )
  {
    if ( DataVals__TryGetDisplayNoEffectCauseList(this, &resultList, v11) )
    {
      v12 = sub_1BE4D18(DataVals___c__DisplayClass79_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v12, 0LL);
      Value_int__Int32Enum = BasicHelper__GetValue_int__Int32Enum_(
                               (System_Collections_Generic_Dictionary_K__V__o *)this->fields.invalidCauseDict,
                               targetId,
                               0,
                               (const MethodInfo_2F4737C *)Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
      if ( !v12 )
        sub_1BE4D28(Value_int__Int32Enum, v14);
      *(_DWORD *)(v12 + 16) = Value_int__Int32Enum;
      v15 = resultList;
      v16 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_DataVals_InvalidCause__bool__TypeInfo);
      System_Func_Int32Enum__bool____ctor(
        v16,
        (Il2CppObject *)v12,
        Method_DataVals___c__DisplayClass79_0__IsHideNoEffect_b__0__,
        0LL);
      LOBYTE(Param) = System_Linq_Enumerable__All_Int32Enum_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                        (System_Func_TSource__bool__o *)v16,
                        (const MethodInfo_2F63568 *)Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
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

  if ( (byte_4B666F9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, typeKey);
    byte_4B666F9 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1BE4D28(0LL, typeKey);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)typeKey,
           (const MethodInfo_32A76D0 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_String_o *ParamKey; // x20
  System_Func_bool__int__bool__o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_4B6670F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Func_bool__int__bool__TypeInfo, *(_QWORD *)&paramType);
    sub_1BE4ACC(&Method_DataVals___c__DisplayClass111_0__IsSatisfyAboveBelowCond_b__0__, v9);
    sub_1BE4ACC(&DataVals___c__DisplayClass111_0_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_1631/*"<="*/, v11);
    byte_4B6670F = 1;
  }
  v12 = sub_1BE4D18(DataVals___c__DisplayClass111_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BE4D28(v13, v14);
  *(_DWORD *)(v12 + 16) = compareVal;
  ParamKey = DataVals__MakeParamKey(v13, paramType, index, v15);
  v17 = (System_Func_bool__int__bool__o *)sub_1BE4D18(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_DataVals___c__DisplayClass111_0__IsSatisfyAboveBelowCond_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, ParamKey, (System_String_o *)StringLiteral_1631/*"<="*/, v17, v18);
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
  __int64 v13; // x1
  System_String_o *v14; // x20
  System_Func_bool__int__bool__o *v15; // x21
  const MethodInfo *v16; // x4
  System_Enum_o v18; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+18h] [xbp-48h]

  if ( (byte_4B66710 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Func_bool__int__bool__TypeInfo, *(_QWORD *)&paramType);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataVals___c__DisplayClass112_0__IsSatisfyAboveBelowCondition_b__0__, v8);
    sub_1BE4ACC(&DataVals___c__DisplayClass112_0_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_1595/*"<"*/, v10);
    byte_4B66710 = 1;
  }
  v11 = sub_1BE4D18(DataVals___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BE4D28(v12, v13);
  *(_DWORD *)(v11 + 16) = compareVal;
  v18.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v18.monitor = (void *)-1LL;
  v19 = paramType;
  v14 = System_Enum__ToString(&v18, 0LL);
  v15 = (System_Func_bool__int__bool__o *)sub_1BE4D18(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_DataVals___c__DisplayClass112_0__IsSatisfyAboveBelowCondition_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, v14, (System_String_o *)StringLiteral_1595/*"<"*/, v15, v16);
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
  System_String_o *StrParam_39772904; // x22
  __int64 IsMatch; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x21
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  System_String_o *v51; // x21
  int v52; // w8
  __int64 v53; // x22
  unsigned int v54; // w25
  System_String_o *v55; // x23
  System_String_o *v56; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B66711 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Text_RegularExpressions_Regex_TypeInfo, paramType);
    sub_1BE4ACC(&string___TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_781/*"(^"*/, v10);
    sub_1BE4ACC(&StringLiteral_16258/*"\\d+$|^\\d+"*/, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    sub_1BE4ACC(&StringLiteral_484/*"$)"*/, v13);
    byte_4B66711 = 1;
  }
  result = 0;
  StrParam_39772904 = DataVals__GetStrParam_39772904(
                        this,
                        paramType,
                        (System_String_o *)StringLiteral_1/*""*/,
                        (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam_39772904, 0LL) )
    return 1;
  IsMatch = sub_1BE4B74(string___TypeInfo, 5LL);
  if ( !IsMatch )
    goto LABEL_25;
  v23 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v24 = StringLiteral_781/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_781/*"(^"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(IsMatch + 32), v24, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u
    || (*(_QWORD *)(v23 + 40) = compareKey,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 40), (int64_t)compareKey, v25, v26, v27, v28, v29, v30),
        *(_DWORD *)(v23 + 24) <= 2u)
    || (v37 = StringLiteral_16258/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v23 + 48) = StringLiteral_16258/*"\\d+$|^\\d+"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 48), v37, v31, v32, v33, v34, v35, v36),
        *(_DWORD *)(v23 + 24) <= 3u)
    || (*(_QWORD *)(v23 + 56) = compareKey,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 56), (int64_t)compareKey, v38, v39, v40, v41, v42, v43),
        *(_DWORD *)(v23 + 24) <= 4u) )
  {
LABEL_26:
    sub_1BE4D30(IsMatch, v16);
  }
  v50 = StringLiteral_484/*"$)"*/;
  *(_QWORD *)(v23 + 64) = StringLiteral_484/*"$)"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 64), v50, v44, v45, v46, v47, v48, v49);
  IsMatch = (__int64)System_String__Concat_62712336((System_String_array *)v23, 0LL);
  if ( !StrParam_39772904
    || (v51 = (System_String_o *)IsMatch,
        (IsMatch = (__int64)System_String__Split(StrParam_39772904, 0x2Fu, 0, 0LL)) == 0) )
  {
LABEL_25:
    sub_1BE4D28(IsMatch, v16);
  }
  v52 = *(_DWORD *)(IsMatch + 24);
  v53 = IsMatch;
  if ( v52 < 1 )
    return 1;
  v54 = 0;
  while ( 1 )
  {
    if ( v54 >= v52 )
      goto LABEL_26;
    v55 = *(System_String_o **)(v53 + 8LL * (int)v54 + 32);
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v55, v51, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v55 )
      goto LABEL_25;
    v56 = System_String__Replace_62718436(v55, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v56, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v55, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_25;
    IsMatch = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))funcCompare->fields.m_target)(
                funcCompare->fields.original_method_info,
                IsMatch & 1,
                (unsigned int)result,
                *(_QWORD *)&funcCompare->fields.extra_arg);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v52 = *(_DWORD *)(v53 + 24);
    if ( (int)++v54 >= v52 )
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

  if ( (byte_4B666FA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v5);
    byte_4B666FA = 1;
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
             (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_Enum_o v15; // [xsp+8h] [xbp-48h] BYREF
  int32_t v16; // [xsp+18h] [xbp-38h]
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4B6670E & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&paramType);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_25443/*"{0}_{1}"*/, v8);
    byte_4B6670E = 1;
  }
  if ( index == 0x7FFFFFFF )
  {
    v15.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v15.monitor = (void *)-1LL;
    v16 = paramType;
    return System_Enum__ToString(&v15, 0LL);
  }
  else
  {
    LODWORD(v15.klass) = paramType;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15, *(_QWORD *)&index, method, v4);
    v17 = index;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
    return System_String__Format_62713180((System_String_o *)StringLiteral_25443/*"{0}_{1}"*/, v10, v14, 0LL);
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
    sub_1BE4D28(Param, v10);
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
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_String_o *v43; // x0
  DataVals_o *v44; // x26
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_Fields fields; // x8
  _QWORD *v55; // x9
  __int64 klass_low; // x10
  __int64 v57; // x8
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B666EB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, funcMst);
    sub_1BE4ACC(&DataVals_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals__Clear__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_DataVals__TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_16018/*"["*/, v10);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v11);
    sub_1BE4ACC(&StringLiteral_16276/*"]"*/, v12);
    byte_4B666EB = 1;
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
  v18 = (System_String_o **)&StringLiteral_16018/*"["*/;
  v19 = (System_String_o **)&StringLiteral_16276/*"]"*/;
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
      v35 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v36 = (int64_t)v35;
      *p_dependDataValsList = (struct System_Collections_Generic_List_DataVals__o *)v35;
      v18 = v34;
      v19 = v33;
      v17 = v32;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.dependDataValsList, v36, v37, v38, v39, v40, v41, v42);
    }
    result = 0;
    if ( !v25
      || (IsNullOrEmpty = System_String__Replace_62718436(
                            (System_String_o *)v25,
                            *v18,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
LABEL_27:
      sub_1BE4D28(IsNullOrEmpty, v31);
    }
    v43 = System_String__Replace_62718436(IsNullOrEmpty, *v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( System_Int32__TryParse(v43, &result, 0LL) )
    {
      v44 = (DataVals_o *)sub_1BE4D18(*v17);
      DataVals___ctor(v44, v29, v45);
      IsNullOrEmpty = (System_String_o *)funcMst;
      if ( !funcMst )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst,
                                           result,
                                           (const MethodInfo_31FD7C4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v44 )
        goto LABEL_27;
      DataVals__SetType_39769500(v44, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v46);
      v44->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v20, v47);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      fields = IsNullOrEmpty->fields;
      v55 = Method_System_Collections_Generic_List_DataVals__Add__;
      ++HIDWORD(IsNullOrEmpty[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_27;
      klass_low = SLODWORD(IsNullOrEmpty[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (Il2CppObject *)v44,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v57 + 32) = v44;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)v44, v48, v49, v50, v51, v52, v53);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x8
  struct System_Boolean_array *v18; // x21
  unsigned __int64 v19; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v21; // x2

  if ( (byte_4B66708 & 1) == 0 )
  {
    sub_1BE4ACC(&bool___TypeInfo, dependDataList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals__get_Item__, v6);
    byte_4B66708 = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v9 = (struct System_Boolean_array *)sub_1BE4B74(bool___TypeInfo, size);
        v17 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v17 )
LABEL_13:
          sub_1BE4D28(v9, v10);
        v18 = v9;
        v19 = 0LL;
        while ( (__int64)v19 < v17->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v17,
                   v19,
                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v9 = (struct System_Boolean_array *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)dependDataList,
                                                v19,
                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v9 = (struct System_Boolean_array *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v9, v21);
            if ( v18 )
            {
              if ( v19 >= v18->max_length )
                sub_1BE4D30(v9, v10);
              v18->m_Items[v19 + 4] = (unsigned __int8)v9 & 1;
              v17 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              ++v19;
              if ( v17 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = v18;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (int64_t)v18,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *__fastcall DataVals__SetInvalidCauseByAnyBuff(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *invalidCauseDict; // x0

  if ( (byte_4B666E8 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__,
      *(_QWORD *)&targetId);
    byte_4B666E8 = 1;
  }
  invalidCauseDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.invalidCauseDict;
  if ( !invalidCauseDict )
    sub_1BE4D28(0LL, *(_QWORD *)&targetId);
  System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
    invalidCauseDict,
    targetId,
    1,
    (const MethodInfo_324A9E4 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
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
  sub_1BE4A70(p_svals, (int64_t)svals, v9, v10, v11, v12, v13, v14);
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
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Enum_c *v33; // x8
  int v34; // w8
  _DWORD *v35; // [xsp+0h] [xbp-90h]
  PartyOrganizationUtility_o *p_strVals; // [xsp+8h] [xbp-88h]
  System_Enum_o v37; // [xsp+10h] [xbp-80h] BYREF
  int v38; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B666EA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, *(_QWORD *)&ft);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v9);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_16018/*"["*/, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    sub_1BE4ACC(&StringLiteral_16276/*"]"*/, v13);
    byte_4B666EA = 1;
  }
  result = 0;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals
    || (svals = System_String__Replace_62718436(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16018/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_62718436(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16276/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_80:
    sub_1BE4D28(svals, *(_QWORD *)&ft);
  }
  v15 = *((_QWORD *)svals + 3);
  v16 = svals;
  if ( (int)v15 >= 1 )
  {
    v17 = &DataVals_TYPE_TypeInfo;
    v18 = 0LL;
    v19 = (char *)svals + 32;
    v35 = svals;
    p_strVals = (PartyOrganizationUtility_o *)&this->fields.strVals;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v15 )
LABEL_81:
        sub_1BE4D30(svals, *(_QWORD *)&ft);
      v20 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v19[8 * v18], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v18 >= (unsigned int)v16[6] )
          goto LABEL_81;
        svals = *(void **)&v19[8 * v18];
        if ( !svals )
          goto LABEL_80;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_80;
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
              v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v25,
                (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              v26 = (int64_t)v25;
              p_strVals->klass = (PartyOrganizationUtility_c *)v25;
              v17 = v24;
              this = v23;
              v16 = v35;
              sub_1BE4A70(p_strVals, v26, v27, v28, v29, v30, v31, v32);
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_80;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              v20,
                              (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( *((_DWORD *)v22 + 6) <= 1u )
                goto LABEL_81;
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_80;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                v20,
                *((Il2CppObject **)v22 + 5),
                (const MethodInfo_32B0224 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
            if ( (_DWORD)v18 == 2 )
            {
LABEL_57:
              v37.klass = (System_Enum_c *)*v17;
              v37.monitor = (void *)-1LL;
              v34 = 4;
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
          switch ( (int)v18 )
          {
            case 0:
              goto LABEL_56;
            case 1:
              v37.klass = (System_Enum_c *)*v17;
              v37.monitor = (void *)-1LL;
              v38 = 1;
              goto LABEL_64;
            case 2:
              v37.klass = (System_Enum_c *)*v17;
              v37.monitor = (void *)-1LL;
              v34 = 2;
              goto LABEL_63;
            case 3:
              goto LABEL_60;
            case 4:
              v37.klass = (System_Enum_c *)*v17;
              v37.monitor = (void *)-1LL;
              v34 = 5;
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
          if ( (_DWORD)v18 == 2 )
          {
            v37.klass = (System_Enum_c *)*v17;
            v37.monitor = (void *)-1LL;
            v34 = 173;
          }
          else
          {
            if ( (_DWORD)v18 != 1 )
              goto LABEL_53;
            v37.klass = (System_Enum_c *)*v17;
            v37.monitor = (void *)-1LL;
            v34 = 172;
          }
LABEL_63:
          v38 = v34;
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
        switch ( (int)v18 )
        {
          case 0:
            goto LABEL_56;
          case 1:
            goto LABEL_60;
          case 2:
            goto LABEL_62;
          case 3:
            v37.klass = (System_Enum_c *)*v17;
            v37.monitor = (void *)-1LL;
            v34 = 7;
            goto LABEL_63;
          default:
            goto LABEL_65;
        }
        goto LABEL_65;
      }
      switch ( (int)v18 )
      {
        case 0:
          goto LABEL_56;
        case 1:
          goto LABEL_60;
        case 2:
          goto LABEL_62;
        case 3:
          v37.klass = (System_Enum_c *)*v17;
          v37.monitor = (void *)-1LL;
          v34 = 76;
          goto LABEL_63;
        default:
          break;
      }
LABEL_65:
      svals = (void *)System_String__op_Inequality((System_String_o *)v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)svals & 1) != 0 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_80;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          v20,
                          (const MethodInfo_32A76D0 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_80;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v20,
            result,
            (const MethodInfo_32A74DC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v15) = v16[6];
      if ( (__int64)++v18 >= (int)v15 )
        return;
    }
    if ( funcType == 52 )
      goto LABEL_51;
    if ( funcType != 55 )
    {
      if ( funcType == 62 )
        goto LABEL_51;
LABEL_46:
      if ( (_DWORD)v18 == 2 )
      {
LABEL_62:
        v37.klass = (System_Enum_c *)*v17;
        v37.monitor = (void *)-1LL;
        v34 = 6;
        goto LABEL_63;
      }
LABEL_52:
      if ( (_DWORD)v18 == 1 )
      {
LABEL_60:
        v33 = (System_Enum_c *)*v17;
        v38 = 3;
      }
      else
      {
LABEL_53:
        if ( (_DWORD)v18 )
          goto LABEL_65;
LABEL_56:
        v33 = (System_Enum_c *)*v17;
        v38 = 0;
      }
      v37.klass = v33;
      v37.monitor = (void *)-1LL;
LABEL_64:
      v20 = (Il2CppObject *)System_Enum__ToString(&v37, 0LL);
      goto LABEL_65;
    }
    goto LABEL_55;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_39769500(
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
    sub_1BE4D28(this, 0LL);
  v6 = (PartyOrganizationUtility_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)funcEnt;
  v6 = (PartyOrganizationUtility_o *)((char *)v6 + 40);
  sub_1BE4A70(v6, (int64_t)funcEnt, v7, v8, v9, v10, v11, v12);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  bool ParamStrArray; // w0
  bool v16; // w8
  System_Collections_Generic_List_T__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_DataVals_InvalidCause__o *v24; // x0
  __int64 v25; // x1
  System_String_array *v26; // x21
  __int64 v27; // x8
  unsigned __int64 i; // x22
  System_String_o *v29; // x20
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int32_t item; // [xsp+Ch] [xbp-54h] BYREF
  System_String_array *result; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B66704 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Enum_TryParse_DataVals_InvalidCause___, resultList);
    sub_1BE4ACC(&System_Enum_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo, v13);
    byte_4B66704 = 1;
  }
  result = 0LL;
  item = 0;
  *resultList = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)resultList, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  ParamStrArray = DataVals__TryGetParamStrArray(this, &result, 171, 0x7FFFFFFF, v14);
  v16 = 0;
  if ( ParamStrArray )
  {
    v17 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v17,
      (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    *resultList = (System_Collections_Generic_List_DataVals_InvalidCause__o *)v17;
    sub_1BE4A70((PartyOrganizationUtility_o *)resultList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    v26 = result;
    if ( !result )
LABEL_20:
      sub_1BE4D28(v24, v25);
    v27 = *(_QWORD *)&result->max_length;
    if ( (int)v27 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v27; ++i )
      {
        if ( i >= (unsigned int)v27 )
          sub_1BE4D30(v24, v25);
        v29 = v26->m_Items[i];
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        v24 = (System_Collections_Generic_List_DataVals_InvalidCause__o *)System_Enum__TryParse_Int32Enum__49677388(
                                                                            v29,
                                                                            0,
                                                                            &item,
                                                                            (const MethodInfo_2F6044C *)Method_System_Enum_TryParse_DataVals_InvalidCause___);
        if ( ((unsigned __int8)v24 & 1) != 0 )
        {
          v24 = *resultList;
          if ( !*resultList )
            goto LABEL_20;
          v25 = (unsigned int)item;
          items = (struct System_Object_array *)v24->fields._items;
          v31 = Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__;
          ++v24->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)v24,
              v25,
              *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v24->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v25;
          }
        }
        LODWORD(v27) = v26->max_length;
      }
    }
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0LL);
  }
  return v16;
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

  *countHigher = DataVals__GetParam(this, 191, 0, (const MethodInfo *)countEqual);
  *countLower = DataVals__GetParam(this, 192, 0, v9);
  Param = DataVals__GetParam(this, 193, -1, v10);
  *countEqual = Param;
  return *countHigher > 0 || Param >= 0 || *countLower > 0;
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

  if ( (byte_4B666FB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, *(_QWORD *)&type);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v7);
    byte_4B666FB = 1;
  }
  vals = this->fields.vals;
  v12.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v12.monitor = (void *)-1LL;
  v13 = type;
  v9 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
  if ( !vals )
    sub_1BE4D28(v9, v10);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v9,
           param,
           (const MethodInfo_32A8C98 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4B666F4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, name);
    byte_4B666F4 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1BE4D28(0LL, name);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_32A8C98 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)paramArray, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  System_String_o *StrParam_39772904; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  System_String_array *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B6670D & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, result);
    byte_4B6670D = 1;
  }
  *result = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)result,
    0LL,
    *(int64_t *)&paramType,
    index,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  ParamKey = DataVals__MakeParamKey(v12, paramType, index, v13);
  StrParam_39772904 = DataVals__GetStrParam_39772904(this, ParamKey, (System_String_o *)StringLiteral_1/*""*/, v15);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam_39772904, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !StrParam_39772904 )
      sub_1BE4D28(IsNullOrEmpty, v18);
    v19 = System_String__Split(StrParam_39772904, 0x2Fu, 0, 0LL);
    *result = v19;
    sub_1BE4A70((PartyOrganizationUtility_o *)result, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0LL);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_T__TResult__o *v7; // x21

  if ( (byte_4B66707 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_DataVals_OverChargeState___, targetStateArray);
    sub_1BE4ACC(&Method_DataVals_IsOverChargeState__, v5);
    sub_1BE4ACC(&System_Func_DataVals_OverChargeState__bool__TypeInfo, v6);
    byte_4B66707 = 1;
  }
  v7 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v7, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0LL);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__49561412(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v7,
                                                 (const MethodInfo_2F43F44 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int16 v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B666ED & 1) == 0 )
  {
    sub_1BE4ACC(&char_TypeInfo, key);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    byte_4B666ED = 1;
  }
  v33 = 58;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v13 = System_Char__ToString((uint16_t)&v33, 0LL);
  v14 = System_String__Concat_62710068((System_String_o *)StringLiteral_863/*","*/, key, v13, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v16 = svals;
  if ( !svals )
    goto LABEL_18;
  v19 = System_String__IndexOf_62730384(v16, v14, 0LL);
  if ( v19 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v20 = v19;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v14 = (System_String_o *)System_String__IndexOf_62729032(v14, startWord, v20, 0LL);
  if ( !*p_svals )
    goto LABEL_18;
  v21 = (int)v14;
  v22 = System_String__IndexOf_62729032(*p_svals, endWord, v20, 0LL);
  if ( v21 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v23 = v22;
  if ( v22 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v24 = System_String__Substring_62717812(v14, v21, v23 - v21 + 1, 0LL);
  if ( isDelKeyValue )
  {
    v14 = *p_svals;
    if ( *p_svals )
    {
      v14 = System_String__Substring_62717812(v14, v20, v23 - v20 + 1, 0LL);
      if ( *p_svals )
      {
        v25 = System_String__Replace_62718436(*p_svals, v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        *p_svals = v25;
        sub_1BE4A70((PartyOrganizationUtility_o *)p_svals, (int64_t)v25, v26, v27, v28, v29, v30, v31);
        return v24;
      }
    }
LABEL_18:
    sub_1BE4D28(v14, v15);
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


bool __fastcall DataVals__isLossHpChangeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 61, 0, v2) > 0;
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

  if ( (byte_4B666F8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v5);
    byte_4B666F8 = 1;
  }
  vals = this->fields.vals;
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = (Il2CppObject *)System_Enum__ToString(&v10, 0LL);
  if ( !vals )
    sub_1BE4D28(v7, v8);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v7,
           (const MethodInfo_32A76D0 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 69, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 70, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 71, v7);
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 194, v9);
  v12 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 195, v11);
  v14 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 196, v13);
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

  if ( (byte_4B666EF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v3);
    sub_1BE4ACC(&DataVals_TYPE_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_16018/*"["*/, v5);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v6);
    sub_1BE4ACC(&StringLiteral_16276/*"]"*/, v7);
    byte_4B666EF = 1;
  }
  result = 0;
  svals = this->fields.svals;
  if ( !svals
    || (svals = System_String__Replace_62718436(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16018/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_62718436(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16276/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1BE4D28(svals, method);
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
        sub_1BE4D30(svals, method);
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
                        (const MethodInfo_32A76D0 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
            (const MethodInfo_32A74DC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_1BE4A70(
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
  sub_1BE4A70(
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6671B & 1) == 0 )
  {
    sub_1BE4ACC(&DataVals___c_TypeInfo, v1);
    byte_4B6671B = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(DataVals___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v2;
  sub_1BE4A70((PartyOrganizationUtility_o *)DataVals___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__41_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_1BE4D28(this, x);
  return funcEnt->fields.id;
}


int32_t __fastcall DataVals___c___GetTargetTypeIndexArray_b__140_2(
        DataVals___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall DataVals___c__DisplayClass111_0___ctor(
        DataVals___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass111_0___IsSatisfyAboveBelowCond_b__0(
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


void __fastcall DataVals___c__DisplayClass112_0___ctor(
        DataVals___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass112_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass112_0_o *this,
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
  if ( (byte_4B6671C & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass140_0_o *)sub_1BE4ACC(
                                                  &Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__,
                                                  x.fields.key);
    byte_4B6671C = 1;
  }
  if ( !key )
    sub_1BE4D28(this, x.fields.key);
  return System_String__StartsWith(key, v4->fields.key, 0LL);
}


System_String_o *__fastcall DataVals___c__DisplayClass140_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass140_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass140_0_o *v4; // x20
  __int64 v5; // x1

  key = x.fields.key;
  v4 = this;
  if ( (byte_4B6671D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, x.fields.key);
    this = (DataVals___c__DisplayClass140_0_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v5);
    byte_4B6671D = 1;
  }
  if ( !key )
    sub_1BE4D28(this, x.fields.key);
  return System_String__Replace_62718436(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  if ( (byte_4B6671E & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass39_0_o *)sub_1BE4ACC(
                                                 &Method_System_Collections_Generic_List_FuncList_TYPE__Contains__,
                                                 x);
    byte_4B6671E = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass39_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_1BE4D28(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_35D1DA4 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void __fastcall DataVals___c__DisplayClass79_0___ctor(DataVals___c__DisplayClass79_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass79_0___IsHideNoEffect_b__0(
        DataVals___c__DisplayClass79_0_o *this,
        int32_t cause,
        const MethodInfo *method)
{
  return this->fields.invalidCause != cause;
}