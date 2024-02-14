void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215C28 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method);
    byte_4215C28 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    348,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_4215C26 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__, userId);
    byte_4215C26 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266A024 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_4215C2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userId);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v12);
    sub_B0D8A4(&UserEventMapEntity_TypeInfo, v13);
    byte_4215C2A = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserEventMapEntity__TypeInfo,
                                                                                                  userId,
                                                                                                  *(_QWORD *)&eventId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      v26 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v26
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v26 - 8) != UserEventMapEntity_TypeInfo )
      {
        v25 = sub_B0DC70(v25);
LABEL_33:
        sub_B0D97C(v25);
      }
      if ( *(_QWORD *)(v25 + 16) == userId && *(_DWORD *)(v25 + 24) == eventId )
      {
        if ( !v14 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
      }
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_26766520(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array *v9; // x20
  System_Int32_array **lookup; // x0
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
  System_Int32_array *v47; // x8
  System_Int32_array **v48; // x19
  unsigned __int64 v49; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v50; // x11
  __int64 v51; // x0
  __int64 v52; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventMapEntity_o *v57; // [xsp+10h] [xbp-30h] BYREF
  int32_t v58; // [xsp+18h] [xbp-28h] BYREF
  int32_t v59; // [xsp+1Ch] [xbp-24h] BYREF

  v58 = mapId;
  v59 = eventId;
  if ( (byte_4215C29 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&UserEventMapEntity_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v8);
    byte_4215C29 = 1;
  }
  UserId = 0LL;
  v57 = 0LL;
  v9 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v9 )
LABEL_43:
    sub_B0D97C(lookup);
  v17 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v9->max_length )
    goto LABEL_41;
  v9->m_Items[0] = (System_String_o *)v17;
  sub_B0D840((BattleServantConfConponent_o *)v9->m_Items, v17, v11, v12, v13, v14, v15, v16);
  lookup = (System_Int32_array **)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B0D964(StringLiteral_1232/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v24 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_41;
  v9->m_Items[1] = (System_String_o *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v59, 0LL);
  v31 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_41;
  v9->m_Items[2] = (System_String_o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  lookup = (System_Int32_array **)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B0D964(StringLiteral_1232/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v38 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_41;
  v9->m_Items[3] = (System_String_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v58, 0LL);
  v45 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v55 = sub_B0D99C(lookup);
      sub_B0D948(v55, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_41:
    v54 = sub_B0D9A8(lookup);
    sub_B0D948(v54, 0LL);
  }
  v9->m_Items[4] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v46 = System_String__Concat_43930028(v9, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v47 = *lookup;
  v48 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v49 = 0LL;
    v50 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v47->m_Items[37]
                                                                                      + 8LL);
    while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v49;
      v50 += 2;
      if ( v49 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v51 = (__int64)&(&v47->bounds)[2 * *(_DWORD *)v50 + 39];
  }
  else
  {
LABEL_31:
    v51 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventMapEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v57,
          *(_QWORD *)(v51 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v57 )
    return 0LL;
  v52 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v52 )
    return 0LL;
  if ( (UserEventMapEntity_c *)v57->klass->_2.typeHierarchy[v52 - 1] == UserEventMapEntity_TypeInfo )
    return v57;
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

  if ( (byte_4215C27 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity);
    byte_4215C27 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}