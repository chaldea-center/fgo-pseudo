void EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C4306F & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
    byte_4C4306F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C4306D & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
    byte_4C4306D = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
}


float EventRaceMaster__GetGoalRate(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  float v10; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  unsigned int v13; // w22
  __int64 v14; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C43074 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43074 = 1;
  }
  entity = 0;
  v10 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v9);
    if ( GroupIdx < 0 )
      return v10;
    v13 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0
      || (Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                        (TotalEventRaceMaster_o *)Instance,
                                        eventId,
                                        termId,
                                        groupId,
                                        0),
          !entity)
      || (v14 = *(__int64 *)((char *)&qword_28 + (_QWORD)entity)) == 0 )
    {
LABEL_13:
      sub_1C372B4(Instance);
    }
    if ( v13 >= *(_DWORD *)(v14 + 24) )
      sub_1C372BC(Instance);
    return (float)(__int64)Instance / (float)*(__int64 *)(v14 + 8LL * v13 + 32);
  }
  return v10;
}


int32_t EventRaceMaster__GetGoaledTeamCount(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int64_t nowTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5
  struct System_Int32_array *groupIds; // x24
  EventRaceResultMaster_o *v12; // x22
  int32_t v13; // w23
  __int64 v14; // x25
  __int64 v15; // x26
  EventRaceResultEntity_o *v17; // [xsp+0h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C43072 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43072 = 1;
  }
  v17 = 0;
  entity = 0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    if ( (int)groupIds->max_length >= 1 )
    {
      v12 = (EventRaceResultMaster_o *)Instance;
      v13 = 0;
      v14 = 0;
      v15 = (unsigned int)groupIds->max_length - 1LL;
      while ( v12 )
      {
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     v12,
                                     &v17,
                                     eventId,
                                     termId,
                                     groupIds->m_Items[v14],
                                     v10);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v17 )
            break;
          if ( v17->fields.endedAt < nowTime )
            ++v13;
        }
        if ( v15 == v14 )
          return v13;
        if ( ++v14 >= (unsigned __int64)LODWORD(groupIds->max_length) )
          sub_1C372BC(Instance);
      }
LABEL_19:
      sub_1C372B4(Instance);
    }
  }
  return 0;
}


int32_t EventRaceMaster__GetGroupIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x8
  int v8; // w9
  int32_t result; // w0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  v6 = EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method);
  if ( !v6 )
    return -1;
  if ( !entity )
    sub_1C372B4(v6);
  v7 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  if ( !v7 )
    return -1;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 < 1 )
    return -1;
  result = 0;
  while ( *(_DWORD *)(v7 + 4LL * result + 32) != groupId )
  {
    if ( v8 == ++result )
      return -1;
  }
  return result;
}


EventRaceEntity_array *EventRaceMaster__GetRaceEntityList(
        EventRaceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C43070 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    byte_4C43070 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v11;
          sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C372B4(list);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


int32_t EventRaceMaster__GetTermIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x21
  Il2CppObject *v19; // x22
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w22
  int32_t v24; // w21

  if ( (byte_4C43076 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventRaceEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    sub_1C37058(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__);
    sub_1C37058(&EventRaceMaster___c_TypeInfo);
    byte_4C43076 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      v13 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v17[4] = v13;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_15;
    }
LABEL_29:
    sub_1C372B4(list);
  }
LABEL_15:
  list = EventRaceMaster___c_TypeInfo;
  if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
    list = EventRaceMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRaceMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventRaceMaster___c__GetTermIndex_b__11_0__, 0);
    static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v18, v21, v22);
  }
  if ( !v9 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_58346216(
    v9,
    v18,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  v23 = v9->fields._size;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v9,
               v24,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      if ( *((_DWORD *)list + 5) == termId )
        return v24;
      if ( v23 == ++v24 )
        return -1;
    }
    goto LABEL_29;
  }
  return -1;
}


