void EventRaidMaster___cctor(const MethodInfo *method)
{
  if ( (byte_5970956 & 1) == 0 )
  {
    sub_2213A60(&EventRaidMaster_TypeInfo);
    byte_5970956 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970953 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
    byte_5970953 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    154,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


int32_t EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  int64_t Time; // x0
  __int64 v9; // x1
  int max_length; // w8
  __int64 v11; // x27
  int32_t v12; // w22
  int v13; // w23
  int32_t v14; // w26
  int32_t ValueInt; // w25
  const MethodInfo *v16; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v18; // x24
  int64_t v20; // [xsp+8h] [xbp-68h]

  if ( (byte_5970947 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5970947 = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  v20 = Time;
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_23:
    sub_2213CDC(Time, v9);
  max_length = RaidDeadQuestReleaseEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  v12 = 0;
  v13 = -max_length;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= LODWORD(RaidDeadQuestReleaseEntityList->max_length) )
      sub_2213CE4(Time);
    Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v11];
    if ( !Time )
      goto LABEL_23;
    v14 = *(_DWORD *)(Time + 16);
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0);
    Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v16);
    if ( !Entity )
      return v12;
    v18 = Entity;
    Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Time )
      goto LABEL_23;
    Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v14, 0, 0);
    if ( (Time & 1) == 0 )
      break;
    v12 = ValueInt;
    if ( v13 + (_DWORD)v11 == -1 )
    {
      Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Time )
        goto LABEL_23;
      Time = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Time )
        goto LABEL_23;
      Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                        v18->fields.eventId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Time )
        goto LABEL_23;
      if ( v20 < *(_QWORD *)(Time + 96) )
        return v12;
    }
    if ( !(v13 + (_DWORD)++v11) )
      return 0;
  }
  if ( v20 >= v18->fields.startedAt )
    return ValueInt;
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventRaidMaster__GetCurrentDayOld(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int64_t v8; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-38h]

  if ( (byte_5970948 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970948 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(Time, v6);
  v8 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v10);
  for ( i = Enumerator; ; i = v30 )
  {
    klass = i->klass;
    v13 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            i,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
    {
      v24 = 0;
      goto LABEL_29;
    }
    if ( !v30 )
      sub_2213CDC(v16, v17);
    v18 = v30->klass;
    v19 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_20:
      v21 = sub_224BC3C(v30, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v30,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_2213CDC(0, v23);
    if ( *(_DWORD *)(v22 + 16) == eventId && v8 >= *(_QWORD *)(v22 + 88) && v8 < *(_QWORD *)(v22 + 96) )
      break;
  }
  v24 = *(_DWORD *)(v22 + 20);
LABEL_29:
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_34;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_34:
      v28 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
  return v24;
}


EventRaidEntity_array *EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  void *list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__9_0; // x20
  Il2CppObject *v39; // x21
  struct EventRaidMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_IEnumerator_T__o *v47; // [xsp+18h] [xbp-38h]

  if ( (byte_5970949 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRaidEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventRaidEntity__TypeInfo);
    sub_2213A60(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__9_0__);
    sub_2213A60(&EventRaidMaster___c_TypeInfo);
    byte_5970949 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( !currentEventRaidEntity )
  {
    if ( v5 )
      return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
LABEL_52:
    sub_2213CDC(list, v7);
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  v47 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v47 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v47 )
      sub_2213CDC(v15, v7);
    v16 = v47->klass;
    v17 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_19:
      v19 = sub_224BC3C(v47, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v47,
            *(_QWORD *)(v19 + 8));
    v27 = v20;
    if ( !v20 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v20 + 16) == currentEventRaidEntity->fields.eventId
      && *(_DWORD *)(v20 + 24) == currentEventRaidEntity->fields.groupIndex )
    {
      if ( !v5
        || (items = v5->fields._items,
            v29 = Method_System_Collections_Generic_List_EventRaidEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v20, v20);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v20,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v27;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), v27, v21, v22, v23, v24, v25, v26);
      }
    }
  }
  if ( v47 )
  {
    v32 = v47->klass;
    v33 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_36;
      }
      v35 = (__int64)&v32->vtable[*v34];
    }
    else
    {
LABEL_36:
      v35 = sub_224BC3C(v47, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(v47, *(_QWORD *)(v35 + 8));
  }
  list = EventRaidMaster___c_TypeInfo;
  if ( !*(&EventRaidMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v7);
    list = EventRaidMaster___c_TypeInfo;
  }
  static_fields = (struct EventRaidMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__9_0 = (System_Comparison_T__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v7);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_object____ctor(_9__9_0, v39, Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__9_0__, 0);
    v40 = EventRaidMaster___c_TypeInfo->static_fields;
    v40->__9__9_0 = (struct System_Comparison_EventRaidEntity__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->__9__9_0, (int32_t)_9__9_0, v41, v42, v43, v44, v45, v46);
  }
  if ( !v5 )
    goto LABEL_52;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__9_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
  return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_o *EventRaidMaster__GetEntity(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970954 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
    sub_2213A60(&EventRaidEntity_TypeInfo);
    byte_5970954 = 1;
  }
  if ( !*(&EventRaidEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo, *(_QWORD *)&eventId);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3F157EC *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
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
  const MethodInfo_3F14B68 *v10; // x1
  System_Object_array *Entitys; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_5970950 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_2213A60(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
    sub_2213A60(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_2213A60(&Method_EventRaidMaster___c__DisplayClass17_0__GetEventRaidEntityArray_b__0__);
    sub_2213A60(&EventRaidMaster___c__DisplayClass17_0_TypeInfo);
    byte_5970950 = 1;
  }
  v7 = sub_2213CCC(EventRaidMaster___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  v10 = (const MethodInfo_3F14B68 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__;
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = groupIndex;
  Entitys = DataMasterBase_object__object__object___getEntitys((DataMasterBase_TMaster__TEntity__PKType__o *)this, v10);
  v12 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_EventRaidMaster___c__DisplayClass17_0__GetEventRaidEntityArray_b__0__,
    0);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys,
                                    (System_Predicate_T__o *)v12,
                                    (const MethodInfo_39A9774 *)Method_System_Array_FindAll_EventRaidEntity___);
}


EventRaidEntity_array *EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo_3F14B68 *v8; // x1
  System_Object_array *Entitys; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_597094A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_2213A60(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__);
    sub_2213A60(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_2213A60(&Method_EventRaidMaster___c__DisplayClass10_0__GetEventRaidEntityArrayFromEventId_b__0__);
    sub_2213A60(&EventRaidMaster___c__DisplayClass10_0_TypeInfo);
    byte_597094A = 1;
  }
  v5 = sub_2213CCC(EventRaidMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  v8 = (const MethodInfo_3F14B68 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__getEntitys__;
  *(_DWORD *)(v5 + 16) = eventId;
  Entitys = DataMasterBase_object__object__object___getEntitys((DataMasterBase_TMaster__TEntity__PKType__o *)this, v8);
  v10 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_EventRaidMaster___c__DisplayClass10_0__GetEventRaidEntityArrayFromEventId_b__0__,
    0);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys,
                                    (System_Predicate_T__o *)v10,
                                    (const MethodInfo_39A9774 *)Method_System_Array_FindAll_EventRaidEntity___);
}


int64_t EventRaidMaster__GetEventRaidTimeLimitAt(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x1
  __int64 v5; // x9
  int64_t v6; // x8
  int64_t v7; // x8
  int64_t v8; // x10

  result = (int64_t)EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( result )
  {
    v5 = *(_QWORD *)(result + 24);
    v6 = result;
    if ( v5 && (int)v5 >= 1 )
    {
      result = 0;
      v7 = v6 + 32;
      do
      {
        if ( !*(_QWORD *)v7 )
          sub_2213CDC(result, v4);
        v8 = *(_QWORD *)(*(_QWORD *)v7 + 104LL);
        v7 += 8LL;
        if ( result <= v8 && v8 >= 1 )
          result = v8;
        LODWORD(v5) = v5 - 1;
      }
      while ( (_DWORD)v5 );
    }
    else
    {
      return 0;
    }
  }
  return result;
}


EventRaidEntity_o *EventRaidMaster__GetNextSubGroupEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *nowEventRaidEntity,
        const MethodInfo *method)
{
  EventRaidMaster_o *v4; // x20
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v6; // x1
  EventRaidMaster___c_c *v7; // x8
  System_Object_array *v8; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__18_0; // x21
  Il2CppObject *v11; // x22
  struct EventRaidMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  il2cpp_array_size_t max_length; // x23
  __int64 v20; // x24
  Il2CppObject *v21; // x21
  EventRaidMaster_o *v22; // x22
  System_String_o *v23; // x0
  unsigned int v24; // w8
  EventRaidEntity_o *v25; // x8

  v4 = this;
  if ( (byte_5970951 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_EventRaidEntity___);
    sub_2213A60(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_2213A60(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__18_0__);
    this = (EventRaidMaster_o *)sub_2213A60(&EventRaidMaster___c_TypeInfo);
    byte_5970951 = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_25;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      v4,
                                      nowEventRaidEntity->fields.eventId,
                                      method);
  v7 = EventRaidMaster___c_TypeInfo;
  v8 = (System_Object_array *)EventRaidEntityArrayFromEventId;
  if ( !*(&EventRaidMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v6);
    v7 = EventRaidMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__18_0 = (System_Comparison_T__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_object____ctor(_9__18_0, v11, Method_EventRaidMaster___c__GetNextSubGroupEntity_b__18_0__, 0);
    v12 = EventRaidMaster___c_TypeInfo->static_fields;
    v12->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__18_0, (int32_t)_9__18_0, v13, v14, v15, v16, v17, v18);
  }
  System_Array__Sort_object__58432120(
    v8,
    _9__18_0,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !v8 )
    goto LABEL_25;
  max_length = v8->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v20 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v20 >= LODWORD(v8->max_length) )
      goto LABEL_26;
    v21 = v8->m_Items[v20];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, const MethodInfo *))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.methodPtr)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method);
    if ( !v21 )
      goto LABEL_25;
    v22 = this;
    v23 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v21->klass->vtable[4].methodPtr)(
                               v21,
                               v21->klass->vtable[4].method);
    this = (EventRaidMaster_o *)System_String__op_Inequality((System_String_o *)v22, v23, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( (_DWORD)max_length == (_DWORD)++v20 )
      return 0;
  }
  v24 = v20 + 1;
  if ( (int)v20 + 1 >= (int)max_length )
    return 0;
  if ( v24 >= LODWORD(v8->max_length) )
