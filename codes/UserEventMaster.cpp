void __fastcall UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B6C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__, method);
    byte_4188B6C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    95,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188B6A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__, userId);
    byte_4188B6A = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntityDefinitely(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x23
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  UserEventEntity_o *v23; // x19
  const MethodInfo *v24; // x3
  UserEventEntity_o *v25; // x0
  __int64 v26; // x10

  if ( (byte_4188B6D & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B2C35C(&UserEventEntity_TypeInfo, v7);
    byte_4188B6D = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v13 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v11);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v23 = (UserEventEntity_o *)sub_B2C42C(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_27008216(v23, userId, eventId, v24);
    return v23;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B2C434(lookup, v10);
  v18 = lookup->klass;
  v19 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 2].method;
  }
  else
  {
LABEL_16:
    v22 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v17);
  }
  v25 = (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v22)(
                               v19,
                               PK,
                               *(_QWORD *)(v22 + 8));
  if ( !v25 )
    return 0LL;
  v26 = *(&UserEventEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26 )
    return 0LL;
  if ( (UserEventEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] == UserEventEntity_TypeInfo )
    return v25;
  return 0LL;
}


bool __fastcall UserEventMaster__TryGetEntity(
        UserEventMaster_o *this,
        UserEventEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188B6B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__, entity);
    byte_4188B6B = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *__fastcall UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4188B6E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188B6E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventMaster__getList_27016708(this, UserId, v4);
}


UserEventEntity_array *__fastcall UserEventMaster__getList_27016708(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = userId;
  if ( (byte_4188B6F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserEventEntity__TypeInfo, v9);
    sub_B2C35C(&UserEventEntity_TypeInfo, v10);
    byte_4188B6F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        v15 = *(&UserEventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (UserEventEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == UserEventEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventEntity__Add__);
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, userId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (UserEventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}