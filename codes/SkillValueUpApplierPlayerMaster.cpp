void SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)data, v5, v6, v7, v8, v9, v10);
}


void SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  SkillValueUpApplierPlayerMaster_o *v4; // x20
  struct DataVals_o *dataVals_k__BackingField; // x19
  __int64 v6; // x0
  GrandQuestFolderBoardItem_o *p_FuncParamValueUpInfo_k__BackingField; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x21
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  v4 = this;
  if ( (byte_4CF162B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_ExcludeNull_DataVals___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CF162B = 1;
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
  v6 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, const MethodInfo *))v4->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr)(
         v4,
         dataVals_k__BackingField,
         v4->klass->vtable._6_CreateFuncParamValueUpInfo.method);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v6;
  p_FuncParamValueUpInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_1C7BA8C(p_FuncParamValueUpInfo_k__BackingField, v6, v8, v9, v10, v11, v12, v13);
  v14 = *(System_Collections_Generic_IEnumerable_T__o **)&p_FuncParamValueUpInfo_k__BackingField[-1].fields._IconId_k__BackingField;
  if ( !v14 )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                v14,
                                                (const MethodInfo_315A07C *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_1C7BD40(this, funcUnit);
  klass = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_13;
    }
    v19 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v19 = sub_1C51E70(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1C7BD40(0, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_20;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_20:
      v25 = sub_1C51E70(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_27;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_27:
      v29 = sub_1C51E70(v21, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v31 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, const MethodInfo *))v4->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr)(
            v4,
            v30,
            v4->klass->vtable._6_CreateFuncParamValueUpInfo.method);
    if ( !v30 )
      sub_1C7BD40(v31, v31);
    *(_QWORD *)(v30 + 104) = v31;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 104), v31, v32, v33, v34, v35, v36, v37);
  }
  v38 = *(_QWORD *)v21;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_35;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_35:
    v41 = sub_1C51E70(v21, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v21, *(_QWORD *)(v41 + 8));
}


int32_t SkillValueUpApplierPlayerMaster__CalcSkillValueUpRate(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  SkillValueUpApplierPlayerMaster___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v8; // x22
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BattleData_o *v17; // x8
  BattleData_o *v18; // x19
  int m_CancellationTokenSource; // w8
  int v20; // w24
  BattleBuffData_ActValueResponse_o *v21; // x20
  BattleServantData_o *v22; // x21
  BattleBuffData_CheckIndividualitiesData_o *v23; // x23
  BattleBuffData_ActValueRequest_o *v24; // x22

  if ( (byte_4CF162D & 1) == 0 )
  {
    sub_1C7BAE8(&BattleBuffData_ActValueRequest_TypeInfo);
    sub_1C7BAE8(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C7BAE8(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C7BAE8(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__);
    sub_1C7BAE8(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_4CF162D = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0);
  v5 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v5 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__bool__o *)v5->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__5_0,
      v8,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0);
    static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__5_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  data = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                           v16,
                           (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v17 = this->fields.data;
  if ( !v17
    || (v18 = data, BattleData__SetUseOnlyHighestValueBuffInGroup(v17, 113, (BattleServantData_array *)data, 0, 0), !v18) )
  {
LABEL_24:
    sub_1C7BD40(data, method);
  }
  m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 1 )
    return 0;
  v20 = 0;
  v21 = 0;
  do
  {
    if ( v20 >= (unsigned int)m_CancellationTokenSource )
      sub_1C7BD48(data);
    v22 = (BattleServantData_o *)*((_QWORD *)&v18->fields.rootfsm + v20);
    v23 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C7BD34(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_46474960(v23, v22, 0, 0, 0, 0, 0, 1, 0);
    v24 = (BattleBuffData_ActValueRequest_o *)sub_1C7BD34(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v24, 113, v23, 0, 0);
    if ( !v22 )
      goto LABEL_24;
    data = (BattleData_o *)BattleServantData__get_BuffData(v22, 0);
    if ( !data )
      goto LABEL_24;
    data = (BattleData_o *)BattleBuffData__GetActValueDetail((BattleBuffData_o *)data, v24, 0);
    if ( v21 )
      BattleBuffData_ActValueResponse__Merge(v21, (BattleBuffData_ActValueResponse_o *)data, 0);
    else
      v21 = (BattleBuffData_ActValueResponse_o *)data;
    m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
    ++v20;
  }
  while ( v20 < m_CancellationTokenSource );
  if ( v21 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v21, 0);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4CF162C & 1) == 0 )
  {
    sub_1C7BAE8(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_4CF162C = 1;
  }
  valueUpRate = this->fields.valueUpRate;
  if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
  return (FuncParamValueUpInfoBase_o *)FuncParamValueUpInfoDefault__Create(dataVals, valueUpRate, method);
}


void SkillValueUpApplierPlayerMaster__Init(SkillValueUpApplierPlayerMaster_o *this, const MethodInfo *method)
{
  this->fields.valueUpRate = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, const MethodInfo *))this->klass->vtable._7_CalcSkillValueUpRate.methodPtr)(
                               this,
                               this->klass->vtable._7_CalcSkillValueUpRate.method);
}


void SkillValueUpApplierPlayerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF162E & 1) == 0 )
  {
    sub_1C7BAE8(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_4CF162E = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillValueUpApplierPlayerMaster___c___ctor(SkillValueUpApplierPlayerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SkillValueUpApplierPlayerMaster___c___CalcSkillValueUpRate_b__5_0(
        SkillValueUpApplierPlayerMaster___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && BattleServantData__isAlive(x, 0, 0);
}