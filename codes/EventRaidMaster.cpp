void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B02107 & 1) == 0 )
  {
    sub_1BC3008(&EventRaidMaster_TypeInfo, v1);
    byte_4B02107 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02104 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__, method);
    byte_4B02104 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    152,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  int64_t Time; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  int v14; // w27
  int64_t v15; // x22
  il2cpp_array_size_t v16; // w28
  int32_t v17; // w24
  int32_t v18; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v20; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v22; // x25
  __int64 v23; // x2

  if ( (byte_4B020F8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    byte_4B020F8 = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_26:
    sub_1BC3264(Time, v12);
  v13 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  v14 = v13 - 1;
  if ( (int)v13 < 1 )
  {
    return 0;
  }
  else
  {
    v15 = Time;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v16];
      if ( !Time )
        goto LABEL_26;
      v18 = *(_DWORD *)(Time + 16);
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v20);
      if ( !Entity )
        return v17;
      v22 = Entity;
      Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_26;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v18, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( v14 == v16 )
      {
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                          v22->fields.eventId,
                          (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_26;
        if ( v15 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( v14 == v16 )
        return 0;
      ++v16;
      v17 = ValueInt;
      if ( v16 >= RaidDeadQuestReleaseEntityList->max_length )
        sub_1BC326C(Time, v12, v23);
    }
    if ( v15 >= v22->fields.startedAt )
      return ValueInt;
    else
      return v17;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetCurrentDayOld(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x0
  __int64 v10; // x1
  int64_t v11; // x21
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w21
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4B020F9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    byte_4B020F9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1BC3264(Time, v10);
  v11 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_18:
      v21 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1BC3264(0LL, v23);
    if ( *(_DWORD *)(v22 + 16) == eventId && v11 >= *(_QWORD *)(v22 + 80) && v11 < *(_QWORD *)(v22 + 88) )
    {
      v24 = *(_DWORD *)(v22 + 20);
      goto LABEL_26;
    }
  }
  v24 = 0;
LABEL_26:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_30;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_30:
    v28 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v24;
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  EventRaidMaster___c_c *v42; // x8
  System_Comparison_T__o *_9__10_0; // x20
  Il2CppObject *v44; // x21
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3

  if ( (byte_4B020FA & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__,
      currentEventRaidEntity);
    sub_1BC3008(&System_Comparison_EventRaidEntity__TypeInfo, v5);
    sub_1BC3008(&System_IDisposable_TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventRaidEntity__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_EventRaidEntity__TypeInfo, v13);
    sub_1BC3008(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__10_0__, v14);
    sub_1BC3008(&EventRaidMaster___c_TypeInfo, v15);
    byte_4B020FA = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     list,
                     (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
      if ( !Enumerator )
        sub_1BC3264(0LL, v19);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v22;
            p_offset += 4;
            if ( !v22 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v25 = Enumerator->klass;
        v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v27 = &v25->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_17;
          }
          v28 = (__int64)&v25->vtable[*v27].method;
        }
        else
        {
LABEL_17:
          v28 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0LL);
        }
        v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                Enumerator,
                *(_QWORD *)(v28 + 8));
        v33 = v29;
        if ( !v29 )
          sub_1BC3264(0LL, v30);
        if ( *(_DWORD *)(v29 + 16) == currentEventRaidEntity->fields.eventId
          && *(_DWORD *)(v29 + 24) == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v16 )
            sub_1BC3264(v29, v30);
          items = v16->fields._items;
          v35 = Method_System_Collections_Generic_List_EventRaidEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1BC3264(v29, v30);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)v29,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v33;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 4), v33, v31, v32);
          }
        }
      }
      v38 = Enumerator->klass;
      v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v40 = &v38->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_31;
        }
        v41 = (__int64)&v38->vtable[*v40].method;
      }
      else
      {
LABEL_31:
        v41 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                 Enumerator,
                                                                 *(_QWORD *)(v41 + 8));
      v42 = EventRaidMaster___c_TypeInfo;
      if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
        v42 = EventRaidMaster___c_TypeInfo;
      }
      _9__10_0 = (System_Comparison_T__o *)v42->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = EventRaidMaster___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__10_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventRaidEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__10_0,
          v44,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__10_0__,
          0LL);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Comparison_EventRaidEntity__o *)_9__10_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v46, v47);
      }
      if ( v16 )
      {
        System_Collections_Generic_List_object___Sort_57288964(
          v16,
          _9__10_0,
          (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v16,
                                          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_47:
    sub_1BC3264(list, v18);
  }
  if ( !v16 )
    goto LABEL_47;
  return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEventId(
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
EventRaidEntity_o *__fastcall EventRaidMaster__GetEntity(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4B02105 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_1BC3008(&EventRaidEntity_TypeInfo, v7);
    byte_4B02105 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_32B3B28 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Object_array *Entitys; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4B02101 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__, v7);
    sub_1BC3008(&System_Predicate_EventRaidEntity__TypeInfo, v8);
    sub_1BC3008(&Method_EventRaidMaster___c__DisplayClass18_0__GetEventRaidEntityArray_b__0__, v9);
    sub_1BC3008(&EventRaidMaster___c__DisplayClass18_0_TypeInfo, v10);
    byte_4B02101 = 1;
  }
  v11 = sub_1BC3254(EventRaidMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BC3264(v12, v13);
  *(_DWORD *)(v11 + 16) = eventId;
  *(_DWORD *)(v11 + 20) = groupIndex;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_32B2DAC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
  v15 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_EventRaidMaster___c__DisplayClass18_0__GetEventRaidEntityArray_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys,
                                    (System_Predicate_T__o *)v15,
                                    (const MethodInfo_30FE89C *)Method_System_Array_FindAll_EventRaidEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Object_array *Entitys; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4B020FB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__, v5);
    sub_1BC3008(&System_Predicate_EventRaidEntity__TypeInfo, v6);
    sub_1BC3008(&Method_EventRaidMaster___c__DisplayClass11_0__GetEventRaidEntityArrayFromEventId_b__0__, v7);
    sub_1BC3008(&EventRaidMaster___c__DisplayClass11_0_TypeInfo, v8);
    byte_4B020FB = 1;
  }
  v9 = sub_1BC3254(EventRaidMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_32B2DAC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
  v13 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventRaidMaster___c__DisplayClass11_0__GetEventRaidEntityArrayFromEventId_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_30FE89C *)Method_System_Array_FindAll_EventRaidEntity___);
}


