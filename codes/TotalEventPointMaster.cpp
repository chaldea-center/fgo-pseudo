void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189944 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__, method);
    byte_4189944 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    151,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_4189942 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4189942 = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
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

  if ( (byte_4189946 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&TotalEventPointEntity_TypeInfo, v8);
    byte_4189946 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_B2C434(list, *(_QWORD *)&eventId);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_o *v47; // x20
  __int64 v48; // x3
  int64_t v49; // x8
  int64_t *v50; // x21
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x3
  int64_t v55; // x8
  int64_t *v56; // x19
  unsigned __int64 v57; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v58; // x11
  __int64 v59; // x0
  __int64 v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  int32_t v64; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v65; // [xsp+8h] [xbp-28h] BYREF
  int32_t v66; // [xsp+Ch] [xbp-24h] BYREF

  v65 = periodId;
  v66 = eventId;
  v64 = groupId;
  if ( (byte_4189947 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&TotalEventPointEntity_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v8);
    byte_4189947 = 1;
  }
  v9 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v66, 0LL);
  if ( !v9 )
    goto LABEL_45;
  v18 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( !v9->max_length )
    goto LABEL_44;
  v9->m_Items[0] = (System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  lookup = (int64_t *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    lookup = (int64_t *)sub_B2C41C(StringLiteral_1225/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v25 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_44;
  v9->m_Items[1] = (System_String_o *)v25;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v65, 0LL);
  v32 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_44;
  v9->m_Items[2] = (System_String_o *)v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  lookup = (int64_t *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    lookup = (int64_t *)sub_B2C41C(StringLiteral_1225/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v39 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_44;
  v9->m_Items[3] = (System_String_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v64, 0LL);
  v46 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_46:
      v63 = sub_B2C454(lookup);
      sub_B2C400(v63, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_44:
    v62 = sub_B2C460(lookup);
    sub_B2C400(v62, 0LL);
  }
  v9->m_Items[4] = (System_String_o *)v46;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v47 = System_String__Concat_44385656(v9, 0LL);
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v49 = *lookup;
  v50 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v51 = 0LL;
    v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_28;
    }
    v53 = v49 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_28:
    v53 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v48);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v53)(v50, v47, *(_QWORD *)(v53 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v55 = *lookup;
  v56 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v57 = 0LL;
    v58 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *(v58 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v57;
      v58 += 2;
      if ( v57 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_36;
    }
    v59 = v55 + 16LL * (*(_DWORD *)v58 + 2) + 312;
  }
  else
  {
LABEL_36:
    v59 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v54);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v59)(
                        v56,
                        v47,
                        *(_QWORD *)(v59 + 8));
  if ( !lookup
    || (v61 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*lookup + 300) < (unsigned int)v61)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*lookup + 200) + 8 * v61 - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_45:
    sub_B2C434(lookup, v11);
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
  __int64 v28; // x0
  EventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4189945 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4189945 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointMaster___);
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
  v15 = entity;
  if ( !entity )
LABEL_28:
    sub_B2C434(Instance, v12);
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    group1 = v15->fields.group1;
    if ( !group1 )
      goto LABEL_28;
    max_length = group1->max_length;
    if ( (__int64)v16 >= (int)max_length )
      break;
    if ( v16 >= max_length )
    {
LABEL_32:
      v28 = sub_B2C460(Instance);
      sub_B2C400(v28, 0LL);
    }
    v21 = group1->m_Items[v16 + 1];
    if ( v21 == groupId )
      v17 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v21, v14);
    v15 = entity;
    v18 += Instance;
    ++v16;
    if ( !entity )
      goto LABEL_28;
  }
  v23 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    group2 = v15->fields.group2;
    if ( !group2 )
      goto LABEL_28;
    v26 = group2->max_length;
    if ( (__int64)v23 >= (int)v26 )
      break;
    if ( v23 >= v26 )
      goto LABEL_32;
    v27 = group2->m_Items[v23 + 1];
    if ( v27 == groupId )
      v17 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v27, v14);
    v15 = entity;
    v24 += Instance;
    ++v23;
    if ( !entity )
      goto LABEL_28;
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
  System_String_o *PK; // x2

  if ( (byte_4189943 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__, entity);
    byte_4189943 = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}