void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16107 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__,
      method,
      v2);
    byte_4B16107 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    361,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
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

  if ( (byte_4B16105 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&costumeId);
    byte_4B16105 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31B3198 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v28; // x1
  System_Collections_Generic_List_object__o *v29; // x22
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x23
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  int64_t v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x8
  EventCombineCostumeEntity_c *v53; // x1
  __int64 methodPtr_low; // x9
  PartyOrganizationUtility_o *v55; // x24
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  PartyOrganizationUtility_c *v60; // x8
  System_Predicate_object__o *v61; // x25
  __int64 v62; // x0
  __int64 v63; // x1
  EventCombineCostumeEntity_o *v64; // x21
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0

  if ( (byte_4B16108 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&costumeId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v7, v8);
    sub_1BCA7E0(&EventCombineCostumeEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__FindIndex__, v17, v18);
    sub_1BCA7E0(&System_Predicate_EventEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__, v23, v24);
    sub_1BCA7E0(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v25, v26);
    byte_4B16108 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, v28),
        !this->fields.list) )
  {
    sub_1BCAA3C(Instance, v28);
  }
  v29 = (System_Collections_Generic_List_object__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = (Il2CppObject *)sub_1BCAA2C(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v36, v37, v38);
    System_Object___ctor(v39, 0LL);
    v40 = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_18;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_18:
      v43 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
            Enumerator,
            *(_QWORD *)(v43 + 8));
    if ( !v39 )
      goto LABEL_44;
    v52 = v44;
    if ( v44 )
    {
      v53 = EventCombineCostumeEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventCombineCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 304LL) < (unsigned int)methodPtr_low
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * (methodPtr_low - 1)) != EventCombineCostumeEntity_TypeInfo )
      {
        sub_1BCACFC(v44);
LABEL_43:
        sub_1BCACFC(v52);
LABEL_44:
        sub_1BCAA3C(v44, v45);
      }
      v39[1].klass = (Il2CppClass *)v44;
      v55 = (PartyOrganizationUtility_o *)&v39[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 304LL) < (unsigned int)methodPtr_low
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * (methodPtr_low - 1)) != v53 )
      {
        goto LABEL_43;
      }
    }
    else
    {
      v39[1].klass = 0LL;
      v55 = (PartyOrganizationUtility_o *)&v39[1];
    }
    sub_1BCA784(v55, v44, v46, v47, v48, v49, v50, v51);
    v60 = v55->klass;
    if ( !v55->klass )
      sub_1BCAA3C(v56, v57);
    if ( LODWORD(v60->_1.name) == svtId && HIDWORD(v60->_1.name) == costumeId )
    {
      v61 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_EventEntity__TypeInfo, v57, v58, v59);
      System_Predicate_object____ctor(
        v61,
        v39,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        0LL);
      if ( !v29 )
        sub_1BCAA3C(v62, v63);
      if ( (System_Collections_Generic_List_object___FindIndex(
              v29,
              (System_Predicate_T__o *)v61,
              (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_EventEntity__FindIndex__) & 0x80000000) == 0 )
      {
        v64 = (EventCombineCostumeEntity_o *)v55->klass;
        goto LABEL_35;
      }
    }
  }
  v64 = 0LL;
LABEL_35:
  v65 = Enumerator->klass;
  v66 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_39;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_39:
    v68 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(Enumerator, *(_QWORD *)(v68 + 8));
  return v64;
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

  if ( (byte_4B16106 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16106 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
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
    sub_1BCAA3C(this, x);
  return x->fields.id == ent->fields.eventId;
}