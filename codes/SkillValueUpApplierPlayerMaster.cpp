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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
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
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_T__o *dependDataValsList; // x0
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v19; // x19
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  __int64 v23; // x19
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
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
  if ( (byte_4214A78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_DataVals___, funcUnit);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v7);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4214A78 = 1;
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
  v10 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                 v4,
                                 dataVals_k__BackingField,
                                 v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  dependDataValsList = (System_Collections_Generic_IEnumerable_T__o *)dataVals_k__BackingField->fields.dependDataValsList;
  if ( !dependDataValsList )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                                                dependDataValsList,
                                                (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_B0D97C(this);
  klass = this->klass;
  v19 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v22 = sub_AA67A0(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v23 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_20;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_20:
      v27 = sub_AA67A0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_27;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_27:
      v31 = sub_AA67A0(v23, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v33 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                   v4,
                                   v32,
                                   v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v32 )
      sub_B0D97C(v33);
    *(_QWORD *)(v32 + 104) = v33;
    sub_B0D840((BattleServantConfConponent_o *)(v32 + 104), v33, v34, v35, v36, v37, v38, v39);
  }
  v40 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_35;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_35:
    v43 = sub_AA67A0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v23, *(_QWORD *)(v43 + 8));
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
  __int64 v12; // x1
  BattleData_o *data; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  SkillValueUpApplierPlayerMaster___c_c *v17; // x8
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x20
  Il2CppObject *v20; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleData_c *klass; // x8
  BattleData_o *v29; // x19
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v34; // x20
  BattleBuffData_ActValueResponse_o *v35; // x19
  BattleBuffData_ActValueResponse_c *v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  BattleServantData_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  BattleBuffData_CheckIndividualitiesData_o *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  BattleBuffData_ActValueRequest_o *v46; // x22
  __int64 v47; // x0
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_ActValueResponse_c *v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  BattleBuffData_ActValueResponse_c *v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0

  if ( (byte_4214A7A & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_ActValueRequest_TypeInfo, method);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v11);
    sub_B0D8A4(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v12);
    byte_4214A7A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v17 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  if ( (BYTE3(SkillValueUpApplierPlayerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v17 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_BattleServantData__bool__TypeInfo,
                                                                                   v14,
                                                                                   v15);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__5_0,
      v20,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
    v21 = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    v21->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           FieldPlayerServantList,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_51:
    sub_B0D97C(data);
  klass = data->klass;
  v29 = data;
  if ( *(_WORD *)&data->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v32 = sub_AA67A0(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v32)(
                                                          v29,
                                                          *(_QWORD *)(v32 + 8));
  v34 = ActValueDetail;
  v35 = 0LL;
  while ( 1 )
  {
    if ( !v34 )
      sub_B0D97C(ActValueDetail);
    v49 = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v50 = 0LL;
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v52 = (__int64)(&v49->vtable._0_Equals.method + 2 * *v51);
    }
    else
    {
LABEL_36:
      v52 = sub_AA67A0(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v52)(v34, *(_QWORD *)(v52 + 8)) & 1) == 0 )
      break;
    v36 = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v38 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
    }
    else
    {
LABEL_24:
      v39 = sub_AA67A0(v34, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v40 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v39)(
                                   v34,
                                   *(_QWORD *)(v39 + 8));
    v43 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v41,
                                                         v42);
    BattleBuffData_CheckIndividualitiesData___ctor(v43, v40, 0LL, 0LL, 0LL, 0LL, 0LL);
    v46 = (BattleBuffData_ActValueRequest_o *)sub_B0D974(BattleBuffData_ActValueRequest_TypeInfo, v44, v45);
    BattleBuffData_ActValueRequest___ctor(v46, 113, v43, 0LL, 0LL);
    if ( !v40 )
      sub_B0D97C(v47);
    BuffData = BattleServantData__get_BuffData(v40, 0LL);
    if ( !BuffData )
      sub_B0D97C(0LL);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v46, 0LL);
    if ( v35 )
      BattleBuffData_ActValueResponse__Merge(v35, ActValueDetail, 0LL);
    else
      v35 = ActValueDetail;
  }
  v53 = v34->klass;
  if ( *(_WORD *)&v34->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v56 = (__int64)(&v53->vtable._0_Equals.method + 2 * *v55);
  }
  else
  {
LABEL_43:
    v56 = sub_AA67A0(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v56)(v34, *(_QWORD *)(v56 + 8));
  if ( v35 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v35, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4214A79 & 1) == 0 )
  {
    sub_B0D8A4(&FuncParamValueUpInfoDefault_TypeInfo, dataVals);
    byte_4214A79 = 1;
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42122B6 & 1) == 0 )
  {
    sub_B0D8A4(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1);
    byte_42122B6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SkillValueUpApplierPlayerMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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