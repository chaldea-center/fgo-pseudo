void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186EE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__, method);
    byte_4186EE1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    74,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_4186EDF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4186EDF = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestMessageMaster__GetValidMessage(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_QuestMessageEntity__o *ValidMessageList; // x0
  __int64 v11; // x1
  QuestMessageEntity_o *v12; // x8

  if ( (byte_4186EE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__, v9);
    byte_4186EE2 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( ValidMessageList->fields._size >= 1 )
  {
    v12 = ValidMessageList->fields._items->m_Items[0];
    if ( v12 )
      return v12->fields.message;
LABEL_8:
    sub_B2C434(ValidMessageList, v11);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  QuestMessageEntity_o *v33; // x0
  __int64 v34; // x1
  QuestMessageEntity_o *v35; // x24
  __int64 v36; // x9
  int32_t v37; // w8
  _BOOL8 v38; // x0
  __int64 v39; // x1
  _BOOL8 IsQuestClear_25746984; // x0
  __int64 v41; // x1
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0

  if ( (byte_4186EE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&CondType_TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo, v15);
    sub_B2C35C(&QuestMessageEntity_TypeInfo, v16);
    byte_4186EE3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_B2C434(v19, v20);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v33 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                    Enumerator,
                                    *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      goto LABEL_43;
    v36 = *(&QuestMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v36
      || (QuestMessageEntity_c *)v33->klass->_2.typeHierarchy[v36 - 1] != QuestMessageEntity_TypeInfo )
    {
      v33 = (QuestMessageEntity_o *)sub_B2C728(v33);
LABEL_43:
      sub_B2C434(v33, v34);
    }
    if ( v33->fields.questId == questId && v33->fields.displayType == messageType )
    {
      v37 = v33->fields.phase;
      if ( v37 == phase || !v37 )
      {
        v38 = QuestMessageEntity__CheckValid(v33, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v38 )
        {
          if ( v35->fields.frequencyType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsQuestClear_25746984 = CondType__IsQuestClear_25746984(questId, -1, 0, 0LL);
            if ( !IsQuestClear_25746984 )
            {
              if ( !v18 )
                sub_B2C434(IsQuestClear_25746984, v41);
              goto LABEL_32;
            }
          }
          else
          {
            if ( !v18 )
              sub_B2C434(v38, v39);
LABEL_32:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
          }
        }
      }
    }
  }
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_39:
    v45 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v18;
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

  if ( (byte_4186EE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__, entity);
    byte_4186EE0 = 1;
  }
  PK = QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}