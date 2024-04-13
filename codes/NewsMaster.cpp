void __fastcall NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9180 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E9180 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    61,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}


NewsEntity_array *__fastcall NewsMaster__GetEnableEntitiyList(NewsMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  NetworkManager_c *v26; // x0
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v31; // w22
  int32_t v32; // w23
  __int64 v33; // x10

  if ( (byte_42E9181 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_NewsEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_NewsEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_NewsEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_NewsEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NewsEntity_TypeInfo, v23, v24, v25);
    byte_42E9181 = 1;
  }
  v26 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime((const MethodInfo *)v26);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_NewsEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v31 = (int)list;
    v32 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v32,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v29 = list;
        v33 = *(&NewsEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v33
          && (NewsEntity_c *)list->klass->_2.typeHierarchy[v33 - 1] == NewsEntity_TypeInfo
          && Time >= (__int64)list[1].fields._syncRoot
          && Time <= (__int64)list[2].klass )
        {
          if ( !v28 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v28,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_NewsEntity__Add__);
        }
      }
      if ( ++v32 >= v31 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(list, v29);
  }
LABEL_18:
  if ( !v28 )
    goto LABEL_20;
  return (NewsEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}