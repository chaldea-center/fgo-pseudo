void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187E36 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, method);
    byte_4187E36 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    316,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w21
  int32_t v13; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x23
  __int64 v15; // x10

  if ( (byte_4187E37 & 1) == 0 )
  {
    sub_B2C35C(&BoostEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BoostEntity__TypeInfo, v8);
    byte_4187E37 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v15 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (BoostEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == BoostEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BoostEntity__IsValidPeriod(
                                                                                               (BoostEntity_o *)list,
                                                                                               v10);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              v14,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v10);
  }
LABEL_14:
  if ( !v9 )
    goto LABEL_16;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x26
  int32_t i; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x22
  __int64 v19; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19

  if ( (byte_4187E38 & 1) == 0 )
  {
    sub_B2C35C(&BoostEntity_TypeInfo, *(_QWORD *)&RecommendedBoostId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_4187E38 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_18:
    if ( v12 )
      return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_20:
    sub_B2C434(list, v13);
  }
  v15 = (int)list;
  v16 = 0LL;
  for ( i = 0; i < v15; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    v18 = v16;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         i,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v19 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (BoostEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] == BoostEntity_TypeInfo )
      {
        if ( LODWORD(list->fields.items) == RecommendedBoostId )
          continue;
        if ( !v12 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
      }
    }
    v16 = v18;
  }
  if ( !v16 )
    goto LABEL_18;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v20 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    v16,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v12 = v20;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}