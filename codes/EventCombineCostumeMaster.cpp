void EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C271CF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
    byte_4C271CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    367,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineCostumeEntity_o *EventCombineCostumeMaster__GetEntity(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C271CD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
    byte_4C271CD = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_338C850 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


EventCombineCostumeEntity_o *EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x23
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  System_Predicate_object__o *v27; // x25
  __int64 v28; // x0
  __int64 v29; // x1
  EventCombineCostumeEntity_o *v30; // x21
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4C271D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventCombineCostumeEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEntity__FindIndex__);
    sub_1C2D490(&System_Predicate_EventEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__);
    sub_1C2D490(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    byte_4C271D0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, v8),
        !this->fields.list) )
  {
    sub_1C2D6EC(Instance, v8);
  }
  v9 = (System_Collections_Generic_List_object__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventCombineCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = sub_1C2D6DC(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0);
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v16 )
      sub_1C2D6EC(v21, v21);
    *(_QWORD *)(v16 + 16) = v21;
    sub_1C2D434((CGThumbnailListItem_o *)(v16 + 16), v21, v22, v23);
    v26 = *(_QWORD *)(v16 + 16);
    if ( !v26 )
      sub_1C2D6EC(v24, v25);
    if ( *(_DWORD *)(v26 + 16) == svtId && *(_DWORD *)(v26 + 20) == costumeId )
    {
      v27 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_object____ctor(
        v27,
        (Il2CppObject *)v16,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        0);
      if ( !v9 )
        sub_1C2D6EC(v28, v29);
      if ( (System_Collections_Generic_List_object___FindIndex(
              v9,
              (System_Predicate_T__o *)v27,
              (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_EventEntity__FindIndex__)
          & 0x80000000) == 0 )
      {
        v30 = *(EventCombineCostumeEntity_o **)(v16 + 16);
        goto LABEL_28;
      }
    }
  }
  v30 = 0;
LABEL_28:
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_32:
    v34 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v30;
}


bool EventCombineCostumeMaster__IsEventCombineCostume(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  return EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(this, svtId, costumeId, method) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool EventCombineCostumeMaster__TryGetEntity(
        EventCombineCostumeMaster_o *this,
        EventCombineCostumeEntity_o **entity,
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C271CE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
    byte_4C271CE = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
}


void EventCombineCostumeMaster___c__DisplayClass3_0___ctor(
        EventCombineCostumeMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCombineCostumeMaster___c__DisplayClass3_0___GetListBySvtIdAndCostumeId_b__0(
        EventCombineCostumeMaster___c__DisplayClass3_0_o *this,
        EventEntity_o *x,
        const MethodInfo *method)
{
  struct EventCombineCostumeEntity_o *ent; // x8

  if ( !x || (ent = this->fields.ent) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields.id == ent->fields.eventId;
}