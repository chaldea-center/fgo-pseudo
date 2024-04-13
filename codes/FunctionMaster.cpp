void __fastcall FunctionMaster___ctor(FunctionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB554 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB554 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    54,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int___ctor__);
}


DataVals_o *__fastcall FunctionMaster__GetDispDataValsFromFunc(
        FunctionMaster_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataVals_o *v4; // x19
  DataVals_array *EndSkillValsArrayFromRootValsForDisplay; // x0

  v4 = vals;
  if ( (byte_42EB557 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B5D5C4(&Method_BasicHelper_IndexValue_DataVals___, (_DWORD)vals, (_DWORD)method, v3);
    byte_42EB557 = 1;
  }
  EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(this, v4, method);
  if ( EndSkillValsArrayFromRootValsForDisplay )
    return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)EndSkillValsArrayFromRootValsForDisplay,
                           0,
                           0LL,
                           (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_DataVals___);
  return v4;
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
  __int64 v3; // x3
  DataVals_o *v4; // x21
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v15; // x1
  SkillLvMaster_o *v16; // x19
  DataVals_array *SetTypeDataValArray; // x20
  unsigned int v18; // w23
  FunctionEntity_o *funcEnt; // x0
  int32_t AddStateBuffTypeFromFunction; // w22
  int32_t Param; // w22
  SkillLvEntity_o *Entity; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v23; // x0

  v4 = vals;
  if ( (byte_42EB558 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_DataVals___, (_DWORD)vals, (_DWORD)method, v3);
    sub_B5D5C4(&BuffList_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    byte_42EB558 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !v4 )
    return 0LL;
  v16 = (SkillLvMaster_o *)Master_WarQuestSelectionMaster;
  SetTypeDataValArray = 0LL;
  v18 = 1;
  do
  {
    funcEnt = v4->fields.funcEnt;
    if ( !funcEnt )
LABEL_27:
      sub_B5D69C(funcEnt, v15);
    AddStateBuffTypeFromFunction = FunctionEntity__GetAddStateBuffTypeFromFunction(funcEnt, v15);
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( !BuffList__IsFunctionBuff(AddStateBuffTypeFromFunction, 0LL) )
      break;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsCounterFunction(AddStateBuffTypeFromFunction, 0LL) )
    {
      Param = DataVals__GetParam(v4, 92, 0, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetParam(v4, 93, 0, 0LL);
      if ( !v16 )
        goto LABEL_27;
    }
    else
    {
      Param = DataVals__GetValue(v4, 0LL);
      funcEnt = (FunctionEntity_o *)DataVals__GetValue2(v4, 0LL);
      if ( !v16 )
        goto LABEL_27;
    }
    Entity = SkillLvMaster__GetEntity(v16, Param, (int32_t)funcEnt, 0LL);
    if ( !Entity )
      break;
    SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray(v16, Entity, 0LL);
    v23 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)SetTypeDataValArray,
            0,
            0LL,
            (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_DataVals___);
    if ( !v23 )
      break;
    v4 = (DataVals_o *)v23;
  }
  while ( v18++ < 0xA );
  return SetTypeDataValArray;
}


System_Collections_Generic_List_FunctionEntity__o *__fastcall FunctionMaster__GetFunctionEntitiesByIds(
        FunctionMaster_o *this,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  System_Collections_Generic_List_int__o *v40; // x21
  __int64 v41; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v50; // x3
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  int32_t *v55; // x0
  __int64 v56; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x22
  __int64 v58; // x10
  _BOOL8 v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0

  if ( (byte_42EB555 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)funcIds,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&FunctionEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FunctionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FunctionEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_FunctionEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v36, v37, v38);
    byte_42EB555 = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FunctionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FunctionEntity___ctor__);
  v40 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)funcIds,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v41);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v43);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v47;
        p_offset += 4;
        if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v51 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v52 = 0LL;
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v53 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v54 = (__int64)&v51->vtable[*v53].method;
    }
    else
    {
LABEL_16:
      v54 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v50);
    }
    v55 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                       Enumerator,
                       *(_QWORD *)(v54 + 8));
    v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)v55;
    if ( v55 )
    {
      v58 = *(&FunctionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 300LL) >= (unsigned int)v58
        && *(FunctionEntity_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * v58 - 8) == FunctionEntity_TypeInfo )
      {
        if ( !v40 )
          sub_B5D69C(v55, v56);
        v59 = System_Collections_Generic_List_int___Contains(
                v40,
                v55[4],
                (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v59 )
        {
          if ( !v39 )
            sub_B5D69C(v59, v60);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            v57,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FunctionEntity__Add__);
          System_Collections_Generic_List_int___Remove(
            v40,
            v57->fields.missionTargetId,
            (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  v61 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_29:
    v64 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v50);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(Enumerator, *(_QWORD *)(v64 + 8));
  return (System_Collections_Generic_List_FunctionEntity__o *)v39;
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
  if ( (byte_42EB556 & 1) == 0 )
  {
    this = (FunctionMaster_o *)sub_B5D5C4(
                                 &Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__,
                                 (_DWORD)funcIds,
                                 (_DWORD)dataValArray,
                                 method);
    byte_42EB556 = 1;
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
        v15 = sub_B5D6C8(this);
        sub_B5D668(v15, 0LL);
      }
      v13 = *v11;
      this = (FunctionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                                   funcIds->m_Items[v9 + 1],
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v13 )
        break;
      DataVals__SetType_24517908(v13, (FunctionEntity_o *)this, funcIndex++, 0LL);
      max_length = dataValArray->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return dataValArray;
    }
LABEL_15:
    sub_B5D69C(this, funcIds);
  }
  return dataValArray;
}