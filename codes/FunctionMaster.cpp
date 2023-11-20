void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB306 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__, method);
    byte_40FB306 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    53,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  DataVals_o *v3; // x19
  DataVals_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  v3 = vals;
  if ( (byte_40FB309 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B16FFC(&Method_BasicHelper_IndexValue_DataVals___, vals);
    byte_40FB309 = 1;
  }
  EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(this, v3, method);
  if ( EndSkillValsArrayFromRootValsForDisplay )
    return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)EndSkillValsArrayFromRootValsForDisplay,
                           0,
                           0LL,
                           (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_DataVals___);
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
  int32_t Value2; // w0
  SkillLvEntity_o *Entity; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v17; // x0

  v3 = vals;
  if ( (byte_40FB30A & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_DataVals___, vals);
    sub_B16FFC(&BuffList_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    byte_40FB30A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
      sub_B170D4();
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
      Value2 = DataVals__GetParam(v3, 93, 0, 0LL);
      if ( !v9 )
        goto LABEL_27;
    }
    else
    {
      Param = DataVals__GetValue(v3, 0LL);
      Value2 = DataVals__GetValue2(v3, 0LL);
      if ( !v9 )
        goto LABEL_27;
    }
    Entity = SkillLvMaster__GetEntity(v9, Param, Value2, 0LL);
    if ( !Entity )
      break;
    SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray(v9, Entity, 0LL);
    v17 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)SetTypeDataValArray,
            0,
            0LL,
            (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v17 )
      break;
    v3 = (DataVals_o *)v17;
  }
  while ( v11++ < 0xA );
  return SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *__fastcall FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  int32_t *v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x22
  __int64 v36; // x10
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0

  if ( (byte_40FB307 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, funcIds);
    sub_B16FFC(&FunctionEntity_TypeInfo, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v15);
    sub_B16FFC(&System_Collections_Generic_List_FunctionEntity__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_40FB307 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FunctionEntity__TypeInfo,
                                                                                                  funcIds,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor_49346956(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                       Enumerator,
                       *(_QWORD *)(v33 + 8));
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v34;
    if ( v34 )
    {
      v36 = *(&FunctionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 300LL) >= (unsigned int)v36
        && *(FunctionEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * v36 - 8) == FunctionEntity_TypeInfo )
      {
        if ( !v23 )
          sub_B170D4();
        if ( System_Collections_Generic_List_int___Contains(
               v23,
               v34[4],
               (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          if ( !v18 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            v35,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FunctionEntity__Add__);
          System_Collections_Generic_List_int___Remove(
            v23,
            v35->fields.missionTargetId,
            (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v18;
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
  DataVals_o *v11; // x0
  DataVals_o **v12; // x22
  DataVals_o *v13; // t1
  DataVals_o *v14; // x22
  FunctionEntity_o *Entity; // x0
  int32_t funcIndex; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_40FB308 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B16FFC(
                                 &Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__,
                                 funcIds);
    byte_40FB308 = 1;
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
      v13 = (DataVals_o *)v10[4];
      v12 = (DataVals_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        break;
      DataVals__SetDependDataVals(v11, v6, &funcIndex, 0LL);
      if ( (unsigned int)v9 >= dataValArray->max_length )
        goto LABEL_14;
      if ( !funcIds )
        break;
      if ( (unsigned int)v9 >= funcIds->max_length )
      {
LABEL_14:
        sub_B17100(this, funcIds, dataValArray);
        sub_B170A0();
      }
      v14 = *v12;
      Entity = (FunctionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                                     funcIds->m_Items[v9 + 1],
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v14 )
        break;
      DataVals__SetType_25712276(v14, Entity, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_B170D4();
  }
  return dataValArray;
}