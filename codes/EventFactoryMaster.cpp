void __fastcall EventFactoryMaster___ctor(EventFactoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DE6B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__);
    byte_438DE6B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    237,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__);
}


int32_t __fastcall EventFactoryMaster__GetCalcValuesTotal(
        EventFactoryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventFactoryEntity_array *Datas; // x0
  __int64 v4; // x1

  Datas = EventFactoryMaster__GetDatas(this, eventId, method);
  if ( !Datas )
    sub_B7769C(0LL, v4);
  if ( (int)Datas->max_length >= 1 )
    return 0;
  else
    return -1;
}


EventFactoryEntity_array *__fastcall EventFactoryMaster__GetDatas(
        EventFactoryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_438DE6C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventFactoryEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventFactoryEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventFactoryEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventFactoryEntity__TypeInfo);
    byte_438DE6C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventFactoryEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventFactoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&EventFactoryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventFactoryEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == EventFactoryEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventFactoryEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (EventFactoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__);
}