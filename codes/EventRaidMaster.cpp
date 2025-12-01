void EventRaidMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4CC74E3 & 1) == 0 )
  {
    sub_1C713B0(&EventRaidMaster_TypeInfo);
    byte_4CC74E3 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC74E0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
    byte_4CC74E0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    152,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


int32_t EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  int64_t Time; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  int v10; // w27
  int64_t v11; // x22
  unsigned int v12; // w28
  int32_t v13; // w24
  int32_t v14; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v16; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v18; // x25

  if ( (byte_4CC74D4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CC74D4 = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_26:
    sub_1C71608(Time, v8);
  max_length = RaidDeadQuestReleaseEntityList->max_length;
  v10 = max_length - 1;
  if ( (int)max_length < 1 )
  {
    return 0;
  }
  else
  {
    v11 = Time;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v12];
      if ( !Time )
        goto LABEL_26;
      v14 = *(_DWORD *)(Time + 16);
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v16);
      if ( !Entity )
        return v13;
      v18 = Entity;
      Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_26;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v14, 0, 0);
      if ( (Time & 1) == 0 )
        break;
      if ( v10 == v12 )
      {
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                          v18->fields.eventId,
                          (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_26;
        if ( v11 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( v10 == v12 )
        return 0;
      ++v12;
      v13 = ValueInt;
      if ( v12 >= LODWORD(RaidDeadQuestReleaseEntityList->max_length) )
        sub_1C71610(Time);
    }
    if ( v11 >= v18->fields.startedAt )
      return ValueInt;
    else
      return v13;
  }
}


int32_t EventRaidMaster__GetCurrentDayOld(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  int64_t v7; // x21
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4CC74D5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC74D5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    sub_1C71608(Time, v6);
  v7 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C71608(0, v19);
    if ( *(_DWORD *)(v18 + 16) == eventId && v7 >= *(_QWORD *)(v18 + 80) && v7 < *(_QWORD *)(v18 + 88) )
    {
      v20 = *(_DWORD *)(v18 + 20);
      goto LABEL_26;
    }
  }
  v20 = 0;
LABEL_26:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_30;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_30:
    v24 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v20;
}


