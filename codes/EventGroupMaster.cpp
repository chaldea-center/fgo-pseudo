void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_435346B & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
    byte_435346B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    292,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_435346C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventGroupEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventGroupEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventGroupEntity__TypeInfo);
    byte_435346C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B7076C(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (EventGroupEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == EventGroupEntity_TypeInfo
        && LODWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventGroupEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4353469 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
    byte_4353469 = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21C0890 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v6; // w21
  int32_t *Item; // x0
  __int64 v8; // x10

  if ( (byte_435346D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventGroupEntity_TypeInfo);
    byte_435346D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_B7076C(list, *(_QWORD *)&eventId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v6,
                        (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v8 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v8
        && *(EventGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v8 - 8) == EventGroupEntity_TypeInfo
        && Item[5] == eventId )
      {
        return Item[4];
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_12;
  }
}


int32_t __fastcall EventGroupMaster__GetFirstOpenEventId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t EventGroupId; // w0
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v9; // x19
  EventGroupMaster___c_c *v10; // x0
  struct EventGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v13; // x21
  struct EventGroupMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  TitleInfoControl_EventEndTimeInfo_o *v21; // x8

  if ( (byte_435346E & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventGroupEntity___ctor__);
    sub_B70694(&System_Comparison_EventGroupEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
    sub_B70694(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__);
    sub_B70694(&EventGroupMaster___c_TypeInfo);
    byte_435346E = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, eventId, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v6);
    if ( !EntitiesByGroupId )
      goto LABEL_19;
    v9 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntitiesByGroupId;
    if ( EntitiesByGroupId->fields._size )
    {
      v10 = EventGroupMaster___c_TypeInfo;
      if ( (BYTE3(EventGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v10 = EventGroupMaster___c_TypeInfo;
      }
      static_fields = v10->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v13,
          Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__,
          (const MethodInfo_2B05B38 *)Method_System_Comparison_EventGroupEntity___ctor__);
        v14 = EventGroupMaster___c_TypeInfo->static_fields;
        v14->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v14->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v9,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      if ( !v9->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v21 = v9->fields._items->m_Items[0];
      if ( v21 )
        return *(_DWORD *)&v21->fields.is_reward;
LABEL_19:
      sub_B7076C(EntitiesByGroupId, v8);
    }
  }
  return eventId;
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

  if ( (byte_435346A & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
    byte_435346A = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventGroupMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F064 & 1) == 0 )
  {
    sub_B70694(&EventGroupMaster___c_TypeInfo);
    byte_434F064 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventGroupMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventGroupMaster___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return a->fields.eventId - b->fields.eventId;
}