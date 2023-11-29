void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC59F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__, method);
    byte_40FC59F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    234,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  EventBulletinBoardReleaseMaster_o *v17; // x22
  int32_t Count; // w0
  int32_t v19; // w23
  int32_t v20; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  const MethodInfo *v23; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x25
  __int64 v25; // x10

  if ( (byte_40FC5A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&EventBulletinBoardEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v14);
    byte_40FC5A0 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v17 = (EventBulletinBoardReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          list,
                          v20,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v25 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v25
        || *(EventBulletinBoardEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v25 - 8) != EventBulletinBoardEntity_TypeInfo )
      {
        break;
      }
      if ( Item[5] == eventId )
      {
        if ( !v17 )
          break;
        if ( EventBulletinBoardReleaseMaster__IsOpen(v17, Item[4], v23) )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v24,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
        }
      }
      if ( ++v20 >= v19 )
        goto LABEL_19;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_19:
  if ( !v15 )
    goto LABEL_23;
  if ( v15->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventBulletinBoardReleaseMaster_o *v17; // x22
  int32_t Count; // w0
  int32_t v19; // w23
  char v20; // w28
  int32_t i; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  const MethodInfo *v24; // x2
  int32_t *v25; // x25
  __int64 v26; // x10

  if ( (byte_40FC5A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___, v8);
    sub_B16FFC(&EventBulletinBoardEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FC5A1 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_22:
    sub_B170D4();
  }
  v17 = (EventBulletinBoardReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v19 = Count;
  v20 = 0;
  for ( i = 0; i < v19; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        i,
                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_22;
    v25 = Item;
    v26 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v26
      || *(EventBulletinBoardEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v26 - 8) != EventBulletinBoardEntity_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( Item[5] == eventId )
    {
      if ( !v17 )
        goto LABEL_22;
      if ( EventBulletinBoardReleaseMaster__IsOpen(v17, Item[4], v24) )
      {
        if ( !v14 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)v25 + 3),
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      v20 = 1;
    }
  }
  if ( (v20 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v14;
  else
    return 0LL;
}