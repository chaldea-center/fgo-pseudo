void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214C54 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, method);
    byte_4214C54 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    316,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w21
  int32_t v13; // w22
  const MethodInfo *v14; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x23
  __int64 v16; // x10

  if ( (byte_4214C55 & 1) == 0 )
  {
    sub_B0D8A4(&BoostEntity_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BoostEntity__TypeInfo, v9);
    byte_4214C55 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v16 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (BoostEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == BoostEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BoostEntity__IsValidPeriod(
                                                                                               (BoostEntity_o *)list,
                                                                                               v14);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v10 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              v15,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x26
  int32_t i; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19

  if ( (byte_4214C56 & 1) == 0 )
  {
    sub_B0D8A4(&BoostEntity_TypeInfo, *(_QWORD *)&RecommendedBoostId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_4214C56 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  *(_QWORD *)&RecommendedBoostId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_18:
    if ( v12 )
      return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_20:
    sub_B0D97C(list);
  }
  v14 = (int)list;
  v15 = 0LL;
  for ( i = 0; i < v14; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    v17 = v15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         i,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v20 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (BoostEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] == BoostEntity_TypeInfo )
      {
        if ( LODWORD(list->fields.items) == RecommendedBoostId )
          continue;
        if ( !v12 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
      }
    }
    v15 = v17;
  }
  if ( !v15 )
    goto LABEL_18;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v21 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v21,
    v15,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v12 = v21;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}