void EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30AA5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
    byte_4D30AA5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D30AA3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
    byte_4D30AA3 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_34681D4 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
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
  __int64 v15; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D30AAA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AAA = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0
      || (Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                        (TotalEventRaceMaster_o *)Instance,
                                        eventId,
                                        termId,
                                        groupId,
                                        0),
          !entity)
      || (v15 = *(__int64 *)((char *)&qword_28 + (_QWORD)entity)) == 0 )
    {
LABEL_13:
      sub_1C93D2C(Instance, v9);
    }
    if ( v14 >= *(_DWORD *)(v15 + 24) )
      sub_1C93D34(Instance);
    return (float)(__int64)Instance / (float)*(__int64 *)(v15 + 8LL * v14 + 32);
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
  EventRaceResultEntity_o *v18; // [xsp+0h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D30AA8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AA8 = 1;
  }
  v18 = 0;
  entity = 0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
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
                                     &v18,
                                     eventId,
                                     termId,
                                     groupIds->m_Items[v15],
                                     v11);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v18 )
            break;
          if ( v18->fields.endedAt < nowTime )
            ++v14;
        }
        if ( v16 == v15 )
          return v14;
        if ( ++v15 >= (unsigned __int64)LODWORD(groupIds->max_length) )
          sub_1C93D34(Instance);
      }
LABEL_19:
      sub_1C93D2C(Instance, v10);
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
    sub_1C93D2C(v6, v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = eventId;
  if ( (byte_4D30AA6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    byte_4D30AA6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      if ( LODWORD(list->fields.items) == v3 )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v18[4] = *(Il2CppClass **)&eventId;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), eventId, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C93D2C(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x21
  Il2CppObject *v22; // x22
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int v30; // w22
  int32_t v31; // w21

  v5 = eventId;
  if ( (byte_4D30AAC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_EventRaceEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    sub_1C93AD4(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__);
    sub_1C93AD4(&EventRaceMaster___c_TypeInfo);
    byte_4D30AAC = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      if ( *((_DWORD *)list + 4) == v5 )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v20[4] = *(Il2CppClass **)&eventId;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), eventId, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_15;
    }
LABEL_29:
    sub_1C93D2C(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  list = EventRaceMaster___c_TypeInfo;
  if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
    list = EventRaceMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRaceMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_EventRaceMaster___c__GetTermIndex_b__11_0__, 0);
    static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)v21;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v9 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_59225184(
    v9,
    v21,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  v30 = v9->fields._size;
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v9,
               v31,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      if ( *((_DWORD *)list + 5) == termId )
        return v31;
      if ( v30 == ++v31 )
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
  const MethodInfo *v13; // x5
  int64_t v14; // x22
  unsigned __int64 v15; // x24
  EventRaceResultEntity_o *v17; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D30AA7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AA7 = 1;
  }
  entity = 0;
  v17 = 0;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
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
    v14 = Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= *(unsigned int *)(v10 + 24) )
        sub_1C93D34(Instance);
      if ( !v11 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v11, &v17, eventId, termId, *(_DWORD *)(v10 + 32 + 4 * v15), v13);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v17 )
        break;
      if ( v17->fields.endedAt > v14 )
        return 0;
      if ( (unsigned int)v12 == ++v15 )
        return 1;
    }
