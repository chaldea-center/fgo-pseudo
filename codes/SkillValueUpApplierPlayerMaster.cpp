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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SkillValueUpApplierPlayerMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct DataVals_o *dataVals_k__BackingField; // x19
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_T__o *dependDataValsList; // x0
  __int64 v27; // x3
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v29; // x19
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  __int64 v35; // x19
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x3
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x21
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0

  v5 = this;
  if ( (byte_42E78E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_DataVals___, (_DWORD)funcUnit, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo, v12, v13, v14);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    byte_42E78E4 = 1;
  }
  if ( !funcUnit )
    goto LABEL_40;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    return;
  if ( !dataVals_k__BackingField->fields.funcEnt )
    return;
  if ( !v5->fields.valueUpRate )
    return;
  v19 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, struct DataVals_o *, Il2CppMethodPointer))v5->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                 v5,
                                 dataVals_k__BackingField,
                                 v5->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
  dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField = (struct FuncParamValueUpInfoBase_o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  dependDataValsList = (System_Collections_Generic_IEnumerable_T__o *)dataVals_k__BackingField->fields.dependDataValsList;
  if ( !dependDataValsList )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                                                dependDataValsList,
                                                (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_40:
    sub_B5D69C(this, funcUnit);
  klass = this->klass;
  v29 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v32 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0LL, v27);
  }
  v35 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  if ( !v35 )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_20;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_20:
      v39 = sub_AF54C0(v35, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_27;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_27:
      v44 = sub_AF54C0(v35, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0LL, v40);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v35, *(_QWORD *)(v44 + 8));
    v46 = (System_Int32_array **)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._6_CreateFuncParamValueUpInfo.method)(
                                   v5,
                                   v45,
                                   v5->klass->vtable._7_CalcSkillValueUpRate.methodPtr);
    if ( !v45 )
      sub_B5D69C(v46, v46);
    *(_QWORD *)(v45 + 104) = v46;
    sub_B5D560((BattleServantConfConponent_o *)(v45 + 104), v46, v47, v48, v49, v50, v51, v52);
  }
  v53 = *(_QWORD *)v35;
  if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
  {
    v54 = 0LL;
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
        goto LABEL_35;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_35:
    v56 = sub_AF54C0(v35, System_IDisposable_TypeInfo, 0LL, v40);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v35, *(_QWORD *)(v56 + 8));
}


int32_t __fastcall SkillValueUpApplierPlayerMaster__CalcSkillValueUpRate(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  SkillValueUpApplierPlayerMaster___c_c *v37; // x8
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x20
  Il2CppObject *v40; // x21
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x3
  BattleData_c *klass; // x8
  BattleData_o *v50; // x19
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 v53; // x0
  BattleBuffData_ActValueResponse_o *ActValueDetail; // x0
  BattleBuffData_ActValueResponse_o *v55; // x1
  __int64 v56; // x3
  BattleBuffData_ActValueResponse_o *v57; // x20
  BattleBuffData_ActValueResponse_o *v58; // x19
  BattleBuffData_ActValueResponse_c *v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  BattleServantData_o *v63; // x21
  BattleBuffData_CheckIndividualitiesData_o *v64; // x23
  BattleBuffData_ActValueRequest_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v69; // x1
  BattleBuffData_ActValueResponse_c *v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x3
  BattleBuffData_ActValueResponse_c *v75; // x8
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0

  if ( (byte_42E78E6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_ActValueRequest_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__, v29, v30, v31);
    sub_B5D5C4(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v32, v33, v34);
    byte_42E78E6 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v37 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  if ( (BYTE3(SkillValueUpApplierPlayerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo);
    v37 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__5_0,
      v40,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
    v41 = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    v41->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v41->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           FieldPlayerServantList,
                           (System_Func_TSource__bool__o *)_9__5_0,
                           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  if ( !data )
LABEL_51:
    sub_B5D69C(data, method);
  klass = data->klass;
  v50 = data;
  if ( *(_WORD *)&data->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v51;
      p_offset += 4;
      if ( v51 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v53 = sub_AF54C0(data, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v48);
  }
  ActValueDetail = (BattleBuffData_ActValueResponse_o *)(*(__int64 (__fastcall **)(BattleData_o *, _QWORD))v53)(
                                                          v50,
                                                          *(_QWORD *)(v53 + 8));
  v57 = ActValueDetail;
  v58 = 0LL;
  while ( 1 )
  {
    if ( !v57 )
      sub_B5D69C(ActValueDetail, v55);
    v70 = v57->klass;
    if ( *(_WORD *)&v57->klass->_2.bitflags1 )
    {
      v71 = 0LL;
      v72 = &v70->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v72 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v71;
        v72 += 4;
        if ( v71 >= *(unsigned __int16 *)&v57->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v73 = (__int64)(&v70->vtable._0_Equals.method + 2 * *v72);
    }
    else
    {
LABEL_36:
      v73 = sub_AF54C0(v57, System_Collections_IEnumerator_TypeInfo, 0LL, v56);
    }
    if ( ((*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v73)(v57, *(_QWORD *)(v73 + 8)) & 1) == 0 )
      break;
    v59 = v57->klass;
    if ( *(_WORD *)&v57->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v61 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v60;
        v61 += 4;
        if ( v60 >= *(unsigned __int16 *)&v57->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v62 = (__int64)(&v59->vtable._0_Equals.method + 2 * *v61);
    }
    else
    {
LABEL_24:
      v62 = sub_AF54C0(v57, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v74);
    }
    v63 = (BattleServantData_o *)(*(__int64 (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v62)(
                                   v57,
                                   *(_QWORD *)(v62 + 8));
    v64 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v64, v63, 0LL, 0LL, 0LL, 0LL, 0LL);
    v65 = (BattleBuffData_ActValueRequest_o *)sub_B5D694(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v65, 113, v64, 0LL, 0LL);
    if ( !v63 )
      sub_B5D69C(v66, v67);
    BuffData = BattleServantData__get_BuffData(v63, 0LL);
    if ( !BuffData )
      sub_B5D69C(0LL, v69);
    ActValueDetail = BattleBuffData__GetActValueDetail(BuffData, v65, 0LL);
    v55 = ActValueDetail;
    if ( v58 )
      BattleBuffData_ActValueResponse__Merge(v58, ActValueDetail, 0LL);
    else
      v58 = ActValueDetail;
  }
  v75 = v57->klass;
  if ( *(_WORD *)&v57->klass->_2.bitflags1 )
  {
    v76 = 0LL;
    v77 = &v75->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      ++v76;
      v77 += 4;
      if ( v76 >= *(unsigned __int16 *)&v57->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v78 = (__int64)(&v75->vtable._0_Equals.method + 2 * *v77);
  }
  else
  {
LABEL_43:
    v78 = sub_AF54C0(v57, System_IDisposable_TypeInfo, 0LL, v74);
  }
  (*(void (__fastcall **)(BattleBuffData_ActValueResponse_o *, _QWORD))v78)(v57, *(_QWORD *)(v78 + 8));
  if ( v58 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v58, 0LL);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *__fastcall SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t valueUpRate; // w20

  if ( (byte_42E78E5 & 1) == 0 )
  {
    sub_B5D5C4(&FuncParamValueUpInfoDefault_TypeInfo, (_DWORD)dataVals, (_DWORD)method, v3);
    byte_42E78E5 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DE9 & 1) == 0 )
  {
    sub_B5D5C4(&SkillValueUpApplierPlayerMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5DE9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v4;
  sub_B5D560(static_fields);
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