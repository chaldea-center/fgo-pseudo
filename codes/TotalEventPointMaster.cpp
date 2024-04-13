void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC43 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAC43 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    152,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_42EAC41 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      eventId,
      id,
      *(_QWORD *)&groupId);
    byte_42EAC41 = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalEventPointMaster__GetPeriodTotalPoint(
        TotalEventPointMaster_o *this,
        int32_t eventId,
        int32_t periodId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int64_t v16; // x22
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_42EAC45 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, periodId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&TotalEventPointEntity_TypeInfo, v10, v11, v12);
    byte_42EAC45 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0LL;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v18 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (TotalEventPointEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] != TotalEventPointEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == periodId )
        v16 += (int64_t)list[1].klass;
      if ( ++v17 >= v15 )
        return v16;
    }
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&eventId);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_array *v15; // x20
  int64_t *lookup; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x21
  System_String_o *v53; // x20
  __int64 v54; // x3
  int64_t v55; // x8
  int64_t *v56; // x21
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x3
  int64_t v61; // x8
  int64_t *v62; // x19
  unsigned __int64 v63; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v64; // x11
  __int64 v65; // x0
  __int64 v67; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  int32_t v70; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v71; // [xsp+8h] [xbp-28h] BYREF
  int32_t v72; // [xsp+Ch] [xbp-24h] BYREF

  v71 = periodId;
  v72 = eventId;
  v70 = groupId;
  if ( (byte_42EAC46 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      eventId,
      periodId,
      *(_QWORD *)&groupId);
    sub_B5D5C4(&string___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TotalEventPointEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v12, v13, v14);
    byte_42EAC46 = 1;
  }
  v15 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v72, 0LL);
  if ( !v15 )
    goto LABEL_45;
  v24 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B5D684(lookup, v15->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( !v15->max_length )
    goto LABEL_44;
  v15->m_Items[0] = (System_String_o *)v24;
  sub_B5D560((BattleServantConfConponent_o *)v15->m_Items, v24, v18, v19, v20, v21, v22, v23);
  lookup = (int64_t *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    lookup = (int64_t *)sub_B5D684(StringLiteral_1245/*":"*/, v15->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v31 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_44;
  v15->m_Items[1] = (System_String_o *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v71, 0LL);
  v38 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B5D684(lookup, v15->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_44;
  v15->m_Items[2] = (System_String_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  lookup = (int64_t *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    lookup = (int64_t *)sub_B5D684(StringLiteral_1245/*":"*/, v15->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_46;
    v45 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_44;
  v15->m_Items[3] = (System_String_o *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  lookup = (int64_t *)System_Int32__ToString((int32_t)&v70, 0LL);
  v52 = (System_Int32_array **)lookup;
  if ( lookup )
  {
    lookup = (int64_t *)sub_B5D684(lookup, v15->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_46:
      v69 = sub_B5D6BC(lookup);
      sub_B5D668(v69, 0LL);
    }
  }
  if ( v15->max_length <= 4 )
  {
LABEL_44:
    v68 = sub_B5D6C8(lookup);
    sub_B5D668(v68, 0LL);
  }
  v15->m_Items[4] = (System_String_o *)v52;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
  v53 = System_String__Concat_44657912(v15, 0LL);
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v55 = *lookup;
  v56 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v57 = 0LL;
    v58 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v58 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_28;
    }
    v59 = v55 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_28:
    v59 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v54);
  }
  if ( ((*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v59)(v56, v53, *(_QWORD *)(v59 + 8)) & 1) == 0 )
    return 0LL;
  lookup = (int64_t *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  v61 = *lookup;
  v62 = lookup;
  if ( *(_WORD *)(*lookup + 298) )
  {
    v63 = 0LL;
    v64 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *(v64 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v63;
      v64 += 2;
      if ( v63 >= *(unsigned __int16 *)(*lookup + 298) )
        goto LABEL_36;
    }
    v65 = v61 + 16LL * (*(_DWORD *)v64 + 2) + 312;
  }
  else
  {
LABEL_36:
    v65 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v60);
  }
  lookup = (int64_t *)(*(__int64 (__fastcall **)(int64_t *, System_String_o *, _QWORD))v65)(
                        v62,
                        v53,
                        *(_QWORD *)(v65 + 8));
  if ( !lookup
    || (v67 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*lookup + 300) < (unsigned int)v67)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*lookup + 200) + 8 * v67 - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_45:
    sub_B5D69C(lookup, v17);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t Instance; // x0
  __int64 v16; // x1
  int64_t endedAt; // x23
  const MethodInfo *v18; // x4
  EventPointEntity_o *v19; // x8
  unsigned __int64 v20; // x25
  int v21; // w24
  __int64 v22; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length; // x10
  int32_t v25; // w3
  unsigned __int64 v27; // x26
  __int64 v28; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v30; // x9
  int32_t v31; // w3
  __int64 v32; // x0
  EventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EAC44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointMaster___, eventId, periodId, *(_QWORD *)&groupId);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EAC44 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointMaster___);
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
  v19 = entity;
  if ( !entity )
LABEL_28:
    sub_B5D69C(Instance, v16);
  v20 = 0LL;
  v21 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    group1 = v19->fields.group1;
    if ( !group1 )
      goto LABEL_28;
    max_length = group1->max_length;
    if ( (__int64)v20 >= (int)max_length )
      break;
    if ( v20 >= max_length )
    {
LABEL_32:
      v32 = sub_B5D6C8(Instance);
      sub_B5D668(v32, 0LL);
    }
    v25 = group1->m_Items[v20 + 1];
    if ( v25 == groupId )
      v21 = 1;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v25, v18);
    v19 = entity;
    v22 += Instance;
    ++v20;
    if ( !entity )
      goto LABEL_28;
  }
  v27 = 0LL;
  v28 = 0LL;
  while ( 1 )
  {
    group2 = v19->fields.group2;
    if ( !group2 )
      goto LABEL_28;
    v30 = group2->max_length;
    if ( (__int64)v27 >= (int)v30 )
      break;
    if ( v27 >= v30 )
      goto LABEL_32;
    v31 = group2->m_Items[v27 + 1];
    if ( v31 == groupId )
      v21 = 2;
    Instance = TotalEventPointMaster__GetPoint(this, eventId, periodId, v31, v18);
    v19 = entity;
    v28 += Instance;
    ++v27;
    if ( !entity )
      goto LABEL_28;
  }
  if ( v21 == 1 )
    return v22 >= v28;
  else
    return v22 < v28 && v21 == 2;
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

  if ( (byte_42EAC42 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&id);
    byte_42EAC42 = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}