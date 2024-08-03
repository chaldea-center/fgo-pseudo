void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FC4F7 & 1) == 0 )
  {
    sub_1B640C8(&EventRaidMaster_TypeInfo, v1);
    byte_49FC4F7 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC4E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__, method);
    byte_49FC4E4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    148,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
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
  __int64 v12; // x8
  int v13; // w27
  int64_t v14; // x22
  il2cpp_array_size_t v15; // w28
  int32_t v16; // w24
  int32_t v17; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v19; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v21; // x25
  __int64 v22; // x1

  if ( (byte_49FC4EB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    byte_49FC4EB = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_26:
    sub_1B64324(Time);
  v12 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  v13 = v12 - 1;
  if ( (int)v12 < 1 )
  {
    return 0;
  }
  else
  {
    v14 = Time;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v15];
      if ( !Time )
        goto LABEL_26;
      v17 = *(_DWORD *)(Time + 16);
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v19);
      if ( !Entity )
        return v16;
      v21 = Entity;
      Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_26;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v17, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( v13 == v15 )
      {
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                          v21->fields.eventId,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_26;
        if ( v14 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( v13 == v15 )
        return 0;
      ++v15;
      v16 = ValueInt;
      if ( v15 >= RaidDeadQuestReleaseEntityList->max_length )
        sub_1B6432C(Time, v22);
    }
    if ( v14 >= v21->fields.startedAt )
      return ValueInt;
    else
      return v16;
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
  __int64 v9; // x1
  int64_t Time; // x0
  int64_t v11; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 methodPtr_low; // x9
  int32_t v23; // w21
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_49FC4EC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B640C8(&EventRaidEntity_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    byte_49FC4EC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1B64324(Time);
  v11 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1B645E4(v21);
LABEL_36:
      sub_1B64324(v21);
    }
    if ( *(_DWORD *)(v21 + 16) == eventId && v11 >= *(_QWORD *)(v21 + 80) && v11 < *(_QWORD *)(v21 + 88) )
    {
      v23 = *(_DWORD *)(v21 + 20);
      goto LABEL_28;
    }
  }
  v23 = 0;
LABEL_28:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_32;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_32:
    v27 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v23;
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  EventRaidMaster___c_c *v43; // x8
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v45; // x21
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_49FC4ED & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      currentEventRaidEntity);
    sub_1B640C8(&System_Comparison_EventRaidEntity__TypeInfo, v5);
    sub_1B640C8(&EventRaidEntity_TypeInfo, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRaidEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventRaidEntity__TypeInfo, v14);
    sub_1B640C8(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__, v15);
    sub_1B640C8(&EventRaidMaster___c_TypeInfo, v16);
    byte_49FC4ED = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventRaidEntity__TypeInfo,
                                                       currentEventRaidEntity,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     list,
                     (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_1B64324(0LL);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            p_offset += 4;
            if ( !v21 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v24 = Enumerator->klass;
        v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v26 = &v24->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            --v25;
            v26 += 4;
            if ( !v25 )
              goto LABEL_17;
          }
          v27 = (__int64)&v24->vtable[*v26].method;
        }
        else
        {
LABEL_17:
          v27 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                Enumerator,
                *(_QWORD *)(v27 + 8));
        v31 = v28;
        if ( !v28 )
          goto LABEL_47;
        methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)methodPtr_low
          || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
        {
          sub_1B645E4(v28);
LABEL_47:
          sub_1B64324(v28);
        }
        if ( *(_DWORD *)(v28 + 16) == currentEventRaidEntity->fields.eventId
          && *(_DWORD *)(v28 + 24) == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v17 )
            sub_1B64324(v28);
          items = v17->fields._items;
          v34 = Method_System_Collections_Generic_List_EventRaidEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_1B64324(v28);
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v28,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v31;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v31, v29, v30);
          }
        }
      }
      v37 = Enumerator->klass;
      v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v39 = &v37->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_33;
        }
        v40 = (__int64)&v37->vtable[*v39].method;
      }
      else
      {
LABEL_33:
        v40 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                                 Enumerator,
                                                                 *(_QWORD *)(v40 + 8));
      v43 = EventRaidMaster___c_TypeInfo;
      if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
        v43 = EventRaidMaster___c_TypeInfo;
      }
      _9__13_0 = (System_Comparison_T__o *)v43->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = EventRaidMaster___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__13_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventRaidEntity__TypeInfo, v41, v42);
        System_Comparison_object____ctor(
          _9__13_0,
          v45,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          0LL);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v47, v48);
      }
      if ( v17 )
      {
        System_Collections_Generic_List_object___Sort_55243320(
          v17,
          _9__13_0,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_50:
    sub_1B64324(list);
  }
  if ( !v17 )
    goto LABEL_50;
  return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
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

  if ( (byte_49FC4E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_1B640C8(&EventRaidEntity_TypeInfo, v7);
    byte_49FC4E2 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
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
  System_Object_array *Entitys_object; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Predicate_object__o *v16; // x20

  if ( (byte_49FC4F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v7);
    sub_1B640C8(&System_Predicate_EventRaidEntity__TypeInfo, v8);
    sub_1B640C8(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__, v9);
    sub_1B640C8(&EventRaidMaster___c__DisplayClass21_0_TypeInfo, v10);
    byte_49FC4F4 = 1;
  }
  v11 = sub_1B64314(EventRaidMaster___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupIndex);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_DWORD *)(v11 + 16) = eventId;
  *(_DWORD *)(v11 + 20) = groupIndex;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v16 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_EventRaidEntity__TypeInfo, v14, v15);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v16,
                                    (const MethodInfo_2F3045C *)Method_System_Array_FindAll_EventRaidEntity___);
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
  System_Object_array *Entitys_object; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Predicate_object__o *v14; // x20

  if ( (byte_49FC4EE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v5);
    sub_1B640C8(&System_Predicate_EventRaidEntity__TypeInfo, v6);
    sub_1B640C8(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__, v7);
    sub_1B640C8(&EventRaidMaster___c__DisplayClass14_0_TypeInfo, v8);
    byte_49FC4EE = 1;
  }
  v9 = sub_1B64314(EventRaidMaster___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&eventId, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_DWORD *)(v9 + 16) = eventId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v14 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_EventRaidEntity__TypeInfo, v12, v13);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v14,
                                    (const MethodInfo_2F3045C *)Method_System_Array_FindAll_EventRaidEntity___);
}


