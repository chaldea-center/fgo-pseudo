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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  SkillValueUpApplierPlayerMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct DataVals_o *dataVals_k__BackingField; // x19
  int64_t v10; // x0
  PartyOrganizationUtility_o *p_FuncParamValueUpInfo_k__BackingField; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_T__o *temporaryPartyInfo; // x0
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x21
  int64_t v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0

  v4 = this;
  if ( (byte_4B6975E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_DataVals___, funcUnit);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v7);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4B6975E = 1;
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
  v10 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
          v4,
          dataVals_k__BackingField,
          v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v10;
  p_FuncParamValueUpInfo_k__BackingField = (PartyOrganizationUtility_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_1BE4A70(p_FuncParamValueUpInfo_k__BackingField, v10, v12, v13, v14, v15, v16, v17);
  temporaryPartyInfo = (System_Collections_Generic_IEnumerable_T__o *)p_FuncParamValueUpInfo_k__BackingField[-1].fields.temporaryPartyInfo;
  if ( !temporaryPartyInfo )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                temporaryPartyInfo,
                                                (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_1BE4D28(this, funcUnit);
  klass = this->klass;
  v20 = this;
  v21 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_13;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v23 = sub_1C36AAC(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1BE4D28(0LL, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_20;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_20:
      v29 = sub_1C36AAC(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_27;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_27:
      v33 = sub_1C36AAC(v25, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    v35 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
            v4,
            v34,
            v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v34 )
      sub_1BE4D28(v35, v35);
    *(_QWORD *)(v34 + 104) = v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 104), v35, v36, v37, v38, v39, v40, v41);
  }
  v42 = *(_QWORD *)v25;
  v43 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_35;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_35:
    v45 = sub_1C36AAC(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v25, *(_QWORD *)(v45 + 8));
}


int32_t __fastcall SkillValueUpApplierPlayerMaster__CalcSkillValueUpRate(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
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
  BattleData_o *data; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  SkillValueUpApplierPlayerMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *_9__5_0; // x20
  Il2CppObject *v17; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleData_c *klass; // x8
  BattleData_o *v26; // x19
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v31; // x1
  BattleBuffData_ActValueResponse_o *v32; // x19
  BattleBuffData_ActValueResponse_o *v33; // x20
  BattleBuffData_ActValueResponse_c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  BattleBuffData_ActValueResponse_c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  BattleServantData_o *v42; // x21
  BattleBuffData_CheckIndividualitiesData_o *v43; // x23
  BattleBuffData_ActValueRequest_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v48; // x1
  BattleBuffData_ActValueResponse_c *v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B69760 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleBuffData_ActValueRequest_TypeInfo, method);
    sub_1BE4ACC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_1BE4ACC(&System_Func_BattleServantData__bool__TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v10);
    sub_1BE4ACC(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v11);
    byte_4B69760 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  v14 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v14 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__bool__o *)v14->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__5_0,
      v17,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0LL);
    static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v19, v20, v21, v22, v23, v24);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           v15,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_49:
    sub_1BE4D28(data, method);
  klass = data->klass;
  v26 = data;
  v27 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_15;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v29 = sub_1C36AAC(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v29)(
                                                          v26,
                                                          *(_QWORD *)(v29 + 8));
  v32 = ActValueDetail;
  v33 = 0LL;
  while ( 1 )
  {
    if ( !v32 )
      sub_1BE4D28(ActValueDetail, v31);
    v34 = v32->klass;
    v35 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_23;
      }
      v37 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v36);
    }
    else
    {
LABEL_23:
      v37 = sub_1C36AAC(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v37)(v32, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = v32->klass;
    v39 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_30;
      }
      v41 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v40);
    }
    else
    {
LABEL_30:
      v41 = sub_1C36AAC(v32, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v42 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v41)(
                                   v32,
                                   *(_QWORD *)(v41 + 8));
    v43 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BE4D18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_43634876(v43, v42, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    v44 = (BattleBuffData_ActValueRequest_o *)sub_1BE4D18(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v44, 113, v43, 0LL, 0LL);
    if ( !v42 )
      sub_1BE4D28(v45, v46);
    BuffData = BattleServantData__get_BuffData(v42, 0LL);
    if ( !BuffData )
      sub_1BE4D28(0LL, v48);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v44, 0LL);
    v31 = ActValueDetail;
    if ( v33 )
      BattleBuffData_ActValueResponse__Merge(v33, ActValueDetail, 0LL);
    else
      v33 = ActValueDetail;
  }
  v49 = v32->klass;
  v50 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_41;
    }
    v52 = (__int64)(&v49->vtable._0_Equals.method + 2 * *v51);
  }
  else
  {
LABEL_41:
    v52 = sub_1C36AAC(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v52)(v32, *(_QWORD *)(v52 + 8));
  if ( v33 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v33, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4B6975F & 1) == 0 )
  {
    sub_1BE4ACC(&FuncParamValueUpInfoDefault_TypeInfo, dataVals);
    byte_4B6975F = 1;
  }
  valueUpRate = this->fields.valueUpRate;
  if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B69761 & 1) == 0 )
  {
    sub_1BE4ACC(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1);
    byte_4B69761 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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