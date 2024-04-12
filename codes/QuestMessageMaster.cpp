void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B023C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
    byte_42B023C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    75,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_42B023A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
    byte_42B023A = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
}


System_String_o *__fastcall QuestMessageMaster__GetValidMessage(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestMessageEntity__o *ValidMessageList; // x0
  __int64 v10; // x1
  QuestMessageEntity_o *v11; // x8

  if ( (byte_42B023D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    byte_42B023D = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( ValidMessageList->fields._size >= 1 )
  {
    v11 = ValidMessageList->fields._items->m_Items[0];
    if ( v11 )
      return v11->fields.message;
LABEL_8:
    sub_B52A5C(ValidMessageList, v10);
  }
  return 0LL;
}


System_Collections_Generic_List_QuestMessageEntity__o *__fastcall QuestMessageMaster__GetValidMessageList(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  QuestMessageEntity_o *v25; // x0
  __int64 v26; // x1
  QuestMessageEntity_o *v27; // x24
  __int64 v28; // x9
  int32_t v29; // w8
  _BOOL8 v30; // x0
  __int64 v31; // x1
  _BOOL8 IsQuestClear_25987760; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42B023E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
    sub_B52984(&QuestMessageEntity_TypeInfo);
    byte_42B023E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_B52A5C(v11, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
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
      v24 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v25 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                    Enumerator,
                                    *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      goto LABEL_43;
    v28 = *(&QuestMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (QuestMessageEntity_c *)v25->klass->_2.typeHierarchy[v28 - 1] != QuestMessageEntity_TypeInfo )
    {
      v25 = (QuestMessageEntity_o *)sub_B52D50(v25);
LABEL_43:
      sub_B52A5C(v25, v26);
    }
    if ( v25->fields.questId == questId && v25->fields.displayType == messageType )
    {
      v29 = v25->fields.phase;
      if ( v29 == phase || !v29 )
      {
        v30 = QuestMessageEntity__CheckValid(v25, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v30 )
        {
          if ( v27->fields.frequencyType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsQuestClear_25987760 = CondType__IsQuestClear_25987760(questId, -1, 0, 0LL);
            if ( !IsQuestClear_25987760 )
            {
              if ( !v10 )
                sub_B52A5C(IsQuestClear_25987760, v33);
              goto LABEL_32;
            }
          }
          else
          {
            if ( !v10 )
              sub_B52A5C(v30, v31);
LABEL_32:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
          }
        }
      }
    }
  }
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
        goto LABEL_39;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_39:
    v37 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v10;
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

  if ( (byte_42B023B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
    byte_42B023B = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}