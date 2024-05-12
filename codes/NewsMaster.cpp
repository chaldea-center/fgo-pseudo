void __fastcall NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BA64 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
    byte_438BA64 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    61,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}


NewsEntity_array *__fastcall NewsMaster__GetEnableEntitiyList(NewsMaster_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_438BA65 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_NewsEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_NewsEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_NewsEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_NewsEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NewsEntity_TypeInfo);
    byte_438BA65 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime((const MethodInfo *)v3);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_NewsEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
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
        v10 = *(&NewsEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (NewsEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == NewsEntity_TypeInfo
          && Time >= (__int64)list[1].fields._syncRoot
          && Time <= (__int64)list[2].klass )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_NewsEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B7769C(list, v6);
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  return (NewsEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                               (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}