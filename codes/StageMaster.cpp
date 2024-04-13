void __fastcall StageMaster___ctor(StageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E92D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_StageMaster__StageEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E92D1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    16,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall StageMaster__GetEntity(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x1

  if ( (byte_42E92CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__,
      questId,
      questPhase,
      *(_QWORD *)&wave);
    sub_B5D5C4(&StageEntity_TypeInfo, v9, v10, v11);
    byte_42E92CF = 1;
  }
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (StageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                            PK,
                            (const MethodInfo_23FB260 *)Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
}


System_Collections_Generic_List_StageEntity__o *__fastcall StageMaster__GetEntityListIncludeRemap(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x19
  __int64 v47; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x3
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x0
  __int64 v62; // x10
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  unsigned __int64 v64; // x10
  int32_t *v65; // x11
  __int64 v66; // x0
  _BOOL8 v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x5
  _BOOL8 v70; // x0
  __int64 v71; // x1
  int v73[2]; // [xsp+8h] [xbp-78h]
  int v74; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+18h] [xbp-68h] BYREF
  StageEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_42E92D2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      questPhase,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ReprintStageMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__get_Current__, v19, v20, v21);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StageEntity__Add__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StageEntity___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Collections_Generic_List_StageEntity__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StageEntity_TypeInfo, v43, v44, v45);
    byte_42E92D2 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  entity = 0LL;
  v74 = 0;
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v49);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        p_offset += 4;
        if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v57 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v59 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v60 = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_16:
      v60 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v56);
    }
    v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v60 + 8));
    if ( v61 )
    {
      v62 = *(&StageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v61->klass->_2.bitflags2 + 1) >= (unsigned int)v62
        && (StageEntity_c *)v61->klass->_2.typeHierarchy[v62 - 1] == StageEntity_TypeInfo
        && v61->fields.missionTargetId == questId
        && v61->fields.missionConditionDetailId == questPhase )
      {
        if ( !v46 )
          sub_B5D69C(v61, v61);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v46,
          v61,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StageEntity__Add__);
      }
    }
  }
  v73[0] = 80;
  v74 = 1;
  v63 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v64 = 0LL;
    v65 = &v63->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      ++v64;
      v65 += 4;
      if ( v64 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v66 = (__int64)&v63->vtable[*v65].method;
  }
  else
  {
LABEL_29:
    v66 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v56);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(Enumerator, *(_QWORD *)(v66 + 8));
  v74 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ReprintStageMaster___);
  if ( !list
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ReprintStageMaster__GetEntityList(
                                                                                             (ReprintStageMaster_o *)list,
                                                                                             questId,
                                                                                             questPhase,
                                                                                             0LL)) == 0LL )
  {
LABEL_48:
    sub_B5D69C(list, v47);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)list,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v75,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    if ( !v67 )
      break;
    if ( !v75.fields.current )
      sub_B5D69C(v67, v68);
    v70 = StageMaster__TryGetEntity(
            this,
            &entity,
            HIDWORD(v75.fields.current[1].monitor),
            (int32_t)v75.fields.current[2].klass,
            HIDWORD(v75.fields.current[2].klass),
            v69);
    if ( v70 )
    {
      if ( !v46 )
        sub_B5D69C(v70, v71);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v46,
        (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StageEntity__Add__);
    }
  }
  v73[0] = 173;
  ++v74;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
  if ( v74 && v73[v74 - 1] == 173 )
    --v74;
  return (System_Collections_Generic_List_StageEntity__o *)v46;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageMaster__GetWaveCount(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v23; // w19
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  _DWORD *v28; // x0
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0

  if ( (byte_42E92D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      questPhase,
      method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StageEntity_TypeInfo, v16, v17, v18);
    byte_42E92D3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  v23 = 1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_10:
      v27 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v28 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                      Enumerator,
                      *(_QWORD *)(v27 + 8));
    if ( v28 )
    {
      v29 = *(&StageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) >= (unsigned int)v29
        && *(StageEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v29 - 8) == StageEntity_TypeInfo
        && v28[4] == questId
        && v28[5] == questPhase
        && v28[8] > v23 )
      {
        v23 = v28[8];
      }
    }
  }
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_30:
    v38 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v23;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall StageMaster__TryGetEntity(
        StageMaster_o *this,
        StageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *PK; // x2

  if ( (byte_42E92D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&questPhase);
    sub_B5D5C4(&StageEntity_TypeInfo, v11, v12, v13);
    byte_42E92D0 = 1;
  }
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
}