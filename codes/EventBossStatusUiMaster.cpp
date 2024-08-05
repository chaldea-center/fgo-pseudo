void __fastcall EventBossStatusUiMaster___ctor(EventBossStatusUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE3F3 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__, method);
    byte_49FE3F3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    288,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBossStatusUiEntity_o *__fastcall EventBossStatusUiMaster__GetEntity(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE3F1 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FE3F1 = 1;
  }
  PK = (Il2CppObject *)EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventBossStatusUiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D64D8 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__);
}


EventBossStatusUiEntity_o *__fastcall EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  EventBossStatusUiEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  EventBossStatusUiMaster__TryGetEntity(this, &entity, eventId, index, v4);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBossStatusUiEntity__o *__fastcall EventBossStatusUiMaster__GetEntityListFromEventId(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  EventBossStatusUiEntity_c *v30; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FE3F4 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B64870(&EventBossStatusUiEntity_TypeInfo, v5);
    sub_1B64870(&System_IDisposable_TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventBossStatusUiEntity__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_EventBossStatusUiEntity___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_EventBossStatusUiEntity__TypeInfo, v11);
    byte_49FE3F4 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventBossStatusUiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventBossStatusUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      goto LABEL_35;
    v30 = EventBossStatusUiEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventBossStatusUiEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(EventBossStatusUiEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != EventBossStatusUiEntity_TypeInfo )
    {
      sub_1B64D8C(v25);
LABEL_35:
      sub_1B64ACC(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 16) == eventId )
    {
      if ( !v12 )
        sub_1B64ACC(v25, EventBossStatusUiEntity_TypeInfo);
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_EventBossStatusUiEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64ACC(v25, v30);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), v29, v27, v28);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_EventBossStatusUiEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBossStatusUiMaster__TryGetEntity(
        EventBossStatusUiMaster_o *this,
        EventBossStatusUiEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE3F2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__, entity);
    byte_49FE3F2 = 1;
  }
  PK = (Il2CppObject *)EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__);
}