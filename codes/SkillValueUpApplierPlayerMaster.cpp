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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
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
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x19
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x21
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0

  if ( (byte_40F9C73 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_DataVals___, funcUnit);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_40F9C73 = 1;
  }
  if ( !funcUnit )
    goto LABEL_40;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    return;
  if ( !dataVals_k__BackingField->fields.funcEnt )
    return;
  if ( !this->fields.valueUpRate )
    return;
  v10 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, Il2CppMethodPointer))this->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                 this,
                                 dataVals_k__BackingField,
                                 this->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v10;
  sub_B16F98(
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
  v18 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          dependDataValsList,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !v18 )
LABEL_40:
    sub_B170D4();
  klass = v18->klass;
  v20 = v18;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AAFEF8(v18, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_B170D4();
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_20;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_20:
      v28 = sub_AAFEF8(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_27;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_27:
      v32 = sub_AAFEF8(v24, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    v34 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                   this,
                                   v33,
                                   this->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v33 )
      sub_B170D4();
    *(_QWORD *)(v33 + 104) = v34;
    sub_B16F98((BattleServantConfConponent_o *)(v33 + 104), v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_35;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_35:
    v44 = sub_AAFEF8(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v24, *(_QWORD *)(v44 + 8));
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  SkillValueUpApplierPlayerMaster___c_c *v19; // x8
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x20
  Il2CppObject *v22; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x20
  BattleBuffData_ActValueResponse_o *v37; // x19
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  BattleServantData_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  BattleBuffData_CheckIndividualitiesData_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  BattleBuffData_ActValueRequest_o *v52; // x22
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0

  if ( (byte_40F9C75 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_ActValueRequest_TypeInfo, method);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v11);
    sub_B16FFC(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v12);
    byte_40F9C75 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v19 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  if ( (BYTE3(SkillValueUpApplierPlayerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v19 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_BattleServantData__bool__TypeInfo,
                                                                                   v14,
                                                                                   v15,
                                                                                   v16,
                                                                                   v17);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__5_0,
      v22,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
    v23 = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    v23->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__5_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !v30 )
LABEL_51:
    sub_B170D4();
  klass = v30->klass;
  v32 = v30;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AAFEF8(v30, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v32,
          *(_QWORD *)(p_method + 8));
  v37 = 0LL;
  while ( 1 )
  {
    if ( !v36 )
      sub_B170D4();
    v55 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v56 = 0LL;
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_36;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_36:
      v58 = sub_AAFEF8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v36, *(_QWORD *)(v58 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_24;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_24:
      v41 = sub_AAFEF8(v36, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v42 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v36, *(_QWORD *)(v41 + 8));
    v47 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v43,
                                                         v44,
                                                         v45,
                                                         v46);
    BattleBuffData_CheckIndividualitiesData___ctor(v47, v42, 0LL, 0LL, 0LL, 0LL, 0LL);
    v52 = (BattleBuffData_ActValueRequest_o *)sub_B170CC(BattleBuffData_ActValueRequest_TypeInfo, v48, v49, v50, v51);
    BattleBuffData_ActValueRequest___ctor(v52, 113, v47, 0LL, 0LL);
    if ( !v42 )
      sub_B170D4();
    BuffData = BattleServantData__get_BuffData(v42, 0LL);
    if ( !BuffData )
      sub_B170D4();
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v52, 0LL);
    if ( v37 )
      BattleBuffData_ActValueResponse__Merge(v37, ActValueDetail, 0LL);
    else
      v37 = ActValueDetail;
  }
  v59 = *(_QWORD *)v36;
  if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
  {
    v60 = 0LL;
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      ++v60;
      v61 += 4;
      if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
        goto LABEL_43;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_43:
    v62 = sub_AAFEF8(v36, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v36, *(_QWORD *)(v62 + 8));
  if ( v37 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v37, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_40F9C74 & 1) == 0 )
  {
    sub_B16FFC(&FuncParamValueUpInfoDefault_TypeInfo, dataVals);
    byte_40F9C74 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A0B & 1) == 0 )
  {
    sub_B16FFC(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1);
    byte_40F7A0B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SkillValueUpApplierPlayerMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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