EventRaidEntity_array *EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  EventRaidMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__10_0; // x20
  Il2CppObject *v37; // x21
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CC74D6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_1C713B0(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRaidEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventRaidEntity__TypeInfo);
    sub_1C713B0(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__10_0__);
    sub_1C713B0(&EventRaidMaster___c_TypeInfo);
    byte_4CC74D6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     list,
                     (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
      if ( !Enumerator )
        sub_1C71608(0, v8);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_10;
          }
          v13 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_10:
          v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                Enumerator,
                *(_QWORD *)(v13 + 8))
            & 1) == 0 )
          break;
        v14 = Enumerator->klass;
        v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          v16 = &v14->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
          {
            --v15;
            v16 += 4;
            if ( !v15 )
              goto LABEL_17;
          }
          v17 = (__int64)&v14->vtable[*v16];
        }
        else
        {
LABEL_17:
          v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
        }
        v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                Enumerator,
                *(_QWORD *)(v17 + 8));
        v26 = v18;
        if ( !v18 )
          sub_1C71608(0, v19);
        if ( *(_DWORD *)(v18 + 16) == currentEventRaidEntity->fields.eventId
          && *(_DWORD *)(v18 + 24) == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v5 )
            sub_1C71608(v18, v19);
          items = v5->fields._items;
          v28 = Method_System_Collections_Generic_List_EventRaidEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C71608(v18, v19);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v18,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v26;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      v31 = Enumerator->klass;
      v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v33 = &v31->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_31;
        }
        v34 = (__int64)&v31->vtable[*v33];
      }
      else
      {
LABEL_31:
        v34 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                 Enumerator,
                                                                 *(_QWORD *)(v34 + 8));
      v35 = EventRaidMaster___c_TypeInfo;
      if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
        v35 = EventRaidMaster___c_TypeInfo;
      }
      _9__10_0 = (System_Comparison_T__o *)v35->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = EventRaidMaster___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v35->static_fields->__9;
        _9__10_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventRaidEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__10_0,
          v37,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__10_0__,
          0);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Comparison_EventRaidEntity__o *)_9__10_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
          (int32_t)_9__10_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      if ( v5 )
      {
        System_Collections_Generic_List_object___Sort_58794460(
          v5,
          _9__10_0,
          (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_47:
    sub_1C71608(list, v7);
  }
  if ( !v5 )
    goto LABEL_47;
  return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
}


EventRaidEntity_array *EventRaidMaster__GetCurrentGroupListByEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t CurrentDay; // w0
  const MethodInfo *v6; // x3
  EventRaidEntity_o *Entity; // x1
  const MethodInfo *v8; // x2

  CurrentDay = EventRaidMaster__GetCurrentDay(this, eventId, method);
  Entity = EventRaidMaster__GetEntity(this, eventId, CurrentDay, v6);
  return EventRaidMaster__GetCurrentGroupListByEntity(this, Entity, v8);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_o *EventRaidMaster__GetEntity(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC74E1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
    sub_1C713B0(&EventRaidEntity_TypeInfo);
    byte_4CC74E1 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_340D938 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


EventRaidEntity_array *EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *Entitys; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4CC74DD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_1C713B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
    sub_1C713B0(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_1C713B0(&Method_EventRaidMaster___c__DisplayClass18_0__GetEventRaidEntityArray_b__0__);
    sub_1C713B0(&EventRaidMaster___c__DisplayClass18_0_TypeInfo);
    byte_4CC74DD = 1;
  }
  v7 = sub_1C715FC(EventRaidMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = groupIndex;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_340CBBC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
  v11 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventRaidMaster___c__DisplayClass18_0__GetEventRaidEntityArray_b__0__,
    0);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys,
                                    (System_Predicate_T__o *)v11,
                                    (const MethodInfo_3251514 *)Method_System_Array_FindAll_EventRaidEntity___);
}


EventRaidEntity_array *EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *Entitys; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4CC74D7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_1C713B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
    sub_1C713B0(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_1C713B0(&Method_EventRaidMaster___c__DisplayClass11_0__GetEventRaidEntityArrayFromEventId_b__0__);
    sub_1C713B0(&EventRaidMaster___c__DisplayClass11_0_TypeInfo);
    byte_4CC74D7 = 1;
  }
  v5 = sub_1C715FC(EventRaidMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = eventId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_340CBBC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
  v9 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventRaidMaster___c__DisplayClass11_0__GetEventRaidEntityArrayFromEventId_b__0__,
    0);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_3251514 *)Method_System_Array_FindAll_EventRaidEntity___);
}


int64_t EventRaidMaster__GetEventRaidTimeLimitAt(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x9
  int64_t v6; // x8
  int v7; // w10
  EventRaidEntity_o *v8; // x11
  __int64 timeLimitAt; // x11

  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    return 0;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( !max_length || (int)max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = EventRaidEntityArrayFromEventId->m_Items[v7];
    if ( !v8 )
      sub_1C71608(EventRaidEntityArrayFromEventId, v4);
    timeLimitAt = v8->fields.timeLimitAt;
    ++v7;
    if ( v6 <= timeLimitAt && timeLimitAt >= 1 )
      v6 = timeLimitAt;
  }
  while ( (_DWORD)max_length != v7 );
  return v6;
}


