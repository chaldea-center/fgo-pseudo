void __fastcall SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, v5, v6);
}


void __fastcall SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  SkillValueUpApplierPlayerMaster_o *v4; // x20
  struct DataVals_o *dataVals_k__BackingField; // x19
  __int64 v6; // x0
  ServantStatusBattleListViewItem_o *p_FuncParamValueUpInfo_k__BackingField; // x19
  int32_t v8; // w2
  int32_t v9; // w3
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
  int32_t v29; // w3
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  v4 = this;
  if ( (byte_4A5DB3A & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_DataVals___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5DB3A = 1;
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
  v6 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
         v4,
         dataVals_k__BackingField,
         v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v6;
  p_FuncParamValueUpInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_1B88554(p_FuncParamValueUpInfo_k__BackingField, v6, v8, v9);
  v10 = *(System_Collections_Generic_IEnumerable_T__o **)&p_FuncParamValueUpInfo_k__BackingField[-1].fields.isEnabled;
  if ( !v10 )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                v10,
                                                (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_1B8880C(this, funcUnit);
  klass = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_13;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v15 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
  if ( !v17 )
    sub_1B8880C(0LL, v16);
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
      v21 = sub_1BDA590(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v25 = sub_1BDA590(v17, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    v27 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
            v4,
            v26,
            v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v26 )
      sub_1B8880C(v27, v27);
    *(_QWORD *)(v26 + 104) = v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 104), v27, v28, v29);
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
    v33 = sub_1BDA590(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v17, *(_QWORD *)(v33 + 8));
}


int32_t __fastcall SkillValueUpApplierPlayerMaster__CalcSkillValueUpRate(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  SkillValueUpApplierPlayerMaster___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__5_0; // x20
  Il2CppObject *v8; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  BattleData_c *klass; // x8
  BattleData_o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v18; // x1
  BattleBuffData_ActValueResponse_o *v19; // x19
  BattleBuffData_ActValueResponse_o *v20; // x20
  BattleBuffData_ActValueResponse_c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  BattleBuffData_ActValueResponse_c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  BattleServantData_o *v29; // x21
  BattleBuffData_CheckIndividualitiesData_o *v30; // x23
  BattleBuffData_ActValueRequest_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v35; // x1
  BattleBuffData_ActValueResponse_c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A5DB3C & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_ActValueRequest_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__);
    sub_1B885B0(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_4A5DB3C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
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
    _9__5_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__5_0,
      v8,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0LL);
    static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v10, v11);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           v6,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_49:
    sub_1B8880C(data, method);
  klass = data->klass;
  v13 = data;
  v14 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v16 = sub_1BDA590(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v16)(
                                                          v13,
                                                          *(_QWORD *)(v16 + 8));
  v19 = ActValueDetail;
  v20 = 0LL;
  while ( 1 )
  {
    if ( !v19 )
      sub_1B8880C(ActValueDetail, v18);
    v21 = v19->klass;
    v22 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = (__int64)(&v21->vtable._0_Equals.method + 2 * *v23);
    }
    else
    {
LABEL_23:
      v24 = sub_1BDA590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v24)(v19, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = v19->klass;
    v26 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_30;
      }
      v28 = (__int64)(&v25->vtable._0_Equals.method + 2 * *v27);
    }
    else
    {
LABEL_30:
      v28 = sub_1BDA590(v19, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v29 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v28)(
                                   v19,
                                   *(_QWORD *)(v28 + 8));
    v30 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v30, v29, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    v31 = (BattleBuffData_ActValueRequest_o *)sub_1B887FC(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v31, 113, v30, 0LL, 0LL);
    if ( !v29 )
      sub_1B8880C(v32, v33);
    BuffData = BattleServantData__get_BuffData(v29, 0LL);
    if ( !BuffData )
      sub_1B8880C(0LL, v35);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v31, 0LL);
    v18 = ActValueDetail;
    if ( v20 )
      BattleBuffData_ActValueResponse__Merge(v20, ActValueDetail, 0LL);
    else
      v20 = ActValueDetail;
  }
  v36 = v19->klass;
  v37 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_41;
    }
    v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
  }
  else
  {
LABEL_41:
    v39 = sub_1BDA590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v39)(v19, *(_QWORD *)(v39 + 8));
  if ( v20 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v20, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4A5DB3B & 1) == 0 )
  {
    sub_1B885B0(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_4A5DB3B = 1;
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DB3D & 1) == 0 )
  {
    sub_1B885B0(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_4A5DB3D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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