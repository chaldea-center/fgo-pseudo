void __fastcall UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1559 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
    byte_42B1559 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    96,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1557 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
    byte_42B1557 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntityDefinitely(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x23
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  unsigned __int64 v19; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x11
  __int64 v21; // x0
  UserEventEntity_o *v22; // x19
  const MethodInfo *v23; // x3
  UserEventEntity_o *v24; // x0
  __int64 v25; // x10

  if ( (byte_42B155A & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&UserEventEntity_TypeInfo);
    byte_42B155A = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v12 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v10);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = (UserEventEntity_o *)sub_B52A54(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_27459876(v22, userId, eventId, v23);
    return v22;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B52A5C(lookup, v9);
  v17 = lookup->klass;
  v18 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v19;
      v20 += 2;
      if ( v19 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_16:
    v21 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v16);
  }
  v24 = (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v21)(
                               v18,
                               PK,
                               *(_QWORD *)(v21 + 8));
  if ( !v24 )
    return 0LL;
  v25 = *(&UserEventEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25 )
    return 0LL;
  if ( (UserEventEntity_c *)v24->klass->_2.typeHierarchy[v25 - 1] == UserEventEntity_TypeInfo )
    return v24;
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

  if ( (byte_42B1558 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
    byte_42B1558 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *__fastcall UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_42B155B & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B155B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventMaster__getList_27468368(this, UserId, v4);
}


UserEventEntity_array *__fastcall UserEventMaster__getList_27468368(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = userId;
  if ( (byte_42B155C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserEventEntity__TypeInfo);
    sub_B52984(&UserEventEntity_TypeInfo);
    byte_42B155C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        v9 = *(&UserEventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (UserEventEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == UserEventEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserEventEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, userId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (UserEventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}