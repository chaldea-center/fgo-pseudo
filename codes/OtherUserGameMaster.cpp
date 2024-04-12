void __fastcall OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADBB7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
    byte_42ADBB7 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    63,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall OtherUserGameMaster__GetFriendCodeList(
        OtherUserGameMaster_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  void *list; // x0
  __int64 v7; // x1
  int32_t v8; // w22
  int32_t v9; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10

  if ( (byte_42ADBB8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_B52984(&OtherUserGameEntity_TypeInfo);
    byte_42ADBB8 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v8 = (int)list;
      v9 = 0;
      while ( 1 )
      {
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 v9,
                 (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
          v11 = *(&OtherUserGameEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
            && *(OtherUserGameEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == OtherUserGameEntity_TypeInfo )
          {
            list = (void *)System_String__Equals_44555656(friendCode, *((System_String_o **)list + 5), 0LL);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v5 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v5,
                v10,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
            }
          }
        }
        if ( ++v9 >= v8 )
          goto LABEL_15;
      }
LABEL_17:
      sub_B52A5C(list, v7);
    }
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void __fastcall OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  int64_t v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10
  const MethodInfo *v10; // x1
  System_Int64_array *v11; // x19

  if ( (byte_42ADBB9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OtherUserGameEntity_TypeInfo);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBB9 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v7 = (int64_t)list;
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
        v9 = *(&OtherUserGameEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (OtherUserGameEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == OtherUserGameEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v7 )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_long___Add(
            v3,
            v7,
            (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_17;
    }
LABEL_22:
    sub_B52A5C(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_22;
  v11 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  OtherUserNewManager__SetOld_20798756(v11, v10);
}