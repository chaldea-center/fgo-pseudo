void EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27381 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
    byte_4C27381 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2737F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
    byte_4C2737F = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_338C850 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
}


float EventRaceMaster__GetGoalRate(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  float v11; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  unsigned int v14; // w22
  __int64 v15; // x2
  __int64 v16; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27386 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27386 = 1;
  }
  entity = 0;
  v11 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v10);
    if ( GroupIdx < 0 )
      return v11;
    v14 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0
      || (Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                        (TotalEventRaceMaster_o *)Instance,
                                        eventId,
                                        termId,
                                        groupId,
                                        0),
          !entity)
      || (v16 = *(__int64 *)((char *)&qword_28 + (_QWORD)entity)) == 0 )
    {
LABEL_13:
      sub_1C2D6EC(Instance, v9);
    }
    if ( v14 >= *(_DWORD *)(v16 + 24) )
      sub_1C2D6F4(Instance, v9, v15);
    return (float)(__int64)Instance / (float)*(__int64 *)(v16 + 8LL * v14 + 32);
  }
  return v11;
}


int32_t EventRaceMaster__GetGoaledTeamCount(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int64_t nowTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  struct System_Int32_array *groupIds; // x24
  EventRaceResultMaster_o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x25
  __int64 v16; // x26
  __int64 v17; // x2
  EventRaceResultEntity_o *v19; // [xsp+0h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C27384 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27384 = 1;
  }
  v19 = 0;
  entity = 0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    if ( (int)groupIds->max_length >= 1 )
    {
      v13 = (EventRaceResultMaster_o *)Instance;
      v14 = 0;
      v15 = 0;
      v16 = (unsigned int)groupIds->max_length - 1LL;
      while ( v13 )
      {
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     v13,
                                     &v19,
                                     eventId,
                                     termId,
                                     groupIds->m_Items[v15],
                                     v11);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v19 )
            break;
          if ( v19->fields.endedAt < nowTime )
            ++v14;
        }
        if ( v16 == v15 )
          return v14;
        if ( ++v15 >= (unsigned __int64)LODWORD(groupIds->max_length) )
          sub_1C2D6F4(Instance, v10, v17);
      }
LABEL_19:
      sub_1C2D6EC(Instance, v10);
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
  __int64 v7; // x1
  __int64 v8; // x8
  int v9; // w9
  int32_t result; // w0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  v6 = EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method);
  if ( !v6 )
    return -1;
  if ( !entity )
    sub_1C2D6EC(v6, v7);
  v8 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  if ( !v8 )
    return -1;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 < 1 )
    return -1;
  result = 0;
  while ( *(_DWORD *)(v8 + 4LL * result + 32) != groupId )
  {
    if ( v9 == ++result )
      return -1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_array *EventRaceMaster__GetRaceEntityList(
        EventRaceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  v3 = eventId;
  if ( (byte_4C27382 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    byte_4C27382 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      if ( LODWORD(list->fields.items) == v3 )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v12 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v14[4] = *(Il2CppClass **)&eventId;
          sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), eventId, v9, v10);
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventRaceMaster__GetTermIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x21
  Il2CppObject *v18; // x22
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w22
  int32_t v23; // w21

  v5 = eventId;
  if ( (byte_4C27388 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_1C2D490(&System_Comparison_EventRaceEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    sub_1C2D490(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__);
    sub_1C2D490(&EventRaceMaster___c_TypeInfo);
    byte_4C27388 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      if ( *((_DWORD *)list + 4) == v5 )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v14 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v16[4] = *(Il2CppClass **)&eventId;
          sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), eventId, v11, v12);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_15;
    }
LABEL_29:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  list = EventRaceMaster___c_TypeInfo;
  if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
    list = EventRaceMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRaceMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_EventRaceMaster___c__GetTermIndex_b__11_0__, 0);
    static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v17, v20, v21);
  }
  if ( !v9 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_58242632(
    v9,
    v17,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  v22 = v9->fields._size;
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v9,
               v23,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      if ( *((_DWORD *)list + 5) == termId )
        return v23;
      if ( v22 == ++v23 )
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
  __int64 v9; // x1
  __int64 v10; // x23
  EventRaceResultMaster_o *v11; // x21
  __int64 v12; // x25
  __int64 v13; // x2
  const MethodInfo *v14; // x5
  int64_t v15; // x22
  unsigned __int64 v16; // x24
  EventRaceResultEntity_o *v18; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C27383 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27383 = 1;
  }
  entity = 0;
  v18 = 0;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_20;
  v10 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  if ( !v10 )
    goto LABEL_20;
  v11 = (EventRaceResultMaster_o *)Instance;
  v12 = *(_QWORD *)(v10 + 24);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( (int)v12 >= 1 )
  {
    v15 = Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= *(unsigned int *)(v10 + 24) )
        sub_1C2D6F4(Instance, v9, v13);
      if ( !v11 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v11, &v18, eventId, termId, *(_DWORD *)(v10 + 32 + 4 * v16), v14);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v18 )
        break;
      if ( v18->fields.endedAt > v15 )
        return 0;
      if ( (unsigned int)v12 == ++v16 )
        return 1;
    }
