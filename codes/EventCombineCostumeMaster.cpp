void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE424 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__, method);
    byte_49FE424 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    361,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetEntity(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE422 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FE422 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_30D64D8 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *v19; // x22
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v26; // x23
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  EventCombineCostumeEntity_c *v36; // x1
  __int64 methodPtr_low; // x9
  ServantStatusBattleListViewItem_o *v38; // x24
  __int64 v39; // x0
  __int64 v40; // x1
  ServantStatusBattleListViewItem_c *v41; // x8
  System_Predicate_object__o *v42; // x25
  __int64 v43; // x0
  __int64 v44; // x1
  EventCombineCostumeEntity_o *v45; // x21
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_49FE425 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B64870(&EventCombineCostumeEntity_TypeInfo, v8);
    sub_1B64870(&System_IDisposable_TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_EventEntity__FindIndex__, v12);
    sub_1B64870(&System_Predicate_EventEntity__TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__, v15);
    sub_1B64870(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v16);
    byte_49FE425 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, v18),
        !this->fields.list) )
  {
    sub_1B64ACC(Instance, v18);
  }
  v19 = (System_Collections_Generic_List_object__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = (Il2CppObject *)sub_1B64ABC(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor(v26, 0LL);
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_18;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_18:
      v30 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    if ( !v26 )
      goto LABEL_44;
    v35 = v31;
    if ( v31 )
    {
      v36 = EventCombineCostumeEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventCombineCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * (methodPtr_low - 1)) != EventCombineCostumeEntity_TypeInfo )
      {
        sub_1B64D8C(v31);
LABEL_43:
        sub_1B64D8C(v35);
LABEL_44:
        sub_1B64ACC(v31, v32);
      }
      v26[1].klass = (Il2CppClass *)v31;
      v38 = (ServantStatusBattleListViewItem_o *)&v26[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * (methodPtr_low - 1)) != v36 )
      {
        goto LABEL_43;
      }
    }
    else
    {
      v26[1].klass = 0LL;
      v38 = (ServantStatusBattleListViewItem_o *)&v26[1];
    }
    sub_1B64814(v38, v31, v33, v34);
    v41 = v38->klass;
    if ( !v38->klass )
      sub_1B64ACC(v39, v40);
    if ( LODWORD(v41->_1.name) == svtId && HIDWORD(v41->_1.name) == costumeId )
    {
      v42 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_object____ctor(
        v42,
        v26,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        0LL);
      if ( !v19 )
        sub_1B64ACC(v43, v44);
      if ( (System_Collections_Generic_List_object___FindIndex(
              v19,
              (System_Predicate_T__o *)v42,
              (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_EventEntity__FindIndex__) & 0x80000000) == 0 )
      {
        v45 = (EventCombineCostumeEntity_o *)v38->klass;
        goto LABEL_35;
      }
    }
  }
  v45 = 0LL;
LABEL_35:
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_39;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_39:
    v49 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return v45;
}


bool __fastcall EventCombineCostumeMaster__IsEventCombineCostume(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  return EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(this, svtId, costumeId, method) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCombineCostumeMaster__TryGetEntity(
        EventCombineCostumeMaster_o *this,
        EventCombineCostumeEntity_o **entity,
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE423 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__,
      entity);
    byte_49FE423 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
}


void __fastcall EventCombineCostumeMaster___c__DisplayClass3_0___ctor(
        EventCombineCostumeMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCombineCostumeMaster___c__DisplayClass3_0___GetListBySvtIdAndCostumeId_b__0(
        EventCombineCostumeMaster___c__DisplayClass3_0_o *this,
        EventEntity_o *x,
        const MethodInfo *method)
{
  struct EventCombineCostumeEntity_o *ent; // x8

  if ( !x || (ent = this->fields.ent) == 0LL )
    sub_1B64ACC(this, x);
  return x->fields.id == ent->fields.eventId;
}