LABEL_20:
    sub_1C93D2C(Instance, v9);
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
  __int64 v17; // x8
  float v18; // s0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D30AA9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AA9 = 1;
  }
  entity = 0;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (v11 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity)) == 0 )
  {
LABEL_19:
    sub_1C93D2C(Instance, v10);
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
    v17 = *(__int64 *)((char *)&qword_28 + (_QWORD)entity);
    if ( !v17 )
      goto LABEL_19;
    if ( v14 >= *(unsigned int *)(v17 + 24) )
      goto LABEL_16;
    v18 = (float)(__int64)Instance / (float)*(__int64 *)(v17 + 8 * v14 + 32);
    if ( v15 == v14 || v16 < v18 )
      return v16 < v18;
    if ( ++v14 >= *(unsigned int *)(v11 + 24) )
LABEL_16:
      sub_1C93D34(Instance);
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

  if ( (byte_4D30AA4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
    byte_4D30AA4 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
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
  const MethodInfo *v14; // x4
  EventRaceEntity_o *v15; // x8
  struct System_Int32_array *groupIds; // x9
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v18; // x27
  __int64 v19; // x28
  struct System_Int32_array *v20; // x8
  int32_t v21; // w26
  const MethodInfo *v22; // x5
  float GoalRate; // s0
  float v24; // s8
  const MethodInfo *v25; // x3
  _QWORD *v26; // x10
  struct EventRaceMaster_GroupRankData_array *items; // x8
  __int64 size; // x9
  _QWORD *v29; // x10
  __int128 v30; // q0
  char *v31; // x8
  __int128 v32; // q0
  int64_t goalTime; // x9
  __int64 v34; // x8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v35; // x0
  const MethodInfo_391D5F0 *v36; // x2
  EventRaceMaster___c_c *v37; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v39; // x23
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  EventRaceMaster___c_c *v47; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v49; // x23
  struct EventRaceMaster___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  EventRaceMaster_GroupRankData_o v58; // [xsp+20h] [xbp-D0h] BYREF
  EventRaceResultEntity_o *v59; // [xsp+38h] [xbp-B8h] BYREF
  EventRaceMaster_GroupRankData_o v60; // [xsp+40h] [xbp-B0h]
  EventRaceMaster_GroupRankData_o v61; // [xsp+60h] [xbp-90h] BYREF
  EventRaceEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4D30AAB & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__);
    sub_1C93AD4(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__);
    sub_1C93AD4(&EventRaceMaster___c_TypeInfo);
    byte_4D30AAB = 1;
  }
  entity = 0;
  v59 = 0;
  memset(&v58, 0, sizeof(v58));
  v7 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C93D20(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v7,
    (const MethodInfo_391CCF0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v8) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v12 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C93D20(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v12,
      (const MethodInfo_391CCF0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v13 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1C93D20(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v13,
      (const MethodInfo_391CCF0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v15 = entity;
    if ( !entity )
      goto LABEL_29;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_29;
    max_length = groupIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v18 = 0;
      v19 = (unsigned int)max_length;
      while ( 1 )
      {
        v20 = v15->fields.groupIds;
        if ( !v20 )
          goto LABEL_29;
        if ( v18 >= LODWORD(v20->max_length) )
          sub_1C93D34(Instance);
        v21 = v20->m_Items[v18];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v21, v14);
        if ( !MasterData_object )
          goto LABEL_29;
        v24 = GoalRate;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     (EventRaceResultMaster_o *)MasterData_object,
                                     &v59,
                                     eventId,
                                     termId,
                                     v21,
                                     v22);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v59 )
            goto LABEL_29;
          EventRaceMaster_GroupRankData___ctor(&v58, v21, v24, v59->fields.endedAt, v25);
          if ( v58.fields.isGoal )
          {
            if ( !v12 )
              goto LABEL_29;
            v29 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v60 = v58;
            items = v12->fields._items;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v12->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v32 = *(_OWORD *)&v60.fields.groupId;
              goalTime = v60.fields.goalTime;
              v34 = *(_QWORD *)(v29[4] + 192LL);
              v35 = v12;
              goto LABEL_26;
            }
            v12->fields._size = size + 1;
          }
          else
          {
            if ( !v13 )
              goto LABEL_29;
            v26 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v60 = v58;
            items = v13->fields._items;
            ++v13->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v13->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v32 = *(_OWORD *)&v60.fields.groupId;
              goalTime = v60.fields.goalTime;
              v34 = *(_QWORD *)(v26[4] + 192LL);
              v35 = v13;
LABEL_26:
              v36 = *(const MethodInfo_391D5F0 **)(v34 + 112);
              *(_OWORD *)&v61.fields.groupId = v32;
              v61.fields.goalTime = goalTime;
              System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddWithResize(v35, &v61, v36);
              goto LABEL_27;
            }
            v13->fields._size = size + 1;
          }
          v30 = *(_OWORD *)&v60.fields.groupId;
          v31 = (char *)items + 24 * size;
          *((_QWORD *)v31 + 6) = v60.fields.goalTime;
          *((_OWORD *)v31 + 2) = v30;
        }
LABEL_27:
        if ( v19 == ++v18 )
          break;
        v15 = entity;
        if ( !entity )
          goto LABEL_29;
      }
    }
    if ( !v12 )
      goto LABEL_29;
    if ( v12->fields._size >= 2 )
    {
      v37 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v37 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_0 = v37->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = EventRaceMaster___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v37->static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1C93D20(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v39,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          0);
        static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = _9__10_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
          (int32_t)_9__10_0,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_59896916(
        v12,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_391F454 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v13 )
      goto LABEL_29;
    if ( v13->fields._size >= 2 )
    {
      v47 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v47 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_1 = v47->static_fields->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = EventRaceMaster___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v47->static_fields->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1C93D20(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v49,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          0);
        v50 = EventRaceMaster___c_TypeInfo->static_fields;
        v50->__9__10_1 = _9__10_1;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v50->__9__10_1, (int32_t)_9__10_1, v51, v52, v53, v54, v55, v56);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_59896916(
        v13,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_391F454 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v7 )
LABEL_29:
      sub_1C93D2C(Instance, v10);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_391D874 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_391D874 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
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
  if ( (byte_4D30AAD & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30AAD = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30AAE & 1) == 0 )
  {
    sub_1C93AD4(&EventRaceMaster___c_TypeInfo);
    byte_4D30AAE = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaceMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventRaceMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_65938256((int64_t)&a->fields.goalTime, b->fields.goalTime, 0);
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_66018744(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}