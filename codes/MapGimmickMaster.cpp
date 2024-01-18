void __fastcall MapGimmickMaster___ctor(MapGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41858A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int___ctor__, method);
    byte_41858A7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    22,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickEntity_array *__fastcall MapGimmickMaster__getList(
        MapGimmickMaster_o *this,
        int32_t map_id,
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
  __int64 v15; // x10

  if ( (byte_41858A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&map_id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MapGimmickEntity__TypeInfo, v9);
    sub_B2C35C(&MapGimmickEntity_TypeInfo, v10);
    byte_41858A8 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapGimmickEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapGimmickEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&MapGimmickEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (MapGimmickEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == MapGimmickEntity_TypeInfo
        && HIDWORD(list->fields.items) == map_id )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapGimmickEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (MapGimmickEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_MapGimmickEntity__ToArray__);
}