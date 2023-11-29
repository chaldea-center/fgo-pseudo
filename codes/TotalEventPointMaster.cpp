void __fastcall TotalEventPointMaster___ctor(TotalEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB80D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__, method);
    byte_40FB80D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    151,
    (const MethodInfo_266F73C *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string___ctor__);
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

  if ( (byte_40FB80B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FB80B = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266F7D8 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10

  if ( (byte_40FB80F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&TotalEventPointEntity_TypeInfo, v8);
    byte_40FB80F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v14 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v14,
               v13,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v16 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (TotalEventPointEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] != TotalEventPointEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].klass) == periodId )
        v12 += (int64_t)Item[2].klass;
      if ( ++v13 >= v11 )
        return v12;
    }
LABEL_17:
    sub_B170D4();
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
  System_String_o *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x21
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_o *v41; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v44; // x21
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v48; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v49; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v50; // x19
  unsigned __int64 v51; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v52; // x11
  __int64 v53; // x0
  int64_t *v55; // x0
  __int64 v56; // x10
  int32_t v57; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v58; // [xsp+8h] [xbp-28h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-24h] BYREF

  v58 = periodId;
  v59 = eventId;
  v57 = groupId;
  if ( (byte_40FB810 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&TotalEventPointEntity_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1223, v8);
    byte_40FB810 = 1;
  }
  v9 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, *(_QWORD *)&periodId);
  v10 = System_Int32__ToString((int32_t)&v59, 0LL);
  if ( !v9 )
    goto LABEL_45;
  v18 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B170BC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_46;
  }
  if ( !v9->max_length )
    goto LABEL_44;
  v9->m_Items[0] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  v10 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v10 = (System_String_o *)sub_B170BC(StringLiteral_1223, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_46;
    v11 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_44;
  v9->m_Items[1] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[1], v11, v12, v19, v20, v21, v22, v23);
  v10 = System_Int32__ToString((int32_t)&v58, 0LL);
  v29 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B170BC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_46;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_44;
  v9->m_Items[2] = (System_String_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[2], v29, v12, v24, v25, v26, v27, v28);
  v10 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v10 = (System_String_o *)sub_B170BC(StringLiteral_1223, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_46;
    v11 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_44;
  v9->m_Items[3] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[3], v11, v12, v30, v31, v32, v33, v34);
  v10 = System_Int32__ToString((int32_t)&v57, 0LL);
  v40 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B170BC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_46:
      sub_B170F4(v10);
      sub_B170A0();
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_44:
    sub_B17100(v10, v11, v12);
    sub_B170A0();
  }
  v9->m_Items[4] = (System_String_o *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[4], v40, v12, v35, v36, v37, v38, v39);
  v41 = System_String__Concat_43823856(v9, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_45;
  klass = lookup->klass;
  v44 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v45;
      p_offset += 4;
      if ( v45 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_28:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v44,
          v41,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  v48 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !v48 )
    goto LABEL_45;
  v49 = v48->klass;
  v50 = v48;
  if ( *(_WORD *)&v48->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v49->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v51;
      v52 += 2;
      if ( v51 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v53 = (__int64)&v49->vtable[*(_DWORD *)v52 + 2].method;
  }
  else
  {
LABEL_36:
    v53 = sub_AAFEF8(v48, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v55 = (int64_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v53)(
                     v50,
                     v41,
                     *(_QWORD *)(v53 + 8));
  if ( !v55
    || (v56 = *(&TotalEventPointEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v55 + 300) < (unsigned int)v56)
    || *(TotalEventPointEntity_c **)(*(_QWORD *)(*v55 + 200) + 8 * v56 - 8) != TotalEventPointEntity_TypeInfo )
  {
LABEL_45:
    sub_B170D4();
  }
  return v55[4];
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
  WebViewManager_o *Instance; // x0
  EventPointMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t endedAt; // x23
  int64_t Time; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  EventPointEntity_o *v18; // x8
  unsigned __int64 v19; // x25
  int v20; // w24
  __int64 v21; // x23
  struct System_Int32_array *group1; // x9
  unsigned __int64 max_length; // x10
  int32_t v24; // w3
  unsigned __int64 v26; // x26
  __int64 v27; // x25
  struct System_Int32_array *group2; // x8
  unsigned __int64 v29; // x9
  int32_t v30; // w3
  EventPointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FB80E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FB80E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (EventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !EventPointMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, periodId, eventId, 0LL) )
    return 0;
  if ( !entity )
    goto LABEL_28;
  endedAt = entity->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( endedAt >= Time )
    return 0;
  v18 = entity;
  if ( !entity )
LABEL_28:
    sub_B170D4();
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  while ( 1 )
  {
    group1 = v18->fields.group1;
    if ( !group1 )
      goto LABEL_28;
    max_length = group1->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
    {
LABEL_32:
      sub_B17100(Time, v15, v16);
      sub_B170A0();
    }
    v24 = group1->m_Items[v19 + 1];
    if ( v24 == groupId )
      v20 = 1;
    Time = TotalEventPointMaster__GetPoint(this, eventId, periodId, v24, v17);
    v18 = entity;
    v21 += Time;
    ++v19;
    if ( !entity )
      goto LABEL_28;
  }
  v26 = 0LL;
  v27 = 0LL;
  while ( 1 )
  {
    group2 = v18->fields.group2;
    if ( !group2 )
      goto LABEL_28;
    v29 = group2->max_length;
    if ( (__int64)v26 >= (int)v29 )
      break;
    if ( v26 >= v29 )
      goto LABEL_32;
    v30 = group2->m_Items[v26 + 1];
    if ( v30 == groupId )
      v20 = 2;
    Time = TotalEventPointMaster__GetPoint(this, eventId, periodId, v30, v17);
    v18 = entity;
    v27 += Time;
    ++v26;
    if ( !entity )
      goto LABEL_28;
  }
  if ( v20 == 1 )
    return v21 >= v27;
  else
    return v21 < v27 && v20 == 2;
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

  if ( (byte_40FB80C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__, entity);
    byte_40FB80C = 1;
  }
  PK = TotalEventPointEntity__CreatePK(eventId, id, groupId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_TotalEventPointMaster__TotalEventPointEntity__string__TryGetEntity__);
}