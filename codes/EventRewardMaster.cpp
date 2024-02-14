void __fastcall EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421133D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__, method);
    byte_421133D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    119,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
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

  if ( (byte_421133B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_421133B = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_266A024 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  void *v19; // x1
  __int64 v20; // x2
  int32_t v21; // w22
  int32_t v22; // w23
  __int64 v23; // x10
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v26; // x21
  struct EventRewardMaster___c_StaticFields *v27; // x0

  if ( (byte_421133E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventRewardEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventRewardEntity__TypeInfo, v7);
    sub_B0D8A4(&EventRewardEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, v14);
    sub_B0D8A4(&EventRewardMaster___c_TypeInfo, v15);
    byte_421133E = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRewardEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v22,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        v23 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v23
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v23 - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v22 >= v21 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B0D97C(list);
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v26,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v27 = EventRewardMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)_9__3_0;
    sub_B0D840(&v27->__9__3_0, _9__3_0);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList_18299184(
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
  void *list; // x0
  int32_t Count; // w0
  void *v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  int32_t v24; // w24
  __int64 v25; // x10
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v28; // x21
  struct EventRewardMaster___c_StaticFields *v29; // x0

  if ( (byte_421133F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_EventRewardEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_EventRewardEntity__TypeInfo, v9);
    sub_B0D8A4(&EventRewardEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v15);
    sub_B0D8A4(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, v16);
    sub_B0D8A4(&EventRewardMaster___c_TypeInfo, v17);
    byte_421133F = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRewardEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&groupId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = list;
        v25 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v25
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v25 - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B0D97C(list);
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v28,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v29 = EventRewardMaster___c_TypeInfo->static_fields;
    v29->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)_9__4_0;
    sub_B0D840(&v29->__9__4_0, _9__4_0);
  }
  if ( !v18 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  BattleBuffData_BuffData_array *EventRewardEntitiyList; // x20
  EventRewardMaster___c_c *v14; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x21
  Il2CppObject *v17; // x22
  struct EventRewardMaster___c_StaticFields *v18; // x0
  EventRewardEntity_o *result; // x0
  int max_length; // w8
  unsigned int v21; // w9
  __int64 v22; // x0

  if ( (byte_4211340 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Comparison_EventRewardEntity___ctor__, v7);
    sub_B0D8A4(&System_Comparison_EventRewardEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, v9);
    sub_B0D8A4(&EventRewardMaster___c_TypeInfo, v10);
    byte_4211340 = 1;
  }
  EventRewardEntitiyList = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList(
                                                              this,
                                                              eventId,
                                                              (const MethodInfo *)eventPoint);
  v14 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v14 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v11,
                                                                          v12);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v17,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v18 = EventRewardMaster___c_TypeInfo->static_fields;
    v18->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_B0D840(&v18->__9__5_0, _9__5_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList )
    goto LABEL_21;
  max_length = EventRewardEntitiyList->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v22 = sub_B0D9A8(result);
        sub_B0D948(v22, 0LL);
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList->m_Items[v21];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v21 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B0D97C(result);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity_18300256(
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
  __int64 v13; // x1
  __int64 v14; // x2
  BattleBuffData_BuffData_array *EventRewardEntitiyList_18299184; // x20
  EventRewardMaster___c_c *v16; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v19; // x22
  struct EventRewardMaster___c_StaticFields *v20; // x0
  EventRewardEntity_o *result; // x0
  int max_length; // w8
  unsigned int v23; // w9
  __int64 v24; // x0

  if ( (byte_4211341 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Comparison_EventRewardEntity___ctor__, v9);
    sub_B0D8A4(&System_Comparison_EventRewardEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, v11);
    sub_B0D8A4(&EventRewardMaster___c_TypeInfo, v12);
    byte_4211341 = 1;
  }
  EventRewardEntitiyList_18299184 = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList_18299184(
                                                                       this,
                                                                       eventId,
                                                                       groupId,
                                                                       (const MethodInfo *)eventPoint);
  v16 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v16 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v13,
                                                                          v14);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v19,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v20 = EventRewardMaster___c_TypeInfo->static_fields;
    v20->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_B0D840(&v20->__9__6_0, _9__6_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList_18299184,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList_18299184 )
    goto LABEL_21;
  max_length = EventRewardEntitiyList_18299184->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
      {
        v24 = sub_B0D9A8(result);
        sub_B0D948(v24, 0LL);
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList_18299184->m_Items[v23];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v23 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B0D97C(result);
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

  if ( (byte_421133C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__, entity);
    byte_421133C = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void __fastcall EventRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventRewardMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211BD3 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardMaster___c_TypeInfo, v1);
    byte_4211BD3 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventRewardMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventRewardMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B0D97C(this);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B0D97C(this);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}