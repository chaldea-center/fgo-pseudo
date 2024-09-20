void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4A5B246 & 1) == 0 )
  {
    sub_1B885B0(&EventRaidMaster_TypeInfo);
    byte_4A5B246 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B233 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
    byte_4A5B233 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    148,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


int32_t __fastcall EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  int64_t Time; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  int v10; // w27
  int64_t v11; // x22
  il2cpp_array_size_t v12; // w28
  int32_t v13; // w24
  int32_t v14; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v16; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v18; // x25

  if ( (byte_4A5B23A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A5B23A = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_26:
    sub_1B8880C(Time, v8);
  v9 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  v10 = v9 - 1;
  if ( (int)v9 < 1 )
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
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v16);
      if ( !Entity )
        return v13;
      v18 = Entity;
      Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_26;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v14, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( v10 == v12 )
      {
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                          v18->fields.eventId,
                          (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_26;
        if ( v11 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( v10 == v12 )
        return 0;
      ++v12;
      v13 = ValueInt;
      if ( v12 >= RaidDeadQuestReleaseEntityList->max_length )
        sub_1B88814(Time, v8);
    }
    if ( v11 >= v18->fields.startedAt )
      return ValueInt;
    else
      return v13;
  }
}


int32_t __fastcall EventRaidMaster__GetCurrentDayOld(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  int64_t v7; // x21
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  int32_t v21; // w21
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A5B23B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventRaidEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B23B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1B8880C(Time, v6);
  v7 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_18:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_36:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == eventId && v7 >= *(_QWORD *)(v18 + 80) && v7 < *(_QWORD *)(v18 + 88) )
    {
      v21 = *(_DWORD *)(v18 + 20);
      goto LABEL_28;
    }
  }
  v21 = 0;
LABEL_28:
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
        goto LABEL_32;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_32:
    v25 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v21;
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEntity(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  EventRaidEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  EventRaidMaster___c_c *v33; // x8
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v35; // x21
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_4A5B23C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_1B885B0(&EventRaidEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaidEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRaidEntity__TypeInfo);
    sub_1B885B0(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__);
    sub_1B885B0(&EventRaidMaster___c_TypeInfo);
    byte_4A5B23C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     list,
                     (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_1B8880C(0LL, v8);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v14 = Enumerator->klass;
        v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v16 = &v14->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            --v15;
            v16 += 4;
            if ( !v15 )
              goto LABEL_17;
          }
          v17 = (__int64)&v14->vtable[*v16].method;
        }
        else
        {
LABEL_17:
          v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                Enumerator,
                *(_QWORD *)(v17 + 8));
        v22 = v18;
        if ( !v18 )
          goto LABEL_47;
        v23 = EventRaidEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
          || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
        {
          sub_1B88ACC(v18);
LABEL_47:
          sub_1B8880C(v18, v19);
        }
        if ( *(_DWORD *)(v18 + 16) == currentEventRaidEntity->fields.eventId
          && *(_DWORD *)(v18 + 24) == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v5 )
            sub_1B8880C(v18, EventRaidEntity_TypeInfo);
          items = v5->fields._items;
          v26 = Method_System_Collections_Generic_List_EventRaidEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1B8880C(v18, v23);
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v18,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v22;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
          }
        }
      }
      v29 = Enumerator->klass;
      v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v31 = &v29->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_33;
        }
        v32 = (__int64)&v29->vtable[*v31].method;
      }
      else
      {
LABEL_33:
        v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                 Enumerator,
                                                                 *(_QWORD *)(v32 + 8));
      v33 = EventRaidMaster___c_TypeInfo;
      if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
        v33 = EventRaidMaster___c_TypeInfo;
      }
      _9__13_0 = (System_Comparison_T__o *)v33->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = EventRaidMaster___c_TypeInfo;
        }
        v35 = (Il2CppObject *)v33->static_fields->__9;
        _9__13_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRaidEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__13_0,
          v35,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          0LL);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v37, v38);
      }
      if ( v5 )
      {
        System_Collections_Generic_List_object___Sort_55571192(
          v5,
          _9__13_0,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_50:
    sub_1B8880C(list, v7);
  }
  if ( !v5 )
    goto LABEL_50;
  return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
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
  Il2CppObject *PK; // x1

  if ( (byte_4A5B231 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
    sub_1B885B0(&EventRaidEntity_TypeInfo);
    byte_4A5B231 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *Entitys_object; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4A5B243 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_EventRaidEntity___);
    sub_1B885B0(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_1B885B0(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__);
    sub_1B885B0(&EventRaidMaster___c__DisplayClass21_0_TypeInfo);
    byte_4A5B243 = 1;
  }
  v7 = sub_1B887FC(EventRaidMaster___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = groupIndex;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v11,
                                    (const MethodInfo_2F789CC *)Method_System_Array_FindAll_EventRaidEntity___);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *Entitys_object; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5B23D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_EventRaidEntity___);
    sub_1B885B0(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_1B885B0(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__);
    sub_1B885B0(&EventRaidMaster___c__DisplayClass14_0_TypeInfo);
    byte_4A5B23D = 1;
  }
  v5 = sub_1B887FC(EventRaidMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = eventId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_2F789CC *)Method_System_Array_FindAll_EventRaidEntity___);
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
      sub_1B8880C(EventRaidEntityArrayFromEventId, v4);
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
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  EventRaidMaster___c_c *v6; // x8
  System_Object_array *v7; // x20
  System_Comparison_T__o *_9__22_0; // x21
  Il2CppObject *v9; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int max_length; // w24
  il2cpp_array_size_t v14; // w23
  Il2CppObject *v15; // x21
  EventRaidMaster_o *v16; // x22
  System_String_o *v17; // x0
  Il2CppObject *v18; // x8

  v4 = this;
  if ( (byte_4A5B244 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_EventRaidEntity___);
    sub_1B885B0(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_1B885B0(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__);
    this = (EventRaidMaster_o *)sub_1B885B0(&EventRaidMaster___c_TypeInfo);
    byte_4A5B244 = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_23;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      v4,
                                      nowEventRaidEntity->fields.eventId,
                                      method);
  v6 = EventRaidMaster___c_TypeInfo;
  v7 = (System_Object_array *)EventRaidEntityArrayFromEventId;
  if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v6 = EventRaidMaster___c_TypeInfo;
  }
  _9__22_0 = (System_Comparison_T__o *)v6->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventRaidMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__22_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_object____ctor(_9__22_0, v9, Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, 0LL);
    static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v11, v12);
  }
  System_Array__Sort_object__48551928(
    v7,
    _9__22_0,
    (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !v7 )
    goto LABEL_23;
  max_length = v7->max_length;
  v14 = 0;
  do
  {
    if ( (max_length & ~(max_length >> 31)) == v14 )
      return 0LL;
    if ( v14 >= v7->max_length )
      goto LABEL_24;
    v15 = v7->m_Items[v14];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v15 )
      goto LABEL_23;
    v16 = this;
    v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v15->klass->vtable[4].method)(
                               v15,
                               v15->klass->vtable[5].methodPtr);
    this = (EventRaidMaster_o *)System_String__op_Inequality((System_String_o *)v16, v17, 0LL);
    ++v14;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v14 >= max_length )
    return 0LL;
  if ( v14 >= v7->max_length )
