void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4350649 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
    byte_4350649 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    349,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4350647 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
    byte_4350647 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_21C0890 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  UserEventMapEntity_c *v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_435064B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
    sub_B70694(&UserEventMapEntity_TypeInfo);
    byte_435064B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v21 = UserEventMapEntity_TypeInfo;
      v22 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v22
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) != UserEventMapEntity_TypeInfo )
      {
        v20 = sub_B70A60(v20);
LABEL_33:
        sub_B7076C(v20, v21);
      }
      if ( *(_QWORD *)(v20 + 16) == userId && *(_DWORD *)(v20 + 24) == eventId )
      {
        if ( !v7 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v7;
}


UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_22768304(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_array *v5; // x20
  System_Int32_array **lookup; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x21
  System_String_o *v43; // x20
  System_Int32_array *v44; // x8
  System_Int32_array **v45; // x19
  unsigned __int64 v46; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v47; // x11
  __int64 v48; // x0
  __int64 v49; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventMapEntity_o *v54; // [xsp+10h] [xbp-30h] BYREF
  int32_t v55; // [xsp+18h] [xbp-28h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-24h] BYREF

  v55 = mapId;
  v56 = eventId;
  if ( (byte_435064A & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&UserEventMapEntity_TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_435064A = 1;
  }
  UserId = 0LL;
  v54 = 0LL;
  v5 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v5 )
LABEL_43:
    sub_B7076C(lookup, v7);
  v14 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B70754(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v5->max_length )
    goto LABEL_41;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B70630((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  lookup = (System_Int32_array **)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B70754(StringLiteral_1250/*":"*/, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v21 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_41;
  v5->m_Items[1] = (System_String_o *)v21;
  sub_B70630((BattleServantConfConponent_o *)&v5->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v56, 0LL);
  v28 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B70754(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_41;
  v5->m_Items[2] = (System_String_o *)v28;
  sub_B70630((BattleServantConfConponent_o *)&v5->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  lookup = (System_Int32_array **)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B70754(StringLiteral_1250/*":"*/, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v35 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_41;
  v5->m_Items[3] = (System_String_o *)v35;
  sub_B70630((BattleServantConfConponent_o *)&v5->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v55, 0LL);
  v42 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B70754(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v52 = sub_B7078C();
      sub_B70738(v52, 0LL);
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_41:
    v51 = sub_B70798(lookup);
    sub_B70738(v51, 0LL);
  }
  v5->m_Items[4] = (System_String_o *)v42;
  sub_B70630((BattleServantConfConponent_o *)&v5->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  v43 = System_String__Concat_44838292(v5, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v44 = *lookup;
  v45 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v46 = 0LL;
    v47 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v44->m_Items[37]
                                                                                      + 8LL);
    while ( *(v47 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v46;
      v47 += 2;
      if ( v46 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v48 = (__int64)&(&v44->bounds)[2 * *(_DWORD *)v47 + 39];
  }
  else
  {
LABEL_31:
    v48 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventMapEntity_o **, _QWORD))v48)(
          v45,
          v43,
          &v54,
          *(_QWORD *)(v48 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v54 )
    return 0LL;
  v49 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v49 )
    return 0LL;
  if ( (UserEventMapEntity_c *)v54->klass->_2.typeHierarchy[v49 - 1] == UserEventMapEntity_TypeInfo )
    return v54;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventMapMaster__TryGetEntity(
        UserEventMapMaster_o *this,
        UserEventMapEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4350648 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
    byte_4350648 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}