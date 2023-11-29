void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB69F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__, method);
    byte_40FB69F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    291,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v17; // x10

  if ( (byte_40FB6A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventGroupEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventGroupEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventGroupEntity__TypeInfo, v11);
    byte_40FB6A0 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventGroupEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B170D4();
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v15 )
      goto LABEL_14;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v15,
                                                                    v14,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (EventGroupEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == EventGroupEntity_TypeInfo
        && Item->fields.missionTargetId == groupId )
      {
        if ( !v12 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventGroupEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB69D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FB69D = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x0
  int32_t *Item; // x0
  __int64 v11; // x10

  if ( (byte_40FB6A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&EventGroupEntity_TypeInfo, v6);
    byte_40FB6A1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_B170D4();
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return -1;
    v9 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v9 )
      goto LABEL_12;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v9,
                        v8,
                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v11 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v11
        && *(EventGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v11 - 8) == EventGroupEntity_TypeInfo
        && Item[5] == eventId )
      {
        return Item[4];
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetFirstOpenEventId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t EventGroupId; // w0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v18; // x19
  EventGroupMaster___c_c *v19; // x0
  struct EventGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v22; // x21
  struct EventGroupMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  TitleInfoControl_EventEndTimeInfo_o *v30; // x8

  v3 = eventId;
  if ( (byte_40FB6A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventGroupEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventGroupEntity__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__, v8);
    sub_B16FFC(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, v9);
    sub_B16FFC(&EventGroupMaster___c_TypeInfo, v10);
    byte_40FB6A2 = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, v3, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v12);
    if ( !EntitiesByGroupId )
      goto LABEL_19;
    v18 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntitiesByGroupId;
    if ( EntitiesByGroupId->fields._size )
    {
      v19 = EventGroupMaster___c_TypeInfo;
      if ( (BYTE3(EventGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v19 = EventGroupMaster___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                              System_Comparison_EventGroupEntity__TypeInfo,
                                                                              v14,
                                                                              v15,
                                                                              v16,
                                                                              v17);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v22,
          Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_EventGroupEntity___ctor__);
        v23 = EventGroupMaster___c_TypeInfo->static_fields;
        v23->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v23->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v18,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      if ( !v18->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = v18->fields._items->m_Items[0];
      if ( v30 )
        return *(_DWORD *)&v30->fields.is_reward;
LABEL_19:
      sub_B170D4();
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventGroupMaster__TryGetEntity(
        EventGroupMaster_o *this,
        EventGroupEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FB69E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__, entity);
    byte_40FB69E = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F6FB2 & 1) == 0 )
  {
    sub_B16FFC(&EventGroupMaster___c_TypeInfo, v1);
    byte_40F6FB2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventGroupMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventGroupMaster___c___ctor(EventGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventGroupMaster___c___GetFirstOpenEventId_b__5_0(
        EventGroupMaster___c_o *this,
        EventGroupEntity_o *a,
        EventGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.eventId - b->fields.eventId;
}