void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353D24 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
    byte_4353D24 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    152,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4353D22 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
    byte_4353D22 = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21C0890 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalEventPointMaster__GetPeriodTotalPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w23
  int64_t v10; // x22
  int32_t v11; // w24
  __int64 v12; // x10

  if ( (byte_4353D26 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&TotalEventPointEntity_TypeInfo);
    byte_4353D26 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (TotalEventPointEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] != TotalEventPointEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v10 += (int64_t)list[1].klass;
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_17:
    sub_B7076C(list, *(_QWORD *)&eventId);
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
  System_String_array *v6; // x20
  int64_t *lookup; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  System_String_o *v44; // x20
  int64_t v45; // x8
  int64_t *v46; // x21
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  int64_t v50; // x8
  int64_t *v51; // x19
  unsigned __int64 v52; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x11
  __int64 v54; // x0
  __int64 v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  int32_t v59; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v60; // [xsp+8h] [xbp-28h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-24h] BYREF

  v60 = periodId;
  v61 = eventId;
  v59 = groupId;
  if ( (byte_4353D27 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&TotalEventPointEntity_TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4353D27 = 1;
  }
  v6 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v61, 0LL);
  if ( !v6 )
    goto LABEL_45;
  v15 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B70754(lookup, v6->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( !v6->max_length )
    goto LABEL_44;
  v6->m_Items[0] = (System_String_o *)v15;
  sub_B70630((BattleServantConfConponent_o *)v6->m_Items, v15, v9, v10, v11, v12, v13, v14);
  lookup = (int64_t *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    lookup = (int64_t *)sub_B70754(StringLiteral_1250/*":"*/, v6->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v22 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_44;
  v6->m_Items[1] = (System_String_o *)v22;
  sub_B70630((BattleServantConfConponent_o *)&v6->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v60, 0LL);
  v29 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B70754(lookup, v6->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_44;
  v6->m_Items[2] = (System_String_o *)v29;
  sub_B70630((BattleServantConfConponent_o *)&v6->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  lookup = (int64_t *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    lookup = (int64_t *)sub_B70754(StringLiteral_1250/*":"*/, v6->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v36 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_44;
  v6->m_Items[3] = (System_String_o *)v36;
  sub_B70630((BattleServantConfConponent_o *)&v6->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v59, 0LL);
  v43 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B70754(lookup, v6->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_46:
      v58 = sub_B7078C(lookup);
      sub_B70738(v58, 0LL);
    }
  }
  if ( v6->max_length <= 4 )
  {
LABEL_44:
    v57 = sub_B70798(lookup);
    sub_B70738(v57, 0LL);
  }
  v6->m_Items[4] = (System_String_o *)v43;
  sub_B70630((BattleServantConfConponent_o *)&v6->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  v44 = System_String__Concat_44838292(v6, 0LL);
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v45 = *lookup;
  v46 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_28;
    }
    v49 = v45 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_28:
    v49 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v49)(v46, v44, *(_QWORD *)(v49 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v50 = *lookup;
  v51 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v52 = 0LL;
    v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v52;
      v53 += 2;
      if ( v52 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_36;
    }
    v54 = v50 + 16LL * (*(_DWORD *)v53 + 2) + 312;
  }
  else
  {
LABEL_36:
    v54 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v54)(
                        v51,
                        v44,
                        *(_QWORD *)(v54 + 8));
  if ( !lookup
    || (v56 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*lookup + 300) < (unsigned int)v56)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*lookup + 200) + 8 * v56 - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_45:
    sub_B7076C(lookup, v8);
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
  __int64 v26; // x0
  EventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4353D25 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353D25 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointMaster___);
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
  v13 = entity;
  if ( !entity )
LABEL_28:
    sub_B7076C(Instance, v10);
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  while ( 1 )
  {
    group1 = v13->fields.group1;
    if ( !group1 )
      goto LABEL_28;
    max_length = group1->max_length;
    if ( (__int64)v14 >= (int)max_length )
      break;
    if ( v14 >= max_length )
    {
LABEL_32:
      v26 = sub_B70798(Instance);
      sub_B70738(v26, 0LL);
    }
    v19 = group1->m_Items[v14 + 1];
    if ( v19 == groupId )
      v15 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v19, v12);
    v13 = entity;
    v16 += Instance;
    ++v14;
    if ( !entity )
      goto LABEL_28;
  }
  v21 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    group2 = v13->fields.group2;
    if ( !group2 )
      goto LABEL_28;
    v24 = group2->max_length;
    if ( (__int64)v21 >= (int)v24 )
      break;
    if ( v21 >= v24 )
      goto LABEL_32;
    v25 = group2->m_Items[v21 + 1];
    if ( v25 == groupId )
      v15 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v25, v12);
    v13 = entity;
    v22 += Instance;
    ++v21;
    if ( !entity )
      goto LABEL_28;
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
  System_String_o *PK; // x2

  if ( (byte_4353D23 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
    byte_4353D23 = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}