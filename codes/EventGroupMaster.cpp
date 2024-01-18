void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41890DB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__, method);
    byte_41890DB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    291,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_41890DC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventGroupEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventGroupEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventGroupEntity__TypeInfo, v9);
    byte_41890DC = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, v11);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v11 = list;
      v14 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (EventGroupEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == EventGroupEntity_TypeInfo
        && LODWORD(list->fields.items) == groupId )
      {
        if ( !v10 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventGroupEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41890D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_41890D9 = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
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
  int32_t *Item; // x0
  __int64 v10; // x10

  if ( (byte_41890DD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventGroupEntity_TypeInfo, v6);
    byte_41890DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_B2C434(list, *(_QWORD *)&eventId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v8,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v10
        && *(EventGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v10 - 8) == EventGroupEntity_TypeInfo
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
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v15; // x19
  EventGroupMaster___c_c *v16; // x0
  struct EventGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v19; // x21
  struct EventGroupMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  TitleInfoControl_EventEndTimeInfo_o *v27; // x8

  v3 = eventId;
  if ( (byte_41890DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventGroupEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventGroupEntity__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__, v8);
    sub_B2C35C(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, v9);
    sub_B2C35C(&EventGroupMaster___c_TypeInfo, v10);
    byte_41890DE = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, v3, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v12);
    if ( !EntitiesByGroupId )
      goto LABEL_19;
    v15 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntitiesByGroupId;
    if ( EntitiesByGroupId->fields._size )
    {
      v16 = EventGroupMaster___c_TypeInfo;
      if ( (BYTE3(EventGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v16 = EventGroupMaster___c_TypeInfo;
      }
      static_fields = v16->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        }
        v19 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v19,
          Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventGroupEntity___ctor__);
        v20 = EventGroupMaster___c_TypeInfo->static_fields;
        v20->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v20->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v15,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      if ( !v15->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = v15->fields._items->m_Items[0];
      if ( v27 )
        return *(_DWORD *)&v27->fields.is_reward;
LABEL_19:
      sub_B2C434(EntitiesByGroupId, v14);
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

  if ( (byte_41890DA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__, entity);
    byte_41890DA = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventGroupMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184AE5 & 1) == 0 )
  {
    sub_B2C35C(&EventGroupMaster___c_TypeInfo, v1);
    byte_4184AE5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventGroupMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventGroupMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.eventId - b->fields.eventId;
}