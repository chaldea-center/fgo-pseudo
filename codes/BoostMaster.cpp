void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E86D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E86D0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    317,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  const MethodInfo *v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v26; // w21
  int32_t v27; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x23
  __int64 v29; // x10

  if ( (byte_42E86D1 & 1) == 0 )
  {
    sub_B5D5C4(&BoostEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BoostEntity__TypeInfo, v20, v21, v22);
    byte_42E86D1 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = (int)list;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v29 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (BoostEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == BoostEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)BoostEntity__IsValidPeriod(
                                                                                               (BoostEntity_o *)list,
                                                                                               v24);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v23 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              v28,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          }
        }
      }
      if ( ++v27 >= v26 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v24);
  }
LABEL_14:
  if ( !v23 )
    goto LABEL_16;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v30; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x26
  int32_t i; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x22
  __int64 v34; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19

  if ( (byte_42E86D2 & 1) == 0 )
  {
    sub_B5D5C4(&BoostEntity_TypeInfo, RecommendedBoostId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BoostEntity__TypeInfo, v24, v25, v26);
    byte_42E86D2 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_18:
    if ( v27 )
      return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_20:
    sub_B5D69C(list, v28);
  }
  v30 = (int)list;
  v31 = 0LL;
  for ( i = 0; i < v30; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    v33 = v31;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         i,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v34 = *(&BoostEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v34
        && (BoostEntity_c *)list->klass->_2.typeHierarchy[v34 - 1] == BoostEntity_TypeInfo )
      {
        if ( LODWORD(list->fields.items) == RecommendedBoostId )
          continue;
        if ( !v27 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
      }
    }
    v31 = v33;
  }
  if ( !v31 )
    goto LABEL_18;
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v35 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v35,
    v31,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
    (System_Collections_Generic_IEnumerable_T__o *)v27,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v27 = v35;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}