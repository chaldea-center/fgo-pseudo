void __fastcall EventRecipeMaster___ctor(EventRecipeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41887C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__, method);
    byte_41887C0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    380,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeEntity_array *__fastcall EventRecipeMaster__GetRecipeEntityArray(
        EventRecipeMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = eventId;
  if ( (byte_41887C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventRecipeEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRecipeEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRecipeEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventRecipeEntity__TypeInfo, v10);
    byte_41887C1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRecipeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRecipeEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        v15 = *(&EventRecipeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (EventRecipeEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == EventRecipeEntity_TypeInfo
          && HIDWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRecipeEntity__Add__);
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (EventRecipeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRecipeEntity__ToArray__);
}