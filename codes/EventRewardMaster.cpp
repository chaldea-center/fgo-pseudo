void __fastcall EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ACB2A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
    byte_42ACB2A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    120,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
}


EventRewardEntity_o *__fastcall EventRewardMaster__GetEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42ACB28 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
    byte_42ACB28 = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23E2728 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
}


EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList(
        EventRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct EventRewardMaster___c_StaticFields *v15; // x0

  if ( (byte_42ACB2B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventRewardEntity___ctor__);
    sub_B52984(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_B52984(&EventRewardEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_B52984(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__);
    sub_B52984(&EventRewardMaster___c_TypeInfo);
    byte_42ACB2B = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v11 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B52A5C(list, v6);
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
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v14,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v15 = EventRewardMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)_9__3_0;
    sub_B52920(&v15->__9__3_0);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList_18838632(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  void *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v16; // x21
  struct EventRewardMaster___c_StaticFields *v17; // x0

  if ( (byte_42ACB2C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventRewardEntity___ctor__);
    sub_B52984(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_B52984(&EventRewardEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_B52984(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__);
    sub_B52984(&EventRewardMaster___c_TypeInfo);
    byte_42ACB2C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v13 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v13
          && *(EventRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) == EventRewardEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v12 >= v11 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B52A5C(list, v8);
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
    v16 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v16,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v17 = EventRewardMaster___c_TypeInfo->static_fields;
    v17->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)_9__4_0;
    sub_B52920(&v17->__9__4_0);
  }
  if ( !v7 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *EventRewardEntitiyList; // x20
  EventRewardMaster___c_c *v8; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x21
  Il2CppObject *v11; // x22
  struct EventRewardMaster___c_StaticFields *v12; // x0
  EventRewardEntity_o *result; // x0
  __int64 v14; // x1
  int max_length; // w8
  unsigned int v16; // w9
  __int64 v17; // x0

  if ( (byte_42ACB2D & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Sort_EventRewardEntity___);
    sub_B52984(&Method_System_Comparison_EventRewardEntity___ctor__);
    sub_B52984(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_B52984(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__);
    sub_B52984(&EventRewardMaster___c_TypeInfo);
    byte_42ACB2D = 1;
  }
  EventRewardEntitiyList = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList(
                                                              this,
                                                              eventId,
                                                              (const MethodInfo *)eventPoint);
  v8 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v8 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v11,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v12 = EventRewardMaster___c_TypeInfo->static_fields;
    v12->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_B52920(&v12->__9__5_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList )
    goto LABEL_21;
  max_length = EventRewardEntitiyList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v17 = sub_B52A88(result);
        sub_B52A28(v17, 0LL);
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList->m_Items[v16];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v16 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B52A5C(result, v14);
  }
  return 0LL;
}


EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity_18839704(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *EventRewardEntitiyList_18838632; // x20
  EventRewardMaster___c_c *v10; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v13; // x22
  struct EventRewardMaster___c_StaticFields *v14; // x0
  EventRewardEntity_o *result; // x0
  __int64 v16; // x1
  int max_length; // w8
  unsigned int v18; // w9
  __int64 v19; // x0

  if ( (byte_42ACB2E & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Sort_EventRewardEntity___);
    sub_B52984(&Method_System_Comparison_EventRewardEntity___ctor__);
    sub_B52984(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_B52984(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__);
    sub_B52984(&EventRewardMaster___c_TypeInfo);
    byte_42ACB2E = 1;
  }
  EventRewardEntitiyList_18838632 = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList_18838632(
                                                                       this,
                                                                       eventId,
                                                                       groupId,
                                                                       (const MethodInfo *)eventPoint);
  v10 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v10 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v13,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v14 = EventRewardMaster___c_TypeInfo->static_fields;
    v14->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_B52920(&v14->__9__6_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList_18838632,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList_18838632 )
    goto LABEL_21;
  max_length = EventRewardEntitiyList_18838632->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v19 = sub_B52A88(result);
        sub_B52A28(v19, 0LL);
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList_18838632->m_Items[v18];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v18 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B52A5C(result, v16);
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

  if ( (byte_42ACB29 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
    byte_42ACB29 = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void __fastcall EventRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventRewardMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACDA6 & 1) == 0 )
  {
    sub_B52984(&EventRewardMaster___c_TypeInfo);
    byte_42ACDA6 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRewardMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B52A5C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B52A5C(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}