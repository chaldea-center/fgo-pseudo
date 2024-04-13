void __fastcall EventFactoryMaster___ctor(EventFactoryMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB20E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB20E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    237,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__);
}


int32_t __fastcall EventFactoryMaster__GetCalcValuesTotal(
        EventFactoryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventFactoryEntity_array *Datas; // x0
  __int64 v4; // x1

  Datas = EventFactoryMaster__GetDatas(this, eventId, method);
  if ( !Datas )
    sub_B5D69C(0LL, v4);
  if ( (int)Datas->max_length >= 1 )
    return 0;
  else
    return -1;
}


EventFactoryEntity_array *__fastcall EventFactoryMaster__GetDatas(
        EventFactoryMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42EB20F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventFactoryEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFactoryEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFactoryEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventFactoryEntity__TypeInfo, v21, v22, v23);
    byte_42EB20F = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFactoryEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFactoryEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v29 = *(&EventFactoryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (EventFactoryEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == EventFactoryEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventFactoryEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v25);
  }
LABEL_14:
  if ( !v24 )
    goto LABEL_16;
  return (EventFactoryEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__);
}