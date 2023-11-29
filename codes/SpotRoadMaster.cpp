void __fastcall SpotRoadMaster___ctor(SpotRoadMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FADD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__, method);
    byte_40FADD9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    21,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotRoadEntity_array *__fastcall SpotRoadMaster__getList(
        SpotRoadMaster_o *this,
        int32_t map_id,
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
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40FADDA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&map_id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotRoadEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotRoadEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_SpotRoadEntity__TypeInfo, v11);
    sub_B16FFC(&SpotRoadEntity_TypeInfo, v12);
    byte_40FADDA = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SpotRoadEntity__TypeInfo,
                                                                                                  *(_QWORD *)&map_id,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SpotRoadEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_17;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v16,
                                                                    v15,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&SpotRoadEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (SpotRoadEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == SpotRoadEntity_TypeInfo
        && Item->fields.missionConditionDetailId == map_id )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SpotRoadEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (SpotRoadEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__);
}