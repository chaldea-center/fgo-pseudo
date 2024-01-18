void __fastcall NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41883F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__, method);
    byte_41883F4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    60,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_41883F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_NewsEntity__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_NewsEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_NewsEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_NewsEntity__TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&NewsEntity_TypeInfo, v9);
    byte_41883F5 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime((const MethodInfo *)v10);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_NewsEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v17 = *(&NewsEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (NewsEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == NewsEntity_TypeInfo
          && Time >= (__int64)list[1].fields._syncRoot
          && Time <= (__int64)list[2].klass )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_NewsEntity__Add__);
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(list, v13);
  }
LABEL_18:
  if ( !v12 )
    goto LABEL_20;
  return (NewsEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}