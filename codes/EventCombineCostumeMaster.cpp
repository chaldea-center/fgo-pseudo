void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21E68 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__, method);
    byte_4C21E68 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    367,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
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

  if ( (byte_4C21E66 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4C21E66 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_329F900 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_object__o *v18; // x22
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x23
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  int64_t v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  System_Predicate_object__o *v40; // x25
  __int64 v41; // x0
  __int64 v42; // x1
  EventCombineCostumeEntity_o *v43; // x21
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_4C21E69 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventCombineCostumeEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventEntity__FindIndex__, v11);
    sub_1C3B764(&System_Predicate_EventEntity__TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C3B764(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__, v14);
    sub_1C3B764(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v15);
    byte_4C21E69 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, v17),
        !this->fields.list) )
  {
    sub_1C3B9C0(Instance, v17);
  }
  v18 = (System_Collections_Generic_List_object__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_EventCombineCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = sub_1C3B9B0(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_18:
      v29 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_EventCombineCostumeEntity__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8));
    if ( !v25 )
      sub_1C3B9C0(v30, v30);
    *(_QWORD *)(v25 + 16) = v30;
    sub_1C3B708((PartyOrganizationUtility_o *)(v25 + 16), v30, v31, v32, v33, v34, v35, v36);
    v39 = *(_QWORD *)(v25 + 16);
    if ( !v39 )
      sub_1C3B9C0(v37, v38);
    if ( *(_DWORD *)(v39 + 16) == svtId && *(_DWORD *)(v39 + 20) == costumeId )
    {
      v40 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_object____ctor(
        v40,
        (Il2CppObject *)v25,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        0LL);
      if ( !v18 )
        sub_1C3B9C0(v41, v42);
      if ( (System_Collections_Generic_List_object___FindIndex(
              v18,
              (System_Predicate_T__o *)v40,
              (const MethodInfo_368C4C4 *)Method_System_Collections_Generic_List_EventEntity__FindIndex__) & 0x80000000) == 0 )
      {
        v43 = *(EventCombineCostumeEntity_o **)(v25 + 16);
        goto LABEL_28;
      }
    }
  }
  v43 = 0LL;
LABEL_28:
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_32;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_32:
    v47 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  return v43;
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

  if ( (byte_4C21E67 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__,
      entity);
    byte_4C21E67 = 1;
  }
  PK = (Il2CppObject *)EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
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
    sub_1C3B9C0(this, x);
  return x->fields.id == ent->fields.eventId;
}