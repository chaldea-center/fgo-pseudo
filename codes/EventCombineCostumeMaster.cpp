void EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593858C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
    byte_593858C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    369,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
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

  if ( (byte_593858A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
    byte_593858A = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


EventCombineCostumeEntity_o *EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x8
  System_Predicate_object__o *v35; // x24
  __int64 v36; // x0
  __int64 v37; // x1
  EventCombineCostumeEntity_o *v38; // x20
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IEnumerator_T__o *v44; // [xsp+18h] [xbp-68h]

  if ( (byte_593858D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventCombineCostumeEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventEntity__FindIndex__);
    sub_21FFC50(&System_Predicate_EventEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__);
    sub_21FFC50(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    byte_593858D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, 0),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
    sub_21FFECC(Instance, v8);
  }
  v10 = (System_Collections_Generic_List_object__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventCombineCostumeEntity__GetEnumerator__);
  v44 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v12);
  for ( i = Enumerator; ; i = v44 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
    {
      v38 = 0;
      goto LABEL_31;
    }
    v18 = sub_21FFEBC(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0);
    if ( !v44 )
      sub_21FFECC(v19, v20);
    v21 = v44->klass;
    v22 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_20;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_20:
      v24 = sub_2237E2C(v44, System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            v44,
            *(_QWORD *)(v24 + 8));
    if ( !v18 )
      sub_21FFECC(v25, v25);
    *(_QWORD *)(v18 + 16) = v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 16), v25, v26, v27, v28, v29, v30, v31);
    v34 = *(_QWORD *)(v18 + 16);
    if ( !v34 )
      sub_21FFECC(v32, v33);
    if ( *(_DWORD *)(v34 + 16) == svtId && *(_DWORD *)(v34 + 20) == costumeId )
    {
      v35 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_object____ctor(
        v35,
        (Il2CppObject *)v18,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        0);
      if ( !v10 )
        sub_21FFECC(v36, v37);
      if ( (System_Collections_Generic_List_object___FindIndex(
              v10,
              (System_Predicate_T__o *)v35,
              (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_EventEntity__FindIndex__)
          & 0x80000000) == 0 )
        break;
    }
  }
  v38 = *(EventCombineCostumeEntity_o **)(v18 + 16);
LABEL_31:
  if ( v44 )
  {
    v39 = v44->klass;
    v40 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_36;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_36:
      v42 = sub_2237E2C(v44, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(v44, *(_QWORD *)(v42 + 8));
  }
  return v38;
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

  if ( (byte_593858B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
    byte_593858B = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
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
    sub_21FFECC(this, x);
  return x->fields.id == ent->fields.eventId;
}