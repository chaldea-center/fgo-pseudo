void SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v5, v6);
}


void SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  SkillValueUpApplierPlayerMaster_o *v4; // x20
  struct DataVals_o *dataVals_k__BackingField; // x19
  __int64 v6; // x0
  CGThumbnailListItem_o *p_FuncParamValueUpInfo_k__BackingField; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v12; // x19
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x19
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x21
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  v4 = this;
  if ( (byte_4CB92A3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_DataVals___);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CB92A3 = 1;
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
  p_FuncParamValueUpInfo_k__BackingField = (CGThumbnailListItem_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_1C6B9AC(p_FuncParamValueUpInfo_k__BackingField, v6, v8, v9);
  v10 = *(System_Collections_Generic_IEnumerable_T__o **)&p_FuncParamValueUpInfo_k__BackingField[-1].fields._Id_k__BackingField;
  if ( !v10 )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                v10,
                                                (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_1C6BC60(this, funcUnit);
  klass = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_13;
    }
    v15 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v15 = sub_1C41D90(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
  if ( !v17 )
    sub_1C6BC60(0, v16);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_20:
      v21 = sub_1C41D90(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_27;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_27:
      v25 = sub_1C41D90(v17, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    v27 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, const MethodInfo *))v4->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr)(
            v4,
            v26,
            v4->klass->vtable._6_CreateFuncParamValueUpInfo.method);
    if ( !v26 )
      sub_1C6BC60(v27, v27);
    *(_QWORD *)(v26 + 104) = v27;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 104), v27, v28, v29);
  }
  v30 = *(_QWORD *)v17;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_35;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_35:
    v33 = sub_1C41D90(v17, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v17, *(_QWORD *)(v33 + 8));
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  BattleData_o *v13; // x8
  BattleData_o *v14; // x19
  int m_CancellationTokenSource; // w8
  int v16; // w24
  BattleBuffData_ActValueResponse_o *v17; // x20
  BattleServantData_o *v18; // x21
  BattleBuffData_CheckIndividualitiesData_o *v19; // x23
  BattleBuffData_ActValueRequest_o *v20; // x22

  if ( (byte_4CB92A5 & 1) == 0 )
  {
    sub_1C6BA08(&BattleBuffData_ActValueRequest_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__);
    sub_1C6BA08(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_4CB92A5 = 1;
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
    _9__5_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__5_0,
      v8,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0);
    static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__5_0,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  data = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                           v12,
                           (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v13 = this->fields.data;
  if ( !v13
    || (v14 = data, BattleData__SetUseOnlyHighestValueBuffInGroup(v13, 113, (BattleServantData_array *)data, 0, 0), !v14) )
  {
LABEL_24:
    sub_1C6BC60(data, method);
  }
  m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 1 )
    return 0;
  v16 = 0;
  v17 = 0;
  do
  {
    if ( v16 >= (unsigned int)m_CancellationTokenSource )
      sub_1C6BC68(data);
    v18 = (BattleServantData_o *)*((_QWORD *)&v14->fields.rootfsm + v16);
    v19 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45921048(v19, v18, 0, 0, 0, 0, 0, 1, 0);
    v20 = (BattleBuffData_ActValueRequest_o *)sub_1C6BC54(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v20, 113, v19, 0, 0);
    if ( !v18 )
      goto LABEL_24;
    data = (BattleData_o *)BattleServantData__get_BuffData(v18, 0);
    if ( !data )
      goto LABEL_24;
    data = (BattleData_o *)BattleBuffData__GetActValueDetail((BattleBuffData_o *)data, v20, 0);
    if ( v17 )
      BattleBuffData_ActValueResponse__Merge(v17, (BattleBuffData_ActValueResponse_o *)data, 0);
    else
      v17 = (BattleBuffData_ActValueResponse_o *)data;
    m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
    ++v16;
  }
  while ( v16 < m_CancellationTokenSource );
  if ( v17 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v17, 0);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4CB92A4 & 1) == 0 )
  {
    sub_1C6BA08(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_4CB92A4 = 1;
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB92A6 & 1) == 0 )
  {
    sub_1C6BA08(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_4CB92A6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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