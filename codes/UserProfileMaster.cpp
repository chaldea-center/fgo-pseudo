void __fastcall UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389324 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
    byte_4389324 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    97,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall UserProfileMaster__GetOtherUserList(
        UserProfileMaster_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  int32_t v7; // w22
  int32_t v8; // w23
  __int64 v9; // x10

  if ( (byte_4389326 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_B775C4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserProfileEntity_TypeInfo);
    byte_4389326 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_17;
  Instance = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v7 = (int)Instance;
    v8 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v8,
                   (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v9 = *(&UserProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v9
          && *(UserProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v9 - 8) == UserProfileEntity_TypeInfo )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       *((_QWORD *)Instance + 2),
                       (const MethodInfo_21FBABC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( !v6 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
        }
      }
      if ( ++v8 >= v7 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B7769C(Instance, v4);
  }
LABEL_15:
  if ( !v6 )
    goto LABEL_17;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int32_t v6; // w20
  int32_t v7; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v9; // x10

  if ( (byte_4389325 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&UserProfileEntity_TypeInfo);
    byte_4389325 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v7,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v9 = *(&UserProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (UserProfileEntity_c *)Item->klass->_2.typeHierarchy[v9 - 1] == UserProfileEntity_TypeInfo )
        {
          ++v6;
        }
      }
      if ( ++v7 >= v5 )
        return v6;
    }
LABEL_15:
    sub_B7769C(list, method);
  }
  return 0;
}