void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2E028 & 1) == 0 )
  {
    sub_1B761C0(&EventRaidMaster_TypeInfo, v1);
    byte_4A2E028 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E015 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__, method);
    byte_4A2E015 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    148,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
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

  if ( (byte_4A2E01C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1B761C0(&NetworkManager_TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B761C0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    byte_4A2E01C = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_26:
    sub_1B7641C(Time, v12);
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
      Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_26;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v18, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( v14 == v16 )
      {
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                          v22->fields.eventId,
                          (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
        sub_1B76424(Time, v12);
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
  __int64 v9; // x1
  int64_t Time; // x0
  __int64 v11; // x1
  int64_t v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  int32_t v26; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A2E01D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B761C0(&EventRaidEntity_TypeInfo, v5);
    sub_1B761C0(&System_IDisposable_TypeInfo, v6);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B761C0(&NetworkManager_TypeInfo, v9);
    byte_4A2E01D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1B7641C(Time, v11);
  v12 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1B766DC(v23);
LABEL_36:
      sub_1B7641C(v23, v24);
    }
    if ( *(_DWORD *)(v23 + 16) == eventId && v12 >= *(_QWORD *)(v23 + 80) && v12 < *(_QWORD *)(v23 + 88) )
    {
      v26 = *(_DWORD *)(v23 + 20);
      goto LABEL_28;
    }
  }
  v26 = 0;
LABEL_28:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_32:
    v30 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v26;
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
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  EventRaidEntity_c *v35; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  EventRaidMaster___c_c *v45; // x8
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v47; // x21
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3

  if ( (byte_4A2E01E & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      currentEventRaidEntity);
    sub_1B761C0(&System_Comparison_EventRaidEntity__TypeInfo, v5);
    sub_1B761C0(&EventRaidEntity_TypeInfo, v6);
    sub_1B761C0(&System_IDisposable_TypeInfo, v7);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventRaidEntity__Add__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__, v13);
    sub_1B761C0(&System_Collections_Generic_List_EventRaidEntity__TypeInfo, v14);
    sub_1B761C0(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__, v15);
    sub_1B761C0(&EventRaidMaster___c_TypeInfo, v16);
    byte_4A2E01E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     list,
                     (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_1B7641C(0LL, v20);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v23;
            p_offset += 4;
            if ( !v23 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v26 = Enumerator->klass;
        v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v28 = &v26->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_17;
          }
          v29 = (__int64)&v26->vtable[*v28].method;
        }
        else
        {
LABEL_17:
          v29 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                Enumerator,
                *(_QWORD *)(v29 + 8));
        v34 = v30;
        if ( !v30 )
          goto LABEL_47;
        v35 = EventRaidEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)methodPtr_low
          || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
        {
          sub_1B766DC(v30);
LABEL_47:
          sub_1B7641C(v30, v31);
        }
        if ( *(_DWORD *)(v30 + 16) == currentEventRaidEntity->fields.eventId
          && *(_DWORD *)(v30 + 24) == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v17 )
            sub_1B7641C(v30, EventRaidEntity_TypeInfo);
          items = v17->fields._items;
          v38 = Method_System_Collections_Generic_List_EventRaidEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_1B7641C(v30, v35);
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v30,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v34;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v40 + 4), v34, v32, v33);
          }
        }
      }
      v41 = Enumerator->klass;
      v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v43 = &v41->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_33;
        }
        v44 = (__int64)&v41->vtable[*v43].method;
      }
      else
      {
LABEL_33:
        v44 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                 Enumerator,
                                                                 *(_QWORD *)(v44 + 8));
      v45 = EventRaidMaster___c_TypeInfo;
      if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
        v45 = EventRaidMaster___c_TypeInfo;
      }
      _9__13_0 = (System_Comparison_T__o *)v45->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = EventRaidMaster___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v45->static_fields->__9;
        _9__13_0 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_EventRaidEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__13_0,
          v47,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          0LL);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v49, v50);
      }
      if ( v17 )
      {
        System_Collections_Generic_List_object___Sort_55414936(
          v17,
          _9__13_0,
          (const MethodInfo_34D9098 *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_50:
    sub_1B7641C(list, v19);
  }
  if ( !v17 )
    goto LABEL_50;
  return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
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

  if ( (byte_4A2E013 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_1B761C0(&EventRaidEntity_TypeInfo, v7);
    byte_4A2E013 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30FFAD8 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
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
  System_Object_array *Entitys_object; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4A2E025 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v7);
    sub_1B761C0(&System_Predicate_EventRaidEntity__TypeInfo, v8);
    sub_1B761C0(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__, v9);
    sub_1B761C0(&EventRaidMaster___c__DisplayClass21_0_TypeInfo, v10);
    byte_4A2E025 = 1;
  }
  v11 = sub_1B7640C(EventRaidMaster___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B7641C(v12, v13);
  *(_DWORD *)(v11 + 16) = eventId;
  *(_DWORD *)(v11 + 20) = groupIndex;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E62C9C *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v15 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v15,
                                    (const MethodInfo_2F5B124 *)Method_System_Array_FindAll_EventRaidEntity___);
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
  System_Object_array *Entitys_object; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4A2E01F & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v5);
    sub_1B761C0(&System_Predicate_EventRaidEntity__TypeInfo, v6);
    sub_1B761C0(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__, v7);
    sub_1B761C0(&EventRaidMaster___c__DisplayClass14_0_TypeInfo, v8);
    byte_4A2E01F = 1;
  }
  v9 = sub_1B7640C(EventRaidMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B7641C(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2E62C9C *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v13 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_2F5B124 *)Method_System_Array_FindAll_EventRaidEntity___);
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
      sub_1B7641C(EventRaidEntityArrayFromEventId, v4);
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
  System_Comparison_T__o *_9__22_0; // x21
  Il2CppObject *v12; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int max_length; // w24
  il2cpp_array_size_t v17; // w23
  Il2CppObject *v18; // x21
  EventRaidMaster_o *v19; // x22
  System_String_o *v20; // x0
  Il2CppObject *v21; // x8

  v4 = this;
  if ( (byte_4A2E026 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_Sort_EventRaidEntity___, nowEventRaidEntity);
    sub_1B761C0(&System_Comparison_EventRaidEntity__TypeInfo, v5);
    sub_1B761C0(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, v6);
    this = (EventRaidMaster_o *)sub_1B761C0(&EventRaidMaster___c_TypeInfo, v7);
    byte_4A2E026 = 1;
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
  _9__22_0 = (System_Comparison_T__o *)v9->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventRaidMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__22_0 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_object____ctor(_9__22_0, v12, Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, 0LL);
    static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v14, v15);
  }
  System_Array__Sort_object__48432360(
    v10,
    _9__22_0,
    (const MethodInfo_2E304E8 *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !v10 )
    goto LABEL_23;
  max_length = v10->max_length;
  v17 = 0;
  do
  {
    if ( (max_length & ~(max_length >> 31)) == v17 )
      return 0LL;
    if ( v17 >= v10->max_length )
      goto LABEL_24;
    v18 = v10->m_Items[v17];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v18 )
      goto LABEL_23;
    v19 = this;
    v20 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v18->klass->vtable[4].method)(
                               v18,
                               v18->klass->vtable[5].methodPtr);
    this = (EventRaidMaster_o *)System_String__op_Inequality((System_String_o *)v19, v20, 0LL);
    ++v17;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v17 >= max_length )
    return 0LL;
  if ( v17 >= v10->max_length )
