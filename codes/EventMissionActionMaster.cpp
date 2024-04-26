void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4352F42 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
    byte_4352F42 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    136,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
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

  if ( (byte_4352F40 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
    byte_4352F40 = 1;
  }
  PK = EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_21C0890 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
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

  if ( (byte_4352F41 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
    byte_4352F41 = 1;
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
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  EventMissionActionEntity_o *result; // x0
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_4352F43 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventMissionActionEntity_TypeInfo);
    byte_4352F43 = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_14:
    sub_B7076C(result, *(_QWORD *)&missionID);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_14;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                             v10,
                                             (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_14;
    v11 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (EventMissionActionEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    result = (EventMissionActionEntity_o *)this->fields.list;
    ++v10;
    if ( !result )
      goto LABEL_14;
  }
  return 0LL;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  void *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  __int64 v11; // x10
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v14; // x21
  struct EventMissionActionMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4352F45 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_EventMissionActionEntity___ctor__);
    sub_B70694(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_B70694(&EventMissionActionEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_B70694(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__);
    sub_B70694(&EventMissionActionMaster___c_TypeInfo);
    byte_4352F45 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( list )
    {
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v11 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == EventMissionActionEntity_TypeInfo )
        {
          if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
          {
            if ( !v7 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = this->fields.list;
          ++v10;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_26;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v14,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v15 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v15->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__5_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v7 )
LABEL_26:
    sub_B7076C(list, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w24
  __int64 v13; // x10

  if ( (byte_4352F44 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventMissionActionEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    byte_4352F44 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B7076C(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = list;
        v13 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (EventMissionActionEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == EventMissionActionEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == missionID
            && HIDWORD(list->fields.items) == progressType
            && HIDWORD(list->fields._syncRoot) == actionType )
          {
            if ( !v9 )
              goto LABEL_16;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v12;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v9;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  void *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  __int64 v11; // x10
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x20
  Il2CppObject *v14; // x21
  struct EventMissionActionMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4352F46 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_EventMissionActionEntity___ctor__);
    sub_B70694(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_B70694(&EventMissionActionEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_B70694(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__);
    sub_B70694(&EventMissionActionMaster___c_TypeInfo);
    byte_4352F46 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( list )
    {
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v11 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == EventMissionActionEntity_TypeInfo )
        {
          if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
          {
            if ( !v7 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = this->fields.list;
          ++v10;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v14,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v15 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v15->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__6_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v7 )
LABEL_27:
    sub_B7076C(list, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F0A8 & 1) == 0 )
  {
    sub_B70694(&EventMissionActionMaster___c_TypeInfo);
    byte_434F0A8 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionActionMaster___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.id - b->fields.id;
}