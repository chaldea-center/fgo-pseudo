void TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43C83 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
    byte_4C43C83 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventPointEntity_o *TotalEventPointMaster__GetEntity(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43C81 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
    byte_4C43C81 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_33A5B58 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


int64_t TotalEventPointMaster__GetPeriodTotalPoint(
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

  if ( (byte_4C43C85 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
    byte_4C43C85 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v10 += (int64_t)list[1].monitor;
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_15:
    sub_1C372B4(list);
  }
  return 0;
}


int64_t TotalEventPointMaster__GetPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int64_t *lookup; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x20
  int64_t v21; // x8
  int64_t *v22; // x21
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  int64_t v26; // x8
  int64_t *v27; // x19
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **v29; // x10
  __int64 v30; // x0
  int32_t v32; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v33; // [xsp+8h] [xbp-38h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  v33 = periodId;
  v34 = eventId;
  v32 = groupId;
  if ( (byte_4C43C86 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C43C86 = 1;
  }
  v6 = sub_1C37100(string___TypeInfo, 5);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v34, 0);
  if ( !v6 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v6 + 32) = lookup;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)lookup, v8, v9);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_27;
  v12 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1457/*":"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), v12, v10, v11);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v33, 0);
  if ( *(_DWORD *)(v6 + 24) <= 2u
    || (*(_QWORD *)(v6 + 48) = lookup,
        sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 48), (int32_t)lookup, v13, v14),
        *(_DWORD *)(v6 + 24) <= 3u)
    || (v17 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_1457/*":"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 56), v17, v15, v16),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v32, 0),
        *(_DWORD *)(v6 + 24) <= 4u) )
  {
LABEL_27:
    sub_1C372BC(lookup);
  }
  *(_QWORD *)(v6 + 64) = lookup;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 64), (int32_t)lookup, v18, v19);
  v20 = System_String__Concat_63602172((System_String_array *)v6, 0);
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_33A394C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v21 = *lookup;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_14;
    }
    v25 = v21 + 16LL * *v24 + 312;
  }
  else
  {
LABEL_14:
    v25 = sub_1C87870(lookup, System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v25)(v22, v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
    return 0;
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_33A394C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v26 = *lookup;
  v27 = lookup;
  v28 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v29 = (System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)(*(_QWORD *)(v26 + 176)
                                                                                             + 8LL);
    while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v28;
      v29 += 2;
      if ( !v28 )
        goto LABEL_22;
    }
    v30 = v26 + 16LL * (*(_DWORD *)v29 + 2) + 312;
  }
  else
  {
LABEL_22:
    v30 = sub_1C87870(lookup, System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, 2);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v30)(
                        v27,
                        v20,
                        *(_QWORD *)(v30 + 8));
  if ( !lookup )
LABEL_28:
    sub_1C372B4(lookup);
  return lookup[4];
}


bool TotalEventPointMaster__IsGroupWin(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        int32_t groupId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  int64_t endedAt; // x23
  const MethodInfo *v11; // x4
  EventPointEntity_o *v12; // x8
  unsigned __int64 v13; // x25
  int v14; // w24
  __int64 v15; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length_low; // x10
  int32_t v18; // w3
  unsigned __int64 v20; // x26
  __int64 v21; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v23; // x9
  int32_t v24; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C43C84 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43C84 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventPointMaster__TryGetEntity((EventPointMaster_o *)Instance, &entity, periodId, eventId, 0);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_27;
  endedAt = entity->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( endedAt >= Instance )
    return 0;
  v12 = entity;
  if ( !entity )
LABEL_27:
    sub_1C372B4(Instance);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    group1 = v12->fields.group1;
    if ( !group1 )
      goto LABEL_27;
    max_length_low = LODWORD(group1->max_length);
    if ( (__int64)v13 >= (int)max_length_low )
      break;
    if ( v13 >= max_length_low )
LABEL_31:
      sub_1C372BC(Instance);
    v18 = group1->m_Items[v13];
    if ( v18 == groupId )
      v14 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v18, v11);
    v12 = entity;
    v15 += Instance;
    ++v13;
    if ( !entity )
      goto LABEL_27;
  }
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    group2 = v12->fields.group2;
    if ( !group2 )
      goto LABEL_27;
    v23 = LODWORD(group2->max_length);
    if ( (__int64)v20 >= (int)v23 )
      break;
    if ( v20 >= v23 )
      goto LABEL_31;
    v24 = group2->m_Items[v20];
    if ( v24 == groupId )
      v14 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v24, v11);
    v12 = entity;
    v21 += Instance;
    ++v20;
    if ( !entity )
      goto LABEL_27;
  }
  if ( v14 == 1 )
    return v15 >= v21;
  else
    return v15 < v21 && v14 == 2;
}


// local variable allocation has failed, the output may be wrong!
bool TotalEventPointMaster__TryGetEntity(
        TotalEventPointMaster_o *this,
        TotalEventPointEntity_o **entity,
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43C82 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
    byte_4C43C82 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}