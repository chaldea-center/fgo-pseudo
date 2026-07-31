void EventServantFatigueMaster___ctor(EventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59388FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string___ctor__);
    byte_59388FA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    240,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantFatigueEntity_o *EventServantFatigueMaster__GetEntity(
        EventServantFatigueMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59388F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__GetEntity__);
    byte_59388F8 = 1;
  }
  PK = (Il2CppObject *)EventServantFatigueEntity__CreatePK(eventId, svtId, priority, *(const MethodInfo **)&priority);
  return (EventServantFatigueEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventServantFatigueMaster__IsBonusFilterTarget(
        EventServantFatigueMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  _DWORD *v24; // x22
  Il2CppObject *Master_object; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-48h]

  if ( (byte_59388FB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventServantFatigueEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventServantFatigueEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_59388FB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventServantFatigueEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v9);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( (v15 & 1) == 0 )
      break;
    if ( !v32 )
      sub_21FFECC(v15, v16);
    v18 = v32->klass;
    v19 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantFatigueEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventServantFatigueEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_2237E2C(v32, System_Collections_Generic_IEnumerator_EventServantFatigueEntity__TypeInfo, 0);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      v32,
                      *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( v22 && v22[4] == eventId && v22[5] == svtId )
    {
      if ( !v22[8] )
        goto LABEL_31;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !Master_object )
        sub_21FFECC(0, v26);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v24[8], 0, 0, 0) )
        goto LABEL_31;
    }
  }
  v17 = 0;
LABEL_31:
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_36:
      v30 = sub_2237E2C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
  return v17 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool EventServantFatigueMaster__TryGetEntity(
        EventServantFatigueMaster_o *this,
        EventServantFatigueEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59388F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__TryGetEntity__);
    byte_59388F9 = 1;
  }
  PK = (Il2CppObject *)EventServantFatigueEntity__CreatePK(eventId, svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__TryGetEntity__);
}