void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42167B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__, method);
    byte_42167B0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    151,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventPointEntity_o *__fastcall TotalEventPointMaster__GetEntity(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42167AE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_42167AE = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266A024 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int64_t v12; // x22
  int32_t v13; // w24
  __int64 v14; // x10

  if ( (byte_42167B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&TotalEventPointEntity_TypeInfo, v8);
    byte_42167B2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (TotalEventPointEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != TotalEventPointEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v12 += (int64_t)list[1].klass;
      if ( ++v13 >= v11 )
        return v12;
    }
LABEL_17:
    sub_B0D97C(list);
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
  System_String_array *v9; // x20
  int64_t *lookup; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  System_String_o *v46; // x20
  int64_t v47; // x8
  int64_t *v48; // x21
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  int64_t v52; // x8
  int64_t *v53; // x19
  unsigned __int64 v54; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v55; // x11
  __int64 v56; // x0
  __int64 v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t v61; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v62; // [xsp+8h] [xbp-28h] BYREF
  int32_t v63; // [xsp+Ch] [xbp-24h] BYREF

  v62 = periodId;
  v63 = eventId;
  v61 = groupId;
  if ( (byte_42167B3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&TotalEventPointEntity_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v8);
    byte_42167B3 = 1;
  }
  v9 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v63, 0LL);
  if ( !v9 )
    goto LABEL_45;
  v17 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( !v9->max_length )
    goto LABEL_44;
  v9->m_Items[0] = (System_String_o *)v17;
  sub_B0D840((BattleServantConfConponent_o *)v9->m_Items, v17, v11, v12, v13, v14, v15, v16);
  lookup = (int64_t *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    lookup = (int64_t *)sub_B0D964(StringLiteral_1232/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v24 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_44;
  v9->m_Items[1] = (System_String_o *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v62, 0LL);
  v31 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_44;
  v9->m_Items[2] = (System_String_o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  lookup = (int64_t *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    lookup = (int64_t *)sub_B0D964(StringLiteral_1232/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v38 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_44;
  v9->m_Items[3] = (System_String_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v61, 0LL);
  v45 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_46:
      v60 = sub_B0D99C(lookup);
      sub_B0D948(v60, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_44:
    v59 = sub_B0D9A8(lookup);
    sub_B0D948(v59, 0LL);
  }
  v9->m_Items[4] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v46 = System_String__Concat_43930028(v9, 0LL);
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v47 = *lookup;
  v48 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v49 = 0LL;
    v50 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_28;
    }
    v51 = v47 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_28:
    v51 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v51)(v48, v46, *(_QWORD *)(v51 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v52 = *lookup;
  v53 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v54 = 0LL;
    v55 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *(v55 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v54;
      v55 += 2;
      if ( v54 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_36;
    }
    v56 = v52 + 16LL * (*(_DWORD *)v55 + 2) + 312;
  }
  else
  {
LABEL_36:
    v56 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v56)(
                        v53,
                        v46,
                        *(_QWORD *)(v56 + 8));
  if ( !lookup
    || (v58 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*lookup + 300) < (unsigned int)v58)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*lookup + 200) + 8 * v58 - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_45:
    sub_B0D97C(lookup);
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
  int64_t endedAt; // x23
  const MethodInfo *v13; // x4
  EventPointEntity_o *v14; // x8
  unsigned __int64 v15; // x25
  int v16; // w24
  __int64 v17; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length; // x10
  int32_t v20; // w3
  unsigned __int64 v22; // x26
  __int64 v23; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v25; // x9
  int32_t v26; // w3
  __int64 v27; // x0
  EventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42167B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_42167B1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = EventPointMaster__TryGetEntity((EventPointMaster_o *)Instance, &entity, periodId, eventId, 0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_28;
  endedAt = entity->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( endedAt >= Instance )
    return 0;
  v14 = entity;
  if ( !entity )
LABEL_28:
    sub_B0D97C(Instance);
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  while ( 1 )
  {
    group1 = v14->fields.group1;
    if ( !group1 )
      goto LABEL_28;
    max_length = group1->max_length;
    if ( (__int64)v15 >= (int)max_length )
      break;
    if ( v15 >= max_length )
    {
LABEL_32:
      v27 = sub_B0D9A8(Instance);
      sub_B0D948(v27, 0LL);
    }
    v20 = group1->m_Items[v15 + 1];
    if ( v20 == groupId )
      v16 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v20, v13);
    v14 = entity;
    v17 += Instance;
    ++v15;
    if ( !entity )
      goto LABEL_28;
  }
  v22 = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    group2 = v14->fields.group2;
    if ( !group2 )
      goto LABEL_28;
    v25 = group2->max_length;
    if ( (__int64)v22 >= (int)v25 )
      break;
    if ( v22 >= v25 )
      goto LABEL_32;
    v26 = group2->m_Items[v22 + 1];
    if ( v26 == groupId )
      v16 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v26, v13);
    v14 = entity;
    v23 += Instance;
    ++v22;
    if ( !entity )
      goto LABEL_28;
  }
  if ( v16 == 1 )
    return v17 >= v23;
  else
    return v17 < v23 && v16 == 2;
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
  System_String_o *PK; // x2

  if ( (byte_42167AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__, entity);
    byte_42167AF = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}