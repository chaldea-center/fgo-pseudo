void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB165 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, method);
    byte_40FB165 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    316,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  int32_t v16; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v19; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x23
  __int64 v21; // x10

  if ( (byte_40FB166 & 1) == 0 )
  {
    sub_B16FFC(&BoostEntity_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_40FB166 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v17,
               v16,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v21 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (BoostEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == BoostEntity_TypeInfo
          && BoostEntity__IsValidPeriod((BoostEntity_o *)Item, v19) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            v20,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_16;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
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
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x26
  int32_t i; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19

  if ( (byte_40FB167 & 1) == 0 )
  {
    sub_B16FFC(&BoostEntity_TypeInfo, *(_QWORD *)&RecommendedBoostId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BoostEntity__TypeInfo, v13);
    byte_40FB167 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  *(_QWORD *)&RecommendedBoostId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_18:
    if ( v14 )
      return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_20:
    sub_B170D4();
  }
  v17 = Count;
  v18 = 0LL;
  for ( i = 0; i < v17; ++i )
  {
    v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v20 )
      goto LABEL_20;
    v21 = v18;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v20,
                                                                    i,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = Item;
      v27 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
        && (BoostEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == BoostEntity_TypeInfo )
      {
        if ( Item->fields.missionTargetId == RecommendedBoostId )
          continue;
        if ( !v14 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
      }
    }
    v18 = v21;
  }
  if ( !v18 )
    goto LABEL_18;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v28 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v28,
    v18,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v28,
    (System_Collections_Generic_IEnumerable_T__o *)v14,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v14 = v28;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}