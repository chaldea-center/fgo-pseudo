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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
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
  __int64 v18; // x3
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v20; // x19
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  __int64 v26; // x19
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x21
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0

  v4 = this;
  if ( (byte_4187641 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_DataVals___, funcUnit);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v7);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4187641 = 1;
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
  sub_B2C2F8(
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
                                                (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_B2C434(this, funcUnit);
  klass = this->klass;
  v20 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v23 = sub_AC5258(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL, v18);
  }
  v26 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v26 )
    sub_B2C434(0LL, v24);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_20;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_20:
      v30 = sub_AC5258(v26, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_27;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_27:
      v35 = sub_AC5258(v26, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL, v31);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v26, *(_QWORD *)(v35 + 8));
    v37 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                   v4,
                                   v36,
                                   v4->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v36 )
      sub_B2C434(v37, v37);
    *(_QWORD *)(v36 + 104) = v37;
    sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 104), v37, v38, v39, v40, v41, v42, v43);
  }
  v44 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v45 = 0LL;
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_35;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_35:
    v47 = sub_AC5258(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v26, *(_QWORD *)(v47 + 8));
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
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  SkillValueUpApplierPlayerMaster___c_c *v15; // x8
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x20
  Il2CppObject *v18; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x3
  BattleData_c *klass; // x8
  BattleData_o *v28; // x19
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v33; // x1
  __int64 v34; // x3
  BattleBuffData_ActValueResponse_o *v35; // x20
  BattleBuffData_ActValueResponse_o *v36; // x19
  BattleBuffData_ActValueResponse_c *v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  BattleServantData_o *v41; // x21
  BattleBuffData_CheckIndividualitiesData_o *v42; // x23
  BattleBuffData_ActValueRequest_o *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v47; // x1
  BattleBuffData_ActValueResponse_c *v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x3
  BattleBuffData_ActValueResponse_c *v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0

  if ( (byte_4187643 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_ActValueRequest_TypeInfo, method);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v11);
    sub_B2C35C(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v12);
    byte_4187643 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v15 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  if ( (BYTE3(SkillValueUpApplierPlayerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v15 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__5_0,
      v18,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
    v19 = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    v19->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           FieldPlayerServantList,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_51:
    sub_B2C434(data, method);
  klass = data->klass;
  v28 = data;
  if ( *(_WORD *)&data->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v31 = sub_AC5258(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v26);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v31)(
                                                          v28,
                                                          *(_QWORD *)(v31 + 8));
  v35 = ActValueDetail;
  v36 = 0LL;
  while ( 1 )
  {
    if ( !v35 )
      sub_B2C434(ActValueDetail, v33);
    v48 = v35->klass;
    if ( *(_WORD *)&v35->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
    }
    else
    {
LABEL_36:
      v51 = sub_AC5258(v35, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v51)(v35, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v37 = v35->klass;
    if ( *(_WORD *)&v35->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v40 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v39);
    }
    else
    {
LABEL_24:
      v40 = sub_AC5258(v35, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v52);
    }
    v41 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v40)(
                                   v35,
                                   *(_QWORD *)(v40 + 8));
    v42 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v42, v41, 0LL, 0LL, 0LL, 0LL, 0LL);
    v43 = (BattleBuffData_ActValueRequest_o *)sub_B2C42C(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v43, 113, v42, 0LL, 0LL);
    if ( !v41 )
      sub_B2C434(v44, v45);
    BuffData = BattleServantData__get_BuffData(v41, 0LL);
    if ( !BuffData )
      sub_B2C434(0LL, v47);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v43, 0LL);
    v33 = ActValueDetail;
    if ( v36 )
      BattleBuffData_ActValueResponse__Merge(v36, ActValueDetail, 0LL);
    else
      v36 = ActValueDetail;
  }
  v53 = v35->klass;
  if ( *(_WORD *)&v35->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v56 = (__int64)(&v53->vtable._0_Equals.method + 2 * *v55);
  }
  else
  {
LABEL_43:
    v56 = sub_AC5258(v35, System_IDisposable_TypeInfo, 0LL, v52);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v56)(v35, *(_QWORD *)(v56 + 8));
  if ( v36 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v36, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_4187642 & 1) == 0 )
  {
    sub_B2C35C(&FuncParamValueUpInfoDefault_TypeInfo, dataVals);
    byte_4187642 = 1;
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
  Il2CppObject *v2; // x19
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418546C & 1) == 0 )
  {
    sub_B2C35C(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1);
    byte_418546C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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