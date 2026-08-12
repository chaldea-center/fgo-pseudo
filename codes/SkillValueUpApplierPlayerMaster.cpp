void SkillValueUpApplierPlayerMaster___ctor(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)data, v5, v6, v7, v8, v9, v10);
}


void SkillValueUpApplierPlayerMaster__ApplyTo(
        SkillValueUpApplierPlayerMaster_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  SkillValueUpApplierPlayerMaster_o *v4; // x19
  struct DataVals_o *dataVals_k__BackingField; // x20
  __int64 v6; // x0
  MissionNaviTransitionBoardItem_o *p_FuncParamValueUpInfo_k__BackingField; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_T__o *ClosedMessage_k__BackingField; // x0
  SkillValueUpApplierPlayerMaster_c *klass; // x8
  SkillValueUpApplierPlayerMaster_o *v16; // x20
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x20
  __int64 v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // [xsp+18h] [xbp-28h]

  v4 = this;
  if ( (byte_59738C8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_DataVals___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_DataVals__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_DataVals__TypeInfo);
    this = (SkillValueUpApplierPlayerMaster_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_59738C8 = 1;
  }
  if ( !funcUnit )
    goto LABEL_42;
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
  p_FuncParamValueUpInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&dataVals_k__BackingField->fields._FuncParamValueUpInfo_k__BackingField;
  sub_2213A04(p_FuncParamValueUpInfo_k__BackingField, v6, v8, v9, v10, v11, v12, v13);
  ClosedMessage_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)p_FuncParamValueUpInfo_k__BackingField[-1].fields._ClosedMessage_k__BackingField;
  if ( !ClosedMessage_k__BackingField )
    return;
  this = (SkillValueUpApplierPlayerMaster_o *)BasicHelper__ExcludeNull_object_(
                                                ClosedMessage_k__BackingField,
                                                (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_DataVals___);
  if ( !this )
LABEL_42:
    sub_2213CDC(this, funcUnit);
  klass = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataVals__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DataVals__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_13;
    }
    v19 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v19 = sub_224BC3C(this, System_Collections_Generic_IEnumerable_DataVals__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(SkillValueUpApplierPlayerMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  v42 = v20;
  while ( 1 )
  {
    if ( !v42 )
      sub_2213CDC(v20, v21);
    v22 = *(_QWORD *)v42;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_21:
      v25 = sub_224BC3C(v42, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v42, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v42;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataVals__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataVals__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_224BC3C(v42, System_Collections_Generic_IEnumerator_DataVals__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v42, *(_QWORD *)(v29 + 8));
    v31 = ((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, __int64, const MethodInfo *))v4->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr)(
            v4,
            v30,
            v4->klass->vtable._6_CreateFuncParamValueUpInfo.method);
    if ( !v30 )
      sub_2213CDC(v31, v31);
    *(_QWORD *)(v30 + 104) = v31;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 104), v31, v32, v33, v34, v35, v36, v37);
  }
  v38 = *(_QWORD *)v42;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_36;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_36:
    v41 = sub_224BC3C(v42, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v42, *(_QWORD *)(v41 + 8));
}


int32_t SkillValueUpApplierPlayerMaster__CalcSkillValueUpRate(
        SkillValueUpApplierPlayerMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v5; // x1
  SkillValueUpApplierPlayerMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v10; // x22
  struct SkillValueUpApplierPlayerMaster___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  BattleData_o *v19; // x8
  BattleData_o *v20; // x19
  int m_CancellationTokenSource; // w8
  int v22; // w24
  BattleBuffData_ActValueResponse_o *v23; // x20
  BattleServantData_o *v24; // x21
  BattleBuffData_CheckIndividualitiesData_o *v25; // x23
  BattleBuffData_ActValueRequest_o *v26; // x22

  if ( (byte_59738CA & 1) == 0 )
  {
    sub_2213A60(&BattleBuffData_ActValueRequest_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__);
    sub_2213A60(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_59738CA = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0);
  v6 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !*(&SkillValueUpApplierPlayerMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SkillValueUpApplierPlayerMaster___c_TypeInfo, v5);
    v6 = SkillValueUpApplierPlayerMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__5_0 = (System_Func_object__bool__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__5_0,
      v10,
      Method_SkillValueUpApplierPlayerMaster___c__CalcSkillValueUpRate_b__5_0__,
      0);
    v11 = SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields;
    v11->__9__5_0 = (struct System_Func_BattleServantData__bool__o *)_9__5_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__5_0, (int32_t)_9__5_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__5_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  data = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                           v18,
                           (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v19 = this->fields.data;
  if ( !v19
    || (v20 = data, BattleData__SetUseOnlyHighestValueBuffInGroup(v19, 113, (BattleServantData_array *)data, 0, 0), !v20) )
  {
LABEL_24:
    sub_2213CDC(data, method);
  }
  m_CancellationTokenSource = (int)v20->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 1 )
    return 0;
  v22 = 0;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)m_CancellationTokenSource )
      sub_2213CE4(data);
    v24 = (BattleServantData_o *)*((_QWORD *)&v20->fields.rootfsm + v22);
    v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_52826232(v25, v24, 0, 0, 0, 0, 0, 1, 0);
    v26 = (BattleBuffData_ActValueRequest_o *)sub_2213CCC(BattleBuffData_ActValueRequest_TypeInfo);
    BattleBuffData_ActValueRequest___ctor(v26, 113, v25, 0, 0);
    if ( !v24 )
      goto LABEL_24;
    data = (BattleData_o *)BattleServantData__get_BuffData(v24, 0);
    if ( !data )
      goto LABEL_24;
    data = (BattleData_o *)BattleBuffData__GetActValueDetail((BattleBuffData_o *)data, v26, 0);
    if ( v23 )
      BattleBuffData_ActValueResponse__Merge(v23, (BattleBuffData_ActValueResponse_o *)data, 0);
    else
      v23 = (BattleBuffData_ActValueResponse_o *)data;
    m_CancellationTokenSource = (int)v20->fields.m_CancellationTokenSource;
    ++v22;
  }
  while ( v22 < m_CancellationTokenSource );
  if ( v23 )
    return BattleBuffData_ActValueResponse__GetClampedValue(v23, 0);
  else
    return 0;
}


FuncParamValueUpInfoBase_o *SkillValueUpApplierPlayerMaster__CreateFuncParamValueUpInfo(
        SkillValueUpApplierPlayerMaster_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int32_t valueUpRate; // w20

  if ( (byte_59738C9 & 1) == 0 )
  {
    sub_2213A60(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_59738C9 = 1;
  }
  valueUpRate = this->fields.valueUpRate;
  if ( !*(&FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo, dataVals);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59738CB & 1) == 0 )
  {
    sub_2213A60(&SkillValueUpApplierPlayerMaster___c_TypeInfo);
    byte_59738CB = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SkillValueUpApplierPlayerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields->__9 = (struct SkillValueUpApplierPlayerMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SkillValueUpApplierPlayerMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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