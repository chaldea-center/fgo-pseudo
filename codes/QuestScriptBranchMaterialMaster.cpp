void __fastcall QuestScriptBranchMaterialMaster___ctor(
        QuestScriptBranchMaterialMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AE49A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
    byte_42AE49A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    418,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
}


int32_t __fastcall QuestScriptBranchMaterialMaster__GetBaseQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  const MethodInfo *v6; // x2
  int32_t result; // w0
  System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *ListByQuestId; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x6
  int32_t v13; // w22
  int v14; // w20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+0h] [xbp-40h] BYREF
  __int64 playPhase; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42AE49D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    byte_42AE49D = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
    ListByQuestId = QuestScriptBranchMaterialMaster__GetListByQuestId(this, questId, v6);
    if ( !ListByQuestId )
      sub_B52A5C(0LL, v9);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByQuestId,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
      if ( !v10 )
        break;
      if ( !v15.fields.current )
        sub_B52A5C(v10, v11);
      QuestScriptBranchMaterialMaster__GetPlayQuest(
        this,
        questId,
        HIDWORD(v15.fields.current[1].klass),
        (int32_t)v15.fields.current[1].monitor,
        (int32_t *)&playPhase + 1,
        (int32_t *)&playPhase,
        v12);
      v13 = HIDWORD(playPhase);
      if ( HIDWORD(playPhase) != questId )
      {
        v14 = 9;
        goto LABEL_11;
      }
    }
    v13 = 0;
    v14 = 7;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    if ( v14 == 9 )
      return v13;
    else
      return questId;
  }
  return result;
}


System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *__fastcall QuestScriptBranchMaterialMaster__GetListByQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42AE49C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
    sub_B52984(&QuestScriptBranchMaterialEntity_TypeInfo);
    byte_42AE49C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
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
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_32;
    v22 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (QuestScriptBranchMaterialEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_32:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.missionTargetId == questId )
    {
      if ( !v5 )
        sub_B52A5C(v20, QuestScriptBranchMaterialEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *)v5;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x1
  _DWORD *v27; // x25
  __int64 v28; // x9
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x0

  if ( (byte_42AE49E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestScriptBranchMaterialEntity_TypeInfo);
    byte_42AE49E = 1;
  }
  *playQuestId = 0;
  *playPhase = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      goto LABEL_41;
    v28 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v28
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v28 - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v25 = (_DWORD *)sub_B52D50(v25);
LABEL_41:
      sub_B52A5C(v25, v26);
    }
    if ( v25[4] == questId && v25[5] == phase && v25[6] == playType )
      goto LABEL_26;
  }
  v27 = 0LL;
LABEL_26:
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_30:
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v32 + 8));
  if ( !v27 )
    goto LABEL_38;
  v33 = *((_QWORD *)v27 + 4);
  if ( !v33 )
    goto LABEL_42;
  if ( *(_DWORD *)(v33 + 24) != 2 )
  {
LABEL_38:
    *playQuestId = questId;
    goto LABEL_39;
  }
  *playQuestId = *(_DWORD *)(v33 + 32);
  v34 = *((_QWORD *)v27 + 4);
  if ( !v34 )
LABEL_42:
    sub_B52A5C(list, *(_QWORD *)&questId);
  if ( *(_DWORD *)(v34 + 24) <= 1u )
  {
    v35 = sub_B52A88(list);
    sub_B52A28(v35, 0LL);
  }
  phase = *(_DWORD *)(v34 + 36);
LABEL_39:
  *playPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptBranchMaterialMaster__IsBranchQuestMaterialOpen(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x9
  bool v20; // w20
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-40h]

  if ( (byte_42AE49B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestScriptBranchMaterialEntity_TypeInfo);
    byte_42AE49B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_34;
    v19 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v19
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v19 - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v17 = (_DWORD *)sub_B52D50(v17);
LABEL_34:
      sub_B52A5C(v17, v18);
    }
    if ( v17[4] == questId )
    {
      v26 = 59;
      v20 = 1;
      goto LABEL_24;
    }
  }
  v20 = 0;
  v26 = 57;
LABEL_24:
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 57 )
    return 0;
  return v20;
}