bool EventRaceMaster__IsEveryTeamGoaled(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int64_t Instance; // x0
  __int64 v9; // x23
  EventRaceResultMaster_o *v10; // x21
  __int64 v11; // x25
  const MethodInfo *v12; // x5
  int64_t v13; // x22
  unsigned __int64 v14; // x24
  EventRaceResultEntity_o *v16; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C43071 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43071 = 1;
  }
  entity = 0;
  v16 = 0;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_20;
  v9 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  if ( !v9 )
    goto LABEL_20;
  v10 = (EventRaceResultMaster_o *)Instance;
  v11 = *(_QWORD *)(v9 + 24);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( (int)v11 >= 1 )
  {
    v13 = Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= *(unsigned int *)(v9 + 24) )
        sub_1C372BC(Instance);
      if ( !v10 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v10, &v16, eventId, termId, *(_DWORD *)(v9 + 32 + 4 * v14), v12);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v16 )
        break;
      if ( v16->fields.endedAt > v13 )
        return 0;
      if ( (unsigned int)v11 == ++v14 )
        return 1;
    }
LABEL_20:
    sub_1C372B4(Instance);
  }
  return 1;
}


bool EventRaceMaster__IsReachedPointRateInTerm(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rate,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x23
  float v11; // s0
  TotalEventRaceMaster_o *v12; // x21
  unsigned __int64 v13; // x24
  __int64 v14; // x22
  float v15; // s8
  __int64 v16; // x8
  float v17; // s0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C43073 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43073 = 1;
  }
  entity = 0;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (v10 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity)) == 0 )
  {
LABEL_19:
    sub_1C372B4(Instance);
  }
  if ( (int)*(_QWORD *)(v10 + 24) < 1 )
    return 0;
  v11 = (float)rate;
  v12 = (TotalEventRaceMaster_o *)Instance;
  v13 = 0;
  v14 = (unsigned int)*(_QWORD *)(v10 + 24) - 1LL;
  v15 = v11 / 1000.0;
  while ( 1 )
  {
    if ( !v12 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v12,
                                  eventId,
                                  termId,
                                  *(_DWORD *)(v10 + 32 + 4 * v13),
                                  0);
    if ( !entity )
      goto LABEL_19;
    v16 = *(__int64 *)((char *)&qword_28 + (_QWORD)entity);
    if ( !v16 )
      goto LABEL_19;
    if ( v13 >= *(unsigned int *)(v16 + 24) )
      goto LABEL_16;
    v17 = (float)(__int64)Instance / (float)*(__int64 *)(v16 + 8 * v13 + 32);
    if ( v14 == v13 || v15 < v17 )
      return v15 < v17;
    if ( ++v13 >= *(unsigned int *)(v10 + 24) )
LABEL_16:
      sub_1C372BC(Instance);
  }
}


