void __fastcall SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  SkillValueUpApplierPlayerMaster_o *v4; // x20
  struct DataVals_o *dataVals_k__BackingField; // x19
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_IEnumerable_T__o *dependDataValsList; // x0
  __int64 v14; // x3
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v16; // x19
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x19
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x21
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0

  v4 = this;
  if ( (byte_42AF3BA & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_ExcludeNull_DataVals___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42AF3BA = 1;
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
  v6 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                v4,
                                dataVals_k__BackingField,
                                v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v6;
  sub_B52920(
    (BattleServantConfConponent_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  dependDataValsList = (System_Collections_Generic_IEnumerable_T__o *)dataVals_k__BackingField->fields.dependDataValsList;
  if ( !dependDataValsList )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                                                dependDataValsList,
                                                (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_B52A5C(this, funcUnit);
  klass = this->klass;
  v16 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v19 = sub_AEB880(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL, v14);
  }
  v22 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v22 )
    sub_B52A5C(0LL, v20);
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_20;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_20:
      v26 = sub_AEB880(v22, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_27;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_27:
      v31 = sub_AEB880(v22, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL, v27);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
    v33 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                   v4,
                                   v32,
                                   v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v32 )
      sub_B52A5C(v33, v33);
    *(_QWORD *)(v32 + 104) = v33;
    sub_B52920((BattleServantConfConponent_o *)(v32 + 104), v33, v34, v35, v36, v37, v38, v39);
  }
  v40 = *(_QWORD *)v22;
  if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
        goto LABEL_35;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_35:
    v43 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v22, *(_QWORD *)(v43 + 8));
}


int32_t __fastcall SkillValueUpApplierPlayerMaster__CalcSkillValueUpRate(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  SkillValueUpApplierPlayerMaster___c_c *v5; // x8
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x20
  Il2CppObject *v8; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x3
  BattleData_c *klass; // x8
  BattleData_o *v18; // x19
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v23; // x1
  __int64 v24; // x3
  BattleBuffData_ActValueResponse_o *v25; // x20
  BattleBuffData_ActValueResponse_o *v26; // x19
  BattleBuffData_ActValueResponse_c *v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  BattleServantData_o *v31; // x21
  BattleBuffData_CheckIndividualitiesData_o *v32; // x23
  BattleBuffData_ActValueRequest_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v37; // x1
  BattleBuffData_ActValueResponse_c *v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x3
  BattleBuffData_ActValueResponse_c *v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0

  if ( (byte_42AF3BC & 1) == 0 )
  {
    sub_B52984(&BattleBuffData_ActValueRequest_TypeInfo);
    sub_B52984(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__);
    sub_B52984(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_42AF3BC = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v5 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  if ( (BYTE3(SkillValueUpApplierPlayerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v5 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__5_0,
      v8,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
    v9 = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    v9->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v9->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           FieldPlayerServantList,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_51:
    sub_B52A5C(data, method);
  klass = data->klass;
  v18 = data;
  if ( *(_WORD *)&data->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v21 = sub_AEB880(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v16);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v21)(
                                                          v18,
                                                          *(_QWORD *)(v21 + 8));
  v25 = ActValueDetail;
  v26 = 0LL;
  while ( 1 )
  {
    if ( !v25 )
      sub_B52A5C(ActValueDetail, v23);
    v38 = v25->klass;
    if ( *(_WORD *)&v25->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v41 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v40);
    }
    else
    {
LABEL_36:
      v41 = sub_AEB880(v25, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v41)(v25, *(_QWORD *)(v41 + 8)) & 1) == 0 )
      break;
    v27 = v25->klass;
    if ( *(_WORD *)&v25->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v30 = (__int64)(&v27->vtable._0_Equals.method + 2 * *v29);
    }
    else
    {
LABEL_24:
      v30 = sub_AEB880(v25, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v42);
    }
    v31 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v30)(
                                   v25,
                                   *(_QWORD *)(v30 + 8));
    v32 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v32, v31, 0LL, 0LL, 0LL, 0LL, 0LL);
    v33 = (BattleBuffData_ActValueRequest_o *)sub_B52A54(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v33, 113, v32, 0LL, 0LL);
    if ( !v31 )
      sub_B52A5C(v34, v35);
    BuffData = BattleServantData__get_BuffData(v31, 0LL);
    if ( !BuffData )
      sub_B52A5C(0LL, v37);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v33, 0LL);
    v23 = ActValueDetail;
    if ( v26 )
      BattleBuffData_ActValueResponse__Merge(v26, ActValueDetail, 0LL);
    else
      v26 = ActValueDetail;
  }
  v43 = v25->klass;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v46 = (__int64)(&v43->vtable._0_Equals.method + 2 * *v45);
  }
  else
  {
LABEL_43:
    v46 = sub_AEB880(v25, System_IDisposable_TypeInfo, 0LL, v42);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v46)(v25, *(_QWORD *)(v46 + 8));
  if ( v26 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v26, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_42AF3BB & 1) == 0 )
  {
    sub_B52984(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_42AF3BB = 1;
  }
  valueUpRate = this->fields.valueUpRate;
  if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
  }
  return (FuncParamValueUpInfoBase_o *)FuncParamValueUpInfoDefault__Create(dataVals, valueUpRate, 0LL);
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
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3D1 & 1) == 0 )
  {
    sub_B52984(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_42AD3D1 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v1;
  sub_B52920(static_fields);
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