int64_t __fastcall EventRaidMaster__GetEventRaidTimeLimitAt(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v4; // x1
  __int64 v5; // x9
  int64_t v6; // x8
  int v7; // w10
  EventRaidEntity_o *v8; // x11
  __int64 timeLimitAt; // x11

  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    return 0LL;
  v5 = *(_QWORD *)&EventRaidEntityArrayFromEventId->max_length;
  if ( !v5 || (int)v5 < 1 )
    return 0LL;
  v6 = 0LL;
  v7 = 0;
  do
  {
    v8 = EventRaidEntityArrayFromEventId->m_Items[v7];
    if ( !v8 )
      sub_1BC3264(EventRaidEntityArrayFromEventId, v4);
    timeLimitAt = v8->fields.timeLimitAt;
    ++v7;
    if ( v6 <= timeLimitAt && timeLimitAt >= 1 )
      v6 = timeLimitAt;
  }
  while ( (_DWORD)v5 != v7 );
  return v6;
}


EventRaidEntity_o *__fastcall EventRaidMaster__GetNextSubGroupEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *nowEventRaidEntity,
        const MethodInfo *method)
{
  EventRaidMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  EventRaidMaster___c_c *v9; // x8
  System_Object_array *v10; // x20
  System_Comparison_T__o *_9__19_0; // x21
  Il2CppObject *v12; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x2
  int max_length; // w24
  il2cpp_array_size_t v18; // w23
  Il2CppObject *v19; // x21
  EventRaidMaster_o *v20; // x22
  System_String_o *v21; // x0
  Il2CppObject *v22; // x8

  v4 = this;
  if ( (byte_4B02102 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Sort_EventRaidEntity___, nowEventRaidEntity);
    sub_1BC3008(&System_Comparison_EventRaidEntity__TypeInfo, v5);
    sub_1BC3008(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__19_0__, v6);
    this = (EventRaidMaster_o *)sub_1BC3008(&EventRaidMaster___c_TypeInfo, v7);
    byte_4B02102 = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_23;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      v4,
                                      nowEventRaidEntity->fields.eventId,
                                      method);
  v9 = EventRaidMaster___c_TypeInfo;
  v10 = (System_Object_array *)EventRaidEntityArrayFromEventId;
  if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v9 = EventRaidMaster___c_TypeInfo;
  }
  _9__19_0 = (System_Comparison_T__o *)v9->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventRaidMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__19_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_object____ctor(_9__19_0, v12, Method_EventRaidMaster___c__GetNextSubGroupEntity_b__19_0__, 0LL);
    static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Comparison_EventRaidEntity__o *)_9__19_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v14, v15);
  }
  System_Array__Sort_object__50130684(
    v10,
    _9__19_0,
    (const MethodInfo_2FCEEFC *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !v10 )
    goto LABEL_23;
  max_length = v10->max_length;
  v18 = 0;
  do
  {
    if ( (max_length & ~(max_length >> 31)) == v18 )
      return 0LL;
    if ( v18 >= v10->max_length )
      goto LABEL_24;
    v19 = v10->m_Items[v18];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v19 )
      goto LABEL_23;
    v20 = this;
    v21 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v19->klass->vtable[4].method)(
                               v19,
                               v19->klass->vtable[5].methodPtr);
    this = (EventRaidMaster_o *)System_String__op_Inequality((System_String_o *)v20, v21, 0LL);
    ++v18;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v18 >= max_length )
    return 0LL;
  if ( v18 >= v10->max_length )