EventRaidEntity_o *EventRaidMaster__GetNextSubGroupEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *nowEventRaidEntity,
        const MethodInfo *method)
{
  EventRaidMaster_o *v4; // x20
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  EventRaidMaster___c_c *v6; // x8
  EventRaidEntity_array *v7; // x20
  System_Comparison_T__o *_9__19_0; // x21
  Il2CppObject *v9; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int max_length; // w24
  int v18; // w23
  EventRaidEntity_o *v19; // x21
  EventRaidMaster_o *v20; // x22
  System_String_o *v21; // x0
  EventRaidEntity_o *v22; // x8

  v4 = this;
  if ( (byte_4CC74DE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Sort_EventRaidEntity___);
    sub_1C713B0(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_1C713B0(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__19_0__);
    this = (EventRaidMaster_o *)sub_1C713B0(&EventRaidMaster___c_TypeInfo);
    byte_4CC74DE = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_23;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      v4,
                                      nowEventRaidEntity->fields.eventId,
                                      method);
  v6 = EventRaidMaster___c_TypeInfo;
  v7 = EventRaidEntityArrayFromEventId;
  if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v6 = EventRaidMaster___c_TypeInfo;
  }
  _9__19_0 = (System_Comparison_T__o *)v6->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventRaidMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__19_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_object____ctor(_9__19_0, v9, Method_EventRaidMaster___c__GetNextSubGroupEntity_b__19_0__, 0);
    static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Comparison_EventRaidEntity__o *)_9__19_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0,
      (int32_t)_9__19_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  System_Array__Sort_object__51475292(
    (System_Object_array *)v7,
    _9__19_0,
    (const MethodInfo_311735C *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !v7 )
    goto LABEL_23;
  max_length = v7->max_length;
  v18 = 0;
  do
  {
    if ( (max_length & ~(max_length >> 31)) == v18 )
      return 0;
    if ( (unsigned int)v18 >= LODWORD(v7->max_length) )
      goto LABEL_24;
    v19 = v7->m_Items[v18];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, const MethodInfo *))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method);
    if ( !v19 )
      goto LABEL_23;
    v20 = this;
    v21 = (System_String_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, const MethodInfo *))v19->klass->vtable._4_get_PrimaryKey.methodPtr)(
                               v19,
                               v19->klass->vtable._4_get_PrimaryKey.method);
    this = (EventRaidMaster_o *)System_String__op_Inequality((System_String_o *)v20, v21, 0);
    ++v18;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( v18 >= max_length )
    return 0;
  if ( (unsigned int)v18 >= LODWORD(v7->max_length) )
LABEL_24:
    sub_1C71610(this);
  v22 = v7->m_Items[v18];
  if ( !v22 )
LABEL_23:
    sub_1C71608(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == v22->fields.subGroupIndex )
    return v7->m_Items[v18];
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventRaidMaster__GetNowGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t raidCountMax,
        const MethodInfo *method)
{
  int32_t RaidGorupMax; // w20
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  QuestReleaseEntity_array *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *QuestIdListByGroupId; // x22
  il2cpp_array_size_t max_length; // x8
  QuestReleaseMaster_o *v12; // x23
  unsigned __int64 v13; // x26
  int32_t v14; // w24
  int v15; // w9
  int v16; // w10
  QuestReleaseEntity_o *v17; // x8
  int32_t v18; // w25
  EventRaidEntity_c *v19; // x0
  int32_t i; // w22
  int32_t Item; // w23

  RaidGorupMax = raidCountMax;
  if ( (byte_4CC74DC & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&EventRaidEntity_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC74DC = 1;
  }
  if ( RaidGorupMax < 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_40;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_40;
  max_length = QuestIdListByGroupId->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = (QuestReleaseMaster_o *)Instance;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C71610(Instance);
      if ( !v12 )
        break;
      v14 = QuestIdListByGroupId->m_Items[v13];
      Instance = QuestReleaseMaster__getListByQuestID(v12, v14, 0);
      if ( !Instance )
        break;
      v15 = Instance->max_length;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = Instance->m_Items[v16];
          if ( !v17 )
            goto LABEL_40;
          if ( v17->fields.type == 71 )
            break;
          if ( v15 == ++v16 )
            goto LABEL_24;
        }
        Instance = (QuestReleaseEntity_array *)QuestReleaseEntity__getValueInt(Instance->m_Items[v16], 0);
        if ( !v7 )
          break;
        v18 = (int)Instance;
        Instance = (QuestReleaseEntity_array *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                 v7,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_34599C8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v7,
            v18,
            v14,
            (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(max_length) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_25;
    }
LABEL_40:
    sub_1C71608(Instance, v9);
  }
LABEL_25:
  v19 = EventRaidEntity_TypeInfo;
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
    v19 = EventRaidEntity_TypeInfo;
  }
  for ( i = v19->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (QuestReleaseEntity_array *)CondType__IsOpen(71, eventId, i, 0, 0, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v7 )
      goto LABEL_40;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v7,
            i,
            (const MethodInfo_34599C8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v7,
             i,
             (const MethodInfo_3459740 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_40596552(Item, -1, 0, 0) )
      break;
  }
  return i;
}


System_Collections_Generic_List_int__o *EventRaidMaster__GetQuestIdList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x19
  EventRaidMaster_o *v9; // x0
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC74D3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC74D3 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v8 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v9, eventId, condType, day, v10);
  if ( !QuestReleaseEntityList )
    sub_1C71608(0, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current )
      sub_1C71608(v13, v14);
    if ( !v8 )
      sub_1C71608(v13, v14);
    klass_low = LODWORD(v21.fields._current[1].klass);
    items = v8->fields._items;
    v17 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !items )
      sub_1C71608(v13, klass_low);
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v8,
        klass_low,
        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v8->fields._size = size + 1;
      items->m_Items[size] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v8;
}


