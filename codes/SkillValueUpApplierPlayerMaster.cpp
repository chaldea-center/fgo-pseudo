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
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
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
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v15; // x19
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x19
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x21
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0

  v4 = this;
  if ( (byte_438A103 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_DataVals___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438A103 = 1;
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
  sub_B77560(
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
                                                (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_B7769C(this, funcUnit);
  klass = this->klass;
  v15 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v18 = sub_B0F4C0(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_B7769C(0LL, v19);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_20;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_20:
      v24 = sub_B0F4C0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_27;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_27:
      v28 = sub_B0F4C0(v20, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v30 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                   v4,
                                   v29,
                                   v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v29 )
      sub_B7769C(v30, v30);
    *(_QWORD *)(v29 + 104) = v30;
    sub_B77560((BattleServantConfConponent_o *)(v29 + 104), v30, v31, v32, v33, v34, v35, v36);
  }
  v37 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_35;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_35:
    v40 = sub_B0F4C0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v20, *(_QWORD *)(v40 + 8));
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
  BattleData_c *klass; // x8
  BattleData_o *v17; // x19
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v22; // x1
  BattleBuffData_ActValueResponse_o *v23; // x20
  BattleBuffData_ActValueResponse_o *v24; // x19
  BattleBuffData_ActValueResponse_c *v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  BattleServantData_o *v29; // x21
  BattleBuffData_CheckIndividualitiesData_o *v30; // x23
  BattleBuffData_ActValueRequest_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v35; // x1
  BattleBuffData_ActValueResponse_c *v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  BattleBuffData_ActValueResponse_c *v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0

  if ( (byte_438A105 & 1) == 0 )
  {
    sub_B775C4(&BattleBuffData_ActValueRequest_TypeInfo);
    sub_B775C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B775C4(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B775C4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__);
    sub_B775C4(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_438A105 = 1;
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
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__5_0,
      v8,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleServantData__bool___ctor__);
    v9 = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    v9->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_B77560(
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
                           (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_51:
    sub_B7769C(data, method);
  klass = data->klass;
  v17 = data;
  if ( *(_WORD *)&data->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v20 = sub_B0F4C0(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v20)(
                                                          v17,
                                                          *(_QWORD *)(v20 + 8));
  v23 = ActValueDetail;
  v24 = 0LL;
  while ( 1 )
  {
    if ( !v23 )
      sub_B7769C(ActValueDetail, v22);
    v36 = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
    }
    else
    {
LABEL_36:
      v39 = sub_B0F4C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v25 = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v28 = (__int64)(&v25->vtable._0_Equals.method + 2 * *v27);
    }
    else
    {
LABEL_24:
      v28 = sub_B0F4C0(v23, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v29 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v28)(
                                   v23,
                                   *(_QWORD *)(v28 + 8));
    v30 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B77694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v30, v29, 0LL, 0LL, 0LL, 0LL, 0LL);
    v31 = (BattleBuffData_ActValueRequest_o *)sub_B77694(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v31, 113, v30, 0LL, 0LL);
    if ( !v29 )
      sub_B7769C(v32, v33);
    BuffData = BattleServantData__get_BuffData(v29, 0LL);
    if ( !BuffData )
      sub_B7769C(0LL, v35);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v31, 0LL);
    v22 = ActValueDetail;
    if ( v24 )
      BattleBuffData_ActValueResponse__Merge(v24, ActValueDetail, 0LL);
    else
      v24 = ActValueDetail;
  }
  v40 = v23->klass;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
  }
  else
  {
LABEL_43:
    v43 = sub_B0F4C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v43)(v23, *(_QWORD *)(v43 + 8));
  if ( v24 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v24, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_438A104 & 1) == 0 )
  {
    sub_B775C4(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_438A104 = 1;
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E9C & 1) == 0 )
  {
    sub_B775C4(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_4388E9C = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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