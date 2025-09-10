void TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F87 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
    byte_4C27F87 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_338A52C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4C27F85 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
    byte_4C27F85 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_338C850 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
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

  if ( (byte_4C27F89 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
    byte_4C27F89 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_TotalEventPointEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v10 += (int64_t)list[1].monitor;
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_15:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  System_String_o *v17; // x20
  int64_t v18; // x8
  int64_t *v19; // x21
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  int64_t v23; // x8
  int64_t *v24; // x19
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **v26; // x10
  __int64 v27; // x0
  int32_t v29; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  v30 = periodId;
  v31 = eventId;
  v29 = groupId;
  if ( (byte_4C27F8A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27F8A = 1;
  }
  v6 = sub_1C2D538(string___TypeInfo, 5);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v31, 0);
  if ( !v6 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v6 + 32) = lookup;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)lookup, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_27;
  v12 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1456/*":"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), v12, v9, v11);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v30, 0);
  if ( *(_DWORD *)(v6 + 24) <= 2u
    || (*(_QWORD *)(v6 + 48) = lookup,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 48), (int32_t)lookup, v9, v13),
        *(_DWORD *)(v6 + 24) <= 3u)
    || (v15 = StringLiteral_1456/*":"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_1456/*":"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 56), v15, v9, v14),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v29, 0),
        *(_DWORD *)(v6 + 24) <= 4u) )
  {
LABEL_27:
    sub_1C2D6F4(lookup, v8, v9);
  }
  *(_QWORD *)(v6 + 64) = lookup;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 64), (int32_t)lookup, v9, v16);
  v17 = System_String__Concat_63498380((System_String_array *)v6, 0);
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_338A644 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v18 = *lookup;
  v19 = lookup;
  v20 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = v18 + 16LL * *v21 + 312;
  }
  else
  {
LABEL_14:
    v22 = sub_1C7DCA8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v22)(v19, v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
    return 0;
  lookup = (int64_t *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_338A644 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_28;
  v23 = *lookup;
  v24 = lookup;
  v25 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v26 = (System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__c **)(*(_QWORD *)(v23 + 176)
                                                                                             + 8LL);
    while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_22;
    }
    v27 = v23 + 16LL * (*(_DWORD *)v26 + 2) + 312;
  }
  else
  {
LABEL_22:
    v27 = sub_1C7DCA8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__TotalEventPointEntity__TypeInfo, 2);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v27)(
                        v24,
                        v17,
                        *(_QWORD *)(v27 + 8));
  if ( !lookup )
LABEL_28:
    sub_1C2D6EC(lookup, v8);
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
  __int64 v12; // x2
  const MethodInfo *v13; // x4
  EventPointEntity_o *v14; // x8
  unsigned __int64 v15; // x25
  int v16; // w24
  __int64 v17; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length_low; // x10
  int32_t v20; // w3
  unsigned __int64 v22; // x26
  __int64 v23; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v25; // x9
  int32_t v26; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C27F88 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27F88 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointMaster___);
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
  v14 = entity;
  if ( !entity )
LABEL_27:
    sub_1C2D6EC(Instance, v10);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    group1 = v14->fields.group1;
    if ( !group1 )
      goto LABEL_27;
    max_length_low = LODWORD(group1->max_length);
    if ( (__int64)v15 >= (int)max_length_low )
      break;
    if ( v15 >= max_length_low )
LABEL_31:
      sub_1C2D6F4(Instance, v10, v12);
    v20 = group1->m_Items[v15];
    if ( v20 == groupId )
      v16 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v20, v13);
    v14 = entity;
    v17 += Instance;
    ++v15;
    if ( !entity )
      goto LABEL_27;
  }
  v22 = 0;
  v23 = 0;
  while ( 1 )
  {
    group2 = v14->fields.group2;
    if ( !group2 )
      goto LABEL_27;
    v25 = LODWORD(group2->max_length);
    if ( (__int64)v22 >= (int)v25 )
      break;
    if ( v22 >= v25 )
      goto LABEL_31;
    v26 = group2->m_Items[v22];
    if ( v26 == groupId )
      v16 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v26, v13);
    v14 = entity;
    v23 += Instance;
    ++v22;
    if ( !entity )
      goto LABEL_27;
  }
  if ( v16 == 1 )
    return v17 >= v23;
  else
    return v17 < v23 && v16 == 2;
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

  if ( (byte_4C27F86 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
    byte_4C27F86 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}