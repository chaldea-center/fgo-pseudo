void __fastcall SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, v5, v6);
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
  __int64 v10; // x0
  ServantStatusBattleListViewItem_o *p_FuncParamValueUpInfo_k__BackingField; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  v4 = this;
  if ( (byte_49FED7D & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_DataVals___, funcUnit);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v7);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FED7D = 1;
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
  p_FuncParamValueUpInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_1B6406C(p_FuncParamValueUpInfo_k__BackingField, v10, v12, v13);
  v14 = *(System_Collections_Generic_IEnumerable_T__o **)&p_FuncParamValueUpInfo_k__BackingField[-1].fields.isEnabled;
  if ( !v14 )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                v14,
                                                (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_1B64324(this);
  klass = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_13;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v19 = sub_1BB60A8(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v20 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_20;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_20:
      v24 = sub_1BB60A8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_27;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_27:
      v28 = sub_1BB60A8(v20, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v30 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
            v4,
            v29,
            v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v29 )
      sub_1B64324(v30);
    *(_QWORD *)(v29 + 104) = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 104), v30, v31, v32);
  }
  v33 = *(_QWORD *)v20;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_35;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_35:
    v36 = sub_1BB60A8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v20, *(_QWORD *)(v36 + 8));
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
  __int64 v14; // x1
  __int64 v15; // x2
  SkillValueUpApplierPlayerMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__bool__o *_9__5_0; // x20
  Il2CppObject *v19; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  BattleData_c *klass; // x8
  BattleData_o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v29; // x19
  BattleBuffData_ActValueResponse_o *v30; // x20
  BattleBuffData_ActValueResponse_c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  BattleBuffData_ActValueResponse_c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  BattleServantData_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  BattleBuffData_CheckIndividualitiesData_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  BattleBuffData_ActValueRequest_o *v45; // x22
  __int64 v46; // x0
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_ActValueResponse_c *v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0

  if ( (byte_49FED7F & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_ActValueRequest_TypeInfo, method);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v10);
    sub_1B640C8(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v11);
    byte_49FED7F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  v16 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v16 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__bool__o *)v16->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v14, v15);
    System_Func_object__bool____ctor(
      _9__5_0,
      v19,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0LL);
    static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v21, v22);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           v17,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_49:
    sub_1B64324(data);
  klass = data->klass;
  v24 = data;
  v25 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_15;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v27 = sub_1BB60A8(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v27)(
                                                          v24,
                                                          *(_QWORD *)(v27 + 8));
  v29 = ActValueDetail;
  v30 = 0LL;
  while ( 1 )
  {
    if ( !v29 )
      sub_1B64324(ActValueDetail);
    v31 = v29->klass;
    v32 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_23;
      }
      v34 = (__int64)(&v31->vtable._0_Equals.method + 2 * *v33);
    }
    else
    {
LABEL_23:
      v34 = sub_1BB60A8(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = v29->klass;
    v36 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v37 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_30;
      }
      v38 = (__int64)(&v35->vtable._0_Equals.method + 2 * *v37);
    }
    else
    {
LABEL_30:
      v38 = sub_1BB60A8(v29, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v39 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v38)(
                                   v29,
                                   *(_QWORD *)(v38 + 8));
    v42 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v40,
                                                         v41);
    BattleBuffData_CheckIndividualitiesData___ctor(v42, v39, 0LL, 0LL, 0LL, 0LL, 0LL);
    v45 = (BattleBuffData_ActValueRequest_o *)sub_1B64314(BattleBuffData_ActValueRequest_TypeInfo, v43, v44);
    BattleBuffData_ActValueRequest___ctor(v45, 113, v42, 0LL, 0LL);
    if ( !v39 )
      sub_1B64324(v46);
    BuffData = BattleServantData__get_BuffData(v39, 0LL);
    if ( !BuffData )
      sub_1B64324(0LL);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v45, 0LL);
    if ( v30 )
      BattleBuffData_ActValueResponse__Merge(v30, ActValueDetail, 0LL);
    else
      v30 = ActValueDetail;
  }
  v48 = v29->klass;
  v49 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_41;
    }
    v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
  }
  else
  {
LABEL_41:
    v51 = sub_1BB60A8(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v51)(v29, *(_QWORD *)(v51 + 8));
  if ( v30 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v30, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_49FED7E & 1) == 0 )
  {
    sub_1B640C8(&FuncParamValueUpInfoDefault_TypeInfo, dataVals);
    byte_49FED7E = 1;
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FED80 & 1) == 0 )
  {
    sub_1B640C8(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1);
    byte_49FED80 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SkillValueUpApplierPlayerMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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