int64_t __fastcall EventRaidMaster__GetEventRaidTimeLimitAt(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v4; // x9
  int64_t v5; // x8
  int v6; // w10
  EventRaidEntity_o *v7; // x11
  __int64 timeLimitAt; // x11

  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    return 0LL;
  v4 = *(_QWORD *)&EventRaidEntityArrayFromEventId->max_length;
  if ( !v4 || (int)v4 < 1 )
    return 0LL;
  v5 = 0LL;
  v6 = 0;
  do
  {
    v7 = EventRaidEntityArrayFromEventId->m_Items[v6];
    if ( !v7 )
      sub_1B64324(EventRaidEntityArrayFromEventId);
    timeLimitAt = v7->fields.timeLimitAt;
    ++v6;
    if ( v5 <= timeLimitAt && timeLimitAt >= 1 )
      v5 = timeLimitAt;
  }
  while ( (_DWORD)v4 != v6 );
  return v5;
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
  __int64 v9; // x1
  __int64 v10; // x2
  EventRaidMaster___c_c *v11; // x8
  System_Object_array *v12; // x20
  System_Comparison_T__o *_9__22_0; // x21
  Il2CppObject *v14; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  int max_length; // w24
  il2cpp_array_size_t v20; // w23
  Il2CppObject *v21; // x21
  EventRaidMaster_o *v22; // x22
  System_String_o *v23; // x0
  Il2CppObject *v24; // x8

  v4 = this;
  if ( (byte_49FC4F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_EventRaidEntity___, nowEventRaidEntity);
    sub_1B640C8(&System_Comparison_EventRaidEntity__TypeInfo, v5);
    sub_1B640C8(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, v6);
    this = (EventRaidMaster_o *)sub_1B640C8(&EventRaidMaster___c_TypeInfo, v7);
    byte_49FC4F5 = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_23;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      v4,
                                      nowEventRaidEntity->fields.eventId,
                                      method);
  v11 = EventRaidMaster___c_TypeInfo;
  v12 = (System_Object_array *)EventRaidEntityArrayFromEventId;
  if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v11 = EventRaidMaster___c_TypeInfo;
  }
  _9__22_0 = (System_Comparison_T__o *)v11->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = EventRaidMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__22_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventRaidEntity__TypeInfo, v9, v10);
    System_Comparison_object____ctor(_9__22_0, v14, Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, 0LL);
    static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v16, v17);
  }
  System_Array__Sort_object__48264584(
    v12,
    _9__22_0,
    (const MethodInfo_2E07588 *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !v12 )
    goto LABEL_23;
  max_length = v12->max_length;
  v20 = 0;
  do
  {
    if ( (max_length & ~(max_length >> 31)) == v20 )
      return 0LL;
    if ( v20 >= v12->max_length )
      goto LABEL_24;
    v21 = v12->m_Items[v20];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v21 )
      goto LABEL_23;
    v22 = this;
    v23 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v21->klass->vtable[4].method)(
                               v21,
                               v21->klass->vtable[5].methodPtr);
    this = (EventRaidMaster_o *)System_String__op_Inequality((System_String_o *)v22, v23, 0LL);
    ++v20;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v20 >= max_length )
    return 0LL;
  if ( v20 >= v12->max_length )
