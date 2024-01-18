void __fastcall QuestScriptBranchMaterialMaster___ctor(
        QuestScriptBranchMaterialMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186080 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__,
      method);
    byte_4186080 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    417,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestScriptBranchMaterialMaster__GetBaseQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t result; // w0
  System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *ListByQuestId; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  int32_t v16; // w22
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+0h] [xbp-40h] BYREF
  __int64 playPhase; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186083 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__,
      *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__, v8);
    byte_4186083 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  playPhase = 0LL;
  QuestScriptBranchMaterialMaster__GetPlayQuest(
    this,
    questId,
    1,
    0,
    (int32_t *)&playPhase + 1,
    (int32_t *)&playPhase,
    v3);
  result = HIDWORD(playPhase);
  if ( HIDWORD(playPhase) == questId )
  {
    ListByQuestId = QuestScriptBranchMaterialMaster__GetListByQuestId(this, questId, v9);
    if ( !ListByQuestId )
      sub_B2C434(0LL, v12);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByQuestId,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
      if ( !v13 )
        break;
      if ( !v18.fields.current )
        sub_B2C434(v13, v14);
      QuestScriptBranchMaterialMaster__GetPlayQuest(
        this,
        questId,
        HIDWORD(v18.fields.current[1].klass),
        (int32_t)v18.fields.current[1].monitor,
        (int32_t *)&playPhase + 1,
        (int32_t *)&playPhase,
        v15);
      v16 = HIDWORD(playPhase);
      if ( HIDWORD(playPhase) != questId )
      {
        v17 = 9;
        goto LABEL_11;
      }
    }
    v16 = 0;
    v17 = 7;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    if ( v17 == 9 )
      return v16;
    else
      return questId;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *__fastcall QuestScriptBranchMaterialMaster__GetListByQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_4186082 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo, v10);
    sub_B2C35C(&QuestScriptBranchMaterialEntity_TypeInfo, v11);
    byte_4186082 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_32;
    v29 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (QuestScriptBranchMaterialEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v27);
LABEL_32:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.missionTargetId == questId )
    {
      if ( !v12 )
        sub_B2C434(v27, QuestScriptBranchMaterialEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestScriptBranchMaterialMaster__GetPlayQuest(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t playType,
        int32_t *playQuestId,
        int32_t *playPhase,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  _DWORD *v29; // x0
  __int64 v30; // x1
  _DWORD *v31; // x25
  __int64 v32; // x9
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x0

  if ( (byte_4186084 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&QuestScriptBranchMaterialEntity_TypeInfo, v16);
    byte_4186084 = 1;
  }
  *playQuestId = 0;
  *playPhase = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v29 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                      Enumerator,
                      *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      goto LABEL_41;
    v32 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) < (unsigned int)v32
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * v32 - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v29 = (_DWORD *)sub_B2C728(v29);
LABEL_41:
      sub_B2C434(v29, v30);
    }
    if ( v29[4] == questId && v29[5] == phase && v29[6] == playType )
      goto LABEL_26;
  }
  v31 = 0LL;
LABEL_26:
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_30:
    v36 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v36 + 8));
  if ( !v31 )
    goto LABEL_38;
  v37 = *((_QWORD *)v31 + 4);
  if ( !v37 )
    goto LABEL_42;
  if ( *(_DWORD *)(v37 + 24) != 2 )
  {
LABEL_38:
    *playQuestId = questId;
    goto LABEL_39;
  }
  *playQuestId = *(_DWORD *)(v37 + 32);
  v38 = *((_QWORD *)v31 + 4);
  if ( !v38 )
LABEL_42:
    sub_B2C434(list, *(_QWORD *)&questId);
  if ( *(_DWORD *)(v38 + 24) <= 1u )
  {
    v39 = sub_B2C460(list);
    sub_B2C400(v39, 0LL);
  }
  phase = *(_DWORD *)(v38 + 36);
LABEL_39:
  *playPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptBranchMaterialMaster__IsBranchQuestMaterialOpen(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-40h]

  if ( (byte_4186081 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&QuestScriptBranchMaterialEntity_TypeInfo, v8);
    byte_4186081 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_34;
    v23 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v21 = (_DWORD *)sub_B2C728(v21);
LABEL_34:
      sub_B2C434(v21, v22);
    }
    if ( v21[4] == questId )
    {
      v30 = 59;
      v24 = 1;
      goto LABEL_24;
    }
  }
  v24 = 0;
  v30 = 57;
LABEL_24:
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
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_28:
    v28 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 57 )
    return 0;
  return v24;
}