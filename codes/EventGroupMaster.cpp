void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9F74 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9F74 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    292,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v24; // w22
  __int64 v25; // x10

  if ( (byte_42E9F75 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      groupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventGroupEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventGroupEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_EventGroupEntity__TypeInfo, v18, v19, v20);
    byte_42E9F75 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, v22);
  v24 = 0;
  while ( v24 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v24,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v22 = list;
      v25 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v25
        && (EventGroupEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] == EventGroupEntity_TypeInfo
        && LODWORD(list->fields.items) == groupId )
      {
        if ( !v21 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventGroupEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v24;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E9F72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__, id, eventId, method);
    byte_42E9F72 = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w21
  int32_t *Item; // x0
  __int64 v15; // x10

  if ( (byte_42E9F76 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventGroupEntity_TypeInfo, v9, v10, v11);
    byte_42E9F76 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v13,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v15 = *(&EventGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v15
        && *(EventGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v15 - 8) == EventGroupEntity_TypeInfo
        && Item[5] == eventId )
      {
        return Item[4];
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_12;
  }
}


int32_t __fastcall EventGroupMaster__GetFirstOpenEventId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int32_t EventGroupId; // w0
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v28; // x19
  EventGroupMaster___c_c *v29; // x0
  struct EventGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v32; // x21
  struct EventGroupMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  TitleInfoControl_EventEndTimeInfo_o *v40; // x8

  v4 = eventId;
  if ( (byte_42E9F77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventGroupEntity___ctor__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_EventGroupEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, v18, v19, v20);
    sub_B5D5C4(&EventGroupMaster___c_TypeInfo, v21, v22, v23);
    byte_42E9F77 = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, v4, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v25);
    if ( !EntitiesByGroupId )
      goto LABEL_19;
    v28 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntitiesByGroupId;
    if ( EntitiesByGroupId->fields._size )
    {
      v29 = EventGroupMaster___c_TypeInfo;
      if ( (BYTE3(EventGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v29 = EventGroupMaster___c_TypeInfo;
      }
      static_fields = v29->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v32,
          Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_EventGroupEntity___ctor__);
        v33 = EventGroupMaster___c_TypeInfo->static_fields;
        v33->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v33->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v28,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      if ( !v28->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v40 = v28->fields._items->m_Items[0];
      if ( v40 )
        return *(_DWORD *)&v40->fields.is_reward;
LABEL_19:
      sub_B5D69C(EntitiesByGroupId, v27);
    }
  }
  return v4;
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

  if ( (byte_42E9F73 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&eventId);
    byte_42E9F73 = 1;
  }
  PK = EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventGroupMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E6518 & 1) == 0 )
  {
    sub_B5D5C4(&EventGroupMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6518 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventGroupMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventGroupMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.eventId - b->fields.eventId;
}