LABEL_26:
    sub_2213CE4(this);
  v25 = (EventRaidEntity_o *)v8->m_Items[v24];
  if ( !v25 )
LABEL_25:
    sub_2213CDC(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == v25->fields.subGroupIndex )
    return v25;
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
  int v15; // w8
  QuestReleaseEntity_array **m_Items; // x9
  int32_t v17; // w25
  EventRaidEntity_c *v18; // x0
  int32_t i; // w22
  __int64 v20; // x1
  int32_t Item; // w23

  RaidGorupMax = raidCountMax;
  if ( (byte_597094F & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&EventRaidEntity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597094F = 1;
  }
  if ( RaidGorupMax < 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_40;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
        sub_2213CE4(Instance);
      if ( !v12 )
        break;
      v14 = QuestIdListByGroupId->m_Items[v13];
      Instance = QuestReleaseMaster__getListByQuestID(v12, v14, 0);
      if ( !Instance )
        break;
      v15 = Instance->max_length;
      if ( v15 >= 1 )
      {
        m_Items = (QuestReleaseEntity_array **)Instance->m_Items;
        while ( 1 )
        {
          Instance = *m_Items;
          if ( !*m_Items )
            goto LABEL_40;
          if ( HIDWORD(Instance->bounds) == 71 )
            break;
          --v15;
          ++m_Items;
          if ( !v15 )
            goto LABEL_24;
        }
        Instance = (QuestReleaseEntity_array *)QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0);
        if ( !v7 )
          break;
        v17 = (int)Instance;
        Instance = (QuestReleaseEntity_array *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                 v7,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v7,
            v17,
            v14,
            (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(max_length) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_25;
    }
LABEL_40:
    sub_2213CDC(Instance, v9);
  }
LABEL_25:
  v18 = EventRaidEntity_TypeInfo;
  if ( !*(&EventRaidEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo, v9);
    v18 = EventRaidEntity_TypeInfo;
  }
  for ( i = v18->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
    Instance = (QuestReleaseEntity_array *)CondType__IsOpen(71, eventId, i, 0, 0, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v7 )
      goto LABEL_40;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v7,
            i,
            (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v7,
             i,
             (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v20);
    if ( !CondType__IsQuestClear_47284152(Item, -1, 0, 0) )
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
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  __int64 v19; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v20; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5970946 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970946 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v9, eventId, condType, day, v10);
  if ( !QuestReleaseEntityList )
    sub_2213CDC(0, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v19 = 0;
  v20 = &v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current )
      sub_2213CDC(v13, v14);
    if ( !v8
      || (items = v8->fields._items,
          v14 = *(unsigned int *)((char *)&v21.fields._current->klass + (unsigned __int64)&word_10),
          v16 = Method_System_Collections_Generic_List_int__Add__,
          ++v8->fields._version,
          !items) )
    {
      sub_2213CDC(v13, v14);
    }
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v8,
        v14,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v8->fields._size = size + 1;
      items->m_Items[size] = v14;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x19
  Il2CppObject *v27; // x20
  struct EventRaidMaster___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970942 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__2_0__);
    sub_2213A60(&EventRaidMaster___c_TypeInfo);
    byte_5970942 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  max_length = QuestIdListByGroupId->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
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
          items = v12->fields._items;
          v9 = (Il2CppObject *)entity;
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v9;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v9, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      LODWORD(max_length) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_21;
    }
LABEL_31:
    sub_2213CDC(Instance, v9);
  }
