void __fastcall NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9326 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__, method);
    byte_40F9326 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    60,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}


NewsEntity_array *__fastcall NewsMaster__GetEnableEntitiyList(NewsMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_c *v10; // x0
  int64_t Time; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w22
  int32_t v20; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v23; // x10

  if ( (byte_40F9327 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_NewsEntity__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_NewsEntity__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_NewsEntity___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_NewsEntity__TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NewsEntity_TypeInfo, v9);
    byte_40F9327 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime((const MethodInfo *)v10);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_NewsEntity__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v21 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v21,
               v20,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = *(&NewsEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (NewsEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == NewsEntity_TypeInfo
          && Time >= (__int64)Item[3].monitor
          && Time <= (__int64)Item[4].klass )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_NewsEntity__Add__);
        }
      }
      if ( ++v20 >= v19 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  if ( !v16 )
    goto LABEL_20;
  return (NewsEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}