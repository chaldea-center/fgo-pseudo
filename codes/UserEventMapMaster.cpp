void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB89 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method);
    byte_40FAB89 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    348,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_40FAB87 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__, userId);
    byte_40FAB87 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_40FAB8B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userId);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v13);
    sub_B16FFC(&UserEventMapEntity_TypeInfo, v14);
    byte_40FAB8B = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserEventMapEntity__TypeInfo,
                                                                                                  userId,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    if ( v26 )
    {
      v27 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) < (unsigned int)v27
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v27 - 8) != UserEventMapEntity_TypeInfo )
      {
        sub_B173C8(v26);
LABEL_33:
        sub_B170D4();
      }
      if ( *(_QWORD *)(v26 + 16) == userId && *(_DWORD *)(v26 + 24) == eventId )
      {
        if ( !v15 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
      }
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_26577024(
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v44; // x19
  unsigned __int64 v45; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v48; // x11
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventMapEntity_o *v51; // [xsp+10h] [xbp-30h] BYREF
  int32_t v52; // [xsp+18h] [xbp-28h] BYREF
  int32_t v53; // [xsp+1Ch] [xbp-24h] BYREF

  v52 = mapId;
  v53 = eventId;
  if ( (byte_40FAB8A & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&UserEventMapEntity_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v8);
    byte_40FAB8A = 1;
  }
  UserId = 0LL;
  v51 = 0LL;
  v9 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, *(_QWORD *)&mapId);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v10 = System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v9 )
LABEL_43:
    sub_B170D4();
  v18 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B170BC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_42;
  }
  if ( !v9->max_length )
    goto LABEL_41;
  v9->m_Items[0] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  v10 = (System_String_o *)StringLiteral_1223/*":"*/;
  if ( StringLiteral_1223/*":"*/ )
  {
    v10 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_42;
    v11 = (System_Int32_array **)StringLiteral_1223/*":"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_41;
  v9->m_Items[1] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[1], v11, v12, v19, v20, v21, v22, v23);
  v10 = System_Int32__ToString((int32_t)&v53, 0LL);
  v29 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B170BC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_42;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_41;
  v9->m_Items[2] = (System_String_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[2], v29, v12, v24, v25, v26, v27, v28);
  v10 = (System_String_o *)StringLiteral_1223/*":"*/;
  if ( StringLiteral_1223/*":"*/ )
  {
    v10 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_42;
    v11 = (System_Int32_array **)StringLiteral_1223/*":"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_41;
  v9->m_Items[3] = (System_String_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[3], v11, v12, v30, v31, v32, v33, v34);
  v10 = System_Int32__ToString((int32_t)&v52, 0LL);
  v40 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B170BC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_42:
      sub_B170F4(v10);
      sub_B170A0();
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_41:
    sub_B17100(v10, v11, v12);
    sub_B170A0();
  }
  v9->m_Items[4] = (System_String_o *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[4], v40, v12, v35, v36, v37, v38, v39);
  v41 = System_String__Concat_43823856(v9, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  klass = lookup->klass;
  v44 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v45;
      p_offset += 2;
      if ( v45 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_31:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, UserEventMapEntity_o **, _QWORD))p_method)(
          v44,
          v41,
          &v51,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  if ( !v51 )
    return 0LL;
  v48 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v51->klass->_2.bitflags2 + 1) < (unsigned int)v48 )
    return 0LL;
  if ( (UserEventMapEntity_c *)v51->klass->_2.typeHierarchy[v48 - 1] == UserEventMapEntity_TypeInfo )
    return v51;
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

  if ( (byte_40FAB88 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity);
    byte_40FAB88 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}