void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BCBE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
    byte_438BCBE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    75,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_438BCBC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
    byte_438BCBC = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_21FBCE4 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
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

  if ( (byte_438BCBF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    byte_438BCBF = 1;
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
    sub_B7769C(ValidMessageList, v10);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  QuestMessageEntity_o *v23; // x0
  __int64 v24; // x1
  QuestMessageEntity_o *v25; // x24
  __int64 v26; // x9
  int32_t v27; // w8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  _BOOL8 IsQuestClear_24699280; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_438BCC0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
    sub_B775C4(&QuestMessageEntity_TypeInfo);
    byte_438BCC0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_B7769C(v11, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_43;
    v26 = *(&QuestMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (QuestMessageEntity_c *)v23->klass->_2.typeHierarchy[v26 - 1] != QuestMessageEntity_TypeInfo )
    {
      v23 = (QuestMessageEntity_o *)sub_B77990(v23);
LABEL_43:
      sub_B7769C(v23, v24);
    }
    if ( v23->fields.questId == questId && v23->fields.displayType == messageType )
    {
      v27 = v23->fields.phase;
      if ( v27 == phase || !v27 )
      {
        v28 = QuestMessageEntity__CheckValid(v23, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v28 )
        {
          if ( v25->fields.frequencyType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsQuestClear_24699280 = CondType__IsQuestClear_24699280(questId, -1, 0, 0LL);
            if ( !IsQuestClear_24699280 )
            {
              if ( !v10 )
                sub_B7769C(IsQuestClear_24699280, v31);
              goto LABEL_32;
            }
          }
          else
          {
            if ( !v10 )
              sub_B7769C(v28, v29);
LABEL_32:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
          }
        }
      }
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_39:
    v35 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
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

  if ( (byte_438BCBD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
    byte_438BCBD = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}