LABEL_24:
    sub_1BC326C(this, nowEventRaidEntity, v16);
  v22 = v10->m_Items[v18];
  if ( !v22 )
LABEL_23:
    sub_1BC3264(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == HIDWORD(v22[1].monitor) )
    return (EventRaidEntity_o *)v10->m_Items[v18];
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetNowGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t raidCountMax,
        const MethodInfo *method)
{
  int32_t RaidGorupMax; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  QuestReleaseEntity_array *Instance; // x0
  __int64 v18; // x1
  System_Int32_array *QuestIdListByGroupId; // x22
  __int64 v20; // x2
  __int64 v21; // x8
  QuestReleaseMaster_o *v22; // x23
  unsigned __int64 v23; // x26
  int32_t v24; // w24
  int max_length; // w9
  int v26; // w10
  QuestReleaseEntity_o *v27; // x8
  int32_t v28; // w25
  EventRaidEntity_c *v29; // x0
  int32_t i; // w22
  int32_t Item; // w23

  RaidGorupMax = raidCountMax;
  if ( (byte_4B02100 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v12);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1BC3008(&EventRaidEntity_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B02100 = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_40;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_40;
  v21 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = (QuestReleaseMaster_o *)Instance;
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
        sub_1BC326C(Instance, v18, v20);
      if ( !v22 )
        break;
      v24 = QuestIdListByGroupId->m_Items[v23 + 1];
      Instance = QuestReleaseMaster__getListByQuestID(v22, v24, 0LL);
      if ( !Instance )
        break;
      max_length = Instance->max_length;
      if ( max_length >= 1 )
      {
        v26 = 0;
        while ( 1 )
        {
          v27 = Instance->m_Items[v26];
          if ( !v27 )
            goto LABEL_40;
          if ( v27->fields.type == 71 )
            break;
          if ( max_length == ++v26 )
            goto LABEL_24;
        }
        Instance = (QuestReleaseEntity_array *)QuestReleaseEntity__getValueInt(Instance->m_Items[v26], 0LL);
        if ( !v16 )
          break;
        v28 = (int)Instance;
        Instance = (QuestReleaseEntity_array *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                 v16,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v16,
            v28,
            v24,
            (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v21) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v23 >= (int)v21 )
        goto LABEL_25;
    }
LABEL_40:
    sub_1BC3264(Instance, v18);
  }
LABEL_25:
  v29 = EventRaidEntity_TypeInfo;
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
    v29 = EventRaidEntity_TypeInfo;
  }
  for ( i = v29->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (QuestReleaseEntity_array *)CondType__IsOpen(71, eventId, i, 0, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v16 )
      goto LABEL_40;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v16,
            i,
            (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v16,
             i,
             (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_39366056(Item, -1, 0, 0LL) )
      break;
  }
  return i;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventRaidMaster__GetQuestIdList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x19
  EventRaidMaster_o *v15; // x0
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B020F7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4B020F7 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v14 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v15, eventId, condType, day, v16);
  if ( !QuestReleaseEntityList )
    sub_1BC3264(0LL, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v27.fields._current )
      sub_1BC3264(v19, v20);
    if ( !v14 )
      sub_1BC3264(v19, v20);
    klass_low = LODWORD(v27.fields._current[1].klass);
    items = v14->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !items )
      sub_1BC3264(v19, klass_low);
    size = v14->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        klass_low,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall EventRaidMaster__GetQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *Instance; // x0
  Il2CppObject *v18; // x1
  System_Int32_array *QuestIdListByGroupId; // x23
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x8
  unsigned __int64 v24; // x26
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x19
  Il2CppObject *v31; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B020F3 & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_QuestReleaseEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BC3008(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__2_0__, v15);
    sub_1BC3008(&EventRaidMaster___c_TypeInfo, v16);
    byte_4B020F3 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  v23 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v23 )
        sub_1BC326C(Instance, v18, v22);
      if ( !MasterData_object )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           (QuestReleaseMaster_o *)MasterData_object,
                           &entity,
                           QuestIdListByGroupId->m_Items[v24 + 1],
                           condType,
                           eventId,
                           day,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( day < 1 )
          goto LABEL_35;
        Instance = entity;
        if ( !entity )
          break;
        Instance = (void *)QuestReleaseEntity__getValueInt(entity, 0LL);
        if ( (_DWORD)Instance == day )
        {
LABEL_35:
          if ( !v21 )
            break;
          v18 = (Il2CppObject *)entity;
          items = v21->fields._items;
          v27 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            break;
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v18,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v18;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v18, v22, v25);
          }
        }
      }
      LODWORD(v23) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1BC3264(Instance, v18);
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
    v30 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v30 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRaidMaster___c_TypeInfo;
      }
      v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v30 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_object____ctor(v30, v31, Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__2_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_QuestReleaseEntity__o *)v30;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)v30, v33, v34);
    }
    if ( !v21 )
      goto LABEL_31;
    System_Collections_Generic_List_object___Sort_57288964(
      v21,
      v30,
      (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventRaidMaster__GetRaidAliveQuestIds(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_4B020F4 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&eventId);
    byte_4B020F4 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_1BC3264(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v9; // x1

  if ( (byte_4B020F5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_4B020F5 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_1BC3264(0LL, v9);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall EventRaidMaster__GetRaidDeadQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v8; // x1

  if ( (byte_4B020F2 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1BC3008(
                                  &Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__,
                                  *(_QWORD *)&eventId);
    byte_4B020F2 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_1BC3264(0LL, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
                                       (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *v11; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  if ( (byte_4B020FD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4B020FD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  v11 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v11 )
      sub_1BC3264(Enumerator, v10);
    klass = v11->klass;
    v14 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C13570(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = v11->klass;
    v18 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1C13570(v11, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v11,
                                                                  *(_QWORD *)(v20 + 8));
    if ( !Enumerator )
      sub_1BC3264(0LL, v10);
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v21 = v11->klass;
  v22 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_1C13570(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(v11, *(_QWORD *)(v24 + 8));
  return monitor & ~(monitor >> 31);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGroupDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v9; // x1

  if ( (byte_4B020F6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_4B020F6 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_1BC3264(0LL, v9);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetStartRaidGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventRaidEntity_array *Instance; // x0
  __int64 v8; // x1
  System_Object_array *Entitys; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x2
  int max_length; // w9
  int v13; // w10
  int32_t groupIndex; // w8
  Il2CppObject *v15; // x11
  int v16; // w12
  int v17; // w13
  EventRaidEntity_o *v18; // x14

  if ( (byte_4B02103 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntitys__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B02103 = 1;
  }
  Instance = (EventRaidEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (EventRaidEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (const MethodInfo_32B2DAC *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntitys__);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v10);
  if ( !Entitys )
    goto LABEL_25;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    groupIndex = 0;
    while ( 1 )
    {
      if ( v13 == max_length )
LABEL_26:
        sub_1BC326C(Instance, v8, v11);
      v15 = Entitys->m_Items[v13];
      if ( !v15 )
        break;
      if ( LODWORD(v15[1].klass) == eventId )
      {
        if ( !Instance )
          break;
        v16 = Instance->max_length;
        if ( v16 >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( v16 == v17 )
              goto LABEL_26;
            v18 = Instance->m_Items[v17];
            if ( !v18 )
              goto LABEL_25;
            if ( HIDWORD(v15[1].klass) == v18->fields.day )
              break;
            if ( v16 == ++v17 )
              goto LABEL_21;
          }
          if ( groupIndex < v18->fields.groupIndex )
            groupIndex = v18->fields.groupIndex;
        }
      }
LABEL_21:
      if ( ++v13 == max_length )
        return groupIndex;
    }
LABEL_25:
    sub_1BC3264(Instance, v8);
  }
  return 0;
}


int32_t __fastcall EventRaidMaster__GetSubGroupMax(
        EventRaidMaster_o *this,
        EventRaidEntity_o *EventRaidEntityBase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v11; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4B020FF & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__, EventRaidEntityBase);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4B020FF = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v9);
  v11 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_18:
      v19 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0LL);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1BC3264(0LL, v21);
    if ( v20[4] == EventRaidEntityBase->fields.eventId
      && v20[6] == EventRaidEntityBase->fields.groupIndex
      && v20[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v11;
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_30;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_30:
    v25 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v11;
}


int32_t __fastcall EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x0
  EventRaidMaster___c_c *v10; // x8
  System_Object_array *v11; // x20
  System_Comparison_T__o *_9__15_0; // x21
  Il2CppObject *v13; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int max_length; // w8
  int v21; // w9
  Il2CppObject *v22; // x10

  if ( (byte_4B020FE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Sort_EventRaidEntity___, eventRaidEntityBase);
    sub_1BC3008(&System_Comparison_EventRaidEntity__TypeInfo, v6);
    sub_1BC3008(&Method_EventRaidMaster___c__GetSubGroupNow_b__15_0__, v7);
    sub_1BC3008(&EventRaidMaster___c_TypeInfo, v8);
    byte_4B020FE = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             this,
                             eventRaidEntityBase->fields.eventId,
                             eventRaidEntityBase->fields.groupIndex,
                             v3);
    v10 = EventRaidMaster___c_TypeInfo;
    v11 = (System_Object_array *)EventRaidEntityArray;
    if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v10 = EventRaidMaster___c_TypeInfo;
    }
    _9__15_0 = (System_Comparison_T__o *)v10->static_fields->__9__15_0;
    if ( !_9__15_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventRaidMaster___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__15_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_object____ctor(_9__15_0, v13, Method_EventRaidMaster___c__GetSubGroupNow_b__15_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__15_0 = (struct System_Comparison_EventRaidEntity__o *)_9__15_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v15, v16);
    }
    System_Array__Sort_object__50130684(
      v11,
      _9__15_0,
      (const MethodInfo_2FCEEFC *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !v11 )
      goto LABEL_22;
    max_length = v11->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      v17 = 0LL;
      while ( 1 )
      {
        if ( max_length == v21 )
          sub_1BC326C(v17, v18, v19);
        v22 = v11->m_Items[v21];
        if ( !v22 )
          break;
        if ( HIDWORD(v22[1].monitor) == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( v22[5].klass == (Il2CppClass *)eventRaidEntityBase->fields.startedAt )
            return v17;
          v17 = (unsigned int)(v17 + 1);
        }
        if ( max_length == ++v21 )
          goto LABEL_19;
      }
LABEL_22:
      sub_1BC3264(v17, v18);
    }
  }
LABEL_19:
  LODWORD(v17) = 0;
  return v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaidMaster__IsEventRaidAliveAny(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  EventRaidEntity_array *v9; // x20
  bool v10; // w22
  int v11; // w23
  EventRaidEntity_o *v12; // x8
  int64_t day; // x21

  if ( (byte_4B020FC & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&eventId);
    byte_4B020FC = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_14;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v9 = EventRaidEntityArrayFromEventId;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1BC326C(EventRaidEntityArrayFromEventId, v6, v7);
      v12 = v9->m_Items[v11];
      if ( !v12 )
        break;
      day = v12->fields.day;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EventRaidEntityArrayFromEventId = (EventRaidEntity_array *)CondType__IsOpen(27, eventId, day, 0, 0LL, 0LL);
      if ( ((unsigned __int8)EventRaidEntityArrayFromEventId & 1) == 0 )
      {
        max_length = v9->max_length;
        v10 = ++v11 < max_length;
        if ( v11 < max_length )
          continue;
      }
      return v10;
    }
LABEL_14:
    sub_1BC3264(EventRaidEntityArrayFromEventId, v6);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaidMaster__TryGetEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4B02106 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__, entity);
    sub_1BC3008(&EventRaidEntity_TypeInfo, v9);
    byte_4B02106 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B02108 & 1) == 0 )
  {
    sub_1BC3008(&EventRaidMaster___c_TypeInfo, v1);
    byte_4B02108 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRaidMaster___c_TypeInfo->static_fields->__9 = (struct EventRaidMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventRaidMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventRaidMaster___c___ctor(EventRaidMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetCurrentGroupListByEntity_b__10_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BC3264(this, a);
  return a->fields.day - b->fields.day;
}


int32_t __fastcall EventRaidMaster___c___GetNextSubGroupEntity_b__19_0(
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
    sub_1BC3264(this, a);
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


int32_t __fastcall EventRaidMaster___c___GetQuestReleaseEntityList_b__2_0(
        EventRaidMaster___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (EventRaidMaster___c_o *)QuestReleaseEntity__getValueInt(a, 0LL), !b) )
    sub_1BC3264(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__15_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BC3264(this, a);
  return LODWORD(a->fields.startedAt) - LODWORD(b->fields.startedAt);
}


void __fastcall EventRaidMaster___c__DisplayClass11_0___ctor(
        EventRaidMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRaidMaster___c__DisplayClass11_0___GetEventRaidEntityArrayFromEventId_b__0(
        EventRaidMaster___c__DisplayClass11_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BC3264(this, 0LL);
  return a->fields.eventId == this->fields.eventId;
}


void __fastcall EventRaidMaster___c__DisplayClass18_0___ctor(
        EventRaidMaster___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRaidMaster___c__DisplayClass18_0___GetEventRaidEntityArray_b__0(
        EventRaidMaster___c__DisplayClass18_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BC3264(this, 0LL);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}