LABEL_24:
    sub_1B88814(this, nowEventRaidEntity);
  v18 = v7->m_Items[v14];
  if ( !v18 )
LABEL_23:
    sub_1B8880C(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == HIDWORD(v18[1].monitor) )
    return (EventRaidEntity_o *)v7->m_Items[v14];
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
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  QuestReleaseEntity_array *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *QuestIdListByGroupId; // x22
  __int64 v11; // x8
  QuestReleaseMaster_o *v12; // x23
  unsigned __int64 v13; // x26
  int32_t v14; // w24
  int max_length; // w9
  int v16; // w10
  QuestReleaseEntity_o *v17; // x8
  int32_t v18; // w25
  EventRaidEntity_c *v19; // x0
  int32_t i; // w22
  int32_t Item; // w23

  RaidGorupMax = raidCountMax;
  if ( (byte_4A5B242 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&EventRaidEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B242 = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_40;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_40;
  v11 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = (QuestReleaseMaster_o *)Instance;
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
        sub_1B88814(Instance, v9);
      if ( !v12 )
        break;
      v14 = QuestIdListByGroupId->m_Items[v13 + 1];
      Instance = QuestReleaseMaster__getListByQuestID(v12, v14, 0LL);
      if ( !Instance )
        break;
      max_length = Instance->max_length;
      if ( max_length >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = Instance->m_Items[v16];
          if ( !v17 )
            goto LABEL_40;
          if ( v17->fields.type == 71 )
            break;
          if ( max_length == ++v16 )
            goto LABEL_24;
        }
        Instance = (QuestReleaseEntity_array *)QuestReleaseEntity__getValueInt(Instance->m_Items[v16], 0LL);
        if ( !v7 )
          break;
        v18 = (int)Instance;
        Instance = (QuestReleaseEntity_array *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                 v7,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v7,
            v18,
            v14,
            (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v11) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_25;
    }
LABEL_40:
    sub_1B8880C(Instance, v9);
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
    Instance = (QuestReleaseEntity_array *)CondType__IsOpen(71, eventId, i, 0, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v7 )
      goto LABEL_40;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v7,
            i,
            (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v7,
             i,
             (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_37596684(Item, -1, 0, 0LL) )
      break;
  }
  return i;
}


System_Collections_Generic_List_int__o *__fastcall EventRaidMaster__GetQuestIdList(
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

  if ( (byte_4A5B239 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B239 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v9, eventId, condType, day, v10);
  if ( !QuestReleaseEntityList )
    sub_1B8880C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current )
      sub_1B8880C(v13, v14);
    if ( !v8 )
      sub_1B8880C(v13, v14);
    klass_low = LODWORD(v21.fields._current[1].klass);
    items = v8->fields._items;
    v17 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !items )
      sub_1B8880C(v13, klass_low);
    size = v8->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v8,
        klass_low,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v8->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v8;
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall EventRaidMaster__GetQuestReleaseEntityList(
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
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x19
  Il2CppObject *v22; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5B235 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__);
    sub_1B885B0(&EventRaidMaster___c_TypeInfo);
    byte_4A5B235 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  v13 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B88814(Instance, v9);
      if ( !MasterData_object )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           (QuestReleaseMaster_o *)MasterData_object,
                           &entity,
                           QuestIdListByGroupId->m_Items[v14 + 1],
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
          if ( !v12 )
            break;
          v9 = (Il2CppObject *)entity;
          items = v12->fields._items;
          v18 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v9,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v9, v15, v16);
          }
        }
      }
      LODWORD(v13) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1B8880C(Instance, v9);
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
    v21 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v21 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRaidMaster___c_TypeInfo;
      }
      v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v21 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_object____ctor(v21, v22, Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v21, v24, v25);
    }
    if ( !v12 )
      goto LABEL_31;
    System_Collections_Generic_List_object___Sort_55571192(
      v12,
      v21,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
}