LABEL_20:
    sub_1C2D6EC(Instance, v9);
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
  __int64 v10; // x1
  __int64 v11; // x23
  float v12; // s0
  TotalEventRaceMaster_o *v13; // x21
  unsigned __int64 v14; // x24
  __int64 v15; // x22
  float v16; // s8
  __int64 v17; // x2
  __int64 v18; // x8
  float v19; // s0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27385 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27385 = 1;
  }
  entity = 0;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (v11 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity)) == 0 )
  {
LABEL_19:
    sub_1C2D6EC(Instance, v10);
  }
  if ( (int)*(_QWORD *)(v11 + 24) < 1 )
    return 0;
  v12 = (float)rate;
  v13 = (TotalEventRaceMaster_o *)Instance;
  v14 = 0;
  v15 = (unsigned int)*(_QWORD *)(v11 + 24) - 1LL;
  v16 = v12 / 1000.0;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v13,
                                  eventId,
                                  termId,
                                  *(_DWORD *)(v11 + 32 + 4 * v14),
                                  0);
    if ( !entity )
      goto LABEL_19;
    v18 = *(__int64 *)((char *)&qword_28 + (_QWORD)entity);
    if ( !v18 )
      goto LABEL_19;
    if ( v14 >= *(unsigned int *)(v18 + 24) )
      goto LABEL_16;
    v19 = (float)(__int64)Instance / (float)*(__int64 *)(v18 + 8 * v14 + 32);
    if ( v15 == v14 || v16 < v19 )
      return v16 < v19;
    if ( ++v14 >= *(unsigned int *)(v11 + 24) )
