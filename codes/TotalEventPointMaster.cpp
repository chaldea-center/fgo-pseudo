void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__, method, v2);
    byte_4B16D4D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    153,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4B16D4B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&id);
    byte_4B16D4B = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31B3198 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalEventPointMaster__GetPeriodTotalPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int64_t v14; // x22
  int32_t v15; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_4B16D4F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&periodId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&TotalEventPointEntity_TypeInfo, v9, v10);
    byte_4B16D4F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0LL;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(TotalEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (TotalEventPointEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != TotalEventPointEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v14 += (int64_t)list[1].monitor;
      if ( v13 == ++v15 )
        return v14;
    }
LABEL_17:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  int64_t *lookup; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_String_o *v47; // x20
  int64_t v48; // x8
  int64_t *v49; // x21
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  int64_t v53; // x8
  int64_t *v54; // x19
  __int64 v55; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v56; // x10
  __int64 v57; // x0
  __int64 methodPtr_low; // x10
  int32_t v60; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v61; // [xsp+18h] [xbp-28h] BYREF
  int32_t v62; // [xsp+1Ch] [xbp-24h] BYREF

  v61 = periodId;
  v62 = eventId;
  v60 = groupId;
  if ( (byte_4B16D50 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&eventId,
      *(_QWORD *)&periodId);
    sub_1BCA7E0(&string___TypeInfo, v6, v7);
    sub_1BCA7E0(&TotalEventPointEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v10, v11);
    byte_4B16D50 = 1;
  }
  v12 = sub_1BCA888(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v62, 0LL);
  if ( !v12 )
    goto LABEL_30;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_29;
  *(_QWORD *)(v12 + 32) = lookup;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)lookup, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_29;
  v27 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 40), v27, v21, v22, v23, v24, v25, v26);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v61, 0LL);
  if ( *(_DWORD *)(v12 + 24) <= 2u
    || (*(_QWORD *)(v12 + 48) = lookup,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 48), (int64_t)lookup, v28, v29, v30, v31, v32, v33),
        *(_DWORD *)(v12 + 24) <= 3u)
    || (v40 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 56), v40, v34, v35, v36, v37, v38, v39),
        lookup = (int64_t *)System_Int32__ToString((int32_t)&v60, 0LL),
        *(_DWORD *)(v12 + 24) <= 4u) )
  {
LABEL_29:
    sub_1BCAA44(lookup, v14);
  }
  *(_QWORD *)(v12 + 64) = lookup;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 64), (int64_t)lookup, v41, v42, v43, v44, v45, v46);
  v47 = System_String__Concat_62414748((System_String_array *)v12, 0LL);
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  v48 = *lookup;
  v49 = lookup;
  v50 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v51 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_14;
    }
    v52 = v48 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_14:
    v52 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v52)(v49, v47, *(_QWORD *)(v52 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  v53 = *lookup;
  v54 = lookup;
  v55 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v56 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *(v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v55;
      v56 += 2;
      if ( !v55 )
        goto LABEL_22;
    }
    v57 = v53 + 16LL * (*(_DWORD *)v56 + 2) + 312;
  }
  else
  {
LABEL_22:
    v57 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v57)(
                        v54,
                        v47,
                        *(_QWORD *)(v57 + 8));
  if ( !lookup
    || (methodPtr_low = LOBYTE(TotalEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*lookup + 304) < (unsigned int)methodPtr_low)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*lookup + 200) + 8 * methodPtr_low - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_30:
    sub_1BCAA3C(lookup, v14);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t Instance; // x0
  __int64 v14; // x1
  int64_t endedAt; // x23
  const MethodInfo *v16; // x4
  EventPointEntity_o *v17; // x8
  unsigned __int64 v18; // x25
  int v19; // w24
  __int64 v20; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length; // x10
  int32_t v23; // w3
  unsigned __int64 v25; // x26
  __int64 v26; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v28; // x9
  int32_t v29; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B16D4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointMaster___, *(_QWORD *)&eventId, *(_QWORD *)&periodId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B16D4E = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventPointMaster__TryGetEntity((EventPointMaster_o *)Instance, &entity, periodId, eventId, 0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_27;
  endedAt = entity->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = NetworkManager__getTime(0LL);
  if ( endedAt >= Instance )
    return 0;
  v17 = entity;
  if ( !entity )
LABEL_27:
    sub_1BCAA3C(Instance, v14);
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    group1 = v17->fields.group1;
    if ( !group1 )
      goto LABEL_27;
    max_length = group1->max_length;
    if ( (__int64)v18 >= (int)max_length )
      break;
    if ( v18 >= max_length )
LABEL_31:
      sub_1BCAA44(Instance, v14);
    v23 = group1->m_Items[v18 + 1];
    if ( v23 == groupId )
      v19 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v23, v16);
    v17 = entity;
    v20 += Instance;
    ++v18;
    if ( !entity )
      goto LABEL_27;
  }
  v25 = 0LL;
  v26 = 0LL;
  while ( 1 )
  {
    group2 = v17->fields.group2;
    if ( !group2 )
      goto LABEL_27;
    v28 = group2->max_length;
    if ( (__int64)v25 >= (int)v28 )
      break;
    if ( v25 >= v28 )
      goto LABEL_31;
    v29 = group2->m_Items[v25 + 1];
    if ( v29 == groupId )
      v19 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v29, v16);
    v17 = entity;
    v26 += Instance;
    ++v25;
    if ( !entity )
      goto LABEL_27;
  }
  if ( v19 == 1 )
    return v20 >= v26;
  else
    return v20 < v26 && v19 == 2;
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

  if ( (byte_4B16D4C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16D4C = 1;
  }
  PK = (Il2CppObject *)TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}