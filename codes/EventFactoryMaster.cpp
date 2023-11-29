void __fastcall EventFactoryMaster___ctor(EventFactoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC695 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__, method);
    byte_40FC695 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    236,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__);
}


int32_t __fastcall EventFactoryMaster__GetCalcValuesTotal(
        EventFactoryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventFactoryEntity_array *Datas; // x0

  Datas = EventFactoryMaster__GetDatas(this, eventId, method);
  if ( !Datas )
    sub_B170D4();
  if ( (int)Datas->max_length >= 1 )
    return 0;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
EventFactoryEntity_array *__fastcall EventFactoryMaster__GetDatas(
        EventFactoryMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FC696 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventFactoryEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFactoryEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFactoryEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventFactoryEntity__TypeInfo, v12);
    byte_40FC696 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventFactoryEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFactoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = *(&EventFactoryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (EventFactoryEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == EventFactoryEntity_TypeInfo
          && Item->fields.missionConditionDetailId == eventId )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventFactoryEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (EventFactoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__);
}