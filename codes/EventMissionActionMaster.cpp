void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F88A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__, method);
    byte_40F88A1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    135,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__GetEntity(
        EventMissionActionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F889F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_40F889F = 1;
  }
  PK = EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionActionMaster__TryGetEntity(
        EventMissionActionMaster_o *this,
        EventMissionActionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F88A0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__,
      entity);
    byte_40F88A0 = 1;
  }
  PK = EventMissionActionEntity__CreatePK(
         missionId,
         missionProgressType,
         id,
         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  EventMissionActionEntity_o *result; // x0
  __int64 v15; // x10

  if ( (byte_40F88A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&EventMissionActionEntity_TypeInfo, v10);
    byte_40F88A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B170D4();
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v13 )
      goto LABEL_14;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                             v13,
                                             v12,
                                             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_14;
    v15 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (EventMissionActionEntity_c *)result->klass->_2.typeHierarchy[v15 - 1] != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_14;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v20; // w23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v27; // x10
  EventMissionActionMaster___c_c *v28; // x0
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v31; // x21
  struct EventMissionActionMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40F88A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_EventMissionActionEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventMissionActionEntity__TypeInfo, v10);
    sub_B16FFC(&EventMissionActionEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v15);
    sub_B16FFC(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__, v16);
    sub_B16FFC(&EventMissionActionMaster___c_TypeInfo, v17);
    byte_40F88A4 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&missionID,
                                                                                                  *(_QWORD *)&progressType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  v20 = 0;
  while ( v20 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v25 )
    {
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v25,
                                                                      v20,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (EventMissionActionEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == EventMissionActionEntity_TypeInfo )
        {
          if ( Item->fields.missionTargetId == missionID && Item->fields.missionConditionDetailId == progressType )
          {
            if ( !v18 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              Item,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v20;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_26;
  }
  v28 = EventMissionActionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    v28 = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionActionEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v31,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v32 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v32->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v18 )
LABEL_26:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v19; // x10

  if ( (byte_40F88A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&EventMissionActionEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v13);
    byte_40F88A3 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&missionID,
                                                                                                  *(_QWORD *)&progressType,
                                                                                                  *(_QWORD *)&actionType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B170D4();
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v17 )
    {
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v17,
                                                                      v16,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (EventMissionActionEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == EventMissionActionEntity_TypeInfo )
        {
          if ( Item->fields.missionTargetId == missionID
            && Item->fields.missionConditionDetailId == progressType
            && Item->fields.eventId == actionType )
          {
            if ( !v14 )
              goto LABEL_16;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              Item,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v16;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v20; // w23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v27; // x10
  EventMissionActionMaster___c_c *v28; // x0
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x20
  Il2CppObject *v31; // x21
  struct EventMissionActionMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40F88A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_EventMissionActionEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventMissionActionEntity__TypeInfo, v10);
    sub_B16FFC(&EventMissionActionEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v15);
    sub_B16FFC(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__, v16);
    sub_B16FFC(&EventMissionActionMaster___c_TypeInfo, v17);
    byte_40F88A5 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&missionID,
                                                                                                  *(_QWORD *)&progressType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  v20 = 0;
  while ( v20 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v25 )
    {
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v25,
                                                                      v20,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (EventMissionActionEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == EventMissionActionEntity_TypeInfo )
        {
          if ( Item->fields.missionTargetId == missionID
            && Item->fields.missionConditionDetailId == progressType
            && Item->fields.eventId == 7 )
          {
            if ( !v18 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              Item,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v20;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  v28 = EventMissionActionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    v28 = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionActionEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v31,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v32 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v32->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v18 )
LABEL_27:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v18;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F6FEE & 1) == 0 )
  {
    sub_B16FFC(&EventMissionActionMaster___c_TypeInfo, v1);
    byte_40F6FEE = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMissionActionMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMissionActionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventMissionActionMaster___c___ctor(EventMissionActionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionActionMaster___c___getEntityListFromIDnType_b__5_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}