LABEL_16:
      sub_1C2D6F4(Instance, v10, v17);
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

  if ( (byte_4C27380 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
    byte_4C27380 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v12; // x20
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v13; // x21
  __int64 v14; // x2
  const MethodInfo *v15; // x4
  EventRaceEntity_o *v16; // x8
  struct System_Int32_array *groupIds; // x9
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v19; // x27
  __int64 v20; // x28
  struct System_Int32_array *v21; // x8
  int32_t v22; // w26
  const MethodInfo *v23; // x5
  float GoalRate; // s0
  float v25; // s8
  const MethodInfo *v26; // x3
  _QWORD *v27; // x10
  struct EventRaceMaster_GroupRankData_array *items; // x8
  __int64 size; // x9
  _QWORD *v30; // x10
  __int128 v31; // q0
  char *v32; // x8
  __int128 v33; // q0
  int64_t goalTime; // x9
  __int64 v35; // x8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v36; // x0
  const MethodInfo_382FD5C *v37; // x2
  EventRaceMaster___c_c *v38; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v40; // x23
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  EventRaceMaster___c_c *v44; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v46; // x23
  struct EventRaceMaster___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  EventRaceMaster_GroupRankData_o v51; // [xsp+20h] [xbp-D0h] BYREF
  EventRaceResultEntity_o *v52; // [xsp+38h] [xbp-B8h] BYREF
  EventRaceMaster_GroupRankData_o v53; // [xsp+40h] [xbp-B0h]
  EventRaceMaster_GroupRankData_o v54; // [xsp+60h] [xbp-90h] BYREF
  EventRaceEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C27387 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__);
    sub_1C2D490(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__);
    sub_1C2D490(&EventRaceMaster___c_TypeInfo);
    byte_4C27387 = 1;
  }
  entity = 0;
  v52 = 0;
  memset(&v51, 0, sizeof(v51));
  v7 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C2D6DC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v7,
    (const MethodInfo_382F45C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v8) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v12 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C2D6DC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v12,
      (const MethodInfo_382F45C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v13 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C2D6DC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v13,
      (const MethodInfo_382F45C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v16 = entity;
    if ( !entity )
      goto LABEL_29;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_29;
    max_length = groupIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v19 = 0;
      v20 = (unsigned int)max_length;
      while ( 1 )
      {
        v21 = v16->fields.groupIds;
        if ( !v21 )
          goto LABEL_29;
        if ( v19 >= LODWORD(v21->max_length) )
          sub_1C2D6F4(Instance, v10, v14);
        v22 = v21->m_Items[v19];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v22, v15);
        if ( !MasterData_object )
          goto LABEL_29;
        v25 = GoalRate;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     (EventRaceResultMaster_o *)MasterData_object,
                                     &v52,
                                     eventId,
                                     termId,
                                     v22,
                                     v23);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v52 )
            goto LABEL_29;
          EventRaceMaster_GroupRankData___ctor(&v51, v22, v25, v52->fields.endedAt, v26);
          if ( v51.fields.isGoal )
          {
            if ( !v12 )
              goto LABEL_29;
            v30 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v53 = v51;
            items = v12->fields._items;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v12->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v33 = *(_OWORD *)&v53.fields.groupId;
              goalTime = v53.fields.goalTime;
              v35 = *(_QWORD *)(v30[4] + 192LL);
              v36 = v12;
              goto LABEL_26;
            }
            v12->fields._size = size + 1;
          }
          else
          {
            if ( !v13 )
              goto LABEL_29;
            v27 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v53 = v51;
            items = v13->fields._items;
            ++v13->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v13->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v33 = *(_OWORD *)&v53.fields.groupId;
              goalTime = v53.fields.goalTime;
              v35 = *(_QWORD *)(v27[4] + 192LL);
              v36 = v13;
LABEL_26:
              v37 = *(const MethodInfo_382FD5C **)(v35 + 112);
              *(_OWORD *)&v54.fields.groupId = v33;
              v54.fields.goalTime = goalTime;
              System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddWithResize(v36, &v54, v37);
              goto LABEL_27;
            }
            v13->fields._size = size + 1;
          }
          v31 = *(_OWORD *)&v53.fields.groupId;
          v32 = (char *)items + 24 * size;
          *((_QWORD *)v32 + 6) = v53.fields.goalTime;
          *((_OWORD *)v32 + 2) = v31;
        }
LABEL_27:
        if ( v20 == ++v19 )
          break;
        v16 = entity;
        if ( !entity )
          goto LABEL_29;
      }
    }
    if ( !v12 )
      goto LABEL_29;
    if ( v12->fields._size >= 2 )
    {
      v38 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v38 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_0 = v38->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = EventRaceMaster___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v38->static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1C2D6DC(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v40,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          0);
        static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = _9__10_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v42, v43);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_58923968(
        v12,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_3831BC0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v13 )
      goto LABEL_29;
    if ( v13->fields._size >= 2 )
    {
      v44 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v44 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_1 = v44->static_fields->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = EventRaceMaster___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v44->static_fields->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1C2D6DC(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v46,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          0);
        v47 = EventRaceMaster___c_TypeInfo->static_fields;
        v47->__9__10_1 = _9__10_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v47->__9__10_1, (int32_t)_9__10_1, v48, v49);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_58923968(
        v13,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_3831BC0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v7 )
LABEL_29:
      sub_1C2D6EC(Instance, v10);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_382FFE0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_382FFE0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
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
  if ( (byte_4C27389 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27389 = 1;
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

  if ( (byte_4C2738A & 1) == 0 )
  {
    sub_1C2D490(&EventRaceMaster___c_TypeInfo);
    byte_4C2738A = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaceMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventRaceMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_64972752((int64_t)&a->fields.goalTime, b->fields.goalTime, 0);
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_65053240(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}