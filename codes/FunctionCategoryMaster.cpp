void __fastcall FunctionCategoryMaster___ctor(FunctionCategoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB2F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__, method);
    byte_40FB2F9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    267,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_FunctionCategoryMaster__FunctionCategoryEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByFlag(
        FunctionCategoryMaster_o *this,
        int32_t flag,
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40FB2FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&flag);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&FunctionCategoryEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v12);
    byte_40FB2FB = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo,
                                                                                                  *(_QWORD *)&flag,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
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
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v16,
             v15,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&FunctionCategoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (FunctionCategoryEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == FunctionCategoryEntity_TypeInfo
        && (HIDWORD(Item[2].klass) & flag) != 0 )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
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
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
FunctionCategoryEntity_array *__fastcall FunctionCategoryMaster__GetEntitiesByGroupType(
        FunctionCategoryMaster_o *this,
        int32_t groupType,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x10

  if ( (byte_40FB2FA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&FunctionCategoryEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo, v13);
    byte_40FB2FA = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FunctionCategoryEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupType,
                                                                                                  *(_QWORD *)&flag,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FunctionCategoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v17 )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v17,
             v16,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&FunctionCategoryEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (FunctionCategoryEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == FunctionCategoryEntity_TypeInfo
        && HIDWORD(Item[1].klass) == groupType
        && (HIDWORD(Item[2].klass) & flag) != 0 )
      {
        if ( !v14 )
          goto LABEL_18;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v14 )
LABEL_18:
    sub_B170D4();
  return (FunctionCategoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_FunctionCategoryEntity__ToArray__);
}