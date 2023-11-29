void __fastcall EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9BDD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__, method);
    byte_40F9BDD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    233,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_o *__fastcall EventTowerRewardMaster__GetEntity(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F9BDB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40F9BDB = 1;
  }
  PK = EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
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
  EventTowerRewardMaster___c_c *v30; // x0
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v33; // x21
  struct EventTowerRewardMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F9BDF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventTowerRewardEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventTowerRewardEntity__TypeInfo, v9);
    sub_B16FFC(&EventTowerRewardEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v15);
    sub_B16FFC(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__, v16);
    sub_B16FFC(&EventTowerRewardMaster___c_TypeInfo, v17);
    byte_40F9BDF = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
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
      if ( !Item )
        break;
      v21 = Item;
      v29 = *(&EventTowerRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventTowerRewardEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == eventId )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
      }
      if ( ++v26 >= v25 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v30 = EventTowerRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventTowerRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    v30 = EventTowerRewardMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventTowerRewardEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v33,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventTowerRewardEntity___ctor__);
    v34 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v34->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__4_0,
      (System_Int32_array **)_9__4_0,
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
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
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
  EventTowerRewardMaster___c_c *v31; // x0
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v34; // x21
  struct EventTowerRewardMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40F9BDE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_EventTowerRewardEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventTowerRewardEntity__TypeInfo, v10);
    sub_B16FFC(&EventTowerRewardEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v16);
    sub_B16FFC(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__, v17);
    sub_B16FFC(&EventTowerRewardMaster___c_TypeInfo, v18);
    byte_40F9BDE = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&towerId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
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
      if ( !Item )
        break;
      v22 = Item;
      v30 = *(&EventTowerRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v30
        || (EventTowerRewardEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == eventId && Item->fields.missionConditionDetailId == towerId )
      {
        if ( !v19 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
      }
      if ( ++v27 >= v26 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_15:
  v31 = EventTowerRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventTowerRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    v31 = EventTowerRewardMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventTowerRewardEntity__TypeInfo,
                                                                          v22,
                                                                          v23,
                                                                          v24,
                                                                          v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v34,
      Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventTowerRewardEntity___ctor__);
    v35 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v35->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__3_0,
      (System_Int32_array **)_9__3_0,
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
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerRewardMaster__TryGetEntity(
        EventTowerRewardMaster_o *this,
        EventTowerRewardEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F9BDC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__, entity);
    byte_40F9BDC = 1;
  }
  PK = EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void __fastcall EventTowerRewardMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F706D & 1) == 0 )
  {
    sub_B16FFC(&EventTowerRewardMaster___c_TypeInfo, v1);
    byte_40F706D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventTowerRewardMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventTowerRewardMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventTowerRewardMaster___c___ctor(EventTowerRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardAllEntityList_b__4_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.floor - b->fields.floor;
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.floor - b->fields.floor;
}