void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8B2D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    75,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestMessageEntity_o *__fastcall QuestMessageMaster__GetEntity(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8B2B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__,
      questId,
      phase,
      *(_QWORD *)&idx);
    byte_42E8B2B = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestMessageMaster__GetValidMessage(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_QuestMessageEntity__o *ValidMessageList; // x0
  __int64 v13; // x1
  QuestMessageEntity_o *v14; // x8

  if ( (byte_42E8B2E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__,
      questId,
      phase,
      *(_QWORD *)&messageType);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__, v9, v10, v11);
    byte_42E8B2E = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( ValidMessageList->fields._size >= 1 )
  {
    v14 = ValidMessageList->fields._items->m_Items[0];
    if ( v14 )
      return v14->fields.message;
LABEL_8:
    sub_B5D69C(ValidMessageList, v13);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestMessageEntity__o *__fastcall QuestMessageMaster__GetValidMessageList(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v44; // x3
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  QuestMessageEntity_o *v49; // x0
  __int64 v50; // x1
  QuestMessageEntity_o *v51; // x24
  __int64 v52; // x9
  int32_t v53; // w8
  _BOOL8 v54; // x0
  __int64 v55; // x1
  _BOOL8 IsQuestClear_25877652; // x0
  __int64 v57; // x1
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0

  if ( (byte_42E8B2F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      phase,
      *(_QWORD *)&messageType);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&QuestMessageEntity_TypeInfo, v30, v31, v32);
    byte_42E8B2F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_B5D69C(v35, v36);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v37);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        p_offset += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v38);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_16:
      v48 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v44);
    }
    v49 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                    Enumerator,
                                    *(_QWORD *)(v48 + 8));
    v51 = v49;
    if ( !v49 )
      goto LABEL_43;
    v52 = *(&QuestMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v49->klass->_2.bitflags2 + 1) < (unsigned int)v52
      || (QuestMessageEntity_c *)v49->klass->_2.typeHierarchy[v52 - 1] != QuestMessageEntity_TypeInfo )
    {
      v49 = (QuestMessageEntity_o *)sub_B5D990(v49);
LABEL_43:
      sub_B5D69C(v49, v50);
    }
    if ( v49->fields.questId == questId && v49->fields.displayType == messageType )
    {
      v53 = v49->fields.phase;
      if ( v53 == phase || !v53 )
      {
        v54 = QuestMessageEntity__CheckValid(v49, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v54 )
        {
          if ( v51->fields.frequencyType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsQuestClear_25877652 = CondType__IsQuestClear_25877652(questId, -1, 0, 0LL);
            if ( !IsQuestClear_25877652 )
            {
              if ( !v34 )
                sub_B5D69C(IsQuestClear_25877652, v57);
              goto LABEL_32;
            }
          }
          else
          {
            if ( !v34 )
              sub_B5D69C(v54, v55);
LABEL_32:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v34,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
          }
        }
      }
    }
  }
  v58 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_39:
    v61 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v44);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v34;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestMessageMaster__TryGetEntity(
        QuestMessageMaster_o *this,
        QuestMessageEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E8B2C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&phase);
    byte_42E8B2C = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}