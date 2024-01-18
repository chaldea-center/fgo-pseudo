void __fastcall UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185DEE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__, method);
    byte_4185DEE = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    96,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall UserProfileMaster__GetOtherUserList(
        UserProfileMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  int32_t v16; // w22
  int32_t v17; // w23
  __int64 v18; // x10

  if ( (byte_4185DF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&UserProfileEntity_TypeInfo, v11);
    byte_4185DF0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_17;
  Instance = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v16 = (int)Instance;
    v17 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v17,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v18 = *(&UserProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v18
          && *(UserProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v18 - 8) == UserProfileEntity_TypeInfo )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       *((_QWORD *)Instance + 2),
                       (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B2C434(Instance, v13);
  }
LABEL_15:
  if ( !v15 )
    goto LABEL_17;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w20
  int32_t v9; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10

  if ( (byte_4185DEF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&UserProfileEntity_TypeInfo, v4);
    byte_4185DEF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v9,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = *(&UserProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserProfileEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserProfileEntity_TypeInfo )
        {
          ++v8;
        }
      }
      if ( ++v9 >= v7 )
        return v8;
    }
LABEL_15:
    sub_B2C434(list, method);
  }
  return 0;
}