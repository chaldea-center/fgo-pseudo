void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B67 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method);
    byte_4188B67 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    348,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_4188B65 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__, userId);
    byte_4188B65 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


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
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  UserEventMapEntity_c *v30; // x1
  __int64 v31; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_4188B69 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v12);
    sub_B2C35C(&UserEventMapEntity_TypeInfo, v13);
    byte_4188B69 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    if ( v29 )
    {
      v30 = UserEventMapEntity_TypeInfo;
      v31 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) < (unsigned int)v31
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * v31 - 8) != UserEventMapEntity_TypeInfo )
      {
        v29 = sub_B2C728(v29);
LABEL_33:
        sub_B2C434(v29, v30);
      }
      if ( *(_QWORD *)(v29 + 16) == userId && *(_DWORD *)(v29 + 24) == eventId )
      {
        if ( !v14 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
      }
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_29:
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_27014188(
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
  System_Int32_array *v49; // x8
  System_Int32_array **v50; // x19
  unsigned __int64 v51; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v52; // x11
  __int64 v53; // x0
  __int64 v54; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventMapEntity_o *v59; // [xsp+10h] [xbp-30h] BYREF
  int32_t v60; // [xsp+18h] [xbp-28h] BYREF
  int32_t v61; // [xsp+1Ch] [xbp-24h] BYREF

  v60 = mapId;
  v61 = eventId;
  if ( (byte_4188B68 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&UserEventMapEntity_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v8);
    byte_4188B68 = 1;
  }
  UserId = 0LL;
  v59 = 0LL;
  v9 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v9 )
LABEL_43:
    sub_B2C434(lookup, v11);
  v18 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v9->max_length )
    goto LABEL_41;
  v9->m_Items[0] = (System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  lookup = (System_Int32_array **)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B2C41C(StringLiteral_1225/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v25 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_41;
  v9->m_Items[1] = (System_String_o *)v25;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v61, 0LL);
  v32 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_41;
  v9->m_Items[2] = (System_String_o *)v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  lookup = (System_Int32_array **)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B2C41C(StringLiteral_1225/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v39 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_41;
  v9->m_Items[3] = (System_String_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v60, 0LL);
  v46 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v57 = sub_B2C454(lookup);
      sub_B2C400(v57, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_41:
    v56 = sub_B2C460(lookup);
    sub_B2C400(v56, 0LL);
  }
  v9->m_Items[4] = (System_String_o *)v46;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v47 = System_String__Concat_44385656(v9, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v49 = *lookup;
  v50 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v51 = 0LL;
    v52 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v49->m_Items[37]
                                                                                      + 8LL);
    while ( *(v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v51;
      v52 += 2;
      if ( v51 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v53 = (__int64)&(&v49->bounds)[2 * *(_DWORD *)v52 + 39];
  }
  else
  {
LABEL_31:
    v53 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v48);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventMapEntity_o **, _QWORD))v53)(
          v50,
          v47,
          &v59,
          *(_QWORD *)(v53 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  v54 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v54 )
    return 0LL;
  if ( (UserEventMapEntity_c *)v59->klass->_2.typeHierarchy[v54 - 1] == UserEventMapEntity_TypeInfo )
    return v59;
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

  if ( (byte_4188B66 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity);
    byte_4188B66 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}