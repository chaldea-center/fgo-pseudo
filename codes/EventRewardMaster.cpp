void __fastcall EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6166 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__, method);
    byte_40F6166 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    119,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
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

  if ( (byte_40F6164 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_40F6164 = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList(
        EventRewardMaster_o *this,
        int32_t eventId,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w22
  int32_t v26; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v29; // x10
  EventRewardMaster___c_c *v30; // x0
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v33; // x21
  struct EventRewardMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F6167 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventRewardEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventRewardEntity__TypeInfo, v9);
    sub_B16FFC(&EventRewardEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v15);
    sub_B16FFC(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, v16);
    sub_B16FFC(&EventRewardMaster___c_TypeInfo, v17);
    byte_40F6167 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRewardEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v27 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v27,
                                                                      v26,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v29 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (EventRewardEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == EventRewardEntity_TypeInfo
          && Item->fields.missionTargetId == eventId )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v30 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v30 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v33,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v34 = EventRewardMaster___c_TypeInfo->static_fields;
    v34->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v18 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_array *__fastcall EventRewardMaster__GetEventRewardEntitiyList_17514116(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w23
  int32_t v27; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v30; // x10
  EventRewardMaster___c_c *v31; // x0
  struct EventRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v34; // x21
  struct EventRewardMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40F6168 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_EventRewardEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventRewardEntity__TypeInfo, v10);
    sub_B16FFC(&EventRewardEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventRewardEntity__TypeInfo, v16);
    sub_B16FFC(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, v17);
    sub_B16FFC(&EventRewardMaster___c_TypeInfo, v18);
    byte_40F6168 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRewardEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      v28 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v28 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v28,
                                                                      v27,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = Item;
        v30 = *(&EventRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v30
          && (EventRewardEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] == EventRewardEntity_TypeInfo
          && Item->fields.missionTargetId == eventId
          && Item->fields.targetId == groupId )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRewardEntity__Add__);
        }
      }
      if ( ++v27 >= v26 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_15:
  v31 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v31 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v22,
                                                                          v23,
                                                                          v24,
                                                                          v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v34,
      Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v35 = EventRewardMaster___c_TypeInfo->static_fields;
    v35->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v19 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
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
  __int64 v13; // x3
  __int64 v14; // x4
  BattleBuffData_BuffData_array *EventRewardEntitiyList; // x20
  EventRewardMaster___c_c *v16; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x21
  Il2CppObject *v19; // x22
  struct EventRewardMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventRewardEntity_o *result; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int max_length; // w8
  unsigned int v31; // w9

  if ( (byte_40F6169 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Comparison_EventRewardEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_EventRewardEntity__TypeInfo, v8);
    sub_B16FFC(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, v9);
    sub_B16FFC(&EventRewardMaster___c_TypeInfo, v10);
    byte_40F6169 = 1;
  }
  EventRewardEntitiyList = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList(
                                                              this,
                                                              eventId,
                                                              (const MethodInfo *)eventPoint);
  v16 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v16 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v11,
                                                                          v12,
                                                                          v13,
                                                                          v14);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v19,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v20 = EventRewardMaster___c_TypeInfo->static_fields;
    v20->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList )
    goto LABEL_21;
  max_length = EventRewardEntitiyList->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
      {
        sub_B17100(result, v28, v29);
        sub_B170A0();
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList->m_Items[v31];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v31 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventRewardEntity_o *__fastcall EventRewardMaster__GetNextEventRewardEntity_17515188(
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
  __int64 v15; // x3
  __int64 v16; // x4
  BattleBuffData_BuffData_array *EventRewardEntitiyList_17514116; // x20
  EventRewardMaster___c_c *v18; // x8
  struct EventRewardMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v21; // x22
  struct EventRewardMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EventRewardEntity_o *result; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  int max_length; // w8
  unsigned int v33; // w9

  if ( (byte_40F616A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_EventRewardEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Comparison_EventRewardEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventRewardEntity__TypeInfo, v10);
    sub_B16FFC(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, v11);
    sub_B16FFC(&EventRewardMaster___c_TypeInfo, v12);
    byte_40F616A = 1;
  }
  EventRewardEntitiyList_17514116 = (BattleBuffData_BuffData_array *)EventRewardMaster__GetEventRewardEntitiyList_17514116(
                                                                       this,
                                                                       eventId,
                                                                       groupId,
                                                                       (const MethodInfo *)eventPoint);
  v18 = EventRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v18 = EventRewardMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventRewardEntity__TypeInfo,
                                                                          v13,
                                                                          v14,
                                                                          v15,
                                                                          v16);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v21,
      Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRewardEntity___ctor__);
    v22 = EventRewardMaster___c_TypeInfo->static_fields;
    v22->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRewardEntitiyList_17514116,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !EventRewardEntitiyList_17514116 )
    goto LABEL_21;
  max_length = EventRewardEntitiyList_17514116->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
      {
        sub_B17100(result, v30, v31);
        sub_B170A0();
      }
      result = (EventRewardEntity_o *)EventRewardEntitiyList_17514116->m_Items[v33];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( (int)++v33 >= max_length )
        return 0LL;
    }
LABEL_21:
    sub_B170D4();
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

  if ( (byte_40F6165 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__, entity);
    byte_40F6165 = 1;
  }
  PK = EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void __fastcall EventRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7038 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardMaster___c_TypeInfo, v1);
    byte_40F7038 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventRewardMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventRewardMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B170D4();
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t __fastcall EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B170D4();
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}