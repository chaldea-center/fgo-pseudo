void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEF3E & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__, method);
    byte_49FEF3E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    153,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_49FEF3C & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FEF3C = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_30D64D8 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalEventPointMaster__GetPeriodTotalPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int64_t v12; // x22
  int32_t v13; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_49FEF40 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&TotalEventPointEntity_TypeInfo, v8);
    byte_49FEF40 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(TotalEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (TotalEventPointEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != TotalEventPointEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v12 += (int64_t)list[1].monitor;
      if ( v11 == ++v13 )
        return v12;
    }
LABEL_17:
    sub_1B64ACC(list, *(_QWORD *)&eventId);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x20
  int64_t v25; // x8
  int64_t *v26; // x21
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  int64_t v30; // x8
  int64_t *v31; // x19
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x10
  __int64 v34; // x0
  __int64 methodPtr_low; // x10
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v38; // [xsp+18h] [xbp-28h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-24h] BYREF

  v38 = periodId;
  v39 = eventId;
  v37 = groupId;
  if ( (byte_49FEF41 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_1B64870(&string___TypeInfo, v6);
    sub_1B64870(&TotalEventPointEntity_TypeInfo, v7);
    sub_1B64870(&StringLiteral_1545/*":"*/, v8);
    byte_49FEF41 = 1;
  }
  v9 = sub_1B64918(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v39, 0LL);
  if ( !v9 )
    goto LABEL_30;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_29;
  *(_QWORD *)(v9 + 32) = lookup;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)lookup, v12, v13);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_29;
  v16 = StringLiteral_1545/*":"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_1545/*":"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 40), v16, v14, v15);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v38, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 2u
    || (*(_QWORD *)(v9 + 48) = lookup,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)lookup, v17, v18),
        *(_DWORD *)(v9 + 24) <= 3u)
    || (v21 = StringLiteral_1545/*":"*/,
        *(_QWORD *)(v9 + 56) = StringLiteral_1545/*":"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 56), v21, v19, v20),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v37, 0LL),
        *(_DWORD *)(v9 + 24) <= 4u) )
  {
LABEL_29:
    sub_1B64AD4(lookup, v11);
  }
  *(_QWORD *)(v9 + 64) = lookup;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)lookup, v22, v23);
  v24 = System_String__Concat_61397104((System_String_array *)v9, 0LL);
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  v25 = *lookup;
  v26 = lookup;
  v27 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_14;
    }
    v29 = v25 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_14:
    v29 = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v29)(v26, v24, *(_QWORD *)(v29 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  v30 = *lookup;
  v31 = lookup;
  v32 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_22;
    }
    v34 = v30 + 16LL * (*(_DWORD *)v33 + 2) + 312;
  }
  else
  {
LABEL_22:
    v34 = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v34)(
                        v31,
                        v24,
                        *(_QWORD *)(v34 + 8));
  if ( !lookup
    || (methodPtr_low = LOBYTE(TotalEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*lookup + 304) < (unsigned int)methodPtr_low)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*lookup + 200) + 8 * methodPtr_low - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_30:
    sub_1B64ACC(lookup, v11);
  }
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

  if ( (byte_49FEF3F & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventPointMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&NetworkManager_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FEF3F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventPointMaster___);
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
    sub_1B64ACC(Instance, v12);
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
      sub_1B64AD4(Instance, v12);
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

  if ( (byte_49FEF3D & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__, entity);
    byte_49FEF3D = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}