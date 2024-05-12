void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D70A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
    byte_438D70A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    317,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v6; // w21
  int32_t v7; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x23
  __int64 v9; // x10

  if ( (byte_438D70B & 1) == 0 )
  {
    sub_B775C4(&BoostEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_438D70B = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v7,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v9 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (BoostEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == BoostEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BoostEntity__IsValidPeriod(
                                                                                               (BoostEntity_o *)list,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v3 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v3,
              v8,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          }
        }
      }
      if ( ++v7 >= v6 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, v4);
  }
LABEL_14:
  if ( !v3 )
    goto LABEL_16;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x26
  int32_t i; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x22
  __int64 v12; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19

  if ( (byte_438D70C & 1) == 0 )
  {
    sub_B775C4(&BoostEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_438D70C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_18:
    if ( v5 )
      return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_20:
    sub_B7769C(list, v6);
  }
  v8 = (int)list;
  v9 = 0LL;
  for ( i = 0; i < v8; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    v11 = v9;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         i,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v12 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (BoostEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] == BoostEntity_TypeInfo )
      {
        if ( LODWORD(list->fields.items) == RecommendedBoostId )
          continue;
        if ( !v5 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
      }
    }
    v9 = v11;
  }
  if ( !v9 )
    goto LABEL_18;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v13 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    v9,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v5 = v13;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}