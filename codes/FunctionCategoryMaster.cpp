void __fastcall FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D90B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
    byte_438D90B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    268,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
}


FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByFlag(
        FunctionCategoryMaster_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_438D90D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&FunctionCategoryEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_438D90D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&FunctionCategoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (FunctionCategoryEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == FunctionCategoryEntity_TypeInfo
        && (HIDWORD(list[1].klass) & flag) != 0 )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7769C(list, v6);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                           (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}


FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByGroupType(
        FunctionCategoryMaster_o *this,
        int32_t groupType,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_438D90C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&FunctionCategoryEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
    byte_438D90C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v8 = list;
      v11 = *(&FunctionCategoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (FunctionCategoryEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] == FunctionCategoryEntity_TypeInfo
        && HIDWORD(list->fields.items) == groupType
        && (HIDWORD(list[1].klass) & flag) != 0 )
      {
        if ( !v7 )
          goto LABEL_18;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v7 )
LABEL_18:
    sub_B7769C(list, v8);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                           (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}