LABEL_21:
  if ( !day )
  {
    Instance = EventRaidMaster___c_TypeInfo;
    if ( !*(&EventRaidMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v9);
      Instance = EventRaidMaster___c_TypeInfo;
    }
    static_fields = (struct EventRaidMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v9);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v27, Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__2_0__, 0);
      v28 = EventRaidMaster___c_TypeInfo->static_fields;
      v28->__9__2_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__2_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__2_0, (int32_t)_9__2_0, v29, v30, v31, v32, v33, v34);
    }
    if ( !v12 )
      goto LABEL_31;
    System_Collections_Generic_List_object___Sort_71849708(
      v12,
      _9__2_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
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

  if ( (byte_5970943 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5970943 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_2213CDC(0, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_5970944 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_5970944 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_2213CDC(0, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_5970941 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    byte_5970941 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_2213CDC(0, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__o *v22; // [xsp+18h] [xbp-38h]

  if ( (byte_597094C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597094C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  v22 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v22 )
      sub_2213CDC(Enumerator, v7);
    klass = v22->klass;
    v10 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            v22,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = v22->klass;
    v14 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_17:
      v16 = sub_224BC3C(v22, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                                                  v22,
                                                                  *(_QWORD *)(v16 + 8));
    if ( !Enumerator )
      sub_2213CDC(0, v7);
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor <= SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v17 = v22->klass;
  v18 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_27:
    v20 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(v22, *(_QWORD *)(v20 + 8));
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

  if ( (byte_5970945 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_5970945 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_2213CDC(0, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
}


int32_t EventRaidMaster__GetStartRaidGroupIndex(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  EventRaidEntity_array *Instance; // x0
  __int64 day; // x1
  System_Object_array *Entitys; // x20
  const MethodInfo *v8; // x2
  int max_length; // w9
  int v10; // w10
  int32_t groupIndex; // w8
  Il2CppObject *v12; // x12
  int v13; // w13
  int v14; // w15
  EventRaidEntity_o *v15; // x16

  if ( (byte_5970952 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntitys__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970952 = 1;
  }
  Instance = (EventRaidEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (EventRaidEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntitys__);
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
        sub_2213CE4(Instance);
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
            day = (unsigned int)v15->fields.day;
            if ( HIDWORD(v12[1].klass) == (_DWORD)day )
              break;
            if ( (v13 & ~(v13 >> 31)) == ++v14 )
              goto LABEL_21;
          }
          if ( groupIndex <= v15->fields.groupIndex )
            groupIndex = v15->fields.groupIndex;
        }
      }
LABEL_21:
      if ( ++v10 == (max_length & ~(max_length >> 31)) )
        return groupIndex;
    }
LABEL_25:
    sub_2213CDC(Instance, day);
  }
  return 0;
}


int32_t EventRaidMaster__GetSubGroupMax(
        EventRaidMaster_o *this,
        EventRaidEntity_o *EventRaidEntityBase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x21
  int32_t v9; // w19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v27; // [xsp+18h] [xbp-38h]

  if ( (byte_597094E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597094E = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventRaidEntity__GetEnumerator__);
  v27 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  v8 = Enumerator;
  v9 = 0;
  while ( 1 )
  {
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
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_224BC3C(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v8,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    if ( !v27 )
      sub_2213CDC(v14, v15);
    v16 = v27->klass;
    v17 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventRaidEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_19:
      v19 = sub_224BC3C(v27, System_Collections_Generic_IEnumerator_EventRaidEntity__TypeInfo, 0);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      v27,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_2213CDC(0, v21);
    if ( v20[4] == EventRaidEntityBase->fields.eventId && v20[6] == EventRaidEntityBase->fields.groupIndex )
    {
      v8 = v27;
      if ( v20[7] == EventRaidEntityBase->fields.subGroupIndex )
        ++v9;
    }
    else
    {
      v8 = v27;
    }
  }
  if ( v27 )
  {
    v22 = v27->klass;
    v23 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_38;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_38:
      v25 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v27, *(_QWORD *)(v25 + 8));
  }
  return v9;
}


int32_t EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0
  __int64 v7; // x1
  EventRaidMaster___c_c *v8; // x8
  EventRaidEntity_array *v9; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__14_0; // x21
  Il2CppObject *v12; // x22
  struct EventRaidMaster___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x0
  __int64 v21; // x1
  int max_length; // w8
  int v23; // w9
  EventRaidEntity_o *v24; // x11

  if ( (byte_597094D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_EventRaidEntity___);
    sub_2213A60(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_2213A60(&Method_EventRaidMaster___c__GetSubGroupNow_b__14_0__);
    sub_2213A60(&EventRaidMaster___c_TypeInfo);
    byte_597094D = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             this,
                             eventRaidEntityBase->fields.eventId,
                             eventRaidEntityBase->fields.groupIndex,
                             v3);
    v8 = EventRaidMaster___c_TypeInfo;
    v9 = EventRaidEntityArray;
    if ( !*(&EventRaidMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v7);
      v8 = EventRaidMaster___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__14_0 = (System_Comparison_T__o *)static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v7);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__14_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_object____ctor(_9__14_0, v12, Method_EventRaidMaster___c__GetSubGroupNow_b__14_0__, 0);
      v13 = EventRaidMaster___c_TypeInfo->static_fields;
      v13->__9__14_0 = (struct System_Comparison_EventRaidEntity__o *)_9__14_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__14_0, (int32_t)_9__14_0, v14, v15, v16, v17, v18, v19);
    }
    System_Array__Sort_object__58432120(
      (System_Object_array *)v9,
      _9__14_0,
      (const MethodInfo_37B9A78 *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !v9 )
      goto LABEL_21;
    max_length = v9->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0;
      v20 = 0;
      while ( 1 )
      {
        if ( max_length == v23 )
          sub_2213CE4(v20);
        v24 = v9->m_Items[v23];
        if ( !v24 )
          break;
        if ( v24->fields.subGroupIndex == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( v24->fields.startedAt == eventRaidEntityBase->fields.startedAt )
            return v20;
          v20 = (unsigned int)(v20 + 1);
        }
        if ( (max_length & ~(max_length >> 31)) == ++v23 )
          goto LABEL_19;
      }
LABEL_21:
      sub_2213CDC(v20, v21);
    }
  }
LABEL_19:
  LODWORD(v20) = 0;
  return v20;
}


bool EventRaidMaster__IsEventRaidAliveAny(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v6; // x1
  int max_length; // w8
  EventRaidEntity_array *v8; // x20
  bool v9; // w22
  int v10; // w24
  EventRaidEntity_o *v11; // x8
  int64_t day; // x21

  if ( (byte_597094B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_597094B = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_13;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v8 = EventRaidEntityArrayFromEventId;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(EventRaidEntityArrayFromEventId);
      v11 = v8->m_Items[v10];
      if ( !v11 )
        break;
      day = v11->fields.day;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
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
LABEL_13:
    sub_2213CDC(EventRaidEntityArrayFromEventId, v6);
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

  if ( (byte_5970955 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
    sub_2213A60(&EventRaidEntity_TypeInfo);
    byte_5970955 = 1;
  }
  if ( !*(&EventRaidEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo, entity);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void EventRaidMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970957 & 1) == 0 )
  {
    sub_2213A60(&EventRaidMaster___c_TypeInfo);
    byte_5970957 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaidMaster___c_TypeInfo->static_fields->__9 = (struct EventRaidMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventRaidMaster___c_TypeInfo->static_fields,
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


int32_t EventRaidMaster___c___GetCurrentGroupListByEntity_b__9_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.day - b->fields.day;
}


int32_t EventRaidMaster___c___GetNextSubGroupEntity_b__18_0(
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0);
}


int32_t EventRaidMaster___c___GetSubGroupNow_b__14_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return LODWORD(a->fields.startedAt) - LODWORD(b->fields.startedAt);
}


void EventRaidMaster___c__DisplayClass10_0___ctor(
        EventRaidMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRaidMaster___c__DisplayClass10_0___GetEventRaidEntityArrayFromEventId_b__0(
        EventRaidMaster___c__DisplayClass10_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return a->fields.eventId == this->fields.eventId;
}


void EventRaidMaster___c__DisplayClass17_0___ctor(
        EventRaidMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRaidMaster___c__DisplayClass17_0___GetEventRaidEntityArray_b__0(
        EventRaidMaster___c__DisplayClass17_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}