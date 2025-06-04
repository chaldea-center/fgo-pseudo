void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02C8A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__, method);
    byte_4B02C8A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4B02C88 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B02C88 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32B3B28 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
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

  if ( (byte_4B02C8C & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__, v7);
    byte_4B02C8C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
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
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v11 += (int64_t)list[1].monitor;
      if ( v10 == ++v12 )
        return v11;
    }
LABEL_15:
    sub_1BC3264(list, *(_QWORD *)&eventId);
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
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  int32_t v18; // w1
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
  if ( (byte_4B02C8D & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, v6);
    sub_1BC3008(&string___TypeInfo, v7);
    sub_1BC3008(&StringLiteral_1447/*":"*/, v8);
    byte_4B02C8D = 1;
  }
  v9 = sub_1BC30B0(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v34, 0LL);
  if ( !v9 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = lookup;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)lookup, v12, v13);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_27;
  v15 = StringLiteral_1447/*":"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_1447/*":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 40), v15, v12, v14);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v33, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 2u
    || (*(_QWORD *)(v9 + 48) = lookup,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)lookup, v12, v16),
        *(_DWORD *)(v9 + 24) <= 3u)
    || (v18 = StringLiteral_1447/*":"*/,
        *(_QWORD *)(v9 + 56) = StringLiteral_1447/*":"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 56), v18, v12, v17),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v32, 0LL),
        *(_DWORD *)(v9 + 24) <= 4u) )
  {
LABEL_27:
    sub_1BC326C(lookup, v11, v12);
  }
  *(_QWORD *)(v9 + 64) = lookup;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)lookup, v12, v19);
  v20 = System_String__Concat_62389164((System_String_array *)v9, 0LL);
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_32B191C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
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
    v25 = sub_1C13570(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo,
            0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v25)(v22, v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_32B191C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
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
    v30 = sub_1C13570(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo,
            2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v30)(
                        v27,
                        v20,
                        *(_QWORD *)(v30 + 8));
  if ( !lookup )
LABEL_28:
    sub_1BC3264(lookup, v11);
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
  __int64 v14; // x2
  const MethodInfo *v15; // x4
  EventPointEntity_o *v16; // x8
  unsigned __int64 v17; // x25
  int v18; // w24
  __int64 v19; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length; // x10
  int32_t v22; // w3
  unsigned __int64 v24; // x26
  __int64 v25; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v27; // x9
  int32_t v28; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B02C8B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B02C8B = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointMaster___);
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
  v16 = entity;
  if ( !entity )
LABEL_27:
    sub_1BC3264(Instance, v12);
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  while ( 1 )
  {
    group1 = v16->fields.group1;
    if ( !group1 )
      goto LABEL_27;
    max_length = group1->max_length;
    if ( (__int64)v17 >= (int)max_length )
      break;
    if ( v17 >= max_length )
LABEL_31:
      sub_1BC326C(Instance, v12, v14);
    v22 = group1->m_Items[v17 + 1];
    if ( v22 == groupId )
      v18 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v22, v15);
    v16 = entity;
    v19 += Instance;
    ++v17;
    if ( !entity )
      goto LABEL_27;
  }
  v24 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    group2 = v16->fields.group2;
    if ( !group2 )
      goto LABEL_27;
    v27 = group2->max_length;
    if ( (__int64)v24 >= (int)v27 )
      break;
    if ( v24 >= v27 )
      goto LABEL_31;
    v28 = group2->m_Items[v24 + 1];
    if ( v28 == groupId )
      v18 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v28, v15);
    v16 = entity;
    v25 += Instance;
    ++v24;
    if ( !entity )
      goto LABEL_27;
  }
  if ( v18 == 1 )
    return v19 >= v25;
  else
    return v19 < v25 && v18 == 2;
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

  if ( (byte_4B02C89 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__, entity);
    byte_4B02C89 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}