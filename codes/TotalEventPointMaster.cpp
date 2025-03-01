void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE31E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__, method);
    byte_4BFE31E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_327D914 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4BFE31C & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BFE31C = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_327FC38 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalEventPointMaster__GetPeriodTotalPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int64_t v11; // x22
  int32_t v12; // w24

  if ( (byte_4BFE320 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__, v7);
    byte_4BFE320 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v11 += (int64_t)list[1].monitor;
      if ( v10 == ++v12 )
        return v11;
    }
LABEL_15:
    sub_1C2E388(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalEventPointMaster__GetPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  int64_t *lookup; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *v44; // x20
  int64_t v45; // x8
  int64_t *v46; // x21
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  int64_t v50; // x8
  int64_t *v51; // x19
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **v53; // x10
  __int64 v54; // x0
  int32_t v56; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v57; // [xsp+8h] [xbp-38h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-34h] BYREF

  v57 = periodId;
  v58 = eventId;
  v56 = groupId;
  if ( (byte_4BFE321 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1C2E12C(&System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, v6);
    sub_1C2E12C(&string___TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_1525/*":"*/, v8);
    byte_4BFE321 = 1;
  }
  v9 = sub_1C2E1D4(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v58, 0LL);
  if ( !v9 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = lookup;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)lookup, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_27;
  v24 = StringLiteral_1525/*":"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_1525/*":"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 40), v24, v18, v19, v20, v21, v22, v23);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v57, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 2u
    || (*(_QWORD *)(v9 + 48) = lookup,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)lookup, v25, v26, v27, v28, v29, v30),
        *(_DWORD *)(v9 + 24) <= 3u)
    || (v37 = StringLiteral_1525/*":"*/,
        *(_QWORD *)(v9 + 56) = StringLiteral_1525/*":"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 56), v37, v31, v32, v33, v34, v35, v36),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v56, 0LL),
        *(_DWORD *)(v9 + 24) <= 4u) )
  {
LABEL_27:
    sub_1C2E390(lookup, v11);
  }
  *(_QWORD *)(v9 + 64) = lookup;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)lookup, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_63249112((System_String_array *)v9, 0LL);
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_327DA2C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v45 = *lookup;
  v46 = lookup;
  v47 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_14;
    }
    v49 = v45 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_14:
    v49 = sub_1C8010C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo,
            0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v49)(v46, v44, *(_QWORD *)(v49 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_327DA2C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v50 = *lookup;
  v51 = lookup;
  v52 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v53 = (System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)(*(_QWORD *)(v50 + 176)
                                                                                             + 8LL);
    while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v52;
      v53 += 2;
      if ( !v52 )
        goto LABEL_22;
    }
    v54 = v50 + 16LL * (*(_DWORD *)v53 + 2) + 312;
  }
  else
  {
LABEL_22:
    v54 = sub_1C8010C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo,
            2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v54)(
                        v51,
                        v44,
                        *(_QWORD *)(v54 + 8));
  if ( !lookup )
LABEL_28:
    sub_1C2E388(lookup, v11);
  return lookup[4];
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalEventPointMaster__IsGroupWin(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t Instance; // x0
  __int64 v12; // x1
  int64_t endedAt; // x23
  const MethodInfo *v14; // x4
  EventPointEntity_o *v15; // x8
  unsigned __int64 v16; // x25
  int v17; // w24
  __int64 v18; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length; // x10
  int32_t v21; // w3
  unsigned __int64 v23; // x26
  __int64 v24; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v26; // x9
  int32_t v27; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BFE31F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventPointMaster___, *(_QWORD *)&eventId);
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BFE31F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventPointMaster___);
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
  v15 = entity;
  if ( !entity )
LABEL_27:
    sub_1C2E388(Instance, v12);
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    group1 = v15->fields.group1;
    if ( !group1 )
      goto LABEL_27;
    max_length = group1->max_length;
    if ( (__int64)v16 >= (int)max_length )
      break;
    if ( v16 >= max_length )
LABEL_31:
      sub_1C2E390(Instance, v12);
    v21 = group1->m_Items[v16 + 1];
    if ( v21 == groupId )
      v17 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v21, v14);
    v15 = entity;
    v18 += Instance;
    ++v16;
    if ( !entity )
      goto LABEL_27;
  }
  v23 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    group2 = v15->fields.group2;
    if ( !group2 )
      goto LABEL_27;
    v26 = group2->max_length;
    if ( (__int64)v23 >= (int)v26 )
      break;
    if ( v23 >= v26 )
      goto LABEL_31;
    v27 = group2->m_Items[v23 + 1];
    if ( v27 == groupId )
      v17 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v27, v14);
    v15 = entity;
    v24 += Instance;
    ++v23;
    if ( !entity )
      goto LABEL_27;
  }
  if ( v17 == 1 )
    return v18 >= v24;
  else
    return v18 < v24 && v17 == 2;
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

  if ( (byte_4BFE31D & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__, entity);
    byte_4BFE31D = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}