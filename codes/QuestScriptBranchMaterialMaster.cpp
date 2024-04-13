void __fastcall QuestScriptBranchMaterialMaster___ctor(
        QuestScriptBranchMaterialMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F0B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6F0B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    418,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
}


int32_t __fastcall QuestScriptBranchMaterialMaster__GetBaseQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x6
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  const MethodInfo *v16; // x2
  int32_t result; // w0
  System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *ListByQuestId; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x6
  int32_t v23; // w22
  int v24; // w20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+0h] [xbp-40h] BYREF
  __int64 playPhase; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E6F0E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__, v13, v14, v15);
    byte_42E6F0E = 1;
  }
  memset(&v25, 0, sizeof(v25));
  playPhase = 0LL;
  QuestScriptBranchMaterialMaster__GetPlayQuest(
    this,
    questId,
    1,
    0,
    (int32_t *)&playPhase + 1,
    (int32_t *)&playPhase,
    v4);
  result = HIDWORD(playPhase);
  if ( HIDWORD(playPhase) == questId )
  {
    ListByQuestId = QuestScriptBranchMaterialMaster__GetListByQuestId(this, questId, v16);
    if ( !ListByQuestId )
      sub_B5D69C(0LL, v19);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByQuestId,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
      if ( !v20 )
        break;
      if ( !v25.fields.current )
        sub_B5D69C(v20, v21);
      QuestScriptBranchMaterialMaster__GetPlayQuest(
        this,
        questId,
        HIDWORD(v25.fields.current[1].klass),
        (int32_t)v25.fields.current[1].monitor,
        (int32_t *)&playPhase + 1,
        (int32_t *)&playPhase,
        v22);
      v23 = HIDWORD(playPhase);
      if ( HIDWORD(playPhase) != questId )
      {
        v24 = 9;
        goto LABEL_11;
      }
    }
    v23 = 0;
    v24 = 7;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    if ( v24 == 9 )
      return v23;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E6F0D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestScriptBranchMaterialEntity_TypeInfo, v24, v25, v26);
    byte_42E6F0D = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_32;
    v44 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (QuestScriptBranchMaterialEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v42);
LABEL_32:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.missionTargetId == questId )
    {
      if ( !v27 )
        sub_B5D69C(v42, QuestScriptBranchMaterialEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__);
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_28:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return (System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *)v27;
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
  int32_t v10; // w20
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  _DWORD *v37; // x0
  __int64 v38; // x1
  _DWORD *v39; // x25
  __int64 v40; // x9
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x0

  v10 = phase;
  if ( (byte_42E6F0F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      phase,
      *(_QWORD *)&playType);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&QuestScriptBranchMaterialEntity_TypeInfo, v22, v23, v24);
    byte_42E6F0F = 1;
  }
  *playQuestId = 0;
  *playPhase = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_16:
      v36 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v37 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                      Enumerator,
                      *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      goto LABEL_41;
    v40 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v40
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v40 - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v37 = (_DWORD *)sub_B5D990(v37);
LABEL_41:
      sub_B5D69C(v37, v38);
    }
    if ( v37[4] == questId && v37[5] == v10 && v37[6] == playType )
      goto LABEL_26;
  }
  v39 = 0LL;
LABEL_26:
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_30:
    v44 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v44 + 8));
  if ( !v39 )
    goto LABEL_38;
  v45 = *((_QWORD *)v39 + 4);
  if ( !v45 )
    goto LABEL_42;
  if ( *(_DWORD *)(v45 + 24) != 2 )
  {
LABEL_38:
    *playQuestId = questId;
    goto LABEL_39;
  }
  *playQuestId = *(_DWORD *)(v45 + 32);
  v46 = *((_QWORD *)v39 + 4);
  if ( !v46 )
LABEL_42:
    sub_B5D69C(list, *(_QWORD *)&questId);
  if ( *(_DWORD *)(v46 + 24) <= 1u )
  {
    v47 = sub_B5D6C8(list);
    sub_B5D668(v47, 0LL);
  }
  v10 = *(_DWORD *)(v46 + 36);
LABEL_39:
  *playPhase = v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptBranchMaterialMaster__IsBranchQuestMaterialOpen(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  bool v33; // w20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_42E6F0C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QuestScriptBranchMaterialEntity_TypeInfo, v15, v16, v17);
    byte_42E6F0C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_34;
    v32 = *(&QuestScriptBranchMaterialEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) < (unsigned int)v32
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v32 - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      v30 = (_DWORD *)sub_B5D990(v30);
LABEL_34:
      sub_B5D69C(v30, v31);
    }
    if ( v30[4] == questId )
    {
      v39 = 59;
      v33 = 1;
      goto LABEL_24;
    }
  }
  v33 = 0;
  v39 = 57;
LABEL_24:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_28:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 57 )
    return 0;
  return v33;
}