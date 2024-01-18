void __fastcall EventPanelMapDetailMaster___ctor(EventPanelMapDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418787A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__, method);
    byte_418787A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    340,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPanelMapDetailEntity_array *__fastcall EventPanelMapDetailMaster__GetListByMapId(
        EventPanelMapDetailMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_418787B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventPanelMapDetailEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo, v10);
    byte_418787B = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v16 = *(&EventPanelMapDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (EventPanelMapDetailEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == EventPanelMapDetailEntity_TypeInfo
          && HIDWORD(list->fields.items) == mapId )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v12);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (EventPanelMapDetailEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__);
}