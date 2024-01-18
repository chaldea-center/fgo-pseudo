void __fastcall QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187AF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__, method);
    byte_4187AF9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    67,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *__fastcall QuestAddMaster__GetEntity(
        QuestAddMaster_o *this,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4187AF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4187AF7 = 1;
  }
  PK = QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *__fastcall QuestAddMaster__GetReplaceDataByQuestId(
        QuestAddMaster_o *this,
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
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t Time; // x0
  __int64 v14; // x1
  int64_t v15; // x23
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  QuestAddEntity_o *v19; // x20
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  QuestAddEntity_o *v26; // x24
  __int64 v27; // x9
  __int64 v28; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0

  if ( (byte_4187AFA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&QuestAddEntity_TypeInfo, v11);
    byte_4187AFA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B2C434(Time, v14);
  v15 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  v19 = 0LL;
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
          goto LABEL_35;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_35:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v26 = (QuestAddEntity_o *)v24;
    if ( !v24 )
      goto LABEL_46;
    v27 = *(&QuestAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) < (unsigned int)v27
      || *(QuestAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * v27 - 8) != QuestAddEntity_TypeInfo )
    {
      v24 = sub_B2C728(v24);
LABEL_46:
      sub_B2C434(v24, v25);
    }
    if ( *(_DWORD *)(v24 + 16) == questId && v15 >= *(_QWORD *)(v24 + 56) && v15 <= *(_QWORD *)(v24 + 64) )
    {
      v28 = *(unsigned int *)(v24 + 32);
      if ( !(_DWORD)v28 )
        goto LABEL_29;
      if ( !Master_WarQuestSelectionMaster )
        sub_B2C434(v24, v28);
      if ( CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v28, 0LL, 0, 0LL) )
      {
LABEL_29:
        if ( !v19 || (priority = v26->fields.priority) != 0 && priority > v19->fields.priority )
          v19 = v26;
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
        goto LABEL_42;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_42:
    v38 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v19;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAddMaster__TryGetEntity(
        QuestAddMaster_o *this,
        QuestAddEntity_o **entity,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4187AF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__, entity);
    byte_4187AF8 = 1;
  }
  PK = QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}