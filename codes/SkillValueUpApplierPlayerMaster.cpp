void __fastcall SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  SkillValueUpApplierPlayerMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct DataVals_o *dataVals_k__BackingField; // x19
  int64_t v14; // x0
  PartyOrganizationUtility_o *p_FuncParamValueUpInfo_k__BackingField; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_T__o *temporaryPartyInfo; // x0
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x21
  int64_t v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0

  v4 = this;
  if ( (byte_4B18D12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_DataVals___, funcUnit, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v9, v10);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    byte_4B18D12 = 1;
  }
  if ( !funcUnit )
    goto LABEL_40;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    return;
  if ( !dataVals_k__BackingField->fields.funcEnt )
    return;
  if ( !v4->fields.valueUpRate )
    return;
  v14 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
          v4,
          dataVals_k__BackingField,
          v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v14;
  p_FuncParamValueUpInfo_k__BackingField = (PartyOrganizationUtility_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_1BCA784(p_FuncParamValueUpInfo_k__BackingField, v14, v16, v17, v18, v19, v20, v21);
  temporaryPartyInfo = (System_Collections_Generic_IEnumerable_T__o *)p_FuncParamValueUpInfo_k__BackingField[-1].fields.temporaryPartyInfo;
  if ( !temporaryPartyInfo )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                temporaryPartyInfo,
                                                (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_1BCAA3C(this, funcUnit);
  klass = this->klass;
  v24 = this;
  v25 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_13;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v27 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v29 )
    sub_1BCAA3C(0LL, v28);
  while ( 1 )
  {
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_20;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_20:
      v33 = sub_1C1C7C0(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v29;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_27;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_27:
      v37 = sub_1C1C7C0(v29, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    v39 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
            v4,
            v38,
            v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v38 )
      sub_1BCAA3C(v39, v39);
    *(_QWORD *)(v38 + 104) = v39;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 104), v39, v40, v41, v42, v43, v44, v45);
  }
  v46 = *(_QWORD *)v29;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_35;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_35:
    v49 = sub_1C1C7C0(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v29, *(_QWORD *)(v49 + 8));
}


int32_t __fastcall SkillValueUpApplierPlayerMaster__CalcSkillValueUpRate(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  BattleData_o *data; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  SkillValueUpApplierPlayerMaster___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_object__bool__o *_9__5_0; // x20
  Il2CppObject *v30; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BattleData_c *klass; // x8
  BattleData_o *v39; // x19
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v44; // x1
  BattleBuffData_ActValueResponse_o *v45; // x19
  BattleBuffData_ActValueResponse_o *v46; // x20
  BattleBuffData_ActValueResponse_c *v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  BattleBuffData_ActValueResponse_c *v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  BattleServantData_o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  BattleBuffData_CheckIndividualitiesData_o *v59; // x23
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  BattleBuffData_ActValueRequest_o *v63; // x22
  __int64 v64; // x0
  __int64 v65; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v67; // x1
  BattleBuffData_ActValueResponse_c *v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0

  if ( (byte_4B18D14 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_ActValueRequest_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6, v7);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v18, v19);
    sub_1BCA7E0(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v20, v21);
    byte_4B18D14 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  v27 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo, v24);
    v27 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__bool__o *)v27->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, v24);
      v27 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v24, v25, v26);
    System_Func_object__bool____ctor(
      _9__5_0,
      v30,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0LL);
    static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v32, v33, v34, v35, v36, v37);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           v28,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_49:
    sub_1BCAA3C(data, method);
  klass = data->klass;
  v39 = data;
  v40 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_15;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v42 = sub_1C1C7C0(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v42)(
                                                          v39,
                                                          *(_QWORD *)(v42 + 8));
  v45 = ActValueDetail;
  v46 = 0LL;
  while ( 1 )
  {
    if ( !v45 )
      sub_1BCAA3C(ActValueDetail, v44);
    v47 = v45->klass;
    v48 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_23;
      }
      v50 = (__int64)(&v47->vtable._0_Equals.method + 2 * *v49);
    }
    else
    {
LABEL_23:
      v50 = sub_1C1C7C0(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v50)(v45, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = v45->klass;
    v52 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v53 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_30;
      }
      v54 = (__int64)(&v51->vtable._0_Equals.method + 2 * *v53);
    }
    else
    {
LABEL_30:
      v54 = sub_1C1C7C0(v45, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v55 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v54)(
                                   v45,
                                   *(_QWORD *)(v54 + 8));
    v59 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v56,
                                                         v57,
                                                         v58);
    BattleBuffData_CheckIndividualitiesData___ctor_43379556(v59, v55, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    v63 = (BattleBuffData_ActValueRequest_o *)sub_1BCAA2C(BattleBuffData_ActValueRequest_TypeInfo, v60, v61, v62);
    BattleBuffData_ActValueRequest___ctor(v63, 113, v59, 0LL, 0LL);
    if ( !v55 )
      sub_1BCAA3C(v64, v65);
    BuffData = BattleServantData__get_BuffData(v55, 0LL);
    if ( !BuffData )
      sub_1BCAA3C(0LL, v67);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v63, 0LL);
    v44 = ActValueDetail;
    if ( v46 )
      BattleBuffData_ActValueResponse__Merge(v46, ActValueDetail, 0LL);
    else
      v46 = ActValueDetail;
  }
  v68 = v45->klass;
  v69 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
  {
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_41;
    }
    v71 = (__int64)(&v68->vtable._0_Equals.method + 2 * *v70);
  }
  else
  {
LABEL_41:
    v71 = sub_1C1C7C0(v45, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v71)(v45, *(_QWORD *)(v71 + 8));
  if ( v46 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v46, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4B18D13 & 1) == 0 )
  {
    sub_1BCA7E0(&FuncParamValueUpInfoDefault_TypeInfo, dataVals, method);
    byte_4B18D13 = 1;
  }
  valueUpRate = this->fields.valueUpRate;
  if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo, dataVals);
  return (FuncParamValueUpInfoBase_o *)FuncParamValueUpInfoDefault__Create(dataVals, valueUpRate, method);
}


void __fastcall SkillValueUpApplierPlayerMaster__Init(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
{
  this->fields.valueUpRate = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, void *))this->klass->vtable._7_CalcSkillValueUpRate.method)(
                               this,
                               this->klass[1]._1.image);
}


void __fastcall SkillValueUpApplierPlayerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18D15 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1, v2);
    byte_4B18D15 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SkillValueUpApplierPlayerMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SkillValueUpApplierPlayerMaster___c___ctor(
        SkillValueUpApplierPlayerMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SkillValueUpApplierPlayerMaster___c___CalcSkillValueUpRate_b__5_0(
        SkillValueUpApplierPlayerMaster___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0LL);
}