LABEL_24:
    sub_1B76424(this, nowEventRaidEntity);
  v21 = v10->m_Items[v17];
  if ( !v21 )
LABEL_23:
    sub_1B7641C(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == HIDWORD(v21[1].monitor) )
    return (EventRaidEntity_o *)v10->m_Items[v17];
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
  if ( (byte_4A2E024 & 1) == 0 )
  {
    sub_1B761C0(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v12);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1B761C0(&EventRaidEntity_TypeInfo, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A2E024 = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_31463E0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_40;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
        sub_1B76424(Instance, v18);
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
                                                 (const MethodInfo_3146F90 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v16,
            v27,
            v23,
            (const MethodInfo_3146DA4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v20) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_25;
    }
LABEL_40:
    sub_1B7641C(Instance, v18);
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
    Instance = (QuestReleaseEntity_array *)CondType__IsOpen(71, eventId, i, 0, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v16 )
      goto LABEL_40;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v16,
            i,
            (const MethodInfo_3146F90 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v16,
             i,
             (const MethodInfo_3146D08 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_37418488(Item, -1, 0, 0LL) )
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

  if ( (byte_4A2E01B & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4A2E01B = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v14 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v15, eventId, condType, day, v16);
  if ( !QuestReleaseEntityList )
    sub_1B7641C(0LL, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v27.fields._current )
      sub_1B7641C(v19, v20);
    if ( !v14 )
      sub_1B7641C(v19, v20);
    klass_low = LODWORD(v27.fields._current[1].klass);
    items = v14->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !items )
      sub_1B7641C(v19, klass_low);
    size = v14->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        klass_low,
        *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  __int64 v22; // x8
  unsigned __int64 v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x19
  Il2CppObject *v31; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A2E017 & 1) == 0 )
  {
    sub_1B761C0(&System_Comparison_QuestReleaseEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B761C0(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, v15);
    sub_1B761C0(&EventRaidMaster___c_TypeInfo, v16);
    byte_4A2E017 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  v22 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v22 )
        sub_1B76424(Instance, v18);
      if ( !MasterData_object )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           (QuestReleaseMaster_o *)MasterData_object,
                           &entity,
                           QuestIdListByGroupId->m_Items[v23 + 1],
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
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v18;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v18, v24, v25);
          }
        }
      }
      LODWORD(v22) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1B7641C(Instance, v18);
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
      v30 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_object____ctor(v30, v31, Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)v30;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v30, v33, v34);
    }
    if ( !v21 )
      goto LABEL_31;
    System_Collections_Generic_List_object___Sort_55414936(
      v21,
      v30,
      (const MethodInfo_34D9098 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
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

  if ( (byte_4A2E018 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&eventId);
    byte_4A2E018 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_1B7641C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A2E019 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_4A2E019 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_1B7641C(0LL, v9);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_34BA2C0 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4A2E016 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1B761C0(
                                  &Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__,
                                  *(_QWORD *)&eventId);
    byte_4A2E016 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_1B7641C(0LL, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
                                       (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
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
  EventRaidEntity_c *v11; // x1
  System_Collections_Generic_IEnumerator_T__o *v12; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A2E021 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B761C0(&EventRaidEntity_TypeInfo, v5);
    sub_1B761C0(&System_IDisposable_TypeInfo, v6);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4A2E021 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B7641C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v12 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v12 )
      goto LABEL_34;
    klass = v12->klass;
    v15 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BC81A0(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v12,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = v12->klass;
    v19 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_17:
      v21 = sub_1BC81A0(v12, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                  v12,
                                                                  *(_QWORD *)(v21 + 8));
    if ( !Enumerator )
      sub_1B7641C(0LL, v22);
    v11 = EventRaidEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventRaidEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaidEntity_TypeInfo )
    {
      sub_1B766DC(Enumerator);
LABEL_34:
      sub_1B7641C(Enumerator, v11);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v24 = v12->klass;
  v25 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_30;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_30:
    v27 = sub_1BC81A0(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
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

  if ( (byte_4A2E01A & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_4A2E01A = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_1B7641C(0LL, v9);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_34BA2C0 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  System_Object_array *Entitys_object; // x20
  const MethodInfo *v10; // x2
  int max_length; // w9
  int v12; // w10
  int32_t groupIndex; // w8
  Il2CppObject *v14; // x11
  int v15; // w12
  int v16; // w13
  EventRaidEntity_o *v17; // x14

  if ( (byte_4A2E027 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A2E027 = 1;
  }
  Instance = (EventRaidEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (EventRaidEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_2E62C9C *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v10);
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
        sub_1B76424(Instance, v8);
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
    sub_1B7641C(Instance, v8);
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
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v12; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A2E023 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, EventRaidEntityBase);
    sub_1B761C0(&EventRaidEntity_TypeInfo, v5);
    sub_1B761C0(&System_IDisposable_TypeInfo, v6);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4A2E023 = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B7641C(0LL, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v10);
  v12 = 0;
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
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v20 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1B766DC(v21);
LABEL_38:
      sub_1B7641C(v21, v22);
    }
    if ( v21[4] == EventRaidEntityBase->fields.eventId
      && v21[6] == EventRaidEntityBase->fields.groupIndex
      && v21[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v12;
    }
  }
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
    v27 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v12;
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
  System_Comparison_T__o *_9__18_0; // x21
  Il2CppObject *v13; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  int max_length; // w8
  int v20; // w9
  Il2CppObject *v21; // x10

  if ( (byte_4A2E022 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_Sort_EventRaidEntity___, eventRaidEntityBase);
    sub_1B761C0(&System_Comparison_EventRaidEntity__TypeInfo, v6);
    sub_1B761C0(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, v7);
    sub_1B761C0(&EventRaidMaster___c_TypeInfo, v8);
    byte_4A2E022 = 1;
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
    _9__18_0 = (System_Comparison_T__o *)v10->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventRaidMaster___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__18_0 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_object____ctor(_9__18_0, v13, Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v15, v16);
    }
    System_Array__Sort_object__48432360(
      v11,
      _9__18_0,
      (const MethodInfo_2E304E8 *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !v11 )
      goto LABEL_22;
    max_length = v11->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0;
      v17 = 0LL;
      while ( 1 )
      {
        if ( max_length == v20 )
          sub_1B76424(v17, v18);
        v21 = v11->m_Items[v20];
        if ( !v21 )
          break;
        if ( HIDWORD(v21[1].monitor) == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( v21[5].klass == (Il2CppClass *)eventRaidEntityBase->fields.startedAt )
            return v17;
          v17 = (unsigned int)(v17 + 1);
        }
        if ( max_length == ++v20 )
          goto LABEL_19;
      }
LABEL_22:
      sub_1B7641C(v17, v18);
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
  int max_length; // w8
  EventRaidEntity_array *v8; // x20
  bool v9; // w22
  int v10; // w23
  EventRaidEntity_o *v11; // x8
  int64_t day; // x21

  if ( (byte_4A2E020 & 1) == 0 )
  {
    sub_1B761C0(&CondType_TypeInfo, *(_QWORD *)&eventId);
    byte_4A2E020 = 1;
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
        sub_1B76424(EventRaidEntityArrayFromEventId, v6);
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
    sub_1B7641C(EventRaidEntityArrayFromEventId, v6);
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

  if ( (byte_4A2E014 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__, entity);
    sub_1B761C0(&EventRaidEntity_TypeInfo, v9);
    byte_4A2E014 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2E029 & 1) == 0 )
  {
    sub_1B761C0(&EventRaidMaster___c_TypeInfo, v1);
    byte_4A2E029 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRaidMaster___c_TypeInfo->static_fields->__9 = (struct EventRaidMaster___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)EventRaidMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B7641C(this, a);
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
    sub_1B7641C(this, a);
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
    sub_1B7641C(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B7641C(this, a);
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
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, 0LL);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}