System_Collections_Generic_List_QuestReleaseEntity__o *EventRaidMaster__GetQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *v9; // x1
  System_Int32_array *QuestIdListByGroupId; // x23
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v12; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x26
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x19
  Il2CppObject *v26; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC74CF & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__2_0__);
    sub_1C713B0(&EventRaidMaster___c_TypeInfo);
    byte_4CC74CF = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  max_length = QuestIdListByGroupId->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C71610(Instance);
      if ( !MasterData_object )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           (QuestReleaseMaster_o *)MasterData_object,
                           &entity,
                           QuestIdListByGroupId->m_Items[v14],
                           condType,
                           eventId,
                           day,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( day < 1 )
          goto LABEL_35;
        Instance = entity;
        if ( !entity )
          break;
        Instance = (void *)QuestReleaseEntity__getValueInt(entity, 0);
        if ( (_DWORD)Instance == day )
        {
LABEL_35:
          if ( !v12 )
            break;
          v9 = (Il2CppObject *)entity;
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v9,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v9;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v9, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      LODWORD(max_length) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_21;
    }
LABEL_31:
    sub_1C71608(Instance, v9);
  }
LABEL_21:
  if ( !day )
  {
    Instance = EventRaidMaster___c_TypeInfo;
    if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      Instance = EventRaidMaster___c_TypeInfo;
    }
    v25 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v25 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRaidMaster___c_TypeInfo;
      }
      v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v25 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_object____ctor(v25, v26, Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__2_0__, 0);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_QuestReleaseEntity__o *)v25;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
    }
    if ( !v12 )
      goto LABEL_31;
    System_Collections_Generic_List_object___Sort_58794460(
      v12,
      v25,
      (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
}


System_Int32_array *EventRaidMaster__GetRaidAliveQuestIds(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_4CC74D0 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4CC74D0 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_1C71608(0, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t EventRaidMaster__GetRaidDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_4CC74D1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4CC74D1 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_1C71608(0, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
}


QuestReleaseEntity_array *EventRaidMaster__GetRaidDeadQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v8; // x1

  if ( (byte_4CC74CE & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1C713B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    byte_4CC74CE = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_1C71608(0, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
                                       (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0

  if ( (byte_4CC74D9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC74D9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  v8 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v8 )
      sub_1C71608(Enumerator, v7);
    klass = v8->klass;
    v11 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v13 = sub_1C47738(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v8,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = v8->klass;
    v15 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_17:
      v17 = sub_1C47738(v8, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                  v8,
                                                                  *(_QWORD *)(v17 + 8));
    if ( !Enumerator )
      sub_1C71608(0, v7);
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v18 = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_28;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_28:
    v21 = sub_1C47738(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return monitor & ~(monitor >> 31);
}


int32_t EventRaidMaster__GetRaidGroupDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_4CC74D2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4CC74D2 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_1C71608(0, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
}


int32_t EventRaidMaster__GetStartRaidGroupIndex(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  EventRaidEntity_array *Instance; // x0
  __int64 v6; // x1
  System_Object_array *Entitys; // x20
  const MethodInfo *v8; // x2
  int max_length; // w9
  int v10; // w10
  int32_t groupIndex; // w8
  Il2CppObject *v12; // x11
  int v13; // w12
  int v14; // w13
  EventRaidEntity_o *v15; // x14

  if ( (byte_4CC74DF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C713B0(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntitys__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC74DF = 1;
  }
  Instance = (EventRaidEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (EventRaidEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (const MethodInfo_340CBBC *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntitys__);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v8);
  if ( !Entitys )
    goto LABEL_25;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    groupIndex = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
LABEL_26:
        sub_1C71610(Instance);
      v12 = Entitys->m_Items[v10];
      if ( !v12 )
        break;
      if ( LODWORD(v12[1].klass) == eventId )
      {
        if ( !Instance )
          break;
        v13 = Instance->max_length;
        if ( v13 >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            if ( v13 == v14 )
              goto LABEL_26;
            v15 = Instance->m_Items[v14];
            if ( !v15 )
              goto LABEL_25;
            if ( HIDWORD(v12[1].klass) == v15->fields.day )
              break;
            if ( v13 == ++v14 )
              goto LABEL_21;
          }
          if ( groupIndex < v15->fields.groupIndex )
            groupIndex = v15->fields.groupIndex;
        }
      }
LABEL_21:
      if ( ++v10 == max_length )
        return groupIndex;
    }
LABEL_25:
    sub_1C71608(Instance, v6);
  }
  return 0;
}


int32_t EventRaidMaster__GetSubGroupMax(
        EventRaidMaster_o *this,
        EventRaidEntity_o *EventRaidEntityBase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v8; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4CC74DB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC74DB = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v6);
  v8 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C71608(0, v18);
    if ( v17[4] == EventRaidEntityBase->fields.eventId
      && v17[6] == EventRaidEntityBase->fields.groupIndex
      && v17[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v8;
    }
  }
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_30;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_30:
    v22 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v8;
}


int32_t EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0
  EventRaidMaster___c_c *v7; // x8
  EventRaidEntity_array *v8; // x20
  System_Comparison_T__o *_9__15_0; // x21
  Il2CppObject *v10; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int max_length; // w8
  int v21; // w9
  EventRaidEntity_o *v22; // x10

  if ( (byte_4CC74DA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Sort_EventRaidEntity___);
    sub_1C713B0(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_1C713B0(&Method_EventRaidMaster___c__GetSubGroupNow_b__15_0__);
    sub_1C713B0(&EventRaidMaster___c_TypeInfo);
    byte_4CC74DA = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             this,
                             eventRaidEntityBase->fields.eventId,
                             eventRaidEntityBase->fields.groupIndex,
                             v3);
    v7 = EventRaidMaster___c_TypeInfo;
    v8 = EventRaidEntityArray;
    if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v7 = EventRaidMaster___c_TypeInfo;
    }
    _9__15_0 = (System_Comparison_T__o *)v7->static_fields->__9__15_0;
    if ( !_9__15_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = EventRaidMaster___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__15_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_object____ctor(_9__15_0, v10, Method_EventRaidMaster___c__GetSubGroupNow_b__15_0__, 0);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__15_0 = (struct System_Comparison_EventRaidEntity__o *)_9__15_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0,
        (int32_t)_9__15_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    System_Array__Sort_object__51475292(
      (System_Object_array *)v8,
      _9__15_0,
      (const MethodInfo_311735C *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !v8 )
      goto LABEL_22;
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      v18 = 0;
      while ( 1 )
      {
        if ( max_length == v21 )
          sub_1C71610(v18);
        v22 = v8->m_Items[v21];
        if ( !v22 )
          break;
        if ( v22->fields.subGroupIndex == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( v22->fields.startedAt == eventRaidEntityBase->fields.startedAt )
            return v18;
          v18 = (unsigned int)(v18 + 1);
        }
        if ( max_length == ++v21 )
          goto LABEL_19;
      }
LABEL_22:
      sub_1C71608(v18, v19);
    }
  }
LABEL_19:
  LODWORD(v18) = 0;
  return v18;
}


bool EventRaidMaster__IsEventRaidAliveAny(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v6; // x1
  int max_length; // w8
  EventRaidEntity_array *v8; // x20
  bool v9; // w22
  int v10; // w23
  EventRaidEntity_o *v11; // x8
  int64_t day; // x21

  if ( (byte_4CC74D8 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    byte_4CC74D8 = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_14;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v8 = EventRaidEntityArrayFromEventId;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C71610(EventRaidEntityArrayFromEventId);
      v11 = v8->m_Items[v10];
      if ( !v11 )
        break;
      day = v11->fields.day;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EventRaidEntityArrayFromEventId = (EventRaidEntity_array *)CondType__IsOpen(27, eventId, day, 0, 0, 0);
      if ( ((unsigned __int8)EventRaidEntityArrayFromEventId & 1) == 0 )
      {
        max_length = v8->max_length;
        v9 = ++v10 < max_length;
        if ( v10 < max_length )
          continue;
      }
      return v9;
    }
LABEL_14:
    sub_1C71608(EventRaidEntityArrayFromEventId, v6);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool EventRaidMaster__TryGetEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC74E2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
    sub_1C713B0(&EventRaidEntity_TypeInfo);
    byte_4CC74E2 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void EventRaidMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC74E4 & 1) == 0 )
  {
    sub_1C713B0(&EventRaidMaster___c_TypeInfo);
    byte_4CC74E4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaidMaster___c_TypeInfo->static_fields->__9 = (struct EventRaidMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventRaidMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventRaidMaster___c___ctor(EventRaidMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventRaidMaster___c___GetCurrentGroupListByEntity_b__10_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.day - b->fields.day;
}


int32_t EventRaidMaster___c___GetNextSubGroupEntity_b__19_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  int32_t groupIndex; // w8
  int32_t v5; // w9
  int32_t result; // w0
  int32_t subGroupIndex; // w8
  int32_t v8; // w9

  if ( !a || !b )
    sub_1C71608(this, a);
  groupIndex = a->fields.groupIndex;
  v5 = b->fields.groupIndex;
  result = groupIndex - v5;
  if ( groupIndex == v5 )
  {
    subGroupIndex = a->fields.subGroupIndex;
    v8 = b->fields.subGroupIndex;
    result = subGroupIndex - v8;
    if ( subGroupIndex == v8 )
      return LODWORD(a->fields.startedAt) - LODWORD(b->fields.startedAt);
  }
  return result;
}


int32_t EventRaidMaster___c___GetQuestReleaseEntityList_b__2_0(
        EventRaidMaster___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (EventRaidMaster___c_o *)QuestReleaseEntity__getValueInt(a, 0), !b) )
    sub_1C71608(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0);
}


int32_t EventRaidMaster___c___GetSubGroupNow_b__15_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return LODWORD(a->fields.startedAt) - LODWORD(b->fields.startedAt);
}


void EventRaidMaster___c__DisplayClass11_0___ctor(
        EventRaidMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRaidMaster___c__DisplayClass11_0___GetEventRaidEntityArrayFromEventId_b__0(
        EventRaidMaster___c__DisplayClass11_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return a->fields.eventId == this->fields.eventId;
}


void EventRaidMaster___c__DisplayClass18_0___ctor(
        EventRaidMaster___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRaidMaster___c__DisplayClass18_0___GetEventRaidEntityArray_b__0(
        EventRaidMaster___c__DisplayClass18_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}