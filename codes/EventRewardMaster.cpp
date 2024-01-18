void __fastcall EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418486B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__, method);
    byte_418486B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    119,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4184869 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4184869 = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList(
        EventRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  void *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct EventRewardMaster___c_StaticFields *v26; // x0

  if ( (byte_418486C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventRewardEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventRewardEntity__TypeInfo, v7);
    sub_B2C35C(&EventRewardEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v13);
    sub_B2C35C(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, v14);
    sub_B2C35C(&EventRewardMaster___c_TypeInfo, v15);
    byte_418486C = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = list;
        v22 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v17);
  }
LABEL_14:
  list = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  static_fields = (struct EventRewardMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v25,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v26 = EventRewardMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)_9__3_0;
    sub_B2C2F8(&v26->__9__3_0, _9__3_0);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList_18990852(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *v19; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  __int64 v24; // x10
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v27; // x21
  struct EventRewardMaster___c_StaticFields *v28; // x0

  if ( (byte_418486D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventRewardEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventRewardEntity__TypeInfo, v9);
    sub_B2C35C(&EventRewardEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v15);
    sub_B2C35C(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, v16);
    sub_B2C35C(&EventRewardMaster___c_TypeInfo, v17);
    byte_418486D = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v23,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        v24 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v24
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v24 - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v23 >= v22 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B2C434(list, v19);
  }
LABEL_15:
  list = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  static_fields = (struct EventRewardMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v27,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v28 = EventRewardMaster___c_TypeInfo->static_fields;
    v28->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)_9__4_0;
    sub_B2C2F8(&v28->__9__4_0, _9__4_0);
  }
  if ( !v18 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData_BuffData_array *EventRewardEntitiyList; // x20
  EventRewardMaster___c_c *v12; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x21
  Il2CppObject *v15; // x22
  struct EventRewardMaster___c_StaticFields *v16; // x0
  EventRewardEntity_o *result; // x0
  __int64 v18; // x1
  int max_length; // w8
  unsigned int v20; // w9
  __int64 v21; // x0

  if ( (byte_418486E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Comparison_EventRewardEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_EventRewardEntity__TypeInfo, v8);
    sub_B2C35C(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, v9);
    sub_B2C35C(&EventRewardMaster___c_TypeInfo, v10);
    byte_418486E = 1;
  }
  EventRewardEntitiyList = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList(
                                                              this,
                                                              eventId,
                                                              (const MethodInfo *)eventPoint);
  v12 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v12 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v15,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v16 = EventRewardMaster___c_TypeInfo->static_fields;
    v16->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_B2C2F8(&v16->__9__5_0, _9__5_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList )
    goto LABEL_21;
  max_length = EventRewardEntitiyList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v21 = sub_B2C460(result);
        sub_B2C400(v21, 0LL);
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList->m_Items[v20];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v20 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B2C434(result, v18);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity_18991924(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleBuffData_BuffData_array *EventRewardEntitiyList_18990852; // x20
  EventRewardMaster___c_c *v14; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v17; // x22
  struct EventRewardMaster___c_StaticFields *v18; // x0
  EventRewardEntity_o *result; // x0
  __int64 v20; // x1
  int max_length; // w8
  unsigned int v22; // w9
  __int64 v23; // x0

  if ( (byte_418486F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Comparison_EventRewardEntity___ctor__, v9);
    sub_B2C35C(&System_Comparison_EventRewardEntity__TypeInfo, v10);
    sub_B2C35C(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, v11);
    sub_B2C35C(&EventRewardMaster___c_TypeInfo, v12);
    byte_418486F = 1;
  }
  EventRewardEntitiyList_18990852 = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList_18990852(
                                                                       this,
                                                                       eventId,
                                                                       groupId,
                                                                       (const MethodInfo *)eventPoint);
  v14 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v14 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v17,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v18 = EventRewardMaster___c_TypeInfo->static_fields;
    v18->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_B2C2F8(&v18->__9__6_0, _9__6_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList_18990852,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList_18990852 )
    goto LABEL_21;
  max_length = EventRewardEntitiyList_18990852->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v23 = sub_B2C460(result);
        sub_B2C400(v23, 0LL);
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList_18990852->m_Items[v22];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v22 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B2C434(result, v20);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardMaster__TryGetEntity(
        EventRewardMaster_o *this,
        EventRewardEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418486A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__, entity);
    byte_418486A = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void __fastcall EventRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRewardMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B6C & 1) == 0 )
  {
    sub_B2C35C(&EventRewardMaster___c_TypeInfo, v1);
    byte_4184B6C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRewardMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRewardMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventRewardMaster___c___ctor(EventRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__3_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B2C434(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B2C434(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}