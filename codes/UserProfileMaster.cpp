void __fastcall UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F80D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__, method);
    byte_40F80D7 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    96,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w22
  int32_t v22; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x0
  int64_t *Item; // x0
  __int64 v25; // x10
  UserServantEntity_o *Entity; // x0

  if ( (byte_40F80D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&UserProfileEntity_TypeInfo, v11);
    byte_40F80D9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_OtherUserGameEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      v23 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v23 )
        break;
      Item = (int64_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v23,
                          v22,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = *(&UserProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*Item + 300) >= (unsigned int)v25
          && *(UserProfileEntity_c **)(*(_QWORD *)(*Item + 200) + 8 * v25 - 8) == UserProfileEntity_TypeInfo )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     Item[2],
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
        }
      }
      if ( ++v22 >= v21 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_15:
  if ( !v18 )
    goto LABEL_17;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v12; // x10

  if ( (byte_40F80D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&UserProfileEntity_TypeInfo, v4);
    byte_40F80D8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v10 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v10,
               v9,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = *(&UserProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (UserProfileEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == UserProfileEntity_TypeInfo )
        {
          ++v8;
        }
      }
      if ( ++v9 >= v7 )
        return v8;
    }
LABEL_15:
    sub_B170D4();
  }
  return 0;
}