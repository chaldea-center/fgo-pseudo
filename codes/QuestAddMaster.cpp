void __fastcall QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFC34 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
    byte_42AFC34 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    68,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *__fastcall QuestAddMaster__GetEntity(
        QuestAddMaster_o *this,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AFC32 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
    byte_42AFC32 = 1;
  }
  PK = QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
}


QuestAddEntity_o *__fastcall QuestAddMaster__GetReplaceDataByQuestId(
        QuestAddMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x23
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  QuestAddEntity_o *v12; // x20
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  QuestAddEntity_o *v19; // x24
  __int64 v20; // x9
  __int64 v21; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_42AFC35 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestAddEntity_TypeInfo);
    byte_42AFC35 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B52A5C(Time, v7);
  v8 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v9);
  v12 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_35:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
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
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v19 = (QuestAddEntity_o *)v17;
    if ( !v17 )
      goto LABEL_46;
    v20 = *(&QuestAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v20
      || *(QuestAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v20 - 8) != QuestAddEntity_TypeInfo )
    {
      v17 = sub_B52D50(v17);
LABEL_46:
      sub_B52A5C(v17, v18);
    }
    if ( *(_DWORD *)(v17 + 16) == questId && v8 >= *(_QWORD *)(v17 + 56) && v8 <= *(_QWORD *)(v17 + 64) )
    {
      v21 = *(unsigned int *)(v17 + 32);
      if ( !(_DWORD)v21 )
        goto LABEL_29;
      if ( !Master_WarQuestSelectionMaster )
        sub_B52A5C(v17, v21);
      if ( CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v21, 0LL, 0, 0LL) )
      {
LABEL_29:
        if ( !v12 || (priority = v19->fields.priority) != 0 && priority > v12->fields.priority )
          v12 = v19;
      }
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_42:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v12;
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

  if ( (byte_42AFC33 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
    byte_42AFC33 = 1;
  }
  PK = QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}