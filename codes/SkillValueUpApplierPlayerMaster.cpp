void __fastcall SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v5, v6);
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
  CGThumbnailListItem_o *p_FuncParamValueUpInfo_k__BackingField; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
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
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  v4 = this;
  if ( (byte_4B1F35A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_DataVals___, funcUnit);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v7);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4B1F35A = 1;
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
  p_FuncParamValueUpInfo_k__BackingField = (CGThumbnailListItem_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_1BCAF9C(p_FuncParamValueUpInfo_k__BackingField, v10, v12, v13);
  v14 = *(System_Collections_Generic_IEnumerable_T__o **)&p_FuncParamValueUpInfo_k__BackingField[-1].fields._Id_k__BackingField;
  if ( !v14 )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                v14,
                                                (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_1BCB254(this, funcUnit);
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
    v19 = sub_1C1B560(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1BCB254(0LL, v20);
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
      v25 = sub_1C1B560(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1C1B560(v21, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v31 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
            v4,
            v30,
            v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v30 )
      sub_1BCB254(v31, v31);
    *(_QWORD *)(v30 + 104) = v31;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 104), v31, v32, v33);
  }
  v34 = *(_QWORD *)v21;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_35;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_35:
    v37 = sub_1C1B560(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v21, *(_QWORD *)(v37 + 8));
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  BattleData_c *klass; // x8
  BattleData_o *v22; // x19
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v27; // x1
  BattleBuffData_ActValueResponse_o *v28; // x19
  BattleBuffData_ActValueResponse_o *v29; // x20
  BattleBuffData_ActValueResponse_c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  BattleBuffData_ActValueResponse_c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  BattleServantData_o *v38; // x21
  BattleBuffData_CheckIndividualitiesData_o *v39; // x23
  BattleBuffData_ActValueRequest_o *v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v44; // x1
  BattleBuffData_ActValueResponse_c *v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  if ( (byte_4B1F35C & 1) == 0 )
  {
    sub_1BCAFF8(&BattleBuffData_ActValueRequest_TypeInfo, method);
    sub_1BCAFF8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_1BCAFF8(&System_Func_BattleServantData__bool__TypeInfo, v5);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BCAFF8(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v10);
    sub_1BCAFF8(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v11);
    byte_4B1F35C = 1;
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
    _9__5_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__5_0,
      v17,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0LL);
    static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v19, v20);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_object_(
                           v15,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_49:
    sub_1BCB254(data, method);
  klass = data->klass;
  v22 = data;
  v23 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_15;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v25 = sub_1C1B560(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v25)(
                                                          v22,
                                                          *(_QWORD *)(v25 + 8));
  v28 = ActValueDetail;
  v29 = 0LL;
  while ( 1 )
  {
    if ( !v28 )
      sub_1BCB254(ActValueDetail, v27);
    v30 = v28->klass;
    v31 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_23;
      }
      v33 = (__int64)(&v30->vtable._0_Equals.method + 2 * *v32);
    }
    else
    {
LABEL_23:
      v33 = sub_1C1B560(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v33)(v28, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = v28->klass;
    v35 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_30;
      }
      v37 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v36);
    }
    else
    {
LABEL_30:
      v37 = sub_1C1B560(v28, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v38 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v37)(
                                   v28,
                                   *(_QWORD *)(v37 + 8));
    v39 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCB244(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_44896728(v39, v38, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    v40 = (BattleBuffData_ActValueRequest_o *)sub_1BCB244(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v40, 113, v39, 0LL, 0LL);
    if ( !v38 )
      sub_1BCB254(v41, v42);
    BuffData = BattleServantData__get_BuffData(v38, 0LL);
    if ( !BuffData )
      sub_1BCB254(0LL, v44);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v40, 0LL);
    v27 = ActValueDetail;
    if ( v29 )
      BattleBuffData_ActValueResponse__Merge(v29, ActValueDetail, 0LL);
    else
      v29 = ActValueDetail;
  }
  v45 = v28->klass;
  v46 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_41;
    }
    v48 = (__int64)(&v45->vtable._0_Equals.method + 2 * *v47);
  }
  else
  {
LABEL_41:
    v48 = sub_1C1B560(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v48)(v28, *(_QWORD *)(v48 + 8));
  if ( v29 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v29, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4B1F35B & 1) == 0 )
  {
    sub_1BCAFF8(&FuncParamValueUpInfoDefault_TypeInfo, dataVals);
    byte_4B1F35B = 1;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1F35D & 1) == 0 )
  {
    sub_1BCAFF8(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1);
    byte_4B1F35D = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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