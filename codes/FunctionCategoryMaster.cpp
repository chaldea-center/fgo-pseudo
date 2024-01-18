void __fastcall FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A4EE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__, method);
    byte_418A4EE = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    267,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByFlag(
        FunctionCategoryMaster_o *this,
        int32_t flag,
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

  if ( (byte_418A4F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&flag);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&FunctionCategoryEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v10);
    byte_418A4F0 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
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
      v15 = *(&FunctionCategoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (FunctionCategoryEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == FunctionCategoryEntity_TypeInfo
        && (HIDWORD(list[1].klass) & flag) != 0 )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
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
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByGroupType(
        FunctionCategoryMaster_o *this,
        int32_t groupType,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_418A4EF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&FunctionCategoryEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v12);
    byte_418A4EF = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v16,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v14 = list;
      v17 = *(&FunctionCategoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (FunctionCategoryEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == FunctionCategoryEntity_TypeInfo
        && HIDWORD(list->fields.items) == groupType
        && (HIDWORD(list[1].klass) & flag) != 0 )
      {
        if ( !v13 )
          goto LABEL_18;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v13 )
LABEL_18:
    sub_B2C434(list, v14);
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}