// local variable allocation has failed, the output may be wrong!
bool EventRaceMaster__TryGetEntity(
        EventRaceMaster_o *this,
        EventRaceEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C4306E & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
    byte_4C4306E = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *EventRaceMaster__getGroupIdData(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v7; // x19
  const MethodInfo *v8; // x4
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v11; // x20
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v12; // x21
  const MethodInfo *v13; // x4
  EventRaceEntity_o *v14; // x8
  struct System_Int32_array *groupIds; // x9
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v17; // x27
  __int64 v18; // x28
  struct System_Int32_array *v19; // x8
  int32_t v20; // w26
  const MethodInfo *v21; // x5
  float GoalRate; // s0
  float v23; // s8
  const MethodInfo *v24; // x3
  _QWORD *v25; // x10
  struct EventRaceMaster_GroupRankData_array *items; // x8
  __int64 size; // x9
  _QWORD *v28; // x10
  __int128 v29; // q0
  char *v30; // x8
  __int128 v31; // q0
  int64_t goalTime; // x9
  __int64 v33; // x8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v34; // x0
  const MethodInfo_38491FC *v35; // x2
  EventRaceMaster___c_c *v36; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v38; // x23
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  EventRaceMaster___c_c *v42; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v44; // x23
  struct EventRaceMaster___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  EventRaceMaster_GroupRankData_o v49; // [xsp+20h] [xbp-D0h] BYREF
  EventRaceResultEntity_o *v50; // [xsp+38h] [xbp-B8h] BYREF
  EventRaceMaster_GroupRankData_o v51; // [xsp+40h] [xbp-B0h]
  EventRaceMaster_GroupRankData_o v52; // [xsp+60h] [xbp-90h] BYREF
  EventRaceEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C43075 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__);
    sub_1C37058(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__);
    sub_1C37058(&EventRaceMaster___c_TypeInfo);
    byte_4C43075 = 1;
  }
  entity = 0;
  v50 = 0;
  memset(&v49, 0, sizeof(v49));
  v7 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C372A4(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v7,
    (const MethodInfo_38488FC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v8) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v11 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C372A4(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v11,
      (const MethodInfo_38488FC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v12 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C372A4(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v12,
      (const MethodInfo_38488FC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v14 = entity;
    if ( !entity )
      goto LABEL_29;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_29;
    max_length = groupIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      v18 = (unsigned int)max_length;
      while ( 1 )
      {
        v19 = v14->fields.groupIds;
        if ( !v19 )
          goto LABEL_29;
        if ( v17 >= LODWORD(v19->max_length) )
          sub_1C372BC(Instance);
        v20 = v19->m_Items[v17];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v20, v13);
        if ( !MasterData_object )
          goto LABEL_29;
        v23 = GoalRate;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     (EventRaceResultMaster_o *)MasterData_object,
                                     &v50,
                                     eventId,
                                     termId,
                                     v20,
                                     v21);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v50 )
            goto LABEL_29;
          EventRaceMaster_GroupRankData___ctor(&v49, v20, v23, v50->fields.endedAt, v24);
          if ( v49.fields.isGoal )
          {
            if ( !v11 )
              goto LABEL_29;
            v28 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v51 = v49;
            items = v11->fields._items;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v31 = *(_OWORD *)&v51.fields.groupId;
              goalTime = v51.fields.goalTime;
              v33 = *(_QWORD *)(v28[4] + 192LL);
              v34 = v11;
              goto LABEL_26;
            }
            v11->fields._size = size + 1;
          }
          else
          {
            if ( !v12 )
              goto LABEL_29;
            v25 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v51 = v49;
            items = v12->fields._items;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v12->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v31 = *(_OWORD *)&v51.fields.groupId;
              goalTime = v51.fields.goalTime;
              v33 = *(_QWORD *)(v25[4] + 192LL);
              v34 = v12;
LABEL_26:
              v35 = *(const MethodInfo_38491FC **)(v33 + 112);
              *(_OWORD *)&v52.fields.groupId = v31;
              v52.fields.goalTime = goalTime;
              System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddWithResize(v34, &v52, v35);
              goto LABEL_27;
            }
            v12->fields._size = size + 1;
          }
          v29 = *(_OWORD *)&v51.fields.groupId;
          v30 = (char *)items + 24 * size;
          *((_QWORD *)v30 + 6) = v51.fields.goalTime;
          *((_OWORD *)v30 + 2) = v29;
        }
LABEL_27:
        if ( v18 == ++v17 )
          break;
        v14 = entity;
        if ( !entity )
          goto LABEL_29;
      }
    }
    if ( !v11 )
      goto LABEL_29;
    if ( v11->fields._size >= 2 )
    {
      v36 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v36 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_0 = v36->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = EventRaceMaster___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v36->static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1C372A4(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v38,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          0);
        static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = _9__10_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v40, v41);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_59027552(
        v11,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_384B060 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v12 )
      goto LABEL_29;
    if ( v12->fields._size >= 2 )
    {
      v42 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v42 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_1 = v42->static_fields->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = EventRaceMaster___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1C372A4(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v44,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          0);
        v45 = EventRaceMaster___c_TypeInfo->static_fields;
        v45->__9__10_1 = _9__10_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v45->__9__10_1, (int32_t)_9__10_1, v46, v47);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_59027552(
        v12,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_384B060 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v7 )
LABEL_29:
      sub_1C372B4(Instance);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v11,
      (const MethodInfo_3849480 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_3849480 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v7;
}


void EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_4C43077 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43077 = 1;
  }
  this->fields.groupId = groupId;
  this->fields.rate = rate;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.isGoal = NetworkManager__getTime(0) > goalTime;
  this->fields.goalTime = goalTime;
}


void EventRaceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43078 & 1) == 0 )
  {
    sub_1C37058(&EventRaceMaster___c_TypeInfo);
    byte_4C43078 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaceMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventRaceMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventRaceMaster___c___ctor(EventRaceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventRaceMaster___c___GetTermIndex_b__11_0(
        EventRaceMaster___c_o *this,
        EventRaceEntity_o *a,
        EventRaceEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.termId - b->fields.termId;
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_65075800((int64_t)&a->fields.goalTime, b->fields.goalTime, 0);
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_65156288(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}