LABEL_24:
    sub_1B6432C(this, v18);
  v24 = v12->m_Items[v20];
  if ( !v24 )
LABEL_23:
    sub_1B64324(this);
  if ( nowEventRaidEntity->fields.subGroupIndex == HIDWORD(v24[1].monitor) )
    return (EventRaidEntity_o *)v12->m_Items[v20];
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
  System_Int32_array *QuestIdListByGroupId; // x22
  __int64 v19; // x1
  __int64 v20; // x8
  QuestReleaseMaster_o *v21; // x23
  unsigned __int64 v22; // x26
  int32_t v23; // w24
  int max_length; // w9
  int v25; // w10
  QuestReleaseEntity_o *v26; // x8
  int32_t v27; // w25
  EventRaidEntity_c *v28; // x0
  int32_t i; // w22
  int32_t Item; // w23

  RaidGorupMax = raidCountMax;
  if ( (byte_49FC4F3 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1B640C8(&EventRaidEntity_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FC4F3 = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               *(_QWORD *)&eventId,
                                                               *(_QWORD *)&raidCountMax);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_40;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_40;
  v20 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = (QuestReleaseMaster_o *)Instance;
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
        sub_1B6432C(Instance, v19);
      if ( !v21 )
        break;
      v23 = QuestIdListByGroupId->m_Items[v22 + 1];
      Instance = QuestReleaseMaster__getListByQuestID(v21, v23, 0LL);
      if ( !Instance )
        break;
      max_length = Instance->max_length;
      if ( max_length >= 1 )
      {
        v25 = 0;
        while ( 1 )
        {
          v26 = Instance->m_Items[v25];
          if ( !v26 )
            goto LABEL_40;
          if ( v26->fields.type == 71 )
            break;
          if ( max_length == ++v25 )
            goto LABEL_24;
        }
        Instance = (QuestReleaseEntity_array *)QuestReleaseEntity__getValueInt(Instance->m_Items[v25], 0LL);
        if ( !v16 )
          break;
        v27 = (int)Instance;
        Instance = (QuestReleaseEntity_array *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                 v16,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v16,
            v27,
            v23,
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v20) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_25;
    }
LABEL_40:
    sub_1B64324(Instance);
  }
LABEL_25:
  v28 = EventRaidEntity_TypeInfo;
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
    v28 = EventRaidEntity_TypeInfo;
  }
  for ( i = v28->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (QuestReleaseEntity_array *)CondType__IsOpen(71, eventId, i, 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v16 )
      goto LABEL_40;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v16,
            i,
            (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v16,
             i,
             (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_37285996(Item, -1, 0, 0LL) )
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
  _BOOL8 v18; // x0
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FC4EA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_49FC4EA = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    *(_QWORD *)&condType);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v15, eventId, condType, day, v16);
  if ( !QuestReleaseEntityList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    if ( !v25.fields._current )
      sub_1B64324(v18);
    if ( !v14 )
      sub_1B64324(v18);
    klass = (int32_t)v25.fields._current[1].klass;
    items = v14->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !items )
      sub_1B64324(v18);
    size = v14->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        klass,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = size + 1;
      items->m_Items[size + 1] = klass;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  System_Int32_array *QuestIdListByGroupId; // x23
  Il2CppObject *MasterData_object; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  unsigned __int64 v26; // x26
  int32_t v27; // w3
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x19
  Il2CppObject *v34; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FC4E6 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_QuestReleaseEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, v15);
    sub_1B640C8(&EventRaidMaster___c_TypeInfo, v16);
    byte_49FC4E6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  v25 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        sub_1B6432C(Instance, v23);
      if ( !MasterData_object )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           (QuestReleaseMaster_o *)MasterData_object,
                           &entity,
                           QuestIdListByGroupId->m_Items[v26 + 1],
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
          if ( !v22 )
            break;
          v28 = (Il2CppObject *)entity;
          items = v22->fields._items;
          v30 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              v28,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v28;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v28, v24, v27);
          }
        }
      }
      LODWORD(v25) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1B64324(Instance);
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
    v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v33 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EventRaidMaster___c_TypeInfo;
      }
      v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v33 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_QuestReleaseEntity__TypeInfo, v23, v24);
      System_Comparison_object____ctor(v33, v34, Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)v33;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v33, v36, v37);
    }
    if ( !v22 )
      goto LABEL_31;
    System_Collections_Generic_List_object___Sort_55243320(
      v22,
      v33,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v22;
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

  if ( (byte_49FC4E7 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&eventId);
    byte_49FC4E7 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_1B64324(0LL);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49FC4E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_49FC4E8 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_1B64324(0LL);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_49FC4E5 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1B640C8(
                                  &Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__,
                                  *(_QWORD *)&eventId);
    byte_49FC4E5 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_1B64324(0LL);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
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
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_49FC4F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B640C8(&EventRaidEntity_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FC4F0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v11 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_34;
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
      p_method = sub_1BB60A8(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v20 = sub_1BB60A8(v11, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v11,
                                                                  *(_QWORD *)(v20 + 8));
    if ( !Enumerator )
      sub_1B64324(0LL);
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventRaidEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaidEntity_TypeInfo )
    {
      sub_1B645E4(Enumerator);
LABEL_34:
      sub_1B64324(Enumerator);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v22 = v11->klass;
  v23 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
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
    v25 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v11, *(_QWORD *)(v25 + 8));
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

  if ( (byte_49FC4E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_49FC4E9 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_1B64324(0LL);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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
  System_Object_array *Entitys_object; // x20
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  int max_length; // w9
  int v12; // w10
  int32_t groupIndex; // w8
  Il2CppObject *v14; // x11
  int v15; // w12
  int v16; // w13
  EventRaidEntity_o *v17; // x14

  if ( (byte_49FC4F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FC4F6 = 1;
  }
  Instance = (EventRaidEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (EventRaidEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v9);
  if ( !Entitys_object )
    goto LABEL_25;
  max_length = Entitys_object->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    groupIndex = 0;
    while ( 1 )
    {
      if ( v12 == max_length )
LABEL_26:
        sub_1B6432C(Instance, v10);
      v14 = Entitys_object->m_Items[v12];
      if ( !v14 )
        break;
      if ( LODWORD(v14[1].klass) == eventId )
      {
        if ( !Instance )
          break;
        v15 = Instance->max_length;
        if ( v15 >= 1 )
        {
          v16 = 0;
          while ( 1 )
          {
            if ( v15 == v16 )
              goto LABEL_26;
            v17 = Instance->m_Items[v16];
            if ( !v17 )
              goto LABEL_25;
            if ( HIDWORD(v14[1].klass) == v17->fields.day )
              break;
            if ( v15 == ++v16 )
              goto LABEL_21;
          }
          if ( groupIndex < v17->fields.groupIndex )
            groupIndex = v17->fields.groupIndex;
        }
      }
LABEL_21:
      if ( ++v12 == max_length )
        return groupIndex;
    }
LABEL_25:
    sub_1B64324(Instance);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_49FC4F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, EventRaidEntityBase);
    sub_1B640C8(&EventRaidEntity_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FC4F2 = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v19 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1B645E4(v20);
LABEL_38:
      sub_1B64324(v20);
    }
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
        goto LABEL_32;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_32:
    v25 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  EventRaidMaster___c_c *v12; // x8
  System_Object_array *v13; // x20
  System_Comparison_T__o *_9__18_0; // x21
  Il2CppObject *v15; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  __int64 v20; // x1
  int max_length; // w8
  int v22; // w9
  Il2CppObject *v23; // x10

  if ( (byte_49FC4F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_EventRaidEntity___, eventRaidEntityBase);
    sub_1B640C8(&System_Comparison_EventRaidEntity__TypeInfo, v6);
    sub_1B640C8(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, v7);
    sub_1B640C8(&EventRaidMaster___c_TypeInfo, v8);
    byte_49FC4F1 = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             this,
                             eventRaidEntityBase->fields.eventId,
                             eventRaidEntityBase->fields.groupIndex,
                             v3);
    v12 = EventRaidMaster___c_TypeInfo;
    v13 = (System_Object_array *)EventRaidEntityArray;
    if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v12 = EventRaidMaster___c_TypeInfo;
    }
    _9__18_0 = (System_Comparison_T__o *)v12->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = EventRaidMaster___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__18_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventRaidEntity__TypeInfo, v10, v11);
      System_Comparison_object____ctor(_9__18_0, v15, Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v17, v18);
    }
    System_Array__Sort_object__48264584(
      v13,
      _9__18_0,
      (const MethodInfo_2E07588 *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !v13 )
      goto LABEL_22;
    max_length = v13->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      v19 = 0LL;
      while ( 1 )
      {
        if ( max_length == v22 )
          sub_1B6432C(v19, v20);
        v23 = v13->m_Items[v22];
        if ( !v23 )
          break;
        if ( HIDWORD(v23[1].monitor) == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( v23[5].klass == (Il2CppClass *)eventRaidEntityBase->fields.startedAt )
            return v19;
          v19 = (unsigned int)(v19 + 1);
        }
        if ( max_length == ++v22 )
          goto LABEL_19;
      }
LABEL_22:
      sub_1B64324(v19);
    }
  }
LABEL_19:
  LODWORD(v19) = 0;
  return v19;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49FC4EF & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&eventId);
    byte_49FC4EF = 1;
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
        sub_1B6432C(EventRaidEntityArrayFromEventId, v6);
      v11 = v8->m_Items[v10];
      if ( !v11 )
        break;
      day = v11->fields.day;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EventRaidEntityArrayFromEventId = (EventRaidEntity_array *)CondType__IsOpen(27, eventId, day, 0, 0LL);
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
    sub_1B64324(EventRaidEntityArrayFromEventId);
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
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_49FC4E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__, entity);
    sub_1B640C8(&EventRaidEntity_TypeInfo, v9);
    byte_49FC4E3 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC4F8 & 1) == 0 )
  {
    sub_1B640C8(&EventRaidMaster___c_TypeInfo, v1);
    byte_49FC4F8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventRaidMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventRaidMaster___c_TypeInfo->static_fields->__9 = (struct EventRaidMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventRaidMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}