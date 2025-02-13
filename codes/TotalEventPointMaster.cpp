void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD0E8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
    byte_4BDD0E8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_325E55C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventPointEntity_o *__fastcall TotalEventPointMaster__GetEntity(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDD0E6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
    byte_4BDD0E6 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3260880 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalEventPointMaster__GetPeriodTotalPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w23
  int64_t v10; // x22
  int32_t v11; // w24

  if ( (byte_4BDD0EA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
    byte_4BDD0EA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v10 += (int64_t)list[1].monitor;
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_15:
    sub_1C22094(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


int64_t __fastcall TotalEventPointMaster__GetPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int64_t *lookup; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x20
  int64_t v42; // x8
  int64_t *v43; // x21
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  int64_t v47; // x8
  int64_t *v48; // x19
  __int64 v49; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **v50; // x10
  __int64 v51; // x0
  int32_t v53; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v54; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF

  v54 = periodId;
  v55 = eventId;
  v53 = groupId;
  if ( (byte_4BDD0EB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDD0EB = 1;
  }
  v6 = sub_1C21EE0(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v55, 0LL);
  if ( !v6 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v6 + 32) = lookup;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)lookup, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_27;
  v21 = StringLiteral_1546/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1546/*":"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), v21, v15, v16, v17, v18, v19, v20);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v54, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u
    || (*(_QWORD *)(v6 + 48) = lookup,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)lookup, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v6 + 24) <= 3u)
    || (v34 = StringLiteral_1546/*":"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_1546/*":"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 56), v34, v28, v29, v30, v31, v32, v33),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v53, 0LL),
        *(_DWORD *)(v6 + 24) <= 4u) )
  {
LABEL_27:
    sub_1C2209C(lookup, v8);
  }
  *(_QWORD *)(v6 + 64) = lookup;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 64), (int64_t)lookup, v35, v36, v37, v38, v39, v40);
  v41 = System_String__Concat_63129004((System_String_array *)v6, 0LL);
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_325E674 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v42 = *lookup;
  v43 = lookup;
  v44 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)v45 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_14;
    }
    v46 = v42 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_14:
    v46 = sub_1C73E18(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo,
            0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v46)(v43, v41, *(_QWORD *)(v46 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_325E674 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v47 = *lookup;
  v48 = lookup;
  v49 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v50 = (System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)(*(_QWORD *)(v47 + 176)
                                                                                             + 8LL);
    while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v49;
      v50 += 2;
      if ( !v49 )
        goto LABEL_22;
    }
    v51 = v47 + 16LL * (*(_DWORD *)v50 + 2) + 312;
  }
  else
  {
LABEL_22:
    v51 = sub_1C73E18(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo,
            2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v51)(
                        v48,
                        v41,
                        *(_QWORD *)(v51 + 8));
  if ( !lookup )
LABEL_28:
    sub_1C22094(lookup, v8);
  return lookup[4];
}


bool __fastcall TotalEventPointMaster__IsGroupWin(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        int32_t groupId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v10; // x1
  int64_t endedAt; // x23
  const MethodInfo *v12; // x4
  EventPointEntity_o *v13; // x8
  unsigned __int64 v14; // x25
  int v15; // w24
  __int64 v16; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length; // x10
  int32_t v19; // w3
  unsigned __int64 v21; // x26
  __int64 v22; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v24; // x9
  int32_t v25; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDD0E9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD0E9 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventPointMaster__TryGetEntity((EventPointMaster_o *)Instance, &entity, periodId, eventId, 0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_27;
  endedAt = entity->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( endedAt >= Instance )
    return 0;
  v13 = entity;
  if ( !entity )
LABEL_27:
    sub_1C22094(Instance, v10);
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  while ( 1 )
  {
    group1 = v13->fields.group1;
    if ( !group1 )
      goto LABEL_27;
    max_length = group1->max_length;
    if ( (__int64)v14 >= (int)max_length )
      break;
    if ( v14 >= max_length )
LABEL_31:
      sub_1C2209C(Instance, v10);
    v19 = group1->m_Items[v14 + 1];
    if ( v19 == groupId )
      v15 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v19, v12);
    v13 = entity;
    v16 += Instance;
    ++v14;
    if ( !entity )
      goto LABEL_27;
  }
  v21 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    group2 = v13->fields.group2;
    if ( !group2 )
      goto LABEL_27;
    v24 = group2->max_length;
    if ( (__int64)v21 >= (int)v24 )
      break;
    if ( v21 >= v24 )
      goto LABEL_31;
    v25 = group2->m_Items[v21 + 1];
    if ( v25 == groupId )
      v15 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v25, v12);
    v13 = entity;
    v22 += Instance;
    ++v21;
    if ( !entity )
      goto LABEL_27;
  }
  if ( v15 == 1 )
    return v16 >= v22;
  else
    return v16 < v22 && v15 == 2;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalEventPointMaster__TryGetEntity(
        TotalEventPointMaster_o *this,
        TotalEventPointEntity_o **entity,
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDD0E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
    byte_4BDD0E7 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}