void __fastcall OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41851C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__, method);
    byte_41851C7 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    62,
    (const MethodInfo_24E425C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall OtherUserGameMaster__GetFriendCodeList(
        OtherUserGameMaster_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  void *list; // x0
  __int64 v13; // x1
  int32_t v14; // w22
  int32_t v15; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x24
  __int64 v17; // x10

  if ( (byte_41851C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, friendCode);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    sub_B2C35C(&OtherUserGameEntity_TypeInfo, v10);
    byte_41851C8 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v14 = (int)list;
      v15 = 0;
      while ( 1 )
      {
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 v15,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
          v17 = *(&OtherUserGameEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v17
            && *(OtherUserGameEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) == OtherUserGameEntity_TypeInfo )
          {
            list = (void *)System_String__Equals_44292872(friendCode, *((System_String_o **)list + 5), 0LL);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v11 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v11,
                v16,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
            }
          }
        }
        if ( ++v15 >= v14 )
          goto LABEL_15;
      }
LABEL_17:
      sub_B2C434(list, v13);
    }
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void __fastcall OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  int64_t v15; // x22
  int32_t v16; // w23
  __int64 v17; // x10
  const MethodInfo *v18; // x1
  System_Int64_array *v19; // x19

  if ( (byte_41851C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&OtherUserGameEntity_TypeInfo, v9);
    sub_B2C35C(&OtherUserNewManager_TypeInfo, v10);
    byte_41851C9 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v15 = (int64_t)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = *(&OtherUserGameEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (OtherUserGameEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == OtherUserGameEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v15 )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_long___Add(
            v11,
            v15,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      if ( ++v16 >= Count )
        goto LABEL_17;
    }
LABEL_22:
    sub_B2C434(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_22;
  v19 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  OtherUserNewManager__SetOld_20168804(v19, v18);
}