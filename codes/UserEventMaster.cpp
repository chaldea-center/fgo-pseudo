void __fastcall UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7088 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7088 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    96,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


UserEventEntity_o *__fastcall UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E7086 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__, userId, eventId, method);
    byte_42E7086 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, 0LL);
  return (UserEventEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
}


UserEventEntity_o *__fastcall UserEventMaster__GetEntityDefinitely(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x23
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x11
  __int64 v24; // x0
  UserEventEntity_o *v25; // x19
  UserEventEntity_o *v26; // x0
  __int64 v27; // x10

  if ( (byte_42E7089 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      eventId,
      method);
    sub_B5D5C4(&UserEventEntity_TypeInfo, v7, v8, v9);
    byte_42E7089 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v15 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v13);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v15,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserEventEntity_o *)sub_B5D694(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_28077436(v25, userId, eventId, 0LL);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B5D69C(lookup, v12);
  v20 = lookup->klass;
  v21 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v19);
  }
  v26 = (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v24)(
                               v21,
                               PK,
                               *(_QWORD *)(v24 + 8));
  if ( !v26 )
    return 0LL;
  v27 = *(&UserEventEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27 )
    return 0LL;
  if ( (UserEventEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] == UserEventEntity_TypeInfo )
    return v26;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventMaster__TryGetEntity(
        UserEventMaster_o *this,
        UserEventEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E7087 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42E7087 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *__fastcall UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t UserId; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42E708A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E708A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventMaster__getList_22456552(this, UserId, v6);
}


UserEventEntity_array *__fastcall UserEventMaster__getList_22456552(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = userId;
  if ( (byte_42E708B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UserEventEntity_TypeInfo, v21, v22, v23);
    byte_42E708B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        v28 = *(&UserEventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (UserEventEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == UserEventEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, userId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (UserEventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}