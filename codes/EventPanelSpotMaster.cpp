void __fastcall EventPanelSpotMaster___ctor(EventPanelSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B056C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
    byte_42B056C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    342,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
}


EventPanelSpotEntity_array *__fastcall EventPanelSpotMaster__GetEntityList(
        EventPanelSpotMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  int32_t v11; // w24
  __int64 v12; // x10

  if ( (byte_42B056D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventPanelSpotEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_42B056D = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v12 = *(&EventPanelSpotEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (EventPanelSpotEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] == EventPanelSpotEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId
          && LODWORD(list->fields._syncRoot) == mapId )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B52A5C(list, v8);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


EventPanelSpotEntity_array *__fastcall EventPanelSpotMaster__GetEntityListFromEventId(
        EventPanelSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B056E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventPanelSpotEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_42B056E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
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
        v10 = *(&EventPanelSpotEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventPanelSpotEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == EventPanelSpotEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
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
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}