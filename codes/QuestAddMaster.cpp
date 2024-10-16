void __fastcall QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6179 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__, method);
    byte_4AB6179 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    69,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *__fastcall QuestAddMaster__GetEntity(
        QuestAddMaster_o *this,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6177 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4AB6177 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31640E8 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
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
  Il2CppObject *Master_object; // x22
  int64_t Time; // x0
  __int64 v14; // x1
  int64_t v15; // x23
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  QuestAddEntity_o *v18; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  QuestAddEntity_o *v29; // x24
  __int64 methodPtr_low; // x9
  __int64 v31; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4AB617A & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BAB41C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v7);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BAB41C(&NetworkManager_TypeInfo, v10);
    sub_1BAB41C(&QuestAddEntity_TypeInfo, v11);
    byte_4AB617A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1BAB678(Time, v14);
  v15 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v16);
  v18 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_21;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_21:
      v26 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v29 = (QuestAddEntity_o *)v27;
    if ( !v27 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(QuestAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != QuestAddEntity_TypeInfo )
    {
      sub_1BAB938(v27);
LABEL_44:
      sub_1BAB678(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 16) == questId && v15 >= *(_QWORD *)(v27 + 56) && v15 <= *(_QWORD *)(v27 + 64) )
    {
      v31 = *(unsigned int *)(v27 + 32);
      if ( !(_DWORD)v31 )
        goto LABEL_34;
      if ( !Master_object )
        sub_1BAB678(v27, v31);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v31, 0LL, 0, 0LL) )
      {
LABEL_34:
        if ( !v18 || (priority = v29->fields.priority) != 0 && priority > v18->fields.priority )
          v18 = v29;
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_40;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_40:
    v36 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAddMaster__TryGetEntity(
        QuestAddMaster_o *this,
        QuestAddEntity_o **entity,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6178 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__, entity);
    byte_4AB6178 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}