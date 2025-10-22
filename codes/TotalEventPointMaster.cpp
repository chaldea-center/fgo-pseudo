void TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57A3B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
    byte_4C57A3B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4C57A39 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
    byte_4C57A39 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_33B7A10 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C57A3D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
    byte_4C57A3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
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
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v10 += (int64_t)list[1].monitor;
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_15:
    sub_1C3E7C0(list, *(_QWORD *)&eventId);
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
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x20
  int64_t v22; // x8
  int64_t *v23; // x21
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  int64_t v27; // x8
  int64_t *v28; // x19
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **v30; // x10
  __int64 v31; // x0
  int32_t v33; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF

  v34 = periodId;
  v35 = eventId;
  v33 = groupId;
  if ( (byte_4C57A3E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C57A3E = 1;
  }
  v6 = sub_1C3E60C(string___TypeInfo, 5);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v35, 0);
  if ( !v6 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v6 + 32) = lookup;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)lookup, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_27;
  v13 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1456/*":"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), v13, v11, v12);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v34, 0);
  if ( *(_DWORD *)(v6 + 24) <= 2u
    || (*(_QWORD *)(v6 + 48) = lookup,
        sub_1C3E508((CGThumbnailListItem_o *)(v6 + 48), (int32_t)lookup, v14, v15),
        *(_DWORD *)(v6 + 24) <= 3u)
    || (v18 = StringLiteral_1456/*":"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_1456/*":"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v6 + 56), v18, v16, v17),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v33, 0),
        *(_DWORD *)(v6 + 24) <= 4u) )
  {
LABEL_27:
    sub_1C3E7C8(lookup, v8);
  }
  *(_QWORD *)(v6 + 64) = lookup;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 64), (int32_t)lookup, v19, v20);
  v21 = System_String__Concat_63676984((System_String_array *)v6, 0);
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_33B5804 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v22 = *lookup;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_14;
    }
    v26 = v22 + 16LL * *v25 + 312;
  }
  else
  {
LABEL_14:
    v26 = sub_1C8ED7C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v26)(v23, v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
    return 0;
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_33B5804 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v27 = *lookup;
  v28 = lookup;
  v29 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v30 = (System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)(*(_QWORD *)(v27 + 176)
                                                                                             + 8LL);
    while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_22;
    }
    v31 = v27 + 16LL * (*(_DWORD *)v30 + 2) + 312;
  }
  else
  {
LABEL_22:
    v31 = sub_1C8ED7C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, 2);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v31)(
                        v28,
                        v21,
                        *(_QWORD *)(v31 + 8));
  if ( !lookup )
LABEL_28:
    sub_1C3E7C0(lookup, v8);
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
  __int64 v10; // x1
  int64_t endedAt; // x23
  const MethodInfo *v12; // x4
  EventPointEntity_o *v13; // x8
  unsigned __int64 v14; // x25
  int v15; // w24
  __int64 v16; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length_low; // x10
  int32_t v19; // w3
  unsigned __int64 v21; // x26
  __int64 v22; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v24; // x9
  int32_t v25; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C57A3C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C57A3C = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointMaster___);
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
  v13 = entity;
  if ( !entity )
LABEL_27:
    sub_1C3E7C0(Instance, v10);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    group1 = v13->fields.group1;
    if ( !group1 )
      goto LABEL_27;
    max_length_low = LODWORD(group1->max_length);
    if ( (__int64)v14 >= (int)max_length_low )
      break;
    if ( v14 >= max_length_low )
LABEL_31:
      sub_1C3E7C8(Instance, v10);
    v19 = group1->m_Items[v14];
    if ( v19 == groupId )
      v15 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v19, v12);
    v13 = entity;
    v16 += Instance;
    ++v14;
    if ( !entity )
      goto LABEL_27;
  }
  v21 = 0;
  v22 = 0;
  while ( 1 )
  {
    group2 = v13->fields.group2;
    if ( !group2 )
      goto LABEL_27;
    v24 = LODWORD(group2->max_length);
    if ( (__int64)v21 >= (int)v24 )
      break;
    if ( v21 >= v24 )
      goto LABEL_31;
    v25 = group2->m_Items[v21];
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
bool TotalEventPointMaster__TryGetEntity(
        TotalEventPointMaster_o *this,
        TotalEventPointEntity_o **entity,
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C57A3A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
    byte_4C57A3A = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}