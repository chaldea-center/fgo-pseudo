void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A4FB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__, method);
    byte_418A4FB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    53,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  DataVals_o *v3; // x19
  DataVals_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  v3 = vals;
  if ( (byte_418A4FE & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B2C35C(&Method_BasicHelper_IndexValue_DataVals___, vals);
    byte_418A4FE = 1;
  }
  EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(this, v3, method);
  if ( EndSkillValsArrayFromRootValsForDisplay )
    return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)EndSkillValsArrayFromRootValsForDisplay,
                           0,
                           0LL,
                           (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_DataVals___);
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FunctionMaster__GetDispValFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        int32_t valsKey,
        const MethodInfo *method)
{
  DataVals_o *DispDataValsFromFunc; // x0

  DispDataValsFromFunc = FunctionMaster__GetDispDataValsFromFunc(this, vals, *(const MethodInfo **)&valsKey);
  if ( DispDataValsFromFunc )
    LODWORD(DispDataValsFromFunc) = DataVals__GetParam(DispDataValsFromFunc, valsKey, 0, 0LL);
  return (int)DispDataValsFromFunc;
}


DataVals_array *__fastcall FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  DataVals_o *v3; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x1
  SkillLvMaster_o *v9; // x19
  DataVals_array *SetTypeDataValArray; // x20
  unsigned int v11; // w23
  FunctionEntity_o *funcEnt; // x0
  int32_t AddStateBuffTypeFromFunction; // w22
  int32_t Param; // w22
  SkillLvEntity_o *Entity; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v16; // x0

  v3 = vals;
  if ( (byte_418A4FF & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_DataVals___, vals);
    sub_B2C35C(&BuffList_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    byte_418A4FF = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v3 )
    return 0LL;
  v9 = (SkillLvMaster_o *)Master_WarQuestSelectionMaster;
  SetTypeDataValArray = 0LL;
  v11 = 1;
  do
  {
    funcEnt = v3->fields.funcEnt;
    if ( !funcEnt )
LABEL_27:
      sub_B2C434(funcEnt, v8);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v8);
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0LL) )
      break;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0LL) )
    {
      Param = DataVals__GetParam(v3, 92, 0, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(v3, 93, 0, 0LL);
      if ( !v9 )
        goto LABEL_27;
    }
    else
    {
      Param = DataVals__GetValue(v3, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(v3, 0LL);
      if ( !v9 )
        goto LABEL_27;
    }
    Entity = SkillLvMaster__GetEntity(v9, Param, (int32_t)funcEnt, 0LL);
    if ( !Entity )
      break;
    SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray(v9, Entity, 0LL);
    v16 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)SetTypeDataValArray,
            0,
            0LL,
            (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v16 )
      break;
    v3 = (DataVals_o *)v16;
  }
  while ( v11++ < 0xA );
  return SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *__fastcall FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  System_Collections_Generic_List_int__o *v17; // x21
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int32_t *v32; // x0
  __int64 v33; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x22
  __int64 v35; // x10
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_418A4FC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, funcIds);
    sub_B2C35C(&FunctionEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v13);
    sub_B2C35C(&System_Collections_Generic_List_FunctionEntity__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v15);
    byte_418A4FC = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v32 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                       Enumerator,
                       *(_QWORD *)(v31 + 8));
    v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)v32;
    if ( v32 )
    {
      v35 = *(&FunctionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) >= (unsigned int)v35
        && *(FunctionEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v35 - 8) == FunctionEntity_TypeInfo )
      {
        if ( !v17 )
          sub_B2C434(v32, v33);
        v36 = System_Collections_Generic_List_int___Contains(
                v17,
                v32[4],
                (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v36 )
        {
          if ( !v16 )
            sub_B2C434(v36, v37);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            v34,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FunctionEntity__Add__);
          System_Collections_Generic_List_int___Remove(
            v17,
            v34->fields.missionTargetId,
            (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_29:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v16;
}


DataVals_array *__fastcall FunctionMaster__GetSetTypeDataValArray(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        DataVals_array *dataValArray,
        const MethodInfo *method)
{
  FunctionMaster_o *v6; // x21
  signed int max_length; // w9
  signed int v8; // w8
  __int64 v9; // x24
  Il2CppClass **v10; // x22
  DataVals_o **v11; // x22
  FunctionMaster_o *v12; // t1
  DataVals_o *v13; // x22
  __int64 v15; // x0
  int32_t funcIndex; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_418A4FD & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B2C35C(
                                 &Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__,
                                 funcIds);
    byte_418A4FD = 1;
  }
  funcIndex = 0;
  if ( !dataValArray )
    goto LABEL_15;
  max_length = dataValArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        goto LABEL_14;
      v9 = v8;
      v10 = &dataValArray->obj.klass + v8;
      v12 = (FunctionMaster_o *)v10[4];
      v11 = (DataVals_o **)(v10 + 4);
      this = v12;
      if ( !v12 )
        break;
      DataVals__SetDependDataVals((DataVals_o *)this, v6, &funcIndex, 0LL);
      if ( (unsigned int)v9 >= dataValArray->max_length )
        goto LABEL_14;
      if ( !funcIds )
        break;
      if ( (unsigned int)v9 >= funcIds->max_length )
      {
LABEL_14:
        v15 = sub_B2C460(this);
        sub_B2C400(v15, 0LL);
      }
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                                   funcIds->m_Items[v9 + 1],
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_27254588(v13, (FunctionEntity_o *)this, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_B2C434(this, funcIds);
  }
  return dataValArray;
}