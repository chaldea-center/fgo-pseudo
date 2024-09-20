void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B07A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
    byte_4A5B07A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    361,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
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

  if ( (byte_4A5B078 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
    byte_4A5B078 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
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
  __int64 p_method; // x0
  Il2CppObject *v16; // x23
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  EventCombineCostumeEntity_c *v26; // x1
  __int64 methodPtr_low; // x9
  ServantStatusBattleListViewItem_o *v28; // x24
  __int64 v29; // x0
  __int64 v30; // x1
  ServantStatusBattleListViewItem_c *v31; // x8
  System_Predicate_object__o *v32; // x25
  __int64 v33; // x0
  __int64 v34; // x1
  EventCombineCostumeEntity_o *v35; // x21
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A5B07B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&EventCombineCostumeEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__FindIndex__);
    sub_1B885B0(&System_Predicate_EventEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__);
    sub_1B885B0(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    byte_4A5B07B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, v8),
        !this->fields.list) )
  {
    sub_1B8880C(Instance, v8);
  }
  v9 = (System_Collections_Generic_List_object__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = (Il2CppObject *)sub_1B887FC(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor(v16, 0LL);
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v16 )
      goto LABEL_44;
    v25 = v21;
    if ( v21 )
    {
      v26 = EventCombineCostumeEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventCombineCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * (methodPtr_low - 1)) != EventCombineCostumeEntity_TypeInfo )
      {
        sub_1B88ACC(v21);
LABEL_43:
        sub_1B88ACC(v25);
LABEL_44:
        sub_1B8880C(v21, v22);
      }
      v16[1].klass = (Il2CppClass *)v21;
      v28 = (ServantStatusBattleListViewItem_o *)&v16[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * (methodPtr_low - 1)) != v26 )
      {
        goto LABEL_43;
      }
    }
    else
    {
      v16[1].klass = 0LL;
      v28 = (ServantStatusBattleListViewItem_o *)&v16[1];
    }
    sub_1B88554(v28, v21, v23, v24);
    v31 = v28->klass;
    if ( !v28->klass )
      sub_1B8880C(v29, v30);
    if ( LODWORD(v31->_1.name) == svtId && HIDWORD(v31->_1.name) == costumeId )
    {
      v32 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_object____ctor(
        v32,
        v16,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        0LL);
      if ( !v9 )
        sub_1B8880C(v33, v34);
      if ( (System_Collections_Generic_List_object___FindIndex(
              v9,
              (System_Predicate_T__o *)v32,
              (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_EventEntity__FindIndex__) & 0x80000000) == 0 )
      {
        v35 = (EventCombineCostumeEntity_o *)v28->klass;
        goto LABEL_35;
      }
    }
  }
  v35 = 0LL;
LABEL_35:
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
        goto LABEL_39;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_39:
    v39 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return v35;
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

  if ( (byte_4A5B079 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
    byte_4A5B079 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
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
    sub_1B8880C(this, x);
  return x->fields.id == ent->fields.eventId;
}