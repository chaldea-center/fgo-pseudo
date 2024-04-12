void __fastcall EventPanelScanMaster___ctor(EventPanelScanMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0568 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__);
    byte_42B0568 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    343,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__);
}


EventPanelScanEntity_array *__fastcall EventPanelScanMaster__GetListByEventId(
        EventPanelScanMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B0569 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventPanelScanEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelScanEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPanelScanEntity__TypeInfo);
    byte_42B0569 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPanelScanEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&EventPanelScanEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventPanelScanEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == EventPanelScanEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPanelScanEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (EventPanelScanEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__);
}


bool __fastcall EventPanelScanMaster__IsSatisfyReleaseCondition(
        EventPanelScanMaster_o *this,
        EventPanelScanEntity_o *entity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 commonReleaseId; // x1

  if ( (byte_42B056A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B056A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_9;
  commonReleaseId = (unsigned int)entity->fields.commonReleaseId;
  if ( (int)commonReleaseId >= 1 )
  {
    if ( Instance )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, commonReleaseId, 0LL, 0, 0LL);
LABEL_9:
    sub_B52A5C(Instance, commonReleaseId);
  }
  return 1;
}