void __fastcall EventRecipeMaster___ctor(EventRecipeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387E93 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
    byte_4387E93 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    381,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeEntity_array *__fastcall EventRecipeMaster__GetRecipeEntityArray(
        EventRecipeMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = eventId;
  if ( (byte_4387E94 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventRecipeEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRecipeEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
    byte_4387E94 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        v9 = *(&EventRecipeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (EventRecipeEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == EventRecipeEntity_TypeInfo
          && HIDWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventRecipeEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, *(_QWORD *)&eventId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (EventRecipeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
}