System_Int32_array *__fastcall EventRaidMaster__GetRaidAliveQuestIds(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_4A5B236 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5B236 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_1B8880C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventRaidMaster__GetRaidDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_4A5B237 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A5B237 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_1B8880C(0LL, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
}


QuestReleaseEntity_array *__fastcall EventRaidMaster__GetRaidDeadQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v8; // x1

  if ( (byte_4A5B234 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    byte_4A5B234 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_1B8880C(0LL, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  EventRaidEntity_c *v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B23F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventRaidEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B23F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v8 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v8 )
      goto LABEL_34;
    klass = v8->klass;
    v11 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(v8, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v8,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = v8->klass;
    v15 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_1BDA590(v8, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                  v8,
                                                                  *(_QWORD *)(v17 + 8));
    if ( !Enumerator )
      sub_1B8880C(0LL, v18);
    v7 = EventRaidEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventRaidEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaidEntity_TypeInfo )
    {
      sub_1B88ACC(Enumerator);
LABEL_34:
      sub_1B8880C(Enumerator, v7);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v20 = v8->klass;
  v21 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_30;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_30:
    v23 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v8, *(_QWORD *)(v23 + 8));
  return monitor & ~(monitor >> 31);
}


int32_t __fastcall EventRaidMaster__GetRaidGroupDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_4A5B238 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A5B238 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_1B8880C(0LL, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
}


int32_t __fastcall EventRaidMaster__GetStartRaidGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *Instance; // x0
  __int64 v6; // x1
  System_Object_array *Entitys_object; // x20
  const MethodInfo *v8; // x2
  int max_length; // w9
  int v10; // w10
  int32_t groupIndex; // w8
  Il2CppObject *v12; // x11
  int v13; // w12
  int v14; // w13
  EventRaidEntity_o *v15; // x14

  if ( (byte_4A5B245 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B245 = 1;
  }
  Instance = (EventRaidEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (EventRaidEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v8);
  if ( !Entitys_object )
    goto LABEL_25;
  max_length = Entitys_object->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    groupIndex = 0;
    while ( 1 )
    {
      if ( v10 == max_length )
LABEL_26:
        sub_1B88814(Instance, v6);
      v12 = Entitys_object->m_Items[v10];
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
    sub_1B8880C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall EventRaidMaster__GetSubGroupMax(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B241 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventRaidEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B241 = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  v8 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_38:
      sub_1B8880C(v17, v18);
    }
    if ( v17[4] == EventRaidEntityBase->fields.eventId
      && v17[6] == EventRaidEntityBase->fields.groupIndex
      && v17[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v8;
    }
  }
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_32;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_32:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v8;
}


int32_t __fastcall EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0
  EventRaidMaster___c_c *v7; // x8
  System_Object_array *v8; // x20
  System_Comparison_T__o *_9__18_0; // x21
  Il2CppObject *v10; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x0
  __int64 v15; // x1
  int max_length; // w8
  int v17; // w9
  Il2CppObject *v18; // x10

  if ( (byte_4A5B240 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_EventRaidEntity___);
    sub_1B885B0(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_1B885B0(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__);
    sub_1B885B0(&EventRaidMaster___c_TypeInfo);
    byte_4A5B240 = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             this,
                             eventRaidEntityBase->fields.eventId,
                             eventRaidEntityBase->fields.groupIndex,
                             v3);
    v7 = EventRaidMaster___c_TypeInfo;
    v8 = (System_Object_array *)EventRaidEntityArray;
    if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v7 = EventRaidMaster___c_TypeInfo;
    }
    _9__18_0 = (System_Comparison_T__o *)v7->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = EventRaidMaster___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__18_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_object____ctor(_9__18_0, v10, Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v12, v13);
    }
    System_Array__Sort_object__48551928(
      v8,
      _9__18_0,
      (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !v8 )
      goto LABEL_22;
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      v14 = 0LL;
      while ( 1 )
      {
        if ( max_length == v17 )
          sub_1B88814(v14, v15);
        v18 = v8->m_Items[v17];
        if ( !v18 )
          break;
        if ( HIDWORD(v18[1].monitor) == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( v18[5].klass == (Il2CppClass *)eventRaidEntityBase->fields.startedAt )
            return v14;
          v14 = (unsigned int)(v14 + 1);
        }
        if ( max_length == ++v17 )
          goto LABEL_19;
      }
LABEL_22:
      sub_1B8880C(v14, v15);
    }
  }
LABEL_19:
  LODWORD(v14) = 0;
  return v14;
}


bool __fastcall EventRaidMaster__IsEventRaidAliveAny(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v6; // x1
  int max_length; // w8
  EventRaidEntity_array *v8; // x20
  bool v9; // w22
  int v10; // w23
  EventRaidEntity_o *v11; // x8
  int64_t day; // x21

  if ( (byte_4A5B23E & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B23E = 1;
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
        sub_1B88814(EventRaidEntityArrayFromEventId, v6);
      v11 = v8->m_Items[v10];
      if ( !v11 )
        break;
      day = v11->fields.day;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EventRaidEntityArrayFromEventId = (EventRaidEntity_array *)CondType__IsOpen(27, eventId, day, 0, 0LL, 0LL);
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
    sub_1B8880C(EventRaidEntityArrayFromEventId, v6);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaidMaster__TryGetEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B232 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
    sub_1B885B0(&EventRaidEntity_TypeInfo);
    byte_4A5B232 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B247 & 1) == 0 )
  {
    sub_1B885B0(&EventRaidMaster___c_TypeInfo);
    byte_4A5B247 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRaidMaster___c_TypeInfo->static_fields->__9 = (struct EventRaidMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventRaidMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventRaidMaster___c___ctor(EventRaidMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetCurrentGroupListByEntity_b__13_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.day - b->fields.day;
}


int32_t __fastcall EventRaidMaster___c___GetNextSubGroupEntity_b__22_0(
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
    sub_1B8880C(this, a);
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


int32_t __fastcall EventRaidMaster___c___GetQuestReleaseEntityList_b__5_0(
        EventRaidMaster___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (EventRaidMaster___c_o *)QuestReleaseEntity__getValueInt(a, 0LL), !b) )
    sub_1B8880C(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return LODWORD(a->fields.startedAt) - LODWORD(b->fields.startedAt);
}


void __fastcall EventRaidMaster___c__DisplayClass14_0___ctor(
        EventRaidMaster___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRaidMaster___c__DisplayClass14_0___GetEventRaidEntityArrayFromEventId_b__0(
        EventRaidMaster___c__DisplayClass14_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B8880C(this, 0LL);
  return a->fields.eventId == this->fields.eventId;
}


void __fastcall EventRaidMaster___c__DisplayClass21_0___ctor(
        EventRaidMaster___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRaidMaster___c__DisplayClass21_0___GetEventRaidEntityArray_b__0(
        EventRaidMaster___c__DisplayClass21_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B8880C(this, 0LL);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}