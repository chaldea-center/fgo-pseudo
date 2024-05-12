void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D920 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
    byte_438D920 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    54,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  DataVals_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  if ( (byte_438D923 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B775C4(&Method_BasicHelper_IndexValue_DataVals___);
    byte_438D923 = 1;
  }
  EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                              this,
                                              vals,
                                              method);
  if ( EndSkillValsArrayFromRootValsForDisplay )
    return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)EndSkillValsArrayFromRootValsForDisplay,
                           0,
                           0LL,
                           (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_DataVals___);
  return vals;
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v5; // x1
  SkillLvMaster_o *v6; // x19
  DataVals_array *SetTypeDataValArray; // x20
  unsigned int v8; // w23
  FunctionEntity_o *funcEnt; // x0
  int32_t AddStateBuffTypeFromFunction; // w22
  int32_t Param; // w22
  SkillLvEntity_o *Entity; // x1
  DataVals_o *v13; // x0

  if ( (byte_438D924 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_DataVals___);
    sub_B775C4(&BuffList_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438D924 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !vals )
    return 0LL;
  v6 = (SkillLvMaster_o *)Master_WarQuestSelectionMaster;
  SetTypeDataValArray = 0LL;
  v8 = 1;
  do
  {
    funcEnt = vals->fields.funcEnt;
    if ( !funcEnt )
LABEL_27:
      sub_B7769C(funcEnt, v5);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v5);
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0LL) )
      break;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0LL) )
    {
      Param = DataVals__GetParam(vals, 92, 0, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(vals, 93, 0, 0LL);
      if ( !v6 )
        goto LABEL_27;
    }
    else
    {
      Param = DataVals__GetValue(vals, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(vals, 0LL);
      if ( !v6 )
        goto LABEL_27;
    }
    Entity = SkillLvMaster__GetEntity(v6, Param, (int32_t)funcEnt, 0LL);
    if ( !Entity )
      break;
    SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray(v6, Entity, 0LL);
    v13 = (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)SetTypeDataValArray,
                          0,
                          0LL,
                          (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v13 )
      break;
    vals = v13;
  }
  while ( v8++ < 0xA );
  return SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *__fastcall FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_Generic_List_int__o *v6; // x21
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  int32_t *v19; // x0
  __int64 v20; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x22
  __int64 v22; // x10
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_438D921 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&FunctionEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&System_Collections_Generic_List_FunctionEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438D921 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51270276(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v7);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                       Enumerator,
                       *(_QWORD *)(v18 + 8));
    v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v19;
    if ( v19 )
    {
      v22 = *(&FunctionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) >= (unsigned int)v22
        && *(FunctionEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v22 - 8) == FunctionEntity_TypeInfo )
      {
        if ( !v6 )
          sub_B7769C(v19, v20);
        v23 = System_Collections_Generic_List_int___Contains(
                v6,
                v19[4],
                (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v23 )
        {
          if ( !v5 )
            sub_B7769C(v23, v24);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v21,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_FunctionEntity__Add__);
          System_Collections_Generic_List_int___Remove(
            v6,
            v21->fields.missionTargetId,
            (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v5;
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
  if ( (byte_438D922 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    byte_438D922 = 1;
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
        v15 = sub_B776C8(this);
        sub_B77668(v15, 0LL);
      }
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                                   funcIds->m_Items[v9 + 1],
                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_30830384(v13, (FunctionEntity_o *)this, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_B7769C(this, funcIds);
  }
  return dataValArray;
}