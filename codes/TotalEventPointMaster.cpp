void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC98 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
    byte_4A5BC98 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    153,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4A5BC96 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
    byte_4A5BC96 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BC9A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&TotalEventPointEntity_TypeInfo);
    byte_4A5BC9A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(TotalEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (TotalEventPointEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != TotalEventPointEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v10 += (int64_t)list[1].monitor;
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_17:
    sub_1B8880C(list, *(_QWORD *)&eventId);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x20
  int64_t v22; // x8
  int64_t *v23; // x21
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  int64_t v27; // x8
  int64_t *v28; // x19
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v30; // x10
  __int64 v31; // x0
  __int64 methodPtr_low; // x10
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v35; // [xsp+18h] [xbp-28h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-24h] BYREF

  v35 = periodId;
  v36 = eventId;
  v34 = groupId;
  if ( (byte_4A5BC9B & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TotalEventPointEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BC9B = 1;
  }
  v6 = sub_1B88658(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( !v6 )
    goto LABEL_30;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_29;
  *(_QWORD *)(v6 + 32) = lookup;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)lookup, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_29;
  v13 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 40), v13, v11, v12);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v35, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u
    || (*(_QWORD *)(v6 + 48) = lookup,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 48), (int32_t)lookup, v14, v15),
        *(_DWORD *)(v6 + 24) <= 3u)
    || (v18 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 56), v18, v16, v17),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v34, 0LL),
        *(_DWORD *)(v6 + 24) <= 4u) )
  {
LABEL_29:
    sub_1B88814(lookup, v8);
  }
  *(_QWORD *)(v6 + 64) = lookup;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 64), (int32_t)lookup, v19, v20);
  v21 = System_String__Concat_61720560((System_String_array *)v6, 0LL);
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  v22 = *lookup;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    v26 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v26)(v23, v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  v27 = *lookup;
  v28 = lookup;
  v29 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v30 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v27 + 176) + 8LL);
    while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    v31 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v31)(
                        v28,
                        v21,
                        *(_QWORD *)(v31 + 8));
  if ( !lookup
    || (methodPtr_low = LOBYTE(TotalEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*lookup + 304) < (unsigned int)methodPtr_low)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*lookup + 200) + 8 * methodPtr_low - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_30:
    sub_1B8880C(lookup, v8);
  }
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

  if ( (byte_4A5BC99 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BC99 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointMaster___);
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
    sub_1B8880C(Instance, v10);
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
      sub_1B88814(Instance, v10);
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

  if ( (byte_4A5BC97 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
    byte_4A5BC97 = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}